          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Che paesaggio meraviglioso\nsi vede da qui...")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "Ma... Non è...? Bzzz...<pause 30>\nPortalo subito al <color blue<drago del fulmine>coloroff>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030c00>Le <color blue<Terre di Ranel >coloroff>decisamente non\nsono adatte a far crescere quel\nbulbo... Bzzz...\n<0x10009:0x00000900>Mi raccomando!\n<0x10009:0x00030900>Con un <color red<<color red<frutto dell'<color red<<color red<albero della vita<color red<>coloroff>,\nil drago del fulmine guarirebbe\nsicuramente.<pause 30>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00030900>Che vuoi fare con quel bulbo?<pause 30> Per far\nguarire il <color blue<drago del fulmine >coloroff>serve un\n<color red<frutto dell'albero della vita>coloroff>! Bzzz!\n\n<0x10009:0x00030900>Allora, vuoi aiutare il drago\ndel fulmine?\n[1-]Certo![2-]Uhm...")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00030900>Davvero?! Grazie! Allora vorrei che\nfosse piantato in un luogo migliore...\nBzzz...\n\n<0x10009:0x00030900>Le <color red<Terre di Ranel>coloroff><sound 4> decisamente\nnon sono adatte... Mi raccomando!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00030900>Che importa se sei qui per caso?\nVorrei che il bulbo fosse piantato\nin un luogo migliore... Bzzz...\n\n<0x10009:0x00030900>Le <color red<Terre di Ranel>coloroff><sound 4> decisamente\nnon sono adatte... Mi raccomando!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00030c00>Il<color blue< drago del fulmine >coloroff>non sta bene...<pause 15>\nIl terreno non è fertile per far\ncrescere la pianta...<pause 30>\n<0x10009:0x00010c00>Non c'è molto tempo... bzzz...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x2f080d09>Si vede che hai passione per gli scavi!\nAh... Se vieni a sapere qualcosa sulla\nleggenda dei tre draghi fammi sapere!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x2f000006>Ti serve ancora qualcosa? Ah...\nSe vieni a sapere qualcosa sulla\nleggenda dei tre draghi fammi sapere!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x2f000d0a>Per tutti i porfidi! Qualcuno qui?!<pause 30>\nIo sono <color blue<Dragoron>coloroff>. Vivo qui per\neffettuare ricerche sulla <color red<leggenda\ndei tre draghi>coloroff>.\n<0x10009:0x2f000007>Da queste parti di draghi non se\nne vede l'ombra, ma io sono\nconvinto che prima o poi\nsalterà fuori qualcosa...\nE continuo le mie ricerche.\nTu ti chiami <heroname>?\nChe nome difficile!\n\n<0x10009:0x2f010d00>E cosa sei venuto a fare qui,\n<heroname>?\n.<pause 15>.<pause 15>.<pause 15>\n\nStai cercando la <color blue<<0x10009:0x2f000007>fiamma sacra>coloroff>?\nMi sembra di averne già sentito\nparlare... <pause 25>o forse mi sbaglio...\n\n<0x10009:0x2f0f0709>Per tutti i lapislazzuli!<pause 25> <0x10009:0x2f000d00>Ora ricordo!\nMi pare ci fosse scritto qualcosa\nnegli antichi testi sul <color blue<mare di\nsabbia di Ranel>coloroff>.\n<0x10009:0x2f080d00>I dettagli li ho dimenticati, ma se\nvai sempre dritto, troverai il\nmare di cui ti ho appena\nparlato.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x2f080d00>Se vuoi arrivare al mare di sabbia di\nRanel, questa chiave ti tornerà utile.")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x2f080d09>In bocca al lupo,\nper tutti i lapislazzuli!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x2f080709><heroname>! Sei entrato\nnella terra del drago!<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>Che invidia!<pause 90>\n\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Mi hai superato! Per tutti\ni porfidi!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<color red<<0x10009:0x2f080d0a>>coloroff>Ho trovato il passaggio che porta alla\nterra dove vive il <color red<drago del fulmine>coloroff>...<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>Ma è troppo stretto per me...\nnon ci passo... <0x10006:0xffcd><0x10009:0x2f080700>come posso fare?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Ehilà, <heroname>!\n\n\n\nAllora com'è finita la storia della\n<color blue<fiamma sacra>coloroff>? L'hai trovata?\n\n\nNon ho fatto altro che pensarci...\nDai, racconta!\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Ho capito, alla fine, dopo una serie\ndi avventure, l'hai trovata!\nSei un mito,<heroname>!")
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>Anche io ho scoperto qualcosa\nsulla leggenda dei tre draghi...<pause 15>\n\n\nEffettivamente, esisteva una\nterra nascosta!\n\n\nHo trovato un <color red<piccolo passaggio>coloroff><sound 4>\nnel quale non sono riuscito a entrare!\n\n\n<0x10009:0x2f000d00>Penso di aver visto la terra dove vive il\n<color red<drago del fulmine>coloroff>, uno dei tre draghi\ndella leggenda! <0x10009:0x2f000800>Credo che anche questi\nrobot c'entrino qualcosa.<pause 15>\n<color red<<0x10009:0x2f010807><0x10006:0xffcd>>coloroff><color red<Drago del fulmine>coloroff>, robot e pietre\ndel tempo<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Un vero e proprio romanzo\ndi avventure!")
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080d00>Ehi, <heroname>!\nTi ricordi del tuo investimento?\nTi ho fatto aspettare un po'...<pause 20>\n\nL'ho usato a dovere e ho trovato\nmoltissime pietre del tempo!\n<0x10009:0x2f000d01>Ti restituisco 10 volte la somma!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Ehilà, <heroname>!\n\n\n\nAllora com'è finita la storia della\n<color blue<fiamma sacra>coloroff>? L'hai trovata?\n\n\nNon ho fatto altro che pensarci...\nDai, racconta!\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Ho capito, alla fine, dopo una serie\ndi avventure, l'hai trovata!\nSei un mito,<heroname>!")
/*<171>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>Anche io ho scoperto qualcosa\nsulla leggenda dei tre draghi...<pause 15>\n\n\nEffettivamente, esisteva una\nterra nascosta!\n\n\nHo trovato un <color red<piccolo passaggio>coloroff><sound 4>\nnel quale non sono riuscito a entrare!\n\n\n<0x10009:0x2f000d00>Penso di aver visto la terra dove vive il\n<color red<drago del fulmine>coloroff>, uno dei tre draghi\ndella leggenda! <0x10009:0x2f000800>Credo che anche questi\nrobot c'entrino qualcosa.<pause 15>\n<color red<<0x10009:0x2f010807><0x10006:0xffcd>>coloroff><color red<Drago del fulmine>coloroff>, robot e pietre\ndel tempo<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Un vero e proprio romanzo\ndi avventure!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il drago del fulmine è guarito!\nÈ tutto merito tuo! Grazie! Bzzz!")
          		  case 1:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "Sei venuto a trovare il drago del\nfulmine?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "Mangiando un <color red<<color red<frutto <color red<dell'<color also red<albero della\nvita<color red<>coloroff>, il drago del fulmine guarirebbe\nsicuramente! Bzzz!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00030c00>In queste terre l'erba cresce a stento...<pause 30>\n<0x10009:0x00010c00>Di questo passo <color blue<<0x10006:0xfecd>>coloroff>il drago del fulmine...\nBzzz...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000000>Sono preoccupato per il drago del\nfulmine! Bzzz! Per favore, vai a\ncercare il <color red<frutto dell'albero della vita>coloroff>!\nBzzz!")
          					  case 1:
/*< 37>*/ 						printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00030900>Per far guarire il drago del fulmine\nal più presto, ho piantato il <color red<bulbo\ndell'albero della vita>coloroff>, che darà il frutto\nche guarisce da ogni malattia. Bzzz...")
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030c00>Che disgrazia! Il <color blue<drago del fulmine\n>coloroff>è malato! Bzzz!<pause 15>\n\n\n<0x10009:0x00030c00>Per prendere le pietre del tempo\nè necessario il permesso del drago...<pause 30>\n<0x10009:0x00010c00>Ma non è il momento di pensare\nalle pietre del tempo. Bzzz...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Ehi, ma tu non sei\n<heroname>?!\n\n\n<0x10006:0xffcd><0x10008:0x01cd>Che piacere!<pause 15> Quasi come trovare\nun diamante! Volevo giusto\nrivederti!<pause 15>\n\n<0x10006:0x02cd><0x10008:0x01cd>Puoi venire qui, per favore?")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x2f080709>Ehi, <heroname>! Ho trovato un\npassaggio un po' più avanti!\n\n\nMa questa pietra non si riesce a\nspezzare... Credo ci vorrà\nun po' di tempo...")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "Se non ti sbrighi\nti lascio qui. Bzzz!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00030900>Qui è pieno di pietre del tempo enormi!<pause 30>\n<0x10009:0x00000900>Il <color blue<drago del fulmine >coloroff>ti ha dato\nil permesso?\n\n<0x10009:0x00010900>Volevo giusto inviargli questa pietra\ndel tempo... Bzzz...")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10005:0x00280000>Qui intorno è pieno di mostri!<pause 15>\n<0x10009:0x00030c00>Fai attenzione... Bzzz...")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "Il drago del fulmine è di ottimo umore!\nBzzz!")
          		  case 1:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Il drago del fulmine è guarito! Bzzz!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "Ma che pensi di farne di quel frutto?!<pause 45>\nLo hai portato per il <color blue<drago del\nfulmine>coloroff>? Bzzz?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00030c00>Ma qui nelle <color blue<Terre di Ranel>coloroff> le\npiante non crescono...\nBzzz...<pause 30>\n<0x10009:0x00030900>Non ci sarà una terra più fertile?")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "Al di là del ponte abbiamo piantato\nun <color red<<color red<bulbo <color red<dell'<color also red<albero della vita<color red<>coloroff>, il cui\nfrutto pare guarisca ogni malattia.\nBzzz.<pause 30>\n<0x10009:0x00000c00>Ma in queste terre le piante\nnon crescono...")
          				  case 1:
