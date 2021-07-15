          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf("Tu es arrivé, Link ! Donne tout\nce que tu as !")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link, vous avez échoué dans\nvotre collecte des <y<larmes>>.")
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
/*< 39>*/ 										printf("Les <r<Gardiens>> qui vous attaquent et les <r<Veilleurs\n>>qui traquent les intrus peuvent être de deux types,\n<r<terrestre ou céleste>>.\n\nChacun a un comportement différent, faites\x2010y très\nattention.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Rassemblez toutes les <y<larmes>>. J'attendrai votre retour.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("L'emplacement des <y<larmes>> que vous avez déjà\nrecueillies une fois est <r<indiqué sur votre carte>>.\n\n\nN'hésitez pas à y placer des balises. Si vous commencez\npar localiser les 15 larmes, vos chances de réussite\naugmenteront grandement.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("Il peut être préférable de <r<conserver les <y<larmes<r< faciles\nà atteindre >>pour vous sortir d'affaire si vous vous\nfaites repérer.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("La probabilité que vous ne soyez pas l'élu augmente,\n\x0E\x01\x12\x04\x00\x01Maître...\n\n\nToutes ces tentatives successives semblent avoir\ntroublé votre concentration. Je vous recommande\nde faire une pause.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("Prenez garde aux <r<deux sortes de Veilleurs >>qui\npatrouillent pour repérer les intrus.\n\n\nSi vous n'entrez pas dans la lumière des <r<Veilleurs qui\nvolent>>, vous serez en sécurité.\n\n\nMais les <r<Veilleurs qui sont au sol >>vous poursuivront\nsi vous vous approchez d'eux. Il vous faudra être\n<r<très prudent>>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("L'emplacement des <y<larmes>> que vous avez déjà\nrecueillies une fois est <r<indiqué sur votre carte>>.\n\n\nEssayez tout d'abord de repérer l'emplacement\ndes 15 <y<larmes>>.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("Tant que votre volonté ne plie pas, vous pouvez\nretenter l'épreuve de la Déesse indéfiniment.\n\n\nÉvitez de recueillir les <y<larmes>> faciles à atteindre tout\nde suite. <r<Conservez\x2010les >>plutôt pour le cas où vous\nseriez découvert.\n\nUne fois que vous aurez rassemblé les 15 <y<larmes>>,\nrejoignez\x2010moi dans le monde extérieur.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Lorsque les 15 <y<larmes>> empliront le <y<réceptacle\nspirituel>>, votre âme s'épanouira et la Déesse\nvous octroiera un nouveau pouvoir.\n\nJ'attendrai votre retour dans le monde extérieur,\n\x0E\x01\x12\x04\x00\x02Maître.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf("Vous vous trouvez dans la <b<Psysalis de Din >>où vous\nallez subir la troisième épreuve, celle qui éprouvera\nvotre <r<force>>.\n\nPour trouver la troisième flamme qui renforcera\nvotre épée, votre âme doit grandir une dernière fois.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf("Lorsque le <y<réceptacle spirituel>> sera rempli, votre âme\ns'épanouira et la Déesse vous octroiera un <r<nouveau\npouvoir>>.\n\nAvez\x2010vous des questions, \x0E\x01\x12\x04\x00\x02Maître ?\n[1]Oui[2-]Non")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("Sur quel sujet puis\x2010je vous renseigner ?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Ça ira,\nmerci")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître, je vais vous répondre.\n\n\n\nPour remplir le <y<réceptacle spirituel>>, vous devez\nrassembler les <y<larmes de Din >>disséminées dans\nce monde.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf("Voyez\x2010vous cet objet brillant, là\x2010bas ?")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf("C'est une <y<larme de Din>>. Il vous faudra en\nrassembler <r<15>>.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Avez\x2010vous d'autres questions ?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Non")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf("Si vous faites un pas hors du cercle où vous vous\ntrouvez, des êtres appelés les <r<Gardiens >>se mettront\nà votre poursuite.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Si vous subissez ne serait\x2010ce qu'un seul coup des\n<r<Gardiens>>, votre âme sera brisée et vous aurez\néchoué à l'épreuve.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf("Rassemblez les <y<larmes>> sans subir une seule attaque\npour remplir le <y<réceptacle spirituel>>.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("Il existe dans ce monde des étendues d'un liquide\nqu'on appelle <r<dévoileur>>.\n\n\nSi vous le touchez, <r<les Gardiens vous repéreront\ninstantanément>>.\n\n\nFaites donc attention où vous mettez les pieds.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("J'attendrai votre retour dans le monde extérieur,\n\x0E\x01\x12\x04\x00\x02Maître.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

