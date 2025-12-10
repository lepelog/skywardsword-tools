          void entrypoint_006_810() {
/*<  9>*/ 	start()
/*< 28>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 24, 'param4': 3, 'param5': 23}) {
          	  case 0:
/*< 21>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 19}) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000001>Mio signore, mi duole informarvi che\nle circostanze ci impediscono di utilizzare\nun accessorio amiibo per tornare a volare.")
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10012:0x00000001>Mio signore, non c'è nessun punto di ritorno\nattualmente stabilito.\n\n\nSolo quando si usa un accessorio amiibo per\nprendere il volo, è possibile usarlo di nuovo per\ntornare al punto di partenza.")
          		}
          	  case 1:
/*< 25>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 21}) {
          		  case 0:
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000001>Mio signore, mi duole informarvi che\nle circostanze ci impediscono di utilizzare\nun accessorio amiibo per tornare a volare.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10012:0x00000001>Mio signore, purtroppo le circostanze attuali\nimpediscono l'uso degli amiibo.\n\n\nAppena la situazione verrà risolta, la funzionalità\namiibo sarà di nuovo disponibile.")
          		}
          	  case 2:
          		flw_10:
/*< 10>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 61}
/*< 12>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 25, 'param4': 4, 'param5': 9}) {
          		  case 0:
          		  case 1:
/*< 13>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 13}) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x00000005>Bene, mio signore. L'amiibo è stato\nriconosciuto. Desiderate tornare a volare?\n[1-]Sì [2]No")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 62}
          				  case 1:
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10012:0x00000005>Bene, mio signore. Questo accessorio\namiibo è stato riconosciuto.\n\n\nFarete ritorno qui:\n<string arg0>\nSiete pronto?\n[1-]Sì [2]No")
          				goto flw_16
          			}
          		  case 2:
/*< 18>*/ 			printf(/* textboxtype: 0, unk: 2, line: 22 */ "<0x10012:0x00000001>Mio signore, mi duole informarvi che\nnon sono in grado di riconoscere\nquesto accessorio amiibo.")
          		  case 3:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10012:0x00000001>Mio signore, si è verificato un errore\ndurante la lettura dell'accessorio amiibo.\nVolete che riprovi?\n[1-]Sì [2]No")
/*< 20>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_10
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_811() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10012:0x00000001>Mio signore, accedendo alla statua di pietra,\navete ora la possibilità di tornare in Cielo.\n\n\nInoltre, utilizzando <color red<un certo amiibo>coloroff>, potrete\ntornare in Cielo da qualsiasi punto della Terra, per\npoi tornare nello stesso punto da cui eravate partito.\n\nVi prego di chiamarmi in qualsiasi momento\nvogliate usare gli amiibo.\nPotete anche attivare o disattivare l'uso\ndegli amiibo dalle <color green<opzioni>coloroff>.")
          }

          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Tempo di gioco attuale: <color red<<numeric arg0 2>：<numeric arg1 2>>coloroff>\nTempo di gioco totale: <color red<<numeric arg2 2>：<numeric arg3 2>>coloroff>\nNessun'altra informazione disponibile.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 0, line: 6 */ "<0x10012:0x0000000a>Sì, mio signore. Mi avete convocata?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4-]<string arg3>")
/*<  4>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 23, 'param4': 5, 'param5': 0}) {
          	  case 0:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000a>Sì, mio signore.\nDi cosa preferite che vi parli?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4]<string arg3>")
/*<  7>*/ 		switch (choice(4)) {
          		  case 0:
          			flw_8:
/*<  8>*/ 			entrypoint_-01_-1();
          		  case 1:
          			goto flw_8
          		  case 2:
          			goto flw_8
          		  case 3:
          		}
          	  case 1:
          		flw_5:
/*<  5>*/ 		entrypoint_-01_-1();
          	  case 2:
          		goto flw_5
          	  case 3:
          		goto flw_5
          	  case 4:
          	}
          }

