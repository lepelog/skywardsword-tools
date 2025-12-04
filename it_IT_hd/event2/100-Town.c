          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<164>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<168>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000004>Fai come vuoi, ma ricordati che la sera\nnon puoi volare!\n\n\nSe vuoi girare per il cielo, dovrai\naspettare il mattino...\nVai a letto!")
          		  case 1:
/*<169>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 31}
/*<165>*/ 			printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00000001>Cosa ci fai in giro di sera?!\n\n\n\n<0x10009:0x000c0c09>Che?! Spero proprio che tu non abbia\nintenzione di volare ora!\n\n\n<0x10009:0x00090c00>I solcanubi non hanno una vista che gli\npermette di volare di notte! Solo quelli\naddestrati riescono a farlo!\n\n<0x10009:0x00080400>Se vuoi volare, è meglio che aspetti\nche sia mattina! Se fai una bella\ndormita farà subito giorno! Spero\nche non sia troppo tardi per te.\n")
/*<166>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000b0c00>Non restare qui a scuola, vai fuori a\ncercare il tuo solcanubi...\n\n\nIo farò qualche ricerca e se scopro\nqualcosa ti farò sapere subito!")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000c06>Ehilà! Cosa ci fai ancora in giro\nper la scuola?!\n\n\n<0x10009:0x000c0c09>Cosa?!<pause 20> Hai chiamato a te il solcanubi\ne non è arrivato?!\n\n\n<0x10009:0x00010c00>Un solcanubi guardiano che non\nrisponde al padrone... mmh...\n\n\nÈ la prima volta che sento una cosa\nsimile, non saprei dire come possa\naccadere...\n\n<0x10009:0x00080400>Mmh... come studente più anziano\ndevo aiutarti in qualche modo...\n\n\n<0x10009:0x000b0c00>Farò qualche ricerca per te, tu\nintanto vai in piazza e prova\na chiedere in giro!")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000c0405>Se hai qualche domanda sui solcanubi,\nchiedi pure a me!")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00090401>Buongiorno, <heroname>!\n\n\n\n<0x10009:0x00080400>Sei pronto per il <color red<battesimo del volo\n>coloroff>di oggi?\n\n\nTutti gli altri sono nella piazza a\nesercitarsi, ma tu sembri piuttosto\nrilassato!\n\n<0x10009:0x000b0400>Il tuo solcanubi è davvero un\nbell'esemplare di <color red<carminio>coloroff>!\nAllo scorso battesimo del volo ho vinto\ncon il mio solcanubi...\nMa, onestamente, non credo che\nsarei stato in grado di battere il tuo!\n\n\n<0x10009:0x00080400>Ogni giorno faccio ricerche in merito\nalla potenza dei solcanubi e alle\ncapacità dei loro cavalieri...\n\n<0x10009:0x000c0405>Quindi quando hai qualche dubbio,\nnon esitare a venirmi a chiedere aiuto!")
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
/*<138>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000006>Se cerchi <color blue<Sparvio>coloroff>, sarà davanti alla\n<color red<palestra di scherma>coloroff>, dietro la scuola\nd'armi.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00080406>Come?\n<pause 40>Vuoi sapere dove si trova <color blue<Bado>coloroff>?\n\n\n<0x10009:0x00000d00>Sta di nuovo combinando qualcosa\nquello lì?!\n\n\n<0x10009:0x000c0400>Non so come aiutarti, però magari\n<color blue<Sparvio >coloroff>può!\n\n\n<0x10009:0x00080e04>A proposito, credo che <color blue<Sparvio >coloroff>stesse\nproprio cercando te<0x10006:0xfccd>...<0x10006:0x00cd>\nLo trovi davanti alla <color red<palestra\ndi scherma>coloroff>!")
/*<136>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<134>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00010406>Oh, <heroname>! Che succede?\nHai l'aria preoccupata.\n\n\n<0x10009:0x00080d00>Che cosa?! <pause 40>Il tuo <color red<solcanubi>coloroff> è\nscomparso?!\n\n\n<0x10009:0x000c0d12>Uhm<0x10006:0xfccd>... <0x10006:0x00cd>Sono stata dentro la scuola\nfinora, non ne so proprio nulla...")
          			  case 1:
/*<142>*/ 				set_camera(14, 0)
/*<140>*/ 				make_actor_do_something(0, 0)
/*<132>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Non capisco perché debba occuparmi io di\naprire la porta, visto che è compito suo!\nUffa!")
/*<143>*/ 				set_camera(-1, 0)
/*<141>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00010406>Oh, <heroname>! Che succede?\nHai l'aria preoccupata.\n\n\n<0x10009:0x00080d00>Che cosa?! <pause 40>Il tuo <color red<solcanubi>coloroff> è\nscomparso?!\n\n\n<0x10009:0x000c0d12>Uhm<0x10006:0xfccd>... <0x10006:0x00cd>Sono stata dentro la scuola\nfinora, non ne so proprio nulla...")
/*<133>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<129>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00080900>Se vincerai durante il <color red<battesimo del\nvolo>coloroff>, saremo insieme nella<color red< classe\nsuperiore>coloroff> per diventare cavalieri!")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00080901>Buongiorno, <heroname>!\nIn bocca al lupo per il <color red<battesimo del\nvolo >coloroff>di oggi!\n\n<0x10009:0x00000400>Se vincerai verrai promosso alla <color red<classe\nsuperiore >coloroff>insieme a me e,\ndiplomandoti, potrai diventare\n<color red<cavaliere>coloroff>.\n<0x10009:0x00080900>Daranno anche a te una bellissima\n<color red<uniforme da cavaliere>coloroff> come la mia!\nIh ih ih! Ti donerebbe, credo!\n\n<0x10009:0x000b0713>Aah... quasi quanto dona a lui...")
/*<130>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x00000001>Guarda questa statua... Non saprei dire\nda quanto tempo si trovi qui...\n\n\nHa solo un occhio, che pena, poverina!\n\n\n\nPuoi guardarla meglio premendo (^)! <0x10011:0x08cd>")
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
/*<158>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000004>Uh‐uh!\nAnche per oggi una zuppa gustosissima!")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000002>Quel ragazzino è incorreggibile!!!\nGli avevo anche detto che era quasi\npronto da mangiare!\n\nDove sarà finito?! Di certo a inseguire\nqualche insetto...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000007>Ma che fai?!\nNon puoi riprendertela!\n\n\n<0x10009:0x00001200>Sono certa che hai altre cose da fare...\nSu, vai ora!")
          }

          void entrypoint_100_16() {
/*<159>*/ 	start()
/*<186>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00080909><heroname>!\nGrazie a te sono davvero felice!\n\n\nLui farà la ronda anche oggi, anche se\nnessuno gli ha chiesto di farlo!\n\n\n<0x10009:0x000e090a>Ha tutta la mia ammirazione!")
          	  case 1:
/*<184>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000e12>Non so cosa fare con la lettera di Ras...\n\n\n\n<0x10009:0x000b0e00>Cosa potrebbe pensare Sparvio se lo\nvenisse a sapere?!")
          		  case 1:
/*<180>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<189>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_185:
/*<185>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<182>*/ 						printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00080d57>Vuoi parlarmi?!\nNon puoi aspettare fino a domani?!")
/*<190>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<181>*/ 					printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x000a0e57>Ti pare il caso di stare nella stanza\ndi una ragazza a quest'ora di sera?!\n\n\nTra poco andrò a farmi un bagno,\nti spiace andare via?!\n\n\n<0x10009:0x000c0e14>Però la vasca è occupata da un bel pezzo,\nuffa.")
/*<183>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_185
          					  case 1:
          					}
          				}
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000c0d14>Zelda è così brava\na volare, com'è possibile che\nsia caduta oltre il letto di nubi?!\n\n<0x10009:0x000a0d06>Cosa?! È comparso\nanche un fantasma?! Mi sa che hai\nbattuto molto forte la testa...")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00010002><heroname>!<0x1000D:0x1906>")
/*<120>*/ 	set_camera(9, 0)
/*<121>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Se vai in piazza, esci dal piano terra!\nQuella è la via più rapida.\n\n\n<0x10009:0x00090400>Inoltre, l'ingresso del piano superiore\nè ancora chiuso a chiave, non si può\npassare da lì.")
/*<123>*/ 	set_camera(11, 0)
/*<122>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x000c0c16>Ma cosa sta combinando la vecchietta\ndella mensa? Più tardi andrò\na lamentarmi!")
          }

          void entrypoint_100_18() {
/*< 68>*/ 	start()
/*< 88>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 89>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000c05>Lascia che ti dia un consiglio...\n\n\n\nPrima di andare in posti pericolosi,\n<color red<rivolgi una preghiera alla Dea e salva>coloroff>.\n\n\nPuoi vedere sulla mappa dove sono\ncollocati i <color red<totem >coloroff>presso i quali puoi\nrivolgere le preghiere.")
          		  case 1:
/*<278>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000c0c05>Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <color red<spada>coloroff>...\n\nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n<0x10013:0x><0x10009:0x00090c00><0x1000A:0x002000cd>Poco fa, ho visto entrare nella palestra\ndi scherma il <color blue<primo cavaliere>coloroff>. Potresti\nchiedere a lui di prestarti una spada!")
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
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080401><heroname>!\nStavo giusto cercando te!")
          			flw_71:
/*< 71>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00090c00>Ho saputo che il tuo solcanubi è\nscomparso! Ho provato a fare\ndelle ricerche...\n\n<0x10009:0x00000c00>Ne ho parlato con Gentirosso e gli ho\nfatto una marea di domande...")
/*< 73>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 126, 'param3': 16}
/*<126>*/ 			set_camera(12, 0)
/*<155>*/ 			make_actor_do_something(0, 0)
/*<128>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 74, 'param3': 17}
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c000812>Scusa, <heroname>!\n\n\n\n<0x10009:0x0c000800>Volevo dirtelo prima, ma<0x10006:0xfbcd>...<0x10006:0x00cd> se <color blue<Bado\n>coloroff>venisse a sapere che te l'ho detto...")
/*<196>*/ 			make_actor_do_something(1, 12)
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 			set_camera(13, 0)
/*< 76>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000c16><color blue<Bado >coloroff>si è assicurato che tutti stessero\nzitti...")
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 125, 'param3': 17}
/*<125>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00080c00>Forza...<pause 35> Digli la verità!")
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 78, 'param3': 16}
/*< 78>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x0c070e11>Poco fa ero in mensa a fare le pulizie\ne sono arrivati Bado e gli altri due...\n\n\n<0x10009:0x0c000800>Non si sono accorti di me, e si\nconsultavano su come <color red<nascondere\n>coloroff>il tuo solcanubi.\n\n<0x10009:0x0c000800>Avevo pensato di avvertirti,\nma mentre lasciavo la\nmensa...\n\n<0x10009:0x0c010e00>Mi hanno visto...\n\n\n\n<0x10009:0x0c070e00>E mi hanno detto che se fossi venuto\na dirtelo, non me l'avrebbero fatta\npassare liscia...")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00090c00>Fatto sta che <color blue<Bado >coloroff>e gli altri avevano\nintenzione di catturare il tuo solcanubi\ne nasconderlo vicino alla <color red<<sound 4>cascata>coloroff>.\n\n<0x10009:0x00080c00>Dunque, la cascata è<0x10006:0xfbcd>...<0x10006:0x00cd>\n<pause 40>Mmh... dammi un secondo la <color red<mappa>coloroff>.")
/*< 84>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*<279>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_283:
/*<283>*/ 				scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<284>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<282>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 82, 'param3': 30}
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Guarda qui! (X) indica dove si trova la\n<color red<cascata>coloroff>, credo!")
/*<268>*/ 				{'type': 'type3', 'subType': 4, 'param1': 100, 'param2': 256, 'next': 81, 'param3': 30}
/*< 81>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 286, 'param3': 34}
/*<286>*/ 				switch (temp_flags[54 /* 0x7 40 */]) {
          				  case 0:
/*< 83>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000404>Sai come consultare una mappa, vero?\nPremi (-) per vedere dove ti trovi al\nmomento.<0x10011:0x02cd>\n\n<0x10009:0x00080400>Quindi, quando ti senti confuso,\npremi (-)!<0x10011:0x02cd>")
          					flw_85:
/*< 85>*/ 					{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0c000819>Perdonami, <heroname>!\nSono davvero un fifone...\nperdonami!")
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
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000c01><heroname>!\nAppena in tempo!")
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
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 2, line: 33 */ "<0x10009:0x00000004>Per andare alla statua della Dea senza\nperderti, premi (-) e consulta la\n<color red<mappa>coloroff>. Prova a cercare il tuo\nsolcanubi da lì!<0x10011:0x02cd>")
          		  case 1:
/*<256>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<257>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000004>Cos'è successo, <heroname>?<pause 40>\n\n\n\n<0x10009:0x00001100>Cosa?! Il tuo solcanubi...<pause 50>\nè scomparso<0x10006:0xfbcd>...<0x10006:0x00cd>?\n\n\n<0x10009:0x00111100>Ma è terribile!\nNon vedevo l'ora di vederlo in azione!\nComunque, no, non l'ho visto<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n<0x10009:0x000a1100>Però<0x10006:0xfbcd>...<0x10006:0x00cd> Dalla statua della Dea puoi\nvedere tutta la città, prova a cercarlo\nda lì!")
/*<258>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          			  case 1:
/*<244>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 31}
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000004>Cos'è successo, <heroname>?<pause 40>\n\n\n\n<0x10009:0x00001100>Cosa?! Il tuo solcanubi...<pause 50>\nè scomparso<0x10006:0xfbcd>...<0x10006:0x00cd>?\n\n\n<0x10009:0x00111100>Ma è terribile!\nNon vedevo l'ora di vederlo in azione!\nComunque, no, non l'ho visto<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n<0x10009:0x000a1100>Però<0x10006:0xfbcd>...<0x10006:0x00cd> Dalla statua della Dea puoi\nvedere tutta la città, prova a cercarlo\nda lì!")
/*< 54>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
/*<238>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<237>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 255, 'param3': 30}
/*<255>*/ 				printf(/* textboxtype: 0, unk: 1, line: 91 */ "La <color red<statua della Dea>coloroff> si trova nella parte\nnord di Oltrenuvola. È contrassegnata\ndal simbolo (X).")
/*<266>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 239, 'param3': 30}
/*<239>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 34}
/*<242>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<243>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<240>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000404>Sai come consultare la mappa, vero?\nPuoi premere (-) in qualsiasi momento\nper vedere dove ti trovi. Ricordatelo se\nti perdi, mi raccomando!<0x10011:0x02cd>")
/*<241>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000a0705>Aspetto con ansia di vedere le prodezze\ndel tuo solcanubi carminio!")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000001>Ehi <heroname>! Tra poco\ncomincia il battesimo del volo!\n\n\nL'ultima volta ha vinto <color blue<Sparvio >coloroff>per un\npelo! Che spettacolo avvincente!\n\n\n<0x10009:0x000a0700>Questa volta potrai farti valere tu,\ncon il tuo solcanubi carminio!\n<pause 40>Non vedo l'ora!")
/*< 51>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 91>*/ 	start()
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 197, 'param3': 32}
/*<197>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 92, 'param3': 13}
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00000002><0x10008:0x02cd>Eeeehii!<0x1000D:0x1906>\n<heroname>!")
/*<108>*/ 	set_camera(2, 0)
/*<110>*/ 	make_actor_do_something(2, 12)
/*<139>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10008:0x02cd>Da questa parte!<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>Vieni qui, vorrei parlarti del tuo\nsolcanubi!!")
/*<111>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 93, 'param3': 42}
/*< 93>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Stai parlando del tuo solcanubi?!\n\n\n\n<0x10009:0x00100e00>Guardami, sono impegnatissima!!!\nParliamo dopo!")
          	  case 1:
/*<176>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Tra poco c'è il <color red<battesimo del volo>coloroff>,\nmi pare, no?!\nSmettila di girarti i pollici, va' subito!")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>Perché <color blue<Gentirosso >coloroff>ci mette così tanto?\nGli avevo chiesto di portarmi\nqui una <color red<botte>coloroff>, ma ancora\nnon si fa vedere...\n<0x10009:0x00100f00>Che starà combinando?!")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10012:0x00000001>Signore...\nSecondo i miei calcoli questa\nluce è un indizio per le tre fiamme.\n\nSuggerisco di seguire il raggio di luce.")
/*<163>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 94>*/ 	start()
/*< 95>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000004>Ah, <heroname>!")
/*< 96>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000c0c05>Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <color red<spada>coloroff>...\n\nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n<0x10013:0x><0x10009:0x00090c00><0x1000A:0x002000cd>Poco fa, ho visto entrare nella palestra\ndi scherma il <color blue<primo cavaliere>coloroff>. Potresti\nchiedere a lui di prestarti una spada!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 66>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000005>Come?\nVuoi chiedermi qualcos'altro?\n[1-]Solcanubi[2-]Bado")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10009:0x00000012>A esser sincero, non so di preciso\ndove fossero diretti...")
/*< 65>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000004><color blue<Bado>coloroff>? Era con la sua combriccola,\ndicevano che sarebbero andati in\npiazza per assistere al <color red<battesimo del\nvolo>coloroff>...")
/*< 64>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
/*<234>*/ 				entrypoint_100_59();
          			}
          		  case 1:
