          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "Tu es arrivé, <heroname> ! Donne tout\nce que tu as !")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004>Maître <heroname>, vous avez échoué dans\nvotre collecte des <color yellow<larmes>coloroff>.")
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
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "Les <color red<Gardiens>coloroff> qui vous attaquent et les <color red<Veilleurs\n>coloroff>qui traquent les intrus peuvent être de deux types,\n<color red<terrestre ou céleste>coloroff>.\n\nChacun a un comportement différent, faites‐y très\nattention.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "J'attends votre retour une fois que vous aurez\nrassemblé toutes les <color yellow<larmes>coloroff>.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "L'emplacement des <color yellow<larmes>coloroff> que vous avez déjà\nrecueillies une fois est <color red<indiqué sur votre carte>coloroff>.\n\n\nN'hésitez pas à y placer des balises. Si vous\ncommencez par localiser les 15 larmes, vos\nchances de réussite augmenteront grandement.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Il peut être préférable de <color red<conserver les <color yellow<larmes\n<color red<faciles à atteindre >coloroff>pour vous sortir d'affaire si\nvous vous faites repérer.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "La probabilité que vous ne soyez pas l'élu augmente,\n<0x10012:0x00000001>Maître...\n\n\nToutes ces tentatives successives semblent avoir\ntroublé votre concentration. Je vous recommande\nde faire une pause.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Prenez garde aux <color red<deux sortes de Veilleurs >coloroff>qui\npatrouillent pour repérer les intrus.\n\n\nSi vous n'entrez pas dans la lumière des <color red<Veilleurs qui\nvolent>coloroff>, vous serez en sécurité.\n\n\nMais les <color red<Veilleurs qui sont au sol >coloroff>vous poursuivront\nsi vous vous approchez d'eux. Il vous faudra être\n<color red<très prudent>coloroff>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "L'emplacement des <color yellow<larmes>coloroff> que vous avez déjà\nrecueillies une fois est <color red<indiqué sur votre carte>coloroff>.\n\n\nEssayez tout d'abord de repérer l'emplacement des\n15 <color yellow<larmes>coloroff>.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "Vous pouvez répéter l'épreuve de la Déesse autant de\nfois que vous le souhaitez, <0x10012:0x00000002>Maître.\n\n\nJe vous conseille de <color red<ne pas prendre >coloroff>tout de suite les\n<color yellow<larmes >coloroff>faciles à atteindre mais de les conserver pour\nles moments où vous seriez découvert.\n\nCollectez les 15 <color yellow<larmes>coloroff> et retrouvez‐moi dans le monde\nextérieur.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Lorsque les 15 <color yellow<larmes>coloroff> empliront le <color yellow<réceptacle\nspirituel>coloroff>, votre âme s'épanouira et la Déesse\nvous octroiera un nouveau pouvoir.\n\nJ'attendrai votre retour dans le monde extérieur,\n<0x10012:0x00000002>Maître.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Je ne peux toujours pas vous accompagner. Je\nm'adresse donc directement à votre esprit, <0x10012:0x00000002>Maître.\n\n\nVous vous trouvez dans une <color blue<Psysalis>coloroff>, un monde\nspirituel où seul l'élu de la Déesse peut pénétrer.\n\n\nCelle‐ci est la deuxième, la <color blue<Psysalis de Nayru>coloroff>,\nqui mettra à l'épreuve votre <color red<sagesse>coloroff>.\n\n\nPour trouver la nouvelle flamme qui renforcera votre\népée, votre âme doit grandir encore davantage.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Lorsque le <color yellow<réceptacle spirituel>coloroff> sera rempli, votre âme\ns'épanouira et la Déesse vous octroiera un <color red<nouveau\npouvoir>coloroff>.\n\nAvez‐vous des questions, <0x10012:0x00000002>Maître ?\n[1-]Oui[2]Non")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Sur quel sujet puis‐je vous renseigner ?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Ça ira,\nmerci")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Très bien, Maître, je vais vous répondre.\n\n\n\nPour remplir le <color yellow<réceptacle spirituel>coloroff>, vous devez\nrassembler les <color yellow<larmes de Nayru >coloroff>éparpillées dans\nce monde.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "Vous voyez cet objet brillant en face de vous, <0x10012:0x00000002>Maître ?")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "C'est une <color yellow<larme de Nayru>coloroff>. Il vous faudra en\nrassembler <color red<15>coloroff>.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "Avez‐vous d'autres questions ?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Non")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Si vous faites un pas hors du cercle où vous vous\ntrouvez, des êtres appelés les <color red<Gardiens >coloroff>se mettront\nà votre poursuite.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Si vous subissez ne serait‐ce qu'un seul coup des\n<color red<Gardiens>coloroff>, votre âme sera brisée et vous aurez\néchoué à l'épreuve.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf(/* textboxtype: 0, unk: 4, line: 14 */ "Rassemblez les <color yellow<larmes>coloroff> sans subir une seule attaque\npour remplir le <color yellow<réceptacle spirituel>coloroff>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "Il existe dans ce monde des étendues d'un liquide\nqu'on appelle <color red<dévoileur>coloroff>.\n\n\nSi vous y posez le pied, <color red<les Gardiens vous repéreront\ninstantanément>coloroff>.\n\n\nPrenez donc garde à ne pas marcher dans le dévoileur\npar inadvertance.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "<0x10012:0x00000005>Très bien, Maître.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "J'attendrai votre retour dans le monde extérieur,\n<0x10012:0x00000002>Maître.")
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

