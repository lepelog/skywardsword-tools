          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000004>Fai come vuoi, ma ricordati che la sera\nnon puoi volare!\n\n\nSe vuoi girare per il cielo, dovrai\naspettare il mattino...\nVai a letto!")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000001>Cosa ci fai in giro di sera?!\n\n\n\n<0x10009:0x000c0c09>Che?! Spero proprio che tu non abbia\nintenzione di volare ora!\n\n\n<0x10009:0x00090c00>I solcanubi non hanno una vista che gli\npermette di volare di notte! Solo quelli\naddestrati riescono a farlo!\n\n<0x10009:0x00080400>Se vuoi volare, è meglio che aspetti\nche sia mattina! Se fai una bella\ndormita farà subito giorno! Spero\nche non sia troppo tardi per te.\n")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c00>Non restare qui a scuola, vai fuori a\ncercare il tuo solcanubi...\n\n\nIo farò qualche ricerca e se scopro\nqualcosa ti farò sapere subito!")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000c06>Ehilà! Cosa ci fai ancora in giro\nper la scuola?!\n\n\n<0x10009:0x000c0c09>Cosa?!<pause 20> Hai chiamato a te il solcanubi\ne non è arrivato?!\n\n\n<0x10009:0x00010c00>Un solcanubi guardiano che non\nrisponde al padrone... mmh...\n\n\nÈ la prima volta che sento una cosa\nsimile, non saprei dire come possa\naccadere...\n\n<0x10009:0x00080400>Mmh... come studente più anziano\ndevo aiutarti in qualche modo...\n\n\n<0x10009:0x000b0c00>Farò qualche ricerca per te, tu\nintanto vai in piazza e prova\na chiedere in giro!")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x000c0405>Se hai qualche domanda sui solcanubi,\nchiedi pure a me!")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00090401>Buongiorno, <heroname>!\n\n\n\n<0x10009:0x00080400>Sei pronto per il <color red<battesimo del volo\n>coloroff>di oggi?\n\n\nTutti gli altri sono nella piazza a\nesercitarsi, ma tu sembri piuttosto\nrilassato!\n\n<0x10009:0x000b0400>Il tuo solcanubi è davvero un\nbell'esemplare di <color red<carminio>coloroff>!\nAllo scorso battesimo del volo ho vinto\ncon il mio solcanubi...\nMa, onestamente, non credo che\nsarei stato in grado di battere il tuo!\n\n\n<0x10009:0x00080400>Ogni giorno faccio ricerche in merito\nalla potenza dei solcanubi e alle\ncapacità dei loro cavalieri...\n\n<0x10009:0x000c0405>Quindi quando hai qualche dubbio,\nnon esitare a venirmi a chiedere aiuto!")
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
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000006>Se cerchi <color blue<Sparvio>coloroff>, sarà davanti alla\n<color red<palestra di scherma>coloroff>, dietro la scuola\nd'armi.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080406>Come?\n<pause 40> Vuoi sapere dove si trova <color blue<Bado>coloroff>?\n\n\n<0x10009:0x00000d00>Sta di nuovo combinando qualcosa\nquello lì?!\n\n\n<0x10009:0x000c0400>Non so come aiutarti, però magari\n<color blue<Sparvio >coloroff>può!\n\n\n<0x10009:0x00080e04>A proposito, credo che <color blue<Sparvio >coloroff>stesse\nproprio cercando te<0x10006:0xfccd>...<0x10006:0x00cd>\nLo trovi davanti alla <color red<palestra\ndi scherma>coloroff>!")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06>L'esperto di solcanubi\nè <color blue<Sparvio>coloroff>. L'ho visto prima al piano\ndi sotto, prova a chiedere a lui!")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Non capisco perché debba occuparmi io di\naprire la porta, visto che è compito suo!\nUffa!")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00010406>Oh, <heroname>! Che succede?\nHai l'aria preoccupata.\n\n\n<0x10009:0x00080d00>Che cosa?! <pause 40>Il tuo <color red<solcanubi>coloroff> è\nscomparso?!\n\n\n<0x10009:0x000c0d12>Uhm<0x10006:0xfccd>... <0x10006:0x00cd>Sono stata dentro la scuola\nfinora, non ne so proprio nulla...")
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06>L'esperto di solcanubi\nè <color blue<Sparvio>coloroff>. L'ho visto prima al piano\ndi sotto, prova a chiedere a lui!")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00080900>Se vincerai durante il <color red<battesimo del\nvolo>coloroff>, saremo insieme nella<color red< classe\nsuperiore>coloroff> per diventare cavalieri!")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00080901>Buongiorno, <heroname>!\nIn bocca al lupo per il <color red<battesimo del\nvolo >coloroff>di oggi!\n\n<0x10009:0x00000400>Se vincerai verrai promosso alla <color red<classe\nsuperiore >coloroff>insieme a me e,\ndiplomandoti, potrai diventare\n<color red<cavaliere>coloroff>.\n<0x10009:0x00080900>Daranno anche a te una bellissima\n<color red<uniforme da cavaliere>coloroff> come la mia!\nIh ih ih! Ti donerebbe, credo!\n\n<0x10009:0x000b0713>Aah... quasi quanto dona a lui...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00000001>Guarda questa statua... Non saprei dire\nda quanto tempo si trovi qui...\n\n\nHa solo un occhio, che pena, poverina!\n\n\n\nPuoi guardarla meglio premendo (C)! <0x10011:0x06cd>")
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
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000004>Uh‐uh!\nAnche per oggi una\nzuppa gustosissima!")
          	  case 1:
/*<161>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000002>Quel ragazzino è incorreggibile!!!\nGli avevo anche detto che era quasi\npronto da mangiare!\n\nDove sarà finito?! Di certo a inseguire\nqualche insetto...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000007>Ma che fai?!\nNon puoi riprendertela!\n\n\n<0x10009:0x00001200>Sono certa che hai\naltre cose da fare...\nSu, vai ora!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00080909> <heroname>!\nGrazie a te sono\ndavvero felice!\n\nLui farà la ronda anche\noggi, anche se nessuno\ngli ha chiesto di farlo!\n\n<0x10009:0x000e090a>Ha tutta la mia ammirazione!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000e12>Non so cosa fare con la lettera\ndi Ras...\n\n\n<0x10009:0x000b0e00>Cosa potrebbe pensare Sparvio\nse lo venisse a sapere?!")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00080d57>Vuoi parlarmi?!\nNon puoi aspettare fino\na domani?!")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000a0e57>Ti pare il caso di stare\nnella stanza di una\nragazza a quest'ora di sera?!\n\nTra poco andrò a farmi\nun bagno, ti spiace\nandare via?!\n\n<0x10009:0x000c0e14>Però la vasca è\noccupata da un bel pezzo,\nuffa.")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000c0d14>Zelda è così brava\na volare, com'è possibile che \nsia caduta oltre il letto di nubi?!\n\n<0x10009:0x000a0d06>Cosa?! È comparso\nanche un fantasma?! Mi sa che hai\nbattuto molto forte la testa...")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010002><heroname>!<0x1000D:0x1906>")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Se vai in piazza, esci dal piano terra!\nQuella è la via più rapida.\n\n\n<0x10009:0x00090400>Inoltre, l'ingresso del piano superiore\nè ancora chiuso a chiave, non si può\npassare da lì.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000c0c16>Ma cosa sta combinando la vecchietta\ndella mensa? Più tardi andrò\na lamentarmi!")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c05>Lascia che ti dia un consiglio...\n\n\n\nPrima di andare in posti pericolosi,\n<color red<rivolgi una preghiera alla Dea e salva>coloroff>.\n\n\nPuoi vedere sulla mappa dove sono\ncollocati i <color red<totem >coloroff>presso i quali puoi\nrivolgere le preghiere.")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <color red<spada>coloroff>...\n \nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n<0x10009:0x00090c00>Poco fa, ho visto entrare nella palestra\ndi scherma il <color blue<primo cavaliere>coloroff>. Potresti\nchiedere a lui di prestarti una spada!")
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
/*< 71>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00080401><heroname>!\nStavo giusto cercando te!")
          			flw_73:
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090c00>Ho saputo che il tuo solcanubi\nè scomparso! Ho provato a\nfare delle ricerche...\n\n<0x10009:0x00000c00>Ne ho parlato con Gentirosso\ne gli ho fatto una marea\ndi domande...")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0c000812>Scusa, <heroname>!\n\n\n\n<0x10009:0x0c000800>Volevo dirtelo prima, ma<0x10006:0xfbcd>...<0x10006:0x00cd> se <color blue<Bado\n>coloroff>venisse a sapere che te l'ho detto...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000c16><color blue<Bado >coloroff>si è assicurato\nche tutti stessero zitti...")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080c00>Forza...<pause 35> Digli la verità!")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c070e11>Poco fa ero in mensa a fare le pulizie\ne sono arrivati Bado e gli altri due...\n\n\n<0x10009:0x0c000800>Non si sono accorti di me, e si\nconsultavano su come <color red<nascondere\n>coloroff>il tuo solcanubi.\n\n<0x10009:0x0c000800>Avevo pensato di avvertirti,\nma mentre lasciavo la\nmensa...\n\n<0x10009:0x0c010e00>Mi hanno visto...\n\n\n\n<0x10009:0x0c070e00>E mi hanno detto che se fossi venuto\na dirtelo, non me l'avrebbero fatta\npassare liscia...")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090c00>Fatto sta che <color blue<Bado >coloroff>e gli altri avevano\nintenzione di catturare il tuo solcanubi\ne nasconderlo vicino alla <color red<<sound 4>cascata>coloroff>.\n\n<0x10009:0x00080c00>Dunque, la cascata è<0x10006:0xfbcd>...<0x10006:0x00cd>\n<pause 40>Mmh... dammi un secondo la <color red<mappa>coloroff>.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Guarda qui! (X) indica dove si trova la\n<color red<cascata>coloroff>, credo!")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000404>Sai come consultare una mappa, vero?\nPremi (+) per vedere dove ti trovi al\nmomento.<0x10011:0x03cd>\n\n<0x10009:0x00080400>Quindi, quando ti senti confuso,\npremi (+)!<0x10011:0x03cd>")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0c000819>Perdonami, <heroname>!\nSono davvero un fifone...\nperdonami!")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000c01><heroname>!\nAppena in tempo!")
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
/*< 57>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Se si parla di solcanubi, <color blue<Sparvio >coloroff>ne sa\npiù di tutti!\nProva a chiedergli aiuto!\n\nLo conosci, no?\nLo trovi di certo alla scuola d'armi!")
          		  case 1:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000004>Cos'è successo, <heroname>?<pause 40>\n\n\n\n<0x10009:0x00001100>Cosa?! Il tuo solcanubi...<pause 50>\nè scomparso<0x10006:0xfbcd>...<0x10006:0x00cd>?\n\n\n<0x10009:0x00111100>Ma è terribile!\nNon vedevo l'ora di vederlo in azione!\nComunque, no, non l'ho visto<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n<0x10009:0x000a1100>Però<0x10006:0xfbcd>...<0x10006:0x00cd> quando si tratta di solcanubi\nil <color red<più preparato in merito>coloroff>, su\nOltrenuvola, è di certo <color blue<<sound 4>Sparvio>coloroff>!\n\n<0x10009:0x00000700>Prova a chiedergli una mano,\npotrebbe darti qualche buon\nconsiglio!")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000a0705>Aspetto con ansia di\nvedere le prodezze del\ntuo solcanubi carminio!")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>Ehi <heroname>! Tra poco\ncomincia il battesimo del volo!\n\n\nL'ultima volta ha vinto <color blue<Sparvio >coloroff>per un\npelo! Che spettacolo avvincente!\n\n\n<0x10009:0x000a0700>Questa volta potrai farti valere tu,\ncon il tuo solcanubi carminio!\n<pause 40>Non vedo l'ora!")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000002><0x10008:0x02cd>Eeeehii!<0x1000D:0x1906>\n<heroname>!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10008:0x02cd>Da questa parte!<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>Vieni qui, vorrei parlarti del tuo\nsolcanubi!!")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Stai parlando del tuo solcanubi?!\n\n\n\n<0x10009:0x00100e00>Guardami, sono impegnatissima!!!\nParliamo dopo!")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Tra poco c'è il <color red<battesimo del volo>coloroff>,\nmi pare, no?!\nSmettila di girarti i pollici, va' subito!")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000002>Perché <color blue<Gentirosso >coloroff>ci mette così tanto?\nGli avevo chiesto di portarmi\nqui una <color red<botte>coloroff>, ma ancora\nnon si fa vedere...\n<0x10009:0x00100f00>Che starà combinando?!")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x00000001>Signore...\nSecondo i miei calcoli questa\nluce è un indizio per le tre fiamme.\n\nSuggerisco di seguire il raggio di luce.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000004>Ah, <heroname>!")
/*<101>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Se hai intenzione di andare alla\ncascata è meglio che ti porti almeno\nuna <color red<spada>coloroff>...\n \nPare che lì ci siano parecchie creature\nstrane, ultimamente...\n\n\n<0x10009:0x00090c00>Poco fa, ho visto entrare nella palestra\ndi scherma il <color blue<primo cavaliere>coloroff>. Potresti\nchiedere a lui di prestarti una spada!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000005>Come?\nVuoi chiedermi qualcos'altro?\n[1-]Solcanubi[2-]Bado")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000012>A esser sincero, non so di preciso\ndove fossero diretti...")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004><color blue<Bado>coloroff>? Era con la sua combriccola,\ndicevano che sarebbero andati in\npiazza per assistere al battesimo del\nvolo...\nDi solito puoi scendere da qui,\nper arrivare in città velocemente,\nma questo cancello non si può\nancora aprire.\nHo lasciato aperto quello di sotto,\nperò. Mi dispiace, dovrai fare il giro\ndella scuola...")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Uh? Cos'è successo? Ti vedo\npreoccupato! Come?!\nÈ sparito il tuo solcanubi?!\n\n<pause 50>Beh... <sound 4>l'ho <color red<visto >coloroff>prima!\n\n\n\nEra inseguito da <color blue<Bado >coloroff>e la sua\ncombriccola, aveva tutta l'aria\ndi essere in fuga!\n[1-]Verso dove?[2-]Dov'è Bado?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00000003>Questo cancello ancora non è pronto,\nper ora evita di passare da qui! Hai\ndomande su Zelda? O sulla cerimonia?\n[1-]Su Zelda[2-]Sulla\ncerimonia")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000005><color blue<Zelda>coloroff>?\n<pause 30>Sì, l'ho vista alla statua della\nDea con il direttore <color blue<Gaepora>coloroff>.\nLa statua della Dea? <pause 30>Non sai dove sia?\nProprio in questi casi, usa (C) e\nguarda un po' in giro!<0x10011:0x06cd>\nLa vista è splendida da qui!\n<color green<Guarda in giro >coloroff>con (C).\nSe ti confondi, con (v) puoi <color green<centrare\nla visuale>coloroff>!\nNon scordarlo!<0x10011:0x06cd><0x10011:0x09cd>")
          			  case 1:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000003>Anche tu partecipi\nal <color red<battesimo del volo >coloroff>di oggi?\n\n\nIl campione viene promosso alla <color red<classe\nsuperiore >coloroff>e, una volta diplomato, \ndiventa un <color red<cavaliere>coloroff> a tutti gli effetti.\n\nQuella del cavaliere è una mansione\nmolto importante! Assicura la pace\nsu Oltrenuvola. Non vedo l'ora di\nammirarti in azione!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000001>Buongiorno,\n<heroname>!\nHai dormito bene la notte scorsa?\n\nBene, pensavo che, visto che oggi\nc'è il <color red<battesimo del volo>coloroff>, non saresti\nriuscito a dormire dall'ansia!\n\nCome? Io? <pause 40>Eh, sì... oggi devo\nsistemare questo cancello...\nEra messo maluccio...\n\nOggi c'è una cerimonia importante,\nno? Quindi devo sistemarlo prima\nche inizi!\n\n<0x10009:0x000c0c00>A proposito, stamattina hai <color red<pregato>coloroff> a\ndovere la Dea?!\n\n\n<0x1000A:0x000600cd>Puoi farlo presso quel <color red<totem>coloroff>!\nQuando lo fai, potrai anche <color red<salvare\n>coloroff>i tuoi progressi di gioco!\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>Totem simili si trovano un po' ovunque\na Oltrenuvola!\n\n\nDovresti prendere la buona abitudine\ndi dire una preghiera ogni volta che\nne vedi uno!\n\n<color red<<0x10009:0x00000008>>coloroff>Come dice il detto: “<color red<Aiutati che la Dea\nti aiuta>coloroff>\".")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0c000800><0x10006:0xfbcd>...<0x10006:0x00cd> Farai in tempo?!\n<heroname>...\n\n\n<0x10009:0x0c000e06>Sono solo un gran\nfifone<0x10006:0xfbcd>...<0x10006:0x00cd> Mi dispiace tantissimo...")
          	  case 1:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0c010900><0x10006:0xfbcd>... ... ...<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000002>Ohi, ohi, giovane apprendista!\nMa cosa ti hanno insegnato a scuola?\nSe continui così non sarai mai un vero\ncavaliere!")
          	  case 1:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000002>Noi della squadra di soccorso\nsiamo sempre pronti,\nma fa' più attenzione!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000f1300>Nooo...!\nL'<color blue<azzurrottero>coloroff>...\nl'avevo quasi preso!\n\n<0x10009:0x000a0900>Mmh... senza retino è\nimpossibile catturare gli insetti\nche volano...\n\nNon avrei dovuto buttare via\nquello che avevo comprato \nalla <color red<bottega di Terry>coloroff>!\n<0x10009:0x00110200>Uff...")
          	  case 1:
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>Per l'<color green<attacco con capriola>coloroff>,\nper prima cosa fai uno sprint\ncon (A)... \n\nPoi <color red<agita il Nunchuk >coloroff>davanti al punto\nin cui vuoi effettuare l'attacco,\nappena prima di arrivarci.\n\nSe fai TUMP con l'<color green<attacco\ncon capriola>coloroff>, potrebbe cadere\ngiù qualche cosa, sai?!\n\nDaaaaai!<pause 30> Prooovaaaciiii!!!")
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
/*<220>*/ 				printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Ultimamente non sento più la voce\nche proveniva dal gabinetto...\nChissà chi era!")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Negli ultimi giorni, ho sentito una voce\npassando accanto al <color red<bagno di notte>coloroff>.\n\n\nChi potrebbe essere? Mah, chiunque\nsia, vorrei solo che facesse meno\nchiasso!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <color red<letto>coloroff>!")
          				  case 1:
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000001>Ah, stai andando via?<pause 20>\nAllora non c'è bisogno\nche prepari anche per te...\n\n<0x10009:0x000a0c00>Fai attenzione, mi raccomando!\n\n\n\n<0x10009:0x00090800>Qualche volta torna a\nriposarti un po' in un letto\ncaldo! Ne avrai bisogno!")
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
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000002>Ohi, ohi, giovane apprendista!\nSe continui così non sarai mai un\nvero cavaliere!\n\nRicordati che il volo notturno è\nconsentito soltanto a noi della squadra\ndi soccorso! Mi raccomando, stai più\nattento!")
          	  case 1:
