          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé mais t'as\npas assez de <y<queues de lézard>>.\n\n\nDans les bouquins de mon papi, on\ndit qu'on peut obtenir des <y<queues de\nlézard >>en éliminant des monstres qui\nressemblent à... des lézards.")
/*<178>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé mais t'as pas assez\nde <y<minerai d'Ordinn>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve le <y<minerai d'Ordinn >>sous\nterre sur une montagne de feu.")
/*<187>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Il semblerait que\nt'aies pas assez de <y<fleurs anciennes>>!\n\n\nOn dit que les <y<fleurs anciennes>>\npoussaient jadis dans le désert.\nC'est la plante que j'ai utilisée\npour réparer Récupix.")
          		flw_188:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<fleurs anciennes>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<fleurs anciennes>> fleurissaient\nautrefois sur les terres de sable. Je me\ndemande si elles existent encore...")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hé, mon garçon! Comment va mon\nRécupix? En passant, as-tu besoin\nd'une amélioration?\n[1]Améliorer[2]Réparer[3-]Non merci")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x09Parfait! Voici les objets que j'peux\naméliorer en ce moment.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! T'as rien à faire\naméliorer...\n\n\nVa voir Rupin à l'armurerie. Il va se\nfaire un plaisir de te vendre quelque\nchose!")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x09\x04\x00\x09Alors, qu'est\x2010ce que tu veux que je\nrépare, au juste?")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CHein? Mais t'as pas de bouclier qui\na besoin d'être réparé! Voyons!\n\n\nT'as pas autre chose à faire que de\ndéranger un bon ouvrier comme moi?\nJ'essaie de gagner ma vie, ici, mon\ngarçon!")
          			}
          		  case 2:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CBien, là... Pourquoi tu viens me parler,\nd'abord?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Bon, occupe\x2010toi bien de mon <b<Récupix>>!\nAu fait, il peut détecter les ondes\ncérébrales émises par les gens...\n\n\x0E\x01\x09\x04\x08\x700Ce qui veut dire qu'il peut te retrouver\noù que tu sois, mon garçon! Et vite, à\npart ça.\n\nIl n'est pas très poli, mais s'il est de\nbonne humeur, il fera du bon travail!\n<pause1E>Bon, je pense que j'parle trop!")
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x07\x700Alors, qu'est\x2010ce que je t'améliore,\naujourd'hui? Ou bien j'peux te\nréparer un bouclier?\n[1]Améliorer[2]Réparer[3-]Rien, merci")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x03Hé, mon garçon! Mais qu'est-ce que\nt'as? As-tu quelque chose à me dire?\n\n\nAvoue, t'as un service à me\ndemander! C'est ça, hein?\n[1]Oui[2-]Non")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x01Pour rafistoler <b<Récupix>>, il me faut une\n<y<fleur ancienne>>! Mais je sais pas où on\npeut en trouver...\n\n[1]J'en ai une[2-]Moi non plus")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf("\x0E\x01\x09\x04\x07\x717HEIN? T'en as une?\nQuelle coïncidence!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf("\x0E\x01\x09\x04\x0E\xE0CMon garçon\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Fais pas semblant\nd'en avoir une. Je ne suis pas né\nde la dernière pluie.")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf("\x0E\x01\x09\x04\x00\x18Wow! C'est ça, la <y<fleur ancienne>>?\nOuais, on dirait qu'il y a une sorte\nd'huile qui s'écoule de la racine!\n\nJ'devrais pouvoir réparer <b<Récupix\n>>avec ça!\n\n\n\x0E\x01\x09\x04\x07\x700Bouge pas, j'essaie tout de suite!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf("\x0E\x01\x09\x04\x0F\x916C'est bien ce que je pensais...\nPersonne ne connaît cette <y<fleur\nancienne>>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x10\x1008<pause28>Hein? Le robot de papi?\n\n\n\n\x0E\x01\x09\x04\x00\xE00C'est encore une de tes blagues que\npersonne comprend, c'est ça?\n\n\nHein? C'est sérieux ?<pause28> Tu veux\nramener quelque chose depuis en\ndessous des nuages avec le robot?\n\n\x0E\x01\x09\x04\x07\x700Mais alors tu crois à l'histoire de mon\npapi, mon garçon?")
/*< 53>*/ 						printf("\x0E\x01\x09\x04\x0D\x900Ça me fait bien plaisir, mais... J'crois\nque le robot... comment il s'appelait\ndéjà? Il n'est pas vraiment en état\nde te dépanner...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf("Ah, oui! Je me souviens! Papi l'avait\nbaptisé <b<Récupix>>. J'avoue qu'il n'a l'air\nde rien, juste à le regarder, comme ça,\nmais...\nIl a déjà été exceptionnel. Quand on\nl'appelait, il nous suivait partout et il\npouvait transporter n'importe quoi.\n\nMais bon\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í Comme tu vois, il ressemble\nplutôt à un tas de ferraille...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf("\x0E\x01\x09\x04\x0D\xE00Si j'en crois l'histoire de papi, il aurait\nbesoin d'une huile extraite d'une <y<fleur\nancienne>>.\n\n\x0E\x01\x09\x04\x0F\xE00J'en ai jamais vu dans le coin, ni même\nentendu parler...\n[1]La voici[2-]Moi non plus")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hé! Ici, c'est l'atelier de rénovation.\nJe suis capable d'améliorer tes objets\net de les rendre plus performants.\n\nJ'peux aussi réparer ton bouclier s'il\nest endommagé. Alors, qu'est\x2010ce que\nj'peux faire pour toi?\n\n[1]Améliorer[2]Réparer[3-]Rien")
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
/*<192>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<perles d'ambre>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<perles d'ambre>> sont un trésor\nassez commun qu'on trouve un peu\npartout.")
/*<193>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x08\x806Je t'avertis, les modifications sont\ndéfinitives! Es-tu bien certain?\n[1]Oui, M'sieur[2-]Euh, non")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x07\x70EParfait! Ça ne sera pas long.")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf("\x0E\x01\x09\x04\x08\x809Tiens, c'est prêt!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05Cout'donc, t'es cassé!\nChoisis autre chose, d'abord!")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<perles d'ombre>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve les <y<perles d'ombre>> dans\ndes mondes spirituels. J'ai aucune idée\nde ce que ça veut dire.")
/*<198>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x08\x800Merci bien! Reviens me voir!\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nLa puissance de votre épée ayant\naugmenté, vous pouvez à présent\n<r<détecter>> les <r<trésors>>.\n\nJ'ai ajouté les <r<trésors>> à la fonction\n<r<détection>>.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x09\x90DAttends donc, un peu... T'as changé\nd'idée? T'es pas reposant, toi!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Bon, ça va. À la prochaine, mon garçon!\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf("\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0FFiou\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Ça y est!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé mais t'as\npas assez de <y<gélatibulles>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on peut trouver des <y<gélatibulles>> en\néliminant des monstres mous.")
/*<207>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf("Si tu veux faire améliorer autre chose,\ngêne-toi surtout pas!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf("On dirait que t'as rien à faire\naméliorer... Reviens plus tard!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf("\x0E\x01\x09\x04\x161A\x200BZZZZRT! Jauge de vitalité au\nmaximum! Prêt à transporter!\nBRRRRM!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf("<pause1E>\x0E\x01\x09\x04\x160C\x900Mais...<pause1E> Au fait, qui c'est ce personnage\ntout-de-vert-vêtu?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf("\x0E\x01\x09\x04\x08\x110AHEIN? Il a parlé! Je l'ai bien réparé,\non dirait!\n\n\nHé, ce garçon m'a rapporté tout ce\nqu'il fallait pour te réparer. Montre\nun peu de gratitude, tout de même!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf("\x0E\x01\x09\x04\x160B\x900...Hmmmzzt. Lui? Ce lutin? Sûr?\ngrrzzzt?\n\n\n\x0E\x01\x09\x04\x160C\x900Bon, d'accord. Vrrrrt.\n<pause0A>Sincères remerciements.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf("\x0E\x01\x09\x04\x09\x952Hé oh! Surveille un peu ton langage\nquand tu t'adresses à ton sauveur!\n\n\n\x0E\x01\x09\x04\x07\x700Bon, en tout cas, il a besoin de ton\naide pour porter quelque chose,\nalors rends\x2010lui service, veux\x2010tu?")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Hmm. Sauveur ou pas sauveur,\nje suis pas d'humeur. Zrrt.\n\n\n\x0E\x01\x09\x04\x160C\x900J'ai des choses plus importantes à\nfaire que de servir un enfant. Dzzt!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître.\n\n\n\nVous pouvez à présent <pling><r<détecter >>l'<r<hélice\n>>qui est tombée sur terre depuis le\nmoulin.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf("Cependant, il est très peu probable\nque vous puissiez la mettre dans\nvotre sacoche et l'emporter avec vous.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Vzzzt!\n\x0E\x01\x09\x04\x160E\x200...ZRRPT-PFOOOZT!!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x160E\x200Tu... tu t'appelles Fay? Mam'selle\nFay, c'est ça, bzzt? Qu'est\x2010ce que\ntu cherches, dzztzzat?")
/*<116>*/ 	printf("\x0E\x01\x09\x04\x160C\x200En\x2010<pause14>Entendu! Vrrt!\n\n\n\n\x0E\x01\x09\x04\x160E\x200Pour toi, je porterai n'importe quoi de\nn'importe quel poids dans n'importe\nquelle direction! Whizzt!")
/*< 87>*/ 	printf("\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14...\x0E\x01\x06\x02Í")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître.\n\n\n\nVous avez trouvé un moyen de\ntransporter l'hélice depuis la terre\njusqu'à Célesbourg.\n\nVous pouvez à présent partir chercher\nl'<b<hélice du moulin>>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf("\x0E\x01\x09\x04\x160C\x200C'est bon, Maître en vert, j'ai décidé de\nt'aider, bzzt! J'ai enregistré les ondes\némises par mam'selle Fay, vrrt!\n\n\x0E\x01\x09\x04\x160E\x200Il suffira de lui demander de m'appeler\nquand tu auras besoin de moi, bzzat!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x07\x700Mouais, as-tu songé à ce que tu allais\nfaire pour récupérer tout ce qui est\ntombé sous les nuages? Ça risque\nd'être compliqué.\nHmm, tu pourrais peut\x2010être demander\nau <r<diseur de bonne aventure >>juste là...\n\n\nIl a l'air un peu excentrique, mais il est\nplutôt doué quand il s'agit de trouver\nquelque chose.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<griffes de monstre>>.\n\n\nOn peut trouver des <y<griffes de\nmonstre >>en éliminant des monstres\nvolants. Ici aussi, la nuit, il y a des\nmonstres qui volent...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf("\x0E\x01\x09\x04\x10\xE11Maintenant que j'y pense, on en voit\nplus trop ces temps\x2010ci... Les nuits sont\nplus calmes!")
          		flw_208:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon! T'as pas les trésors qu'il\nfaut pour améliorer ça!\n\n\n\x0E\x01\x09\x04\x07\x700Allez, choisis donc autre chose\nà améliorer.")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! T'as pas les rubis qu'il\nfaut, tu comprends? Je travaille pas\npour rien, moi!\n\n\x0E\x01\x09\x04\x07\x700Choisis donc autre chose  à\naméliorer.")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<cors de monstre>>.\n\n\nDans les bouquins de mon papi, on\ndit qu'on peut arracher les <y<cors de\nmonstre>> à leur propriétaire à l'aide\nd'une certaine arme...")
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! T'as rien à faire\naméliorer...\n\n\nVa voir Rupin à l'armurerie. Il va se\nfaire un plaisir de te vendre quelque\nchose!")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<crânes décoratifs>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve des <y<crânes décoratifs >>en\néliminant des monstres qui attaquent\navec des massues et d'autres armes.")
/*<218>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf("\x0E\x01\x09\x04\x08\x800J'te répare ça tout de suite!\nÇa fera <r<10 rubis>>.\n[1]Ça marche[2-]Non merci")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x07\x70EParfait! Ça ne sera pas long.")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x08\x809Tiens, c'est prêt!")
          		  case 1:
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! T'as pas assez de rubis\npour me payer! Va casser ton cochon\net reviens!")
          		}
          	  case 1:
/*< 75>*/ 		printf("Ah, t'es pas intéressé? Je pourrais\nte réparer un autre bouclier...")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<cristaux maléfiques>>.\n\n\nDans les bouquins de mon papi, on\ndit qu'on peut trouver des <y<cristaux\nmaléfiques >>en éliminant des monstres\ndes ténèbres.")
/*<227>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hé, mon garçon! J'te répare un autre\nbouclier?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hé, mon garçon! T'as plus de bouclier\nqui a besoin d'être réparé! Reviens\ndonc plus tard!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<plumes bleues>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve des <y<plumes bleues >>dans\nun endroit verdoyant en attrapant des\npetits oiseaux bleus avec un filet.")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<crânes d'or>>.\n\n\nIl paraît que les <y<crânes d'or >>sont des\ncrânes décoratifs tout dorés et qu'ils\nsont assez rares.")
/*<233>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé mais t'as pas\nassez de <y<poussières de Déesse>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<poussières de Déesses>> sont très\nprécieuses et que c'est très rare d'en\ntrouver.")
/*<238>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<larves de guêpes>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on peut obtenir des <y<larves de guêpes>>\nà partir de nids de guêpes qu'on trouve\ndans des contrées verdoyantes.")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<plumes d'oiseau>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve des <y<plumes d'oiseau >>dans\nun endroit verdoyant en attrapant des\npetits oiseaux avec un filet.")
/*<168>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, mon garçon! Désolé, mais t'as\npas assez de <y<virevoltants>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<virevoltants>> sont des boules\nd'herbe qui roulent dans le désert. On\npeut les attraper avec un filet.")
/*<173>*/ 	printf("\x0E\x01\x09\x04\x07\x700As\x2010tu autre chose à faire améliorer?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

