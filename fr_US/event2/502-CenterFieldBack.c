          void entrypoint_502_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	switch (story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */]) {
          	  case 0:
/*< 71>*/ 		story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */] = true;
          		flw_73:
/*< 73>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 72>*/ 		story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */] = true;
          		goto flw_73
          	}
          }

          void entrypoint_502_07() {
/*< 74>*/ 	start()
/*< 77>*/ 	switch (story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */]) {
          	  case 0:
/*< 76>*/ 		printf("Va donc m'attraper cet <b<Avatar >>de\nje\x2010sais\x2010pas\x2010trop\x2010quoi, et qu'on\nen finisse une fois pour toutes!\n\n\x0E\x01\x09\x04\x00\x03On compte tous sur toi,\nLink!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\x0E\x20DPfiouu...! Ç'a passé proche!\nJe suis trempe en lavette!\n\n\n\x0E\x01\x09\x04\x00\x200Une chance que j'ai eu le génie de\nmettre le turbo! Sans ça j'aurais \njamais pu attraper <b<Zelda>>!\n\n\x0E\x01\x09\x04\x00\x200Tant que je suis là, t'as pas besoin\nde t'inquiéter pour elle. Je vais la\nprotéger. Garanti.\n\nMaintenant va donc m'attraper cet\n<b<Avatar >>de je\x2010sais\x2010pas\x2010trop\x2010quoi, et\nqu'on en finisse une fois pour toutes!\n\n\x0E\x01\x09\x04\x00\x203Tout dépend de toi maintenant,\nLink!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, êtes\x2010vous\nprêt pour le combat final?\n[1]Prêt![2-]Pas encore")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Partons au combat.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Revenez lorsque\nvous serez bien préparé.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, désirez\x2010vous\nbattre en retraite afin de vous\npréparer au combat final?\n\n[1]Oui![2-]Non, ça ira")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Revenez lorsque\nvous serez prêt.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
          	}
          }

          void entrypoint_502_01() {
          	start()
/*<  3>*/ 	switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          	  case 0:
/*< 27>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x01Il semble que tu n'as pas encore\naccompli ta destinée...\n\n\nDes profondeurs de son sommeil\néternel, dame <b<Zelda>> te prie d'exaucer\nsa prière, car toi seul le peux...")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x03Je ressens une grande énergie émaner\nde cette pousse. Nul doute qu'elle\ndeviendra un jour un grand arbre qui\nresplendira pendant des millénaires.")
          					  case 1:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x00\x0BAh! Tu as planté une pousse...\nL'énergie vitale de ce jeune arbre\nest exceptionnelle...\n\nParvenu à maturité, il ne fait aucun\ndoute qu'il ne sera comparable à aucun\nautre. Sa beauté resplendira pendant\ndes millénaires... ")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x00\x03Un arbre qui fleurit à travers les\nmillénaires... Où trouver la <r<pousse\n>>qui lui donnera vie?")
          					  case 1:
/*< 34>*/ 						printf("<pause0F>.<pause0F>.<pause0F>.\n\x0E\x01\x09\x04\x0F\x803Hmm...\n\n\n[1]Qu'y a\x2010t\x2010il?[2]Au revoir!")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x00\x703Hmm...\nRien de très important...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 6}
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 40, 'param3': 6}
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf("Vois\x2010tu ce coin de terre baigné\nde soleil?\n\n\nJe me dis que je pourrais y planter\nun arbre...\n\n\nLorsque dame <b<Zelda>> s'éveillera, je suis\nsûre que son c\x153ur se réjouira à la vue\nd'un arbre majestueux.")
/*< 60>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 61, 'param3': 6}
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf("Mais l'arbre qu'il me faut doit pouvoir\ns'épanouir pendant des millénaires,\nsans jamais cesser de fleurir.\n\nOù pourrais\x2010je trouver la <r<pousse>>\nd'un arbre aussi merveilleux?")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf("Hmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x00\nN'aie aucune crainte. J'assurerai\nla protection de dame <b<Zelda>>.\nVa, à présent. Ton destin t'attend.")
          			  case 1:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ainsi, vos chemins se sont séparés.\n\n\n\nN'oublie pas ta promesse à dame <b<Zelda>>,\net mets\x2010toi en quête de la <y+<Triforce>>!\n\n\nRetourne dans ton époque, et\nachève ce que tu as commencé.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x03Nous nous trouvons dans un lointain\npassé. La <b<Déesse Hylia>> vient\nd'emprisonner l'<b<Avatar du Néant>>.\n\nFais taire les questions qui se pressent\ndans ton esprit et dirige\x2010toi à présent\nvers la grande porte du fond.\n\nCelle que ton c\x153ur désire ardemment\nprotéger t'attend.")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf("\x0E\x01\x09\x04\x00\x01Sois le bienvenu, Link.\nJe t'attendais.\n\n\nIl te faut m'écouter sans crainte.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf("Nous sommes dans le <r<temple d'Hylia>>,\nqui deviendra plus tard le <b<temple du\nsceau>>.\n\nEn ces temps reculés, bien avant que\ntu ne viennes au monde, la Déesse vient\nd'emprisonner l'<b<Avatar du Néant>>.\n\nC'est également ici que Célesbourg a\ntrouvé son origine, lorsque le village\narraché de ces terres s'est élevé\nau\x2010dessus des nuages. ")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf("\x0E\x01\x09\x04\xF0F\x703Oui. En traversant la <b<porte du temps>>,\ntu as voyagé vers le <r<passé>>.\n\n\nFais taire les questions qui se pressent\ndans ton esprit et dirige\x2010toi à présent\nvers la grande porte du fond.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf("Celle que ton c\x153ur désire\nardemment protéger t'attend.")
/*<  7>*/ 			story_flags[349 /* us: 805A9B01 0x08, jp: 805ACD81 0x08 */] = true;
/*<  8>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<  9>*/ 				story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          				flw_17:
/*< 17>*/ 				scene_flags[10 'Sealed Grounds'][82 /* 0xB 04 */] = true;
/*< 16>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				goto flw_17
          			}
          		}
          	}
          }

          void entrypoint_502_02() {
/*<  1>*/ 	start()
/*< 21>*/ 	switch (scene_flags[85 /* 0xB 20 */]) {
          	  case 0:
/*< 25>*/ 		printf("\x0E\x01\x09\x04\x00\x12Il a disparu derrière la<r< porte de\ndevant>>... Hâte\x2010toi... Tu dois arrêter\n<b<Ghirahim>>!")
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x12Argh... Est\x2010ce toi, Link?\nGhirahim a eu raison de moi...\n\n\nMais ne te préoccupe pas de mon sort...\nIl te faut partir à sa poursuite!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf("Il a disparu derrière la<r< porte de\ndevant>>... Tu peux encore l'arrêter...\nHâte\x2010toi!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x07\xC04N'aie point d'inquiétude! Dame <b<Zelda>>\nest sauve. Elle sommeille dans la pièce\ndu fond.\n\n\x0E\x01\x09\x04\x00\x706Détruis ce démon, Link,\net sauve notre monde.")
          	  case 1:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x07\xC0BN'aie point d'inquiétude! Dame <b<Zelda>>\nest sauve. Elle sommeille dans la pièce\ndu fond.\n\n\x0E\x01\x09\x04\x0F\x700Le retour de l'Avatar du Néant\nest tout à fait inattendu...<pause0A> Tout\ndépend de toi, à présent. \x0E\x01\x09\x04\x00\x706Bonne\nchance, Link!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nLa probabilité qu'il vous soit impossible\nde quitter le combat avant d'avoir\nvaincu votre adversaire est de 100 %.\n\nDésirez\x2010vous engager le combat?\n[1]Et comment![2-]Pas pour\nl'instant...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf("Bien, \x0E\x01\x12\x04\x00\x05Maître Link.<pause0F>\nJe suis de tout c\x153ur avec vous.<pause1E>\n\n\nBonne chance, \x0E\x01\x12\x04\x00\x01Maître...")
          	  case 1:
/*< 66>*/ 		printf("Bien, \x0E\x01\x12\x04\x00\x05Maître.\nVeuillez revenir en ce lieu lorsque\nvous serez prêt pour l'affrontement.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDSale petit morveux!")
          }