/*<263>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Uh? Cos'è successo?\nTi vedo preoccupato! Come?!\nÈ sparito il tuo solcanubi?!\n\n<pause 50>Beh... <sound 4>l'ho <color red<visto >coloroff>prima!\n\n\n\nEra inseguito da <color blue<Bado >coloroff>e la sua\ncombriccola, aveva tutta l'aria\ndi essere in fuga!\n[1-]Verso dove?[2-]Dov'è Bado?")
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
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000003>Questo cancello ancora non è pronto, per ora\nevita di passare da qui! Hai domande su Zelda?\nO sulla cerimonia?\n[1-]Su Zelda[2-]Sulla cerimonia")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000005><color blue<Zelda>coloroff>?\n<pause 30>Sì, l'ho vista alla statua della Dea con il\ndirettore <color blue<Gaepora>coloroff>. La statua della Dea?\n<pause 30>Non sai dove sia?\nProprio in questi casi, usa <icon 34> e guarda\nun po' in giro!<0x10011:0x08cd>")
          			  case 1:
/*< 59>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000003>Anche tu partecipi\nal <color red<battesimo del volo >coloroff>di oggi?\n\n\nIl campione viene promosso alla <color red<classe\nsuperiore >coloroff>e, una volta diplomato,\ndiventa un <color red<cavaliere>coloroff> a tutti gli effetti.\n\nQuella del cavaliere è una mansione\nmolto importante! Assicura la pace\nsu Oltrenuvola. Non vedo l'ora di\nammirarti in azione!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000001>Buongiorno,\n<heroname>!\nHai dormito bene la notte scorsa?\n\nBene, pensavo che, visto che oggi\nc'è il <color red<battesimo del volo>coloroff>, non saresti\nriuscito a dormire dall'ansia!\n\nCome? Io? <pause 40>Eh, sì... oggi devo\nsistemare questo cancello...\nEra messo maluccio...\n\nOggi c'è una cerimonia importante,\nno? Quindi devo sistemarlo prima\nche inizi!\n\n<0x10009:0x000c0c00>A proposito, stamattina hai <color red<pregato>coloroff> a\ndovere la Dea?!\n\n\n<0x1000A:0x000600cd>Puoi farlo presso quel <color red<totem>coloroff>!\nQuando lo fai, potrai anche <color red<salvare\n>coloroff>i tuoi progressi di gioco!\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>Totem simili si trovano un po' ovunque\na Oltrenuvola!\n\n\nDovresti prendere la buona abitudine\ndi dire una preghiera ogni volta che\nne vedi uno!\n\n<color red<<0x10009:0x00000008>>coloroff>Come dice il detto: “<color red<Aiutati che la Dea\nti aiuta>coloroff>\".")
/*< 57>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<100>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x0c000800><0x10006:0xfbcd>...<0x10006:0x00cd> Farai in tempo?!\n<heroname>...\n\n\n<0x10009:0x0c000e06>Sono solo un gran\nfifone<0x10006:0xfbcd>...<0x10006:0x00cd> Mi dispiace tantissimo...")
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x0c010900><0x10006:0xfbcd>... ... ...<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<178>*/ 	start()
/*<204>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<205>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Ohi, ohi, giovane apprendista!\nMa cosa ti hanno insegnato a scuola?\nSe continui così non sarai mai un vero\ncavaliere!")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000002>Noi della squadra di soccorso siamo\nsempre pronti, ma fa' più attenzione!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*<221>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 34>*/ 		switch (scene_flags[58 /* 0x6 04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000f1300>Nooo...!\nL'<color blue<azzurrottero>coloroff>... l'avevo quasi preso!\n\n\n<0x10009:0x000a0900>Mmh... senza retino è impossibile\ncatturare gli insetti che volano...\n\n\nNon avrei dovuto buttare via quello che\navevo comprato alla <color red<bottega di Terry>coloroff>!\n<0x10009:0x00110200>Uff...")
          		  case 1:
/*<103>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000004>Per l'<color green<attacco con capriola>coloroff>,\nper prima cosa fai uno sprint...\n\n\nE mentre corri, SBAM! Se fai l'<color green<attacco\ncon capriola>coloroff>, come si deve, potrebbe\ncadere giù qualche cosa, sai?!\n\nDaaaaai!<pause 30> Prooovaaaciiii!!!")
/*<225>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 227, 'param3': 31}
/*<227>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          		}
          	  case 1:
/*<223>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 31}
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001><0x1000D:0x1906><heroname>! Aspetta!\n\n\n<0x1000D:0x0500>\nSenti... avrei una piccola richiesta per te...\nProveresti a fare uno <color green<sprint >coloroff>e un <color green<attacco\ncon capriola >coloroff>contro questo albero?\n\nCome stavo facendo io. Fai uno sprint e,\nquando sei proprio davanti all'albero, <color green<fai\nuna capriola>coloroff>! Daaaaai!<pause 30> Per favooooreee!")
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
/*<212>*/ 				printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000001>Ultimamente non sento più la voce\nche proveniva dal gabinetto...\nChissà chi era!")
          			  case 1:
/*<202>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 201, 'param3': 31}
/*<201>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Negli ultimi giorni, ho sentito una voce\npassando accanto al <color red<bagno di notte>coloroff>.\n\n\nChi potrebbe essere? Mah, chiunque\nsia, vorrei solo che facesse meno\nchiasso!")
          			}
          		  case 1:
          			flw_214:
/*<214>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<216>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<213>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<215>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <color red<letto>coloroff>!")
          				  case 1:
/*<171>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Ah, stai andando via?<pause 20>\nAllora non c'è bisogno\nche prepari anche per te...\n\n<0x10009:0x000a0c00>Fai attenzione, mi raccomando!\n\n\n\n<0x10009:0x00090800>Qualche volta torna a\nriposarti un po' in un letto\ncaldo! Ne avrai bisogno!")
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
/*<209>*/ 		printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00000002>Ohi, ohi, giovane apprendista!\nSe continui così non sarai mai un\nvero cavaliere!\n\nRicordati che il volo notturno è\nconsentito soltanto a noi della squadra\ndi soccorso! Mi raccomando, stai più\nattento!")
          	  case 1:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002>Ehi! Presta più attenzione la prossima\nvolta! Di notte, con il buio che c'è, è\nancora più facile cadere giù.\n\nInoltre, il volo notturno è consentito\nsoltanto a noi della squadra di\nsoccorso! Mi raccomando, stai più\nattento!")
          	}
          }

          void entrypoint_100_58() {
/*<228>*/ 	start()
/*<232>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          	  case 1:
/*<233>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<230>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 267, 'param3': 30}
/*<267>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Nella zona sud di Oltrenuvola, dove c'è il\nsimbolo (X), si trova la piazza. È lì che più\ntardi terremo il <color red<battesimo del volo>coloroff>!")
/*<264>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 231, 'param3': 30}
/*<231>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 229, 'param3': 34}
/*<229>*/ 		printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x00000404>Sai come consultare la mappa?\nPuoi premere (-) in qualsiasi momento\nper vedere dove ti trovi. Quando sei\nconfuso, consulta sempre la mappa!<0x10011:0x02cd>")
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
/*<203>*/ 				printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>Non sento alcuna voce provenire dal\nbagno già da un po'.\n\n\nPerò adesso Ras dorme nella stanza di\nBado e non fa altro che piangere e\ngridare... Che cosa si può fare?")
          			  case 1:
          				goto flw_212
          			}
          		  case 1:
