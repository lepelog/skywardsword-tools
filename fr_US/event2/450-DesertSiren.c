          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "Tu es arrivé, <heroname>!\nDonne tout ce que tu as!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 2, line: 17 */ "<0x10012:0x00000004>Maître <heroname>, vous avez\néchoué dans votre collecte des <color yellow<larmes>coloroff>.")
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
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2, line: 25 */ "En plus des <color red<gardiens>coloroff> qui vous\nattaquent, il existe deux types de\n<color red<veilleurs>coloroff> qui traquent les intrus\nsur <color red<terre ou dans les airs>coloroff>.\nChacun a un comportement différent,\nfaites‐y très attention.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "J'attends votre retour une fois que vous\naurez rassemblé toutes les <color yellow<larmes>coloroff>.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "L'emplacement des <color yellow<larmes>coloroff> que vous\navez déjà recueillies une fois est\n<color red<indiqué sur votre carte>coloroff>.\n\nN'hésitez pas à y placer des balises.\nSi vous commencez par localiser les\n15 larmes, vos chances de réussite\naugmenteront grandement.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2, line: 23 */ "Il peut être préférable de <color red<conserver les\n<color yellow<larmes<color red< faciles à atteindre >coloroff>pour vous\nsortir d'affaire si vous vous faites\nrepérer.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2, line: 22 */ "La probabilité que vous ne soyez pas\nl'élu augmente, <0x10012:0x00000001>Maître...\n\n\nToutes ces tentatives successives\nsemblent avoir troublé votre\nconcentration. Je vous recommande\nde faire une pause.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Prenez garde aux <color red<deux sortes de\nveilleurs >coloroff>qui patrouillent pour repérer\nles intrus.\n\nSi vous n'entrez pas dans la lumière des\n<color red<veilleurs qui volent>coloroff>, vous serez en\nsécurité.\n\nMais les <color red<veilleurs qui sont au sol >coloroff>vous\npoursuivront si vous vous approchez\nd'eux.\nIl vous faudra être <color red<très prudent>coloroff>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2, line: 20 */ "L'emplacement des <color yellow<larmes>coloroff> que vous\navez déjà recueillies une fois est\n<color red<indiqué sur votre carte>coloroff>.\n\nEssayez tout d'abord de repérer\nl'emplacement des 15 <color yellow<larmes>coloroff>.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2, line: 19 */ "Vous pouvez répéter l'épreuve\nde la Déesse autant de fois\nque vous le souhaitez, <0x10012:0x00000002>Maître.\n\nJe vous conseille de <color red<ne pas prendre>coloroff>\ntout de suite les <color yellow<larmes >coloroff>faciles à\natteindre mais de les conserver pour\nles moments où vous seriez découvert.\nCollectez les 15 <color yellow<larmes>coloroff> et\nretrouvez‐moi dans le monde extérieur.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2, line: 16 */ "Lorsque les 15 <color yellow<larmes>coloroff> empliront le\n<color yellow<réceptacle spirituel>coloroff>, votre âme\ns'épanouira et la Déesse vous octroiera\nun nouveau pouvoir.\nJ'attendrai votre retour dans le\nmonde extérieur, <0x10012:0x00000002>Maître.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf(/* textboxtype: 2, unk: 2, line: 1 */ "Je ne peux toujours pas vous\naccompagner. L'épreuve s'adresse\ndirectement à votre esprit, <0x10012:0x00000002>Maître.\n\nVous vous trouvez dans un <color blue<Hypnéa>coloroff>,\nun monde spirituel où seul l'élu de\nla Déesse peut pénétrer.\n\nCelui‐ci est le deuxième, l'<color blue<Hypnéa de\nNayru>coloroff>, qui mettra à l'épreuve votre\n<color red<sagesse>coloroff>.\n\nPour trouver la nouvelle flamme qui\nrenforcera votre épée, votre âme doit\ngrandir encore davantage.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 2, line: 2 */ "Lorsque le <color yellow<réceptacle spirituel>coloroff> sera\nrempli, votre âme s'épanouira et la\nDéesse vous octroiera un <color red<nouveau\npouvoir>coloroff>.\nAvez‐vous des questions, <0x10012:0x00000002>Maître?\n[1-]Oui[2]Non")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "À quel sujet puis‐je vous renseigner?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Ça ira,\nmerci")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 2, unk: 2, line: 7 */ "<0x10012:0x00000005>Très bien, Maître, je vais vous\nrépondre.\n\n\nPour remplir le <color yellow<réceptacle spirituel>coloroff>,\nvous devez rassembler les <color yellow<larmes\nde Nayru >coloroff>éparpillées dans ce monde.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf(/* textboxtype: 2, unk: 2, line: 8 */ "Vous voyez cet objet brillant en face\nde vous, <0x10012:0x00000002>Maître?")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf(/* textboxtype: 2, unk: 0, line: 9 */ "C'est une <color yellow<larme de Nayru>coloroff>.\nIl vous faudra en rassembler <color red<15>coloroff>.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2, line: 4 */ "Avez‐vous d'autres questions?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Non")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf(/* textboxtype: 2, unk: 2, line: 11 */ "Si vous faites un pas hors du cercle où\nvous vous trouvez, des êtres appelés les\n<color red<gardiens >coloroff>se mettront à votre poursuite.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Si vous subissez ne serait‐ce qu'un seul\ncoup des <color red<gardiens>coloroff>, votre âme sera\nbrisée et vous aurez échoué à l'épreuve.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 14 */ "Rassemblez les <color yellow<larmes>coloroff> sans subir une\nseule attaque pour remplir le\n<color yellow<réceptacle spirituel>coloroff>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2, line: 13 */ "Il existe dans ce monde des étendues\nd'un liquide qu'on appelle <color red<dévoileur>coloroff>.\n\n\nSi vous y posez le pied, <color red<les gardiens\nvous repéreront instantanément>coloroff>.\n\n\nPrenez donc garde à ne pas marcher\ndans le dévoileur par inadvertance.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2, line: 5 */ "<0x10012:0x00000005>Très bien, Maître.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "J'attendrai votre retour dans le monde\nextérieur, <0x10012:0x00000002>Maître.")
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

