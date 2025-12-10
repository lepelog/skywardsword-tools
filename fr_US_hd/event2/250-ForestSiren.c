          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Si vous faites un pas hors du cercle où vous vous\ntrouvez, des êtres appelés les <color red<Gardiens >coloroff>se mettront\nà votre poursuite.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf(/* textboxtype: 4, unk: 2, line: 10 */ "Si vous subissez ne serait‐ce qu'un seul coup des\n<color red<Gardiens>coloroff>, votre âme sera brisée et vous aurez échoué\nà l'épreuve.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 4, line: 11 */ "Rassemblez les <color yellow<larmes>coloroff> sans subir une seule\nattaque pour remplir le <color yellow<réceptacle spirituel>coloroff>.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf(/* textboxtype: 4, unk: 2, line: 13 */ "Souhaitez‐vous que je répète mes explications?\n[1-]Oui[2]Non")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 4, line: 14 */ "Sur quel sujet puis‐je vous renseigner?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Hypnéa[4]Ça ira,\nmerci")
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
/*< 94>*/ 			printf(/* textboxtype: 4, unk: 2, line: 16 */ "Vous êtes dans un <color red<monde spirituel >coloroff>où seul l'élu de\nla Déesse peut entrer, l'<color blue<Hypnéa>coloroff>.\n\n\nVous avez temporairement quitté votre corps pour\nn'être plus que pur esprit.\n\n\nL'<color blue<Hypnéa>coloroff> va ainsi mettre votre force d'âme\nà l'épreuve.")
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
/*< 16>*/ 		printf(/* textboxtype: 4, unk: 2, line: 28 */ "Tu y es, <heroname>! Mets‐y tout\nton cœur!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 2, unk: 2, line: 18 */ "<0x10012:0x00000004>Maître <heroname>, vous avez échoué dans\nvotre collecte des <color yellow<larmes>coloroff>.")
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
/*< 46>*/ 										printf(/* textboxtype: 2, unk: 4, line: 26 */ "En plus des <color red<Gardiens>coloroff> qui vous attaquent, il existe deux\ntypes de <color red<Veilleurs >coloroff>qui traquent les intrus sur <color red<terre ou\ndans les airs>coloroff>.\n\nChacun a un comportement différent, faites‐y très\nattention.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 19 */ "Recueillez toutes <color red<les larmes>coloroff> pour pouvoir revenir au\nmonde extérieur. Je vous y attendrai.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "L'emplacement des <color yellow<larmes>coloroff> que vous avez déjà\nrecueillies une fois est <color red<indiqué sur votre carte>coloroff>.\nN'hésitez pas à y placer des balises.\n\nSi vous commencez par localiser les 15 larmes, vos\nchances de réussite augmenteront grandement.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf(/* textboxtype: 2, unk: 2, line: 24 */ "Il peut être préférable de <color red<conserver les <color yellow<larmes\n<color red<faciles à atteindre >coloroff>pour l'éventualité où vous\nvous feriez repérer.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf(/* textboxtype: 2, unk: 4, line: 23 */ "<0x10012:0x00000001>Maître, les chances que vous ne soyez pas l'élu sont en\ntrain d'augmenter.\n\n\nToutes ces tentatives successives semblent avoir\ntroublé votre concentration. Je vous recommande\nde faire une pause.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf(/* textboxtype: 4, unk: 2, line: 22 */ "Prenez garde aux <color red<deux types de Veilleurs >coloroff>qui\npatrouillent à la recherche d'intrus.\n\n\nLes <color red<Veilleurs volant dans le ciel >coloroff>ne vous détectent que\nquand vous entrez dans le champ de leur lumière.\n\n\nMais les <color red<Veilleurs patrouillant au sol >coloroff>vous\npoursuivront si vous les approchez. <color red<Attention\n>coloroff>à ne pas rester trop proche d'eux, <0x10012:0x00000002>Maître.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf(/* textboxtype: 2, unk: 2, line: 21 */ "L'emplacement des <color yellow<larmes>coloroff> que vous avez déjà\nrecueillies une fois est <color red<indiqué sur votre carte>coloroff>.\n\n\nEssayez tout d'abord de repérer l'emplacement des\n15 larmes.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf(/* textboxtype: 2, unk: 4, line: 20 */ "Vous pouvez répéter l'épreuve de la Déesse autant de\nfois que vous le souhaitez, <0x10012:0x00000002>Maître.\n\n\nJe vous conseille de <color red<ne pas prendre >coloroff>tout de suite les\n<color yellow<larmes >coloroff>faciles à atteindre mais de les conserver pour\nles moments où vous seriez découvert.\n\nCollectez les 15 <color yellow<larmes>coloroff> et retrouvez‐moi dans le\nmonde extérieur.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "Lorsque les 15 <color yellow<larmes>coloroff> empliront le <color yellow<réceptacle\nspirituel>coloroff>, votre âme s'épanouira et la Déesse\nvous octroiera un nouveau pouvoir.\n\nJ'attendrai votre retour dans le monde extérieur,\n<0x10012:0x00000002>Maître.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Je ne peux pas vous accompagner. L'épreuve s'adresse\ndirectement à votre esprit.\n\n\nVous vous trouvez dans un <color blue<Hypnéa>coloroff>, un monde\nspirituel où seul l'élu de la Déesse peut se rendre.\n\n\nIl s'agit ici de l'<color blue<Hypnéa de Farore>coloroff>, une épreuve\nrégissant votre<color red< esprit>coloroff>.\n\n\nVotre esprit a temporairement quitté votre corps,\n<0x10012:0x00000001>Maître.\n\n\nVous devez surmonter cette épreuve pour faire\ngrandir votre âme et ainsi trouver la flamme sacrée\nqui aiguisera votre épée.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf(/* textboxtype: 4, unk: 2, line: 4 */ "Ceci est un <color yellow<réceptacle spirituel>coloroff>.\n\n\n\nLorsqu'il sera rempli, il prouvera que vous avez\nsurmonté l'épreuve, et votre âme en sera grandie.\n\n\nLa Déesse vous gratifiera alors d'un <color red<nouveau pouvoir>coloroff>.")
          			flw_6:
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 5 */ "Pour remplir le <color yellow<réceptacle spirituel>coloroff>, il vous faut\nrecueillir les <color yellow<larmes de Farore >coloroff>éparpillées dans\nce monde.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "Vous voyez cet objet brillant en face de vous, <0x10012:0x00000002>Maître?")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf(/* textboxtype: 4, unk: 2, line: 7 */ "Il s'agit d'une <color yellow<larme de Farore>coloroff>.\nVous devez en recueillir <color red<15>coloroff>.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			wait_frames(15)
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf(/* textboxtype: 2, unk: 4, line: 8 */ "Mais cette <color red<épreuve >coloroff>porte bien son nom. La tâche ne\nsera pas facile...")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	wait_frames(30)
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf(/* textboxtype: 2, unk: 2, line: 27 */ "Le liquide que vous pouvez apercevoir ici s'appelle\nle <color red<dévoileur>coloroff>.\n\n\nSi vous y trempez les pieds, vous serez <color red<immédiatement\nrepéré >coloroff>par les Gardiens.\n\n\nLe dévoileur peut se trouver n'importe où, alors faites\nattention où vous marchez.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

