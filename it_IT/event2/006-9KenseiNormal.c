          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf("Grazie agli <y<artigli>> potete recuperare\noggetti posti in luoghi distanti.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf("Potete individuare la bottega di Terry\ncontrollando la <b<mappa>>. Una volta\ntrovata, dovrete fare suonare la sua\n<r<grande campana>> per entrarvi.")
          	  case 1:
/*< 57>*/ 		printf("Per entrare nella bottega volante di\n<b<Terry>>, dovrete fare suonare la sua\n<r<grande campana>>.\n\nDalla mia analisi risulta che non\npossedete ancora il necessario per far\nsuonare la campana. Vi occorre\n<r<qualcosa>> da lanciare a distanza.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Sulle piccole isole che fluttuano\nintorno a <b<Oltrenuvola >>vi sono\nedifici molto antichi.<b<\n\n>>Probabilità che su quelle isole ci siano\nscrigni nascosti: 80%.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf("Probabilità che <b<Morsego>> viva nel\ncapanno vicino al cimitero: 95%.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf("Morsego ha collezionato <y<gemme di\ngratitudine >>per diventare un umano.\nProbabilità che questa diceria\nscompaia: 60%.\nTuttavia, calcolo che tutti avranno\npaura del nuovo volto umano di\nMorsego. Probabilità che questa\ndiceria resti: 40%.")
          		  case 1:
/*< 37>*/ 			printf("Morsego colleziona <y<gemme di\ngratitudine >>per diventare un umano.\n\n\nProbabilità che ne beneficiate anche\nvoi se decidete di aiutarlo: 85%.")
          		}
          	  case 1:
/*< 34>*/ 		printf("Se volete saperne di più, consiglierei\ndi recarvi in un luogo dove circolano\nparecchie voci, per esempio la <b<taverna\ndella zucca>>.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf("L'apprendista cavaliere <b<Dacio>>\nperlustra il cielo alla ricerca\ndi quest'isola...\n\nSembra che egli abbia scoperto un'isola\nadatta agli insetti all'<b<interno di\nCumulonembo>>.")
          	  case 1:
/*<  2>*/ 		printf("Tuttavia, nessuno vi è mai stato prima.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf("La <b<freccia usata >>ha mancato il\nbersaglio. Ora potete raccoglierla e\nusarla di nuovo.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf("Potete affettare degli arbusti con la\nspada. Nel caso in cui brillino in un\npunto, tagliando a quell'altezza\npotreste ottenere delle rupie.")
          		}
          	  case 1:
          		goto flw_45
          	}
          }

          void entrypoint_006_904() {
/*<  4>*/ 	start()
/*<  5>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*<  8>*/ 		switch (has_rupees(20)) {
          		  case 0:
/*<  7>*/ 			printf("Si tratta di un parco giochi dove potete\nvincere rupie di grande valore.\n\n\nA tal proposito, vi consiglio di fare\nprima spazio nel vostro portarupie,\nmio signore.")
          		  case 1:
/*<  9>*/ 			printf("Si tratta di un luogo dove potete\nvincere rupie di grande valore.\n\n\nDalla mia analisi risulta che si\ndebba pagare per partecipare.")
          		}
          	  case 1:
/*<  6>*/ 		printf("Dicono che diventerà un parco giochi\ndove sarà possibile vincere rupie di\nnotevole valore.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf("Ecco un consiglio utile.\n\n\n\nL'energia sprigionata dagli <r<esaedri\ndella Dea>> disseminati sulla Terra,\nritorna nel cielo.\n\n<b<Io >>individuerò il luogo dove ha\nfatto ritorno e lo indicherò sulla\nvostra mappa, \x0E\x01\x12\x04\x00\x02mio signore.")
          	  case 1:
/*< 53>*/ 		printf("Per tutto il mondo avrete notato <r<strani\ncubi >>recanti il simbolo della Dea.\n\n\nSembra che abbiano un nesso con gli\nscrigni che non possono essere aperti\na <b<Oltrenuvola >>e sulle altre isole\nnel Cielo.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf("Il fatto che durante la notte il negozio\nnon si trovi a <b<Oltrenuvola>>, mi induce\na pensare che si sposti altrove.\n\n<r<Se riusciste a rimanere nella bottega\nvolante fino al calare della notte>>,\npotreste scoprire dove si dirige.")
          	  case 1:
/*< 30>*/ 		printf("Dalla mia analisi risulta che non\npossedete ancora il necessario per far\nsuonare la campana. Vi occorre\n<r<qualcosa>> da lanciare a distanza.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf("Anticamente, un grande guerriero\nescogitò come rifornirsi di frecce.\nLo sapete, \x0E\x01\x12\x04\x00\x02mio signore?[1]Dimmi[2-]Lo so")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("Il guerriero si avvicinò a un covo\ndi boblin con un grande scudo\ndi legno.\n\nSi riparò dietro lo scudo mentre i suoi\nnemici gli scagliavano contro una\npioggia di frecce. Poi si ritirò.\n\n<r<Conficcate nel suo scudo di legno\n>>c'erano innumerevoli frecce che\navrebbe potuto utilizzare.")
          				flw_14:
/*< 14>*/ 				printf("Suppongo che utilizzando uno scudo\npossiate conseguire lo stesso effetto,\n\x0E\x01\x12\x04\x00\x02mio signore.\n\nTuttavia, in questo modo lo scudo\nverrà danneggiato. <r<Fate attenzione\nalla resistenza.>>")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf("Le <b<piume d'uccello >>sono un materiale\nmolto versatile.\n\n\nProbabilità che vi occorra un certo\nstrumento per catturare degli uccelli\nper le piume: 90%.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf("Il potere della <b<scaglia del drago\nd'acqua>> vi consente di immergervi\nin profondità.\n\nProbabilità di fare nuove scoperte\nperlustrando ancora i luoghi già\nvisitati: 50%.")
          	  case 1:
/*< 20>*/ 		printf("Nel mondo vi è un oggetto chiamato\n<b<scaglia del drago d'acqua>>. Grazie\na esso, potrete immergervi\nsott'acqua in profondità.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf("Il potere dei <b<termorecchini >>vi consente\ndi accedere ad aree caldissime.\n\n\nImmagino che ora sarete in grado di\nispezionare luoghi in precedenza\na voi inaccessibili.")
          	  case 1:
/*< 24>*/ 		printf("Nel mondo vi sono degli oggetti\nchiamati <b<termorecchini>>. Grazie a\nessi, potrete accedere ad aree\ndalle temperature molto elevate.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf("Se un solcanubi gli si avvicina troppo,\nNarisha potrebbe attaccarlo, perciò\nè molto pericoloso.")
          	  case 1:
/*< 40>*/ 		printf("Ha continuato a crescere a dismisura\nfino a raggiungere le dimensioni di\nun'isola. Tuttavia, nessuno lo ha\nvisto di recente.")
          	}
          }

