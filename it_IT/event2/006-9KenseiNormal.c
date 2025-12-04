          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf(/* textboxtype: 2, unk: 0, line: 77 */ "Grazie agli <color yellow<artigli>coloroff> potete recuperare\noggetti posti in luoghi distanti.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "Potete individuare la bottega di Terry\ncontrollando la <color blue<mappa>coloroff>. Una volta\ntrovata, dovrete fare suonare la sua\n<color red<grande campana>coloroff> per entrarvi.")
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 2, unk: 0, line: 25 */ "Per entrare nella bottega volante di\n<color blue<Terry>coloroff>, dovrete fare suonare la sua\n<color red<grande campana>coloroff>.\n\nDalla mia analisi risulta che non\npossedete ancora il necessario per far\nsuonare la campana. Vi occorre\n<color red<qualcosa>coloroff> da lanciare a distanza.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Sulle piccole isole che fluttuano\nintorno a <color blue<Oltrenuvola >coloroff>vi sono\nedifici molto antichi.<color blue<\n\n>coloroff>Probabilità che su quelle isole ci siano\nscrigni nascosti: 80%.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "Probabilità che <color blue<Morsego>coloroff> viva nel\ncapanno vicino al cimitero: 95%.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 2, unk: 0, line: 31 */ "Morsego ha collezionato <color yellow<gemme di\ngratitudine >coloroff>per diventare un umano.\nProbabilità che questa diceria\nscompaia: 60%.\nTuttavia, calcolo che tutti avranno\npaura del nuovo volto umano di\nMorsego. Probabilità che questa\ndiceria resti: 40%.")
          		  case 1:
/*< 37>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Morsego colleziona <color yellow<gemme di\ngratitudine >coloroff>per diventare un umano.\n\n\nProbabilità che ne beneficiate anche\nvoi se decidete di aiutarlo: 85%.")
          		}
          	  case 1:
/*< 34>*/ 		printf(/* textboxtype: 2, unk: 0, line: 28 */ "Se volete saperne di più, consiglierei\ndi recarvi in un luogo dove circolano\nparecchie voci, per esempio la <color blue<taverna\ndella zucca>coloroff>.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 4 */ "L'apprendista cavaliere <color blue<Dacio>coloroff>\nperlustra il cielo alla ricerca\ndi quest'isola...\n\nSembra che egli abbia scoperto un'isola\nadatta agli insetti all'<color blue<interno di\nCumulonembo>coloroff>.")
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "Tuttavia, nessuno vi è mai stato prima.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 84 */ "La <color blue<freccia usata >coloroff>ha mancato il\nbersaglio. Ora potete raccoglierla e\nusarla di nuovo.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf(/* textboxtype: 2, unk: 0, line: 83 */ "Potete affettare degli arbusti con la\nspada. Nel caso in cui brillino in un\npunto, tagliando a quell'altezza\npotreste ottenere delle rupie.")
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
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "Si tratta di un parco giochi dove potete\nvincere rupie di grande valore.\n\n\nA tal proposito, vi consiglio di fare\nprima spazio nel vostro portarupie,\nmio signore.")
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Si tratta di un luogo dove potete\nvincere rupie di grande valore.\n\n\nDalla mia analisi risulta che si\ndebba pagare per partecipare.")
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0, line: 7 */ "Dicono che diventerà un parco giochi\ndove sarà possibile vincere rupie di\nnotevole valore.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf(/* textboxtype: 2, unk: 0, line: 58 */ "Ecco un consiglio utile.\n\n\n\nL'energia sprigionata dagli <color red<esaedri\ndella Dea>coloroff> disseminati sulla Terra,\nritorna nel cielo.\n\n<color blue<Io >coloroff>individuerò il luogo dove ha\nfatto ritorno e lo indicherò sulla\nvostra mappa, <0x10012:0x00000002>mio signore.")
          	  case 1:
/*< 53>*/ 		printf(/* textboxtype: 2, unk: 0, line: 57 */ "Per tutto il mondo avrete notato <color red<strani\ncubi >coloroff>recanti il simbolo della Dea.\n\n\nSembra che abbiano un nesso con gli\nscrigni che non possono essere aperti\na <color blue<Oltrenuvola >coloroff>e sulle altre isole\nnel Cielo.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Il fatto che durante la notte il negozio\nnon si trovi a <color blue<Oltrenuvola>coloroff>, mi induce\na pensare che si sposti altrove.\n\n<color red<Se riusciste a rimanere nella bottega\nvolante fino al calare della notte>coloroff>,\npotreste scoprire dove si dirige.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "Dalla mia analisi risulta che non\npossedete ancora il necessario per far\nsuonare la campana. Vi occorre\n<color red<qualcosa>coloroff> da lanciare a distanza.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "Anticamente, un grande guerriero\nescogitò come rifornirsi di frecce.\nLo sapete, <0x10012:0x00000002>mio signore?[1-]Dimmi[2]Lo so")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 2, unk: 0, line: 64 */ "Il guerriero si avvicinò a un covo\ndi boblin con un grande scudo\ndi legno.\n\nSi riparò dietro lo scudo mentre i suoi\nnemici gli scagliavano contro una\npioggia di frecce. Poi si ritirò.\n\n<color red<Conficcate nel suo scudo di legno\n>coloroff>c'erano innumerevoli frecce che\navrebbe potuto utilizzare.")
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 2, unk: 0, line: 65 */ "Suppongo che utilizzando uno scudo\npossiate conseguire lo stesso effetto,\n<0x10012:0x00000002>mio signore.\n\nTuttavia, in questo modo lo scudo\nverrà danneggiato. <color red<Fate attenzione\nalla resistenza.>coloroff>")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf(/* textboxtype: 2, unk: 0, line: 62 */ "Le <color blue<piume d'uccello >coloroff>sono un materiale\nmolto versatile.\n\n\nProbabilità che vi occorra un certo\nstrumento per catturare degli uccelli\nper le piume: 90%.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf(/* textboxtype: 2, unk: 0, line: 68 */ "Il potere della <color blue<scaglia del drago\nd'acqua>coloroff> vi consente di immergervi\nin profondità.\n\nProbabilità di fare nuove scoperte\nperlustrando ancora i luoghi già\nvisitati: 50%.")
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 2, unk: 0, line: 67 */ "Nel mondo vi è un oggetto chiamato\n<color blue<scaglia del drago d'acqua>coloroff>. Grazie\na esso, potrete immergervi\nsott'acqua in profondità.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf(/* textboxtype: 2, unk: 0, line: 71 */ "Il potere dei <color blue<termorecchini >coloroff>vi consente\ndi accedere ad aree caldissime.\n\n\nImmagino che ora sarete in grado di\nispezionare luoghi in precedenza\na voi inaccessibili.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 2, unk: 0, line: 70 */ "Nel mondo vi sono degli oggetti\nchiamati <color blue<termorecchini>coloroff>. Grazie a\nessi, potrete accedere ad aree\ndalle temperature molto elevate.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf(/* textboxtype: 2, unk: 0, line: 44 */ "Se un solcanubi gli si avvicina troppo,\nNarisha potrebbe attaccarlo, perciò\nè molto pericoloso.")
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 2, unk: 0, line: 43 */ "Ha continuato a crescere a dismisura\nfino a raggiungere le dimensioni di\nun'isola. Tuttavia, nessuno lo ha\nvisto di recente.")
          	}
          }

