          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Appena farete un passo fuori da quella\nzona, verrete inseguito dai <color red<guardiani>coloroff>.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf(/* textboxtype: 4, unk: 2, line: 10 */ "Se verrete colpito anche solo una volta\nda uno dei <color red<guardiani>coloroff>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 4, line: 11 */ "Raccogliete le <color yellow<lacrime >coloroff>e\nriempite il<color yellow< ricettacolo dello spirito>coloroff>\nsenza farvi colpire.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf(/* textboxtype: 4, unk: 2, line: 13 */ "Avete bisogno che ripeta le istruzioni,\n<0x10012:0x00000002>mio signore?\n[1-]Sì[2]No")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 4, line: 14 */ "Cosa preferite che vi spieghi?\n\n[1-]Il ricettacolo\ndello spirito[2-]I guardiani[3-]Oltremondo[4]Niente")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "Bene, <0x10012:0x00000005>mio signore.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "Bene, <0x10012:0x00000005>mio signore.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "Bene, <0x10012:0x00000005>mio signore.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf(/* textboxtype: 4, unk: 2, line: 16 */ "<color blue<Oltremondo >coloroff>è una <color red<dimensione dello\nspirito >coloroff>raggiungibile solo dal prescelto\ndalla Dea.\n\nAdesso, <0x10012:0x00000001>mio signore, avete lasciato\nla vostra dimensione terrena per\ndiventare pura essenza spirituale.\n\nIn questa dimensione chiamata\n<color blue<Oltremondo>coloroff>, verrà messa alla\nprova la forza del vostro spirito.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf(/* textboxtype: 2, unk: 2, line: 12 */ "<0x10012:0x00000005>Bene, signore.\n\n\n\nAspetterò il vostro ritorno\nnel mondo normale.\n\n\nPossiate godere della benedizione\ndella Dea, <0x10012:0x00000001>signore.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 86, 'param3': 40}
/*< 86>*/ 			zone_temp_flags[10 /* 0x0 04 */] = false;
/*< 80>*/ 			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 81>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*< 82>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_83
          	}
          }

          void entrypoint_250_04() {
/*< 96>*/ 	start()
          	goto flw_74
          }

          void entrypoint_250_00() {
          	start()
/*< 23>*/ 	set_camera(8, 0)
/*< 15>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 4, unk: 2, line: 28 */ "<heroname>!\nImpegnati al massimo!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 2, unk: 2, line: 18 */ "<0x10012:0x00000004><heroname>, mio signore.\nAvete fallito nella vostra prova della\nraccolta delle <color yellow<lacrime>coloroff>.")
/*< 55>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 29, 'param3': 40}
/*< 29>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 31>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 34>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 40>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 41>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 42>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 46>*/ 										printf(/* textboxtype: 2, unk: 4, line: 26 */ "<0x10012:0x00000001>Mio signore, oltre ai <color red<guardiani >coloroff>che\nvogliono assalirvi, esistono due tipi di\n<color red<sorveglianti >coloroff>in cerca d'intrusi: quelli\ndella <color red<terra>coloroff> e quelli del <color red<cielo>coloroff>.\nOgnuno usa tattiche diverse. Prestate\nattenzione a questo particolare.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 19 */ "Raccogliete tutte le <color yellow<lacrime>coloroff>, attenderò\nil vostro ritorno.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "L'ubicazione delle <color yellow<lacrime >coloroff>già raccolte\nviene<color red< segnata sulla mappa>coloroff>, traetene\nvantaggio insieme all'uso dei\nfari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete grandemente\nal superamento della prova.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf(/* textboxtype: 2, unk: 2, line: 24 */ "Vi consiglio di adottare la strategia\ndi <color red<tenere in serbo le lacrime facili\nda raggiungere>coloroff> per raccoglierle\nqualora veniate scoperto!")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf(/* textboxtype: 2, unk: 4, line: 23 */ "<0x10012:0x00000001>Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf(/* textboxtype: 4, unk: 2, line: 22 */ "Prestate attenzione ai <color red<due tipi\ndi sorveglianti>coloroff> che fanno la\nronda.\n\nFinché non entrerete nel cono di luce\ndei <color red<sorveglianti del cielo>coloroff>, sarete in\nsalvo.\n\nSe vi avvicinerete ai<color red< sorveglianti della\nterra>coloroff>, <0x10012:0x00000002>vi inseguiranno. <color red<Fate\nattenzione >coloroff>a non avvicinarvi troppo.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf(/* textboxtype: 2, unk: 2, line: 21 */ "L'ubicazione delle <color yellow<lacrime >coloroff>già raccolte\nviene<color red< segnata sulla mappa>coloroff>.\nVi suggerisco, per prima cosa, di\ncontrassegnare tutte e 15 le ubicazioni.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf(/* textboxtype: 2, unk: 4, line: 20 */ "<0x10012:0x00000002>Signore, potrete riaffrontare\nla prova della Dea finché non\nla supererete.\n\nVi consiglio di <color red<lasciare >coloroff>per ultime\nle <color yellow<lacrime >coloroff>che <color red<avete trovato >coloroff>più\nfacilmente. Nel caso veniate scoperto,\npotrebbe rivelarsi un'ottima strategia.\nAttenderò il vostro ritorno nel\nmondo normale, al termine della\nraccolta delle 15 <color yellow<lacrime>coloroff>.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Mio signore <heroname>!")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "Quando riempirete il <color yellow<ricettacolo dello\nspirito >coloroff>con le 15 <color yellow<lacrime>coloroff>, avrete\ntemprato il vostro cuore e riceverete\ndalla Dea una nuova forza.\nAspetterò il vostro ritorno\nnel mondo normale, <0x10012:0x00000002>mio signore.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Mio signore <heroname>!")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Non posso accompagnarvi,\n<0x10012:0x00000002>parlerò direttamente al vostro cuore.\n\n\n<color blue<Oltremondo>coloroff>, la dimensione dello\nspirito, è raggiungibile solo dal\nprescelto dalla Dea.\n\nQuello che vi attende è l'<color blue<Oltremondo di\nFarore>coloroff>, una prova per saggiare la\nsolidità del <0x10012:0x00000002>vostro <color red<cuore>coloroff>.\n\n<0x10012:0x00000001>Dovrete abbandonare la dimensione\nmateriale e affrontare la prova\ndello spirito.\n\nPer trovare la fiamma sacra con la\nquale ritemprare la <0x10012:0x00000002>vostra spada,\ndovrete ottenere una grande crescita\nspirituale.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf(/* textboxtype: 4, unk: 2, line: 4 */ "Ecco il <color yellow<ricettacolo dello spirito>coloroff>.\n\n\n\nAvrete superato la prova quando\nil ricettacolo sarà pieno e il <0x10012:0x00000002>vostro\ncuore sarà temprato.\n\nAllora riceverete dalla\nDea una <color red<nuova forza>coloroff>.")
          			flw_6:
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 5 */ "Per riempire il <color yellow<ricettacolo dello\nspirito>coloroff> dovrete raccogliere le <color yellow<lacrime\ndi Farore >coloroff>presenti in questo mondo.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "Adesso ne avete una che brilla\nproprio davanti a voi, <0x10012:0x00000002>mio signore.")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf(/* textboxtype: 4, unk: 2, line: 7 */ "Ecco una <color yellow<lacrima di Farore>coloroff>.\nDovrete raccoglierne <color red<15>coloroff>.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			wait_frames(15)
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf(/* textboxtype: 2, unk: 4, line: 8 */ "Non si tratta di un compito così\nsemplice... dovrete affrontare una\nvera e propria <color red<prova>coloroff>...")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Mio signore <heroname>!")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	wait_frames(30)
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf(/* textboxtype: 2, unk: 2, line: 27 */ "Il liquido davanti a voi viene chiamato\n<color red<delatore>coloroff>.\n\n\nÈ una zona particolare. Se anche solo\nla sfiorerete con un piede, i guardiani\nvi <color red<scopriranno all'istante>coloroff>.\n\nTroverete spesso queste aree, fate\nattenzione a dove camminate!")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

