          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf("Bersaglio inquadrato: <b<prociatto (giorno)>>.<b<<entrypoint_601>>>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf("Avete sconfitto <numeric arg0(1)> di questi nemici. Le mie\nanalisi rivelano un grado di abilità <string arg0>\ncontro questo tipo di avversari.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf("Non possiedo dati sufficienti relativi\na questo mostro.\n\n\nLe sue enormi dimensioni e l'aura\nsinistra indicano che non vi sono\nanalogie con altri mostri.[1]Dimmi di più[2-]Capito")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf("Confermo che il <r<pilastro di pietra>> sulla\nsua testa è lo stesso che in origine si\ntrovava nella <b<Terra dell'esilio>>.\n\nCalcolo che possiate infliggere danni\nal mostro forzando il pilastro al suo\ninterno.\n\nInnanzitutto, attaccate i suoi piedi\nappena possibile, per impedirgli di\nmuoversi.[1]Dimmi di più[2-]Mi basta")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("Confermo che il mostro non potrà\nmuoversi se distruggerete le dita\ndei suoi piedi.\n\nVi consiglio di usare i getti d'aria per\nspostarvi, piuttosto che inseguire il\nmostro alle sue spalle.[1]Dimmi di più[2-]Mi basta")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf("Appena riuscite a raggiungere i piedi\ndel mostro, distruggete le dita con\ndegli <g<attacchi rotanti>>.\n\nPotreste anche correre meno rischi\nutilizzando delle <y<bombe >>per attaccare\na distanza.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf("Non possiedo dati sufficienti su questo\nmostro.\n\n\nConfermo la comparsa di arti superiori\ne un aumento del potere demoniaco del\nmostro. [1]Dimmi di più[2-]Capito")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf("Posso confermare che la tecnica\nd'attacco del mostro è la stessa\ndell'ultimo incontro.\n\nNon serviranno misure speciali per\ndistruggere le dita dei piedi e delle\nmani e non importa l'ordine in cui\nvengono distrutte.[1]Dimmi di più[2-]Mi basta")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf("Probabilità che il macchinario costruito\nda Bado si riveli efficace: 100%.\n\n\nServirà a rallentare l'incedere del\nmostro e a farvi guadagnare del tempo.\n[1]Dimmi di più[2-]Mi basta")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf("Il macchinario di <b<Bado>> può essere\nspostato con \x0E\x02\x04\x02\xECD.\n\n\nSe il mostro è fuori dal vostro raggio\nvisivo, consiglierei di spostare il\nmacchinario per ottenere una nuova\nlinea di fuoco.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf("Piccola creatura che vive a <b<Oltrenuvola>>.\nDa quando <b<Morsego>> è diventato umano,\nla sua natura non cambia e non è più\naggressivo di notte.")
          	  case 1:
/*<296>*/ 		printf("Piccola creatura che vive a <b<Oltrenuvola>>.\nDi giorno ha un carattere docile, ma di\nnotte la sua natura cambia e occorre\nessere prudenti.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf("Nonostante le scarse informazioni,\nquesto è il vessillo di <b<Mortipher>>.\n\n\nConfermo la comparsa di una coda.\nConsiglierei di usare il macchinario\ncostruito da <b<Bado>> con attenzione.[1]Dimmi di più[2-]Capito")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("Posso confermare che la tecnica\nd'attacco del mostro è la stessa\ndell'ultimo incontro.\n\nNon serviranno misure speciali per\ndistruggere le dita dei piedi e delle\nmani e non importa l'ordine in cui\nvengono distrutte.[1]Dimmi di più[2-]Mi basta")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf("Una volta atterrato il mostro, la sua mole\npotrebbe impedirvi di raggiungere\nil <r<pilastro di pietra >>sulla sua testa.\n\nIn questo caso, vi converrebbe scendere\nal livello inferiore e utilizzare i getti\nd'aria per raggiungere il mostro.[1]Dimmi di più[2-]Mi basta")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf("Il mostro si è evoluto in una forma\npotentissima e non vi è alcuna\nprobabilità di poterlo sconfiggere\ncon la sola spada.\nConsiglierei di utilizzare il\nmacchinario di Bado. In caso\ndi emergenza, potete utilizzarlo\nper <r<farvi lanciare >><r<voi stesso>>.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf("L'aspetto esteriore è cambiato per\nil 90% rispetto al precedente incontro.\nRilevo un'aura oscura irradiarsi dal\nsuo corpo.\nConfermo che lo stile di combattimento\ndi Ghiraim è cambiato a causa del\nquantitativo di danni che ha subito.[1]Dimmi di più[2-]Capito")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf("Sembra che colpire il <r<punto debole\nmostratosi sul petto di Ghiraim >>nel\nprecedente attacco sia la tattica\nmigliore.\nProbabilità che gli attacchi effettuati\nin condizioni normali vengano\nbloccati: 100%.[1]Dimmi di più[2-]Mi basta")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf("\x0E\x01\x12\x04\x00\x02Mio signore, consiglierei di respingere\nla spada che Ghiraim usa per\nproteggere il <r<punto debole sul\nsuo petto>>.\nRaccomanderei di attaccare ogni volta\nche il punto debole di Ghiraim è\nesposto.[1]Dimmi di più[2-]Mi basta")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf("I miei dati rivelano che non è possibile\nrespingere la spada di Ghiraim con un\nattacco.\n\nCalcolo che sarà possibile farlo solo\n<r<attaccando nella stessa direzione>>\nper diverse volte.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf("Piccola creatura che vive a <b<Oltrenuvola>>.\nDa quando <b<Morsego>> è diventato umano,\nla sua natura non cambia e non è più\naggressivo di notte.")
          	  case 1:
/*<300>*/ 		printf("Di giorno è amichevole e docile, ma di\nnotte la sua natura cambia: tenderà\nad attaccarvi. È pericoloso fidarsi\ndelle apparenze.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf("Essere imperituro dei tempi remoti.\nÈ la fonte di tutti i mostri.\n\n\nDa sempre si racconta che appaia a\nciascuno in una forma diversa e che\nsia cambiato nel corso del tempo.[1]Dimmi di più[2-]Capito")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf("Ormai è chiaro che qui non potete\nusare il <r<potere celeste>>, poiché questo\nluogo è sotto l'influsso magico di\nMortipher.\nNon potete eseguire attacchi basati sul\n<r<potere celeste>>.[1]Dimmi di più[2-]Mi basta")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf("Non vi sono probabilità che i vostri\nattacchi convenzionali colpiscano\nMortipher, \x0E\x01\x12\x04\x00\x02mio signore.\n\nDovrete eseguire attacchi che superino\nle difese del nemico, come <r<ripetuti\ncolpi portati da angolature diverse>>.\n[1]Dimmi di più[2-]Mi basta")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf("I risultati della mia analisi confermano\nche potrete colpire Mortipher quando\neleva la sua spada verso l'alto.\nTuttavia, dovrete restare all'erta.\n<pause0F>Probabilità che ogni attacco sferrato\nnelle vicinanze della spada di\nMortipher venga bloccato: 100%.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf("L'unica arma in grado di infliggere\ndanni a Mortipher è la <y<spada suprema>>.\nNessun'altra arma può farlo.\n[1]Dimmi di più[2-]Mi basta")
/*<150>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_151
          				  case 1:
          				}
          			  case 2:
          				goto flw_147
          			  case 3:
          				goto flw_147
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_690() {
/*<133>*/ 	start()
/*<134>*/ 	printf("L'aspetto esteriore è cambiato per\nil 90% rispetto al precedente incontro.\nRilevo un'aura oscura irradiarsi dal\nsuo corpo.\nConfermo l'impiego di una nuova\narma.[1]Dimmi di più[2-]Capito")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf("I dati in mio possesso confermano che\n<r<potete spezzare>> la spada di Ghiraim\nusando la vostra, \x0E\x01\x12\x04\x00\x02mio signore.\n\nSuppongo che sia la magia di Ghiraim a\ndare vita alla spada.\n\n\nSe l'avversario è ferito gravemente, la\nsua spada diventa più fragile.\n[1]Dimmi di più[2-]Mi basta")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf("La parte centrale della spada di\nGhiraim emette lo stesso tipo di\nsegnale <r<che proviene dal suo petto>>.\n\nProbabilità che la spada si disintegri\n<r<distruggendone il nucleo>>: 100%.\n\n\nRaccomanderei di osservare con\nattenzione i movimenti della spada e di\ncolpire ripetutamente lo <r<stesso punto>>.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf("Essere imperituro dei tempi remoti.\nÈ la fonte di tutti i mostri.\n\n\nDa sempre si racconta che appaia a\nciascuno in una forma diversa e che\nsia cambiato nel corso del tempo.[1]Dimmi di più[2-]Capito")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf("Ormai è chiaro che qui non potete\nusare il <r<potere celeste>>, poiché questo\nluogo è sotto l'influsso magico di\nMortipher.\nNon potete eseguire attacchi basati sul\n<r<potere celeste>>.[1]Dimmi di più[2-]Mi basta")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf("\x0E\x01\x12\x04\x00\x02Mio signore, i dati dimostrano che\npotreste adoperare la stessa energia\nutilizzata da Mortipher.[1]Dimmi di più[2-]Mi basta")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf("Nella <y<spada suprema>> potete\nconcentrare l'energia del fulmine\n<r<invece del potere celeste>>.\n\nQuando il fulmine cade in lontananza\ne un lampo illumina il cielo, elevate la\nvostra spada verso l'alto per ottenere\nl'energia.\nTuttavia, sappiate che potreste perdere\ni sensi se non eseguite il tutto nella\nmaniera corretta, restando così esposto\nagli attacchi di Mortipher.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf("Posso confermare che Mortipher è in\ngrado di immagazzinare la potenza del\nfulmine nella sua spada.\n\n\x0E\x01\x12\x04\x00\x02Mio signore, subirete dei danni se\nentrerete in contatto con la sua spada\nelettrificata. <pause0F>Attaccare con il giusto\ntempismo è fondamentale.[1]Dimmi di più[2-]Capito")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_154
          			  case 2:
          				goto flw_154
          			  case 3:
          				goto flw_154
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_605() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("Parassita attaccato a <b<Narisha>>, noto\ncome parassita gigante. È un mostro\nterribile, può controllare la mente e il\ncorpo dell'ospite. [1]Dimmi di più[2-]Capito")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf("Secondo la mia analisi, i proiettili\nsputati da <b<Drosera >>possono essere\n<r<respinti >>con la spada, \x0E\x01\x12\x04\x00\x02mio signore.\n\nCalcolo che, se deviati contro la stessa\nDrosera, i proiettili possono causarle\ningenti danni.\n[1]Dimmi di più[2-]Mi basta")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf("Dall'analisi risulta che il punto debole\ndi questo mostro è l'<r<occhio>>.\n\n\nTuttavia, ogni attacco all'<r<occhio >>è\ninefficace finché le <r<alette >>laterali\ndella testa restano aperte.\n[1]Dimmi di più[2-]Mi basta")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("La direzione del colpo di spada è\nmolto importante quando respingete\ni proiettili di Drosera.\n\nColpite con la spada verso destra o\nverso sinistra per respingere i\nproiettili nella rispettiva direzione.\n\n<pause0F>Colpite verso l'alto o verso il basso per\nuna traiettoria rettilinea.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\n\nMentre premete (Z) per inquadrare il bersaglio,\npremete (v) per evocarmi. Vi riferirò quanto ho\nscoperto.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Volete saperlo adesso? [1]Sì[2-]No")
/*<166>*/ 	story_flags[772 /* us: 805A9B2A 0x10, jp: 805ACDAA 0x10 */] = true;
/*<167>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_69:
/*< 69>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 56>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 46}) {
          			  case 0:
/*<250>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf("Secondo i miei dati, i pugnali lanciati\nda Ghiraim vi raggiungeranno da\nqualsiasi direzione.\n\nPotreste deviarli con un solo colpo\ndi spada, ma non è un' impresa facile.\n[1]Dimmi di più[2-]Mi basta")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("Posso confermare che Ghiraim è in\ngrado di teletrasportarsi.\n\n\nUn'analisi più attenta mostra che\nGhiraim è vulnerabile dopo un\nteletrasporto. Quello è il momento\npropizio per attaccare.\nSappiate, però, che Ghiraim potrebbe\ndifendersi con la sua spada.[1]Dimmi di più[2-]Mi basta")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf("Ghiraim continuerà a superarvi, \x0E\x01\x12\x04\x00\x02mio\nsignore. Consiglierei di <r<affrontarlo>> con\nla spada appena questi attacca.\n\nProbabilità che egli riveli la direzione\nin cui si muoverà appena prima di\nattaccare: 100%.\n\n\x0E\x01\x12\x04\x00\x02Mio signore, se non riuscite a colpire\ncon il giusto tempismo, consiglierei\ndi eseguire un <g<attacco rotante>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf("Posso confermare che lo stile di\ncombattimento di Ghiraim è cambiato\ndall'inizio della battaglia.\n\nReputo che ciò sia dovuto al\nquantitativo di danni che ha subito.[1]Dimmi di più[2-]Capito")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_53
          			  case 2:
          				goto flw_53
          			  case 3:
          				goto flw_53
          			}
          		  case 1:
/*< 63>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 54}) {
          			  case 0:
/*<249>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_62:
/*< 62>*/ 					printf("Confermo che egli ha piena fiducia\nnelle proprie capacità. Consiglierei\ndi attaccare ripetutamente con la\nspada quando la sua guardia è bassa.\nFate attenzione alla mano destra di\nGhiraim. <r<Egli la muoverà come per\ncercare la vostra spada>>, \x0E\x01\x12\x04\x00\x02mio signore.[1]Dimmi di più[2-]Mi basta")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf("Nel caso in cui egli afferri la vostra\nspada, consiglierei di agitare la\nstessa nella <r<direzione dell'apertura\ndelle dita di Ghiraim>>.[1]Dimmi di più[2-]Mi basta")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf("I risultati della mia analisi mostrano\nche le dita di Ghiraim puntano sempre\nverso l'alto quando afferrano la vostra\nspada, \x0E\x01\x12\x04\x00\x01mio signore.\nProbabilità di sfuggire alla presa di\nGhiraim <r<portando la spada verso\nl'alto>>: 100%.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf("Confermo che egli ha piena fiducia\nnelle proprie capacità. Consiglierei\ndi attaccare ripetutamente con la\nspada quando la sua guardia è bassa.\nFate attenzione alla mano destra di\nGhiraim. <r<Egli la muoverà come per\ncercare la vostra spada>>, \x0E\x01\x12\x04\x00\x02mio signore.[1]Dimmi di più[2-]Mi basta")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_62
          			  case 2:
          				goto flw_62
          			  case 3:
          				goto flw_62
          			}
          		}
          	  case 1:
/*<168>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore. Evocatemi se\ndesiderate verificare le mie scoperte.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\n\nMentre premete (Z) per inquadrare il bersaglio,\npremete (v) per evocarmi. Vi riferirò quanto ho\nscoperto.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Volete saperlo adesso? [1]Sì[2-]No")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("Non vi sono probabilità di penetrare lo\nstrato di roccia con la spada.\n\n\nConsiglierei di utilizzare strumenti\ndall'alto potere distruttivo. [1]Dimmi di più[2-]Mi basta")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf("Probabilità che Occhio di fuoco esploda\nentrando a contatto con una <y<bomba>>,\ndato l'elevatissimo calore del suo\ncorpo: 100%.\nTuttavia, attacchi alla superficie\nesterna di Occhio di fuoco lo\nrenderanno più attivo. È necessario\nlocalizzare un punto debole. [1]Dimmi di più[2-]Mi basta")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf("Dalla mia analisi risulta che dovrete\ncausare a Occhio di fuoco danni\ninterni per rimuovere la superficie\nesterna di rocce.\nSuggerisco di <r<lanciare una bomba nella\nbocca del mostro>>.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore. Evocatemi se\ndesiderate verificare le mie scoperte.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\n\nMentre premete (Z) per inquadrare il bersaglio,\npremete (v) per evocarmi. Vi riferirò quanto ho\nscoperto.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Volete saperlo adesso? [1]Sì[2-]No")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf("Cercate di colpire i suoi <r<punti deboli\n>>nelle chele, ma prestate attenzione a\nportare gli attacchi con la giusta\nangolazione affinché siano efficaci.[1]Dimmi di più[2-]Mi basta")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf("Ha la tendenza a insabbiarsi se subisce\nmolti danni.\n\n\nProbabilità che attacchi usando la coda\nquando si trova sotto la sabbia: 85%.\n\n\nConsiglierei di <r<soffiare via >>la sabbia\nche Skorpyo usa per nascondersi.\n[1]Dimmi di più[2-]Mi basta")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf("La mia analisi rivela che il suo <r<occhio\ncentrale>> verrà esposto dopo aver\ndistrutto le chele.\n\nProbabilità che sia quello il suo vero\npunto debole: 100%.\n\n\nTuttavia, a giudicare dal carapace che\ncirconda l'<r<occhio centrale>>, desumo che\nattacchi orizzontali, verticali e\ndiagonali siano inefficaci.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore. Evocatemi se\ndesiderate verificare le mie scoperte.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf("Come si deduce dal suo altro nome\n\x201CAntica creatura marina\", è un mostro\nche regnava tra i mari in antichità.\n\nI suoi <r<grossi tentacoli >>possono essere\nrecisi, ma ricrescono in breve tempo.[1]Dimmi di più[2-]Capito")
/*< 45>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_268:
/*<268>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<262>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 226}) {
          			  case 0:
/*<269>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_261:
/*<261>*/ 					printf("Per colpire il punto debole di\nMeduclope, il suo <r<occhio>>, dovrete\nprima occuparvi dei tentacoli coi quali\ncerca di afferrarvi.\nDalla mia analisi risulta che potete\nrecidere i tentacoli con la spada.\n[1]Dimmi di più[2-]Mi basta")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf("Poiché i tentacoli attaccano senza posa,\nsconsiglierei di reciderli uno alla volta.\n\n\nSecondo i miei dati, potete reciderne\ndiversi in un colpo solo eseguendo in\ntempo l'attacco appropriato.\n[1]Dimmi di più[2-]Mi basta")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf("Dai tentacoli recisi potreste ottenere\n<r<cuori >>e <r<frecce>>.\n\n\nSe la vostra energia è ridotta o non\navete abbastanza frecce, consiglierei\ndi evitare la fuga e concentrare gli\nattacchi sui tentacoli.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          				}
          			  case 1:
          				goto flw_261
          			  case 2:
          				goto flw_261
          			  case 3:
          				goto flw_261
          			}
          		  case 1:
/*< 46>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 36}) {
          			  case 0:
/*<248>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_43:
/*< 43>*/ 					printf("Dai miei dati risulta che si mostrerà\nnella sua vera forma quando avrete\nreciso un certo numero di tentacoli.\n\nProbabilità che i tentacoli che vi\nimpedivano di procedere\nappartenessero a Meduclope: 99%.\n\nCalcolo che il <r<potere sacro >>sia molto\nefficace per recidere i tentacoli.[1]Dimmi di più[2-]Mi basta")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("Confermo che potete recidere i\ntentacoli con il <r<potere celeste>>.\n\n\nSappiate che l'<r<occhio >>è il suo punto\ndebole, ma non vi sono probabilità\ndi poterlo colpire con il <r<potere celeste>>.\n\nConsiglierei di utilizzare un'arma a\nlungo raggio.[1]Dimmi di più[2-]Mi basta")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf("Per colpire il suo occhio, l'<r<arco >>è l'arma\npiù efficace.\n\n\nPotete muovervi inclinando \x0E\x02\x04\x02\x8CD mentre\ntendete l'<r<arco>>. Consiglierei di scoccare\nla freccia dopo l'attacco di Meduclope.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          				}
          			  case 1:
          				goto flw_43
          			  case 2:
          				goto flw_43
          			  case 3:
          				goto flw_43
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_660() {
/*<179>*/ 	start()
/*<180>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf("Calcolo che le braccia di Malgare si\nneutralizzeranno se disconnetterete i\n<r<nuclei sferici rossi >>sotto l'armatura.\n\nProbabilità che i nuclei siano nascosti\nal di sotto dell'armatura degli\navambracci: 100%.[1]Dimmi di più[2-]Mi basta")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf("I risultati della mia analisi mostrano\nche i <r<nuclei sferici rossi>> delle braccia\ndi Malgare sono visibili solo quando\ngli arti vengono distesi al massimo.\nRaccomanderei un rapido contrattacco\nal momento opportuno.[1]Dimmi di più[2-]Mi basta")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf("Secondo i miei calcoli, potete rimuovere\ni <r<nuclei sferici rossi >>grazie alla <y<frusta>>.\n\n\nIl momento opportuno per attaccare il\n<r<nucleo rosso nel busto>> è quello in cui\nMalgare abbassa le braccia.\n\nTuttavia, inquadrando il nucleo,\nnoterete che non è possibile utilizzare\nla <y<frusta >>per rimuoverlo.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf("Uno <b<skopyotto >>cresciuto per 1000 anni,\nnoto come Crostaceo millenario.\n\n\nOltre il 90% del suo corpo è protetto da\nun duro carapace che rende inefficaci\ngli attacchi con la spada.[1]Dimmi di più[2-]Capito")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<191>*/ 	story_flags[777 /* us: 805A9B2D 0x02, jp: 805ACDAD 0x02 */] = true;
/*<192>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_87:
/*< 87>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 74>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 66}) {
          			  case 0:
/*<252>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_71:
/*< 71>*/ 					printf("Quando Ghiraim lancia i pugnali,\nrespingeteli muovendo la spada nella\nstessa angolazione in cui sono stati\nlanciati.\nQuando siete circondato da pugnali,\nconsiglierei di usare una <r<tecnica con la\nspada che consenta di attaccare in ogni\ndirezione>>.[1]Dimmi di più[2-]Mi basta")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf("Vi sono molte probabilità di eseguire\nun contrattacco se eviterete l'attacco\ndi Ghiraim dall'alto dopo che si è\nteletrasportato.\nEgli può spostarsi in diversi punti, ma\nassume una postura diversa quando si\nteletrasporta sopra di voi piuttosto che\naltrove.[1]Dimmi di più[2-]Mi basta")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf("Confermo che Ghiraim si difenderà\ndai vostri attacchi con una delle sue\ndue spade, \x0E\x01\x12\x04\x00\x01mio signore.\n\nProbabilità che i vostri attacchi siano\ninefficaci contro le due spade del\nvostro avversario: 100%.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf("Posso confermare che lo stile di\ncombattimento di Ghiraim è cambiato\ndall'inizio della battaglia.\n\nReputo che ciò sia dovuto al\nquantitativo di danni che ha subito.[1]Dimmi di più[2-]Capito")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_71
          			  case 2:
          				goto flw_71
          			  case 3:
          				goto flw_71
          			}
          		  case 1:
/*< 81>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 74}) {
          			  case 0:
/*<251>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					printf("I miei dati rilevano che i pugnali che\nappaiono intorno a Ghiraim sono una\nmisura difensiva.\n\nConsiglierei di occuparvi prima dei\npugnali per abbassare le difese di\nGhiraim.[1]Dimmi di più[2-]Mi basta")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf("Deduco che Ghiraim cercherà di\nafferrarvi la spada con la mano destra,\n\x0E\x01\x12\x04\x00\x02mio signore.\n\nSe ciò si verifica, <r<agitate la spada verso\nl'alto e verso il basso >>per costringerlo a\nlasciarla. Tuttavia, rilevo che il vostro\navversario adopera sempre più potere.\nProbabilità che non lascerà la spada\ndopo un solo tentativo: 100%.[1]Dimmi di più[2-]Mi basta")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf("Ritengo che un attacco efficace debba\nessere portato da un'angolazione da cui\ni pugnali o la mano destra di Ghiraim\nnon possano bloccare la vostra spada.\n\x0E\x01\x12\x04\x00\x02Mio signore, il nemico cercherà di\nintercettare l'attacco con la mano,\nma <r<potrebbe essere troppo lento>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          				}
          			  case 1:
          				goto flw_80
          			  case 2:
          				goto flw_80
          			  case 3:
          				goto flw_80
          			}
          		}
          	  case 1:
/*<193>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf("Mostruoso aracnide che vive nel\nprofondo della foresta. La sua tela è\naltamente appiccicosa e impedisce alle\nvittime di muoversi.\nIl suo punto debole è l'addome, poiché\nil dorso è protetto da un solido\ncarapace.[1]Dimmi di più[2-]Capito")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf("Confermata la tendenza a mostrare\nil dorso in caso di attacco, al fine\ndi proteggere il suo punto debole.\n\nPer attaccare il suo punto debole\noccorre farle esporre l'addome.\n[1]Dimmi di più[2-]Mi basta")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf("L'unico punto debole risulta essere la\nparte centrale dell'addome, il resto è\nestremamente duro. Il <g<colpo di grazia>>\nsi rileverà una tecnica efficace.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf("Avete sconfitto <numeric arg0(1)> di questi nemici. Le mie\nanalisi rivelano un grado di abilità <string arg0>\ncontro questo tipo di avversari.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf("Confermata la tendenza a mostrare\nil dorso in caso di attacco, al fine\ndi proteggere il suo punto debole.\n\nPer attaccare il suo punto debole\noccorre farle esporre l'addome.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf("Mostruoso aracnide che vive nel\nprofondo della foresta. La sua tela è\naltamente appiccicosa e impedisce alle\nvittime di muoversi.\nIl suo punto debole è l'addome, poiché\nil dorso è protetto da un solido\ncarapace.\n\nContinuo l'analisi dei suoi movimenti\nin cerca di ulteriori informazioni.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf("Sembra estremamente potente grazie\nalla malefica energia conferitagli da\nGhiraim.\n\nCerca in ogni modo di mantenere la sua\nattuale forma grazie ai <r<nuclei sferici\nrossi >>nel suo busto e nelle braccia.[1]Dimmi di più[2-]Capito")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf("Il suo corpo è rivestito da roccia che\nprotegge il suo punto debole: l'<r<occhio>>.\n\n\nVi sono più probabilità di sconfiggerlo\nrimuovendo lo strato di roccia. [1]Dimmi di più[2-]Capito")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf("Non sono in possesso di molti dati su\ncostui. Si definisce il <b<patriarca dei maghi>>.\n\n\nRilevo un'aura potente e malvagia e le\nsue abilità sono notevoli. Tuttavia, la\nmia analisi mostra che egli deve ancora\nrivelare il suo vero potere.[1]Dimmi di più[2-]Capito")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf("È il signore dei mostri, il <b<patriarca dei\nmaghi>>. Posso confermarne la\nsuperiorità fisica e mentale e una\nnotevole maestria nell'usare la magia.\nSebbene abbia i modi di un gentiluomo,\nse adirato cambierà completamente\natteggiamento.[1]Dimmi di più[2-]Capito")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf("Ho qualcosa da segnalarvi, \x0E\x01\x12\x04\x00\x0Bmio signore\nLink. Ho completato la mia analisi sui\nmovimenti del vostro avversario.\nVolete conoscerne i risultati? [1]Sì[2-]No")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf("Sta sfruttando tutto il suo potere,\nconfermo un incremento della potenza\nmuscolare. Rilevo che tutte le vostre\narmi sono inefficaci contro di lui.[1]Dimmi di più[2-]Mi basta")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf("I dati dimostrano che i vostri attacchi\ncon la spada <r<possono far indietreggiare>>\nlievemente Ghiraim. [1]Dimmi di più[2-]Mi basta")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf("Confermo che il comportamento di\nGhiraim fa supporre che intenda\nentrare nella stessa area in cui vi\ntrovate voi,\x0E\x01\x12\x04\x00\x02 mio signore.\nProbabilità che questo comportamento\nsia imputabile al fatto che teme di\ncadere: 85%. [1]Dimmi di più[2-]Mi basta")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf("Probabilità che Ghiraim si <r<difenda a\nmani nude>> dalla vostra spada, come ha\ngià fatto in precedenza: 95%,\n\x0E\x01\x12\x04\x00\x02mio signore.\nÈ necessario prestare la massima\nattenzione alla <r<posizione delle mani>>\ndi Ghiraim, quando il suo aspetto\nsi modifica considerevolmente.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<253>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<288>*/ 				printf("Sta sfruttando tutto il suo potere,\nconfermo un incremento della potenza\nmuscolare. Rilevo che tutte le vostre\narmi sono inefficaci contro di lui.[1]Dimmi di più[2-]Mi basta")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf("I dati dimostrano che i vostri attacchi\ncon la spada <r<possono far indietreggiare>>\nlievemente Ghiraim. [1]Dimmi di più[2-]Mi basta")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("Confermo che il comportamento di\nGhiraim fa supporre che intenda\nentrare nella stessa area in cui vi\ntrovate voi,\x0E\x01\x12\x04\x00\x02 mio signore.\nProbabilità che questo comportamento\nsia imputabile al fatto che teme di\ncadere: 85%. [1]Dimmi di più[2-]Mi basta")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf("Al momento non possiedo altre\ninformazioni in merito.\n\n\nQuando ho informazioni da\ncomunicarvi, \x0E\x01\x12\x04\x00\x02mio signore, la spada\nlampeggia. Premete (v) per evocarmi.\x0E\x01\x11\x02\x9CD\n\nInoltre, se desiderate informazioni\nsull'equipaggiamento o sul luogo in\ncui vi trovate, selezionate <r<Analisi\ndella situazione>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf("L'aspetto esteriore è cambiato per il\n90% rispetto al precedente incontro.\nRilevo un'aura oscura irradiarsi\nda tutto il suo corpo.\nAttento, \x0E\x01\x12\x04\x00\x01mio signore. L'avversario è\nestremamente potente e in grado di\nsconfiggervi con un solo colpo se non\nuserete la dovuta cautela.[1]Dimmi di più[2-]Capito")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Ho condotto nuove analisi su\nMortipher, \x0E\x01\x12\x04\x00\x0Bmio signore. Volete\nconoscerne i risultati?[1]Sì[2-]No")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf("Ormai è chiaro che qui non potete\nusare il <r<potere celeste>>, poiché questo\nluogo è sotto l'influsso magico di\nMortipher.\nNon potete eseguire attacchi basati sul\n<r<potere celeste>>.[1]Dimmi di più[2-]Mi basta")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf("L'unica arma in grado di infliggere\ndanni a Mortipher è la <y<spada suprema>>.\nNessun'altra arma può farlo.\n[1]Dimmi di più[2-]Mi basta")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf("Inoltre, posso confermare che\nMortipher può concentrare l'energia\ndel fulmine nella spada.\n\n\x0E\x01\x12\x04\x00\x02Mio signore, subirete dei danni se\nentrerete in contatto con la sua spada\nelettrificata.[1]Dimmi di più[2-]Capito")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf("Avrò bisogno di più tempo per una\nanalisi più accurata.\n\n\nIn futuro, premete (Z) per inquadrare\nMortipher e (v) per evocarmi. Vi\nriferirò quanto ho scoperto.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          					  case 1:
          					}
          				  case 1:
          					goto flw_229
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
/*<223>*/ 		printf("Sì, mio signore. Se desiderate ascoltare\nla mia analisi, premete (v) per\nevocarmi mentre inquadrate un nemico\ntenendo premuto (Z).\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

