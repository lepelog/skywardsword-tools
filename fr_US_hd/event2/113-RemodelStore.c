          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<queues de lézard>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut obtenir des <color yellow<queues de lézard >coloroff>en éliminant\ndes monstres qui ressemblent à... des lézards.")
/*<178>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000e0e0c>Hé, garçon! Désolé mais t'as pas assez de\n<color yellow<minerai d'Ordinn>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve le <color yellow<minerai d'Ordinn >coloroff>sous terre sur une\nmontagne de feu.")
/*<187>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Il semblerait que t'aies pas\nassez de <color yellow<fleurs anciennes>coloroff>!\n\n\nOn dit que les <color yellow<fleurs anciennes >coloroff>poussaient jadis\ndans le désert. C'est la plante que j'ai utilisée\npour réparer Récupix.")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez de\n<color yellow<fleurs anciennes>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que les\n<color yellow<fleurs anciennes>coloroff> fleurissaient autrefois sur les\nterres de sable. Je me demande si elles existent\nencore...")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 18, unk: 0, line: 114 */ "<0x10009:0x00000003>Hé, mon garçon! Comment va mon Récupix?\nEn passant, as-tu besoin d'une amélioration?\n[1-]Améliorer[2-]Réparer[3]Non merci")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000009>Parfait! Voici les objets que j'peux améliorer\nen ce moment.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hé, mon garçon! T'as rien à faire améliorer...\n\n\n\nVa voir Rupin à l'armurerie. Il va se faire un\nplaisir de te vendre quelque chose!")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000009>Alors, qu'est‐ce que tu veux que je répare,\nau juste?")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x000e0e0c>Hein? Mais t'as pas de bouclier qui a besoin\nd'être réparé! Voyons!\n\n\nT'as pas autre chose à faire que de déranger\nun bon ouvrier comme moi? J'essaie de gagner\nma vie, ici, mon garçon!")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000e0e0c>Bien, là... Pourquoi tu viens me parler, d'abord?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 19, unk: 0, line: 111 */ "<0x10009:0x00001104>Bon, occupe‐toi bien de mon <color blue<Récupix>coloroff>! Au fait,\nil peut détecter les ondes cérébrales émises par\nles gens...\n\n<0x10009:0x00080700>Ce qui veut dire qu'il peut te retrouver où\nque tu sois, mon garçon! Et vite, à part ça.\n\n\nIl n'est pas très poli, mais s'il est de bonne\nhumeur, il fera du bon travail! <pause 30>Bon, je\npense que j'parle trop!")
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 17, line: 112 */ "<0x10009:0x00070700>Alors, qu'est‐ce que je t'améliore, aujourd'hui?\nOu bien j'peux te réparer un bouclier?\n[1-]Améliorer[2-]Réparer[3]Rien, merci")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 18, line: 97 */ "<0x10009:0x00000003>Hé, mon garçon! Mais qu'est-ce que t'as?\nAs-tu quelque chose à me dire?\n\n\nAvoue, t'as un service à me demander!\nC'est ça, hein?\n[1-]Oui[2]Non")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000001>Pour rafistoler <color blue<Récupix>coloroff>, il me faut une <color yellow<fleur\nancienne>coloroff>! Mais je sais pas où on peut\nen trouver...\n\n[1-]J'en ai une[2]Moi non plus")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 19, unk: 0, line: 102 */ "<0x10009:0x00070717>HEIN? T'en as une? Quelle coïncidence!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x000e0e0c>Mon garçon<0x10006:0xfdcd>...<0x10006:0x00cd> Fais pas semblant d'en avoir une.\nJe ne suis pas né de la dernière pluie.")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf(/* textboxtype: 18, unk: 0, line: 108 */ "<0x10009:0x00000018>Wow! C'est ça, la <color yellow<fleur ancienne>coloroff>? Ouais,\non dirait qu'il y a une sorte d'huile qui\ns'écoule de la racine!\n\nJ'devrais pouvoir réparer <color blue<Récupix >coloroff>avec ça!\n\n\n\n<0x10009:0x00070700>Bouge pas, j'essaie tout de suite!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 17, line: 103 */ "<0x10009:0x000f0916>C'est bien ce que je pensais... Personne ne\nconnaît cette <color yellow<fleur ancienne>coloroff>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00101008><pause 40>Hein? Le robot de papi?\n\n\n\n<0x10009:0x00000e00>C'est encore une de tes blagues que personne\ncomprend, c'est ça?\n\n\nHein? C'est sérieux?<pause 40> Tu veux ramener\nquelque chose depuis en dessous des\nnuages avec le robot?\n\n<0x10009:0x00070700>Mais alors tu crois à l'histoire de mon papi,\nmon garçon?")
/*< 53>*/ 						printf(/* textboxtype: 18, unk: 0, line: 99 */ "<0x10009:0x000d0900>Ça me fait bien plaisir, mais... J'crois que\nle robot... comment il s'appelait déjà? Il\nn'est pas vraiment en état de te dépanner...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 19, line: 100 */ "Ah, oui! Je me souviens! Papi l'avait baptisé\n<color blue<Récupix>coloroff>. J'avoue qu'il n'a l'air de rien, juste\nà le regarder, comme ça, mais...\n\nIl a déjà été exceptionnel. Quand on l'appelait,\nil nous suivait partout et il pouvait\ntransporter n'importe quoi.\n\nMais bon<0x10006:0xffcd>...<0x10006:0x00cd> Comme tu vois, il ressemble\nplutôt à un tas de ferraille...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x000d0e00>Si j'en crois l'histoire de papi, il aurait besoin\nd'une huile extraite d'une <color yellow<fleur ancienne>coloroff>.\n\n\n<0x10009:0x000f0e00>J'en ai jamais vu dans le coin, ni même\nentendu parler...\n[1-]La voici[2]Moi non plus")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>Hé! Ici, c'est l'atelier de rénovation. Je suis\ncapable d'améliorer tes objets et de les rendre\nplus performants.\n\nJ'peux aussi réparer ton bouclier s'il est\nendommagé. Alors, qu'est‐ce que j'peux\nfaire pour toi?\n\n[1-]Améliorer[2-]Réparer[3]Rien")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez de\n<color yellow<perles d'ambre>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que les\n<color yellow<perles d'ambre>coloroff> sont un trésor assez commun\nqu'on trouve un peu partout.")
/*<193>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00080806>Je t'avertis, les modifications sont définitives!\nEs-tu bien certain?\n[1-]Oui, M'sieur[2]Euh, non")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Parfait! Ça ne sera pas long.")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>Tiens, c'est prêt!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000e0e05>Cout'donc, t'es cassé! Choisis autre chose,\nd'abord!")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<perles d'ombre>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve les <color yellow<perles d'ombre>coloroff> dans des mondes\nspirituels. J'ai aucune idée de ce que ça\nveut dire.")
/*<198>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080800>Merci bien! Reviens me voir!<0x10009:0x00000002>")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf(/* textboxtype: 19, unk: 0, line: 129 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nLa puissance de votre épée ayant augmenté, vous\npouvez à présent <color red<détecter>coloroff> les <color red<trésors>coloroff>.\n\n\nJ'ai ajouté les <color red<trésors>coloroff> à la fonction <color red<détection>coloroff>.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x0009090d>Attends donc, un peu... T'as changé d'idée?\nT'es pas reposant, toi!\n\n\n<0x10009:0x00ffff00>Bon, ça va. À la prochaine, mon garçon!<0x10009:0x00000002>")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10012:0x00000065><0x10009:0x0000000f>Fiou<0x10006:0xfccd>...<0x10006:0x00cd> Ça y est!<0x10005:0x001e0000>")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé mais t'as pas assez\nde <color yellow<gélatibulles>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut trouver des <color yellow<gélatibulles>coloroff> en éliminant\ndes monstres mous.")
/*<207>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Si tu veux faire améliorer autre chose, gêne-toi\nsurtout pas!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "On dirait que t'as rien à faire améliorer...\nReviens plus tard!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x161a0200>BZZZZRT! Jauge de vitalité au maximum!\nPrêt à transporter! BRRRRM!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 18, unk: 0, line: 117 */ "<pause 30><0x10009:0x160c0900>Mais...<pause 30> Au fait, qui c'est ce personnage\ntout-de-vert-vêtu?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 19, line: 109 */ "<0x10009:0x0008110a>HEIN? Il a parlé! Je l'ai bien réparé, on dirait!\n\n\n\nHé, ce garçon m'a rapporté tout ce qu'il fallait\npour te réparer. Montre un peu de gratitude,\ntout de même!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 19, line: 118 */ "<0x10009:0x160b0900>...Hmmmzzt. Lui? Ce lutin? Sûr? grrzzzt?\n\n\n\n<0x10009:0x160c0900>Bon, d'accord. Vrrrrt. <pause 10>Sincères remerciements.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00090952>Hé oh! Surveille un peu ton langage quand\ntu t'adresses à ton sauveur!\n\n\n<0x10009:0x00070700>Bon, en tout cas, il a besoin de ton aide pour\nporter quelque chose, alors rends‐lui service,\nveux‐tu?")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x160b0900>Hmm. Sauveur ou pas sauveur, je suis pas\nd'humeur. Zrrt.\n\n\n<0x10009:0x160c0900>J'ai des choses plus importantes à faire que\nde servir un enfant. Dzzt!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10012:0x00000001>Maître.\n\n\n\nVous pouvez à présent <sound 4><color red<détecter >coloroff>l'<color red<hélice >coloroff>qui est\ntombée sur terre depuis le moulin.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 18, unk: 0, line: 126 */ "Cependant, il est très peu probable que vous\npuissiez la mettre dans votre sacoche et\nl'emporter avec vous.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf(/* textboxtype: 19, unk: 0, line: 120 */ "<0x10009:0x161a0200>Vzzzt! <0x10009:0x160e0200>...ZRRPT-PFOOOZT!!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 0, unk: 17, line: 121 */ "<0x10009:0x160e0200>Tu... tu t'appelles Fay? Mam'selle Fay, c'est ça,\nbzzt? Qu'est‐ce que tu cherches, dzztzzat?")
/*<116>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x160c0200>En‐<pause 20>Entendu! Vrrt!\n\n\n\n<0x10009:0x160e0200>Pour toi, je porterai n'importe quoi de\nn'importe quel poids dans n'importe\nquelle direction! Whizzt!")
/*< 87>*/ 	printf(/* textboxtype: 0, unk: 19, line: 127 */ "<0x10006:0xfccd><0x10012:0x00000014>...<0x10006:0x00cd>")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10012:0x00000001>Maître.\n\n\n\nVous avez trouvé un moyen de transporter l'hélice\ndepuis la terre jusqu'à Célesbourg.\n\n\nVous pouvez à présent partir chercher l'<color blue<hélice\ndu moulin>coloroff>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 18, unk: 0, line: 123 */ "<0x10009:0x160c0200>C'est bon, Maître en vert, j'ai décidé de t'aider,\nbzzt! J'ai enregistré les ondes émises par\nmam'selle Fay, vrrt!\n\n<0x10009:0x160e0200>Il suffira de lui demander de m'appeler\nquand tu auras besoin de moi, bzzat!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf(/* textboxtype: 0, unk: 18, line: 115 */ "<0x10009:0x00070700>Mouais, as-tu songé à ce que tu allais faire\npour récupérer tout ce qui est tombé sous\nles nuages? Ça risque d'être compliqué.\n\nHmm, tu pourrais peut‐être demander au\n<color red<diseur de bonne aventure >coloroff>juste là...\n\n\nIl a l'air un peu excentrique, mais il est\nplutôt doué quand il s'agit de trouver\nquelque chose.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<griffes de monstre>coloroff>.\n\n\nOn peut trouver des <color yellow<griffes de monstre >coloroff>en\néliminant des monstres volants. Ici aussi,\nla nuit, il y a des monstres qui volent...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100e11>Maintenant que j'y pense, on en voit plus trop\nces temps‐ci... Les nuits sont plus calmes!")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000e0e0c>Hé, garçon! T'as pas les trésors qu'il faut pour\naméliorer ça!\n\n\n<0x10009:0x00070700>Allez, choisis donc autre chose à améliorer.")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000e0e0c>Hé, mon garçon! T'as pas les rubis qu'il faut,\ntu comprends? Je travaille pas pour rien, moi!\n\n\n<0x10009:0x00070700>Choisis donc autre chose à améliorer.")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<cors de monstre>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut arracher les <color yellow<cors de monstre >coloroff>à leur\npropriétaire à l'aide d'une certaine arme...")
/*<213>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hé, mon garçon! T'as rien à faire améliorer...\n\n\n\nVa voir Rupin à l'armurerie. Il va se faire un\nplaisir de te vendre quelque chose!")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<crânes décoratifs>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve des <color yellow<crânes décoratifs >coloroff>en éliminant\ndes monstres qui attaquent avec des massues\net d'autres armes.")
/*<218>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00080800>J'te répare ça tout de suite! Ça fera <color red<10 rubis>coloroff>.\n[1-]Ça marche[2]Non merci")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Parfait! Ça ne sera pas long.")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>Tiens, c'est prêt!")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e0c>Hé, mon garçon! T'as pas assez de rubis pour\nme payer! Va casser ton cochon et reviens!")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Ah, t'es pas intéressé? Je pourrais te réparer\nun autre bouclier...")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<cristaux maléfiques>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut trouver des <color yellow<cristaux maléfiques >coloroff>en\néliminant des monstres des ténèbres.")
/*<227>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00080800>Hé, mon garçon! J'te répare un autre bouclier?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00080800>Hé, mon garçon! T'as plus de bouclier qui a\nbesoin d'être réparé! Reviens donc plus tard!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<plumes bleues>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve des <color yellow<plumes bleues >coloroff>dans un endroit\nverdoyant en attrapant des petits oiseaux\nbleus avec un filet.")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<crânes d'or>coloroff>.\n\n\nIl paraît que les <color yellow<crânes d'or >coloroff>sont des crânes\ndécoratifs tout dorés et qu'ils sont assez rares.")
/*<233>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé mais t'as pas assez\nde <color yellow<poussières de Déesse>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que les\n<color yellow<poussières de Déesses>coloroff> sont très précieuses et\nque c'est très rare d'en trouver.")
/*<238>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<larves de guêpes>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut obtenir des <color yellow<larves de guêpes >coloroff>à partir de\nnids de guêpes qu'on trouve dans des contrées\nverdoyantes.")
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<plumes d'oiseau>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve des <color yellow<plumes d'oiseau >coloroff>dans un endroit\nverdoyant en attrapant des petits oiseaux\navec un filet.")
/*<168>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000e0e0c>Hé, mon garçon! Désolé, mais t'as pas assez\nde <color yellow<virevoltants>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que les\n<color yellow<virevoltants>coloroff> sont des boules d'herbe qui roulent\ndans le désert. On peut les attraper avec\nun filet.")
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>As‐tu autre chose à faire améliorer?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