/*< 16>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00030900>Abbiamo il permesso del drago\ndel fulmine e stiamo estraendo\nle <color blue<pietre del tempo>coloroff>.\n\n<pause 30><0x10009:0x00030c00>Ma in questo momento siamo\npreoccupati<pause 15> per la sua salute. Bzzz.<pause 30>\n<0x10009:0x00010c00>Di questo passo il drago del fulmine...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000b0901><heroname>!\nMi hai salvato la vita!\nSei il mio benefattore!\nVoglio farti un regalo!\n<0x10009:0x00000900>Ripassa fra un po' che intanto\nlo preparo. Sono sicuro\nche ti piacerà!")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			entrypoint_006_04();
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10005:0x004b0000>Questa è la <color blue<gola di Ranel>coloroff>.\nSecondo la leggenda, qui vive\nun drago al servizio della Dea.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10005:0x005a0000>Si suppone che un'antica civiltà abbia\nrealizzato qui un opificio per produrre\npietre del tempo di ottima qualità.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x2f080d09>Si vede che hai passione\nper gli scavi! Il tuo investimento\ndarà i suoi frutti! Te lo prometto!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x2f000d09>Ti interessi di scavi?<pause 60>\nAllora senti...<pause 60>\n\n\n<0x10009:0x2f000d07>Sai, le ricerche sono costose...<pause 30>\nVuoi investire 10 rupie nella mia\nricerca?\n[1-]Va bene[2]Uhm...")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x2f020208>Grazie!\nNe farò buon uso!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Non hai abbastanza denaro?\nBeh, quando ne avrai, conto\nsul tuo investimento!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x2f010805><0x10006:0xffcd>Ho capito. Peccato, però...<pause 30>\nNessuno capisce davvero\nl'archeologia...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10005:0x005a0000>Per questo si vedono ancora le\ntracce dei carrelli e dei binari\nusati per trasportare le pietre.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 8, unk: 0, line: 65 */ "Mare di sabbia di Ranel\nResti archeologici in quantità.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "A volte i corni di mostro sono\nattaccati ai fianchi dei boblin.\n\n\nÈ possibile sottrarglieli <color red<afferrandoli\ncon la frusta>coloroff>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 8, unk: 0, line: 66 */ "Deserto di Ranel\nSvela il mistero sopito\nnella miniera.")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	check_item_flag(198, 1)
/*< 89>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		check_item_flag(497, 1)
/*< 41>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<heroname>, cercheresti un buon\n<color red<luogo dove farlo crescere>coloroff>?\n\n\n<0x10009:0x00110804>Mi saresti di grande aiuto... coff...\nSe potessi mangiare un <color blue<frutto\ndell'albero della vita >coloroff>forse\nguarirei...\n<0x10009:0x00080a00>Ma non potrai piantarlo in un posto\nqualsiasi... cerca un luogo dove la\n<color red<terra sia fertile>coloroff>.")
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00080a03>Ehi, <heroname>!<pause 15> Quello è un\n<color red<bulbo dell'albero della vita>coloroff>!\n\n\nPurtroppo credo che la mia fine sia\nvicina<pause 30> e non potrò vederlo crescere.\n<0x10009:0x0008110c>Coff... Coff...\n\nDovrei guarire, per poterti cantare\nla melodia...<pause 30>\n<0x10009:0x00081102>Coff... Coff...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<heroname>, presto! Portami un\n<color blue<frutto dell'albero della vita>coloroff>!")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "I miei amici robot hanno piantato un\n<color red<bulbo >coloroff>dell'<color also red<albero della vita >coloroff>pensando\na me. Si dice che il suo frutto possa\ncurare ogni malattia, ma...<pause 20> coff...<0x10009:0x0008110c><pause 30>\n<0x10009:0x00000000>Non ne vuole sapere di crescere...<pause 30>\ncoff...<0x10009:0x0008110c><pause 45> <0x10009:0x00110804>per me la fine è ormai vicina.<pause 20>")
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00110804><0x10008:0x02cd><0x10006:0xffcd>Coff, coff...<pause 30>\n\n\n\n<0x10009:0x00080a03>Oh...<pause 20> abbiamo un ospite...\n\n\n\n<0x10009:0x00080a00>Tu saresti un <color blue<umano>coloroff>, vero?\nQual è la ragione che\nti ha spinto fin qui?\n<pause 15>.<pause 15>.<pause 15>.\n<0x10009:0x0011080c>Uhm... così vieni dal <color blue<Cielo>coloroff>?\nE ti chiami <heroname>?\n<0x10006:0xffcd>Coff...<pause 15> non è che manca qualcosa\nal tuo nome?\n<0x10009:0x00080a00>Per esempio<color red< DR‐<heroname>\nn°16>coloroff>, come i miei amici... che\nne dici?\n\n.<pause 20>.<pause 20>.<pause 20>\nNon ti piace...?\n<pause 15>Ti piace...?<pause 15>\n\n<0x10009:0x00080802>Coff... coff... insomma... cosa\nvuoi da me?\n\n\n<0x10009:0x00080a03>Oh...<pause 30> coff... vorresti che ti\ninsegnassi la melodia?")
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a00>Capisco... dunque, <heroname>,\nche dici di arrivare dal Cielo,\nsaresti l'impavido prescelto\ndalla Dea?\nMa certo! Questo spiega tutto!\n\n\n\n<0x10009:0x000a0a00>Sono davvero spiacente, ma...\nnon posso aiutarti al momento...\n\n\n<0x10009:0x000a0a00>Te lo dico sorridendo, ma come puoi\nvedere,<pause 30> <0x10009:0x0000000c>coff...\n\n\n<0x10009:0x000a0a00>Sono afflitto da una malattia\ngrave e non mi trovo affatto\nnella condizione di cantare.\n\n<0x10009:0x00110804>Certo è un vero onore ricevere dalla\nDea un incarico così importante...\nma come posso... coff coff...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 8, unk: 0, line: 67 */ "Miniera di Ranel\nMisteriose pietre del tempo\nin quantità.")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 7, unk: 0, line: 68 */ "Vietato l'accesso se non si è\nin possesso del permesso del\n<color blue<drago del fulmine di Ranel>coloroff>.")
          }

