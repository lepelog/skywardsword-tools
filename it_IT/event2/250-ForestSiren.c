          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf("Appena farete un passo fuori\nda quella zona, verrete\ninseguito dai <r<guardiani>>.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf("Se verrete colpito anche solo una volta\nda uno dei <r<guardiani>>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf("Raccogliete le <y<lacrime >>e \nriempite il<y< ricettacolo dello spirito>>\nsenza farvi colpire.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf("Avete bisogno che ripeta le\nistruzioni, \x0E\x01\x12\x04\x00\x02mio signore?\n[1]Sì[2-]No")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf("Cosa preferite che vi spieghi?\n\n[1]Il ricettacolo\ndello spirito[2]I guardiani[3]Oltremondo[4-]Niente")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf("Bene, \x0E\x01\x12\x04\x00\x05mio signore.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf("Bene, \x0E\x01\x12\x04\x00\x05mio signore.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf("Bene, \x0E\x01\x12\x04\x00\x05mio signore.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf("<b<Oltremondo >>è una <r<dimensione dello\nspirito >>raggiungibile solo dal prescelto\ndalla Dea.\n\nAdesso, \x0E\x01\x12\x04\x00\x01mio signore, avete lasciato la\nvostra dimensione terrena per\ndiventare pura essenza spirituale.\n\nIn questa dimensione chiamata\n<b<Oltremondo>>, verrà messa alla\nprova la forza del vostro spirito.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf("\x0E\x01\x12\x04\x00\x05Bene, signore.\n\n\n\nAspetterò il vostro ritorno\nnel mondo normale.\n\n\nPossiate godere della benedizione\ndella Dea, \x0E\x01\x12\x04\x00\x01signore.")
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
/*< 16>*/ 		printf("Link!\nImpegnati al massimo!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x12\x04\x00\x04Link, mio signore.\nAvete fallito nella vostra prova della\nraccolta delle <y<lacrime>>.")
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
/*< 46>*/ 										printf("\x0E\x01\x12\x04\x00\x01Mio signore, oltre ai <r<guardiani >>che\nvogliono assalirvi, esistono due tipi di\n<r<sorveglianti >>in cerca d'intrusi: quelli\ndella <r<terra>> e quelli del <r<cielo>>.\nOgnuno usa tattiche diverse. Prestate\nattenzione a questo particolare.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf("Raccogliete tutte le <y<lacrime>>,\nattenderò il vostro ritorno.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf("L'ubicazione delle <y<lacrime >>già raccolte\nviene<r< segnata sulla mappa>>, traetene\nvantaggio insieme all'uso dei\nfari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete grandemente\nal superamento della prova.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf("Vi consiglio di adottare la strategia\ndi <r<tenere in serbo le lacrime facili\nda raggiungere>> per raccoglierle\nqualora veniate scoperto!")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf("\x0E\x01\x12\x04\x00\x01Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf("Prestate attenzione ai <r<due tipi\ndi sorveglianti>> che fanno la\nronda.\n\nFinché non entrerete nel cono di luce\ndei <r<sorveglianti del cielo>>, sarete in\nsalvo.\n\nSe vi avvicinerete ai<r< sorveglianti della\nterra>>, \x0E\x01\x12\x04\x00\x02vi inseguiranno. <r<Fate\nattenzione >>a non avvicinarvi troppo.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf("L'ubicazione delle <y<lacrime >>già raccolte\nviene<r< segnata sulla mappa>>.\nVi suggerisco, per prima cosa, di\ncontrassegnare tutte e 15 le ubicazioni.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf("\x0E\x01\x12\x04\x00\x02Signore, potrete riaffrontare\nla prova della Dea finché non\nla supererete.\n\nVi consiglio di <r<lasciare >>per ultime\nle <y<lacrime >>che <r<avete trovato >>più\nfacilmente. Nel caso veniate scoperto,\npotrebbe rivelarsi un'ottima strategia.\nAttenderò il vostro ritorno nel\nmondo normale, al termine della\nraccolta delle 15 <y<lacrime>>.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf("\x0E\x01\x12\x04\x00\x04Mio signore Link!")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf("Quando riempirete il <y<ricettacolo dello\nspirito >>con le 15 <y<lacrime>>, avrete\ntemprato il vostro cuore e riceverete\ndalla Dea una nuova forza.\nAspetterò il vostro ritorno\nnel mondo normale, \x0E\x01\x12\x04\x00\x02mio signore.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x12\x04\x00\x04Mio signore Link!")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf("Non posso accompagnarvi,\n\x0E\x01\x12\x04\x00\x02parlerò direttamente al vostro cuore.\n\n\n<b<Oltremondo>>, la dimensione dello\nspirito, è raggiungibile solo dal\nprescelto dalla Dea.\n\nQuello che vi attende è l'<b<Oltremondo di\nFarore>>, una prova per saggiare la\nsolidità del \x0E\x01\x12\x04\x00\x02vostro <r<cuore>>.\n\n\x0E\x01\x12\x04\x00\x01Dovrete abbandonare la dimensione\nmateriale e affrontare la prova\ndello spirito.\n\nPer trovare la fiamma sacra con la\nquale ritemprare la \x0E\x01\x12\x04\x00\x02vostra spada,\ndovrete ottenere una grande crescita\nspirituale.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf("Ecco il <y<ricettacolo dello spirito>>.\n\n\n\nAvrete superato la prova quando\nil ricettacolo sarà pieno e il \x0E\x01\x12\x04\x00\x02vostro\ncuore sarà temprato.\n\nAllora riceverete dalla\nDea una <r<nuova forza>>.")
          			flw_6:
/*<  6>*/ 			printf("Per riempire il <y<ricettacolo dello\nspirito>> dovrete raccogliere le <y<lacrime\ndi Farore >>presenti in questo mondo.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf("Adesso ne avete una che brilla\nproprio davanti a voi, \x0E\x01\x12\x04\x00\x02mio signore.")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf("Ecco una <y<lacrima di Farore>>.\nDovrete raccoglierne <r<15>>.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf("Non si tratta di un compito così\nsemplice... dovrete affrontare una\nvera e propria <r<prova>>...")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf("\x0E\x01\x12\x04\x00\x04Mio signore Link!")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 62, 'param3': 6}
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf("Il liquido davanti a voi viene\nchiamato <r<delatore>>. \n\n\nÈ una zona particolare.\nSe anche solo la sfiorerete\ncon un piede, i guardiani \nvi <r<scopriranno all'istante>>.\nTroverete spesso queste\naree, fate attenzione a\ndove camminate!")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

