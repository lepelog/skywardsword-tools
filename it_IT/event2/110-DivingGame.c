          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>Vuoi che ti ripeta le regole?\n[1-]Sì[2]No")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Permettimi di spiegarti le regole.\n\n\n\n<0x10009:0x00120600>Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n<0x10009:0x000d0600>Ma se atterri nel <color red<settore grigio>coloroff>,\nallora sarò io a riempirmi le\ntasche.\n\n<0x10009:0x00121100>Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <color red<una sfida per temerari>coloroff>.\n\nPerciò non ti arrabbiare se finisci\nnella <color red<zona di penalità>coloroff>!")
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Durante la caduta libera incontrerai\n<color red<fortunanelli >coloroff>e <color red<svantasfere>coloroff>.\n\n\n<0x10009:0x000d0600>Ogni volta che attraversi un\n<color red<fortunanello>coloroff> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n<0x10009:0x00120c00>Invece, fai attenzione a non colpire\nuna <color red<svantasfera>coloroff>. Azzererà il\nbonus moltiplicatore!\n\n<0x10009:0x000d0600>Dimentico qualcosa? Ah, sì!\n<color red<Non puoi usare>coloroff> il manto magico\ndurante la caduta libera!")
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000d0006>Ora entra in quel cannone e via, verso\nil cielo!")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 					switch (zone_temp_flags[6 /* 0x1 40 */]) {
          					  case 0:
/*< 85>*/ 						printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00000001>Qualcosa mi dice che vuoi giocare!\nVero?! Sono <color red<20 rupie>coloroff>. Che ne dici?\n[1-]Accetto[2-]Spiegami\nle regole[3]Rifiuto")
          						flw_33:
/*< 33>*/ 						switch (choice(3)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									zone_temp_flags[5 /* 0x1 20 */] = true;
/*<  5>*/ 									printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Bene! Quando vuoi, raggiungi il centro\ndell'isola e il cannone ti sparerà in aria.\nChe si prepari il cannone!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										wait_frames(80)
          									}
          								  case 1:
/*<  7>*/ 									printf(/* textboxtype: 1, unk: 0, line: 7 */ "<pause 15><0x10009:0x00160c03>Temo tu non abbia abbastanza rupie!\n<0x10009:0x00000600>Torna da me quando ne avrai\nalmeno 20.")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Permettimi di spiegarti le regole.\n\n\n\n<0x10009:0x00120600>Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n<0x10009:0x000d0600>Ma se atterri nel <color red<settore grigio>coloroff>,\nallora sarò io a riempirmi le\ntasche.\n\n<0x10009:0x00121100>Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <color red<una sfida per temerari>coloroff>.\n\nPerciò non ti arrabbiare se finisci\nnella <color red<zona di penalità>coloroff>!")
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Durante la caduta libera incontrerai\n<color red<fortunanelli >coloroff>e <color red<svantasfere>coloroff>.\n\n\n<0x10009:0x000d0600>Ogni volta che attraversi un\n<color red<fortunanello>coloroff> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n<0x10009:0x00120c00>Invece, fai attenzione a non colpire\nuna <color red<svantasfera>coloroff>. Azzererà il\nbonus moltiplicatore!\n\n<0x10009:0x000d0600>Dimentico qualcosa? Ah, sì!\n<color red<Non puoi usare>coloroff> il manto magico\ndurante la caduta libera!")
          						  case 2:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>E chi se lo aspettava? Questo\ngiovanotto è forse un codardo?")
          						}
          					  case 1:
/*<  9>*/ 						printf(/* textboxtype: 1, unk: 1, line: 8 */ "<0x10009:0x000d0601>Evvai! Dunque questo giovanotto\nè interessato!\n\n\n<0x10009:0x00090600>Però non puoi partecipare\ngratuitamente, ti costerà\n<color red<20 rupie>coloroff>.\n[1-]Accetto[2-]Spiegami\nle regole[3]Rifiuto")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf(/* textboxtype: 1, unk: 1, line: 10 */ "<0x10009:0x00000001>Evviva! Forza, giovanotto. Un po' di\ncaduta libera?\n\n\nCome ringraziamento per aver\ntrovato il mio disco della roulette,\nti farò partecipare gratis!\n[1-]Accetto[2-]Spiegami\nle regole[3]Rifiuto")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000601>Giovanotto, ti devo tutto per aver\ntrovato il mio disco della roulette!\nOra il mio sogno si avvera...\n<color blue<Isola della roulette>coloroff>!\nDi norma, partecipare costerebbe\n20 rupie, ma sono in debito con te\ne poi è la tua prima volta...\n\nQuindi il primo tentativo è gratis!")
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Permettimi di spiegarti le regole.\n\n\n\n<0x10009:0x00120600>Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n<0x10009:0x000d0600>Ma se atterri nel <color red<settore grigio>coloroff>,\nallora sarò io a riempirmi le\ntasche.\n\n<0x10009:0x00121100>Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <color red<una sfida per temerari>coloroff>.\n\nPerciò non ti arrabbiare se finisci\nnella <color red<zona di penalità>coloroff>!")
/*< 22>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Durante la caduta libera incontrerai\n<color red<fortunanelli >coloroff>e <color red<svantasfere>coloroff>.\n\n\n<0x10009:0x000d0600>Ogni volta che attraversi un\n<color red<fortunanello>coloroff> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n<0x10009:0x00120c00>Invece, fai attenzione a non colpire\nuna <color red<svantasfera>coloroff>. Azzererà il\nbonus moltiplicatore!\n\n<0x10009:0x000d0600>Dimentico qualcosa? Ah, sì!\n<color red<Non puoi usare>coloroff> il manto magico\ndurante la caduta libera!")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120600>Perché non ci provi? Allora?\n[1-]Va bene! [2]Più tardi,\nforse")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>Vuoi che ti ripeta le regole?\n[1-]Sì[2]No")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Permettimi di spiegarti le regole.\n\n\n\n<0x10009:0x00120600>Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n<0x10009:0x000d0600>Ma se atterri nel <color red<settore grigio>coloroff>,\nallora sarò io a riempirmi le\ntasche.\n\n<0x10009:0x00121100>Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <color red<una sfida per temerari>coloroff>.\n\nPerciò non ti arrabbiare se finisci\nnella <color red<zona di penalità>coloroff>!")
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Durante la caduta libera incontrerai\n<color red<fortunanelli >coloroff>e <color red<svantasfere>coloroff>.\n\n\n<0x10009:0x000d0600>Ogni volta che attraversi un\n<color red<fortunanello>coloroff> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n<0x10009:0x00120c00>Invece, fai attenzione a non colpire\nuna <color red<svantasfera>coloroff>. Azzererà il\nbonus moltiplicatore!\n\n<0x10009:0x000d0600>Dimentico qualcosa? Ah, sì!\n<color red<Non puoi usare>coloroff> il manto magico\ndurante la caduta libera!")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>E chi se lo aspettava? Questo\ngiovanotto è forse un codardo?")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*<152>*/ 			switch (story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */]) {
          			  case 0:
/*<153>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			  case 1:
/*< 40>*/ 				switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          				  case 0:
/*<151>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 31}
/*< 91>*/ 					switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x000a0c10>Uffa... Sarebbe davvero un miracolo\nse qualcuno lo trovasse per me...\nMa non ci conto molto.")
          					  case 1:
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0000000f>Salve a te, giovanotto. Hai trovato il\ndisco della mia roulette?\nNo? Oh, beh...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf(/* textboxtype: 2, unk: 0, line: 44 */ "Il <color red<disco della roulette >coloroff>desiderato da\nquesto individuo non fa parte degli\nobiettivi di ricerca del <sound 4><color red<rilevatore>coloroff>.\n\nDesiderate impostare il <color red<<sound 4>rilevatore >coloroff>per\nla ricerca del <color red<disco della roulette>coloroff>?\n[1-]Sì[2]Non ora")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000005>Sì, mio signore.\nIl <sound 4><color red<rilevatore >coloroff>è ora impostato per\nla ricerca del <color red<disco della roulette>coloroff>,\ndesiderato da questo individuo.")
/*<147>*/ 							printf(/* textboxtype: 2, unk: 0, line: 42 */ "Probabilità che se qualcosa cadesse da\nquesta posizione finirebbe nel <color blue<deserto\ndi Ranel>coloroff>: 90%. Consiglio di perlustrare\nil deserto.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 2, unk: 0, line: 46 */ "<0x10012:0x00000005>Sì, mio signore. Il <sound 4>rilevatore non\nverrà reimpostato.")
          							goto flw_102
          						}
          					}
          				  case 1:
/*< 44>*/ 					switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          					  case 0:
/*<103>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*< 49>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 113, 'param3': 31}
/*<113>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*<114>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0000000f>Oh, niente. Davvero. Non preoccuparti\ndei miei problemi.\n\n\nIl <color blue<disco della roulette>coloroff> che portavo sulla\nschiena era solo una decorazione...\n<pause 10>Però...<pause 10> anche le decorazioni sono\nnecessarie. [1-]Te lo\ncerco[2]Rassegnati")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf(/* textboxtype: 1, unk: 0, line: 30 */ "E come faccio a cercare qualcosa che\nè caduto oltre le nuvole?\nPer me è impossibile!")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf(/* textboxtype: 2, unk: 0, line: 40 */ "Il <sound 4><color red<rilevatore >coloroff>può essere impostato per\nla ricerca dell'oggetto desiderato da\nquesto individuo.\n\nTuttavia, nel caso in cui sia in corso\nla ricerca di altri oggetti, la loro\nrilevazione sarà compromessa.\n\nVolete impostare il <color red<rilevatore >coloroff>per la\nricerca del <color red<disco della >coloroff><color red<roulette>coloroff>?\n[1-]Sì[2]Non ora")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x00000005>Sì, mio signore. Il <color red<rilevatore >coloroff>è ora\nimpostato per la ricerca del <color red<disco \ndella roulette>coloroff>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf(/* textboxtype: 2, unk: 0, line: 42 */ "Probabilità che se qualcosa cadesse da\nquesta posizione finirebbe nel <color blue<deserto\ndi Ranel>coloroff>: 90%. Consiglio di perlustrare\nil deserto.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x000a0c10>Uffa... Sarebbe davvero un miracolo\nse qualcuno lo trovasse per me...\nMa non ci conto molto.")
          									  case 1:
