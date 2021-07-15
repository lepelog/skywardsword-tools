          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x00\x01Vuoi che ti ripeta le regole?\n[1]Sì[2-]No")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x0D\x602Permettimi di spiegarti le regole.\n\n\n\n\x0E\x01\x09\x04\x12\x600Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n\x0E\x01\x09\x04\x0D\x600Ma se atterri nel <r<settore grigio>>,\nallora sarò io a riempirmi le\ntasche.\n\n\x0E\x01\x09\x04\x12\x1100Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <r<una sfida per temerari>>.\n\nPerciò non ti arrabbiare se finisci\nnella <r<zona di penalità>>!")
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x600Durante la caduta libera incontrerai\n<r<fortunanelli >>e <r<svantasfere>>.\n\n\n\x0E\x01\x09\x04\x0D\x600Ogni volta che attraversi un\n<r<fortunanello>> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n\x0E\x01\x09\x04\x12\xC00Invece, fai attenzione a non colpire\nuna <r<svantasfera>>. Azzererà il\nbonus moltiplicatore!\n\n\x0E\x01\x09\x04\x0D\x600Dimentico qualcosa? Ah, sì!\n<r<Non puoi usare>> il manto magico\ndurante la caduta libera!")
          			  case 1:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x0D\x06Ora entra in quel cannone e via, verso\nil cielo!")
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
/*< 85>*/ 						printf("\x0E\x01\x09\x04\x00\x01Qualcosa mi dice che vuoi giocare!\nVero?! Sono <r<20 rupie>>. Che ne dici?\n[1]Accetto[2]Spiegami\nle regole[3-]Rifiuto")
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
/*<  5>*/ 									printf("\x0E\x01\x09\x04\x00\x02Bene! Quando vuoi, raggiungi il centro\ndell'isola e il cannone ti sparerà in aria.\nChe si prepari il cannone!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 80, 'next': -1, 'param3': 6}
          									}
          								  case 1:
/*<  7>*/ 									printf("<pause0F>\x0E\x01\x09\x04\x16\xC03Temo tu non abbia abbastanza rupie!\n\x0E\x01\x09\x04\x00\x600Torna da me quando ne avrai\nalmeno 20.")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Permettimi di spiegarti le regole.\n\n\n\n\x0E\x01\x09\x04\x12\x600Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n\x0E\x01\x09\x04\x0D\x600Ma se atterri nel <r<settore grigio>>,\nallora sarò io a riempirmi le\ntasche.\n\n\x0E\x01\x09\x04\x12\x1100Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <r<una sfida per temerari>>.\n\nPerciò non ti arrabbiare se finisci\nnella <r<zona di penalità>>!")
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x00\x600Durante la caduta libera incontrerai\n<r<fortunanelli >>e <r<svantasfere>>.\n\n\n\x0E\x01\x09\x04\x0D\x600Ogni volta che attraversi un\n<r<fortunanello>> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n\x0E\x01\x09\x04\x12\xC00Invece, fai attenzione a non colpire\nuna <r<svantasfera>>. Azzererà il\nbonus moltiplicatore!\n\n\x0E\x01\x09\x04\x0D\x600Dimentico qualcosa? Ah, sì!\n<r<Non puoi usare>> il manto magico\ndurante la caduta libera!")
          						  case 2:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x16\xD05E chi se lo aspettava?\nQuesto giovanotto è forse un codardo?")
          						}
          					  case 1:
