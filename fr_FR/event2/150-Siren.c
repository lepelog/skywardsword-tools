          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "Tu es arrivé, <heroname> !\nDonne tout ce que tu as !")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 2, unk: 2, line: 17 */ "<0x10012:0x00000004>Maître <heroname>.\nVous avez échoué dans votre collecte\ndes <color yellow<larmes>coloroff>.")
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
/*< 47>*/ 										printf(/* textboxtype: 2, unk: 2, line: 25 */ "Les <color red<gardiens>coloroff> qui vous attaquent et les\n<color red<veilleurs>coloroff> qui traquent les intrus\npeuvent être de deux types, <color red<terrestre\nou céleste>coloroff>.\nChacun a un comportement différent,\nfaites‐y très attention.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Rassemblez toutes les <color yellow<larmes>coloroff>.\nJ'attends votre retour.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "L'emplacement des <color yellow<larmes>coloroff> que vous\navez déjà recueillies une fois est\n<color red<indiqué sur votre carte>coloroff>.\n\nN'hésitez pas à y placer des balises.\nSi vous commencez par localiser\nles 15 larmes, vos chances de réussite\naugmenteront grandement.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf(/* textboxtype: 2, unk: 2, line: 23 */ "Il peut être préférable de <color red<conserver les\n<color yellow<larmes<color red< faciles à atteindre >coloroff>pour vous\nsortir d'affaire si vous vous faites\nrepérer.")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 2, unk: 2, line: 22 */ "La probabilité que vous ne soyez pas\nl'élu augmente, <0x10012:0x00000001>Maître...\n\n\nToutes ces tentatives successives\nsemblent avoir troublé votre\nconcentration. Je vous recommande\nde faire une pause.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Prenez garde aux <color red<deux sortes de\nveilleurs >coloroff>qui patrouillent pour repérer\nles intrus.\n\nSi vous n'entrez pas dans la lumière\ndes <color red<veilleurs qui volent>coloroff>, vous serez\nen sécurité.\n\nMais les <color red<veilleurs qui sont au sol >coloroff>vous\npoursuivront si vous vous approchez\nd'eux. Il vous faudra être <color red<très prudent>coloroff>.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf(/* textboxtype: 2, unk: 2, line: 20 */ "L'emplacement des <color yellow<larmes>coloroff> que vous\navez déjà recueillies une fois est\n<color red<indiqué sur votre carte>coloroff>.\n\nEssayez tout d'abord de repérer\nl'emplacement des 15 <color yellow<larmes>coloroff>.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf(/* textboxtype: 2, unk: 2, line: 19 */ "Tant que votre volonté ne plie pas, vous\npouvez retenter l'épreuve de la Déesse\nindéfiniment.\n\nÉvitez de recueillir les <color yellow<larmes>coloroff> faciles\nà atteindre tout de suite.\n<color red<Conservez‐les>coloroff> plutôt pour le cas\noù vous seriez découvert.\nRassemblez les 15 <color yellow<larmes>coloroff> et\nrejoignez‐moi dans le monde\nextérieur.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf(/* textboxtype: 2, unk: 2, line: 16 */ "Lorsque les 15 <color yellow<larmes>coloroff> empliront le\n<color yellow<réceptacle spirituel>coloroff>, votre âme\ns'épanouira et la Déesse vous octroiera\nun nouveau pouvoir.\nJ'attendrai votre retour dans le monde\nextérieur, <0x10012:0x00000002>Maître.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Maître <heroname>.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf(/* textboxtype: 2, unk: 2, line: 1 */ "Vous vous trouvez dans le monde de la\ndernière épreuve, la <color blue<Psysalis de la\nDéesse>coloroff>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 2, line: 2 */ "Lorsque le dernier <color yellow<réceptacle spirituel>coloroff>\nsera rempli et que vous aurez été\nreconnu comme un véritable héros...\n\n... la porte qui vous conduira vers\nla <color yellow white<Triforce>coloroff> se révélera à vous, <0x10012:0x00000002>Maître.\nVous devez à tout prix réussir cette\népreuve.\nAvez‐vous des questions ?\n[1-]Oui[2]Non")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "À quel sujet puis‐je vous renseigner ?\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Ça ira,\nmerci")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf(/* textboxtype: 2, unk: 2, line: 7 */ "<0x10012:0x00000005>Très bien, Maître, je vais vous\nrépondre.\n\n\nPour remplir le <color yellow<réceptacle spirituel>coloroff>,\nvous devez rassembler les <color yellow<larmes de la\nDéesse >coloroff>disséminées dans ce monde.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2, line: 8 */ "Vous voyez cet objet brillant juste\ndevant vous, <0x10012:0x00000002>Maître ?")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "C'est une <color yellow<larme de la Déesse>coloroff>.\nIl vous faudra en rassembler <color red<15>coloroff>.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					wait_frames(15)
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2, line: 4 */ "Avez‐vous d'autres questions ?\n\n\n\n[1-]Réceptacle\nspirituel[2-]Gardiens[3-]Dévoileur[4]Non")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 2, line: 11 */ "Si vous faites un pas hors du cercle où\nvous vous trouvez, des êtres appelés les\n<color red<gardiens >coloroff>se mettront à votre poursuite.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Si vous subissez ne serait‐ce qu'un seul\ncoup des <color red<gardiens>coloroff>, votre âme sera\nbrisée et vous aurez échoué à l'épreuve.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf(/* textboxtype: 2, unk: 2, line: 13 */ "Rassemblez les <color yellow<larmes>coloroff> sans subir une\nseule attaque pour remplir le\n<color yellow<réceptacle spirituel>coloroff>.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Bien, Maître. Je vais vous répondre.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2, line: 14 */ "Il existe dans ce monde des étendues\nd'un liquide qu'on appelle <color red<dévoileur>coloroff>.\n\n\nSi vous y posez le pied, <color red<les gardiens\nvous repéreront instantanément>coloroff>.\n\n\nPrenez donc garde à ne pas marcher\ndans le dévoileur par inadvertance.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2, line: 5 */ "<0x10012:0x00000005>Très bien, Maître.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "J'attendrai votre retour dans le monde\nextérieur, <0x10012:0x00000002>Maître.")
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

