          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Si vous faites un pas hors du cercle où\nvous vous trouvez, des êtres appelés\nles <color red<gardiens >coloroff>se mettront à votre\npoursuite.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf(/* textboxtype: 2, unk: 2, line: 10 */ "Si vous subissez ne serait‐ce qu'un seul\ncoup des <color red<gardiens>coloroff>, votre âme sera\nbrisée et vous aurez échoué à l'épreuve.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 2, line: 11 */ "Rassemblez les <color yellow<larmes>coloroff> sans subir\nune seule attaque pour remplir\nle <color yellow<réceptacle spirituel>coloroff>.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf(/* textboxtype: 2, unk: 2, line: 13 */ "Souhaitez‐vous que je répète\nmes explications?\n[1-]Oui[2]Non")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 2, line: 14 */ "À quel sujet puis‐je vous renseigner?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Hypnéa[4]Ça ira,\nmerci")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Très bien, Maître.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Très bien, Maître.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Très bien, Maître.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf(/* textboxtype: 2, unk: 2, line: 16 */ "Vous êtes dans un <color red<monde spirituel>coloroff>\noù seul l'élu de la Déesse peut\nentrer, l'<color blue<Hypnéa>coloroff>.\n\nVous avez temporairement quitté\nvotre corps pour n'être plus que\npur esprit.\n\nL'<color blue<Hypnéa>coloroff> va ainsi mettre votre\nforce d'âme à l'épreuve.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf(/* textboxtype: 2, unk: 2, line: 12 */ "<0x10012:0x00000005>Maître.\n\n\n\nJ'attends votre retour à l'extérieur.\n\n\n\nPuisse la Déesse vous protéger, <0x10012:0x00000001>Maître.")
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
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 2, line: 28 */ "Tu y es, <heroname>!\nMets‐y tout ton cœur!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 2, unk: 2, line: 18 */ "<0x10012:0x00000004>Maître <heroname>,\nvous avez échoué dans votre\ncollecte des <color yellow<larmes>coloroff>.")
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
/*< 46>*/ 										printf(/* textboxtype: 2, unk: 2, line: 26 */ "En plus des <color red<gardiens>coloroff> qui vous\nattaquent, il existe deux types de\n<color red<veilleurs >coloroff>qui traquent les intrus sur \n<color red<terre ou dans les airs>coloroff>.\nChacun a un comportement\ndifférent, faites‐y très attention.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2, line: 19 */ "Recueillez toutes <color red<les larmes>coloroff> pour\npouvoir revenir au monde extérieur.\nJe vous y attendrai.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf(/* textboxtype: 2, unk: 2, line: 25 */ "L'emplacement des <color yellow<larmes>coloroff> que\nvous avez déjà recueillies une fois\nest <color red<indiqué sur votre carte>coloroff>. \nN'hésitez pas à y placer des balises.\nSi vous commencez par localiser\nles 15 larmes, vos chances de\nréussite augmenteront grandement.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf(/* textboxtype: 2, unk: 2, line: 24 */ "Il peut être préférable de <color red<conserver\nles <color yellow<larmes<color red< faciles à atteindre >coloroff>pour\nl'éventualité où vous vous feriez\nrepérer.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf(/* textboxtype: 2, unk: 2, line: 23 */ "<0x10012:0x00000001>Maître, les chances que\nvous ne soyez pas l'élu\nsont en train d'augmenter.\n\nToutes ces tentatives successives\nsemblent avoir troublé votre\nconcentration. Je vous recommande\nde faire une pause.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf(/* textboxtype: 2, unk: 2, line: 22 */ "Prenez garde aux <color red<deux types\nde veilleurs >coloroff>qui patrouillent\nà la recherche d'intrus.\n\nLes <color red<veilleurs volant dans le ciel>coloroff>\nne vous détectent que quand vous\nentrez dans le champ de leur lumière.\n\nMais les <color red<veilleurs patrouillant au sol>coloroff>\nvous poursuivront si vous les\napprochez. <color red<Attention>coloroff> à ne pas\nrester trop proche d'eux, <0x10012:0x00000002>Maître.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf(/* textboxtype: 2, unk: 2, line: 21 */ "L'emplacement des <color yellow<larmes>coloroff> que\nvous avez déjà recueillies une\nfois est <color red<indiqué sur votre carte>coloroff>.\n\nEssayez tout d'abord de repérer\nl'emplacement des 15 larmes.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf(/* textboxtype: 2, unk: 2, line: 20 */ "Vous pouvez répéter l'épreuve\nde la Déesse autant de fois\nque vous le souhaitez, <0x10012:0x00000002>Maître.\n\nJe vous conseille de <color red<ne pas prendre>coloroff>\ntout de suite les <color yellow<larmes >coloroff>faciles à\natteindre mais de les conserver pour\nles moments où vous seriez découvert.\nCollectez les 15 <color yellow<larmes>coloroff> et \nretrouvez‐moi dans le monde\nextérieur.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf(/* textboxtype: 2, unk: 2, line: 1 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf(/* textboxtype: 2, unk: 2, line: 17 */ "Lorsque les 15 <color yellow<larmes>coloroff> empliront le\n<color yellow<réceptacle spirituel>coloroff>, votre âme\ns'épanouira et la Déesse vous\noctroiera un nouveau pouvoir.\nJ'attendrai votre retour dans le\nmonde extérieur, <0x10012:0x00000002>Maître.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 2, unk: 2, line: 1 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 2, line: 2 */ "Je ne peux pas vous accompagner.\nL'épreuve s'adresse directement à\nvotre esprit.\n\nVous vous trouvez dans un <color blue<Hypnéa>coloroff>,\nun monde spirituel où seul l'élu de la\nDéesse peut se rendre.\n\nIl s'agit ici de l'<color blue<Hypnéa de Farore>coloroff>,\nune épreuve régissant votre<color red< esprit>coloroff>.\n\n\nVotre esprit a temporairement\nquitté votre corps, <0x10012:0x00000001>Maître.\n\n\nVous devez surmonter cette épreuve\npour faire grandir votre âme et ainsi\ntrouver la flamme sacrée qui aiguisera\nvotre épée.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2, line: 4 */ "Ceci est un <color yellow<réceptacle spirituel>coloroff>.\n\n\n\nLorsqu'il sera rempli, il prouvera\nque vous avez surmonté l'épreuve,\net votre âme en sera grandie.\n\nLa Déesse vous gratifiera alors\nd'un <color red<nouveau pouvoir>coloroff>.")
          			flw_6:
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 2, line: 5 */ "Pour remplir le <color yellow<réceptacle spirituel>coloroff>,\nil vous faut recueillir les <color yellow<larmes de\nFarore >coloroff>éparpillées dans ce monde.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "Regardez cet objet brillant\nen face de vous, <0x10012:0x00000002>Maître.")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf(/* textboxtype: 2, unk: 2, line: 7 */ "Il s'agit d'une <color yellow<larme de Farore>coloroff>.\nVous devez en recueillir <color red<15>coloroff>.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			wait_frames(15)
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf(/* textboxtype: 2, unk: 2, line: 8 */ "Mais cette <color red<épreuve >coloroff>porte bien son nom.\nLa tâche ne sera pas facile...")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 2, unk: 2, line: 1 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	wait_frames(30)
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf(/* textboxtype: 2, unk: 2, line: 27 */ "Le liquide que vous pouvez apercevoir\nici s'appelle le <color red<dévoileur>coloroff>.\n\n\nSi vous y trempez les pieds, vous\nserez <color red<immédiatement repéré >coloroff>par\nles gardiens.\n\nLe dévoileur peut se trouver\nn'importe où, alors faites attention\noù vous marchez.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

