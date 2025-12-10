          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 2, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Va' via... va' via...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Fingiti morto... fingiti morto...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 2, unk: 1, line: 115 */ "<0x10012:0x00000001>Mio signore, suggerisco\ndi sincerarvi dell'incolumità\ndi questa creatura.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 2, unk: 1, line: 116 */ "<0x10012:0x00000001>Mio signore, probabilità\nche proseguendo in questa direzione\nla creatura sopravviva: 5%.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<439>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 443, 'param3': 46}
/*<443>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 51}
/*<444>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 1, line: 117 */ "")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 1, line: 118 */ "")
          		flw_222:
/*<222>*/ 		printf(/* textboxtype: 2, unk: 1, line: 120 */ "")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<436>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 1, line: 121 */ "")
/*<438>*/ 			set_camera(32, 0)
/*<437>*/ 			printf(/* textboxtype: 2, unk: 1, line: 122 */ "")
          			flw_441:
/*<441>*/ 			set_camera(34, 0)
/*<442>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<643>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 1, line: 123 */ "")
          			goto flw_441
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 1, line: 119 */ "")
          		goto flw_222
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<300>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		wait_frames(30)
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 17}
/*<202>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>Argh! Un tizio verde!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 2, line: 7 */ "<0x10009:0x0000000f>Kyu! Kyu!\nRisparmiami la vita!")
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 124, 'param3': 14}
/*<124>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 135, 'param3': 13}
/*<135>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<122>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<137>*/ 		set_camera(9, 0)
          	  case 1:
/*<299>*/ 		printf(/* textboxtype: 1, unk: 2, line: 5 */ "<0x10009:0x0000000b>Eh...?\nNon si muove più una foglia...")
/*<301>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<658>*/ 	start()
/*<659>*/ 	printf(/* textboxtype: 2, unk: 1, line: 160 */ "<0x10012:0x00000004>Mio signore <heroname>,\nSono ora in grado di analizzare il\nvostro grado di abilità in\ncombattimento contro il nemico.")
/*<664>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<665>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 670, 'param3': 32}
/*<670>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 671, 'param3': 17}
/*<671>*/ 	wait_frames(5)
/*<666>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 667, 'param3': 17}
/*<667>*/ 	wait_frames(10)
/*<669>*/ 	set_camera(39, 0)
/*<668>*/ 	printf(/* textboxtype: 2, unk: 1, line: 161 */ "Mentre <color green<inquadrate >coloroff>con (Z), se vi\nrivolgete a me premendo (v), sarò lieta\ndi riferirvi, oltre alle informazioni,\ni risultati delle mie analisi.<0x10011:0x07cd><0x10011:0x09cd>")
/*<672>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 673, 'param3': 36}
/*<673>*/ 	wait_frames(15)
/*<674>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 2, line: 23 */ "<0x10009:0x00000007>Grazie per aver trovato tutti i\nmiei compagni!\n\n\n<0x10009:0x00000013>Peccato che la tua amica non fosse con\nnessuno di loro...\nVedrai che la troverai!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 153, 'param3': 13}
/*<153>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<154>*/ 				printf(/* textboxtype: 1, unk: 2, line: 22 */ "<0x10009:0x00000007>Sono contento che il saggio stia bene!\nNon era andato lontano, allora!\n\n\n<0x10009:0x00000013>Mi dispiace che la tua amica non\nfosse con lui...")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Riferisci al saggio che io sono salvo,\nper piacere! La tua amica potrebbe\nessere con lui.")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 346, 'param3': 31}
/*<346>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "Accipikkyu... mi segue\nancoraaa!")
/*<362>*/ 		set_camera(18, 0)
/*<429>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<430>*/ 		printf(/* textboxtype: 1, unk: 2, line: 10 */ "<0x10008:0x02cd>Patapum!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 2, line: 11 */ "<0x10008:0xfecd><0x10006:0xfdcd>... ... ...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 2, line: 12 */ "Oh? Non mi fai niente?!\nE hai pure fatto secchi quei tipi rossi!")
/*<379>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<431>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 2, line: 13 */ "<0x10009:0x00000001>Sono il Kyuri <color blue<Maccio>coloroff>. Tu sembri buono.\nMi hai salvato!")
/*<139>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 138, 'param3': 13}
/*<138>*/ 		printf(/* textboxtype: 1, unk: 2, line: 14 */ "<0x10009:0x00000005>Ho visto una\ndall'aspetto simile al tuo, poco fa!\n\n[1-]Zelda?[2-]Chi?!")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>Ah, una tua amica?\nAllora ho delle brutte notizie...")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 1, unk: 2, line: 17 */ "<0x10009:0x0000000a>I tipi rossi hanno iniziato ad attaccare\ned è fuggita con <sound 4>il <color blue<saggio>coloroff>!")
/*<360>*/ 			set_camera(20, 0)
/*<361>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 1, unk: 2, line: 16 */ "<0x10009:0x00000004>No, no! Non so\nniente, ma è in pericolo!")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 2, unk: 1, line: 124 */ "Notifico una forte reazione\ndel rilevatore, suggerisco di\nproseguire in questa direzione.")
          }

          void entrypoint_200_71() {
/*<678>*/ 	start()
/*<679>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 680, 'param3': 51}
/*<680>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 681, 'param3': 16}
/*<681>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 682, 'param3': 17}
/*<682>*/ 	set_camera(40, 0)
/*<683>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 1, unk: 2, line: 43 */ "<0x10009:0x00000007>Grazie per aver trovato tutti\ni miei compagni.\n\n\n<0x10009:0x00000013>Però... la foresta sembra ancora\npericolosa...")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 163, 'param3': 13}
/*<163>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<164>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Meno male che anche il saggio sta bene!\nIo resto qui finché non vanno\nvia i mostri!")
          			  case 1:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 41 */ "<0x10009:0x00000004>Starò qui ancora un po'.\nSe vedi il saggio diglielo!")
          			}
          		  case 1:
/*<364>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 1, unk: 2, line: 34 */ "Non mangiarmi!\nHo un sapore tremendo!\nLasciami andare!!!")
/*<160>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<597>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 1, unk: 2, line: 37 */ "<0x10009:0x00000005>Come? Il saggio era in pena?!\nComunque sono contento di sentire\nche sta bene!")
          				flw_209:
/*<209>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>Sono il Kyuri <color blue<Algo>coloroff>!\nSe incontri il saggio, digli che sono qui!\n\n\n<0x10009:0x0000000f>Ecco... non lascio questo posto finché\nnon se ne sono andati tutti i mostri!")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<365>*/ 				set_camera(16, 0)
/*<366>*/ 				entrypoint_200_62();
          			  case 1:
