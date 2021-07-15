          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf("Allora, Link!\nImpegnati al massimo!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x12\x04\x00\x04Link, mio signore.\nAvete fallito nella vostra prova della\nraccolta delle <y<lacrime>>.")
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
/*< 47>*/ 										printf("\x0E\x01\x12\x04\x00\x01Mio signore, oltre ai <r<guardiani >>che\nvogliono assalirvi, esistono anche due\ntipi di <r<sorveglianti >>in cerca d'intrusi,\ncioè voi: della <r<terra>> e del <r<cielo>>.\nOgnuno usa tattiche diverse. Prestate\nattenzione a questo particolare.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf("Raccogliete tutte le <y<lacrime>>, attenderò\nil vostro ritorno.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf("L'ubicazione delle <y<lacrime >>già raccolte\nviene<r< segnata sulla mappa>>, traetene\nvantaggio insieme all'uso dei\nfari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete grandemente\nal superamento della prova.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf("Vi consiglio di adottare la strategia\ndi <r<tenere in serbo le lacrime facili\nda raggiungere>> per raccoglierle\nquando venite scoperto!")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x12\x04\x00\x01Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf("Prestate attenzione ai <r<due tipi\ndi sorveglianti>> che fanno la\nronda.\n\nFinché non entrerete nel cono di luce\ndei <r<sorveglianti che fluttuano in aria>>,\nsarete al sicuro.\n\nSe vi avvicinerete ai<r< sorveglianti\ndella terra>>, \x0E\x01\x12\x04\x00\x02vi inseguiranno.\n<r<Fate attenzione >>a non avvicinarvi\ntroppo.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf("L'ubicazione delle <y<lacrime >>già raccolte\nviene<r< segnata sulla mappa>>.\nVi suggerisco, per prima cosa, di\ncontrassegnare tutte e 15 le ubicazioni.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf("\x0E\x01\x12\x04\x00\x02Signore, potrete riaffrontare\nla prova della Dea finché non\nla supererete.\n\nVi consiglio di <r<lasciare >>per ultime\nle <y<lacrime >>che <r<avete trovato >>più\nfacilmente. Nel caso veniate scoperto,\npotrebbe rivelarsi un'ottima strategia.\nAttenderò il vostro ritorno nel\nmondo normale, al termine della\nraccolta delle 15 <y<lacrime>>.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf("\x0E\x01\x12\x04\x00\x04Mio signore Link!")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf("Quando riempirete il <y<ricettacolo dello\nspirito >>con le 15 <y<lacrime>>, \x0E\x01\x12\x04\x00\x02avrete\ntemprato il vostro spirito e riceverete\ndalla Dea una nuova forza.\nAspetterò il vostro ritorno\nnel mondo normale, \x0E\x01\x12\x04\x00\x02mio signore.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x12\x04\x00\x04Mio signore Link!")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf("Vi trovate nell'<b<Oltremondo della Dea>>.\nÈ il luogo dell'ultima prova.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf("Quando l'ultimo <y<ricettacolo dello\nspirito >>sarà pieno, \x0E\x01\x12\x04\x00\x02mio signore, avrete\ndimostrato il vostro coraggio...\n\nE la porta per la <y+<Triforza>>\nsi mostrerà a voi.\nAffrontate la prova, ora.\n\nAvete qualche domanda da pormi?\n[1]Sì[2-]Nessuna")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf("Cosa preferite approfondire?\n\n[1]Il ricettacolo\ndello spirito[2]I guardiani[3]Il delatore[4-]Niente")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bene, mio signore.\nEccovi la risposta.\n\n\nPer riempire il <y<ricettacolo dello\nspirito>>, dovete raccogliere le <y<lacrime\nsacre >>sparse per questo mondo.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf("Adesso ne avete una che brilla\nproprio davanti a voi, \x0E\x01\x12\x04\x00\x02mio signore.")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf("Ecco una <y<lacrima sacra>>.\nDovrete raccoglierne <r<15>>.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf("Cos'altro preferite approfondire?\n\n[1]Il ricettacolo\ndello spirito[2]I guardiani[3]Il delatore[4-]Niente")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bene, mio signore.\nEccovi la risposta.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf("Appena farete un passo fuori da quella\nzona, verrete inseguito \x0E\x01\x12\x04\x00\x02dai <r<guardiani>>.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf("Se verrete colpito anche solo una volta\nda uno dei <r<guardiani>>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf("Raccogliete le <y<lacrime >>e\nriempite il <y<ricettacolo dello spirito>>\nsenza farvi colpire.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bene, mio signore.\nEccovi la risposta.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("In questo mondo vi sono\ndelle zone simili a ruscelli e laghetti,\nciascuna delle quali è un <r<delatore>>.\n\nSe anche solo le sfiorerete\ncon un piede, \x0E\x01\x12\x04\x00\x02mio signore, i guardiani\nvi <r<scopriranno all'istante>>.\n\nTroverete spesso queste\nzone, fate attenzione a\ndove camminate!")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bene, mio signore.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf("Attenderò il vostro ritorno al mondo\nnormale, \x0E\x01\x12\x04\x00\x02mio signore.")
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