/*<217>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<218>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<219>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<220>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <color red<letto>coloroff>!")
          				  case 1:
/*<162>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000b05>La sera è tutto più calmo, sembra che\nanche quelle pesti stiano dormendo...\n\n\n<0x10009:0x000a0800>Come va?\nPensi di riuscire a trovare Zelda?\nDevi mettercela tutta!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000003>Meglio chiudere, qui!\nNon vorrei che di sera entrasse qualche\nessere oscuro!\n\nSe proprio vuoi uscire, al primo piano\nè aperto, ma sarebbe meglio non uscire\naffatto di notte...\n\nCapisco che tu voglia andare a cercare\nla tua amica d'infanzia, Zelda...\n\n\nMa la notte, quasi nessuno s'azzarda\na uscire, qui a Oltrenuvola.")
          	}
          }

          void entrypoint_100_24() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>UAAAH!<pause 30>\nCe l'hai fatta!\nIl mio <color blue<azzurrottero>coloroff>!\n\nAspetta!")
/*<107>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_59() {
/*<269>*/ 	start()
/*<273>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          		flw_270:
/*<270>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Quindi penso che siano in piazza.\nNormalmente si può scendere da qui,\nper arrivare in città velocemente...\n\nMa questo cancello non si può ancora\naprire. Mi dispiace, dovrai fare il giro\ndella scuola... Ricordati di usare la mappa\ncon (-) se ti perdi!<0x10011:0x02cd>")
/*<275>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	  case 1:
/*<274>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<271>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 277, 'param3': 30}
/*<277>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Ah, stai ancora cercando di scendere verso\nla zona sud? Il simbolo (X) che vedi sulla\nmappa indica la piazza.\n\nÈ dove oggi si tiene il <color red<battesimo del volo>coloroff>,\nquindi è meglio se non aspetti troppo!")
/*<276>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 272, 'param3': 30}
/*<272>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 34}
          		goto flw_270
          	}
          }

          void entrypoint_100_25() {
/*<112>*/ 	start()
/*<113>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<119>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>Basta!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Ora lo dico al direttore e ti faccio\nespellere, sai?!")
          	  case 1:
/*<114>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<117>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Ehi! Fai attenzione! <0x1000D:0x1906>\nChe monello!\n\n\n<0x1000A:0x000f00cd>Se continui così, questa settimana\nti lascio a digiuno!")
/*<118>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>Ma che combini?!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Poi sistemi tu!")
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
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 2, line: 33 */ "<0x10009:0x00000004>Per andare alla statua della Dea senza\nperderti, premi (-) e consulta la\n<color red<mappa>coloroff>. Prova a cercare il tuo\nsolcanubi da lì!<0x10011:0x02cd>")
          		  case 1:
