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
/*< 76>*/ 		printf("Va donc m'attraper cet <b<Avatar >>de\nje\x2010sais\x2010pas\x2010trop\x2010quoi, et qu'on en finisse\nune fois pour toutes!\n\n\x0E\x01\x09\x04\x00\x03On compte tous sur toi,\nLink!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\x0E\x20DPfiouu...! Ç'a passé proche!\nJe suis trempe en lavette!\n\n\n\x0E\x01\x09\x04\x00\x200Une chance que j'ai eu le génie de mettre le\nturbo! Sans ça j'aurais jamais pu attraper\n<b<Zelda>>!\n\n\x0E\x01\x09\x04\x00\x200Tant que je suis là, t'as pas besoin de t'inquiéter\npour elle. Je vais la protéger. Garanti.\n\n\nMaintenant va donc m'attraper cet <b<Avatar >>de\nje\x2010sais\x2010pas\x2010trop\x2010quoi, et qu'on en finisse\nune fois pour toutes!\n\n\x0E\x01\x09\x04\x00\x203Tout dépend de toi maintenant,\nLink!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, êtes\x2010vous prêt pour\nle combat final?\n[1]Prêt![2-]Pas encore")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Partons au combat.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Revenez lorsque vous serez\nbien préparé.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, désirez\x2010vous battre en\nretraite afin de vous préparer au combat final?\n\n[1]Oui![2-]Non, ça ira")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Revenez lorsque vous serez prêt.")
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
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x01Il semble que tu n'as pas encore accompli ta\ndestinée...\n\n\nDes profondeurs de son sommeil éternel, dame\n<b<Zelda>> te prie d'exaucer sa prière, car toi seul le\npeux...")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x03Je ressens une grande énergie émaner de cette\npousse. Nul doute qu'elle deviendra un jour un\ngrand arbre qui resplendira pendant des\nmillénaires.")
          					  case 1:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x00\x0BAh! Tu as planté une pousse... L'énergie vitale\nde ce jeune arbre est exceptionnelle...\n\n\nParvenu à maturité, il ne fait aucun doute qu'il\nne sera comparable à aucun autre. Sa beauté\nresplendira pendant des millénaires... ")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x00\x03Un arbre qui fleurit à travers les\nmillénaires... Où trouver la <r<pousse\n>>qui lui donnera vie?")
          					  case 1:
/*< 34>*/ 						printf("<pause0F>.<pause0F>.<pause0F>. \x0E\x01\x09\x04\x0F\x803Hmm...\n\n\n\n[1]Qu'y a\x2010t\x2010il?[2]Au revoir!")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x00\x703Hmm... Rien de très important...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 6}
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 40, 'param3': 6}
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf("Vois\x2010tu ce coin de terre baigné de soleil?\n\n\n\nJe me dis que je pourrais y planter un arbre...\n\n\n\nLorsque dame <b<Zelda>> s'éveillera, je suis sûre\nque son c\x153ur se réjouira à la vue d'un arbre\nmajestueux.")
/*< 60>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 61, 'param3': 6}
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf("Mais l'arbre qu'il me faut doit pouvoir\ns'épanouir pendant des millénaires, sans\njamais cesser de fleurir.\n\nOù pourrais\x2010je trouver la <r<pousse >>d'un arbre\naussi merveilleux?")
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
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x00\nN'aie aucune crainte. J'assurerai la protection\nde dame <b<Zelda>>. Va, à présent. Ton destin\nt'attend.")
          			  case 1:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ainsi, vos chemins se sont séparés.\n\n\n\nN'oublie pas ta promesse à dame <b<Zelda>>, et\nmets\x2010toi en quête de la <y+<Triforce>>!\n\n\nRetourne dans ton époque, et achève ce que tu\nas commencé.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x03Nous nous trouvons dans un lointain passé. La\n<b<Déesse Hylia>> vient d'emprisonner l'<b<Avatar du\nNéant>>.\n\nFais taire les questions qui se pressent dans\nton esprit et dirige\x2010toi à présent vers la grande\nporte du fond.\n\nCelle que ton c\x153ur désire ardemment protéger\nt'attend.")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf("\x0E\x01\x09\x04\x00\x01Sois le bienvenu, Link.\nJe t'attendais.\n\n\nIl te faut m'écouter sans crainte.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf("Nous sommes dans le <r<temple d'Hylia>>, qui\ndeviendra plus tard le <b<temple du sceau>>.\n\n\nEn ces temps reculés, bien avant que tu\nne viennes au monde, la Déesse vient\nd'emprisonner l'<b<Avatar du Néant>>.\n\nC'est également ici que Célesbourg a trouvé son\norigine, lorsque le village arraché de ces terres\ns'est élevé au\x2010dessus des nuages. ")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf("\x0E\x01\x09\x04\xF0F\x703Oui. En traversant la <b<porte du temps>>, tu as\nvoyagé vers le <r<passé>>.\n\n\nFais taire les questions qui se pressent dans\nton esprit et dirige\x2010toi à présent vers la grande\nporte du fond.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf("Celle que ton c\x153ur désire ardemment protéger\nt'attend.")
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
/*< 25>*/ 		printf("\x0E\x01\x09\x04\x00\x12Il a disparu derrière la<r< porte de devant>>...\nHâte\x2010toi... Tu dois arrêter <b<Ghirahim>>!")
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x12Argh... Est\x2010ce toi, Link?\nGhirahim a eu raison de moi...\n\n\nMais ne te préoccupe pas de mon sort...\nIl te faut partir à sa poursuite!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf("Il a disparu derrière la<r< porte de devant>>...\nTu peux encore l'arrêter... Hâte\x2010toi!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x07\xC04N'aie point d'inquiétude! Dame <b<Zelda >>est sauve.\nElle sommeille dans la pièce du fond.\n\n\n\x0E\x01\x09\x04\x00\x706Détruis ce démon, Link, et sauve\nnotre monde.")
          	  case 1:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x07\xC0BN'aie point d'inquiétude! Dame <b<Zelda >>est sauve.\nElle sommeille dans la pièce du fond.\n\n\n\x0E\x01\x09\x04\x0F\x700Le retour de l'<b<Avatar du Néant>> est tout à fait\ninattendu...<pause0A> Tout dépend de toi, à présent.\n\x0E\x01\x09\x04\x00\x706Bonne chance, Link!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nLa probabilité qu'il vous soit impossible de quitter\nle combat avant d'avoir vaincu votre adversaire\nest de 100 %.\n\nDésirez\x2010vous engager le combat?\n[1]Et comment![2-]Pas pour l'instant...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf("Bien, \x0E\x01\x12\x04\x00\x05Maître Link.<pause0F> Je suis de tout c\x153ur\navec vous.<pause1E>\n\n\nBonne chance, \x0E\x01\x12\x04\x00\x01Maître...")
          	  case 1:
/*< 66>*/ 		printf("Bien, \x0E\x01\x12\x04\x00\x05Maître. Veuillez revenir en ce lieu lorsque\nvous serez prêt pour l'affrontement.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDSale petit morveux!")
          }

