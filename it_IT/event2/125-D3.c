          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("Per aprire la porta, trova le\n<r<pietre brillanti>> dietro ogni\nstatua e colpiscile nel giusto\nordine a partire dal basso.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore...\nGuardate!")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf("Quel simbolo sul pavimento\nè l'<r<emblema di Farore>>.\n\n\nPercepisco la forza sacra\ndella <y+<Triforza >>provenire da lì.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf("Per raggiungere l'emblema\nsuggerisco di avanzare\noltre la porta.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore...\nGuardate!")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf("Quel simbolo sul pavimento\nè l'<r<emblema di Nayru>>.\n\n\nPercepisco la forza sacra\ndella <y+<Triforza >>provenire da lì.\n\n\nMa la strada che conduce\nlì sembra chiusa...")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf("Guardate là, mio signore.\nÈ una <y<sfera del tempo>>!")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf("Suggerisco di agire sulla\n<y<sfera del tempo >>per aprirvi\nla strada verso l'<r<emblema>>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore...\nGuardate!")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf("Quello sul pavimento\nè l'<r<emblema di Din>>.\n\n\nPercepisco la forza sacra\ndella <y+<Triforza >>provenire da lì.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf("Ma sembra impossibile\nraggiungere l'emblema.\n\n\nSuggerisco di trovare una\ndiversa via di accesso\nalla stanza.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nQuesta è la stanza dell'<r<emblema di\nDin>>, dove eravamo prima.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf("Probabilità di raggiungere\nla forza sacra, superando\nquella lava: 60%.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf("Suggerisco di procedere\ncon determinazione.")
          	  case 1:
/*< 35>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nConfermo che la forza sacra\nsi trova in questa stanza.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore Link,\nFaih a rapporto.\nAvete raggiunto l'emblema.\n\nOffrite la spada e vi verrà indicata\nla strada verso la <y+<Triforza>>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore Link,\nFaih a rapporto.\nAvete raggiunto l'emblema.\n\nOffrite la spada e vi verrà indicata\nla strada verso la <y+<Triforza>>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore Link,\nFaih a rapporto.\nAvete raggiunto l'emblema.\n\nOffrite la spada e vi verrà indicata\nla strada verso la <y+<Triforza>>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 1, 'param3': 6}
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nConfermo la presenza di tre forze\nsacre nell'edificio.\n\nConcludo che si tratta della <y+<<pling>Triforza>>.\n\n\n\nHo contrassegnato con \x25B3 i punti da cui\nsento provenire la forza, suggerirei\ndi esplorare quelle zone.")
/*< 42>*/ 	scene_flags[20 'Skyloft: Sky Keep'][29 /* 0x2 20 */] = true;
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_125_03() {
/*<  2>*/ 	start()
/*<  7>*/ 	switch (story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */]) {
          	  case 0:
/*<  8>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 9, 'param3': 30}
/*<  9>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          	  case 1:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 3, 'param3': 17}
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nSi suppone che la vibrazione sia causata\nda <r<<pling>alterazioni strutturali >>dell'edificio.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf("Grazie a tali alterazioni\nè ora possibile procedere\nnella stanza adiacente.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf("Suggerisco di agire sul\n<r<pannello di controllo >>per\nrecuperare la <y+<Triforza>>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf("Si suppone che, sfruttando le\nalterazioni strutturali, sia possibile\nprocedere in un'altra stanza.")
          			goto flw_5
          		}
          	}
          }

