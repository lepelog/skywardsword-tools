          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "Benvenuto!")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "Mentre stani le rupie puoi incappare\nanche in delle bombe! Allora, ci stai?\n\n\n<0x10009:0x00141614>Sembri un po' stanco. Torna appena\navrai recuperato qualche cuore.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "Se ti va, puoi usare quel sedile.")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Puoi continuare a stanare rupie finché\nnon trovi delle bombe! Vuoi giocare a\n<color blue<Stana la rupia>coloroff>? Se sì, a che livello?\n[1-]Facile[2-]Normale[3-]Difficile[4]Nessuno")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1, line: 10 */ "Costa <color red<30 rupie>coloroff> per turno.\nVuoi provare?\n[1-]Sì[2]No")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ti auguro di trovare un sacco di rupie!\nBuona fortuna.")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Non hai abbastanza rupie. Torna pure\nquando ne avrai a sufficienza.")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "Che livello vuoi provare?\n[1-]Facile[2-]Normale[3-]Difficile[4]Nessuno")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "Nel livello facile ci sono meno punti\nin cui scavare. Ottimo per chi è alla\nprima esperienza.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Costa <color red<50 rupie >coloroff>per turno.\nVuoi provare?\n[1-]Sì[2]No")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ti auguro di trovare un sacco di rupie!\nBuona fortuna.")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Non hai abbastanza rupie. Torna pure\nquando ne avrai a sufficienza.")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "Che livello vuoi provare?\n[1-]Facile[2-]Normale[3-]Difficile[4]Nessuno")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "Nel livello normale ci sono più punti in\ncui scavare, ma occhio alle <color yellow<baba rupie>coloroff>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 14 */ "Costa <color red<7>coloroff><color red<0 rupie >coloroff>per turno.\nVuoi provare?\n[1-]Sì[2]No")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ti auguro di trovare un sacco di rupie!\nBuona fortuna.")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Non hai abbastanza rupie. Torna pure\nquando ne avrai a sufficienza.")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "Che livello vuoi provare?\n[1-]Facile[2-]Normale[3-]Difficile[4]Nessuno")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "Nel livello difficile ci sono più bombe,\nma anche rupie più preziose.\nDa diventare ricchi!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "Torna presto!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 2, line: 5 */ "Salve, che piacere vederti!\nÈ la prima volta che vieni qui, vero?\nSono onorato!")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Piacere, mi chiamo Raduncolo e sono\nresponsabile del meraviglioso\n<color red<Stana la rupia>coloroff>.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il numero di <color red<rupie>coloroff> che hai\nstanato è <color red<<numeric arg0 0>>coloroff>.")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "Non hai stanato nemmeno una rupia?\nOh poverino...")
          				flw_103:
