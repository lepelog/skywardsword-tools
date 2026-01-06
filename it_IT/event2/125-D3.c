          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 7, unk: 0, line: 7 */ "Per aprire la porta, trova le\n<color red<pietre brillanti>coloroff> dietro ogni\nstatua e colpiscile nel giusto\nordine a partire dal basso.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "<0x10012:0x00000001>Mio signore...\nGuardate!")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Quel simbolo sul pavimento\nè l'<color red<emblema di Farore>coloroff>.\n\n\nPercepisco la forza sacra\ndella <color yellow white<Triforza >coloroff>provenire da lì.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "Per raggiungere l'emblema\nsuggerisco di avanzare\noltre la porta.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "<0x10012:0x00000001>Mio signore...\nGuardate!")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "Quel simbolo sul pavimento\nè l'<color red<emblema di Nayru>coloroff>.\n\n\nPercepisco la forza sacra\ndella <color yellow white<Triforza >coloroff>provenire da lì.\n\n\nMa la strada che conduce\nlì sembra chiusa...")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "Guardate là, mio signore.\nÈ una <color yellow<sfera del tempo>coloroff>!")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Suggerisco di agire sulla\n<color yellow<sfera del tempo >coloroff>per aprirvi\nla strada verso l'<color red<emblema>coloroff>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "<0x10012:0x00000001>Mio signore...\nGuardate!")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf(/* textboxtype: 2, unk: 0, line: 17 */ "Quello sul pavimento\nè l'<color red<emblema di Din>coloroff>.\n\n\nPercepisco la forza sacra\ndella <color yellow white<Triforza >coloroff>provenire da lì.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Ma sembra impossibile\nraggiungere l'emblema.\n\n\nSuggerisco di trovare una\ndiversa via di accesso\nalla stanza.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0, line: 19 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nQuesta è la stanza dell'<color red<emblema di\nDin>coloroff>, dove eravamo prima.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf(/* textboxtype: 2, unk: 0, line: 20 */ "Probabilità di raggiungere\nla forza sacra, superando\nquella lava: 60%.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf(/* textboxtype: 2, unk: 0, line: 22 */ "Suggerisco di procedere\ncon determinazione.")
          	  case 1:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nConfermo che la forza sacra\nsi trova in questa stanza.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x0000000b>Mio signore <heroname>,\nFaih a rapporto.\nAvete raggiunto l'emblema.\n\nOffrite la spada e vi verrà indicata\nla strada verso la <color yellow white<Triforza>coloroff>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x0000000b>Mio signore <heroname>,\nFaih a rapporto.\nAvete raggiunto l'emblema.\n\nOffrite la spada e vi verrà indicata\nla strada verso la <color yellow white<Triforza>coloroff>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x0000000b>Mio signore <heroname>,\nFaih a rapporto.\nAvete raggiunto l'emblema.\n\nOffrite la spada e vi verrà indicata\nla strada verso la <color yellow white<Triforza>coloroff>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	wait_frames(15)
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nConfermo la presenza di tre forze\nsacre nell'edificio.\n\nConcludo che si tratta della <color yellow white<<sound 4>Triforza>coloroff>.\n\n\n\nHo contrassegnato con △ i punti da cui\nsento provenire la forza, suggerirei\ndi esplorare quelle zone.")
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
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nSi suppone che la vibrazione sia causata\nda <color red<<sound 4>alterazioni strutturali >coloroff>dell'edificio.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 2, line: 4 */ "Grazie a tali alterazioni\nè ora possibile procedere\nnella stanza adiacente.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 5 */ "Suggerisco di agire sul\n<color red<pannello di controllo >coloroff>per\nrecuperare la <color yellow white<Triforza>coloroff>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "Si suppone che, sfruttando le\nalterazioni strutturali, sia possibile\nprocedere in un'altra stanza.")
          			goto flw_5
          		}
          	}
          }

