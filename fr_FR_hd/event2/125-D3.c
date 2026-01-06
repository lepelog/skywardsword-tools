          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 2, line: 7 */ "Cherche les <color red<joyaux>coloroff> dissimulés\nderrière chaque statue.\nFrappe‐les du plus bas au plus\nhaut et la porte s'ouvrira.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Maître, regardez.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Le symbole au sol est l'<color red<emblème de Farore>coloroff>.\n\n\n\nJe détecte que la puissance sacrée de la <color yellow white<Triforce\n>coloroff>en émane.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 7, line: 10 */ "Pour arriver jusqu'à cet emblème, je vous recommande\nde franchir cette porte.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Maître, regardez.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "Le symbole au sol est l'<color red<emblème de Nayru>coloroff>.\n\n\n\nJe détecte que la puissance sacrée de la <color yellow white<Triforce\n>coloroff>en émane.\n\n\nMais le chemin qui y conduit est fermé.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Regardez là‐bas. C'est un <color yellow<chronoglobe>coloroff>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Je vous recommande de vous servir de ce <color yellow<chronoglobe\n>coloroff>pour ouvrir la voie vers l'<color red<emblème>coloroff>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Maître, regardez.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Le symbole au sol est l'<color red<emblème de Din>coloroff>.\n\n\n\nJe détecte que la puissance sacrée de la <color yellow white<Triforce\n>coloroff>en émane.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Mais il ne semble pas possible d'atteindre l'emblème\nd'ici.\n\n\nJe vous recommande d'entrer dans cette salle en\nempruntant un autre chemin.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Nous sommes revenus dans\nla salle où se trouve l'<color red<emblème de Din>coloroff>.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "La probabilité que vous trouviez la force sacrée au\nbout de ce parcours de lave est de 60 %.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 22 */ "Je vous recommande d'avancer avec détermination.")
          	  case 1:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Je détecte la présence d'une\nforce sacrée dans cette salle.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Vous êtes\narrivé jusqu'à l'emblème. Plantez‐y votre épée.\n\n\nVous devriez alors être conduit vers la <color yellow white<Triforce>coloroff>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Vous êtes\narrivé jusqu'à l'emblème. Plantez‐y votre épée.\n\n\nVous devriez alors être conduit vers la <color yellow white<Triforce>coloroff>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Vous êtes\narrivé jusqu'à l'emblème. Plantez‐y votre épée.\n\n\nVous devriez alors être conduit vers la <color yellow white<Triforce>coloroff>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	wait_frames(15)
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Je détecte l'existence de trois\nforces sacrées au sein de ce bâtiment.\n\n\nSelon mes conclusions, il s'agit de la <color yellow white<<sound 4>Triforce>coloroff>.\n\n\n\nJ'ai marqué par des △ sur votre carte les endroits\nd'où proviennent ces forces.")
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
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Ces secousses semblent être\nla manifestation d'un <color red<<sound 4>changement de structure >coloroff>du\nbâtiment.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 0, unk: 2, line: 4 */ "Ce changement va vous permettre d'entrer dans la\nsalle voisine.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Je vous recommande d'utiliser ce <color red<panneau de contrôle\n>coloroff>à votre avantage pour récupérer la <color yellow white<Triforce>coloroff>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "En exploitant ces changements, vous devriez pouvoir\nvous rendre dans les autres salles.")
          			goto flw_5
          		}
          	}
          }

