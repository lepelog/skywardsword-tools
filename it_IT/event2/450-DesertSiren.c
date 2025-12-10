          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "<heroname>!\nImpegnati al massimo!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
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
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2, line: 25 */ "<0x10012:0x00000001>Esistono due tipi di <color red<guardiani >coloroff>che\nvogliono assalirvi e di <color red<sorveglianti >coloroff>alla\nricerca di intrusi, cioè voi: della <color red<terra\n>coloroff>e del <color red<cielo>coloroff>.\nSi differenziano per il comportamento\ne l'aspetto. Prestate attenzione a questi\nparticolari.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Attendo il vostro ritorno, quando\navrete raccolto tutte le <color yellow<lacrime>coloroff>.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "L'ubicazione delle <color yellow<lacrime >coloroff>già raccolte\nviene<color red< contrassegnata sulla mappa>coloroff>;\ntraetene vantaggio insieme all'uso\ndei fari celesti.\nL'ubicazione delle 15 lacrime non\nmuta. Se riuscirete a individuarle\ntutte, vi avvicinerete enormemente\nal superamento della prova.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2, line: 23 */ "Una buona strategia è quella di non\nraccogliere subito le <color yellow<lacrime >coloroff>facili da\nraggiungere, ma <color red<tenerne a mente\nl'ubicazione>coloroff> se venite scoperto.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2, line: 22 */ "<0x10012:0x00000001>Signore, le probabilità che\nvoi non siate il prescelto aumentano...\n\n\nRitengo che vi stiate perdendo d'animo\naffrontando ripetuti fallimenti.\nVi suggerisco di fare una pausa.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Vi prego di notare che esistono <color red<due tipi\ndi sorveglianti>coloroff> che fanno la ronda. Non\nentrate nel cono di luce dei <color red<sorveglianti\ndel cielo>coloroff> e sarete al sicuro.\nSe vi avvicinerete ai<color red< sorveglianti della\nterra>coloroff>, vi inseguiranno. <color red<Fate\nattenzione >coloroff>a non avvicinarvi troppo.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2, line: 20 */ "L'ubicazione delle <color yellow<lacrime >coloroff>raccolte è\n<color red<contrassegnata automaticamente\nsulla mappa>coloroff>.\n\nÈ tatticamente preferibile iniziare\ncol localizzare tutte e 15 le lacrime.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2, line: 19 */ "Potete affrontare la prova della Dea\ntutte le volte che vi sono necessarie,\nse il vostro cuore resisterà.\n\nÈ preferibile non raccogliere subito le\n<color yellow<lacrime >coloroff>facili da raggiungere, ma\n<color red<tenerne a mente l'ubicazione >coloroff>nel\ncaso in cui veniate scoperto.\nAttendo il vostro ritorno, quando\navrete raccolto tutte le 15 <color yellow<lacrime>coloroff>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004><heroname>, mio signore...")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2, line: 16 */ "Quando le 15 <color yellow<lacrime>coloroff> avranno riempito\nil <color yellow<ricettacolo dello spirito>coloroff>, <0x10012:0x00000002>mio signore,\nil vostro cuore sarà temprato e la Dea\nvi conferirà una nuova forza.\nLa vostra servitrice Faih attende il\nvostro ritorno al mondo esterno.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004><heroname>, mio signore...")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf(/* textboxtype: 2, unk: 2, line: 1 */ "Come pensavo, non posso venire con\nvoi. Pertanto, voglio rivolgermi\ndirettamente al vostro cuore\nche, solo, affronterà la prova.\nEntrerete nell'<color blue<Oltremondo>coloroff>, una\ndimensione spirituale alla quale\npossono accedere solo i prescelti\ndalla Dea.\nEntrando, affronterete la <color blue<prova di\nNayru>coloroff> che consoliderà la vostra\n<color red<saggezza>coloroff>.\n\nPer trovare la fiamma che fortificherà\nla vostra spada è necessario che il\nvostro cuore si tempri ancora.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 2, line: 2 */ "Quando il <color yellow<ricettacolo dello spirito>coloroff><color yellow< >coloroff>sarà\npieno, <0x10012:0x00000002>mio signore, il vostro cuore\nsarà temprato e la Dea vi conferirà\nuna <color red<nuova forza>coloroff>.\nAvete domande da pormi?\n[1-]Sì[2]No")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Cosa desiderate approfondire?\n\n[1-]Il ricettacolo\ndello spirito[2-]I guardiani[3-]La prova[4]Niente")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 2, unk: 2, line: 7 */ "Sì, <0x10012:0x00000005>mio signore, vi rispondo\nimmediatamente.\n\n\nPer riempire il <color yellow<ricettacolo dello spirito>coloroff>\nè necessario raccogliere le <color yellow<lacrime di\nNayru>coloroff> sparse in questo mondo.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf(/* textboxtype: 2, unk: 2, line: 8 */ "Dunque, <0x10012:0x00000002>mio signore,\nvedete quell'oggetto che brilla\ndinanzi a voi?")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf(/* textboxtype: 2, unk: 0, line: 9 */ "Si tratta di una <color yellow<lacrima di Nayru>coloroff>.\nDovete raccoglierne <color red<15>coloroff>.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2, line: 4 */ "Avete ulteriori domande?\n[1-]Ricettacolo\ndello spirito[2-]Guardiani[3-]Prova[4]Niente")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Sì, mio signore,\nvi rispondo immediatamente.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf(/* textboxtype: 2, unk: 2, line: 11 */ "Se fate un solo passo fuori\nda quell'area, degli esseri\nchiamati <color red<guardiani >coloroff>vi inseguiranno.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Se verrete colpito anche solo una volta\nda uno dei <color red<guardiani>coloroff>, il vostro spirito\nandrà in frantumi e fallirete la prova.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 14 */ "Evitate di subire attacchi e raccogliete\nle <color yellow<lacrime>coloroff> per riempire il <color yellow<ricettacolo\ndello spirito>coloroff>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Sì, mio signore,\nvi rispondo immediatamente.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2, line: 13 */ "In questo mondo si trovano delle zone\nliquide, chiamate <color red<delatori>coloroff>. Se le\ncalpestate, i<color red< guardiani lo scopriranno\nimmediatamente>coloroff>.\nFate sempre molta attenzione\ned evitate di calpestarle.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2, line: 5 */ "<0x10012:0x00000005>Certamente, mio signore.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "La vostra servitrice Faih attende il\nvostro ritorno al mondo esterno,\n<0x10012:0x00000002>mio signore.")
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

