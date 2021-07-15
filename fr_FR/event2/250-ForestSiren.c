          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf("Si vous faites un pas hors du cercle où\nvous vous trouvez, des êtres appelés\nles <r<gardiens >>se mettront à votre\npoursuite.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf("Si vous subissez ne serait\x2010ce qu'un seul\ncoup des <r<gardiens>>, votre âme sera\nbrisée et vous aurez échoué à l'épreuve.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf("Rassemblez les <y<larmes>> sans subir\nune seule attaque pour remplir\nle <y<réceptacle spirituel>>.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf("Souhaitez\x2010vous que je répète\nmes explications ?\n[1]Oui[2-]Non")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf("À quel sujet puis\x2010je vous renseigner ?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Psysalis[4-]Ça ira,\nmerci")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf("Vous êtes dans un <r<monde spirituel>>\noù seul l'élu de la Déesse peut\nentrer, la <b<Psysalis>>.\n\nVous avez temporairement quitté\nvotre corps pour n'être plus que\npur esprit.\n\nLa <b<Psysalis>> va ainsi mettre votre\nforce d'âme à l'épreuve.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf("\x0E\x01\x12\x04\x00\x05Maître.\n\n\n\nJ'attends votre retour à l'extérieur.\n\n\n\nPuisse la Déesse vous protéger, \x0E\x01\x12\x04\x00\x01Maître.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 86, 'param3': 40}
/*< 86>*/ 			zone_temp_flags[10 /* 0x0 04 */] = false;
/*< 80>*/ 			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 81>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*< 82>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_83
          	}
          }

          void entrypoint_250_04() {
/*< 96>*/ 	start()
          	goto flw_74
          }

          void entrypoint_250_00() {
          	start()
/*< 23>*/ 	set_camera(8, 0)
/*< 15>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 16>*/ 		printf("Tu y es, Link !\nMets\x2010y tout ton c\x153ur !")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link,\nvous avez échoué dans votre\ncollecte des <y<larmes>>.")
/*< 55>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 29, 'param3': 40}
/*< 29>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 31>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 34>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 40>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 41>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 42>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 46>*/ 										printf("Les <r<gardiens>> qui vous attaquent\net les <r<veilleurs>> qui traquent les\nintrus peuvent être de deux\ntypes, <r<terrestre ou céleste>>.\nChacun a un comportement\ndifférent, faites\x2010y très attention.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf("Recueillez toutes <r<les larmes>> pour\npouvoir revenir au monde extérieur.\nJe vous y attendrai.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf("L'emplacement des <y<larmes>> que\nvous avez déjà recueillies une fois\nest <r<indiqué sur votre carte>>. \nN'hésitez pas à y placer des balises.\nSi vous commencez par localiser\nles 15 larmes, vos chances de\nréussite augmenteront grandement.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf("Il peut être préférable de <r<conserver\nles <y<larmes<r< faciles à atteindre >>pour\nl'éventualité où vous vous feriez\nrepérer.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf("\x0E\x01\x12\x04\x00\x01Maître, les chances que\nvous ne soyez pas l'élu\nsont en train d'augmenter.\n\nToutes ces tentatives successives\nsemblent avoir troublé votre\nconcentration. Je vous recommande\nde faire une pause.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf("Prenez garde aux <r<deux types\nde veilleurs >>qui patrouillent\nà la recherche d'intrus.\n\nLes <r<veilleurs volant dans le ciel>>\nne vous détectent que quand vous\nentrez dans le champ de leur lumière.\n\nMais les <r<veilleurs patrouillant au sol>>\nvous poursuivront si vous les\napprochez. <r<Attention>> à ne pas\nrester trop proche d'eux, \x0E\x01\x12\x04\x00\x02Maître.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf("L'emplacement des <y<larmes>> que\nvous avez déjà recueillies une\nfois est <r<indiqué sur votre carte>>.\n\nEssayez tout d'abord de repérer\nl'emplacement des 15 larmes.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf("Vous pouvez répéter l'épreuve\nde la Déesse autant de fois\nque vous le souhaitez, \x0E\x01\x12\x04\x00\x02Maître.\n\nJe vous conseille de <r<ne pas prendre>>\ntout de suite les <y<larmes >>faciles à\natteindre mais de les conserver pour\nles moments où vous seriez découvert.\nCollectez les 15 <y<larmes>> et \nretrouvez\x2010moi dans le monde\nextérieur.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf("Lorsque les 15 <y<larmes>> empliront le\n<y<réceptacle spirituel>>, votre âme\ns'épanouira et la Déesse vous\noctroiera un nouveau pouvoir.\nJ'attendrai votre retour dans le\nmonde extérieur, \x0E\x01\x12\x04\x00\x02Maître.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf("Comme je n'ai pas pu vous\naccompagner, je m'adresse\ndirectement à votre esprit.\n\nVous vous trouvez dans une <b<Psysalis>>,\nun monde spirituel où seul l'élu de la\nDéesse peut se rendre.\n\nIl s'agit ici de la <b<Psysalis de Farore>>,\nune épreuve régissant votre<r< esprit>>.\n\n\nVotre esprit a temporairement\nquitté votre corps, \x0E\x01\x12\x04\x00\x01Maître.\n\n\nVous devez surmonter cette épreuve\npour faire grandir votre âme et ainsi\ntrouver la flamme sacrée qui aiguisera\nvotre épée.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf("Ceci est un <y<réceptacle spirituel>>.\n\n\n\nLorsqu'il sera rempli, il prouvera\nque vous avez surmonté l'épreuve,\net votre âme en sera grandie.\n\nLa Déesse vous gratifiera alors\nd'un <r<nouveau pouvoir>>.")
          			flw_6:
/*<  6>*/ 			printf("Pour remplir le <y<réceptacle spirituel>>,\nil vous faut recueillir les <y<larmes de\nFarore >>éparpillées dans ce monde.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf("Vous voyez cet objet brillant\nen face de vous, \x0E\x01\x12\x04\x00\x02Maître ?")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf("Il s'agit d'une <y<larme de Farore>>.\nVous devez en recueillir <r<15>>.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf("Mais cette <r<épreuve >>porte bien son nom.\nLa tâche ne sera pas facile...")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 62, 'param3': 6}
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf("Le liquide que vous pouvez apercevoir\nici s'appelle le <r<dévoileur>>.\n\n\nSi vous y trempez les pieds, vous\nserez <r<immédiatement repéré >>par\nles gardiens.\n\nLe dévoileur peut se trouver\nn'importe où, alors faites attention\noù vous marchez.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

