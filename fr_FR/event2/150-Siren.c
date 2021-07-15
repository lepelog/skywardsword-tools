          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf("Tu es arrivé, Link !\nDonne tout ce que tu as !")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link.\nVous avez échoué dans votre collecte\ndes <y<larmes>>.")
/*< 56>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  8>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 11>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 41>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 42>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 43>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 47>*/ 										printf("Les <r<gardiens>> qui vous attaquent et les\n<r<veilleurs>> qui traquent les intrus\npeuvent être de deux types, <r<terrestre\nou céleste>>.\nChacun a un comportement différent,\nfaites\x2010y très attention.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf("Rassemblez toutes les <y<larmes>>.\nJ'attends votre retour.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf("L'emplacement des <y<larmes>> que vous\navez déjà recueillies une fois est\n<r<indiqué sur votre carte>>.\n\nN'hésitez pas à y placer des balises.\nSi vous commencez par localiser\nles 15 larmes, vos chances de réussite\naugmenteront grandement.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf("Il peut être préférable de <r<conserver les\n<y<larmes<r< faciles à atteindre >>pour vous\nsortir d'affaire si vous vous faites\nrepérer.")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf("La probabilité que vous ne soyez pas\nl'élu augmente, \x0E\x01\x12\x04\x00\x01Maître...\n\n\nToutes ces tentatives successives\nsemblent avoir troublé votre\nconcentration. Je vous recommande\nde faire une pause.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf("Prenez garde aux <r<deux sortes de\nveilleurs >>qui patrouillent pour repérer\nles intrus.\n\nSi vous n'entrez pas dans la lumière\ndes <r<veilleurs qui volent>>, vous serez\nen sécurité.\n\nMais les <r<veilleurs qui sont au sol >>vous\npoursuivront si vous vous approchez\nd'eux. Il vous faudra être <r<très prudent>>.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf("L'emplacement des <y<larmes>> que vous\navez déjà recueillies une fois est\n<r<indiqué sur votre carte>>.\n\nEssayez tout d'abord de repérer\nl'emplacement des 15 <y<larmes>>.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf("Tant que votre volonté ne plie pas, vous\npouvez retenter l'épreuve de la Déesse\nindéfiniment.\n\nÉvitez de recueillir les <y<larmes>> faciles\nà atteindre tout de suite.\n<r<Conservez\x2010les>> plutôt pour le cas\noù vous seriez découvert.\nRassemblez les 15 <y<larmes>> et\nrejoignez\x2010moi dans le monde\nextérieur.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf("Lorsque les 15 <y<larmes>> empliront le\n<y<réceptacle spirituel>>, votre âme\ns'épanouira et la Déesse vous octroiera\nun nouveau pouvoir.\nJ'attendrai votre retour dans le monde\nextérieur, \x0E\x01\x12\x04\x00\x02Maître.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf("Vous vous trouvez dans le monde de la\ndernière épreuve, la <b<Psysalis de la\nDéesse>>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf("Lorsque le dernier <y<réceptacle spirituel>>\nsera rempli et que vous aurez été\nreconnu comme un véritable héros...\n\n... la porte qui vous conduira vers\nla <y+<Triforce>> se révélera à vous, \x0E\x01\x12\x04\x00\x02Maître.\nVous devez à tout prix réussir cette\népreuve.\nAvez\x2010vous des questions ?\n[1]Oui[2-]Non")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf("À quel sujet puis\x2010je vous renseigner ?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Ça ira,\nmerci")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître, je vais vous\nrépondre.\n\n\nPour remplir le <y<réceptacle spirituel>>,\nvous devez rassembler les <y<larmes de la\nDéesse >>disséminées dans ce monde.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf("Vous voyez cet objet brillant juste\ndevant vous, \x0E\x01\x12\x04\x00\x02Maître ?")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf("C'est une <y<larme de la Déesse>>.\nIl vous faudra en rassembler <r<15>>.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf("Avez\x2010vous d'autres questions ?\n\n\n\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Non")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf("Si vous faites un pas hors du cercle où\nvous vous trouvez, des êtres appelés les\n<r<gardiens >>se mettront à votre poursuite.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf("Si vous subissez ne serait\x2010ce qu'un seul\ncoup des <r<gardiens>>, votre âme sera\nbrisée et vous aurez échoué à l'épreuve.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf("Rassemblez les <y<larmes>> sans subir une\nseule attaque pour remplir le\n<y<réceptacle spirituel>>.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("Il existe dans ce monde des étendues\nd'un liquide qu'on appelle <r<dévoileur>>.\n\n\nSi vous y posez le pied, <r<les gardiens\nvous repéreront instantanément>>.\n\n\nPrenez donc garde à ne pas marcher\ndans le dévoileur par inadvertance.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf("J'attendrai votre retour dans le monde\nextérieur, \x0E\x01\x12\x04\x00\x02Maître.")
/*< 77>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 74, 'param3': 40}
/*< 74>*/ 					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 80>*/ 					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 73>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 72>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_78
          			}
          		}
          	}
          }