/*<111>*/ 										printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x00000005>Sì, mio signore. Per impostare il\nbersaglio del rilevatore, vi prego di\nparlare di nuovo con questo individuo.\n")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000010>Senza quello non posso far\ndivertire la gente!\n\n\n<0x10009:0x000a0c00>Che disastro!")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0000000f>Uffa... Che cosa posso fare?\nAccipicchia!\n[1-]Che c'è?[2]...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf(/* textboxtype: 1, unk: 0, line: 29 */ "Vedi, il mio disco della roulette\nè caduto di sotto, oltre le nuvole,\ne ora questo posto non è più\ndivertente per nessuno!\n<0x10009:0x000a0c00>Non so proprio che fare...\nForse dovrei solo mettermi\nil cuore in pace e rassegnarmi.\n[1-]Cercalo[2]Rassegnati")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0000000f>Che tristezza... il mio disco della\nroulette è precipitato di sotto...\n\n\nSenza quello non posso realizzare\nil mio sogno.\n\n\nSono così afflitto che non riesco a fare\nnulla.")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001><color blue<Isola della roulette>coloroff>! Devo ancora finire\ngli ultimi ritocchi, torna più tardi. Non\nte ne pentirai, te lo assicuro.")
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000d0001>Evvai! Forza giovanotto!\n\n\n\n<0x10009:0x00090600>Immagino ti stia chiedendo\ncosa ci faccio qui.\n[1-]Esatto[2]No")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000d0002>Ottima risposta!\n\n\n\n<0x10009:0x00080600>Voglio solo fare di quest'isola un\nbel posto dove la gente possa sentirsi\nfelice.\n\nVuoi sapere che nome le ho dato?<pause 30>\n<color blue<Isola della roulette>coloroff>!\n\n\n<0x10009:0x00120600>Però i preparativi non sono ancora\nultimati, torna più tardi.\nTi piacerà, vedrai!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x000d0c03>Beh, mi dispiace che tu non voglia\nsaperlo.\n\n\n<0x10009:0x00080600>Vedi, io voglio solo realizzare\ni sogni delle persone.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 31, 'param3': 44}
/*< 31>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
/*< 26>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 14, 'param3': 12}
/*< 14>*/ 	switch (context_related4(0)) {
          	  case 0:
/*<115>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 117, 'param3': 13}
/*<117>*/ 		wait_frames(50)
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x0000ff05>Oh, ma che peccato! Sei atterrato\nnel settore grigio.\n\n\nIo vinco <color red<<color red<<numeric arg2 0><color red< rupie>coloroff>!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		wait_frames(50)
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x0000ff05>Oh, hai vinto <color red<0 rupie>coloroff>. Non\nabbatterti, puoi sempre riprovare!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		wait_frames(85)
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00ffff06>Bene!\nSei atterrato in un settore vincente!\n\n\n<0x10009:0x000d0600>Più precisamente, il settore vale <numeric arg0 0> e il\nmoltiplicatore è x<numeric arg1 0>. Perciò, il totale\ndi <color red<rupie >coloroff>vinte è <color red<<numeric arg2 0>>coloroff>!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Sai quante rupie hai vinto? <numeric arg2 0>!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00120600>Vincerai un premio speciale\nattraversando 5 fortunanelli e\natterrando nel settore da 50 rupie.\n\n<0x10009:0x00081000>E ovviamente senza sfiorare\nnemmeno una svantasfera!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		wait_frames(130)
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00ffff06>Che spettacolo! Sei atterrato in un\nsettore da 50 rupie!\n\n\nIl tasso del moltiplicatore è <numeric arg1 0>\ne quindi vinci <color red<<color red<<color red<<numeric arg2 0><color red< <color red<rupie>coloroff>!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "Hai attraversato tutti i fortunanelli\ne sei atterrato nella zona migliore!\nTi sei guadagnato un super premio!")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				check_item_flag(489, 3)
/*<149>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 65}) {
          				  case 0:
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 12}
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00120600>Vincerai un premio speciale\nattraversando 5 fortunanelli e\natterrando nel settore da 50 rupie.\n\n<0x10009:0x00081000>E ovviamente senza sfiorare\nnemmeno una svantasfera!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000006>Grazie! Ora posso realizzare il mio\nsogno: l'Isola della roulette!\n\n\n<0x10009:0x00000a00>Sì sì sì! Sono troppo felice!")
/*< 67>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Sarai il mio primo cliente!\nQuesto è il minimo!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000007>Evviva! È proprio il mio disco della\nroulette!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x0000000b>Ma questo è...? Questo è...?\nMa sì! È proprio lui!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10012:0x00000064>Ho portato il disco.")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000064>Fammi sapere se hai ancora bisogno.")
          }

