          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf("Tu es arrivé, Link!\nDonne tout ce que tu as!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link, vous avez\néchoué dans votre collecte des <y<larmes>>.")
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
/*< 39>*/ 										printf("En plus des <r<gardiens>> qui vous\nattaquent, il existe deux types de\n<r<veilleurs>> qui traquent les intrus\nsur <r<terre ou dans les airs>>.\nChacun a un comportement différent,\nfaites\x2010y très attention.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("J'attends votre retour une fois que vous\naurez rassemblé toutes les <y<larmes>>.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("L'emplacement des <y<larmes>> que vous\navez déjà recueillies une fois est\n<r<indiqué sur votre carte>>.\n\nN'hésitez pas à y placer des balises.\nSi vous commencez par localiser les\n15 larmes, vos chances de réussite\naugmenteront grandement.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("Il peut être préférable de <r<conserver les\n<y<larmes<r< faciles à atteindre >>pour vous\nsortir d'affaire si vous vous faites\nrepérer.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("La probabilité que vous ne soyez pas\nl'élu augmente, \x0E\x01\x12\x04\x00\x01Maître...\n\n\nToutes ces tentatives successives\nsemblent avoir troublé votre\nconcentration. Je vous recommande\nde faire une pause.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("Prenez garde aux <r<deux sortes de\nveilleurs >>qui patrouillent pour repérer\nles intrus.\n\nSi vous n'entrez pas dans la lumière des\n<r<veilleurs qui volent>>, vous serez en\nsécurité.\n\nMais les <r<veilleurs qui sont au sol >>vous\npoursuivront si vous vous approchez\nd'eux.\nIl vous faudra être <r<très prudent>>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("L'emplacement des <y<larmes>> que vous\navez déjà recueillies une fois est\n<r<indiqué sur votre carte>>.\n\nEssayez tout d'abord de repérer\nl'emplacement des 15 <y<larmes>>.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("Vous pouvez répéter l'épreuve\nde la Déesse autant de fois\nque vous le souhaitez, \x0E\x01\x12\x04\x00\x02Maître.\n\nJe vous conseille de <r<ne pas prendre>>\ntout de suite les <y<larmes >>faciles à\natteindre mais de les conserver pour\nles moments où vous seriez découvert.\nCollectez les 15 <y<larmes>> et\nretrouvez\x2010moi dans le monde extérieur.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Lorsque les 15 <y<larmes>> empliront le\n<y<réceptacle spirituel>>, votre âme\ns'épanouira et la Déesse vous octroiera\nun nouveau pouvoir.\nJ'attendrai votre retour dans le\nmonde extérieur, \x0E\x01\x12\x04\x00\x02Maître.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf("Je ne peux toujours pas vous\naccompagner. L'épreuve s'adresse\ndirectement à votre esprit, \x0E\x01\x12\x04\x00\x02Maître.\n\nVous vous trouvez dans un <b<Hypnéa>>,\nun monde spirituel où seul l'élu de\nla Déesse peut pénétrer.\n\nCelui\x2010ci est le deuxième, l'<b<Hypnéa de\nNayru>>, qui mettra à l'épreuve votre\n<r<sagesse>>.\n\nPour trouver la nouvelle flamme qui\nrenforcera votre épée, votre âme doit\ngrandir encore davantage.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf("Lorsque le <y<réceptacle spirituel>> sera\nrempli, votre âme s'épanouira et la\nDéesse vous octroiera un <r<nouveau\npouvoir>>.\nAvez\x2010vous des questions, \x0E\x01\x12\x04\x00\x02Maître?\n[1]Oui[2-]Non")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("À quel sujet puis\x2010je vous renseigner?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Ça ira,\nmerci")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître, je vais vous\nrépondre.\n\n\nPour remplir le <y<réceptacle spirituel>>,\nvous devez rassembler les <y<larmes\nde Nayru >>éparpillées dans ce monde.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf("Vous voyez cet objet brillant en face\nde vous, \x0E\x01\x12\x04\x00\x02Maître?")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf("C'est une <y<larme de Nayru>>.\nIl vous faudra en rassembler <r<15>>.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Avez\x2010vous d'autres questions?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Non")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf("Si vous faites un pas hors du cercle où\nvous vous trouvez, des êtres appelés les\n<r<gardiens >>se mettront à votre poursuite.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Si vous subissez ne serait\x2010ce qu'un seul\ncoup des <r<gardiens>>, votre âme sera\nbrisée et vous aurez échoué à l'épreuve.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf("Rassemblez les <y<larmes>> sans subir une\nseule attaque pour remplir le\n<y<réceptacle spirituel>>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("Il existe dans ce monde des étendues\nd'un liquide qu'on appelle <r<dévoileur>>.\n\n\nSi vous y posez le pied, <r<les gardiens\nvous repéreront instantanément>>.\n\n\nPrenez donc garde à ne pas marcher\ndans le dévoileur par inadvertance.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("J'attendrai votre retour dans le monde\nextérieur, \x0E\x01\x12\x04\x00\x02Maître.")
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

