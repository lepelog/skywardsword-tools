          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf("Link!\nImpegnati al massimo!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Link, mio signore.\nAvete fallito nella vostra prova della\nraccolta delle <y<lacrime>>.")
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
/*< 39>*/ 										printf("\x0E\x01\x12\x04\x00\x01Mio signore, oltre ai <r<guardiani >>che\nvogliono assalirvi, esistono anche due\ntipi di <r<sorveglianti >>in cerca d'intrusi,\ncioè voi: della <r<terra>> e del <r<cielo>>.\nOgnuno usa tattiche diverse. Prestate\nattenzione a questo particolare.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Raccogliete tutte le <y<lacrime>>,\nattenderò il vostro ritorno.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("L'ubicazione delle <y<lacrime >>già raccolte\nviene<r< segnata sulla mappa>>, traetene\nvantaggio insieme all'uso dei\nfari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete grandemente\nal superamento della prova.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("Vi consiglio di adottare la strategia\ndi <r<lasciare per ultime le lacrime facili\nda raggiungere>> per raccoglierle\nqualora veniate scoperto!")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("\x0E\x01\x12\x04\x00\x01Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("Prestate attenzione ai <r<due tipi\ndi sorveglianti>> che fanno la\nronda.\n\nFinché non entrerete nel cono di luce\ndei <r<sorveglianti del cielo>>, sarete in\nsalvo.\n\nSe vi avvicinerete ai<r< sorveglianti della\nterra>>, \x0E\x01\x12\x04\x00\x02vi inseguiranno. <r<Fate\nattenzione >>a non avvicinarvi troppo.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("L'ubicazione delle <y<lacrime >>già raccolte\nviene<r< segnata sulla mappa>>.\nVi suggerisco, per prima cosa, di\ncontrassegnare tutte e 15 le ubicazioni.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Signore, potrete riaffrontare\nla prova della Dea finché non\nla supererete.\n\nVi consiglio di <r<serbare >>per ultime\nle <y<lacrime >>che <r<avete trovato >>più\nfacilmente. Nel caso veniate scoperto,\npotrebbe rivelarsi un'ottima strategia.\nAttenderò il vostro ritorno nel\nmondo normale, al termine della\nraccolta delle 15 <y<lacrime>>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Mio signore Link!")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Quando riempirete il <y<ricettacolo dello\nspirito >>con le 15 <y<lacrime>>, \x0E\x01\x12\x04\x00\x02avrete\ntemprato la vostra mente e riceverete\ndalla Dea una nuova forza.\nAspetterò il vostro ritorno\nnel mondo normale, \x0E\x01\x12\x04\x00\x02mio signore.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x12\x04\x00\x04Mio signore Link!")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf("Vi trovate nell'<b<Oltremondo di Din>>,\n\x0E\x01\x12\x04\x00\x02mio signore.\nÈ il luogo della terza prova,\natta a forgiare la vostra <r<forza>>.<b<\n>>Per ottenere l'ultima fiamma e\nrafforzare la spada, dovrete\nnuovamente mettere alla prova\nil vostro spirito.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf("Una volta che il <y<ricettacolo dello spirito\n>>sarà pieno, avrete temprato il vostro\ncuore e potrete ricevere una <r<nuova\nforza >>dalla Dea.\nAvete qualche domanda da pormi?\n[1]Sì[2-]Nessuna")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("Cosa volete approfondire?\n\n[1]Il ricettacolo\ndello spirito[2]I guardiani[3]Il delatore[4-]Niente")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf("Bene,\x0E\x01\x12\x04\x00\x05 mio signore.\nEccovi la risposta.\n\n\nPer riempire il <y<ricettacolo dello\nspirito>>, dovete raccogliere le <y<lacrime di\nDin>> sparse per questo mondo.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf("Quella che vedete splendere lì...")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf("È una <y<lacrima di Din>>.\nDovrete raccoglierne <r<15>>.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Cos'altro volete approfondire?\n\n[1]Il ricettacolo\ndello spirito[2]I guardiani[3]Il delatore[4-]Niente")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("Bene,\x0E\x01\x12\x04\x00\x05 mio signore.\nEccovi la risposta.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf("Appena farete un passo fuori\nda quella zona, verrete\ninseguito \x0E\x01\x12\x04\x00\x02dai <r<guardiani>>.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Se verrete colpito anche solo una volta\nda uno dei <r<guardiani>>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf("Raccogliete le <y<lacrime >>e \nriempite il <y<ricettacolo dello spirito>>\nsenza farvi colpire.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf("Bene,\x0E\x01\x12\x04\x00\x05 mio signore.\nEccovi la risposta.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("Il liquido davanti a voi viene\nchiamato <r<delatore>>.\n\n\nÈ una zona particolare. Anche solo\nsfiorandola, i guardiani vi\n<r<scopriranno all'istante>>.\n\nIncontrerete spesso queste aree, fate\nattenzione a dove camminate!")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("Bene, \x0E\x01\x12\x04\x00\x05mio signore.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("Attenderò il vostro ritorno\nal mondo normale, \x0E\x01\x12\x04\x00\x02mio signore.")
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