/*<216>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Ehi! Presta più attenzione la prossima\nvolta! Di notte, con il buio che c'è, è\nancora più facile cadere giù.\n\nInoltre, il volo notturno è consentito\nsoltanto a noi della squadra di\nsoccorso! Mi raccomando, stai più\nattento!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000001><0x1000D:0x1906><heroname>! Aspetta!\n\n\n<0x1000D:0x0500>\nSenti... avrei una \npiccola richiesta per te...\n\n\nProvi a fare uno <color green<sprint >coloroff>con (A) e un\n<color green<attacco con capriola >coloroff>contro questo\nalbero?\n\nProprio davanti all'albero, <color red<scuoti\nil Nunchuk >coloroff>e <color green<fai  una capriola>coloroff>!\nDaaaaai!<pause 30> Per favooooreee!!!")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Non sento alcuna voce provenire dal\nbagno già da un po'.\n\n\nPerò adesso Ras dorme nella stanza di\nBado e non fa altro che piangere e\ngridare... Che cosa si può fare?")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Non ho più visto Bado in giro, negli\nultimi tempi... Che fine avrà fatto quel\nragazzo?!")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Allora, come stai? Visto che sei venuto\nfin qui, potresti approfittarne per\nriposare bello comodo in un <color red<letto>coloroff>!")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000b05>La sera è tutto più calmo,\nsembra che anche quelle\npesti stiano dormendo...\n\n<0x10009:0x000a0800>Come va? Pensi di\nriuscire a trovare Zelda?\nDevi mettercela tutta!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003>Meglio chiudere, qui!\nNon vorrei che di sera entrasse\nqualche essere oscuro!\n\nSe proprio vuoi uscire,\nal primo piano è aperto,\nma sarebbe meglio non\nuscire affatto di notte...\nCapisco che tu voglia\nandare a cercare la tua\namica d'infanzia, Zelda...\n\nMa la notte, quasi nessuno\ns'azzarda a uscire,\nqui a Oltrenuvola.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000008>UAAAH!<pause 30>\nCe l'hai fatta!\nIl mio <color blue<azzurrottero>coloroff>!\n\nAspetta!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>Basta!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Ora lo dico al direttore e ti faccio\nespellere, sai?!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Ehi! Fai attenzione! <0x1000D:0x1906>\nChe monello!\n\n\n<0x1000A:0x000f00cd>Se continui così, questa settimana\nti lascio a digiuno!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>Ma che combini?!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Poi sistemi tu!")
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
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>Per andare alla statua della Dea senza\nperderti, premi (+) e consulta la\n<color red<mappa>coloroff>. Prova a cercare il tuo\nsolcanubi da lì!<0x10011:0x03cd>")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000057> <heroname>, cosa c'è?\nSembri preoccupato...\n\n\nIl tuo solcanubi? Intendi quel\nbell'esemplare di carminio?\n<pause 40>Se l'ho visto?<0x10006:0xfbcd> Mmh...<0x10006:0x00cd>\n\n<0x10009:0x00110200>No, non l'ho visto...\n\n\n\n<0x10009:0x00090204>Dalla statua della Dea puoi vedere\ntutta la città, prova a cercarlo da lì!\n\n\nPer arrivare alla statua senza\nperderti, premi (+) e consulta\nla <color red<mappa>coloroff>.<0x10011:0x03cd>")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000c0209>Oh... Non so cosa darei per fare la Dea\nal battesimo del volo! Una romantica\ncerimonia in compagnia di un cavaliere\naffascinante! Anche solo per una volta!")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000001>Buongiorno, <heroname>!\nOggi soffia una brezza perfetta per\nla cerimonia che ci attende!\n\n<0x10009:0x00110200>Chi sarà il campione questa volta?!\n<color blue<Bado >coloroff>sembrerebbe il favorito...\n\n\n<0x10009:0x000c0200>Il campione riceverà un\npremio dalla ragazza \nche impersona la Dea!\n\n<0x10009:0x00000609>Lo trovo romanticissimo!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090802>Eh?! <heroname>?!\nAvevo chiesto a <color blue<Gentirosso\n>coloroff>di farmi il favore, ma va bene così.\n\n<0x10009:0x000a0c00>Oggi hai una cerimonia\nimportante, sarai molto impegnato!\nTi ringrazio.")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000a0401>Ah, <heroname>!\nSei venuto tu!\n\n\n<0x10009:0x00100802>L'avevo chiesto a <color blue<Gentirosso>coloroff>, però...\n\n\n\n<0x10009:0x00090400>Bah, alla fine non importa... mi\nporteresti qui la <color red<botte>coloroff>?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "")
          }

