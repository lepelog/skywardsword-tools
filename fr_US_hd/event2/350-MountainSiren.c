          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "Tu es arrivé, <heroname>!\nDonne tout ce que tu as!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
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
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "En plus des <color red<Gardiens>coloroff> qui vous attaquent, il existe\ndeux types de <color red<Veilleurs >coloroff>qui traquent les intrus sur\n<color red<terre ou dans les airs>coloroff>.\n\nChacun a un comportement différent, faites‐y\ntrès attention.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Rassemblez toutes les <color yellow<larmes>coloroff>. J'attendrai votre retour.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "L'emplacement des <color yellow<larmes>coloroff> que vous avez déjà\nrecueillies une fois est <color red<indiqué sur votre carte>coloroff>.\n\n\nN'hésitez pas à y placer des balises. Si vous commencez\npar localiser les 15 larmes, vos chances de réussite\naugmenteront grandement.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Il peut être préférable de <color red<conserver les <color yellow<larmes<color red< faciles\nà atteindre >coloroff>pour vous sortir d'affaire si vous vous\nfaites repérer.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "La probabilité que vous ne soyez pas l'élu augmente,\n<0x10012:0x00000001>Maître...\n\n\nToutes ces tentatives successives semblent avoir\ntroublé votre concentration. Je vous recommande\nde faire une pause.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Prenez garde aux <color red<deux sortes de Veilleurs >coloroff>qui\npatrouillent pour repérer les intrus.\n\n\nSi vous n'entrez pas dans la lumière des <color red<Veilleurs\nqui volent>coloroff>, vous serez en sécurité.\n\n\nMais les <color red<Veilleurs qui sont au sol >coloroff>vous poursuivront\nsi vous vous approchez d'eux. Il vous faudra être\n<color red<très prudent>coloroff>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "L'emplacement des <color yellow<larmes>coloroff> que vous avez déjà\nrecueillies une fois est <color red<indiqué sur votre carte>coloroff>.\n\n\nEssayez tout d'abord de repérer l'emplacement\ndes 15 <color yellow<larmes>coloroff>.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "Tant que votre volonté ne plie pas, vous pouvez\nretenter l'épreuve de la Déesse indéfiniment.\n\n\nÉvitez de recueillir les <color yellow<larmes>coloroff> faciles à atteindre\ntout de suite. <color red<Conservez‐les >coloroff>plutôt pour le cas\noù vous seriez découvert.\n\nUne fois que vous aurez rassemblé les 15 <color yellow<larmes>coloroff>,\nrejoignez‐moi dans le monde extérieur.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Lorsque les 15 <color yellow<larmes>coloroff> empliront le <color yellow<réceptacle\nspirituel>coloroff>, votre âme s'épanouira et la Déesse vous\noctroiera un nouveau pouvoir.\n\nJ'attendrai votre retour dans le monde extérieur,\n<0x10012:0x00000002>Maître.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Vous vous trouvez dans l'<color blue<Hypnéa de Din >coloroff>où vous\nallez subir la troisième épreuve, celle qui éprouvera\nvotre <color red<force>coloroff>.\n\nPour trouver la troisième flamme qui renforcera\nvotre épée, votre âme doit grandir une dernière fois.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Lorsque le <color yellow<réceptacle spirituel>coloroff> sera rempli, votre âme\ns'épanouira et la Déesse vous octroiera un <color red<nouveau\npouvoir>coloroff>.\n\nAvez‐vous des questions, <0x10012:0x00000002>Maître?\n[1-]Oui[2]Non")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Sur quel sujet puis‐je vous renseigner?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Ça ira,\nmerci")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Très bien, Maître, je vais vous répondre.\n\n\n\nPour remplir le <color yellow<réceptacle spirituel>coloroff>, vous devez\nrassembler les <color yellow<larmes de Din >coloroff>disséminées dans\nce monde.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "Voyez‐vous cet objet brillant, là‐bas?")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "C'est une <color yellow<larme de Din>coloroff>.\nIl vous faudra en rassembler <color red<15>coloroff>.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "Avez‐vous d'autres questions?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Non")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Si vous faites un pas hors du cercle où vous vous\ntrouvez, des êtres appelés les <color red<Gardiens >coloroff>se mettront\nà votre poursuite.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Si vous subissez ne serait‐ce qu'un seul coup des\n<color red<Gardiens>coloroff>, votre âme sera brisée et vous aurez échoué\nà l'épreuve.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "Rassemblez les <color yellow<larmes>coloroff> sans subir une seule attaque\npour remplir le <color yellow<réceptacle spirituel>coloroff>.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 4, line: 14 */ "Il existe dans ce monde des étendues d'un liquide\nqu'on appelle <color red<dévoileur>coloroff>.\n\n\nSi vous le touchez, <color red<les Gardiens vous repéreront\ninstantanément>coloroff>.\n\n\nFaites donc attention où vous mettez les pieds.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "<0x10012:0x00000005>Très bien, Maître.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "J'attendrai votre retour dans le monde extérieur,\n<0x10012:0x00000002>Maître.")
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