/*<  9>*/ 						printf("\x0E\x01\x09\x04\x0D\x601Evvai! Dunque questo giovanotto\nè interessato!\n\n\n\x0E\x01\x09\x04\x09\x600Però non puoi partecipare\ngratuitamente, ti costerà\n<r<20 rupie>>.\n[1]Accetto[2]Spiegami\nle regole[3-]Rifiuto")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf("\x0E\x01\x09\x04\x00\x01Evviva! Forza, giovanotto. Un po' di\ncaduta libera?\n\n\nCome ringraziamento per aver\ntrovato il mio disco della roulette,\nti farò partecipare gratis!\n[1]Accetto[2]Spiegami\nle regole[3-]Rifiuto")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf("\x0E\x01\x09\x04\x00\x601Giovanotto, ti devo tutto per aver\ntrovato il mio disco della roulette!\nOra il mio sogno si avvera...\n<b<Isola della roulette>>!\nDi norma, partecipare costerebbe\n20 rupie, ma sono in debito con te\ne poi è la tua prima volta...\n\nQuindi il primo tentativo è gratis!")
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x0D\x602Permettimi di spiegarti le regole.\n\n\n\n\x0E\x01\x09\x04\x12\x600Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n\x0E\x01\x09\x04\x0D\x600Ma se atterri nel <r<settore grigio>>,\nallora sarò io a riempirmi le\ntasche.\n\n\x0E\x01\x09\x04\x12\x1100Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <r<una sfida per temerari>>.\n\nPerciò non ti arrabbiare se finisci\nnella <r<zona di penalità>>!")
/*< 22>*/ 					printf("\x0E\x01\x09\x04\x00\x600Durante la caduta libera incontrerai\n<r<fortunanelli >>e <r<svantasfere>>.\n\n\n\x0E\x01\x09\x04\x0D\x600Ogni volta che attraversi un\n<r<fortunanello>> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n\x0E\x01\x09\x04\x12\xC00Invece, fai attenzione a non colpire\nuna <r<svantasfera>>. Azzererà il\nbonus moltiplicatore!\n\n\x0E\x01\x09\x04\x0D\x600Dimentico qualcosa? Ah, sì!\n<r<Non puoi usare>> il manto magico\ndurante la caduta libera!")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x12\x600Perché non ci provi? Allora?\n[1]Va bene! [2-]Più tardi,\nforse")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf("\x0E\x01\x09\x04\x00\x01Vuoi che ti ripeta le regole?\n[1]Sì[2-]No")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Permettimi di spiegarti le regole.\n\n\n\n\x0E\x01\x09\x04\x12\x600Il cannone al centro ti sparerà in cielo.\nTu dovrai atterrare nell'area che\nruota. Vincerai le rupie del colore\ndel settore in cui atterri.\n\x0E\x01\x09\x04\x0D\x600Ma se atterri nel <r<settore grigio>>,\nallora sarò io a riempirmi le\ntasche.\n\n\x0E\x01\x09\x04\x12\x1100Per vincere tanto, devi rischiare\ngrosso, ma dopotutto questo gioco\nè proprio <r<una sfida per temerari>>.\n\nPerciò non ti arrabbiare se finisci\nnella <r<zona di penalità>>!")
/*<133>*/ 							printf("\x0E\x01\x09\x04\x00\x600Durante la caduta libera incontrerai\n<r<fortunanelli >>e <r<svantasfere>>.\n\n\n\x0E\x01\x09\x04\x0D\x600Ogni volta che attraversi un\n<r<fortunanello>> ottieni un bonus\nmoltiplicatore delle rupie.\n\nInoltre, passando attraverso i\nfortunanelli, la roulette\nrallenterà, rendendo più\nfacile atterrare bene.\n\x0E\x01\x09\x04\x12\xC00Invece, fai attenzione a non colpire\nuna <r<svantasfera>>. Azzererà il\nbonus moltiplicatore!\n\n\x0E\x01\x09\x04\x0D\x600Dimentico qualcosa? Ah, sì!\n<r<Non puoi usare>> il manto magico\ndurante la caduta libera!")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x16\xD05E chi se lo aspettava?\nQuesto giovanotto è forse un codardo?")
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
/*< 42>*/ 						printf("\x0E\x01\x09\x04\n\xC10Uffa... Sarebbe davvero un miracolo\nse qualcuno lo trovasse per me...\nMa non ci conto molto.")
          					  case 1:
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\x0FSalve a te, giovanotto. Hai trovato il\ndisco della mia roulette?\nNo? Oh, beh...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf("Il <r<disco della roulette >>desiderato da\nquesto individuo non fa parte degli\nobiettivi di ricerca del <pling><r<rilevatore>>.\n\nDesiderate impostare il <r<<pling>rilevatore >>per\nla ricerca del <r<disco della roulette>>?\n[1]Sì[2-]Non ora")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nIl <pling><r<rilevatore >>è ora impostato per\nla ricerca del <r<disco della roulette>>,\ndesiderato da questo individuo.")
/*<147>*/ 							printf("Probabilità che se qualcosa cadesse da\nquesta posizione finirebbe nel <b<deserto\ndi Ranel>>: 90%. Consiglio di perlustrare\nil deserto.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore. Il <pling>rilevatore non\nverrà reimpostato.")
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
/*<114>*/ 								printf("\x0E\x01\x09\x04\x00\x0FOh, niente. Davvero. Non preoccuparti\ndei miei problemi.\n\n\nIl <b<disco della roulette>> che portavo sulla\nschiena era solo una decorazione...\n<pause0A>Però...<pause0A> anche le decorazioni sono\nnecessarie. [1]Te lo\ncerco[2-]Rassegnati")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf("E come faccio a cercare qualcosa che\nè caduto oltre le nuvole?\nPer me è impossibile!")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf("Il <pling><r<rilevatore >>può essere impostato per\nla ricerca dell'oggetto desiderato da\nquesto individuo.\n\nTuttavia, nel caso in cui sia in corso\nla ricerca di altri oggetti, la loro\nrilevazione sarà compromessa.\n\nVolete impostare il <r<rilevatore >>per la\nricerca del <r<disco della >><r<roulette>>?\n[1]Sì[2-]Non ora")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore. Il <r<rilevatore >>è ora\nimpostato per la ricerca del <r<disco\ndella roulette>>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf("Probabilità che se qualcosa cadesse da\nquesta posizione finirebbe nel <b<deserto\ndi Ranel>>: 90%. Consiglio di perlustrare\nil deserto.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf("\x0E\x01\x09\x04\n\xC10Uffa... Sarebbe davvero un miracolo\nse qualcuno lo trovasse per me...\nMa non ci conto molto.")
          									  case 1:
/*<111>*/ 										printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore. Per impostare il\nbersaglio del rilevatore, vi prego di\nparlare di nuovo con questo individuo.\n")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf("\x0E\x01\x09\x04\x00\x10Senza quello non posso far divertire\nla gente!\n\n\n\x0E\x01\x09\x04\n\xC00Che disastro!")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf("\x0E\x01\x09\x04\x00\x0FUffa... Che cosa posso fare?\nAccipicchia!\n[1]Che c'è?[2-]...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf("Vedi, il mio disco della roulette\nè caduto di sotto, oltre le nuvole,\ne ora questo posto non è più\ndivertente per nessuno!\n\x0E\x01\x09\x04\n\xC00Non so proprio che fare...\nForse dovrei solo mettermi\nil cuore in pace e rassegnarmi.\n[1]Cercalo[2-]Rassegnati")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x0FChe tristezza... il mio disco della\nroulette è precipitato di sotto...\n\n\nSenza quello non posso realizzare\nil mio sogno.\n\n\nSono così afflitto che non riesco a fare\nnulla.")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x01<b<Isola della roulette>>! Devo ancora finire\ngli ultimi ritocchi, torna più tardi. Non\nte ne pentirai, te lo assicuro.")
          			  case 1:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0D\x01Evvai! Forza giovanotto!\n\n\n\n\x0E\x01\x09\x04\x09\x600Immagino ti stia chiedendo cosa\nci faccio qui.\n[1]Esatto[2-]No")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x0D\x02Ottima risposta!\n\n\n\n\x0E\x01\x09\x04\x08\x600Voglio solo fare di quest'isola un\nbel posto dove la gente possa sentirsi\nfelice.\n\nVuoi sapere che nome le ho dato?<pause1E>\n<b<Isola della roulette>>!\n\n\n\x0E\x01\x09\x04\x12\x600Però i preparativi non sono ancora\nultimati, torna più tardi.\nTi piacerà, vedrai!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf("\x0E\x01\x09\x04\x0D\xC03Beh, mi dispiace che tu non voglia\nsaperlo.\n\n\n\x0E\x01\x09\x04\x08\x600Vedi, io voglio solo realizzare\ni sogni delle persone.")
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
/*<117>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 15, 'param3': 6}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05Oh, ma che peccato! Sei atterrato\nnel settore grigio.\n\n\nIo vinco <r<<r<<numeric arg2><r< rupie>>!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 16, 'param3': 6}
/*< 16>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05Oh, hai vinto <r<0 rupie>>. Non\nabbatterti, puoi sempre riprovare!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 85, 'next': 17, 'param3': 6}
/*< 17>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06Bene!\nSei atterrato in un settore vincente!\n\n\n\x0E\x01\x09\x04\x0D\x600Più precisamente, il settore vale <numeric arg0> e il\nmoltiplicatore è x<numeric arg1>. Perciò, il totale\ndi <r<rupie >>vinte è <r<<numeric arg2>>>!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf("Sai quante rupie hai vinto? <numeric arg2>!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x12\x600Vincerai un premio speciale\nattraversando 5 fortunanelli e\natterrando nel settore da 50 rupie.\n\n\x0E\x01\x09\x04\x08\x1000E ovviamente senza sfiorare\nnemmeno una svantasfera!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 130, 'next': 24, 'param3': 6}
/*< 24>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06Che spettacolo! Sei atterrato in un\nsettore da 50 rupie!\n\n\nIl tasso del moltiplicatore è <numeric arg1>\ne quindi vinci <r<<r<<r<<numeric arg2><r< <r<rupie>>!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf("Hai attraversato tutti i fortunanelli\ne sei atterrato nella zona migliore!\nTi sei guadagnato un super premio!")
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
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x12\x600Vincerai un premio speciale\nattraversando 5 fortunanelli e\natterrando nel settore da 50 rupie.\n\n\x0E\x01\x09\x04\x08\x1000E ovviamente senza sfiorare\nnemmeno una svantasfera!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf("\x0E\x01\x09\x04\x00\x06Grazie! Ora posso realizzare il mio\nsogno: l'<b<Isola della roulette>>!\n\n\n\x0E\x01\x09\x04\x00\xA00Sì sì sì! Sono troppo felice!")
/*< 67>*/ 		printf("Sarai il mio primo cliente!\nQuesto è il minimo!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x00\x07Evviva! È proprio il mio disco della\nroulette!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x0BMa questo è...? Questo è...?\nMa sì! È proprio lui!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00dHo portato il disco.")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00dFammi sapere se hai ancora bisogno.")
          }

