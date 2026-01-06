          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Complimenti, <0x10012:0x00000002>mio signore!\nAvete ottenuto tutte le parti\ndella <color blue<Melodia dell'impavido>coloroff>!\n\nPer completare la melodia,\nsuggerisco di ritornare in\nCielo, dove si trova <color blue<Narisha>coloroff>.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf(/* textboxtype: 2, unk: 0, line: 12 */ "Complimenti, <0x10012:0x00000002>mio signore!\nAvete ottenuto la seconda parte!\nLa terza si trova nel <color blue<deserto di Ranel>coloroff>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf(/* textboxtype: 0, unk: 2, line: 10 */ "Complimenti, <0x10012:0x00000002>mio signore!\nAvete ottenuto la seconda parte!\nLa terza si trova nella <color blue<foresta di Firone>coloroff>.")
          			  case 1:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Il brano del quale siete\nentrato in possesso è una parte\ndella <color blue<Melodia dell'impavido>coloroff>.\n\nSuggerisco di cercare i draghi delle\naltre due aree per ottenere le parti\nmancanti.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "Complimenti, <0x10012:0x00000002>mio signore!\nAvete ottenuto la seconda parte!\nLa terza si trova presso il <color blue<vulcano\ndi Oldin>coloroff>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Il brano del quale siete\nentrato in possesso è una parte\ndella <color blue<Melodia dell'impavido>coloroff>.\n\nSuggerisco di cercare i draghi delle\naltre due aree per ottenere le parti\nmancanti.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Il brano del quale siete\nentrato in possesso è una parte\ndella <color blue<Melodia dell'impavido>coloroff>.\n\nSuggerisco di cercare i draghi delle\naltre due aree per ottenere le parti\nmancanti.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nAvete ottenuto una mappa della zona.\nPotete consultarla con (-).<0x10011:0x02cd>\n\nGrazie a essa, potete ora verificare\nl'ubicazione di luoghi d'interesse,\nmarcati con (X),<pause 15> nonché l'ubicazione\ne lo stato di porte, chiavi e scrigni.\nMa attenzione! In zone circoscritte\ncome questa, non è possibile collocare\n<color red<fari celesti>coloroff>.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b><heroname>, mio signore, Faih a\nrapporto. Avverto in questa zona\nl'aura del portale della prova.\n\nSuggerisco di usare il <color red<rilevatore>coloroff> per\ndeterminarne l'ubicazione. La melodia\n<color blue<Coraggio di Farore>coloroff>, appresa all'Isola\ndelle melodie, vi indicherà la via.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "<0x10012:0x0000000b><heroname>, mio signore, Faih a\nrapporto. Confermo la cessazione\ndell'eruzione. È ora possibile\nrientrare a Oltrenuvola.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b><heroname>, mio signore, Faih a\nrapporto. Avverto in questa zona\nl'aura del portale della prova.\n\nSuggerisco di usare il <color red<rilevatore>coloroff> per\ndeterminarne l'ubicazione. La melodia\n<color blue<Coraggio di Farore>coloroff>, appresa all'Isola\ndelle melodie, vi indicherà la via.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Vi siete aggiudicato la vittoria durante\nil battesimo del volo, <0x10012:0x00000002>mio signore, ma\ndurante un giro in compagnia di <color blue<Zelda>coloroff>,\nvi siete imbattuti in una tempesta.\nEssa ha provocato la caduta della\nragazza sulla Terra. Poi vi siete\nappropriato della <color yellow<spada della Dea>coloroff>, in\ncui risiedo.\nGrazie al potere della stele, è apparsa\nuna <color red<colonna di luce >coloroff>per condurvi sulla\nTerra.")
          }

          void entrypoint_006_002() {
          	start()
/*< 44>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<  2>*/ 	switch (story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */]) {
          	  case 0:
/*< 12>*/ 		switch (story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */]) {
          		  case 0:
/*< 14>*/ 			switch (story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */]) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "Conficcate la spada al centro\ndel glifo ed entrate nel\nmondo dell'ultima prova.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "Conficcate la spada al centro\ndel glifo ed entrate nel\nmondo della nuova prova.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "Conficcate la spada al centro\ndel glifo ed entrate nel\nmondo della nuova prova.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "Il canto del Coraggio di Farore e\nil suono della vostra lira hanno causato\nl'apparizione di un glifo, <0x10012:0x00000001>mio signore.\n\nProbabilità che si tratti del portale\ndella prova, citato dalla statua della\nDea sull'Isola delle melodie: 90%.\n\nPonetevi al centro del glifo\ne conficcatevi la spada.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

