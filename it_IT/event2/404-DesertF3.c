          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("Che paesaggio meraviglioso\nsi vede da qui...")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf("Ma... Non è...? Bzzz...<pause1E>\nPortalo subito al <b<drago del fulmine>>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Le <b<Terre di Ranel >>decisamente non\nsono adatte a far crescere quel\nbulbo... Bzzz...\n\x0E\x01\x09\x04\x00\x900Mi raccomando!\n\x0E\x01\x09\x04\x03\x900Con un <r<<r<frutto dell'<r<<r<albero della vita<r<>>,\nil drago del fulmine guarirebbe\nsicuramente.<pause1E>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x03\x900Che vuoi fare con quel bulbo?<pause1E> Per far\nguarire il <b<drago del fulmine >>serve un\n<r<frutto dell'albero della vita>>! Bzzz!\n\n\x0E\x01\x09\x04\x03\x900Allora, vuoi aiutare il drago\ndel fulmine?\n[1]Certo![2]Uhm...")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf("\x0E\x01\x09\x04\x03\x900Davvero?! Grazie! Allora vorrei che\nfosse piantato in un luogo migliore...\nBzzz...\n\n\x0E\x01\x09\x04\x03\x900Le <r<Terre di Ranel>><pling> decisamente\nnon sono adatte... Mi raccomando!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("\x0E\x01\x09\x04\x03\x900Che importa se sei qui per caso?\nVorrei che il bulbo fosse piantato\nin un luogo migliore... Bzzz...\n\n\x0E\x01\x09\x04\x03\x900Le <r<Terre di Ranel>><pling> decisamente\nnon sono adatte... Mi raccomando!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Il<b< drago del fulmine >>non sta bene...<pause0F>\nIl terreno non è fertile per far\ncrescere la pianta...<pause1E>\n\x0E\x01\x09\x04\x01\xC00Non c'è molto tempo... bzzz...")
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
/*<124>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD09Si vede che hai passione per gli scavi!\nAh... Se vieni a sapere qualcosa sulla\nleggenda dei tre draghi fammi sapere!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x2F00\x06Ti serve ancora qualcosa? Ah...\nSe vieni a sapere qualcosa sulla\nleggenda dei tre draghi fammi sapere!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD0APer tutti i porfidi! Qualcuno qui?!<pause1E>\nIo sono <b<Dragoron>>. Vivo qui per\neffettuare ricerche sulla <r<leggenda\ndei tre draghi>>.\n\x0E\x01\x09\x04\x2F00\x07Da queste parti di draghi non se\nne vede l'ombra, ma io sono\nconvinto che prima o poi\nsalterà fuori qualcosa...\nE continuo le mie ricerche.\nTu ti chiami Link?\nChe nome difficile!\n\n\x0E\x01\x09\x04\x2F01\xD00E cosa sei venuto a fare qui,\nLink?\n.<pause0F>.<pause0F>.<pause0F>\n\nStai cercando la <b<\x0E\x01\x09\x04\x2F00\x07fiamma sacra>>?\nMi sembra di averne già sentito\nparlare... <pause19>o forse mi sbaglio...\n\n\x0E\x01\x09\x04\x2F0F\x709Per tutti i lapislazzuli!<pause19> \x0E\x01\x09\x04\x2F00\xD00Ora ricordo!\nMi pare ci fosse scritto qualcosa\nnegli antichi testi sul <b<mare di\nsabbia di Ranel>>.\n\x0E\x01\x09\x04\x2F08\xD00I dettagli li ho dimenticati, ma se\nvai sempre dritto, troverai il\nmare di cui ti ho appena\nparlato.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD00Se vuoi arrivare al mare di sabbia di\nRanel, questa chiave ti tornerà utile.")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09In bocca al lupo,\nper tutti i lapislazzuli!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709Link! Sei entrato\nnella terra del drago!<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDChe invidia!<pause5A>\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDMi hai superato! Per tutti\ni porfidi!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("<r<\x0E\x01\x09\x04\x2F08\xD0A>>Ho trovato il passaggio che porta alla\nterra dove vive il <r<drago del fulmine>>...<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Ma è troppo stretto per me...\nnon ci passo... \x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700come posso fare?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Ehilà, Link!\n\n\n\nAllora com'è finita la storia della\n<b<fiamma sacra>>? L'hai trovata?\n\n\nNon ho fatto altro che pensarci...\nDai, racconta!\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Ho capito, alla fine, dopo una serie\ndi avventure, l'hai trovata!\nSei un mito,Link!")
/*<170>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AAnche io ho scoperto qualcosa\nsulla leggenda dei tre draghi...<pause0F>\n\n\nEffettivamente, esisteva una\nterra nascosta!\n\n\nHo trovato un <r<piccolo passaggio>><pling>\nnel quale non sono riuscito a entrare!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Penso di aver visto la terra dove vive il\n<r<drago del fulmine>>, uno dei tre draghi\ndella leggenda! \x0E\x01\x09\x04\x2F00\x800Credo che anche questi\nrobot c'entrino qualcosa.<pause0F>\n<r<\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCD>><r<Drago del fulmine>>, robot e pietre\ndel tempo<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDUn vero e proprio romanzo\ndi avventure!")
/*<146>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Ehi, Link!\nTi ricordi del tuo investimento?\nTi ho fatto aspettare un po'...<pause14>\n\nL'ho usato a dovere e ho trovato\nmoltissime pietre del tempo!\n\x0E\x01\x09\x04\x2F00\xD01Ti restituisco 10 volte la somma!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Ehilà, Link!\n\n\n\nAllora com'è finita la storia della\n<b<fiamma sacra>>? L'hai trovata?\n\n\nNon ho fatto altro che pensarci...\nDai, racconta!\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Ho capito, alla fine, dopo una serie\ndi avventure, l'hai trovata!\nSei un mito,Link!")
/*<171>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AAnche io ho scoperto qualcosa\nsulla leggenda dei tre draghi...<pause0F>\n\n\nEffettivamente, esisteva una\nterra nascosta!\n\n\nHo trovato un <r<piccolo passaggio>><pling>\nnel quale non sono riuscito a entrare!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Penso di aver visto la terra dove vive il\n<r<drago del fulmine>>, uno dei tre draghi\ndella leggenda! \x0E\x01\x09\x04\x2F00\x800Credo che anche questi\nrobot c'entrino qualcosa.<pause0F>\n<r<\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCD>><r<Drago del fulmine>>, robot e pietre\ndel tempo<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDUn vero e proprio romanzo\ndi avventure!")
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
/*< 46>*/ 			printf("Il drago del fulmine è guarito!\nÈ tutto merito tuo! Grazie! Bzzz!")
          		  case 1:
/*<136>*/ 			printf("Sei venuto a trovare il drago del\nfulmine?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf("Mangiando un <r<<r<frutto <r<dell'<rd<albero della\nvita<r<>>, il drago del fulmine guarirebbe\nsicuramente! Bzzz!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x09\x04\x03\xC00In queste terre l'erba cresce a stento...<pause1E>\n\x0E\x01\x09\x04\x01\xC00Di questo passo <b<\x0E\x01\x06\x02\xFECD>>il drago del fulmine...\nBzzz...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x00\x00Sono preoccupato per il drago del\nfulmine! Bzzz! Per favore, vai a\ncercare il <r<frutto dell'albero della vita>>!\nBzzz!")
          					  case 1:
/*< 37>*/ 						printf("\x0E\x01\x09\x04\x03\x900Per far guarire il drago del fulmine\nal più presto, ho piantato il <r<bulbo\ndell'albero della vita>>, che darà il frutto\nche guarisce da ogni malattia. Bzzz...")
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Che disgrazia! Il <b<drago del fulmine\n>>è malato! Bzzz!<pause0F>\n\n\n\x0E\x01\x09\x04\x03\xC00Per prendere le pietre del tempo\nè necessario il permesso del drago...<pause1E>\n\x0E\x01\x09\x04\x01\xC00Ma non è il momento di pensare\nalle pietre del tempo. Bzzz...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Ehi, ma tu non sei\nLink?!\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDChe piacere!<pause0F> Quasi come trovare\nun diamante! Volevo giusto\nrivederti!<pause0F>\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDPuoi venire qui, per favore?")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf("\x0E\x01\x09\x04\x2F08\x709Ehi, Link! Ho trovato un\npassaggio un po' più avanti!\n\n\nMa questa pietra non si riesce a\nspezzare... Credo ci vorrà\nun po' di tempo...")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("Se non ti sbrighi\nti lascio qui. Bzzz!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x03\x900Qui è pieno di pietre del tempo enormi!<pause1E>\n\x0E\x01\x09\x04\x00\x900Il <b<drago del fulmine >>ti ha dato\nil permesso?\n\n\x0E\x01\x09\x04\x01\x900Volevo giusto inviargli questa pietra\ndel tempo... Bzzz...")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf("\x0E\x01\x05\x04(\x00Qui intorno è pieno di mostri!<pause0F>\n\x0E\x01\x09\x04\x03\xC00Fai attenzione... Bzzz...")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf("Il drago del fulmine è di ottimo umore!\nBzzz!")
          		  case 1:
/*<137>*/ 			printf("Il drago del fulmine è guarito! Bzzz!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf("Ma che pensi di farne di quel frutto?!<pause2D>\nLo hai portato per il <b<drago del\nfulmine>>? Bzzz?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Ma qui nelle <b<Terre di Ranel>> le\npiante non crescono...\nBzzz...<pause1E>\n\x0E\x01\x09\x04\x03\x900Non ci sarà una terra più fertile?")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("Al di là del ponte abbiamo piantato\nun <r<<r<bulbo <r<dell'<rd<albero della vita<r<>>, il cui\nfrutto pare guarisca ogni malattia.\nBzzz.<pause1E>\n\x0E\x01\x09\x04\x00\xC00Ma in queste terre le piante\nnon crescono...")
          				  case 1:
/*< 16>*/ 					printf("\x0E\x01\x09\x04\x03\x900Abbiamo il permesso del drago\ndel fulmine e stiamo estraendo\nle <b<pietre del tempo>>.\n\n<pause1E>\x0E\x01\x09\x04\x03\xC00Ma in questo momento siamo\npreoccupati<pause0F> per la sua salute. Bzzz.<pause1E>\n\x0E\x01\x09\x04\x01\xC00Di questo passo il drago del fulmine...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf("<pause14>.<pause14>.<pause14>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<117>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x0B\x901Link!\nMi hai salvato la vita!\nSei il mio benefattore!\nVoglio farti un regalo!\n\x0E\x01\x09\x04\x00\x900Ripassa fra un po' che intanto\nlo preparo. Sono sicuro\nche ti piacerà!")
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
/*< 81>*/ 	printf("\x0E\x01\x05\x04K\x00Questa è la <b<gola di Ranel>>.\nSecondo la leggenda, qui vive\nun drago al servizio della Dea.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x05\x04Z\x00Si suppone che un'antica civiltà abbia\nrealizzato qui un opificio per produrre\npietre del tempo di ottima qualità.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Si vede che hai passione\nper gli scavi! Il tuo investimento\ndarà i suoi frutti! Te lo prometto!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD09Ti interessi di scavi?<pause3C>\nAllora senti...<pause3C>\n\n\n\x0E\x01\x09\x04\x2F00\xD07Sai, le ricerche sono costose...<pause1E>\nVuoi investire 10 rupie nella mia\nricerca?\n[1]Va bene[2-]Uhm...")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf("\x0E\x01\x09\x04\x2F02\x208Grazie!\nNe farò buon uso!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf("Non hai abbastanza denaro?\nBeh, quando ne avrai, conto\nsul tuo investimento!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x06\x02\xFFCDHo capito. Peccato, però...<pause1E>\nNessuno capisce davvero\nl'archeologia...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x05\x04Z\x00Per questo si vedono ancora le\ntracce dei carrelli e dei binari\nusati per trasportare le pietre.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Mare di sabbia di Ranel\nResti archeologici in quantità.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("A volte i corni di mostro sono\nattaccati ai fianchi dei boblin.\n\n\nÈ possibile sottrarglieli <r<afferrandoli\ncon la frusta>>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Deserto di Ranel\nSvela il mistero sopito\nnella miniera.")
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
/*<105>*/ 				printf("Link, cercheresti un buon\n<r<luogo dove farlo crescere>>?\n\n\n\x0E\x01\x09\x04\x11\x804Mi saresti di grande aiuto... coff...\nSe potessi mangiare un <b<frutto\ndell'albero della vita >>forse\nguarirei...\n\x0E\x01\x09\x04\x08\xA00Ma non potrai piantarlo in un posto\nqualsiasi... cerca un luogo dove la\n<r<terra sia fertile>>.")
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x08\xA03Ehi, Link!<pause0F> Quello è un\n<r<bulbo dell'albero della vita>>!\n\n\nPurtroppo credo che la mia fine sia\nvicina<pause1E> e non potrò vederlo crescere.\n\x0E\x01\x09\x04\x08\x110CCoff... Coff...\n\nDovrei guarire, per poterti cantare\nla melodia...<pause1E>\n\x0E\x01\x09\x04\x08\x1102Coff... Coff...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("Link, presto! Portami un\n<b<frutto dell'albero della vita>>!")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("I miei amici robot hanno piantato un\n<r<bulbo >>dell'<rd<albero della vita >>pensando\na me. Si dice che il suo frutto possa\ncurare ogni malattia, ma...<pause14> coff...\x0E\x01\x09\x04\x08\x110C<pause1E>\n\x0E\x01\x09\x04\x00\x00Non ne vuole sapere di crescere...<pause1E>\ncoff...\x0E\x01\x09\x04\x08\x110C<pause2D> \x0E\x01\x09\x04\x11\x804per me la fine è ormai vicina.<pause14>")
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x11\x804\x0E\x01\x08\x02\x2CD\x0E\x01\x06\x02\xFFCDCoff, coff...<pause1E>\n\n\n\n\x0E\x01\x09\x04\x08\xA03Oh...<pause14> abbiamo un ospite...\n\n\n\n\x0E\x01\x09\x04\x08\xA00Tu saresti un <b<umano>>, vero?\nQual è la ragione che\nti ha spinto fin qui?\n<pause0F>.<pause0F>.<pause0F>.\n\x0E\x01\x09\x04\x11\x80CUhm... così vieni dal <b<Cielo>>?\nE ti chiami Link?\n\x0E\x01\x06\x02\xFFCDCoff...<pause0F> non è che manca qualcosa\nal tuo nome?\n\x0E\x01\x09\x04\x08\xA00Per esempio<r< DR\x2010Link\nn°16>>, come i miei amici... che\nne dici?\n\n.<pause14>.<pause14>.<pause14>\nNon ti piace...?\n<pause0F>Ti piace...?<pause0F>\n\n\x0E\x01\x09\x04\x08\x802Coff... coff... insomma... cosa\nvuoi da me?\n\n\n\x0E\x01\x09\x04\x08\xA03Oh...<pause1E> coff... vorresti che ti\ninsegnassi la melodia?")
/*<130>*/ 					printf("\x0E\x01\x09\x04\x08\xA00Capisco... dunque, Link,\nche dici di arrivare dal Cielo,\nsaresti l'impavido prescelto\ndalla Dea?\nMa certo! Questo spiega tutto!\n\n\n\n\x0E\x01\x09\x04\n\xA00Sono davvero spiacente, ma...\nnon posso aiutarti al momento...\n\n\n\x0E\x01\x09\x04\n\xA00Te lo dico sorridendo, ma come puoi\nvedere,<pause1E> \x0E\x01\x09\x04\x00\x0Ccoff...\n\n\n\x0E\x01\x09\x04\n\xA00Sono afflitto da una malattia\ngrave e non mi trovo affatto\nnella condizione di cantare.\n\n\x0E\x01\x09\x04\x11\x804Certo è un vero onore ricevere dalla\nDea un incarico così importante...\nma come posso... coff coff...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("Miniera di Ranel\nMisteriose pietre del tempo\nin quantità.")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf("...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Vietato l'accesso se non si è\nin possesso del permesso del\n<b<drago del fulmine di Ranel>>.")
          }

