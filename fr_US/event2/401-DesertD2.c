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
/*<104>*/ 				printf("Tu as mis en marche les deux\ngénérateurs! Bzzzt! Passe donc\npar la salle des machines pour\nvenir jusqu'ici.\nViens vite nous libérer! Vrrt!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf("Tu as mis en marche un générateur!\nMais si tu n'as pas activé <r<l'autre>>, tu ne\npourras pas passer dans la salle des\nmachines. Zrrrpt!\nVa donc le mettre en marche et viens\nvite nous sauver. Bzzzt.")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf("Dépêche\x2010toi de venir nous libérer. Bzzt!\nCommence par rétablir le <r<courant dans\nla salle des machines>>.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x09\xC00Ouf! J'ai eu peur! Brrpt!\n\n\n\n\x0E\x01\x09\x04\x03\x900Tu es un humain, non? Brrpt?\nComment es\x2010tu arrivé jusqu'ici?")
          				flw_1:
/*<  1>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Tu es venu avec le <b<capitaine >>pour nous\nsauver? Vrrip! Ça me fait trop plaisir!\n\n\n\x0E\x01\x09\x04\x03\x900Mais à cause de ces <r<barreaux\nélectriques>>, on peut pas sortir d'ici.")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 32, 'param3': 6}
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900La salle des machines se trouve\nsous cette cellule... Brrzt.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x03\x900Tu y trouveras un couloir qui conduit\nde notre côté. Vrmm.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x03\x900Mais pour arriver ici en passant par\nla salle des machines, il faut y rétablir\nle <r<<pling>courant>>. Bzzrt!")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x03\x900Tiens<pause05>.<pause05>.<pause05>.\nOn dirait que la salle des machines est\nà nouveau opérationnelle. Vrrrm.\n\n\x0E\x01\x09\x04\x03\x900Tu as rétabli le <r<courant>>? Bzzzt?\n\x0E\x01\x09\x04\x03\x900Je vois. Tu devrais donc pouvoir passer\npar la salle des machines pour\nrejoindre cette cellule! Vrrrm.\n\x0E\x01\x09\x04\x03\x900On t'attend!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf("\x0E\x01\x09\x04\x03\x900Tiens<pause05>.<pause05>.<pause05>.\nEst\x2010ce que tu aurais mis en marche\nun <r<générateur>>? Vrrrm?\n\n\x0E\x01\x09\x04\x03\x900Mais tu n'en as activé qu'un.\nIl y a deux <r<générateurs>>! Brrt!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf("\x0E\x01\x09\x04\x03\x900L'autre <r<générateur>> est là. Vrrrm.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf("\x0E\x01\x09\x04\x03\x900On compte sur toi! Bzrrr!")
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
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x03\x900Il y a des <r<générateurs >>à ces deux\nendroits. Zrrt.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x03\x900On compte sur toi! Bzrrr!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x03\x900Comment un humain comme toi est\narrivé jusqu'ici? Vrrrpt?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x09\xC00J'ai peur! Vrriit! Élimine ces monstres\net viens vite nous sauver! Zrrrpt!")
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
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x03\x900Tu es vraiment venu nous aider?\nJe suis si content! Vrrrm!")
          		flw_15:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x03\x900Je vois, tu es venu sur ce bateau pour\ntrouver la <r<flamme de Nayru>>. Zrrt?\n\n\n\x0E\x01\x09\x04\x03\x900Pour ranimer la <r<flamme de Nayru>>, brt,\nil faut d'abord reprendre le contrôle\ndu navire.\n\n\x0E\x01\x09\x04\x03\x900La salle de contrôle est à côté de cette\ncellule mais elle est fermée par une\ngrande porte qui nécessite une clé\nspéciale. Pzzt.\n\x0E\x01\x09\x04\x03\x900Rends\x2010toi d'abord dans la <b<cabine\ndu capitaine>>, <pling>tu devrais y trouver\nla clé de la salle de contrôle. Vrrm.")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf("\x0E\x01\x09\x04\x03\x900Pour te remercier de nous avoir\nlibérés, je te donne cette <y<clé>>. Vrrm!\n\n\n\x0E\x01\x09\x04\x03\x900Avec cette <r<clé>>, vrrrt, tu pourras entrer\ndans la <b<cabine du capitaine>>.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf("\x0E\x01\x09\x04\x03\x900Brrt. On peut accéder à la cabine\ndu capitaine en passant par une\nporte à la poupe du bateau.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x03\x900Bon, nous, on déguerpit! Brrzt!\n\n\n\n\x0E\x01\x09\x04\x03\x900Désolé, mais il va falloir que tu te\ndébrouilles tout seul pour la suite.\nTu vas bien t'en tirer, brrt!")
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
/*<123>*/ 			printf("\x0E\x01\x09\x04\x03\x900Il me semble qu'on se connaît, vrrrm?\n\x0E\x01\x09\x04\x03\x900Tu es l'humain sans c\x153ur qui a pas\nvoulu nous sauver tout à l'heure!\n\n\x0E\x01\x09\x04\x03\x900Comment es\x2010tu arrivé jusqu'ici?")
          			flw_125:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x03\x900.<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Tu es venu avec le <b<capitaine >>pour nous\naider? Merci!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x03\x900Tu es un humain... Vrrrm?\nComment es\x2010tu arrivé jusqu'ici?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x03\x900\x0E\x03\x01\x00Link! Bravo! Vrrriit!")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x03\x900Vrrrm! Mon navire a retrouvé toute sa\nsplendeur! Ça fait plaisir à voir!\n\n\n\x0E\x01\x09\x04\x03\x900Maintenant, il faudrait que tu libères\nles <b<membres de mon équipage>>. Brrzt!\n\n\n\x0E\x01\x09\x04\x03\x900Il y a une <b<<b<<pling><b<cellule>> dans le navire, ils\ndoivent y être détenus. Vrrt.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x03\x900Moi, j'ai trop peur, je vais attendre\ndans le bateau. Vrrrt.\n\n\n\x0E\x01\x09\x04\x03\x900J'compte sur toi! Brrrzt!")
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
/*< 52>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\nIl est probable que ces <r<tentacules>>\nappartiennent à un monstre\ngigantesque.\nIl est difficile d'évaluer la situation\ndans ces conditions, mais il semble\nque ce navire soit attaqué.\n\nLa probabilité que ce navire sombre si\nvous n'agissez pas est de 80 %.\n\n\nServez\x2010vous de la <r<<pling>force sacrée>> pour\nvous frayer un chemin jusqu'à la sortie\net analyser la situation.")
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
/*< 70>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, la salle des machines est à\nprésent complètement opérationnelle.\n\n\nJe vous conseille de rejoindre la cellule\nau plus vite en passant par la salle des\nmachines pour aller <g<libérer>> l'équipage.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, comme l'avait dit le matelot, la\nsalle des machines est opérationnelle.\n\n\nMais enclencher un <r<générateur>> ne\nsuffit pas pour ouvrir complètement\nle couloir qui mène à la cellule.\n\nJe vous conseille de vous rendre au\nsecond <r<générateur >>au plus vite.")
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
/*< 68>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, j'ai ressenti une nouvelle\nsecousse.\n\n\nJ'ignore les détails, mais je vous\nconseille d'aller libérer les <b<<b<matelots\n<b<captifs>> au plus vite.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, j'ai ressenti une forte\nsecousse.\n\n\nIl est probable qu'en activant cet\nappareil, une sorte de mécanisme se\nsoit mis en marche dans le navire.\n\nJ'ignore les détails, mais je vous\nconseille d'aller libérer les <b<<b<matelots\n<b<captifs>> au plus vite.")
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
/*< 76>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, selon mes conclusions, ceci est\nla <y<<pling>clé>> qui ouvre la salle de contrôle\ndont parlait le matelot.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf("Ma mémoire indique que la <b<porte \n>>se trouve à l'endroit marqué d'une \x0E\x02\x04\x02\x19CD.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf("Je vous conseille de vous rendre à la\n<b<salle de contrôle >>au plus vite.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, regardez.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf("Il y a ici une grande porte.\nToutefois, elle semble verrouillée.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf("Il est probable que ce soit la porte\nd'une pièce importante.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf("Je ressens une présence maléfique\nderrière cette porte.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf("La probabilité que les tentacules qui\ndétruisent le navire soient en fait les\nmembres d'une créature gigantesque\nest de 90 %.\nNe sortez sur le pont que lorsque vous\nserez prêt.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport. La probabilité qu'il s'agisse\nd'un <r<<r<<pling><r<chronolithe >>est de 90 %.\n\nJe vous conseille de trouver un moyen\nde le <g<frapper>>. Il est probable que cela\nprovoque de grands changements dans\nce navire.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, je possède une information au\nsujet de l'androïde que vous venez\nd'affronter.\n\nLa probabilité qu'il s'agisse de l'un\ndes <b<pirates>> dont parlait le capitaine\nest de 99 %.\n\nLa ténacité dont il a fait preuve pour\nsurvivre pendant toutes ces années\nest surprenante.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\nConcernant le nouvel objet que vous\navez obtenu, l'arc...\nLa tension de l'arc donne à vos flèches\nune grande puissance d'attaque et il\nvous permet d'<g<atteindre des cibles\néloignées>>.\nSi vous voulez vérifier son mode de\nfonctionnement, appuyez sur (2) après\navoir sorti votre arc avec (B).\x0E\x01\x11\x02\x1CD\x0E\x01\x11\x02\x5CD")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf("De plus, vous pouvez activer des\n<r<mécanismes spéciaux>> en les frappant\nd'une flèche.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf("J'ai pu repérer un <r<mécanisme>> \nde ce type sur le <b<<pling>pont>> du navire.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf("Il semble très difficile de l'atteindre\nd'ici. Je vous recommande de\nretourner sur le pont.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, regardez en haut.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf("J'ai pu détecter le chronolithe\nà travers la grille d'aération\nqui se trouve au plafond.\n\nIl devrait être possible de l'atteindre\nà travers la grille à l'aide d'un\npetit projectile comme une flèche.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

