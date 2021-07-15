          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf("Non è possibile effettuare un'analisi\nstandard poiché siete impegnato nella\nsfida del drago del fulmine <b<Ranel>>, una\nparte del suo duro allenamento.")
          	  case 1:
/*<  1>*/ 		printf("Questa è la <b<Terra dell'esilio>>.\nRilevo l'aura di nemici deboli.\nSono in pochi.")
/*<  5>*/ 		printf("\x0E\x01\x12\x04\x00\x01Mio signore, il vostro attuale\nequipaggiamento è\n<string arg0>.")
/*<  2>*/ 		printf("Idoneità all'area: <numeric arg0>%.")
/*<  6>*/ 		printf("In questo luogo sarà sufficiente\ncombattere soltanto con la spada.\nConsiglierei di equipaggiare\noggetti non offensivi.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf("Inoltre, il vostro attuale scudo di legno\nnon può prevenire i danni causati da\nfrecce infuocate.<pause0F> Ne sconsiglierei\nl'impiego.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Nessun dato rilevante da riportare.")
          }

