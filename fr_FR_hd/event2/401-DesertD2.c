          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf("Tu as mis en marche les deux générateurs ?\nAlors passe par la salle des machines pour\nvenir jusqu'ici.\n\nViens vite nous libérer !")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf("Tu as mis en marche un générateur ? Mais si\ntu n'as pas activé <r<l'autre>>, tu ne pourras pas\npasser dans la salle des machines.\n\nVa donc le mettre en marche et viens vite nous\nsauver.")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf("Dépêche\x2010toi de venir nous libérer. Commence\npar rétablir le <r<courant dans la salle des\nmachines>>.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x09\xC00Ah, quelle frayeur !\n\n\n\n\x0E\x01\x09\x04\x03\x900Tu es un humain. Comment es\x2010tu arrivé\njusqu'ici ?")
          				flw_1:
/*<  1>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Tu es venu avec le <b<capitaine >>pour nous\ndélivrer ? Ça me fait trop plaisir !\n\n\n\x0E\x01\x09\x04\x03\x900Mais à cause de ces <r<barreaux électriques>>, on\npeut pas sortir d'ici.")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 32, 'param3': 6}
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900La salle des machines se trouve sous cette\ncellule...")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x03\x900Tu y trouveras un couloir qui conduit de notre\ncôté.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x03\x900Mais pour arriver ici en passant par la salle\ndes machines, il faut y rétablir le <r<<pling>courant>>.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x03\x900Tiens<pause05>.<pause05>.<pause05>. On dirait que la salle des machines est\nà nouveau opérationnelle.\n\n\n\x0E\x01\x09\x04\x03\x900Tu as rétabli le <r<courant>> ? \x0E\x01\x09\x04\x03\x900Je vois. Tu devrais\ndonc pouvoir passer par la salle des machines\npour rejoindre cette cellule !\n\n\x0E\x01\x09\x04\x03\x900On t'attend !")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf("\x0E\x01\x09\x04\x03\x900Tiens<pause05>.<pause05>.<pause05>. Est\x2010ce que tu aurais mis en marche un\n<r<générateur>> ?\n\n\n\x0E\x01\x09\x04\x03\x900Mais tu n'en as activé qu'un. Il y a deux\n<r<générateurs>> !")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf("\x0E\x01\x09\x04\x03\x900L'autre <r<générateur>> est là.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf("\x0E\x01\x09\x04\x03\x900On compte sur toi !")
          							goto flw_19
          						  case 1:
/*<114>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 115, 'param3': 30}
          							goto flw_115
          						}
          					}
          				  case 1:
/*<111>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
          						goto flw_112
          					  case 1:
/*< 20>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 47, 'param3': 30}
/*< 47>*/ 						{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 24, 'param3': 30}
/*< 24>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x03\x900Il y a des <r<générateurs >>à ces deux endroits.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x03\x900On compte sur toi !")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x03\x900Comment un humain comme toi est arrivé\njusqu'ici ?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x09\xC00J'ai peur ! Élimine ces monstres et viens nous\nsauver !")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf("")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x03\x900Tu es vraiment venu nous aider ? Je suis si\ncontent !")
          		flw_15:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x03\x900Je vois, tu es venu sur ce bateau pour trouver\nla <r<flamme de Nayru>>.\n\n\n\x0E\x01\x09\x04\x03\x900Pour ranimer la <r<flamme de Nayru>>, il faut\nd'abord reprendre le contrôle du navire.\n\n\n\x0E\x01\x09\x04\x03\x900La salle de contrôle est à côté de cette cellule\nmais elle est fermée par une grande porte qui\nnécessite une clé spéciale.\n\n\x0E\x01\x09\x04\x03\x900Rends\x2010toi d'abord dans la <b<cabine du capitaine>>,\n<pling>tu devrais y trouver la clé de la salle de\ncontrôle.")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf("\x0E\x01\x09\x04\x03\x900Pour te remercier de nous avoir libérés, je te\ndonne cette <r<clé>>.\n\n\n\x0E\x01\x09\x04\x03\x900Avec cette <r<clé>>, tu pourras entrer dans la <b<cabine\ndu capitaine>>.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf("\x0E\x01\x09\x04\x03\x900On peut accéder à la cabine du capitaine en\npassant par une porte à la poupe du bateau.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x03\x900Bon, nous, on met les voiles !\n\n\n\n\x0E\x01\x09\x04\x03\x900Désolé, mais il va falloir que tu te débrouilles\ntout seul pour la suite.")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 16, 'param3': 6}
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf("\x0E\x01\x09\x04\x03\x900On se connaît, non ? <pause05>.<pause05>.<pause05>. \x0E\x01\x09\x04\x03\x900Tu es l'humain sans\nc\x153ur qui a pas voulu nous sauver tout à\nl'heure !\n\n\x0E\x01\x09\x04\x03\x900Comment tu es arrivé jusqu'ici ?")
          			flw_125:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x03\x900.<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Tu es venu avec le <b<capitaine >>pour nous aider ?\nMerci !")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x03\x900Tu es un humain... Comment tu es arrivé\njusqu'ici ?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x03\x900\x0E\x03\x01\x00Link ! Bravo !")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x03\x900Mon navire a retrouvé toute sa splendeur !\nÇa fait plaisir !\n\n\n\x0E\x01\x09\x04\x03\x900Maintenant, il faudrait que tu libères les\n<b<membres de mon équipage>>.\n\n\n\x0E\x01\x09\x04\x03\x900Il y a une <b<<pling>cellule>> dans le navire, ils doivent y\nêtre détenus.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x03\x900Moi, j'ai trop peur, je vais attendre dans le\nbateau.\n\n\n\x0E\x01\x09\x04\x03\x900J'compte sur toi !")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 54, 'param3': 6}
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Il est probable que ces\n<r<tentacules >>appartiennent à un monstre gigantesque.\n\n\nIl est difficile d'évaluer la situation dans ces\nconditions, mais il semble que ce navire soit\nattaqué.\n\nLa probabilité que ce navire sombre si vous n'agissez\npas est de 80 %.\n\n\nServez\x2010vous de la <r<<pling>force sacrée>> pour vous frayer un\nchemin jusqu'à la sortie et analyser la situation.")
/*< 55>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 36}
/*< 53>*/ 	scene_flags[18 'Lanayru: Sandship'][79 /* 0x8 80 */] = true;
          }

          void entrypoint_401_10() {
/*< 63>*/ 	start()
/*< 64>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 65>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 66>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 70>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, la salle des machines est à présent\ncomplètement opérationnelle.\n\n\nJe vous conseille de rejoindre la cellule au plus vite\nen passant par la salle des machines pour aller <g<libérer\n>>l'équipage.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, comme l'avait dit le matelot, la salle des\nmachines est opérationnelle.\n\n\nMais enclencher un <r<générateur>> ne suffit pas pour\nouvrir complètement le couloir qui mène à la cellule.\n\n\nJe vous conseille de vous rendre au second <r<générateur\n>>au plus vite.")
          			}
          		  case 1:
/*< 67>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_69
          			  case 1:
          				goto flw_69
          			}
          		}
          	  case 1:
/*< 72>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 73>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, j'ai ressenti une nouvelle secousse.\n\n\n\nJ'ignore les détails, mais je vous conseille d'aller\nlibérer les <b<matelots captifs>> au plus vite.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, j'ai ressenti une forte secousse.\n\n\n\nIl est probable qu'en activant cet appareil, une sorte\nde mécanisme se soit mis en marche dans le navire.\n\n\nJ'ignore les détails, mais je vous conseille d'aller\nlibérer les <b<matelots captifs>> au plus vite.")
          			}
          		  case 1:
/*< 74>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_71
          			  case 1:
          				goto flw_71
          			}
          		}
          	}
          }

          void entrypoint_401_11() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, selon mes conclusions, ceci est la <y<<pling>clé>> qui\nouvre la salle de contrôle dont parlait le matelot.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf("Ma mémoire indique que la <b<porte >>se trouve à l'endroit\nmarqué d'une \x0E\x02\x04\x02\x19CD.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf("Je vous conseille de vous rendre à la <b<salle de contrôle\n>>au plus vite.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, regardez.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf("Il y a ici une grande porte. Toutefois, elle semble\nverrouillée.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf("Il est probable que ce soit la porte d'une pièce\nimportante.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf("Je ressens une présence maléfique derrière cette\nporte.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf("La probabilité que les tentacules qui détruisent le\nnavire soient en fait les membres d'une créature\ngigantesque est de 90 %.\n\nNe sortez sur le pont que lorsque vous serez prêt.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. La\nprobabilité qu'il s'agisse d'un <r<<pling>chronolithe\n>>est de 90 %.\n\nJe vous conseille de trouver un moyen de le\n<g<frapper>>. Il est probable que cela provoque de\ngrands changements dans ce navire.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, je possède une information au sujet de\nl'androïde que vous venez d'affronter.\n\n\nLa probabilité qu'il s'agisse de l'un des <b<pirates >>dont\nparlait le capitaine est de 99 %.\n\n\nLa ténacité dont il a fait preuve pour survivre\npendant toutes ces années est surprenante.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Concernant le nouvel objet\nque vous avez obtenu, l'arc...\n\n\nLa tension de l'arc donne à vos flèches une grande\npuissance d'attaque et il vous permet d'<g<atteindre des\ncibles éloignées>>.\n\nSi vous voulez vérifier son mode de fonctionnement,\nappuyez sur \x0E\x02\x04\x02\x13CD après avoir sorti votre arc avec \x0E\x02\x04\x02\x29CD.\x0E\x01\x11\x02\xBCD\x0E\x01\x11\x02\xFCD")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf("De plus, vous pouvez activer des <r<mécanismes spéciaux\n>>en les frappant d'une flèche.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf("J'ai pu repérer un <r<mécanisme>> de ce type sur le <b<<pling>pont\n>>du navire.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf("Il semble très difficile de l'atteindre d'ici. Je vous\nrecommande de retourner sur le pont.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, regardez en haut.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf("J'ai pu détecter le chronolithe à travers la grille\nd'aération qui se trouve au plafond.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

