          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf("Link!\nImpegnati al massimo!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
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
/*< 39>*/ 										printf("\x0E\x01\x12\x04\x00\x01Esistono due tipi di <r<guardiani >>che\nvogliono assalirvi e di <r<sorveglianti >>alla\nricerca di intrusi, cioè voi: della <r<terra\n>>e del <r<cielo>>.\nSi differenziano per il comportamento\ne l'aspetto. Prestate attenzione a questi\nparticolari.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Attendo il vostro ritorno, quando\navrete raccolto tutte le <y<lacrime>>.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("L'ubicazione delle <y<lacrime >>già raccolte\nviene<r< contrassegnata sulla mappa>>;\ntraetene vantaggio insieme all'uso\ndei fari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete enormemente\nal superamento della prova.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("Una buona strategia è quella di non\nraccogliere subito le <y<lacrime >>facili da\nraggiungere, ma <r<tenerne a mente\nl'ubicazione>> se venite scoperto.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("\x0E\x01\x12\x04\x00\x01Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("Vi prego di notare che esistono <r<due tipi\ndi sorveglianti>> che fanno la ronda. Non\nentrate nel cono di luce dei <r<sorveglianti\ndel cielo>> e sarete al sicuro.\nSe vi avvicinerete ai<r< sorveglianti della\nterra>>, vi inseguiranno. <r<Fate\nattenzione >>a non avvicinarvi troppo.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("L'ubicazione delle <y<lacrime >>raccolte è\n<r<contrassegnata automaticamente\nsulla mappa>>.\n\nÈ tatticamente preferibile iniziare\ncol localizzare tutte e 15 le lacrime.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("Potete affrontare la prova della Dea\ntutte le volte che vi sono necessarie,\nse il vostro cuore resisterà.\n\nÈ preferibile non raccogliere subito le\n<y<lacrime >>facili da raggiungere, ma\n<r<tenerne a mente l'ubicazione >>nel\ncaso in cui veniate scoperto.\nAttendo il vostro ritorno, quando\navrete raccolto tutte le 15 <y<lacrime>>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Link, mio signore...")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Quando le 15 <y<lacrime>> avranno riempito\nil <y<ricettacolo dello spirito>>, \x0E\x01\x12\x04\x00\x02mio signore,\nil vostro cuore sarà temprato e la Dea\nvi conferirà una nuova forza.\nLa vostra servitrice Faih attende il\nvostro ritorno al mondo esterno.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf("\x0E\x01\x12\x04\x00\x04Link, mio signore...")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf("Come pensavo, non posso venire con\nvoi. Pertanto, voglio rivolgermi\ndirettamente al vostro cuore\nche, solo, affronterà la prova.\nEntrerete nell'<b<Oltremondo>>, una\ndimensione spirituale alla quale\npossono accedere solo i prescelti\ndalla Dea.\nEntrando, affronterete la <b<prova di\nNayru>> che consoliderà la vostra\n<r<saggezza>>.\n\nPer trovare la fiamma che fortificherà\nla vostra spada è necessario che il\nvostro cuore si tempri ancora.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf("Quando il <y<ricettacolo dello spirito>><y< >>sarà\npieno, \x0E\x01\x12\x04\x00\x02mio signore, il vostro cuore\nsarà temprato e la Dea vi conferirà\nuna <r<nuova forza>>.\nAvete domande da pormi?\n[1]Sì[2-]No")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("Cosa desiderate approfondire?\n\n[1]Il ricettacolo\ndello spirito[2]I guardiani[3]La prova[4-]Niente")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf("Sì, \x0E\x01\x12\x04\x00\x05mio signore, vi rispondo\nimmediatamente.\n\n\nPer riempire il <y<ricettacolo dello spirito>>\nè necessario raccogliere le <y<lacrime di\nNayru>> sparse in questo mondo.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf("Dunque, \x0E\x01\x12\x04\x00\x02mio signore, vedete quell'oggetto\nche brilla dinanzi a voi?")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf("Si tratta di una <y<lacrima di Nayru>>.\nDovete raccoglierne <r<15>>.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Avete ulteriori domande?\n[1]Ricettacolo\ndello spirito[2]Guardiani[3]Prova[4-]Niente")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore, vi rispondo\nimmediatamente.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf("Se fate un solo passo fuori da quell'area,\ndegli esseri chiamati <r<guardiani >>vi\ninseguiranno.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Se verrete colpito anche solo una volta\nda uno dei <r<guardiani>>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf("Evitate di subire attacchi e raccogliete\nle <y<lacrime>> per riempire il <y<ricettacolo\ndello spirito>>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore, vi rispondo\nimmediatamente.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("In questo mondo si trovano delle zone\nliquide, chiamate <r<delatori>>. Se le\ncalpestate, i<r< guardiani lo scopriranno\nimmediatamente>>.\nFate sempre molta attenzione\ned evitate di calpestarle.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("\x0E\x01\x12\x04\x00\x05Certamente, mio signore.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("La vostra servitrice Faih attende il vostro\nritorno al mondo esterno, \x0E\x01\x12\x04\x00\x02mio signore.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[24 'Lanayru: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 76>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 74>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