/*<246>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<261>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000057><heroname>, cosa c'è?\nSembri preoccupato...\n\n\nIl tuo solcanubi? Intendi quel\nbell'esemplare di carminio?\n<pause 40>Se l'ho visto?<0x10006:0xfbcd> Mmh...<0x10006:0x00cd>\n\n<0x10009:0x00110200>No, non l'ho visto...\n\n\n\n<0x10009:0x00090204>Dalla statua della Dea puoi vedere\ntutta la città, prova a cercarlo da lì!")
/*<262>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          			  case 1:
/*<253>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 259, 'param3': 31}
/*<259>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000057><heroname>, cosa c'è?\nSembri preoccupato...\n\n\nIl tuo solcanubi? Intendi quel\nbell'esemplare di carminio?\n<pause 40>Se l'ho visto?<0x10006:0xfbcd> Mmh...<0x10006:0x00cd>\n\n<0x10009:0x00110200>No, non l'ho visto...\n\n\n\n<0x10009:0x00090204>Dalla statua della Dea puoi vedere\ntutta la città, prova a cercarlo da lì!")
/*<260>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
/*<247>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<245>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 254, 'param3': 30}
/*<254>*/ 				printf(/* textboxtype: 0, unk: 0, line: 89 */ "La <color red<statua della Dea>coloroff> è quell'enorme statua\nche si trova a nord di Oltrenuvola. Ci sei\ngià stato, vero? Vai al luogo segnato con\nil simbolo (X). Non puoi sbagliare!")
/*<265>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 248, 'param3': 30}
/*<248>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 251, 'param3': 34}
/*<251>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<252>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<249>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000404>Sai come consultare la mappa, vero?\nPuoi premere (-) in qualsiasi momento\nper vedere dove ti trovi. Come si dice:\n\"Se hai bisogno di aiuto, (-) va premuto!\"<0x10011:0x02cd>")
/*<250>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000c0209>Oh... Non so cosa darei per fare la Dea\nal battesimo del volo! Una romantica\ncerimonia in compagnia di un cavaliere\naffascinante! Anche solo per una volta!")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Buongiorno, <heroname>!\nOggi soffia una brezza perfetta per\nla cerimonia che ci attende!\n\n<0x10009:0x00110200>Chi sarà il campione questa volta?!\n<color blue<Bado >coloroff>sembrerebbe il favorito...\n\n\n<0x10009:0x000c0200>Il campione riceverà un\npremio dalla ragazza\nche impersona la Dea!\n\n<0x10009:0x00000609>Lo trovo romanticissimo!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<144>*/ 	start()
/*<146>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<147>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090802>Eh?! <heroname>?!\nAvevo chiesto a <color blue<Gentirosso\n>coloroff>di farmi il favore, ma va bene così.\n\n<0x10009:0x000a0c00>Oggi hai una cerimonia\nimportante, sarai molto impegnato!\nTi ringrazio.")
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000a0401>Ah, <heroname>!\nSei venuto tu!\n\n\n<0x10009:0x00100802>L'avevo chiesto a <color blue<Gentirosso>coloroff>, però...\n\n\n\n<0x10009:0x00090400>Bah, alla fine non importa... mi\nporteresti qui la <color red<botte>coloroff>?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "")
          }

