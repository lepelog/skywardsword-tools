          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000700>Bene... vuoi chiedere qualche altra cosa?\n[1-]<color blue<Drago d'acqua>coloroff>[2-]<color blue<Drago del fulmine>coloroff>[3-]Vulcano[4]Niente")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x00070702>Uhm... il <color blue<drago d'acqua>coloroff>...\nLa Dea le ha affidato il compito\ndi proteggere la foresta.\n\n<0x10009:0x00000700>Non ha solo forza fisica,\nè anche molto determinata.\nFai attenzione che non ti mangi!\n\n<0x10009:0x00000703>Ah ah ah!!!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00070702>Uhm... il <color blue<drago del fulmine>coloroff>...\nLa Dea gli ha affidato il compito\ndi proteggere il deserto.\n\nCustodisce gelosamente\nlo <color red<scudo leggendario>coloroff>.\n\n\n<0x10009:0x00000700>Ha escogitato una prova per\nvalutare colui a cui dovrà affidarlo.\nTenuto conto che lui è così violento\nla prova non sarà uno scherzo.\n<0x10009:0x00000003>Ah ah ah!!!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00070702>Uhm... questa montagna un tempo\nnon era un luogo pericoloso.\n\n\n<0x10009:0x00000700>Gli abitanti della superficie e quelli\ndelle profondità se ne spartivano\npacificamente le risorse.\n\n<0x10009:0x00000700>Ma di quel periodo non restano ormai\nche rovine...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00000702>Uhm... davvero?\nLa strada è ormai palese... Avanti!")
          			}
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000701>Uhm... guarda chi si vede!\n\n\n\n<0x10009:0x00000700>Volevi chiedermi qualche cosa, impavido?\n[1-]<color blue<Drago d'acqua>coloroff>[2-]<color blue<Drago del fulmine>coloroff>[3-]Vulcano[4]Niente")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "È stata la mia forza a provocare\nl'eruzione del vulcano.\nPerdonami per averti coinvolto.\n\nTra poco il cielo tornerà sereno...\nÈ ora che tu vada!")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "È stata la mia forza a provocare\nl'eruzione del vulcano.\nPerdonami per averti coinvolto.\n\nTra poco il cielo tornerà sereno...\nÈ ora che tu vada!")
/*< 28>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 29>*/ 				changeScene(4, 0) // 
          			}
          		  case 1:
          			goto flw_57
          		}
          	}
          }

          void entrypoint_305_02() {
/*<  1>*/ 	start()
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 2, 'param3': 16}
/*<  2>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000010>Ecco!!! Sono arrivati i rinforzi!!!")
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x000f0f08>Ehi! Da quanto tempo, amico!\n\n\n\n<0x10009:0x00000e00>Eh? Ti sei scordato di me?\n\n\n\n<0x10009:0x000e0e00>Sono <color blue<Platio>coloroff>, quello del santuario a nord!\nIl Mogma!\n\n\n<0x10009:0x000e0e00>Ho visto che ti portavano via svenuto\ne ti ho seguito!")
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000d0e0a>Hai del coraggio, amico!\nE che stai facendo?\n[1-]Beh...[2-]Cerco")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000e0e05>D‐drago? Intendi dire un dio?\n\n\n\nUhm... effettivamente ho sentito dire\nche in questa montagna vive un dio...\n\n\n<0x10009:0x000f210a>Amico, ti piacciono proprio queste\nstorie di fantasia...\n\n\n<0x10009:0x000d0000>Eh?! Cosa ci faccio io qui?\n\n\n\n<0x10009:0x000e0e0b>Ho sentito dire che dei furfanti si\nriuniscono qui in montagna!\n\n\nEh eh eh... se ci sono furfanti\nci dev'essere un tesoro!")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000e0e09>Comunque... nel frattempo ti conviene\ndarti da fare, amico!\n\n\nNon te ne sei accorto? Non hai armi!\n\n\n\n<0x10009:0x000f0f0a>Mentre eri svenuto ti hanno ripulito da\ncapo a piedi... Prima ti conviene andare\na riprendere le tue cose!\n\n<0x10009:0x000e0e00>Io sono riuscito a recuperare\nquesti intanto...")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x0011110b>Bene, ci si vede allora!\nHo un sacco di cose da fare!\n\n\n<0x10009:0x000f0e00>Ciao!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000f0f0b>Ahhh... ho capito! La diceria è arrivata\nanche alle tue orecchie!\n\n\n<0x10009:0x000e0e00>Eh eh eh... Pare che dei furfanti abbiano\nun covo qui sulla montagna!\n\n\n<0x10009:0x000f0e00>Se ci sono furfanti ci dev'essere\nun tesoro prezioso!")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x0000000a>Te lo dico di nuovo... Mi raccomando,\nnon farti scoprire dai quei tipacci!\n\n\n<0x10009:0x000f0e00>Potrebbe succederti qualcosa\ndi veramente brutto!\n\n\nNon farti scoprire, hai capito?\n[1-]Sì[2-]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "... ...\n\n\n\n<0x10009:0x000f0e06>Ah... d'accordo amico, ma non farmi\nprendere un colpo!\n\n\n<0x10009:0x000e0e00>OK! Ti dico una cosa! Apri la mappa!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x0011110b>Sei pronto?\nOggi sono generoso!\nTi dirò cosa c'è negli scrigni!\n\n... Ecco qua!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e09>Che delusione!\nNiente di quello che mi interessa...\n\n\n<0x10009:0x000f0e00>Se c'è qualcosa di quello che ti hanno\nrubato, amico, ti conviene riprenderlo!")
/*< 22>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000e0e0b>Bene! Io torno a cercare il mio tesoro!\n\n\n\nCiao!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000001>Ehi, amico!")
/*< 18>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000f0e00>Ma che stai facendo?\nSei arrivato fin qui disarmato?\n\n\nTe l'ho detto che da queste parti\nsi riuniscono tipacci!\n\n\n<0x10009:0x000e0e03>Stai attento!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Uff...\n\n\n\nPrima ho visto quei tipi loschi...\nSono andati di là.\nDev'essere successo qualcosa...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Uff... Che caldo!\n\n\n\nE ora, a me tutti i tesori del mondo...")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Avete tutta la mia gratitudine,\n<heroname>, <0x10012:0x00000004>mio signore.\n\n\nVi prego di volermi perdonare per non\nessere stata al vostro fianco a causa\ndell'eruzione del vulcano.\n\nMentre mi trovavo qui, ho percepito\nuna forte energia che proveniva\ndall'area di destra.\n\nProbabilità che si tratti del drago che\nconosce la parte della <color blue<Melodia\ndell'impavido>coloroff>: 60%.\n\nSuggerirei di recuperare il resto\ndell'equipaggiamento e di continuare\nle ricerche.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Bene...\nVorrei farti vedere un nuovo\nsuggerimento. Vuoi vederlo?\n[1-]Sì[2]No")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "Va bene... Ricordati che sto dalla tua\nparte. Datti da fare!")
          		}
          	  case 1:
/*< 65>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Bene...\nVorrei farti vedere un suggerimento\nspeciale. Vuoi vederlo?\n[1-]Sì[2]No")
/*< 70>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_66
          	}
          }

          void entrypoint_305_07() {
/*< 72>*/ 	start()
/*< 77>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 79>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Bene...\nVorrei farti vedere un suggerimento\nspeciale. Vuoi vederlo?\n[1-]Sì[2]No")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "Va bene... Ricordati che sto dalla tua\nparte. Datti da fare!")
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Ops...<pause 10> Per la verità non ho nessun\nnuovo suggerimento...\nVuoi rivedere uno di quelli che ti ho già\nmostrato?[1-]Sì[2]No")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Bene...\nVorrei farti vedere un suggerimento\nspeciale. Vuoi vederlo?\n[1-]Sì[2]No")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

