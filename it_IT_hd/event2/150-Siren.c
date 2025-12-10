          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "Allora, <heroname>!\nImpegnati al massimo!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004><heroname>, mio signore.\nAvete fallito nella vostra prova della\nraccolta delle <color yellow<lacrime>coloroff>.")
/*< 56>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  8>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 11>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 41>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 42>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 43>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 47>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "<0x10012:0x00000001>Mio signore, oltre ai <color red<guardiani >coloroff>che\nvogliono assalirvi, esistono anche due\ntipi di <color red<sorveglianti >coloroff>in cerca d'intrusi,\ncioè voi: della <color red<terra>coloroff> e del <color red<cielo>coloroff>.\nOgnuno usa tattiche diverse. Prestate\nattenzione a questo particolare.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Raccogliete tutte le <color yellow<lacrime>coloroff>, attenderò\nil vostro ritorno.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "L'ubicazione delle <color yellow<lacrime >coloroff>già raccolte\nviene<color red< segnata sulla mappa>coloroff>, traetene\nvantaggio insieme all'uso dei\nfari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete grandemente\nal superamento della prova.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Vi consiglio di adottare la strategia\ndi <color red<tenere in serbo le lacrime facili\nda raggiungere>coloroff> per raccoglierle\nquando venite scoperto!")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "<0x10012:0x00000001>Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Prestate attenzione ai <color red<due tipi\ndi sorveglianti>coloroff> che fanno la\nronda.\n\nFinché non entrerete nel cono di luce\ndei <color red<sorveglianti che fluttuano in aria>coloroff>,\nsarete al sicuro.\n\nSe vi avvicinerete ai<color red< sorveglianti\ndella terra>coloroff>, <0x10012:0x00000002>vi inseguiranno.\n<color red<Fate attenzione >coloroff>a non avvicinarvi\ntroppo.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "L'ubicazione delle <color yellow<lacrime >coloroff>già raccolte\nviene<color red< segnata sulla mappa>coloroff>.\nVi suggerisco, per prima cosa, di\ncontrassegnare tutte e 15 le ubicazioni.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "<0x10012:0x00000002>Signore, potrete riaffrontare\nla prova della Dea finché non\nla supererete.\n\nVi consiglio di <color red<lasciare >coloroff>per ultime\nle <color yellow<lacrime >coloroff>che <color red<avete trovato >coloroff>più\nfacilmente. Nel caso veniate scoperto,\npotrebbe rivelarsi un'ottima strategia.\nAttenderò il vostro ritorno nel\nmondo normale, al termine della\nraccolta delle 15 <color yellow<lacrime>coloroff>.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Mio signore <heroname>!")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Quando riempirete il <color yellow<ricettacolo dello\nspirito >coloroff>con le 15 <color yellow<lacrime>coloroff>, <0x10012:0x00000002>avrete\ntemprato il vostro spirito e riceverete\ndalla Dea una nuova forza.\nAspetterò il vostro ritorno\nnel mondo normale, <0x10012:0x00000002>mio signore.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Mio signore <heroname>!")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Vi trovate nell'<color blue<Oltremondo della Dea>coloroff>.\nÈ il luogo dell'ultima prova.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Quando l'ultimo <color yellow<ricettacolo dello\nspirito >coloroff>sarà pieno, <0x10012:0x00000002>mio signore, avrete\ndimostrato il vostro coraggio...\n\nE la porta per la <color yellow white<Triforza>coloroff>\nsi mostrerà a voi.\nAffrontate la prova, ora.\n\nAvete qualche domanda da pormi?\n[1-]Sì[2]Nessuna")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Cosa preferite approfondire?\n\n[1-]Il ricettacolo\ndello spirito[2-]I guardiani[3-]Il delatore[4]Niente")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Bene, mio signore.\nEccovi la risposta.\n\n\nPer riempire il <color yellow<ricettacolo dello\nspirito>coloroff>, dovete raccogliere le <color yellow<lacrime\nsacre >coloroff>sparse per questo mondo.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "Adesso ne avete una che brilla\nproprio davanti a voi, <0x10012:0x00000002>mio signore.")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Ecco una <color yellow<lacrima sacra>coloroff>.\nDovrete raccoglierne <color red<15>coloroff>.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					wait_frames(15)
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "Cos'altro preferite approfondire?\n\n[1-]Il ricettacolo\ndello spirito[2-]I guardiani[3-]Il delatore[4]Niente")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Bene, mio signore.\nEccovi la risposta.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Appena farete un passo fuori da quella\nzona, verrete inseguito <0x10012:0x00000002>dai <color red<guardiani>coloroff>.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Se verrete colpito anche solo una volta\nda uno dei <color red<guardiani>coloroff>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "Raccogliete le <color yellow<lacrime >coloroff>e\nriempite il <color yellow<ricettacolo dello spirito>coloroff>\nsenza farvi colpire.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Bene, mio signore.\nEccovi la risposta.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 4, line: 14 */ "In questo mondo vi sono\ndelle zone simili a ruscelli e laghetti,\nciascuna delle quali è un <color red<delatore>coloroff>.\n\nSe anche solo le sfiorerete\ncon un piede, <0x10012:0x00000002>mio signore, i guardiani\nvi <color red<scopriranno all'istante>coloroff>.\n\nTroverete spesso queste\nzone, fate attenzione a\ndove camminate!")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "<0x10012:0x00000005>Bene, mio signore.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Attenderò il vostro ritorno al mondo\nnormale, <0x10012:0x00000002>mio signore.")
/*< 77>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 74, 'param3': 40}
/*< 74>*/ 					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 80>*/ 					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 73>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 72>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_78
          			}
          		}
          	}
          }