/*<103>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 81, 'param3': 13}
/*< 81>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 108, 'param3': 12}
/*<108>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 45}
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 56, 'param3': 13}
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "Mi sembri piuttosto stanco. Recupera\ni cuori e riprova.")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "Se ti va, puoi riposarti su quel sedile.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 1, line: 16 */ "Dovresti riprovare.\nAllora, che ne dici?\n[1-]Facile[2-]Normale[3-]Difficile[4]No")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0, line: 26 */ "Ti do un consiglio. Le <color red<rupie meno\npreziose >coloroff>sono in mezzo a <color red<poche\ninsidie>coloroff>, perciò nessun problema.\n\nPerò le <color red<rupie più preziose>coloroff> sono\ncircondate da <color red<più insidie>coloroff>. Quindi fai\nattenzione.\n\nSe appena inizi scovi una bomba...<pause 20>\nhai perso e dovrai ricominciare da\ncapo. Non te la prendere!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "Che peccato, mi dispiace davvero per\nte.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "Hai perso poco. Poteva andare peggio!")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "Pareggio. Nessuna perdita, nessun\nguadagno.")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "Hai vinto qualcosina. Ben fatto.")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "Hai vinto una fortuna! Complimenti!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Hai stanato...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Ma è straordinario! Hai stanato tutte\nle rupie! Eccoti il meritato premio.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 7, unk: 0, line: 48 */ "Grazie mille per aver\npartecipato a <color red<Stana la rupia>coloroff>.\nTi do un consiglio utile.\n\nLe <color red<rupie meno preziose >coloroff>sono in\nmezzo a <color red<poche insidie>coloroff>, perciò\nnessun problema.\n\nPerò le <color red<rupie più preziose >coloroff>sono\ncircondate da<color red< più insidie>coloroff>. Quindi\nfai attenzione. Alla prossima!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "Cerca di finire al più presto, il tempo\nsta per scadere.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 1, line: 29 */ "Non puoi prendertela comoda.\nIl tempo è scaduto.")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 1, unk: 1, line: 31 */ "<0x10009:0x00080a04>Oh, vuoi fare una pausa?\n\n\n\nAllora che ne dici di tenermi\ncompagnia?[1-]OK[2]No")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x000f110c>Super! Hai qualcosa da chiedermi?\n<0x10009:0x00080aff>[1-]Chi sei?[2-]Leviti?[3-]Troppa\nluce?[4]Niente<0x10009:0x001316ff>")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00080a04>Mi chiamo <color blue<Raduncolo>coloroff>. Dirigo <color red<Stana\nla rupia>coloroff>! Sono molto importante qui,\nsai? <0x10009:0x00090b09>Puoi anche chiamarmi\n<color blue<signor <color blue<Raduncolo<color blue<>coloroff>.\nPiacere di conoscerti!")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00131806>Hai altro da chiedermi?\n[1-]Chi sei?[2-]Leviti?[3-]Troppa\nluce?[4]No")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00080a04>Mi chiamo <color blue<Raduncolo>coloroff>. Dirigo <color red<Stana\nla rupia>coloroff>! Sono molto importante qui,\nsai? Puoi anche chiamarmi <color blue<signor\n<color blue<Raduncolo<color blue<>coloroff>.\n<0x10009:0x000d0f01>Piacere di conoscerti!\n\n\n\n<0x10009:0x00080a09>Volevo che chiunque potesse\nottenere un sacco di rupie,\nperciò ho inventato <color blue<Stana\nla rupia>coloroff>.\n<0x10009:0x00101319>Per tutti gli altri <color blue<Mogma >coloroff>è facile\ntrovare le rupie, quindi non\npartecipano mai...\n\n<0x10009:0x00080aff>Se tu diventassi un cliente fisso qui,\nsignificherebbe molto per me.")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00080a04>Mi chiamo <color blue<Raduncolo>coloroff>. Dirigo <color red<Stana\nla rupia>coloroff>! Sono molto importante qui,\nsai? Puoi anche chiamarmi <color blue<signor\n<color blue<Raduncolo<color blue<>coloroff>.\n<0x10009:0x000d0f01>Piacere di conoscerti!\n\n\n\n<0x10009:0x00080a09>Volevo che chiunque potesse ottenere\nun sacco di rupie, perciò ho inventato\n<color blue<Stana la rupia>coloroff>.\n\n<0x10009:0x00101319>Per tutti gli altri <color blue<Mogma >coloroff>è facile\ntrovare le rupie, quindi non\npartecipano mai...\n\n<0x10009:0x00080aff>Mi piacerebbe che qualcuno mi\nfacesse il favore di spazzare via\nquelle <color red<torrette>coloroff>. <sound 4>BUUM!")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00080a05>No, non sto levitando. Mi reggo sulla\ncoda in modo che i clienti possano\nammirare le mie <color red<zampe>coloroff>.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00141605>No, non sto levitando. Mi reggo\nsulla coda.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Non c'è bisogno che ti dica che la mia\nparte migliore sono le <color red<zampe>coloroff>.")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00080aff>Non posso fare a meno di metterle\nin mostra. Per questo mi reggo sulla\ncoda, così che i clienti possano\nammirarle.")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00080a09>No, indosso gli occhiali per avere un\nlook più ricercato.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x0014160a>Alludi ai miei occhiali? Li indosso solo\nper avere un look diverso. La forma\ncircolare mi dona molto, non credi?")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00140e0b>E che ne dici dei miei <color red<baffi? >coloroff>Non sono\nfantastici? Li curo ogni giorno!")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080aff>Naturalmente, devo avere un look\nappropriato per attirare più clienti!")
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (zone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00101319>No? Bene... Fai con comodo, puoi\npartecipare a <color blue<Stana la rupia\n>coloroff>quando vuoi.")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00101319>No? Va bene. <0x10009:0x000d100c>Comunque grazie per\naver parlato un po' con me.\nCome segno di gratitudine ti darò\ndelle informazioni.\n<0x10009:0x00080a04>Vedi quel materiale scintillante che\nfuoriesce dai muri? Sono <color red<rupie grezze>coloroff>.\nPer questo ci sono così tante rupie qui\nintorno.\nCon un bel <color red<colpo >coloroff>potresti <color red<prenderne\nun po'>coloroff>.<sound 4> Provaci.")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00101319>Oh... che peccato. Comunque, se ti\nsenti riposato prova a giocare a\n<color blue<Stana la rupia>coloroff>.")
          	}
          }

