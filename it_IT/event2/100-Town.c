          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf("\x0E\x01\x09\x04\x00\x04Fai come vuoi, ma ricordati che la sera\nnon puoi volare!\n\n\nSe vuoi girare per il cielo, dovrai\naspettare il mattino...\nVai a letto!")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf("\x0E\x01\x09\x04\x00\x01Cosa ci fai in giro di sera?!\n\n\n\n\x0E\x01\x09\x04\x0C\xC09Che?! Spero proprio che tu non abbia\nintenzione di volare ora!\n\n\n\x0E\x01\x09\x04\x09\xC00I solcanubi non hanno una vista che gli\npermette di volare di notte! Solo quelli\naddestrati riescono a farlo!\n\n\x0E\x01\x09\x04\x08\x400Se vuoi volare, è meglio che aspetti\nche sia mattina! Se fai una bella\ndormita farà subito giorno! Spero\nche non sia troppo tardi per te.\n")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00Non restare qui a scuola, vai fuori a\ncercare il tuo solcanubi...\n\n\nIo farò qualche ricerca e se scopro\nqualcosa ti farò sapere subito!")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06Ehilà! Cosa ci fai ancora in giro\nper la scuola?!\n\n\n\x0E\x01\x09\x04\x0C\xC09Cosa?!<pause14> Hai chiamato a te il solcanubi\ne non è arrivato?!\n\n\n\x0E\x01\x09\x04\x01\xC00Un solcanubi guardiano che non\nrisponde al padrone... mmh...\n\n\nÈ la prima volta che sento una cosa\nsimile, non saprei dire come possa\naccadere...\n\n\x0E\x01\x09\x04\x08\x400Mmh... come studente più anziano\ndevo aiutarti in qualche modo...\n\n\n\x0E\x01\x09\x04\x0B\xC00Farò qualche ricerca per te, tu\nintanto vai in piazza e prova\na chiedere in giro!")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405Se hai qualche domanda sui solcanubi,\nchiedi pure a me!")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401Buongiorno, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x400Sei pronto per il <r<battesimo del volo\n>>di oggi?\n\n\nTutti gli altri sono nella piazza a\nesercitarsi, ma tu sembri piuttosto\nrilassato!\n\n\x0E\x01\x09\x04\x0B\x400Il tuo solcanubi è davvero un\nbell'esemplare di <r<carminio>>!\nAllo scorso battesimo del volo ho vinto\ncon il mio solcanubi...\nMa, onestamente, non credo che\nsarei stato in grado di battere il tuo!\n\n\n\x0E\x01\x09\x04\x08\x400Ogni giorno faccio ricerche in merito\nalla potenza dei solcanubi e alle\ncapacità dei loro cavalieri...\n\n\x0E\x01\x09\x04\x0C\x405Quindi quando hai qualche dubbio,\nnon esitare a venirmi a chiedere aiuto!")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<145>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<146>*/ 			printf("\x0E\x01\x09\x04\x00\x06Se cerchi <b<Sparvio>>, sarà davanti alla\n<r<palestra di scherma>>, dietro la scuola\nd'armi.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Come?\n<pause28> Vuoi sapere dove si trova <b<Bado>>?\n\n\n\x0E\x01\x09\x04\x00\xD00Sta di nuovo combinando qualcosa\nquello lì?!\n\n\n\x0E\x01\x09\x04\x0C\x400Non so come aiutarti, però magari\n<b<Sparvio >>può!\n\n\n\x0E\x01\x09\x04\x08\xE04A proposito, credo che <b<Sparvio >>stesse\nproprio cercando te\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nLo trovi davanti alla <r<palestra\ndi scherma>>!")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x08\xE06L'esperto di solcanubi\nè <b<Sparvio>>. L'ho visto prima al piano\ndi sotto, prova a chiedere a lui!")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDNon capisco perché debba occuparmi io di\naprire la porta, visto che è compito suo!\nUffa!")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406Oh, Link! Che succede?\nHai l'aria preoccupata.\n\n\n\x0E\x01\x09\x04\x08\xD00Che cosa?! <pause28>Il tuo <r<solcanubi>> è\nscomparso?!\n\n\n\x0E\x01\x09\x04\x0C\xD12Uhm\x0E\x01\x06\x02\xFCCD... \x0E\x01\x06\x02ÍSono stata dentro la scuola\nfinora, non ne so proprio nulla...")
/*<142>*/ 				printf("\x0E\x01\x09\x04\x08\xE06L'esperto di solcanubi\nè <b<Sparvio>>. L'ho visto prima al piano\ndi sotto, prova a chiedere a lui!")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf("\x0E\x01\x09\x04\x08\x900Se vincerai durante il <r<battesimo del\nvolo>>, saremo insieme nella<r< classe\nsuperiore>> per diventare cavalieri!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Buongiorno, Link!\nIn bocca al lupo per il <r<battesimo del\nvolo >>di oggi!\n\n\x0E\x01\x09\x04\x00\x400Se vincerai verrai promosso alla <r<classe\nsuperiore >>insieme a me e,\ndiplomandoti, potrai diventare\n<r<cavaliere>>.\n\x0E\x01\x09\x04\x08\x900Daranno anche a te una bellissima\n<r<uniforme da cavaliere>> come la mia!\nIh ih ih! Ti donerebbe, credo!\n\n\x0E\x01\x09\x04\x0B\x713Aah... quasi quanto dona a lui...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\x01Guarda questa statua... Non saprei dire\nda quanto tempo si trovi qui...\n\n\nHa solo un occhio, che pena, poverina!\n\n\n\nPuoi guardarla meglio premendo (C)! \x0E\x01\x11\x02\x6CD")
          }

          void entrypoint_100_30() {
/*<180>*/ 	start()
/*<181>*/ 	set_camera(30, 0)
/*<183>*/ 	set_camera(31, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<160>*/ 	start()
/*<165>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<166>*/ 		printf("\x0E\x01\x09\x04\x00\x04Uh\x2010uh!\nAnche per oggi una\nzuppa gustosissima!")
          	  case 1:
/*<161>*/ 		printf("\x0E\x01\x09\x04\x00\x02Quel ragazzino è incorreggibile!!!\nGli avevo anche detto che era quasi\npronto da mangiare!\n\nDove sarà finito?! Di certo a inseguire\nqualche insetto...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Ma che fai?!\nNon puoi riprendertela!\n\n\n\x0E\x01\x09\x04\x00\x1200Sono certa che hai\naltre cose da fare...\nSu, vai ora!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf("\x0E\x01\x09\x04\x08\x909 Link!\nGrazie a te sono\ndavvero felice!\n\nLui farà la ronda anche\noggi, anche se nessuno\ngli ha chiesto di farlo!\n\n\x0E\x01\x09\x04\x0E\x90AHa tutta la mia ammirazione!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Non so cosa fare con la lettera\ndi Ras...\n\n\n\x0E\x01\x09\x04\x0B\xE00Cosa potrebbe pensare Sparvio\nse lo venisse a sapere?!")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf("\x0E\x01\x09\x04\x08\xD57Vuoi parlarmi?!\nNon puoi aspettare fino\na domani?!")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf("\x0E\x01\x09\x04\n\xE57Ti pare il caso di stare\nnella stanza di una\nragazza a quest'ora di sera?!\n\nTra poco andrò a farmi\nun bagno, ti spiace\nandare via?!\n\n\x0E\x01\x09\x04\x0C\xE14Però la vasca è\noccupata da un bel pezzo,\nuffa.")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14Zelda è così brava\na volare, com'è possibile che \nsia caduta oltre il letto di nubi?!\n\n\x0E\x01\x09\x04\n\xD06Cosa?! È comparso\nanche un fantasma?! Mi sa che hai\nbattuto molto forte la testa...")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02Link!\x0E\x01\x0D\x02\x1906")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf("Se vai in piazza, esci dal piano terra!\nQuella è la via più rapida.\n\n\n\x0E\x01\x09\x04\x09\x400Inoltre, l'ingresso del piano superiore\nè ancora chiuso a chiave, non si può\npassare da lì.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Ma cosa sta combinando la vecchietta\ndella mensa? Più tardi andrò\na lamentarmi!")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Lascia che ti dia un consiglio...\n\n\n\nPrima di andare in posti pericolosi,\n<r<rivolgi una preghiera alla Dea e salva>>.\n\n\nPuoi vedere sulla mappa dove sono\ncollocati i <r<totem >>presso i quali puoi\nrivolgere le preghiere.")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <r<spada>>...\n \nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n\x0E\x01\x09\x04\x09\xC00Poco fa, ho visto entrare nella palestra\ndi scherma il <b<primo cavaliere>>. Potresti\nchiedere a lui di prestarti una spada!")
/*< 95>*/ 			scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          		}
          	  case 1:
/*<107>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 74, 'param3': 31}
/*< 74>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 199, 'param3': 32}
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 200, 'param3': 47}
/*<200>*/ 		set_camera(13, 0)
/*<201>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 16}
/*<202>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 72, 'param3': 48}
/*< 72>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x08\x401Link!\nStavo giusto cercando te!")
          			flw_73:
/*< 73>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ho saputo che il tuo solcanubi\nè scomparso! Ho provato a\nfare delle ricerche...\n\n\x0E\x01\x09\x04\x00\xC00Ne ho parlato con Gentirosso\ne gli ho fatto una marea\ndi domande...")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Scusa, Link!\n\n\n\n\x0E\x01\x09\x04\xC00\x800Volevo dirtelo prima, ma\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í se <b<Bado\n>>venisse a sapere che te l'ho detto...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\xC16<b<Bado >>si è assicurato\nche tutti stessero zitti...")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Forza...<pause23> Digli la verità!")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Poco fa ero in mensa a fare le pulizie\ne sono arrivati Bado e gli altri due...\n\n\n\x0E\x01\x09\x04\xC00\x800Non si sono accorti di me, e si\nconsultavano su come <r<nascondere\n>>il tuo solcanubi.\n\n\x0E\x01\x09\x04\xC00\x800Avevo pensato di avvertirti,\nma mentre lasciavo la\nmensa...\n\n\x0E\x01\x09\x04\xC01\xE00Mi hanno visto...\n\n\n\n\x0E\x01\x09\x04\xC07\xE00E mi hanno detto che se fossi venuto\na dirtelo, non me l'avrebbero fatta\npassare liscia...")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Fatto sta che <b<Bado >>e gli altri avevano\nintenzione di catturare il tuo solcanubi\ne nasconderlo vicino alla <r<<pling>cascata>>.\n\n\x0E\x01\x09\x04\x08\xC00Dunque, la cascata è\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Mmh... dammi un secondo la <r<mappa>>.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf("Guarda qui! \x0E\x02\x04\x02\x19CD indica dove si trova la\n<r<cascata>>, credo!")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x404Sai come consultare una mappa, vero?\nPremi \x0E\x02\x04\x02\x3CD per vedere dove ti trovi al\nmomento.\x0E\x01\x11\x02\x3CD\n\n\x0E\x01\x09\x04\x08\x400Quindi, quando ti senti confuso,\npremi \x0E\x02\x04\x02\x3CD!\x0E\x01\x11\x02\x3CD")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf("\x0E\x01\x09\x04\xC00\x819Perdonami, Link!\nSono davvero un fifone...\nperdonami!")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\xC01Link!\nAppena in tempo!")
/*<156>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_73
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 50>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 57>*/ 			printf("\x0E\x01\x09\x04\x00\x02Se si parla di solcanubi, <b<Sparvio >>ne sa\npiù di tutti!\nProva a chiedergli aiuto!\n\nLo conosci, no?\nLo trovi di certo alla scuola d'armi!")
          		  case 1:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04Cos'è successo, Link?<pause28>\n\n\n\n\x0E\x01\x09\x04\x00\x1100Cosa?! Il tuo solcanubi...<pause32>\nè scomparso\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í?\n\n\n\x0E\x01\x09\x04\x11\x1100Ma è terribile!\nNon vedevo l'ora di vederlo in azione!\nComunque, no, non l'ho visto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\n\x1100Però\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í quando si tratta di solcanubi\nil <r<più preparato in merito>>, su\nOltrenuvola, è di certo <b<<pling>Sparvio>>!\n\n\x0E\x01\x09\x04\x00\x700Prova a chiedergli una mano,\npotrebbe darti qualche buon\nconsiglio!")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf("\x0E\x01\x09\x04\n\x705Aspetto con ansia di\nvedere le prodezze del\ntuo solcanubi carminio!")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi Link! Tra poco\ncomincia il battesimo del volo!\n\n\nL'ultima volta ha vinto <b<Sparvio >>per un\npelo! Che spettacolo avvincente!\n\n\n\x0E\x01\x09\x04\n\x700Questa volta potrai farti valere tu,\ncon il tuo solcanubi carminio!\n<pause28>Non vedo l'ora!")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDEeeehii!\x0E\x01\x0D\x02\x1906\nLink!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf("\x0E\x01\x08\x02\x2CDDa questa parte!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍVieni qui, vorrei parlarti del tuo\nsolcanubi!!")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Stai parlando del tuo solcanubi?!\n\n\n\n\x0E\x01\x09\x04\x10\xE00Guardami, sono impegnatissima!!!\nParliamo dopo!")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tra poco c'è il <r<battesimo del volo>>,\nmi pare, no?!\nSmettila di girarti i pollici, va' subito!")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Perché <b<Gentirosso >>ci mette così tanto?\nGli avevo chiesto di portarmi\nqui una <r<botte>>, ma ancora\nnon si fa vedere...\n\x0E\x01\x09\x04\x10\xF00Che starà combinando?!")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Signore...\nSecondo i miei calcoli questa\nluce è un indizio per le tre fiamme.\n\nSuggerisco di seguire il raggio di luce.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x09\x04\x00\x04Ah, Link!")
