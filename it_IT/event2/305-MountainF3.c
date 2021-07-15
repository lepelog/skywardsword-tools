          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x700Bene... vuoi chiedere\nqualche altra cosa?\n[1]<b<Drago\nd'acqua>>[2]<b<Drago\ndel fulmine>>[3]Vulcano[4-]Niente")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x07\x702Uhm... il <b<drago d'acqua>>...\nLa Dea le ha affidato il compito\ndi proteggere la foresta.\n\n\x0E\x01\x09\x04\x00\x700Non ha solo forza fisica,\nè anche molto determinata.\nFai attenzione che non ti mangi!\n\n\x0E\x01\x09\x04\x00\x703Ah ah ah!!!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x07\x702Uhm... il <b<drago del fulmine>>...\nLa Dea gli ha affidato il compito\ndi proteggere il deserto.\n\nCustodisce gelosamente\nlo <r<scudo leggendario>>.\n\n\n\x0E\x01\x09\x04\x00\x700Ha escogitato una prova per\nvalutare colui a cui dovrà affidarlo.\nTenuto conto che lui è così violento\nla prova non sarà uno scherzo.\n\x0E\x01\x09\x04\x00\x03Ah ah ah!!!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x07\x702Uhm... questa montagna\nun tempo non era un luogo pericoloso.\n\n\n\x0E\x01\x09\x04\x00\x700Gli abitanti della superficie\ne quelli delle profondità se ne\nspartivano pacificamente le risorse.\n\n\x0E\x01\x09\x04\x00\x700Ma di quel periodo\nnon restano ormai che rovine...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x702Uhm... davvero?\nLa strada è ormai palese...\nAvanti!")
          			}
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x701Uhm... guarda chi si vede!\n\n\n\n\x0E\x01\x09\x04\x00\x700Volevi chiedermi qualche cosa,\nimpavido?\n[1]<b<Drago\nd'acqua>>[2]<b<Drago\ndel fulmine>>[3]Vulcano[4-]Niente")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf("È stata la mia forza a provocare\nl'eruzione del vulcano.\nPerdonami per averti coinvolto.\n\nTra poco il cielo tornerà sereno...\nÈ ora che tu vada!")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf("È stata la mia forza a provocare\nl'eruzione del vulcano.\nPerdonami per averti coinvolto.\n\nTra poco il cielo tornerà sereno...\nÈ ora che tu vada!")
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
/*<  2>*/ 	printf("\x0E\x01\x09\x04\x00\x10Ecco!!!\nSono arrivati i rinforzi!!!")
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x0F\xF08Ehi!\nDa quanto tempo, amico!\n\n\n\x0E\x01\x09\x04\x00\xE00Eh?\nTi sei scordato di me?\n\n\n\x0E\x01\x09\x04\x0E\xE00Sono <b<Platio>>,\nquello del santuario a nord!\nIl Mogma!\n\n\x0E\x01\x09\x04\x0E\xE00Ho visto che ti\nportavano via svenuto e ti ho seguito!")
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x0D\xE0AHai del coraggio, amico!\nE che stai facendo?\n[1]Beh...[2]Cerco")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05D\x2010drago? Intendi dire un dio?\n\n\n\nUhm... effettivamente ho sentito\ndire che in questa montagna\nvive un dio...\n\n\x0E\x01\x09\x04\x0F\x210AAmico, ti piacciono proprio queste\nstorie di fantasia...\n\n\n\x0E\x01\x09\x04\x0D\x00Eh?! Cosa ci faccio io qui?\n\n\n\n\x0E\x01\x09\x04\x0E\xE0BHo sentito dire che dei furfanti si\nriuniscono qui in montagna!\n\n\nEh eh eh... se ci sono furfanti\nci dev'essere un tesoro!")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x0E\xE09Comunque... nel frattempo\nti conviene darti da\nfare, amico!\n\nNon te ne sei accorto?\nNon hai armi!\n\n\n\x0E\x01\x09\x04\x0F\xF0AMentre eri svenuto ti hanno\nripulito da capo a piedi...\nPrima ti conviene andare a riprendere\nle tue cose!\n\x0E\x01\x09\x04\x0E\xE00Io sono riuscito a recuperare\nquesti intanto...")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf("\x0E\x01\x09\x04\x11\x110BBene, ci si vede allora!\nHo un sacco di cose da fare!\n\n\n\x0E\x01\x09\x04\x0F\xE00Ciao!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0BAhhh... ho capito!\nLa diceria è arrivata\nanche alle tue orecchie!\n\n\x0E\x01\x09\x04\x0E\xE00Eh eh eh...\nPare che dei furfanti abbiano un covo\nqui sulla montagna!\n\n\x0E\x01\x09\x04\x0F\xE00Se ci sono furfanti ci dev'essere\nun tesoro prezioso!")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\nTe lo dico di nuovo...\nMi raccomando, non farti\nscoprire dai quei tipacci!\n\n\x0E\x01\x09\x04\x0F\xE00Potrebbe succederti\nqualcosa di veramente brutto!\nNon farti scoprire, hai capito?\n[1]Sì[2]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf("... ...\n\n\n\n\x0E\x01\x09\x04\x0F\xE06Ah... d'accordo amico, ma non farmi\nprendere un colpo!\n\n\n\x0E\x01\x09\x04\x0E\xE00OK! Ti dico una cosa!\nApri la mappa!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x11\x110BSei pronto?\nOggi sono generoso!\nTi dirò cosa c'è negli scrigni!\n\n... Ecco qua!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x0E\xE09Che delusione!\nNiente di quello che mi interessa...\n\n\n\x0E\x01\x09\x04\x0F\xE00Se c'è qualcosa di quello\nche ti hanno rubato, amico,\nti conviene riprenderlo!")
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0BBene! \nIo torno a cercare il mio tesoro!\n\n\nCiao!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ehi, amico!")
/*< 18>*/ 		printf("\x0E\x01\x09\x04\x0F\xE00Ma che stai facendo?\nSei arrivato fin qui disarmato?\nTe l'ho detto che da queste\nparti si riuniscono tipacci!\n\x0E\x01\x09\x04\x0E\xE03Stai attento!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf("Uff...\n\n\n\nPrima ho visto quei tipi loschi...\nSono andati di là.\nDev'essere successo qualcosa...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf("Uff...\nChe caldo!\n\n\nE ora, a me tutti\ni tesori del mondo...")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("Avete tutta la mia gratitudine,\nLink, \x0E\x01\x12\x04\x00\x04mio signore.\n\n\nVi prego di volermi perdonare per non\nessere stata al vostro fianco a causa\ndell'eruzione del vulcano.\n\nMentre mi trovavo qui, ho percepito\nuna forte energia che proveniva\ndall'area di destra.\n\nProbabilità che si tratti del drago che\nconosce la parte della <b<Melodia\ndell'impavido>>: 60%.\n\nSuggerirei di recuperare il resto\ndell'equipaggiamento e di continuare\nle ricerche.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf("Bene...\nVorrei farti vedere un nuovo\nsuggerimento.\nVuoi vederlo?[1]Sì[2-]No")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf("Va bene...\nRicordati che sto dalla tua parte.\nDatti da fare!")
          		}
          	  case 1:
/*< 65>*/ 		printf("Bene...\nVorrei farti vedere un suggerimento\nspeciale.\nVuoi vederlo?[1]Sì[2-]No")
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
/*< 81>*/ 			printf("Bene...\nVorrei farti vedere un suggerimento\nspeciale.\nVuoi vederlo?[1]Sì[2-]No")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf("Va bene...\nRicordati che sto dalla tua parte.\nDatti da fare!")
          			}
          		  case 1:
/*< 80>*/ 			printf("Ops...<pause0A> Per la verità non ho nessun\nnuovo suggerimento...\nVuoi rivedere uno di quelli che ti ho già\nmostrato?[1]Sì[2-]No")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf("Bene...\nVorrei farti vedere un suggerimento\nspeciale.\nVuoi vederlo?[1]Sì[2-]No")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

