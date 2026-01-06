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
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "Va donc m'attraper cet <color blue<Avatar >coloroff>de\nje‐sais‐pas‐trop‐quoi, et qu'on\nen finisse une fois pour toutes!\n\n<0x10009:0x00000003>On compte tous sur toi,\n<heroname>!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e020d>Pfiouu...! Ç'a passé proche!\nJe suis trempe en lavette!\n\n\n<0x10009:0x00000200>Une chance que j'ai eu le génie de\nmettre le turbo! Sans ça j'aurais \njamais pu attraper <color blue<Zelda>coloroff>!\n\n<0x10009:0x00000200>Tant que je suis là, t'as pas besoin\nde t'inquiéter pour elle. Je vais la\nprotéger. Garanti.\n\nMaintenant va donc m'attraper cet\n<color blue<Avatar >coloroff>de je‐sais‐pas‐trop‐quoi, et\nqu'on en finisse une fois pour toutes!\n\n<0x10009:0x00000203>Tout dépend de toi maintenant,\n<heroname>!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x00000004>Maître <heroname>, êtes‐vous\nprêt pour le combat final?\n[1-]Prêt![2]Pas encore")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf(/* textboxtype: 2, unk: 0, line: 30 */ "<0x10012:0x00000005>Très bien, Maître. Partons au combat.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf(/* textboxtype: 2, unk: 0, line: 31 */ "<0x10012:0x00000005>Très bien, Maître. Revenez lorsque\nvous serez bien préparé.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10012:0x00000004>Maître <heroname>, désirez‐vous\nbattre en retraite afin de vous\npréparer au combat final?\n\n[1-]Oui![2]Non, ça ira")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 2, unk: 0, line: 27 */ "<0x10012:0x00000005>Très bien, Maître. Revenez lorsque\nvous serez prêt.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 2, unk: 0, line: 28 */ "<0x10012:0x00000005>Très bien, Maître.")
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
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000001>Il semble que tu n'as pas encore\naccompli ta destinée...\n\n\nDes profondeurs de son sommeil\néternel, dame <color blue<Zelda>coloroff> te prie d'exaucer\nsa prière, car toi seul le peux...")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000003>Je ressens une grande énergie émaner\nde cette pousse. Nul doute qu'elle\ndeviendra un jour un grand arbre qui\nresplendira pendant des millénaires.")
          					  case 1:
/*< 47>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000b>Ah! Tu as planté une pousse...\nL'énergie vitale de ce jeune arbre\nest exceptionnelle...\n\nParvenu à maturité, il ne fait aucun\ndoute qu'il ne sera comparable à aucun\nautre. Sa beauté resplendira pendant\ndes millénaires... ")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000003>Un arbre qui fleurit à travers les\nmillénaires... Où trouver la <color red<pousse\n>coloroff>qui lui donnera vie?")
          					  case 1:
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "<pause 15>.<pause 15>.<pause 15>.\n<0x10009:0x000f0803>Hmm...\n\n\n[1-]Qu'y a‐t‐il?[2-]Au revoir!")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000703>Hmm...\nRien de très important...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							wait_frames(1)
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							wait_frames(30)
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0, line: 10 */ "Vois‐tu ce coin de terre baigné\nde soleil?\n\n\nJe me dis que je pourrais y planter\nun arbre...\n\n\nLorsque dame <color blue<Zelda>coloroff> s'éveillera, je suis\nsûre que son cœur se réjouira à la vue\nd'un arbre majestueux.")
/*< 60>*/ 							wait_frames(30)
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf(/* textboxtype: 1, unk: 0, line: 11 */ "Mais l'arbre qu'il me faut doit pouvoir\ns'épanouir pendant des millénaires,\nsans jamais cesser de fleurir.\n\nOù pourrais‐je trouver la <color red<pousse>coloroff>\nd'un arbre aussi merveilleux?")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Hmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0000000a>N'aie aucune crainte. J'assurerai\nla protection de dame <color blue<Zelda>coloroff>.\nVa, à présent. Ton destin t'attend.")
          			  case 1:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000003>Ainsi, vos chemins se sont séparés.\n\n\n\nN'oublie pas ta promesse à dame <color blue<Zelda>coloroff>,\net mets‐toi en quête de la <color yellow white<Triforce>coloroff>!\n\n\nRetourne dans ton époque, et\nachève ce que tu as commencé.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000003>Nous nous trouvons dans un lointain\npassé. La <color blue<Déesse Hylia>coloroff> vient\nd'emprisonner l'<color blue<Avatar du Néant>coloroff>.\n\nFais taire les questions qui se pressent\ndans ton esprit et dirige‐toi à présent\nvers la grande porte du fond.\n\nCelle que ton cœur désire ardemment\nprotéger t'attend.")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Sois le bienvenu, <heroname>.\nJe t'attendais.\n\n\nIl te faut m'écouter sans crainte.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "Nous sommes dans le <color red<temple d'Hylia>coloroff>,\nqui deviendra plus tard le <color blue<temple du\nsceau>coloroff>.\n\nEn ces temps reculés, bien avant que\ntu ne viennes au monde, la Déesse vient\nd'emprisonner l'<color blue<Avatar du Néant>coloroff>.\n\nC'est également ici que Célesbourg a\ntrouvé son origine, lorsque le village\narraché de ces terres s'est élevé\nau‐dessus des nuages. ")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0f0f0703>Oui. En traversant la <color blue<porte du temps>coloroff>,\ntu as voyagé vers le <color red<passé>coloroff>.\n\n\nFais taire les questions qui se pressent\ndans ton esprit et dirige‐toi à présent\nvers la grande porte du fond.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Celle que ton cœur désire\nardemment protéger t'attend.")
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
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000012>Il a disparu derrière la<color red< porte de\ndevant>coloroff>... Hâte‐toi... Tu dois arrêter\n<color blue<Ghirahim>coloroff>!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000012>Argh... Est‐ce toi, <heroname>?\nGhirahim a eu raison de moi...\n\n\nMais ne te préoccupe pas de mon sort...\nIl te faut partir à sa poursuite!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "Il a disparu derrière la<color red< porte de\ndevant>coloroff>... Tu peux encore l'arrêter...\nHâte‐toi!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070c04>N'aie point d'inquiétude! Dame <color blue<Zelda>coloroff>\nest sauve. Elle sommeille dans la pièce\ndu fond.\n\n<0x10009:0x00000706>Détruis ce démon, <heroname>,\net sauve notre monde.")
          	  case 1:
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00070c0b>N'aie point d'inquiétude! Dame <color blue<Zelda>coloroff>\nest sauve. Elle sommeille dans la pièce\ndu fond.\n\n<0x10009:0x000f0700>Le retour de l'Avatar du Néant\nest tout à fait inattendu...<pause 10> Tout\ndépend de toi, à présent. <0x10009:0x00000706>Bonne\nchance, <heroname>!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 2, unk: 1, line: 23 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nLa probabilité qu'il vous soit impossible\nde quitter le combat avant d'avoir\nvaincu votre adversaire est de 100 %.\n\nDésirez‐vous engager le combat?\n[1-]Et comment![2]Pas pour\nl'instant...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf(/* textboxtype: 2, unk: 0, line: 25 */ "Bien, <0x10012:0x00000005>Maître <heroname>.<pause 15>\nJe suis de tout cœur avec vous.<pause 30>\n\n\nBonne chance, <0x10012:0x00000001>Maître...")
          	  case 1:
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "Bien, <0x10012:0x00000005>Maître.\nVeuillez revenir en ce lieu lorsque\nvous serez prêt pour l'affrontement.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 3, unk: 0, line: 32 */ "<0x10005:0x002d0000><0x10008:0x02cd>Sale petit morveux!")
          }