/*<101>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <r<spada>>...\n \nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n\x0E\x01\x09\x04\x09\xC00Poco fa, ho visto entrare nella palestra\ndi scherma il <b<primo cavaliere>>. Potresti\nchiedere a lui di prestarti una spada!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x05Come?\nVuoi chiedermi qualcos'altro?\n[1]Solcanubi[2]Bado")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x00\x12A esser sincero, non so di preciso\ndove fossero diretti...")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf("\x0E\x01\x09\x04\x00\x04<b<Bado>>? Era con la sua combriccola,\ndicevano che sarebbero andati in\npiazza per assistere al battesimo del\nvolo...\nDi solito puoi scendere da qui,\nper arrivare in città velocemente,\nma questo cancello non si può\nancora aprire.\nHo lasciato aperto quello di sotto,\nperò. Mi dispiace, dovrai fare il giro\ndella scuola...")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf("\x0E\x01\x09\x04\x00\x05Uh? Cos'è successo? Ti vedo\npreoccupato! Come?!\nÈ sparito il tuo solcanubi?!\n\n<pause32>Beh... <pling>l'ho <r<visto >>prima!\n\n\n\nEra inseguito da <b<Bado >>e la sua\ncombriccola, aveva tutta l'aria\ndi essere in fuga!\n[1]Verso dove?[2]Dov'è Bado?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x00\x03Questo cancello ancora non è pronto,\nper ora evita di passare da qui! Hai\ndomande su Zelda? O sulla cerimonia?\n[1]Su Zelda[2]Sulla\ncerimonia")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x05<b<Zelda>>?\n<pause1E>Sì, l'ho vista alla statua della\nDea con il direttore <b<Gaepora>>.\nLa statua della Dea? <pause1E>Non sai dove sia?\nProprio in questi casi, usa (C) e\nguarda un po' in giro!\x0E\x01\x11\x02\x6CD\nLa vista è splendida da qui!\n<g<Guarda in giro >>con (C).\nSe ti confondi, con (v) puoi <g<centrare\nla visuale>>!\nNon scordarlo!\x0E\x01\x11\x02\x6CD\x0E\x01\x11\x02\x9CD")
          			  case 1:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x03Anche tu partecipi\nal <r<battesimo del volo >>di oggi?\n\n\nIl campione viene promosso alla <r<classe\nsuperiore >>e, una volta diplomato, \ndiventa un <r<cavaliere>> a tutti gli effetti.\n\nQuella del cavaliere è una mansione\nmolto importante! Assicura la pace\nsu Oltrenuvola. Non vedo l'ora di\nammirarti in azione!")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Buongiorno,\nLink!\nHai dormito bene la notte scorsa?\n\nBene, pensavo che, visto che oggi\nc'è il <r<battesimo del volo>>, non saresti\nriuscito a dormire dall'ansia!\n\nCome? Io? <pause28>Eh, sì... oggi devo\nsistemare questo cancello...\nEra messo maluccio...\n\nOggi c'è una cerimonia importante,\nno? Quindi devo sistemarlo prima\nche inizi!\n\n\x0E\x01\x09\x04\x0C\xC00A proposito, stamattina hai <r<pregato>> a\ndovere la Dea?!\n\n\n\x0E\x01\n\x04\x06ÍPuoi farlo presso quel <r<totem>>!\nQuando lo fai, potrai anche <r<salvare\n>>i tuoi progressi di gioco!\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍTotem simili si trovano un po' ovunque\na Oltrenuvola!\n\n\nDovresti prendere la buona abitudine\ndi dire una preghiera ogni volta che\nne vedi uno!\n\n<r<\x0E\x01\x09\x04\x00\x08>>Come dice il detto: \x201C<r<Aiutati che la Dea\nti aiuta>>\".")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Farai in tempo?!\nLink...\n\n\n\x0E\x01\x09\x04\xC00\xE06Sono solo un gran\nfifone\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Mi dispiace tantissimo...")
          	  case 1:
/*<104>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD... ... ...\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohi, ohi, giovane apprendista!\nMa cosa ti hanno insegnato a scuola?\nSe continui così non sarai mai un vero\ncavaliere!")
          	  case 1:
/*<187>*/ 		printf("\x0E\x01\x09\x04\x00\x02Noi della squadra di soccorso\nsiamo sempre pronti,\nma fa' più attenzione!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf("\x0E\x01\x09\x04\x0F\x1300Nooo...!\nL'<b<azzurrottero>>...\nl'avevo quasi preso!\n\n\x0E\x01\x09\x04\n\x900Mmh... senza retino è\nimpossibile catturare gli insetti\nche volano...\n\nNon avrei dovuto buttare via\nquello che avevo comprato \nalla <r<bottega di Terry>>!\n\x0E\x01\x09\x04\x11\x200Uff...")
          	  case 1:
/*<110>*/ 		printf("\x0E\x01\x09\x04\x00\x04Per l'<g<attacco con capriola>>,\nper prima cosa fai uno sprint\ncon (A)... \n\nPoi <r<agita il Nunchuk >>davanti al punto\nin cui vuoi effettuare l'attacco,\nappena prima di arrivarci.\n\nSe fai TUMP con l'<g<attacco\ncon capriola>>, potrebbe cadere\ngiù qualche cosa, sai?!\n\nDaaaaai!<pause1E> Prooovaaaciiii!!!")
          	}
          }

          void entrypoint_100_22() {
/*<178>*/ 	start()
/*<206>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<207>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<208>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_220:
/*<220>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ultimamente non sento più la voce\nche proveniva dal gabinetto...\nChissà chi era!")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf("\x0E\x01\x09\x04\x00\x01Negli ultimi giorni, ho sentito una voce\npassando accanto al <r<bagno di notte>>.\n\n\nChi potrebbe essere? Mah, chiunque\nsia, vorrei solo che facesse meno\nchiasso!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x01Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <r<letto>>!")
          				  case 1:
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ah, stai andando via?<pause14>\nAllora non c'è bisogno\nche prepari anche per te...\n\n\x0E\x01\x09\x04\n\xC00Fai attenzione, mi raccomando!\n\n\n\n\x0E\x01\x09\x04\x09\x800Qualche volta torna a\nriposarti un po' in un letto\ncaldo! Ne avrai bisogno!")
          				}
          			}
          		}
          	  case 1:
          		goto flw_222
          	}
          }

          void entrypoint_100_57() {
/*<214>*/ 	start()
/*<215>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<217>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohi, ohi, giovane apprendista!\nSe continui così non sarai mai un\nvero cavaliere!\n\nRicordati che il volo notturno è\nconsentito soltanto a noi della squadra\ndi soccorso! Mi raccomando, stai più\nattento!")
          	  case 1:
/*<216>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ehi! Presta più attenzione la prossima\nvolta! Di notte, con il buio che c'è, è\nancora più facile cadere giù.\n\nInoltre, il volo notturno è consentito\nsoltanto a noi della squadra di\nsoccorso! Mi raccomando, stai più\nattento!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906Link! Aspetta!\n\n\n\x0E\x01\x0D\x02\x500\nSenti... avrei una \npiccola richiesta per te...\n\n\nProvi a fare uno <g<sprint >>con (A) e un\n<g<attacco con capriola >>contro questo\nalbero?\n\nProprio davanti all'albero, <r<scuoti\nil Nunchuk >>e <g<fai  una capriola>>!\nDaaaaai!<pause1E> Per favooooreee!!!")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non sento alcuna voce provenire dal\nbagno già da un po'.\n\n\nPerò adesso Ras dorme nella stanza di\nBado e non fa altro che piangere e\ngridare... Che cosa si può fare?")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf("\x0E\x01\x09\x04\x00\x01Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <r<letto>>!")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\xB05La sera è tutto più calmo,\nsembra che anche quelle\npesti stiano dormendo...\n\n\x0E\x01\x09\x04\n\x800Come va? Pensi di\nriuscire a trovare Zelda?\nDevi mettercela tutta!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03Meglio chiudere, qui!\nNon vorrei che di sera entrasse\nqualche essere oscuro!\n\nSe proprio vuoi uscire,\nal primo piano è aperto,\nma sarebbe meglio non\nuscire affatto di notte...\nCapisco che tu voglia\nandare a cercare la tua\namica d'infanzia, Zelda...\n\nMa la notte, quasi nessuno\ns'azzarda a uscire,\nqui a Oltrenuvola.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x08UAAAH!<pause1E>\nCe l'hai fatta!\nIl mio <b<azzurrottero>>!\n\nAspetta!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDBasta!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍOra lo dico al direttore e ti faccio\nespellere, sai?!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDEhi! Fai attenzione! \x0E\x01\x0D\x02\x1906\nChe monello!\n\n\n\x0E\x01\n\x04\x0FÍSe continui così, questa settimana\nti lascio a digiuno!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206Ma che combini?!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍPoi sistemi tu!")
/*<123>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x04Per andare alla statua della Dea senza\nperderti, premi \x0E\x02\x04\x02\x3CD e consulta la\n<r<mappa>>. Prova a cercare il tuo\nsolcanubi da lì!\x0E\x01\x11\x02\x3CD")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00W Link, cosa c'è?\nSembri preoccupato...\n\n\nIl tuo solcanubi? Intendi quel\nbell'esemplare di carminio?\n<pause28>Se l'ho visto?\x0E\x01\x06\x02\xFBCD Mmh...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x200No, non l'ho visto...\n\n\n\n\x0E\x01\x09\x04\x09\x204Dalla statua della Dea puoi vedere\ntutta la città, prova a cercarlo da lì!\n\n\nPer arrivare alla statua senza\nperderti, premi \x0E\x02\x04\x02\x3CD e consulta\nla <r<mappa>>.\x0E\x01\x11\x02\x3CD")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209Oh... Non so cosa darei per fare la Dea\nal battesimo del volo! Una romantica\ncerimonia in compagnia di un cavaliere\naffascinante! Anche solo per una volta!")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Buongiorno, Link!\nOggi soffia una brezza perfetta per\nla cerimonia che ci attende!\n\n\x0E\x01\x09\x04\x11\x200Chi sarà il campione questa volta?!\n<b<Bado >>sembrerebbe il favorito...\n\n\n\x0E\x01\x09\x04\x0C\x200Il campione riceverà un\npremio dalla ragazza \nche impersona la Dea!\n\n\x0E\x01\x09\x04\x00\x609Lo trovo romanticissimo!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf("\x0E\x01\x09\x04\x09\x802Eh?! Link?!\nAvevo chiesto a <b<Gentirosso\n>>di farmi il favore, ma va bene così.\n\n\x0E\x01\x09\x04\n\xC00Oggi hai una cerimonia\nimportante, sarai molto impegnato!\nTi ringrazio.")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\n\x401Ah, Link!\nSei venuto tu!\n\n\n\x0E\x01\x09\x04\x10\x802L'avevo chiesto a <b<Gentirosso>>, però...\n\n\n\n\x0E\x01\x09\x04\x09\x400Bah, alla fine non importa... mi\nporteresti qui la <r<botte>>?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

