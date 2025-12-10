          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "Tu as mis en marche les deux\ngénérateurs! Bzzzt! Passe donc\npar la salle des machines pour\nvenir jusqu'ici.\nViens vite nous libérer! Vrrt!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Tu as mis en marche un générateur!\nMais si tu n'as pas activé <color red<l'autre>coloroff>, tu ne\npourras pas passer dans la salle des\nmachines. Zrrrpt!\nVa donc le mettre en marche et viens\nvite nous sauver. Bzzzt.")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Dépêche‐toi de venir nous libérer. Bzzt!\nCommence par rétablir le <color red<courant dans\nla salle des machines>coloroff>.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00090c00>Ouf! J'ai eu peur! Brrpt!\n\n\n\n<0x10009:0x00030900>Tu es un humain, non? Brrpt?\nComment es‐tu arrivé jusqu'ici?")
          				flw_1:
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Tu es venu avec le <color blue<capitaine >coloroff>pour nous\nsauver? Vrrip! Ça me fait trop plaisir!\n\n\n<0x10009:0x00030900>Mais à cause de ces <color red<barreaux\nélectriques>coloroff>, on peut pas sortir d'ici.")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				wait_frames(60)
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>La salle des machines se trouve\nsous cette cellule... Brrzt.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030900>Tu y trouveras un couloir qui conduit\nde notre côté. Vrmm.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00030900>Mais pour arriver ici en passant par\nla salle des machines, il faut y rétablir\nle <color red<<sound 4>courant>coloroff>. Bzzrt!")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00030900>Tiens<pause 5>.<pause 5>.<pause 5>.\nOn dirait que la salle des machines est\nà nouveau opérationnelle. Vrrrm.\n\n<0x10009:0x00030900>Tu as rétabli le <color red<courant>coloroff>? Bzzzt?\n<0x10009:0x00030900>Je vois. Tu devrais donc pouvoir passer\npar la salle des machines pour\nrejoindre cette cellule! Vrrrm.\n<0x10009:0x00030900>On t'attend!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>Tiens<pause 5>.<pause 5>.<pause 5>.\nEst‐ce que tu aurais mis en marche\nun <color red<générateur>coloroff>? Vrrrm?\n\n<0x10009:0x00030900>Mais tu n'en as activé qu'un.\nIl y a deux <color red<générateurs>coloroff>! Brrt!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00030900>L'autre <color red<générateur>coloroff> est là. Vrrrm.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00030900>On compte sur toi! Bzrrr!")
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
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00030900>Il y a des <color red<générateurs >coloroff>à ces deux\nendroits. Zrrt.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00030900>On compte sur toi! Bzrrr!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00030900>Comment un humain comme toi est\narrivé jusqu'ici? Vrrrpt?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090c00>J'ai peur! Vrriit! Élimine ces monstres\net viens vite nous sauver! Zrrrpt!")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030900>Tu es vraiment venu nous aider?\nJe suis si content! Vrrrm!")
          		flw_15:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00030900>Je vois, tu es venu sur ce bateau pour\ntrouver la <color red<flamme de Nayru>coloroff>. Zrrt?\n\n\n<0x10009:0x00030900>Pour ranimer la <color red<flamme de Nayru>coloroff>, brt,\nil faut d'abord reprendre le contrôle\ndu navire.\n\n<0x10009:0x00030900>La salle de contrôle est à côté de cette\ncellule mais elle est fermée par une\ngrande porte qui nécessite une clé\nspéciale. Pzzt.\n<0x10009:0x00030900>Rends‐toi d'abord dans la <color blue<cabine\ndu capitaine>coloroff>, <sound 4>tu devrais y trouver\nla clé de la salle de contrôle. Vrrm.")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030900>Pour te remercier de nous avoir\nlibérés, je te donne cette <color yellow<clé>coloroff>. Vrrm!\n\n\n<0x10009:0x00030900>Avec cette <color red<clé>coloroff>, vrrrt, tu pourras entrer\ndans la <color blue<cabine du capitaine>coloroff>.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00030900>Brrt. On peut accéder à la cabine\ndu capitaine en passant par une\nporte à la poupe du bateau.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00030900>Bon, nous, on déguerpit! Brrzt!\n\n\n\n<0x10009:0x00030900>Désolé, mais il va falloir que tu te\ndébrouilles tout seul pour la suite.\nTu vas bien t'en tirer, brrt!")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		wait_frames(30)
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030900>Il me semble qu'on se connaît, vrrrm?\n<0x10009:0x00030900>Tu es l'humain sans cœur qui a pas\nvoulu nous sauver tout à l'heure!\n\n<0x10009:0x00030900>Comment es‐tu arrivé jusqu'ici?")
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00030900>.<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Tu es venu avec le <color blue<capitaine >coloroff>pour nous\naider? Merci!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00030900>Tu es un humain... Vrrrm?\nComment es‐tu arrivé jusqu'ici?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00030900><0x30001:0x><heroname>! Bravo! Vrrriit!")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00030900>Vrrrm! Mon navire a retrouvé toute sa\nsplendeur! Ça fait plaisir à voir!\n\n\n<0x10009:0x00030900>Maintenant, il faudrait que tu libères\nles <color blue<membres de mon équipage>coloroff>. Brrzt!\n\n\n<0x10009:0x00030900>Il y a une <color blue<<color blue<<sound 4><color blue<cellule>coloroff> dans le navire, ils\ndoivent y être détenus. Vrrt.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030900>Moi, j'ai trop peur, je vais attendre\ndans le bateau. Vrrrt.\n\n\n<0x10009:0x00030900>J'compte sur toi! Brrrzt!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	wait_frames(30)
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf(/* textboxtype: 2, unk: 0, line: 35 */ "<0x10012:0x0000000b>Maître, Fay au rapport.\nIl est probable que ces <color red<tentacules>coloroff>\nappartiennent à un monstre\ngigantesque.\nIl est difficile d'évaluer la situation\ndans ces conditions, mais il semble\nque ce navire soit attaqué.\n\nLa probabilité que ce navire sombre si\nvous n'agissez pas est de 80 %.\n\n\nServez‐vous de la <color red<<sound 4>force sacrée>coloroff> pour\nvous frayer un chemin jusqu'à la sortie\net analyser la situation.")
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
/*< 70>*/ 				printf(/* textboxtype: 2, unk: 0, line: 37 */ "<0x10012:0x00000001>Maître, la salle des machines est à\nprésent complètement opérationnelle.\n\n\nJe vous conseille de rejoindre la cellule\nau plus vite en passant par la salle des\nmachines pour aller <color green<libérer>coloroff> l'équipage.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf(/* textboxtype: 2, unk: 0, line: 36 */ "<0x10012:0x00000001>Maître, comme l'avait dit le matelot, la\nsalle des machines est opérationnelle.\n\n\nMais enclencher un <color red<générateur>coloroff> ne\nsuffit pas pour ouvrir complètement\nle couloir qui mène à la cellule.\n\nJe vous conseille de vous rendre au\nsecond <color red<générateur >coloroff>au plus vite.")
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
/*< 68>*/ 				printf(/* textboxtype: 2, unk: 0, line: 39 */ "<0x10012:0x00000001>Maître, j'ai ressenti une nouvelle\nsecousse.\n\n\nJ'ignore les détails, mais je vous\nconseille d'aller libérer les <color blue<<color blue<matelots\n<color blue<captifs>coloroff> au plus vite.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10012:0x00000001>Maître, j'ai ressenti une forte\nsecousse.\n\n\nIl est probable qu'en activant cet\nappareil, une sorte de mécanisme se\nsoit mis en marche dans le navire.\n\nJ'ignore les détails, mais je vous\nconseille d'aller libérer les <color blue<<color blue<matelots\n<color blue<captifs>coloroff> au plus vite.")
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
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0, line: 40 */ "<0x10012:0x00000001>Maître, selon mes conclusions, ceci est\nla <color yellow<<sound 4>clé>coloroff> qui ouvre la salle de contrôle\ndont parlait le matelot.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf(/* textboxtype: 2, unk: 0, line: 41 */ "Ma mémoire indique que la <color blue<porte \n>coloroff>se trouve à l'endroit marqué d'une (X).")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf(/* textboxtype: 2, unk: 0, line: 42 */ "Je vous conseille de vous rendre à la\n<color blue<salle de contrôle >coloroff>au plus vite.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x00000001>Maître, regardez.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf(/* textboxtype: 2, unk: 0, line: 44 */ "Il y a ici une grande porte.\nToutefois, elle semble verrouillée.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf(/* textboxtype: 2, unk: 0, line: 45 */ "Il est probable que ce soit la porte\nd'une pièce importante.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 2, unk: 0, line: 46 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au\nrapport.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf(/* textboxtype: 2, unk: 0, line: 47 */ "Je ressens une présence maléfique\nderrière cette porte.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf(/* textboxtype: 2, unk: 0, line: 48 */ "La probabilité que les tentacules qui\ndétruisent le navire soient en fait les\nmembres d'une créature gigantesque\nest de 90 %.\nNe sortez sur le pont que lorsque vous\nserez prêt.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	wait_frames(15)
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf(/* textboxtype: 2, unk: 0, line: 49 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au\nrapport. La probabilité qu'il s'agisse\nd'un <color red<<color red<<sound 4><color red<chronolithe >coloroff>est de 90 %.\n\nJe vous conseille de trouver un moyen\nde le <color green<frapper>coloroff>. Il est probable que cela\nprovoque de grands changements dans\nce navire.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0, line: 50 */ "<0x10012:0x00000001>Maître, je possède une information au\nsujet de l'androïde que vous venez\nd'affronter.\n\nLa probabilité qu'il s'agisse de l'un\ndes <color blue<pirates>coloroff> dont parlait le capitaine\nest de 99 %.\n\nLa ténacité dont il a fait preuve pour\nsurvivre pendant toutes ces années\nest surprenante.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf(/* textboxtype: 2, unk: 0, line: 52 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nConcernant le nouvel objet que vous\navez obtenu, l'arc...\nLa tension de l'arc donne à vos flèches\nune grande puissance d'attaque et il\nvous permet d'<color green<atteindre des cibles\néloignées>coloroff>.\nSi vous voulez vérifier son mode de\nfonctionnement, appuyez sur (2) après\navoir sorti votre arc avec (B).<0x10011:0x01cd><0x10011:0x05cd>")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf(/* textboxtype: 2, unk: 0, line: 53 */ "De plus, vous pouvez activer des\n<color red<mécanismes spéciaux>coloroff> en les frappant\nd'une flèche.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "J'ai pu repérer un <color red<mécanisme>coloroff> \nde ce type sur le <color blue<<sound 4>pont>coloroff> du navire.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0, line: 51 */ "Il semble très difficile de l'atteindre\nd'ici. Je vous recommande de\nretourner sur le pont.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 2, unk: 0, line: 55 */ "<0x10012:0x00000001>Maître, regardez en haut.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0, line: 56 */ "J'ai pu détecter le chronolithe\nà travers la grille d'aération\nqui se trouve au plafond.\n\nIl devrait être possible de l'atteindre\nà travers la grille à l'aide d'un\npetit projectile comme une flèche.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

