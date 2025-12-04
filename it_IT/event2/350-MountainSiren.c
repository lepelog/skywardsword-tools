          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "<heroname>!\nImpegnati al massimo!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 2, line: 17 */ "<0x10012:0x00000004><heroname>, mio signore.\nAvete fallito nella vostra prova della\nraccolta delle <color yellow<lacrime>coloroff>.")
/*< 48>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2, line: 25 */ "<0x10012:0x00000001>Mio signore, oltre ai <color red<guardiani >coloroff>che\nvogliono assalirvi, esistono anche due\ntipi di <color red<sorveglianti >coloroff>in cerca d'intrusi,\ncioè voi: della <color red<terra>coloroff> e del <color red<cielo>coloroff>.\nOgnuno usa tattiche diverse. Prestate\nattenzione a questo particolare.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Raccogliete tutte le <color yellow<lacrime>coloroff>,\nattenderò il vostro ritorno.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "L'ubicazione delle <color yellow<lacrime >coloroff>già raccolte\nviene<color red< segnata sulla mappa>coloroff>, traetene\nvantaggio insieme all'uso dei\nfari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete grandemente\nal superamento della prova.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2, line: 23 */ "Vi consiglio di adottare la strategia\ndi <color red<lasciare per ultime le lacrime facili\nda raggiungere>coloroff> per raccoglierle\nqualora veniate scoperto!")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2, line: 22 */ "<0x10012:0x00000001>Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Prestate attenzione ai <color red<due tipi\ndi sorveglianti>coloroff> che fanno la\nronda.\n\nFinché non entrerete nel cono di luce\ndei <color red<sorveglianti del cielo>coloroff>, sarete in\nsalvo.\n\nSe vi avvicinerete ai<color red< sorveglianti della\nterra>coloroff>, <0x10012:0x00000002>vi inseguiranno. <color red<Fate\nattenzione >coloroff>a non avvicinarvi troppo.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2, line: 20 */ "L'ubicazione delle <color yellow<lacrime >coloroff>già raccolte\nviene<color red< segnata sulla mappa>coloroff>.\nVi suggerisco, per prima cosa, di\ncontrassegnare tutte e 15 le ubicazioni.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2, line: 19 */ "<0x10012:0x00000002>Signore, potrete riaffrontare\nla prova della Dea finché non\nla supererete.\n\nVi consiglio di <color red<serbare >coloroff>per ultime\nle <color yellow<lacrime >coloroff>che <color red<avete trovato >coloroff>più\nfacilmente. Nel caso veniate scoperto,\npotrebbe rivelarsi un'ottima strategia.\nAttenderò il vostro ritorno nel\nmondo normale, al termine della\nraccolta delle 15 <color yellow<lacrime>coloroff>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Mio signore <heroname>!")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2, line: 16 */ "Quando riempirete il <color yellow<ricettacolo dello\nspirito >coloroff>con le 15 <color yellow<lacrime>coloroff>, <0x10012:0x00000002>avrete\ntemprato la vostra mente e riceverete\ndalla Dea una nuova forza.\nAspetterò il vostro ritorno\nnel mondo normale, <0x10012:0x00000002>mio signore.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Mio signore <heroname>!")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf(/* textboxtype: 2, unk: 2, line: 1 */ "Vi trovate nell'<color blue<Oltremondo di Din>coloroff>,\n<0x10012:0x00000002>mio signore.\nÈ il luogo della terza prova,\natta a forgiare la vostra <color red<forza>coloroff>.<color blue<\n>coloroff>Per ottenere l'ultima fiamma e\nrafforzare la spada, dovrete\nnuovamente mettere alla prova\nil vostro spirito.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 2, line: 2 */ "Una volta che il <color yellow<ricettacolo dello spirito\n>coloroff>sarà pieno, avrete temprato il vostro\ncuore e potrete ricevere una <color red<nuova\nforza >coloroff>dalla Dea.\nAvete qualche domanda da pormi?\n[1-]Sì[2]Nessuna")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Cosa volete approfondire?\n\n[1-]Il ricettacolo\ndello spirito[2-]I guardiani[3-]Il delatore[4]Niente")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf(/* textboxtype: 2, unk: 2, line: 7 */ "Bene,<0x10012:0x00000005> mio signore.\nEccovi la risposta.\n\n\nPer riempire il <color yellow<ricettacolo dello\nspirito>coloroff>, dovete raccogliere le <color yellow<lacrime di\nDin>coloroff> sparse per questo mondo.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf(/* textboxtype: 2, unk: 2, line: 8 */ "Quella che vedete splendere lì...")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "È una <color yellow<lacrima di Din>coloroff>.\nDovrete raccoglierne <color red<15>coloroff>.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2, line: 4 */ "Cos'altro volete approfondire?\n\n[1-]Il ricettacolo\ndello spirito[2-]I guardiani[3-]Il delatore[4]Niente")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "Bene,<0x10012:0x00000005> mio signore.\nEccovi la risposta.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 11 */ "Appena farete un passo fuori\nda quella zona, verrete\ninseguito <0x10012:0x00000002>dai <color red<guardiani>coloroff>.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Se verrete colpito anche solo una volta\nda uno dei <color red<guardiani>coloroff>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf(/* textboxtype: 2, unk: 2, line: 13 */ "Raccogliete le <color yellow<lacrime >coloroff>e \nriempite il <color yellow<ricettacolo dello spirito>coloroff>\nsenza farvi colpire.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "Bene,<0x10012:0x00000005> mio signore.\nEccovi la risposta.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2, line: 14 */ "Il liquido davanti a voi viene\nchiamato <color red<delatore>coloroff>.\n\n\nÈ una zona particolare. Anche solo\nsfiorandola, i guardiani vi\n<color red<scopriranno all'istante>coloroff>.\n\nIncontrerete spesso queste aree, fate\nattenzione a dove camminate!")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2, line: 5 */ "Bene, <0x10012:0x00000005>mio signore.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Attenderò il vostro ritorno\nal mondo normale, <0x10012:0x00000002>mio signore.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