/*<598>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 1, unk: 2, line: 38 */ "<0x10009:0x00000005>Ma... allora... tu non sei cattivo?\n\n\n\nUna ragazza dalla testa gialla?<pause 15>\n<0x10009:0x00000013>Non lo so, sono stato nascosto\ntutto il tempo...")
          				goto flw_209
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 1, line: 125 */ "Non sono presenti creature ostili\nnei dintorni. Il Kyuri sarebbe al sicuro\nanche ai piedi dell'albero.\n\nSuggerisco di ponderare una soluzione\nper aiutarlo, da solo non è in grado\ndi muoversi.\n\n<0x10012:0x00000001>Mio signore, potete controllare\nle possibili azioni premendo (2)\nin qualsiasi momento.<0x10011:0x05cd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 2, line: 55 */ "<0x10009:0x00000007>Grazie per aver trovato tutti\ni miei compagni!\n\n\n<0x10009:0x0000000b>Stare qui mi fa sentire al sicuro,\nnon si vedono cosi brutti in giro!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<169>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 171, 'param3': 13}
/*<171>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<172>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>Per fortuna il saggio sta bene!\n\n\n\n<0x10009:0x00000013>A me tremano ancora \nle gambe, resto qui!")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 53 */ "<0x10009:0x00000004>Resto ancora un po' qui a riprendermi\ndalla paura!\nDillo al saggio, se lo vedi!")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 207, 'param3': 31}
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>Che dolooore...<pause 30>\nPerò... almeno m'hai fatto scendere!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 167, 'param3': 13}
/*<167>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 2, line: 49 */ "<0x10009:0x00000005>Come? Il saggio è sano e salvo? Bene!")
          					flw_212:
/*<212>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 211, 'param3': 13}
/*<211>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001>Mi chiamo <color blue<Orzio>coloroff>!\nSe vedi il saggio, digli che sono qui!\n\n\n<0x10009:0x00000013>Ho le gambe che mi tremano\ncome foglioline al vento...")
/*<165>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<116>*/ 					set_camera(27, 0)
/*<400>*/ 					entrypoint_200_63();
          				  case 1:
/*<166>*/ 					printf(/* textboxtype: 1, unk: 2, line: 50 */ "<0x10009:0x00000005>Mmh... una ragazza?\nNo... non ne so niente.\n\n\n<0x10009:0x00000004>Il saggio ne saprà\nsicuramente qualcosa!")
          					goto flw_212
          				}
          			}
          		  case 1:
/*<130>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 204, 'param3': 13}
/*<204>*/ 			set_camera(4, 0)
/*<129>*/ 			printf(/* textboxtype: 1, unk: 2, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>Kyuuu!")
/*<111>*/ 			set_camera(5, 0)
/*<131>*/ 			wait_frames(60)
/*<118>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 117, 'param3': 13}
/*<117>*/ 			printf(/* textboxtype: 1, unk: 1, line: 47 */ "<0x10009:0x0000000b>Hai fatto secchi i tipi rossi come se\nfossero foglie di tè, giovane virgulto!\nNon sarai mica un... <pause 15>giustiziere?!\n\n<0x10009:0x00000013>Tremo come un fuscello, non riesco\na muovermi.\nAiutami a scendere!")
/*<119>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*<133>*/ 			set_camera(6, 0)
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<333>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<332>*/ 		printf(/* textboxtype: 2, unk: 1, line: 128 */ "Suggerisco di salvare i progressi\nprima di proseguire verso il santuario\nnella foresta sulle tracce di Zelda.")
          	  case 1:
/*<327>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<328>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<330>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<331>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<325>*/ 						printf(/* textboxtype: 2, unk: 1, line: 127 */ "Non avverto la presenza\ndi altri Kyuri in questa zona.\n\n\nSuggerisco di tornare dal saggio\ne raccogliere ulteriori informazioni.")
          					  case 1:
          						flw_326:
/*<326>*/ 						printf(/* textboxtype: 2, unk: 1, line: 129 */ "Dato l'ottimo angolo di visuale,\nsuggerisco di impostare il rilevatore\nsulla presenza di Kyuri.")
          					}
          				  case 1:
          					goto flw_326
          				}
          			  case 1:
          				goto flw_326
          			}
          		  case 1:
/*<596>*/ 			printf(/* textboxtype: 2, unk: 1, line: 126 */ "Il rilevatore reagisce molto\ndebolmente alla presenza di Zelda.\nSuggerisco di cambiare zona.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<221>*/ 	start()
/*<334>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 1, line: 177 */ "<0x10009:0x00181705>Come? Vuoi che ti\nparli di qualcosa?\n[1-]Esaedri[2-]Santuario[3]Niente")
/*<476>*/ 		switch (choice(3)) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 178 */ "<0x10009:0x00161e04>Appena è stato investito dalla\nluce della tua spada, l'esaedro\nè volato nel Cielo.\n\nSecondo gli scritti antichi,\nce ne sono diversi, sparsi\nper tutta la Terra.")
          			flw_631:
/*<631>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<633>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>Stando agli scritti antichi,\nl'edificio nelle vicinanze dovrebbe\nessere il Santuario del Cielo.\n\nDovrebbe accogliere l'eroe che\nproviene dal Cielo...")
/*<477>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_631
          			  case 1:
/*<478>*/ 				printf(/* textboxtype: 1, unk: 0, line: 180 */ "<0x10009:0x00001707>A proposito... da qualche\nparte dovrebbe esserci una\nstele...\n\n<0x10009:0x00160b00>C'era scritto qualcosa...<pause 15>\nSecondo me si tratta di\nqualche istruzione per entrare!")
          				goto flw_631
          			}
          		  case 2:
/*<632>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<626>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<480>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<521>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 32}
          				flw_479:
/*<479>*/ 				printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00ffff00>Questo esaedro è fatto di\nun metallo che non avevo mai visto!\nNon riesco a intaccarlo in nessun modo.")
/*<494>*/ 				set_camera(-1, 0)
/*<505>*/ 				printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00160b07><color red<Se verrà investito dalla luce della spada\nceleste... >coloroff>così dicono gli scritti antichi,\nsignificherà qualcosa!\n<0x10009:0x00001705>Roccia, che ne pensi?")
/*<506>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 507, 'param3': 17}
/*<507>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 508, 'param3': 17}
/*<508>*/ 				wait_frames(30)
/*<509>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<514>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<483>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_499:
/*<499>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 500, 'param3': 32}
/*<500>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 501, 'param3': 17}
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 502, 'param3': 17}
/*<502>*/ 					wait_frames(30)
/*<485>*/ 					set_camera(37, 0)
/*<486>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>Ecco...<pause 15> si dice che la Dea abbia\nlasciato dei tesori per l'eroe\nche sarebbe venuto dal cielo...\n\nPer un oggetto simile,<pause 30> <color blue<Esaedro\ndella Dea>coloroff> credo sia un nome\nappropriato! L'ho inventato io!")
/*<487>*/ 					set_camera(-1, 0)
/*<488>*/ 					printf(/* textboxtype: 1, unk: 0, line: 168 */ "<0x10009:0x00001e04>Gli scritti antichi riportano\nqualcosa a riguardo...\n\n\nSe verrà investito dalla luce della<pause 30>\nspada celeste, chi la brandirà<pause 30>\nverrà ricompensato!")
/*<503>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 504, 'param3': 17}
/*<504>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 489, 'param3': 17}
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x0018170b>Roccia, tu possiedi una spada, no?\nPer questo vorrei che mi aiutassi\ncon questi esaedri enigmatici!\n[1-]Va bene[2-]Non voglio")
/*<491>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_490:
/*<490>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>Grazie!")
          						flw_493:
/*<493>*/ 						set_camera(37, 0)
          						goto flw_479
          					  case 1:
