          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<164>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<168>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<167>*/ 			printf("\x0E\x01\x09\x04\x00\x04Fai come vuoi, ma ricordati che la sera\nnon puoi volare!\n\n\nSe vuoi girare per il cielo, dovrai\naspettare il mattino...\nVai a letto!")
          		  case 1:
/*<169>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 31}
/*<165>*/ 			printf("\x0E\x01\x09\x04\x00\x01Cosa ci fai in giro di sera?!\n\n\n\n\x0E\x01\x09\x04\x0C\xC09Che?! Spero proprio che tu non abbia\nintenzione di volare ora!\n\n\n\x0E\x01\x09\x04\x09\xC00I solcanubi non hanno una vista che gli\npermette di volare di notte! Solo quelli\naddestrati riescono a farlo!\n\n\x0E\x01\x09\x04\x08\x400Se vuoi volare, è meglio che aspetti\nche sia mattina! Se fai una bella\ndormita farà subito giorno! Spero\nche non sia troppo tardi per te.\n")
/*<166>*/ 			temp_flags[16 /* 0x3 01 */] = true;
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
/*<137>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<138>*/ 			printf("\x0E\x01\x09\x04\x00\x06Se cerchi <b<Sparvio>>, sarà davanti alla\n<r<palestra di scherma>>, dietro la scuola\nd'armi.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Come?\n<pause28>Vuoi sapere dove si trova <b<Bado>>?\n\n\n\x0E\x01\x09\x04\x00\xD00Sta di nuovo combinando qualcosa\nquello lì?!\n\n\n\x0E\x01\x09\x04\x0C\x400Non so come aiutarti, però magari\n<b<Sparvio >>può!\n\n\n\x0E\x01\x09\x04\x08\xE04A proposito, credo che <b<Sparvio >>stesse\nproprio cercando te\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nLo trovi davanti alla <r<palestra\ndi scherma>>!")
/*<136>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<134>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x01\x406Oh, Link! Che succede?\nHai l'aria preoccupata.\n\n\n\x0E\x01\x09\x04\x08\xD00Che cosa?! <pause28>Il tuo <r<solcanubi>> è\nscomparso?!\n\n\n\x0E\x01\x09\x04\x0C\xD12Uhm\x0E\x01\x06\x02\xFCCD... \x0E\x01\x06\x02ÍSono stata dentro la scuola\nfinora, non ne so proprio nulla...")
          			  case 1:
/*<142>*/ 				set_camera(14, 0)
/*<140>*/ 				make_actor_do_something(0, 0)
/*<132>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDNon capisco perché debba occuparmi io di\naprire la porta, visto che è compito suo!\nUffa!")
/*<143>*/ 				set_camera(-1, 0)
/*<141>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406Oh, Link! Che succede?\nHai l'aria preoccupata.\n\n\n\x0E\x01\x09\x04\x08\xD00Che cosa?! <pause28>Il tuo <r<solcanubi>> è\nscomparso?!\n\n\n\x0E\x01\x09\x04\x0C\xD12Uhm\x0E\x01\x06\x02\xFCCD... \x0E\x01\x06\x02ÍSono stata dentro la scuola\nfinora, non ne so proprio nulla...")
/*<133>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<129>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<131>*/ 				printf("\x0E\x01\x09\x04\x08\x900Se vincerai durante il <r<battesimo del\nvolo>>, saremo insieme nella<r< classe\nsuperiore>> per diventare cavalieri!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Buongiorno, Link!\nIn bocca al lupo per il <r<battesimo del\nvolo >>di oggi!\n\n\x0E\x01\x09\x04\x00\x400Se vincerai verrai promosso alla <r<classe\nsuperiore >>insieme a me e,\ndiplomandoti, potrai diventare\n<r<cavaliere>>.\n\x0E\x01\x09\x04\x08\x900Daranno anche a te una bellissima\n<r<uniforme da cavaliere>> come la mia!\nIh ih ih! Ti donerebbe, credo!\n\n\x0E\x01\x09\x04\x0B\x713Aah... quasi quanto dona a lui...")
/*<130>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Guarda questa statua... Non saprei dire\nda quanto tempo si trovi qui...\n\n\nHa solo un occhio, che pena, poverina!\n\n\n\nPuoi guardarla meglio premendo (^)! \x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_100_30() {
/*<172>*/ 	start()
/*<173>*/ 	set_camera(30, 0)
/*<175>*/ 	set_camera(31, 0)
/*<174>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<152>*/ 	start()
/*<157>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<158>*/ 		printf("\x0E\x01\x09\x04\x00\x04Uh\x2010uh!\nAnche per oggi una zuppa gustosissima!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x02Quel ragazzino è incorreggibile!!!\nGli avevo anche detto che era quasi\npronto da mangiare!\n\nDove sarà finito?! Di certo a inseguire\nqualche insetto...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Ma che fai?!\nNon puoi riprendertela!\n\n\n\x0E\x01\x09\x04\x00\x1200Sono certa che hai altre cose da fare...\nSu, vai ora!")
          }

          void entrypoint_100_16() {
/*<159>*/ 	start()
/*<186>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x08\x909Link!\nGrazie a te sono davvero felice!\n\n\nLui farà la ronda anche oggi, anche se\nnessuno gli ha chiesto di farlo!\n\n\n\x0E\x01\x09\x04\x0E\x90AHa tutta la mia ammirazione!")
          	  case 1:
/*<184>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Non so cosa fare con la lettera di Ras...\n\n\n\n\x0E\x01\x09\x04\x0B\xE00Cosa potrebbe pensare Sparvio se lo\nvenisse a sapere?!")
          		  case 1:
/*<180>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<189>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_185:
/*<185>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<182>*/ 						printf("\x0E\x01\x09\x04\x08\xD57Vuoi parlarmi?!\nNon puoi aspettare fino a domani?!")
/*<190>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<181>*/ 					printf("\x0E\x01\x09\x04\n\xE57Ti pare il caso di stare nella stanza\ndi una ragazza a quest'ora di sera?!\n\n\nTra poco andrò a farmi un bagno,\nti spiace andare via?!\n\n\n\x0E\x01\x09\x04\x0C\xE14Però la vasca è occupata da un bel pezzo,\nuffa.")
/*<183>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_185
          					  case 1:
          					}
          				}
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14Zelda è così brava\na volare, com'è possibile che\nsia caduta oltre il letto di nubi?!\n\n\x0E\x01\x09\x04\n\xD06Cosa?! È comparso\nanche un fantasma?! Mi sa che hai\nbattuto molto forte la testa...")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02Link!\x0E\x01\x0D\x02\x1906")
/*<120>*/ 	set_camera(9, 0)
/*<121>*/ 	printf("Se vai in piazza, esci dal piano terra!\nQuella è la via più rapida.\n\n\n\x0E\x01\x09\x04\x09\x400Inoltre, l'ingresso del piano superiore\nè ancora chiuso a chiave, non si può\npassare da lì.")
/*<123>*/ 	set_camera(11, 0)
/*<122>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Ma cosa sta combinando la vecchietta\ndella mensa? Più tardi andrò\na lamentarmi!")
          }

          void entrypoint_100_18() {
/*< 68>*/ 	start()
/*< 88>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 89>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Lascia che ti dia un consiglio...\n\n\n\nPrima di andare in posti pericolosi,\n<r<rivolgi una preghiera alla Dea e salva>>.\n\n\nPuoi vedere sulla mappa dove sono\ncollocati i <r<totem >>presso i quali puoi\nrivolgere le preghiere.")
          		  case 1:
/*<278>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <r<spada>>...\n\nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍPoco fa, ho visto entrare nella palestra\ndi scherma il <b<primo cavaliere>>. Potresti\nchiedere a lui di prestarti una spada!")
          		}
          	  case 1:
/*<102>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 31}
/*< 72>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 191, 'param3': 32}
/*<191>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 192, 'param3': 47}
/*<192>*/ 		set_camera(13, 0)
/*<193>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 195, 'param3': 15}
/*<195>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 194, 'param3': 16}
/*<194>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 70, 'param3': 48}
/*< 70>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x08\x401Link!\nStavo giusto cercando te!")
          			flw_71:
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ho saputo che il tuo solcanubi è\nscomparso! Ho provato a fare\ndelle ricerche...\n\n\x0E\x01\x09\x04\x00\xC00Ne ho parlato con Gentirosso e gli ho\nfatto una marea di domande...")
/*< 73>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 126, 'param3': 16}
/*<126>*/ 			set_camera(12, 0)
/*<155>*/ 			make_actor_do_something(0, 0)
/*<128>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 74, 'param3': 17}
/*< 74>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Scusa, Link!\n\n\n\n\x0E\x01\x09\x04\xC00\x800Volevo dirtelo prima, ma\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í se <b<Bado\n>>venisse a sapere che te l'ho detto...")
/*<196>*/ 			make_actor_do_something(1, 12)
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 			set_camera(13, 0)
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\xC16<b<Bado >>si è assicurato che tutti stessero\nzitti...")
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 125, 'param3': 17}
/*<125>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Forza...<pause23> Digli la verità!")
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 78, 'param3': 16}
/*< 78>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Poco fa ero in mensa a fare le pulizie\ne sono arrivati Bado e gli altri due...\n\n\n\x0E\x01\x09\x04\xC00\x800Non si sono accorti di me, e si\nconsultavano su come <r<nascondere\n>>il tuo solcanubi.\n\n\x0E\x01\x09\x04\xC00\x800Avevo pensato di avvertirti,\nma mentre lasciavo la\nmensa...\n\n\x0E\x01\x09\x04\xC01\xE00Mi hanno visto...\n\n\n\n\x0E\x01\x09\x04\xC07\xE00E mi hanno detto che se fossi venuto\na dirtelo, non me l'avrebbero fatta\npassare liscia...")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Fatto sta che <b<Bado >>e gli altri avevano\nintenzione di catturare il tuo solcanubi\ne nasconderlo vicino alla <r<<pling>cascata>>.\n\n\x0E\x01\x09\x04\x08\xC00Dunque, la cascata è\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Mmh... dammi un secondo la <r<mappa>>.")
/*< 84>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*<279>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_283:
/*<283>*/ 				scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<284>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<282>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 82, 'param3': 30}
/*< 82>*/ 				printf("Guarda qui! \x0E\x02\x04\x02\x19CD indica dove si trova la\n<r<cascata>>, credo!")
/*<268>*/ 				{'type': 'type3', 'subType': 4, 'param1': 100, 'param2': 256, 'next': 81, 'param3': 30}
/*< 81>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 286, 'param3': 34}
/*<286>*/ 				switch (temp_flags[54 /* 0x7 40 */]) {
          				  case 0:
/*< 83>*/ 					printf("\x0E\x01\x09\x04\x00\x404Sai come consultare una mappa, vero?\nPremi \x0E\x02\x04\x02\x2CD per vedere dove ti trovi al\nmomento.\x0E\x01\x11\x02\x2CD\n\n\x0E\x01\x09\x04\x08\x400Quindi, quando ti senti confuso,\npremi \x0E\x02\x04\x02\x2CD!\x0E\x01\x11\x02\x2CD")
          					flw_85:
/*< 85>*/ 					{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 					printf("\x0E\x01\x09\x04\xC00\x819Perdonami, Link!\nSono davvero un fifone...\nperdonami!")
/*< 87>*/ 					scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<285>*/ 					switch (temp_flags[54 /* 0x7 40 */]) {
          					  case 0:
/*<154>*/ 						story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          						flw_156:
/*<156>*/ 						story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<149>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						goto flw_156
          					}
          				  case 1:
          					goto flw_85
          				}
          			  case 1:
/*<280>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
          					goto flw_283
          				  case 1:
/*<281>*/ 					temp_flags[54 /* 0x7 40 */] = true;
          					goto flw_283
          				}
          			}
          		  case 1:
/*<101>*/ 			printf("\x0E\x01\x09\x04\x00\xC01Link!\nAppena in tempo!")
/*<148>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_71
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 48>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 50>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04Per andare alla statua della Dea senza\nperderti, premi \x0E\x02\x04\x02\x2CD e consulta la\n<r<mappa>>. Prova a cercare il tuo\nsolcanubi da lì!\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<256>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<257>*/ 				printf("\x0E\x01\x09\x04\x00\x04Cos'è successo, Link?<pause28>\n\n\n\n\x0E\x01\x09\x04\x00\x1100Cosa?! Il tuo solcanubi...<pause32>\nè scomparso\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í?\n\n\n\x0E\x01\x09\x04\x11\x1100Ma è terribile!\nNon vedevo l'ora di vederlo in azione!\nComunque, no, non l'ho visto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\n\x1100Però\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Dalla statua della Dea puoi\nvedere tutta la città, prova a cercarlo\nda lì!")
/*<258>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          			  case 1:
/*<244>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 31}
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x00\x04Cos'è successo, Link?<pause28>\n\n\n\n\x0E\x01\x09\x04\x00\x1100Cosa?! Il tuo solcanubi...<pause32>\nè scomparso\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í?\n\n\n\x0E\x01\x09\x04\x11\x1100Ma è terribile!\nNon vedevo l'ora di vederlo in azione!\nComunque, no, non l'ho visto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\n\x1100Però\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Dalla statua della Dea puoi\nvedere tutta la città, prova a cercarlo\nda lì!")
/*< 54>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
/*<238>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<237>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 255, 'param3': 30}
/*<255>*/ 				printf("La <r<statua della Dea>> si trova nella parte\nnord di Oltrenuvola. È contrassegnata\ndal simbolo \x0E\x02\x04\x02\x19CD.")
/*<266>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 239, 'param3': 30}
/*<239>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 34}
/*<242>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<243>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<240>*/ 					printf("\x0E\x01\x09\x04\x00\x404Sai come consultare la mappa, vero?\nPuoi premere \x0E\x02\x04\x02\x2CD in qualsiasi momento\nper vedere dove ti trovi. Ricordatelo se\nti perdi, mi raccomando!\x0E\x01\x11\x02\x2CD")
/*<241>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 52>*/ 			printf("\x0E\x01\x09\x04\n\x705Aspetto con ansia di vedere le prodezze\ndel tuo solcanubi carminio!")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi Link! Tra poco\ncomincia il battesimo del volo!\n\n\nL'ultima volta ha vinto <b<Sparvio >>per un\npelo! Che spettacolo avvincente!\n\n\n\x0E\x01\x09\x04\n\x700Questa volta potrai farti valere tu,\ncon il tuo solcanubi carminio!\n<pause28>Non vedo l'ora!")
/*< 51>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 91>*/ 	start()
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 197, 'param3': 32}
/*<197>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 92, 'param3': 13}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDEeeehii!\x0E\x01\x0D\x02\x1906\nLink!")
/*<108>*/ 	set_camera(2, 0)
/*<110>*/ 	make_actor_do_something(2, 12)
/*<139>*/ 	printf("\x0E\x01\x08\x02\x2CDDa questa parte!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍVieni qui, vorrei parlarti del tuo\nsolcanubi!!")
/*<111>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 93, 'param3': 42}
/*< 93>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Stai parlando del tuo solcanubi?!\n\n\n\n\x0E\x01\x09\x04\x10\xE00Guardami, sono impegnatissima!!!\nParliamo dopo!")
          	  case 1:
/*<176>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<177>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tra poco c'è il <r<battesimo del volo>>,\nmi pare, no?!\nSmettila di girarti i pollici, va' subito!")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Perché <b<Gentirosso >>ci mette così tanto?\nGli avevo chiesto di portarmi\nqui una <r<botte>>, ma ancora\nnon si fa vedere...\n\x0E\x01\x09\x04\x10\xF00Che starà combinando?!")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Signore...\nSecondo i miei calcoli questa\nluce è un indizio per le tre fiamme.\n\nSuggerisco di seguire il raggio di luce.")
/*<163>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 94>*/ 	start()
/*< 95>*/ 	printf("\x0E\x01\x09\x04\x00\x04Ah, Link!")
/*< 96>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <r<spada>>...\n\nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍPoco fa, ho visto entrare nella palestra\ndi scherma il <b<primo cavaliere>>. Potresti\nchiedere a lui di prestarti una spada!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 66>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 67>*/ 			printf("\x0E\x01\x09\x04\x00\x05Come?\nVuoi chiedermi qualcos'altro?\n[1]Solcanubi[2]Bado")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x12A esser sincero, non so di preciso\ndove fossero diretti...")
/*< 65>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x00\x04<b<Bado>>? Era con la sua combriccola,\ndicevano che sarebbero andati in\npiazza per assistere al <r<battesimo del\nvolo>>...")
/*< 64>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
/*<234>*/ 				entrypoint_100_59();
          			}
          		  case 1:
/*<263>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x05Uh? Cos'è successo?\nTi vedo preoccupato! Come?!\nÈ sparito il tuo solcanubi?!\n\n<pause32>Beh... <pling>l'ho <r<visto >>prima!\n\n\n\nEra inseguito da <b<Bado >>e la sua\ncombriccola, aveva tutta l'aria\ndi essere in fuga!\n[1]Verso dove?[2]Dov'è Bado?")
          				goto flw_16
          			  case 1:
/*<235>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 31}
          				goto flw_61
          			}
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x00\x03Questo cancello ancora non è pronto, per ora\nevita di passare da qui! Hai domande su Zelda?\nO sulla cerimonia?\n[1]Su Zelda[2]Sulla cerimonia")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x05<b<Zelda>>?\n<pause1E>Sì, l'ho vista alla statua della Dea con il\ndirettore <b<Gaepora>>. La statua della Dea?\n<pause1E>Non sai dove sia?\nProprio in questi casi, usa \x0E\x02\x04\x02\x22CD e guarda\nun po' in giro!\x0E\x01\x11\x02\x8CD")
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x00\x03Anche tu partecipi\nal <r<battesimo del volo >>di oggi?\n\n\nIl campione viene promosso alla <r<classe\nsuperiore >>e, una volta diplomato,\ndiventa un <r<cavaliere>> a tutti gli effetti.\n\nQuella del cavaliere è una mansione\nmolto importante! Assicura la pace\nsu Oltrenuvola. Non vedo l'ora di\nammirarti in azione!")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Buongiorno,\nLink!\nHai dormito bene la notte scorsa?\n\nBene, pensavo che, visto che oggi\nc'è il <r<battesimo del volo>>, non saresti\nriuscito a dormire dall'ansia!\n\nCome? Io? <pause28>Eh, sì... oggi devo\nsistemare questo cancello...\nEra messo maluccio...\n\nOggi c'è una cerimonia importante,\nno? Quindi devo sistemarlo prima\nche inizi!\n\n\x0E\x01\x09\x04\x0C\xC00A proposito, stamattina hai <r<pregato>> a\ndovere la Dea?!\n\n\n\x0E\x01\n\x04\x06ÍPuoi farlo presso quel <r<totem>>!\nQuando lo fai, potrai anche <r<salvare\n>>i tuoi progressi di gioco!\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍTotem simili si trovano un po' ovunque\na Oltrenuvola!\n\n\nDovresti prendere la buona abitudine\ndi dire una preghiera ogni volta che\nne vedi uno!\n\n<r<\x0E\x01\x09\x04\x00\x08>>Come dice il detto: \x201C<r<Aiutati che la Dea\nti aiuta>>\".")
/*< 57>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<100>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Farai in tempo?!\nLink...\n\n\n\x0E\x01\x09\x04\xC00\xE06Sono solo un gran\nfifone\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Mi dispiace tantissimo...")
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD... ... ...\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<178>*/ 	start()
/*<204>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<205>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohi, ohi, giovane apprendista!\nMa cosa ti hanno insegnato a scuola?\nSe continui così non sarai mai un vero\ncavaliere!")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x00\x02Noi della squadra di soccorso siamo\nsempre pronti, ma fa' più attenzione!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*<221>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 34>*/ 		switch (scene_flags[58 /* 0x6 04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x0F\x1300Nooo...!\nL'<b<azzurrottero>>... l'avevo quasi preso!\n\n\n\x0E\x01\x09\x04\n\x900Mmh... senza retino è impossibile\ncatturare gli insetti che volano...\n\n\nNon avrei dovuto buttare via quello che\navevo comprato alla <r<bottega di Terry>>!\n\x0E\x01\x09\x04\x11\x200Uff...")
          		  case 1:
/*<103>*/ 			printf("\x0E\x01\x09\x04\x00\x04Per l'<g<attacco con capriola>>,\nper prima cosa fai uno sprint...\n\n\nE mentre corri, SBAM! Se fai l'<g<attacco\ncon capriola>>, come si deve, potrebbe\ncadere giù qualche cosa, sai?!\n\nDaaaaai!<pause1E> Prooovaaaciiii!!!")
/*<225>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 227, 'param3': 31}
/*<227>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          		}
          	  case 1:
/*<223>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 31}
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906Link! Aspetta!\n\n\n\x0E\x01\x0D\x02\x500\nSenti... avrei una piccola richiesta per te...\nProveresti a fare uno <g<sprint >>e un <g<attacco\ncon capriola >>contro questo albero?\n\nCome stavo facendo io. Fai uno sprint e,\nquando sei proprio davanti all'albero, <g<fai\nuna capriola>>! Daaaaai!<pause1E> Per favooooreee!")
/*<224>*/ 		scene_flags[0 'Skyloft'][61 /* 0x6 20 */] = true;
/*<226>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          	}
          }

          void entrypoint_100_22() {
/*<170>*/ 	start()
/*<198>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<199>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<200>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_212:
/*<212>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ultimamente non sento più la voce\nche proveniva dal gabinetto...\nChissà chi era!")
          			  case 1:
/*<202>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 201, 'param3': 31}
/*<201>*/ 				printf("\x0E\x01\x09\x04\x00\x01Negli ultimi giorni, ho sentito una voce\npassando accanto al <r<bagno di notte>>.\n\n\nChi potrebbe essere? Mah, chiunque\nsia, vorrei solo che facesse meno\nchiasso!")
          			}
          		  case 1:
          			flw_214:
/*<214>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<216>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<213>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<215>*/ 					printf("\x0E\x01\x09\x04\x00\x01Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <r<letto>>!")
          				  case 1:
/*<171>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ah, stai andando via?<pause14>\nAllora non c'è bisogno\nche prepari anche per te...\n\n\x0E\x01\x09\x04\n\xC00Fai attenzione, mi raccomando!\n\n\n\n\x0E\x01\x09\x04\x09\x800Qualche volta torna a\nriposarti un po' in un letto\ncaldo! Ne avrai bisogno!")
          				}
          			}
          		}
          	  case 1:
          		goto flw_214
          	}
          }

          void entrypoint_100_57() {
/*<206>*/ 	start()
/*<207>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohi, ohi, giovane apprendista!\nSe continui così non sarai mai un\nvero cavaliere!\n\nRicordati che il volo notturno è\nconsentito soltanto a noi della squadra\ndi soccorso! Mi raccomando, stai più\nattento!")
          	  case 1:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ehi! Presta più attenzione la prossima\nvolta! Di notte, con il buio che c'è, è\nancora più facile cadere giù.\n\nInoltre, il volo notturno è consentito\nsoltanto a noi della squadra di\nsoccorso! Mi raccomando, stai più\nattento!")
          	}
          }

          void entrypoint_100_58() {
/*<228>*/ 	start()
/*<232>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          	  case 1:
/*<233>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<230>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 267, 'param3': 30}
/*<267>*/ 		printf("Nella zona sud di Oltrenuvola, dove c'è il\nsimbolo \x0E\x02\x04\x02\x19CD, si trova la piazza. È lì che più\ntardi terremo il <r<battesimo del volo>>!")
/*<264>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 231, 'param3': 30}
/*<231>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 229, 'param3': 34}
/*<229>*/ 		printf("\x0E\x01\x09\x04\x00\x404Sai come consultare la mappa?\nPuoi premere \x0E\x02\x04\x02\x2CD in qualsiasi momento\nper vedere dove ti trovi. Quando sei\nconfuso, consulta sempre la mappa!\x0E\x01\x11\x02\x2CD")
/*<236>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	}
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<161>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<210>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<211>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<203>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non sento alcuna voce provenire dal\nbagno già da un po'.\n\n\nPerò adesso Ras dorme nella stanza di\nBado e non fa altro che piangere e\ngridare... Che cosa si può fare?")
          			  case 1:
          				goto flw_212
          			}
          		  case 1:
/*<217>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<218>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<219>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<220>*/ 					printf("\x0E\x01\x09\x04\x00\x01Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <r<letto>>!")
          				  case 1:
/*<162>*/ 					printf("\x0E\x01\x09\x04\x00\xB05La sera è tutto più calmo, sembra che\nanche quelle pesti stiano dormendo...\n\n\n\x0E\x01\x09\x04\n\x800Come va?\nPensi di riuscire a trovare Zelda?\nDevi mettercela tutta!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03Meglio chiudere, qui!\nNon vorrei che di sera entrasse qualche\nessere oscuro!\n\nSe proprio vuoi uscire, al primo piano\nè aperto, ma sarebbe meglio non uscire\naffatto di notte...\n\nCapisco che tu voglia andare a cercare\nla tua amica d'infanzia, Zelda...\n\n\nMa la notte, quasi nessuno s'azzarda\na uscire, qui a Oltrenuvola.")
          	}
          }

          void entrypoint_100_24() {
/*<105>*/ 	start()
/*<106>*/ 	printf("\x0E\x01\x09\x04\x00\x08UAAAH!<pause1E>\nCe l'hai fatta!\nIl mio <b<azzurrottero>>!\n\nAspetta!")
/*<107>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_59() {
/*<269>*/ 	start()
/*<273>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          		flw_270:
/*<270>*/ 		printf("Quindi penso che siano in piazza.\nNormalmente si può scendere da qui,\nper arrivare in città velocemente...\n\nMa questo cancello non si può ancora\naprire. Mi dispiace, dovrai fare il giro\ndella scuola... Ricordati di usare la mappa\ncon \x0E\x02\x04\x02\x2CD se ti perdi!\x0E\x01\x11\x02\x2CD")
/*<275>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	  case 1:
/*<274>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<271>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 277, 'param3': 30}
/*<277>*/ 		printf("Ah, stai ancora cercando di scendere verso\nla zona sud? Il simbolo \x0E\x02\x04\x02\x19CD che vedi sulla\nmappa indica la piazza.\n\nÈ dove oggi si tiene il <r<battesimo del volo>>,\nquindi è meglio se non aspetti troppo!")
/*<276>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 272, 'param3': 30}
/*<272>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 34}
          		goto flw_270
          	}
          }

          void entrypoint_100_25() {
/*<112>*/ 	start()
/*<113>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<119>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDBasta!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍOra lo dico al direttore e ti faccio\nespellere, sai?!")
          	  case 1:
/*<114>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<117>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDEhi! Fai attenzione! \x0E\x01\x0D\x02\x1906\nChe monello!\n\n\n\x0E\x01\n\x04\x0FÍSe continui così, questa settimana\nti lascio a digiuno!")
/*<118>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<115>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206Ma che combini?!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍPoi sistemi tu!")
/*<116>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00\x04Per andare alla statua della Dea senza\nperderti, premi \x0E\x02\x04\x02\x2CD e consulta la\n<r<mappa>>. Prova a cercare il tuo\nsolcanubi da lì!\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<246>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<261>*/ 				printf("\x0E\x01\x09\x04\x00WLink, cosa c'è?\nSembri preoccupato...\n\n\nIl tuo solcanubi? Intendi quel\nbell'esemplare di carminio?\n<pause28>Se l'ho visto?\x0E\x01\x06\x02\xFBCD Mmh...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x200No, non l'ho visto...\n\n\n\n\x0E\x01\x09\x04\x09\x204Dalla statua della Dea puoi vedere\ntutta la città, prova a cercarlo da lì!")
/*<262>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          			  case 1:
/*<253>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 259, 'param3': 31}
/*<259>*/ 				printf("\x0E\x01\x09\x04\x00WLink, cosa c'è?\nSembri preoccupato...\n\n\nIl tuo solcanubi? Intendi quel\nbell'esemplare di carminio?\n<pause28>Se l'ho visto?\x0E\x01\x06\x02\xFBCD Mmh...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x200No, non l'ho visto...\n\n\n\n\x0E\x01\x09\x04\x09\x204Dalla statua della Dea puoi vedere\ntutta la città, prova a cercarlo da lì!")
/*<260>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
/*<247>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<245>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 254, 'param3': 30}
/*<254>*/ 				printf("La <r<statua della Dea>> è quell'enorme statua\nche si trova a nord di Oltrenuvola. Ci sei\ngià stato, vero? Vai al luogo segnato con\nil simbolo \x0E\x02\x04\x02\x19CD. Non puoi sbagliare!")
/*<265>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 248, 'param3': 30}
/*<248>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 251, 'param3': 34}
/*<251>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<252>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<249>*/ 					printf("\x0E\x01\x09\x04\x00\x404Sai come consultare la mappa, vero?\nPuoi premere \x0E\x02\x04\x02\x2CD in qualsiasi momento\nper vedere dove ti trovi. Come si dice:\n\"Se hai bisogno di aiuto, \x0E\x02\x04\x02\x2CD va premuto!\"\x0E\x01\x11\x02\x2CD")
/*<250>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209Oh... Non so cosa darei per fare la Dea\nal battesimo del volo! Una romantica\ncerimonia in compagnia di un cavaliere\naffascinante! Anche solo per una volta!")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Buongiorno, Link!\nOggi soffia una brezza perfetta per\nla cerimonia che ci attende!\n\n\x0E\x01\x09\x04\x11\x200Chi sarà il campione questa volta?!\n<b<Bado >>sembrerebbe il favorito...\n\n\n\x0E\x01\x09\x04\x0C\x200Il campione riceverà un\npremio dalla ragazza\nche impersona la Dea!\n\n\x0E\x01\x09\x04\x00\x609Lo trovo romanticissimo!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<144>*/ 	start()
/*<146>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<147>*/ 		printf("\x0E\x01\x09\x04\x09\x802Eh?! Link?!\nAvevo chiesto a <b<Gentirosso\n>>di farmi il favore, ma va bene così.\n\n\x0E\x01\x09\x04\n\xC00Oggi hai una cerimonia\nimportante, sarai molto impegnato!\nTi ringrazio.")
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\n\x401Ah, Link!\nSei venuto tu!\n\n\n\x0E\x01\x09\x04\x10\x802L'avevo chiesto a <b<Gentirosso>>, però...\n\n\n\n\x0E\x01\x09\x04\x09\x400Bah, alla fine non importa... mi\nporteresti qui la <r<botte>>?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