/*<492>*/ 						printf(/* textboxtype: 1, unk: 0, line: 171 */ "<0x10009:0x0018170c>Fa' qualcosa, su! Per favore!\n[1-]Va bene[2-]No")
/*<495>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_490
          						  case 1:
/*<496>*/ 							printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00080007>Mmh... Vuoi per caso\nqualcosa in cambio?")
/*<498>*/ 							give_item(161 0xA1);
/*<497>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>Adesso non puoi\npiù rifiutarti!")
          							goto flw_493
          						}
          					}
          				  case 1:
/*<484>*/ 					printf(/* textboxtype: 1, unk: 0, line: 166 */ "<0x10009:0x00171908>Sei proprio franato qui\nal momento giusto!\n\n\nHo scoperto che in questa zona\nc'è qualcosa di cui si parla\nnegli scritti antichi!")
          					goto flw_499
          				}
          			}
          		  case 1:
/*<628>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<629>*/ 				printf(/* textboxtype: 1, unk: 0, line: 165 */ "<0x10009:0x00000001>Ehi, roccia!\nVieni qui, sbrigati!")
/*<630>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<627>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<624>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>Ehilà roccia!\nCi rincontriamo!\n\n\nVorrei chiederti una mano\nper una questione, vieni qui!")
/*<625>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 2, unk: 1, line: 130 */ "")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 2, line: 64 */ "<0x10009:0x00000013>Oh! Hai trovato tutti!\nNon darti delle arie, però!\nResti sempre un giovane virgulto.")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 2, line: 61 */ "<0x10009:0x00000005>Non capisco proprio come hai fatto\na trovarmi, ero perfettamente\nmimetizzato!")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 177, 'param3': 13}
/*<177>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<178>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>Hai trovato il saggio!\nSei un asso nello scovare\nchi si mimetizza, allora!")
          			  case 1:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 62 */ "<0x10009:0x00000014>Non hai ancora trovato il saggio, eh?!")
          			}
          		  case 1:
/*<345>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 372, 'param3': 31}
/*<372>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>Ma io... credevo di\nessermi mimetizzato\nbenissimo!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 210, 'param3': 13}
/*<210>*/ 			printf(/* textboxtype: 1, unk: 2, line: 58 */ "<0x10009:0x00000001>Sono <color blue<Genzio>coloroff>!\nSono il maggior esperto di\nmimetizzazione, dopo il saggio!")
/*<637>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<676>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<373>*/ 			set_camera(38, 0)
/*<374>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<303>*/ 	start()
/*<304>*/ 	printf(/* textboxtype: 7, unk: 0, line: 187 */ "")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 100 */ "<0x10009:0x00000002>Quella che chiami Zelda\ns'è diretta verso il santuario in\nfondo alla foresta.")
/*<120>*/ 			printf(/* textboxtype: 1, unk: 1, line: 101 */ "Usando la <color yellow<fionda >coloroff>dovresti \nriuscire a raggiungere il\nsantuario in fondo alla foresta.\n\n<0x10009:0x00000006>Vedrai che troverai la tua\namica! Oh oh oh!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 1, unk: 2, line: 97 */ "<0x10009:0x00000001>Usami come scaletta\ne prendilo!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>Forza, arrampicati\nsulla mia schiena e prendilo!")
          				}
          			  case 1:
          				flw_128:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 1, unk: 1, line: 92 */ "<0x10009:0x0000000a>Ah ah! Sono tutti\nsani e salvi?!\n\n\nSei un asso a ritrovare gli altri!\nGrazie mille, anche se non so\nda dove vieni né il tuo nome!")
/*<604>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<605>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>Cosa?!\nAnche tu cerchi un'amica?\n\n\nHo incontrato una ragazza\ncon i peli sulla testa gialli...")
          					flw_595:
/*<595>*/ 					set_camera(-1, 0)
/*<420>*/ 					printf(/* textboxtype: 1, unk: 1, line: 98 */ "<0x10009:0x00000002>Quella che tu chiami Zelda\ndiceva di essere diretta al santuario\nin fondo alla foresta...\n\nLe ho detto di lasciar perdere\nperché troppo pericoloso, ma\nmi ha scavalcato ed è andata via.")
/*<421>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 422, 'param3': 32}
/*<422>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 423, 'param3': 17}
/*<423>*/ 					wait_frames(15)
/*<424>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 427, 'param3': 17}
/*<427>*/ 					wait_frames(30)
/*<425>*/ 					set_camera(31, 0)
/*<126>*/ 					set_camera(7, 0)
/*<140>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 141, 'param3': 15}
/*<141>*/ 					make_actor_do_something(3, 0)
/*<125>*/ 					printf(/* textboxtype: 1, unk: 1, line: 94 */ "<0x10009:0x00000003>Se prosegui di là, in fondo\ntroverai un santuario, ma...<pause 15>\nè infestato di mostri!")
/*<428>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 144, 'param3': 17}
/*<144>*/ 					set_camera(8, 0)
/*<145>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 146, 'param3': 15}
/*<146>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 309, 'param3': 17}
/*<309>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 426, 'param3': 17}
/*<426>*/ 					wait_frames(15)
/*<127>*/ 					printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>Come ho fatto\na non pensarci prima?!\n\n\nCome ringraziamento per\naver trovato i miei compagni,\nti faccio un regalo Kyuri!\n\n<0x10009:0x00000008>Oplà!\nPrego...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<606>*/ 					printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10009:0x00000009>Mi sono ricordato\nfinalmente dove s'è diretta\nla tua amica!")
          					goto flw_595
          				}
          			}
          		}
          	  case 1:
/*<147>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<148>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<149>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<150>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<409>*/ 						wait_frames(20)
/*<408>*/ 						set_camera(29, 0)
/*<677>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_410:
/*<410>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<526>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_128
          					  case 1:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<592>*/ 						switch (choice(2)) {
          						  case 0:
/*<594>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<590>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_593:
/*<593>*/ 							set_camera(29, 0)
/*<591>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<152>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_410
          						  case 1:
/*<675>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_593
          						}
          					}
          				  case 1:
/*<179>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<181>*/ 						printf(/* textboxtype: 1, unk: 1, line: 72 */ "<0x10009:0x00000003>Maccio, Algo e Orzio\nsono in salvo?!\n\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<color red<ultimo >coloroff>dei miei compagni stia bene?\n\n<0x10009:0x00000002>Sicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\nEcco... mi sembra di cominciare\na ricordare qualcosa riguardo\nalla tua amica...!")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<530>*/ 						switch (choice(2)) {
          						  case 0:
/*<532>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_531:
/*<531>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<529>*/ 							printf(/* textboxtype: 1, unk: 1, line: 71 */ "<0x10009:0x00000003>Oh oh oh!\nMaccio, Algo e Orzio\nsono in salvo?!\n\nMa non posso lasciare questo\nposto, ci sono ancora troppi\nmostri nella foresta!")
/*<533>*/ 							set_camera(-1, 0)
/*<534>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_411:
/*<411>*/ 								printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x00000008>Scusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<color red<ultimo >coloroff>dei miei compagni\nstia bene?\nSicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\n<0x10009:0x00000002>Se lo troverai, mi aiuterai di certo\na ricordare dov'è andata la\ntua amica!")
          								flw_180:
/*<180>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<418>*/ 								set_camera(30, 0)
/*<419>*/ 								entrypoint_200_61();
          							  case 1:
/*<535>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_411
          							}
          						  case 1:
          							goto flw_531
          						}
          					}
          				}
          			  case 1:
/*<182>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<183>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<186>*/ 						printf(/* textboxtype: 1, unk: 1, line: 75 */ "<0x10009:0x00000003>Maccio, Algo e Genzio\nsono in salvo?!\n\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<color red<ultimo >coloroff>dei miei compagni\nstia bene?\n<0x10009:0x00000002>Sicuramente si sarà arrampicato\nda qualche parte! Prova a\ncercarlo sugli alberi!\n\nEcco... mi sembra di cominciare\na ricordare qualcosa riguardo\nalla tua amica...!")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<539>*/ 						switch (choice(2)) {
          						  case 0:
/*<541>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<537>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_540:
/*<540>*/ 							set_camera(29, 0)
/*<538>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<536>*/ 							printf(/* textboxtype: 1, unk: 1, line: 74 */ "<0x10009:0x00000003>Oh oh oh!\nMaccio, Algo e Genzio\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri\nnella foresta!")
/*<542>*/ 							set_camera(-1, 0)
/*<543>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_412:
/*<412>*/ 								printf(/* textboxtype: 1, unk: 1, line: 76 */ "<0x10009:0x00000008>Scusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<color red<ultimo >coloroff>dei miei compagni\nstia bene?\nSicuramente si sarà arrampicato\nda qualche parte! Prova a\ncercarlo sugli alberi!\n\n<0x10009:0x00000002>Se lo troverai, mi aiuterai di certo\na ricordare dov'è andata la\ntua amica!")
          								goto flw_180
          							  case 1:
/*<544>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_412
          							}
          						  case 1:
          							goto flw_540
          						}
          					}
          				  case 1:
/*<184>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<185>*/ 						printf(/* textboxtype: 1, unk: 1, line: 78 */ "<0x10009:0x00000003>Sono più tranquillo ora che\nso che Maccio e Algo sono salvi!\nMa chissà gli altri...?\n\nScusa se te lo chiedo, ma non potresti\nassicurarti che anche gli altri\n<color red<due >coloroff>miei compagni stiano bene?\n\n<0x10009:0x00000008>Allooora, dov'era andata la \ntua amica...? Forse di là...\nNo, aspetta, di qua...?")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<548>*/ 						switch (choice(2)) {
          						  case 0:
/*<550>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<546>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_549:
/*<549>*/ 							set_camera(29, 0)
/*<547>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<545>*/ 							printf(/* textboxtype: 1, unk: 1, line: 77 */ "<0x10009:0x00000003>Oh oh oh!\nMaccio e Algo\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri nella\nforesta!")
/*<551>*/ 							set_camera(-1, 0)
/*<552>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_413:
/*<413>*/ 								printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00000002>Scusa se te lo chiedo, ma non\npotresti assicurarti che anche gli altri\n<color red<due >coloroff>miei compagni stiano bene?\n\nSe li troverai, mi\naiuterai di certo a ricordare\ndov'è andata la tua amica!")
          								goto flw_180
          							  case 1:
/*<553>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_413
          							}
          						  case 1:
          							goto flw_549
          						}
          					}
          				}
          			}
          		  case 1:
/*<187>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<188>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<189>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<197>*/ 						printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10009:0x00000003>Maccio, Orzio e Genzio\nsono in salvo?!\n\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<color red<ultimo >coloroff>dei miei compagni\nstia bene?\n<0x10009:0x00000002>Sicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\nEcco... sento che inizio a\nricordare qualcosa riguardo\nalla tua amica...!")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<557>*/ 						switch (choice(2)) {
          						  case 0:
/*<559>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<555>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_558:
/*<558>*/ 							set_camera(29, 0)
/*<556>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<554>*/ 							printf(/* textboxtype: 1, unk: 1, line: 80 */ "<0x10009:0x00000003>Oh oh oh!\nMaccio, Orzio e Genzio\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri nella\nforesta!")
/*<560>*/ 							set_camera(-1, 0)
/*<561>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_414:
/*<414>*/ 								printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00000008>Scusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<color red<ultimo >coloroff>dei miei compagni\nstia bene?\nSicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\n<0x10009:0x00000002>Se lo troverai, mi aiuterai di certo\na ricordare dov'è andata\nla tua amica!")
          								goto flw_180
          							  case 1:
/*<562>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_414
          							}
          						  case 1:
          							goto flw_558
          						}
          					}
          				  case 1:
/*<190>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<191>*/ 						printf(/* textboxtype: 1, unk: 1, line: 84 */ "<0x10009:0x00000003>Sono più tranquillo ora che\nso che Maccio e Orzio sono salvi!\nMa chissà gli altri...?\n\nScusa se te lo chiedo, ma non potresti\nassicurarti che anche gli altri <color red<due\n>coloroff>miei compagni stiano bene?\n\n<0x10009:0x00000008>Allooora, dov'era andata la \ntua amica...? Forse di là...\nNo, aspetta, di qua...?")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<566>*/ 						switch (choice(2)) {
          						  case 0:
/*<568>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<564>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_567:
/*<567>*/ 							set_camera(29, 0)
/*<565>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<563>*/ 							printf(/* textboxtype: 1, unk: 1, line: 83 */ "<0x10009:0x00000003>Oh oh oh!\nMaccio e Orzio\nsono in salvo?!\n\nMa non posso lasciare\nquesto posto, ci sono\nancora troppi mostri nella foresta!")
/*<569>*/ 							set_camera(-1, 0)
/*<570>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_415:
/*<415>*/ 								printf(/* textboxtype: 1, unk: 1, line: 85 */ "<0x10009:0x00000002>Scusa se te lo chiedo, ma non\npotresti assicurarti che anche gli altri\n<color red<due >coloroff>miei compagni stiano bene?\n\nSe li troverai, mi aiuterai di certo\na ricordare dov'è andata\nla tua amica!")
          								goto flw_180
          							  case 1:
/*<571>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_415
          							}
          						  case 1:
          							goto flw_567
          						}
          					}
          				}
          			  case 1:
/*<192>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<196>*/ 						printf(/* textboxtype: 1, unk: 1, line: 87 */ "<0x10009:0x00000003>Sono più tranquillo ora che\nso che Maccio e Genzio sono salvi!\nMa chissà gli altri...?\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\ngli altri <color red<due >coloroff>miei compagni\nstiano bene?\n<0x10009:0x00000008>Allooora, dov'era andata la \ntua amica...? Forse di là...\nNo, aspetta, di qua...?")
          					  case 1:
/*<219>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<575>*/ 						switch (choice(2)) {
          						  case 0:
/*<577>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<573>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_576:
/*<576>*/ 							set_camera(29, 0)
/*<574>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<572>*/ 							printf(/* textboxtype: 1, unk: 1, line: 86 */ "<0x10009:0x00000003>Oh oh oh!\nMaccio e Genzio\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri\nnella foresta!")
/*<578>*/ 							set_camera(-1, 0)
/*<579>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_416:
/*<416>*/ 								printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000002>Scusa se te lo chiedo, ma non\npotresti assicurarti che anche gli altri\n<color red<due >coloroff>miei compagni stiano bene?\n\nSe li troverai, mi aiuterai di certo\na ricordare dov'è andata\nla tua amica!")
          								goto flw_180
          							  case 1:
/*<580>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_416
          							}
          						  case 1:
          							goto flw_576
          						}
          					}
          				  case 1:
/*<194>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf(/* textboxtype: 1, unk: 1, line: 90 */ "<0x10009:0x00000003>Sono più tranquillo ora che\nso che Maccio è salvo!\nMa chissà gli altri...?\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\ngli altri <color red<<color red<tre<color red< >coloroff>miei compagni\nstiano bene?\n<0x10009:0x00000008>Allooora, dov'era andata la \ntua amica...? ")
          					  case 1:
/*<220>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Oh oh oh!<pause 15>\nSono <color blue<Infusonio>coloroff>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause 15>\nNon sei uno qualunque, vero?!\n[1-]Zelda?[2-]Ho una bella\nnotizia per te")
/*<584>*/ 						switch (choice(2)) {
          						  case 0:
/*<586>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<582>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_585:
/*<585>*/ 							set_camera(29, 0)
/*<583>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>Come?!\nHai incontrato i miei compagni?!")
/*<581>*/ 							printf(/* textboxtype: 1, unk: 1, line: 89 */ "<0x10009:0x00000003>Oh oh oh!\nMaccio è in salvo?!\n\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri\nnella foresta!")
/*<587>*/ 							set_camera(-1, 0)
/*<588>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_417:
/*<417>*/ 								printf(/* textboxtype: 1, unk: 1, line: 91 */ "<0x10009:0x00000002>Scusa se te lo chiedo, ma non potresti\nassicurarti che anche gli altri <color red<tre\n>coloroff>miei compagni stiano bene?\n\nQuando saprò che sono tutti\nsani e salvi, sento che ricorderò\ndove s'è diretta la tua amica!")
          								goto flw_180
          							  case 1:
/*<589>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n<0x10009:0x0000000c>Sì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_417
          							}
          						  case 1:
          							goto flw_585
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 1, line: 131 */ "<0x10012:0x00000004>Mio signore <heroname>,\necco le informazioni riguardanti\nl'uso degli strumenti in vostro\npossesso.\n<color green<Premendo brevemente >coloroff>(B) potete\nprepararvi a tirare con la <color yellow<fionda>coloroff>.<0x10011:0x01cd>\n\n\nSe non riuscite a mirare\ncorrettamente, puntate il\ntelecomando verso lo schermo\ne premete (v) per <color green<ricalibrare la mira>coloroff>.<0x10011:0x09cd>")
          }

          void entrypoint_200_92() {
/*<305>*/ 	start()
/*<306>*/ 	printf(/* textboxtype: 7, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<336>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 2, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Mio signore,\nSiamo giunti nella <color blue<foresta\ndi Firone>coloroff>.")
/*<355>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 205, 'param3': 13}
/*<205>*/ 	set_camera(3, 0)
/*<602>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 603, 'param3': 13}
/*<603>*/ 	wait_frames(60)
          }

          void entrypoint_200_59() {
/*<206>*/ 	start()
/*<621>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<623>*/ 		printf(/* textboxtype: 2, unk: 1, line: 133 */ "<0x10012:0x00000004>Signore <heroname>,\nprobabilità che la fiamma si trovi\nin questo lago: 80%.")
          	  case 1:
/*<622>*/ 		printf(/* textboxtype: 2, unk: 1, line: 132 */ "<0x10012:0x00000004>Signore <heroname>,\nprobabilità di trovare la fiamma\noltre questo ingresso: 80%.\n\nCiò a cui il Kyuri eremita si riferiva\nparlando di un potere divino, ritengo\nfosse il <color red<potere celeste>coloroff>.\n\nSuggerisco pertanto di invocare\nil potere celeste e usare la spada\nper <color green<completare il simbolo>coloroff>.")
/*<655>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<338>*/ 	start()
/*<339>*/ 	printf(/* textboxtype: 2, unk: 1, line: 109 */ "<0x10005:0x004b0000>La crescita della rigogliosa\nvegetazione e dei grandi alberi è\ndovuta alla quantità di acqua presente.")
          }

          void entrypoint_200_93() {
/*<445>*/ 	start()
/*<446>*/ 	printf(/* textboxtype: 1, unk: 0, line: 163 */ "<0x10009:0x00000001>Ehilà roccia!\nCi rincontriamo!")
/*<513>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<132>*/ 	start()
/*<213>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<601>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 660, 'param3': 13}
/*<660>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<662>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<661>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<600>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<340>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 2, unk: 1, line: 110 */ "<0x10005:0x004b0000>Grazie a questa caratteristica\nsono presenti molti tipi di esseri\nviventi.")
          }

          void entrypoint_200_94() {
/*<447>*/ 	start()
/*<453>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 455, 'param3': 46}
/*<455>*/ 	set_camera(35, 0)
/*<457>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<516>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 1, unk: 0, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Aspetta, roccia!\n\n\n\nAiutami a risolvere l'enigma\ndi questi esaedri della Dea!")
          			flw_465:
/*<465>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 463, 'param3': 49}
/*<463>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 464, 'param3': 15}
/*<464>*/ 			set_camera(36, 0)
/*<511>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<517>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Aspetta!\n\n\n\nHo un favore da chiederti,\nroccia!")
          			goto flw_465
          		}
          	  case 1:
/*<462>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<481>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<461>*/ 		printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Aspetta!\n\n\n\n<0x10009:0x00170600>Non fare finta di non avermi visto!\n<pause 15> Roccia, ti sto antipatico?!\n[1-]Oh, scusa![2-]Sì, molto")
/*<459>*/ 		switch (choice(2)) {
          		  case 0:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0, line: 184 */ "<0x10009:0x00161e07>Capisco, stai cercando una\nragazza... mi dispiace averti\nfermato.\n\nÈ che ho davvero bisogno\ndi parlare con te un po'...")
          			goto flw_465
          		  case 1:
/*<460>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Capisco... del resto gli\nesploratori sono sempre\nstati degli incompresi!\n\nÈ che ho davvero bisogno\ndi parlare con te un po'...")
          			goto flw_465
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 227, 'param3': 13}
/*<227>*/ 	wait_frames(27)
/*<432>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 49}
/*<224>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 226, 'param3': 13}
/*<226>*/ 	make_actor_do_something(0, 0)
/*<234>*/ 	wait_frames(24)
/*<433>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 435, 'param3': 50}
/*<435>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 1, line: 134 */ "<0x10012:0x00000004>Signore <heroname>,\nho ottenuto delle informazioni\nriguardanti Zelda.\n\nSembra sia stata attaccata da creature\nmalvagie, ma è riuscita a fuggire...<pause 15>\nSi trova ancora in grave pericolo.")
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 358, 'param3': 30}
/*<358>*/ 	wait_frames(15)
/*<335>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<155>*/ 	printf(/* textboxtype: 2, unk: 1, line: 135 */ "<sound 4>Ho contrassegnato il luogo\nin cui si trova il Kyuri Maccio.\nVi prego di controllare la mappa.")
/*<159>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 359, 'param3': 34}
/*<359>*/ 	wait_frames(15)
/*<225>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 302, 'param3': 13}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	printf(/* textboxtype: 2, unk: 1, line: 136 */ "Inoltre, ritengo che il rilevatore abbia\nreagito perché questo individuo è\nentrato in contatto con Zelda.\n\nProbabilità che anche il saggio\ncon cui Zelda è fuggita possa\nattivare il rilevatore: 85%.\n\nSuggerisco di continuare la\nricerca di Zelda utilizzando\nil mio rilevatore.")
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 434, 'param3': 36}
/*<434>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 228, 'param3': 17}
/*<228>*/ 	wait_frames(21)
/*<231>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 277, 'param3': 13}
/*<277>*/ 	wait_frames(30)
/*<363>*/ 	set_camera(19, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 230, 'param3': 17}
/*<230>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 229, 'param3': 13}
/*<229>*/ 	printf(/* textboxtype: 1, unk: 2, line: 20 */ "<0x10009:0x0000000d>AH! Che paura!\nHai amici strani, tu...")
/*<523>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 522, 'param3': 13}
/*<522>*/ 	printf(/* textboxtype: 1, unk: 2, line: 19 */ "<0x10009:0x00000007>Se vai a cercare la tua amica e il <color blue<saggio>coloroff>,\ngli diresti che <color red<io sto bene>coloroff>, per favore?\n\n\n<0x10009:0x00000005>La tua amica dovrebbe essere con lui!")
/*<618>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<619>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<142>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>Se la userai, riuscirai\na raggiungere il santuario in\nfondo alla foresta!")
/*<380>*/ 	set_camera(21, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 382, 'param3': 15}
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 383, 'param3': 32}
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 384, 'param3': 17}
/*<384>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 385, 'param3': 17}
/*<385>*/ 	set_camera(22, 0)
/*<388>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<390>*/ 		printf(/* textboxtype: 1, unk: 1, line: 104 */ "<0x10009:0x00000008>Vedi quelle liane lì...<pause 15>?\n\n\n\nChe impaziente...<pause 15> neanche il\ntempo di spiegare...!")
          		flw_391:
/*<391>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Preparati premendo (B) e\ntira premendo (A)!<0x10011:0x01cd>\n\n\nSe finisci i proiettili, puoi\n<color green<usare i semi >coloroff>dei frutti di \nquegli alberi!")
/*<386>*/ 		set_camera(23, 0)
/*<394>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 393, 'param3': 17}
/*<393>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<387>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 392, 'param3': 17}
/*<392>*/ 			printf(/* textboxtype: 1, unk: 1, line: 106 */ "<0x10009:0x00000006>Vedrai che troverai la\ntua amica! Oh oh oh!")
/*<398>*/ 			set_camera(25, 0)
/*<399>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<395>*/ 			printf(/* textboxtype: 1, unk: 1, line: 106 */ "<0x10009:0x00000006>Vedrai che troverai la\ntua amica! Oh oh oh!")
/*<396>*/ 			set_camera(24, 0)
/*<397>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<389>*/ 		printf(/* textboxtype: 1, unk: 1, line: 103 */ "<0x10009:0x00000008>Perché non provi a esercitarti\nmirando a quelle liane arrotolate?")
          		goto flw_391
          	}
          }

          void entrypoint_200_43() {
/*<342>*/ 	start()
/*<343>*/ 	printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10005:0x004b0000>Secondo le mie analisi,\nanche Zelda si trova da qualche\nparte in questo luogo.\n\n<0x10005:0x004b0000>Vi consiglio di sfruttare il mio\nrilevatore per cercarla.")
/*<644>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<645>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<450>*/ 	start()
/*<454>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 456, 'param3': 46}
/*<456>*/ 	set_camera(35, 0)
/*<466>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<519>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<518>*/ 			printf(/* textboxtype: 1, unk: 0, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Aspetta, roccia!\n\n\n\nAiutami a risolvere l'enigma\ndi questi esaedri della Dea!")
          			flw_474:
/*<474>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 472, 'param3': 49}
/*<472>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 473, 'param3': 15}
/*<473>*/ 			set_camera(36, 0)
/*<512>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<520>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Aspetta!\n\n\n\nHo un favore da chiederti,\nroccia!")
          			goto flw_474
          		}
          	  case 1:
/*<471>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<482>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<470>*/ 		printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Aspetta!\n\n\n\n<0x10009:0x00170600>Non fare finta di non avermi visto!\n<pause 15> Roccia, ti sto antipatico?!\n[1-]Oh, scusa![2-]Sì, molto")
/*<468>*/ 		switch (choice(2)) {
          		  case 0:
/*<467>*/ 			printf(/* textboxtype: 1, unk: 0, line: 184 */ "<0x10009:0x00161e07>Capisco, stai cercando una\nragazza... mi dispiace averti\nfermato.\n\nÈ che ho davvero bisogno\ndi parlare con te un po'...")
          			goto flw_474
          		  case 1:
/*<469>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Capisco... del resto gli\nesploratori sono sempre\nstati degli incompresi!\n\nÈ che ho davvero bisogno\ndi parlare con te un po'...")
          			goto flw_474
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<651>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<200>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 405, 'param3': 51}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 201, 'param3': 17}
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 199, 'param3': 16}
/*<199>*/ 	printf(/* textboxtype: 2, unk: 1, line: 137 */ "Purtroppo Zelda non si trova più\ncon il saggio,<pause 15> ma sembra che\nlui possegga delle informazioni.\n\nProbabilità di rintracciare Zelda\naiutando il saggio a ritrovare i\nsuoi compagni dispersi: 85%.\n\nHo <sound 4><color red<aggiunto le tracce della\npresenza dei Kyuri>coloroff> al rilevatore.")
/*<653>*/ 	open_dowsing_wheel(1)
/*<654>*/ 	printf(/* textboxtype: 2, unk: 1, line: 138 */ "Vi servono altre informazioni riguardo\nalle impostazioni del rilevatore e a\ncome cambiare soggetto di ricerca?\n[1-]Sì[2]No")
/*<636>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_524:
/*<524>*/ 		printf(/* textboxtype: 2, unk: 1, line: 139 */ "Tenete premuto (C) per visualizzare\ni possibili soggetti di ricerca del\nrilevatore.<0x10011:0x06cd>\n\n<color green<Puntate il telecomando>coloroff> sull'oggetto da\nselezionare e rilasciate (C) per\nconfermare l'impostazione\ndel rilevatore.<0x10011:0x06cd>\nSe non volete cercare nulla\nin particolare scegliete <color green<guarda>coloroff>\ne rilasciate (C).\n[1-]Dimmelo\ndi nuovo[2]Ho capito")
/*<525>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_524
          		  case 1:
          			flw_652:
/*<652>*/ 			printf(/* textboxtype: 2, unk: 1, line: 140 */ "Inoltre, i Kyuri che avete già \nrintracciato saranno segnati\nsulla mappa.\n\nIn tal modo il rilevatore non \nli segnalerà. Ora potete\niniziare la vostra ricerca.")
/*<648>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<649>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 650, 'param3': 36}
/*<650>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_652
          	}
          }

          void entrypoint_200_44() {
/*<356>*/ 	start()
/*<357>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<451>*/ 	start()
/*<452>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>Oooh! Se n'è volato in cielo!!!\n\n\n\n<0x10009:0x00131b00>Ha reagito alla luce che è\nscaturita dalla tua spada!\n\n\n<0x10009:0x00001b05>Ma dove sarà finito, ora?\nIl mistero si infittisce!\n\n\n<0x10009:0x00161e00>Secondo gli scritti antichi, questi\nesaedri sono sparsi per\ntutta la terra...\n\n<0x10009:0x00001700>Prova a liberare tutti quelli\nche vedi, se ne capirai\nqualcosa, vieni a dirmelo!")
/*<510>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<235>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<236>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<244>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<245>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<246>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<241>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 287, 'param3': 51}
/*<287>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 285, 'param3': 17}
/*<285>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 286, 'param3': 13}
/*<286>*/ 						wait_frames(27)
/*<243>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 240, 'param3': 16}
/*<240>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "Questa zona non presenta\ntracce che facciano reagire\nil rilevatore.\n\nSuggerisco di tornare dal saggio\na raccogliere informazioni.")
/*<242>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          						flw_288:
/*<288>*/ 						wait_frames(21)
/*<368>*/ 						set_camera(17, 0)
/*<367>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 371, 'param3': 17}
/*<371>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 370, 'param3': 17}
/*<370>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 369, 'param3': 13}
/*<369>*/ 						printf(/* textboxtype: 1, unk: 2, line: 40 */ "<0x10009:0x00000014>EH?!\nNon farmi spaventare!")
/*<406>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_238:
/*<238>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 284, 'param3': 51}
/*<284>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 282, 'param3': 17}
/*<282>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 283, 'param3': 13}
/*<283>*/ 						wait_frames(27)
/*<239>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 612, 'param3': 16}
/*<612>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<237>*/ 							printf(/* textboxtype: 2, unk: 1, line: 141 */ "Ho <sound 4>segnato la posizione\ndel Kyuri Algo. Ma il rilevatore \nindica la presenza di altri Kyuri.")
          							flw_308:
/*<308>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 599, 'param3': 17}
/*<599>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          							goto flw_288
          						  case 1:
/*<613>*/ 							printf(/* textboxtype: 2, unk: 1, line: 142 */ "Ho <sound 4>segnato la posizione\ndel Kyuri Algo. Zelda non sembra\nessere con lui.")
          							goto flw_308
          						}
          					}
          				  case 1:
          					goto flw_238
          				}
          			  case 1:
          				goto flw_238
          			}
          		  case 1:
          			goto flw_238
          		}
          	  case 1:
          		goto flw_238
          	}
          }

          void entrypoint_200_10() {
/*<310>*/ 	start()
/*<607>*/ 	set_camera(-1, 0)
/*<608>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 609, 'param3': 40}
/*<609>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 610, 'param3': 13}
/*<610>*/ 	wait_frames(60)
/*<350>*/ 	set_camera(15, 0)
/*<348>*/ 	wait_frames(75)
/*<353>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 354, 'param3': 24}
/*<354>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 349, 'param3': 13}
/*<349>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 351, 'param3': 14}
/*<351>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 313, 'param3': 13}
/*<313>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "<0x10009:0x00000007>Ehi! Giovane virgulto!\nSono io! Hai trovato la tua amica?\n[1-]Chi sei?[2-]No...")
/*<314>*/ 	switch (choice(2)) {
          	  case 0:
/*<317>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 315, 'param3': 13}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "<0x10009:0x00000013>Ma come chi sono?!\n<color blue<Maccio>coloroff>!!! Ora sono triste...")
          		flw_319:
/*<319>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 320, 'param3': 13}
/*<320>*/ 		printf(/* textboxtype: 1, unk: 2, line: 28 */ "<0x10009:0x00000007>Ho appena incontrato tutti i miei\ncompagni!\nE tutto grazie a te!")
/*<312>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 318, 'param3': 13}
/*<318>*/ 		printf(/* textboxtype: 1, unk: 2, line: 29 */ "<0x10009:0x00000005>Spero che troverai la tua amica!")
/*<321>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 322, 'param3': 14}
/*<322>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<344>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<311>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 316, 'param3': 13}
/*<316>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>Uh... capisco...\nMa lei sapeva dove stava andando!")
          		goto flw_319
          	}
          }

          void entrypoint_200_63() {
/*<247>*/ 	start()
/*<248>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<249>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<258>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<259>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<260>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<255>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 294, 'param3': 35}
/*<294>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 292, 'param3': 17}
/*<292>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 293, 'param3': 13}
/*<293>*/ 						wait_frames(28)
/*<257>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 254, 'param3': 16}
/*<254>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "Questa zona non presenta\ntracce che facciano reagire\nil rilevatore.\n\nSuggerisco di tornare dal saggio\na raccogliere informazioni.")
/*<256>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          						flw_295:
/*<295>*/ 						wait_frames(21)
/*<402>*/ 						set_camera(26, 0)
/*<401>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 298, 'param3': 17}
/*<298>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 						printf(/* textboxtype: 1, unk: 2, line: 52 */ "<0x10009:0x0000000d>AAAH! M'ha messo paura!\nPensavo fosse un altro\ndi quei cosi brutti!")
/*<611>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<620>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_251:
/*<251>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 291, 'param3': 35}
/*<291>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 289, 'param3': 17}
/*<289>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 290, 'param3': 13}
/*<290>*/ 						wait_frames(28)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 614, 'param3': 16}
/*<614>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<250>*/ 							printf(/* textboxtype: 2, unk: 1, line: 143 */ "Ho <sound 4>segnato la posizione\ndel Kyuri Orzio. Ma il rilevatore \nindica la presenza di altri Kyuri.")
          							flw_307:
/*<307>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 252, 'param3': 17}
/*<252>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          							goto flw_295
          						  case 1:
/*<615>*/ 							printf(/* textboxtype: 2, unk: 1, line: 144 */ "Ho <sound 4>segnato la posizione\ndel Kyuri Orzio. Zelda non sembra\nessere con lui.")
          							goto flw_307
          						}
          					}
          				  case 1:
          					goto flw_251
          				}
          			  case 1:
          				goto flw_251
          			}
          		  case 1:
          			goto flw_251
          		}
          	  case 1:
          		goto flw_251
          	}
          }

          void entrypoint_200_64() {
/*<261>*/ 	start()
/*<262>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<263>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<269>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<270>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<271>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<267>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 268, 'param3': 51}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 404, 'param3': 16}
/*<404>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "Questa zona non presenta\ntracce che facciano reagire\nil rilevatore.\n\nSuggerisco di tornare dal saggio\na raccogliere informazioni.")
          						flw_265:
/*<265>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 233, 'param3': 36}
/*<233>*/ 						wait_frames(21)
/*<376>*/ 						set_camera(17, 0)
/*<375>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 378, 'param3': 17}
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 377, 'param3': 17}
/*<377>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 174, 'param3': 13}
/*<174>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<175>*/ 							printf(/* textboxtype: 1, unk: 2, line: 59 */ "<0x10009:0x00000005>Hai incontrato il saggio?\nL'hai trovato?! Bene!!!\n\n\n<0x10009:0x00000014>Se lo rivedi, digli che sono qui,\nper favore!")
          							flw_407:
/*<407>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<173>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>Il saggio è il più bravo a mimetizzarsi!\nChissà se riuscirai a trovarlo!")
          							goto flw_407
          						}
          					  case 1:
          						flw_264:
/*<264>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 266, 'param3': 51}
/*<266>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 616, 'param3': 16}
/*<616>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<403>*/ 							printf(/* textboxtype: 2, unk: 1, line: 145 */ "Ho <sound 4>segnato la posizione\ndel Kyuri Genzio. Ma il rilevatore \nindica la presenza di altri Kyuri.")
          							goto flw_265
          						  case 1:
/*<617>*/ 							printf(/* textboxtype: 2, unk: 1, line: 146 */ "Ho <sound 4>segnato la posizione\ndel Kyuri Genzio. Zelda non sembra\nessere con lui.")
          							goto flw_265
          						}
          					}
          				  case 1:
          					goto flw_264
          				}
          			  case 1:
          				goto flw_264
          			}
          		  case 1:
          			goto flw_264
          		}
          	  case 1:
          		goto flw_264
          	}
          }

          void entrypoint_200_99() {
/*<448>*/ 	start()
/*<449>*/ 	printf(/* textboxtype: 7, unk: 0, line: 189 */ "Tu che arrivi dal Cielo qui sulla\nTerra, mira alla stella verso cui\nad ali spiegate vola l'uccello che\nguarda al firmamento.")
          }

          void entrypoint_200_65() {
/*<634>*/ 	start()
/*<635>*/ 	printf(/* textboxtype: 2, unk: 1, line: 158 */ "Considerando che la vegetazione\nè la stessa della foresta di Firone,\ndeduco che ci troviamo nel cuore\ndella suddetta foresta.\nZelda s'è diretta al santuario,\nsuggerisco di continuare la\nsua ricerca.")
/*<646>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<647>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<272>*/ 	start()
/*<323>*/ 	printf(/* textboxtype: 2, unk: 1, line: 150 */ "<0x10012:0x00000004>Signore <heroname>,\navverto l'aura di <color blue<Zelda>coloroff> provenire\nda questo edificio.")
/*<324>*/ 	set_camera(13, 0)
/*<279>*/ 	set_camera(-1, 0)
/*<273>*/ 	printf(/* textboxtype: 2, unk: 1, line: 151 */ "Inoltre, avverto la presenza\ndi numerose creature ostili.\nVolete procedere ugualmente?\n[1-]Certo[2-]No")
/*<274>*/ 	switch (choice(2)) {
          	  case 0:
/*<276>*/ 		printf(/* textboxtype: 2, unk: 1, line: 152 */ "Non siate avventato.\nQui non ci sarà nessuno\nche potrà venirvi in aiuto.")
          		flw_280:
/*<280>*/ 		set_camera(14, 0)
/*<281>*/ 		printf(/* textboxtype: 2, unk: 1, line: 154 */ "Se ritenete di essere in\ngrave pericolo, potete <color green<tornare\nin cielo >coloroff>e prepararvi meglio.")
/*<642>*/ 		set_camera(-1, 0)
/*<638>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<640>*/ 			printf(/* textboxtype: 2, unk: 1, line: 156 */ "In generale, per proteggersi\nè meglio avere sempre uno <color red<scudo>coloroff>\ne delle <color red<pozioni >coloroff>per ripristinare i cuori.")
          			flw_641:
/*<641>*/ 			printf(/* textboxtype: 2, unk: 1, line: 157 */ "Bene, riprendete pure\nla ricerca di Zelda.")
          		  case 1:
/*<639>*/ 			printf(/* textboxtype: 2, unk: 1, line: 155 */ "<0x10012:0x00000001>Signore, non avete equipaggiato\nuno<color red< scudo>coloroff>, suggerisco di averne\nsempre uno.")
          			goto flw_641
          		}
          	  case 1:
/*<275>*/ 		printf(/* textboxtype: 2, unk: 1, line: 153 */ "La paura che accompagna\nl'istinto di sopravvivenza non\nè qualcosa di cui vergognarsi.")
          		goto flw_280
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 1, line: 112 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nIl <sound 4><color red<rilevatore reagisce>coloroff> alla creatura. \n[1-]Davvero?[2-]È Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 1, line: 113 */ "<0x10012:0x00000005>Sì, mio signore.\nSecondo le mie analisi, si tratta\ndi un <color blue<Kyuri >coloroff>della foresta.\n\nSono dotati di parola, di grandi\nconoscenze e sono pacifici.<pause 15>\nNon si tratta di Zelda.\n\nIgnoro la causa della reazione\ndel mio rilevatore. Suggerisco\ndi seguirne le tracce.")
          		flw_134:
/*<134>*/ 		set_camera(10, 0)
/*<136>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 2, unk: 1, line: 114 */ "Probabilità che si tratti di Zelda: 5%.\nSecondo le mie analisi è molto\npiù probabile che si tratti di un <color blue<Kyuri\n>coloroff>della foresta.\nSono dotati di parola, di grandi\nconoscenze e sono pacifici.<pause 15>\nNon conosco il motivo della\nreazione del rilevatore.\nSuggerisco di seguirne le tracce.")
          		goto flw_134
          	}
          }

          void entrypoint_200_69() {
/*<656>*/ 	start()
/*<657>*/ 	printf(/* textboxtype: 2, unk: 1, line: 159 */ "<0x10012:0x00000004><heroname>, mio signore.\nQuando avete qualche dubbio,\nnon esitate a rivolgervi a me con (v).<0x10011:0x09cd>\n\nSelezionate <color red<consigli >coloroff>o <color red<suggerimenti >coloroff>e \nsarò ben lieta di fornirvi ogni\ninformazione di cui dispongo in merito\nalla situazione.")
/*<663>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

