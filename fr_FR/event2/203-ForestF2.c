          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf("La probabilité d'éteindre les flammes\nau volcan en transportant la <r<bassine>>\njusque là\x2010bas est de 85 %.\n\nJe vous recommande de l'emprunter\nau dragon.")
          	  case 1:
/*<150>*/ 		printf("La <r<bassine>> est remplie d'eau. La\nprobabilité qu'elle puisse éteindre\nles flammes au volcan est de 85 %.\n\nJe vous <pling>conseille de l'emprunter\nau dragon.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf("Eh, le maître en vert, prends\x2010en de la\ngraine !")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x04La paix, c'est le pied ! Mais bon, y a pas\ngrand\x2010chose à faire, du coup...\n\n\n\x0E\x01\x09\x04\x11\x05J'ai des soucis de luxe, on dirait...")
          	  case 1:
/*<423>*/ 		printf("\x0E\x01\x09\x04\x00\x14Nous nous sommes réfugiés ici.\nTu ferais mieux de partir, tu risques\nde nous attirer des monstres !")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x0FMmmh\x2010hmm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf("Bien...<pause0F> Dois\x2010je appeler le robot ?\n[1]Oui[2]Oh non, pas lui")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf("Très bien, \x0E\x01\x12\x04\x00\x05Maître. Je l'appelle\nimmédiatement.")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître...<pause0F> Ce n'est pas le moment\nde faire le difficile. Arrêtez vos\nenfantillages.\n\nJe l'appelle immédiatement.")
          			  case 1:
/*<154>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître...<pause0F> Ce n'est pas le moment\nde faire le difficile. Je l'appelle\nimmédiatement.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf("Dois\x2010je appeler le robot pour qu'il\ntransporte la bassine jusqu'au volcan ?\n[1]Oui[2]Oh non, pas lui")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf("J'attendrai dans le ciel, comme\nd'habitude !")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 		printf("\x0E\x01\x09\x04\x00\x04Il est parfois bon de passer du temps\npour soi, à penser...\n\n\n\x0E\x01\x09\x04\x00\x01Et rester assis, c'est bon pour\nla relaxation !")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf("\x0E\x01\x09\x04\x00\x13Tu me trouves tout de suite, c'est même\npas drôle de se cacher !")
          			  case 1:
/*<428>*/ 				printf("\x0E\x01\x09\x04\x11\x13Tu m'as encore trouvé, tu es vraiment\ntrop fort !\n\n\n\x0E\x01\x09\x04\x0B\x07En récompense, je vais te donner\nquelque chose que j'ai trouvé pendant\nmes parties de cache\x2010cache.")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf("\x0E\x01\x09\x04\x00\x14Chut, c'est un secret !")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf("\x0E\x01\x09\x04\x00\x07Nous vivons ici. Il y a à manger, c'est\nbien agréable !")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf("\x0E\x01\x09\x04\x00\x02C'est un peu dommage que l'eau ait à\nnouveau baissé... Mes petites brasses\nme redonnaient la forme !")
/*<486>*/ 			printf("\x0E\x01\x09\x04\x00\x06Hohoho !")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf("\x0E\x01\x09\x04\x00\x0ELe dragon d'eau a reconnu ta valeur ?\nÇa, par exemple !")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x00\x0ETu as rencontré le dragon d'eau ?\nOh, comme je t'envie !")
/*<530>*/ 			entrypoint_203_09();
          		  case 1:
/*<  5>*/ 			switch (scene_flags[55 /* 0x7 80 */]) {
          			  case 0:
/*<  9>*/ 				switch (story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */]) {
          				  case 0:
/*< 13>*/ 					switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          					  case 0:
/*< 15>*/ 						switch (temp_flags[5 /* 0x1 20 */]) {
          						  case 0:
          							flw_16:
/*< 16>*/ 							printf("\x0E\x01\x09\x04\x00\x02Le monde est vaste... J'aimerais aussi\nrencontrer cet ermite.")
/*<334>*/ 							printf("\x0E\x01\x09\x04\x00\x06Hohoho !")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x00\x0ETu as rencontré un ermite ? Oh, et moi\nqui croyais que nous n'étions que cinq\nTikwis !")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu es allé jusqu'au sommet\nde l'arbre ?\n\n\n\x0E\x01\x09\x04\x00\x08Et tu y as trouvé quelqu'un ? Il faut\nque j'aille voir ça !")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf("\x0E\x01\x09\x04\x00\x0EOh, tu as pu entrer dans l'arbre ?")
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x00\x02Si tu parviens à monter jusqu'à son\nsommet, tu trouveras peut\x2010être\nquelque chose... Et la vue doit être\nbelle !")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf("\x0E\x01\x09\x04\x00\x03Il y a certainement des endroits dans\ncette forêt où tu n'es pas encore allé,\nnon ?\n\n\x0E\x01\x09\x04\x00\x08Grâce à l'écaille du dragon d'eau,\ntu peux maintenant <g<nager sous l'eau\n>>en maintenant (A) enfoncé si tu es à\nla surface.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 327, 'param3': 6}
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf("\x0E\x01\x09\x04\x00\x0EOh, tu as trouvé l'écaille du dragon\nd'eau !\n\n\n\x0E\x01\x09\x04\x00\x02On dit que celui qui la porte peut nager\ndans l'eau comme un dragon vole dans\nle ciel !")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x00\x03Il y a sûrement des endroits dans\ncette forêt où tu n'es jamais allé,\nn'est\x2010ce pas ?\n\n\x0E\x01\x09\x04\x00\x08Mets donc l'écaille à profit pour faire\nun brin d'exploration !")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf("\x0E\x01\x09\x04\x00\x06Hohoho !")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf("\x0E\x01\x09\x04\x00\x03Oh, tu n'as donc pas trouvé ton amie\ndans les profondeurs de la forêt...\n\n\n\x0E\x01\x09\x04\x00\x02Ne te décourage pas et tu la\nretrouveras, tout comme nous,\nles Tikwis, nous sommes retrouvés.")
/*<524>*/ 					entrypoint_203_09();
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_91() {
/*< 49>*/ 	start()
/*< 51>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 70>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*<319>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<320>*/ 				printf("\x0E\x01\x09\x04\x09\x707Comment ? Tu as déjà mon <b<eau\nsacrée>> ? Eh bien, verse\x2010la vite dans\nma bassine !")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf("\x0E\x01\x09\x04\x00\x0FMmmh\x2010hmm...")
/*<318>*/ 				printf("\x0E\x01\x09\x04\x07\x709Oh ! De la véritable <b<eau sacrée >>!\nTu me l'as donc apportée.\n\n\nVerse\x2010la vite dans ma bassine !")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x00\x0FMmmh\x2010hmm...")
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x07\x706Apporte\x2010moi vite mon eau sacrée.\nJe te guiderai alors vers la flamme.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x0FMmmh\x2010hmm...")
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x706Si tu m'apportes de l'<b<eau sacrée>>, je te\nguiderai vers la flamme.\n[1]D'accord[2-]Non merci")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x09\x704Oh, je vois. Tu n'es qu'un humain,\naprès tout !")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 455, 'param3': 6}
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf("\x0E\x01\x09\x04\x00\x0FTu es dans un lieu sacré, l'endroit\noù je vis...\n\n\n\x0E\x01\x09\x04\x09\x700Tu n'as rien à faire ici.\n\n\n\nComment as\x2010tu fait pour entrer ?\n[1]Madame le\ndragon d'eau ?[2]Je me suis\nperdu")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf("\x0E\x01\x09\x04\x07\x903En effet, je suis <b<Firone>>, le dragon d'eau\nà qui la Déesse a confié cette région.\n\n\nMalgré mon apparence, je suis une\nenvoyée de la Déesse.\n\n\n\x0E\x01\x09\x04\x09\x900<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\x0E\x01\x09\x04\x00\x07Hmm ?")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf("\x0E\x01\x09\x04\x09\x900\x0E\x01\x06\x02\xFECDMais dis\x2010moi...<pause0F> \x0E\x01\x09\x04\x00\x06\x0E\x01\x06\x02\x2CDTu portes mon <b<écaille>>...\n\n\n\n\x0E\x01\x09\x04\x09\x700C'est une relique que seul l'élu de la\nDéesse peut posséder. \x0E\x01\x09\x04\x00\x05Serait\x2010ce donc\ntoi ?\n\n\x0E\x01\x09\x04\x07\x700Cependant, même si c'était le cas,\naucun humain n'est censé pouvoir\ns'approcher d'ici...")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x07\x704Je vois...<pause1E> Cet ermite a la langue bien\npendue...\n\n\n\x0E\x01\x09\x04\x09\x910Je lui avais pourtant interdit de parler\nde ce lieu à qui que ce soit ! Je le\nmangerai donc la prochaine fois que\nje le verrai.\n\x0E\x01\x09\x04\x07\x900Mais laissons cela...<pause1E> Tu es donc venu\nquérir la <r<flamme sacrée >>?\n[1]Oui[2]J'ai oublié")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf("\x0E\x01\x09\x04\x09\x704Hmm, c'est bien ce que je pensais.")
          						flw_463:
/*<463>*/ 						printf("\x0E\x01\x09\x04\x09\x700Mais j'ai du mal à croire que la Déesse\nait pu choisir un enfant aussi chétif\nque toi...\n\n\x0E\x01\x09\x04\x07\x703Je vais donc te tester.\n\n\n\nVois\x2010tu, j'ai été blessée par un certain\n<b<Ghirahim>> qui se prétend monarque\ndémoniaque, et j'ai du mal à me\nsoigner.")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf("\x0E\x01\x09\x04\x07\x70FL'eau contenue dans cette bassine est\nde l'<b<eau sacrée>>. Elle a des propriétés\ncuratives.\n\n\x0E\x01\x09\x04\x09\x700Mais ses effets sont faibles à présent...\nIl m'en faut une plus fraîche et plus\npuissante.\n\n\x0E\x01\x09\x04\x09\x906Va donc <r<<pling>me chercher de l'eau sacrée>>.\nIl faut qu'elle ressemble à celle de cette\nbassine.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf("Si tu fais cela pour moi, je te guiderai\nvers la <r<flamme sacrée >>que tu cherches.\nQu'en dis\x2010tu ?\n[1]D'accord[2-]Non merci")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf("\x0E\x01\x09\x04\x09\x704Oh, je vois. Tu n'es qu'un humain,\naprès tout !")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf("\x0E\x01\x09\x04\x09\x910\x0E\x01\x08\x02\x1CDOserais\x2010tu te moquer de moi ?\n\n\n\n\x0E\x01\x09\x04\x01\x900Je dois bien reconnaître qu'au moins\ntu es courageux.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf("\x0E\x01\x09\x04\x09\x910Me prendrais\x2010tu pour une idiote ?\n\n\n\nDéguerpis tout de suite, ou je te mange\nla tête !")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 412, 'param3': 6}
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x2CD!!!\n\n\n\nTu es un humain, n'est\x2010ce pas ?")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, retournons dans le ciel et\ndirigeons\x2010nous vers le volcan.")
/*<166>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = true;
/*<206>*/ 	story_flags[677 /* us: 805A9B20 0x40, jp: 805ACDA0 0x40 */] = true;
/*<280>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<176>*/ 	scene_flags[2 'Lake Floria'][127 /* 0xE 80 */] = true;
/*<316>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<203>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*<204>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*<202>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*<205>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*<200>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*<201>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
          }

          void entrypoint_203_06() {
/*< 31>*/ 	start()
/*<392>*/ 	printf("\x0E\x01\x09\x04\x03\x0FJ'allais presque oublier de préciser...\n<pause0F>Madame le dragon d'eau est très soupe\nau lait, alors surveille ta langue de\nbelle\x2010mère !\n\x0E\x01\x09\x04\x01\x00Si elle se fâche...<pause3C> \x0E\x01\x09\x04\x00\x0Belle peut t'avaler tout\nrond comme un citron, et sans faire la\ngrimace !")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf("\x0E\x01\x09\x04\x03\x06Ne dis à personne que je t'ai parlé de la\nflamme de Farore, entendu ?\n\n\nNi de loin, ni de cyprès ! \x0E\x01\x09\x04\x01\x00J'ai pas envie\nde finir en salade !\n\n\n\x0E\x01\x09\x04\x03\x07Et surveille bien ton langage !\nEt ton comportement !")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf("\x0E\x01\x09\x04\x00\x13Moi, je retourne à la sieste.")
/*<388>*/ 	story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*<389>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_92() {
/*< 68>*/ 	start()
/*<172>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<497>*/ 			entrypoint_203_85();
          		  case 1:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x07\x702Les monstres ont été chassés de la\nforêt. Je suis satisfaite.\n\n\nJe vois que tu es digne de l'épée que\ntu portes.\n\n\n\x0E\x01\x09\x04\x07\x704La première fois que je t'ai vu, tu ne\ncroyais pas en toi\x2010même, mais...<pause1E>\nmaintenant, tu es plein de confiance.\n\n\x0E\x01\x09\x04\x07\x706Mais il faut continuer à faire\nprogresser ton âme pour accomplir\nla mission de la Déesse !")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x07\x702Tu peux me rendre ma bassine quand\ntu n'en auras plus besoin. En attendant,\nfais\x2010en ce qu'il te plaît.")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf("\x0E\x01\x09\x04\x07\x707Comment ? Tu veux encore emprunter\nma <r<bassine>> ?<pause1E> \x0E\x01\x09\x04\x00\x05Hmm...<pause0F> Bon, très bien.\n\n\nTout à l'heure, un petit impudent est\nvenu me la rendre...\n\n\n\x0E\x01\x09\x04\x07\x706Je lui pardonne, mais c'est bien parce\nque tu le connais... Pense un peu\nà l'éduquer !")
          				  case 1:
/*<169>*/ 					printf("\x0E\x01\x09\x04\x00\x06Oh, c'est toi ? Alors, as\x2010tu pu faire\névoluer ton épée ?\n\n\n\x0E\x01\x09\x04\x07\x707Comment ? Tu souhaiterais que je te\nprête ma <r<bassine>> ?<pause1E>\n\x0E\x01\x09\x04\x00\x05Hmm,<pause0F> pourquoi pas...\n\nPuisque mon pouvoir est revenu,\nelle ne m'est plus vraiment utile...\n\n\n\x0E\x01\x09\x04\x07\x706Fais\x2010en ce qu'il te plaît. Allez, va !")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf("\x0E\x01\x09\x04\x07\x702Pour que tu puisses faire évoluer\nle pouvoir de ton épée, ton âme\ndoit grandir.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf("\x0E\x01\x09\x04\x07\x70FGhirahim... Je lui ferai payer ce qu'il\na fait.")
          					  case 1:
/*< 71>*/ 						printf("\x0E\x01\x09\x04\x09\x900Ah, je sens que ma puissance\nme revient...")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 302, 'param3': 6}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\n\n\n\nNous nous trouvons au sud\x2010ouest de la\nforêt de Firone. Veuillez vérifier votre\nposition sur la carte.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 303, 'param3': 6}
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x07\x705Regarde.")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 268, 'param3': 6}
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDHmmmmmm\x0E\x01\x06\x02\xFCCD...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf("")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 196, 'param3': 6}
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf("\x0E\x01\x09\x04\x00\x06La flamme sacrée se trouve par ici.\n\n\n\nElle est cachée derrière cette cascade\ndepuis si longtemps, les monstres ont\ndû s'y installer.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf("\x0E\x01\x09\x04\x07\x704Mais si tu es réellement l'élu de la\nDéesse, cela ne devrait pas te poser\nde problèmes.\n\nNous nous reverrons.\nD'ici là, sois prudent.\n\n\n\x0E\x01\x09\x04\x07\x703Au revoir !")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 277, 'param3': 6}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 279, 'param3': 6}
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 197, 'param3': 6}
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDKwiii !")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf("Le niveau de l'eau a baissé. La forêt\nest revenue à son état originel.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 210, 'param3': 6}
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf("\x0E\x01\x09\x04\x07\x702Ton épée a évolué, on dirait.")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf("Malgré ton apparence de bambin,\ntu serais donc l'élu de la Déesse...")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Cependant, tu n'as pas encore atteint\nla grandeur d'âme que ton épée exige.")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf("Prépare\x2010toi à entraîner davantage\nton esprit !\n")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf("\x0E\x01\x09\x04\x07\x700Au revoir !")
/*<483>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 485, 'param3': 17}
/*<485>*/ 	make_actor_do_something(0, 0)
/*<482>*/ 	set_camera(9, 0)
/*<218>*/ 	story_flags[118 /* us: 805A9AEA 0x08, jp: 805ACD6A 0x08 */] = true;
/*<275>*/ 	set_camera(10, 0)
/*<276>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_08() {
/*<390>*/ 	start()
/*<391>*/ 	printf("\x0E\x01\x09\x04\x01\x0B\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDMinute, postillon !")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf("\x0E\x01\x09\x04\x07\x705Regarde.")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf("Glou ! C'est étonnant qu'un humain\npuisse venir jusqu'ici, glou. C'est\ntrès profond, glou !\n\nTu n'aurais pas un peu <g<secoué ton\nNunchuk >>pour faire des <r<tourbillons>>,\npar hasard, glou ?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf("\x0E\x01\x09\x04\x00\x08Et sinon, comment va Romar dans son\nnouveau chez\x2010lui ?")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf("\x0E\x01\x09\x04\x00\x08Sinon, il paraît que Romar souhaite\nquitter la forêt ? Bah, pourquoi pas !")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDHmmmmmm\x0E\x01\x06\x02\xFCCD...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf("Dis, humain, glou ! Tu connais le <r<saut\ntourbillon>>, glou ?\n\n\nFais un tourbillon en te <r<dirigeant vers\nla surface de l'eau>>, et tu feras un saut\nplein de style, glou !")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf("")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf("Oh, un humain, glou ! Un humain,\nglou !<pause14> Quelle forme étrange, glou...")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf("\x0E\x01\x09\x04\x00\x03Va compléter le dessin sur la porte au\nsud de la forêt en utilisant le pouvoir\nde la Déesse. Allez, houx !")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf("\x0E\x01\x09\x04\x00\x09Utilise tes balises pour mémoriser\nles endroits marqués d'une \x0E\x02\x04\x02\x19CD.")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x01\x06Tout va bien, petit pin ? Tu as\nmémorisé où se trouvent les dessins ?\n[1]Oui[2-]Pas encore")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x13Moi, je retourne à la sieste.")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x03\x07Allez, fais bien attention à toi,\nne cherche pas trop les pépins.")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x03Tu as la mémoire bien courge.")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x09Utilise tes balises pour mémoriser\nles endroits marqués d'une \x0E\x02\x04\x02\x19CD.")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf("\x0E\x01\x09\x04\x01\x04À l'opposé du sud se trouve le nord...\nPrès de cette \x0E\x02\x04\x02\x19CD, plus exactement.")
          			goto flw_406
          		}
          	}
          }

          void entrypoint_203_80() {
/*< 87>*/ 	start()
/*<104>*/ 	switch (story_flags[111 /* us: 805A9AEB 0x10, jp: 805ACD6B 0x10 */]) {
          	  case 0:
/*<105>*/ 		switch (story_flags[112 /* us: 805A9AEB 0x20, jp: 805ACD6B 0x20 */]) {
          		  case 0:
/*<121>*/ 			switch (story_flags[113 /* us: 805A9AEB 0x40, jp: 805ACD6B 0x40 */]) {
          			  case 0:
/*<129>*/ 				switch (story_flags[114 /* us: 805A9AEB 0x80, jp: 805ACD6B 0x80 */]) {
          				  case 0:
/*<138>*/ 					switch (scene_flags[15 /* 0x0 80 */]) {
          					  case 0:
/*<140>*/ 						switch (temp_flags[15 /* 0x0 80 */]) {
          						  case 0:
/*<262>*/ 							switch (temp_flags[16 /* 0x3 01 */]) {
          							  case 0:
/*<263>*/ 								printf("Par ici, glou !")
          							  case 1:
/*<261>*/ 								printf("Le dragon d'eau se trouve par ici, glou.\nAttends une petite minute, glou.")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf("Nous y voilà, glou !")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf("Waouh, glou ! Tu es bien le messager\nde la Déesse, glou ! ")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf("Ah, horreur, glou ! Malheur, glou !")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf("Glou glou ! Ce poisson, glou ! Ce sont\ndes poissons comme lui qui ont attaqué\nle dragon d'eau, glou !\n\nFais attention, glou !")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf("Waouh, super glou !\n\n\n\nEnfin, pas toi, l'écaille du dragon\nd'eau, glou !")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf("Si tu ne peux pas passer au travers,\nsaute par\x2010dessus, glou !")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf("Par ici, glou, par ici, glou !\nVite, glou, vite, glou !\n\n\nGlou ? Tu ne peux pas passer, glou ?\nÊtre humain, c'est pas pratique, glou !\nEssaie de passer par\x2010dessus, glou !")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf("Oh ! Magnifique, glou ! Le dragon\nd'eau est par là, glou. Suis\x2010moi, glou !")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf("Il te suffira d'un <r<tourbillon>> en <g<secouant\nton Nunchuk >>pour te débarrasser de ces\nmonstres piquants, glou !")
          				  case 1:
/*<114>*/ 					printf("Glou ? L'ami que je devais retrouver\nici n'est pas là, glou...\n\n\nEt en plus, un tas de rochers bloque le\npassage, glou ! Mais qu'est\x2010ce qu'on\npeut faire, glou ?!")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf("Aaah, glou ! Tu es plutôt doué, pour\nun humain, glou !\n\n\nMais.<pause0A>.<pause0A>.<pause0A> c'est l'<b<écaille du dragon d'eau>>,\nglou !\n\n\nCe qui voudrait dire...<pause0F> que tu es le\n<r<messager guidé par la Déesse >>dont\nparlait le dragon d'eau, glou ?\n\nOh, mais alors tu pourrais peut\x2010être\nsauver le dragon, glou !\n[1]Que lui\narrive\x2010t\x2010il ?[2]Amène\x2010moi\nà elle")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf("Il y a peu,<pause0F> un type bizarre accompagné\nde monstres a attaqué le dragon, glou.\n\n\nComme elle est très forte, elle les a\npresque tous mangés, mais glou...\n\n\nIls étaient si nombreux que le type\nbizarre a réussi à la blesser, glou...\n\n\nEt maintenant elle n'a plus assez d'eau\npour se soigner, glou !\n\n\nS'il te plaît, va voir le dragon et écoute\nson histoire, glou !\n\n\nJe vais te guider jusqu'à elle, glou.")
/*<119>*/ 					scene_flags[2 'Lake Floria'][12 /* 0x0 10 */] = true;
          				  case 1:
          					goto flw_499
          				}
          			}
          		}
          	  case 1:
/*<106>*/ 		switch (scene_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<108>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<109>*/ 				printf("Tu ne passeras jamais si tu ne sais pas\nfaire de <g<tourbillon>>, glou !")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf("Ah, glou ! Tu ne pourras pas entrer ici,\nglou !\n\n\nViens me chercher, si tu y arrives,\nglou !")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf("Mais que tu es têtu, glou ! Si tu\nt'approches encore, je vais le dire\nau dragon d'eau, glou !")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf("Glou ! Encore un humain, glou !\n\n\n\nJe dois disparaître avant qu'il ne me\nremarque, glou !")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf("\x0E\x01\x09\x04\x00\x06La flamme sacrée se trouve par ici.\n\n\n\nElle est cachée derrière cette cascade\ndepuis si longtemps, les monstres ont\ndû s'y installer.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf("Ici, ça a toujours été un endroit calme\net paisible, mais depuis que cet humain\nbizarre est venu, glou...\n\nDe gros poissons sèment la panique,\non peut même plus faire la sieste\ntranquille, glou !")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf("Quand la forêt était pleine d'eau,\nj'étais de garde ici, glou.\n\n\nC'était tellement bien, j'aurais voulu\nque ça continue, glou...")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf("Continue, glou, continue, glou !")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf("Le dragon d'eau est sorti, glou.")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf("Sorti, glou, sorti, glou !")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf("Le dragon d'eau va beaucoup mieux,\nglou ! C'est grâce à toi, glou !")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf("Grâce à toi, glou, grâce à toi, glou !")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf("S'il te plaît, aide le dragon d'eau,\nglou...")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf("Aide\x2010le, glou ! Aide\x2010le, glou !")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf("Le dragon d'eau t'attend, glou.\nVa lui parler, glou !\n")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf("Parle\x2010lui, glou, parle\x2010lui, glou !")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf("\x0E\x01\x09\x04\x07\x704Mais si tu es réellement l'élu de la\nDéesse, cela ne devrait pas te poser\nde problèmes.\n\nNous nous reverrons.\nD'ici là, sois prudent.\n\n\n\x0E\x01\x09\x04\x07\x703Au revoir !")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf("L'autre, là, c'est un vrai fayot, toujours\nen train de se faire mousser auprès\ndu dragon d'eau, glou !\n\nMais moi, je vais pas suivre son\nexemple, glou ! Je ne suis pas un\nmouton, glou !")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf("Par ici, glou, par ici, glou !\nVite, glou, vite, glou !\n\n\nGlou ? Tu ne peux pas passer, glou ?\nÊtre humain, c'est pas pratique, glou !\nEssaie de passer par\x2010dessus, glou !")
          	  case 1:
/*<135>*/ 		printf("Ah, glou ! Tu ne pourras pas entrer ici,\nglou !\n\n\nViens me chercher, si tu y arrives,\nglou !")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf("Belle maison, n'est\x2010ce pas, glou ?\nPas si facile d'accès, mais bon, glou...")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf("Dommage que le niveau de l'eau ait à\nnouveau baissé, glou.")
          			  case 1:
/*<250>*/ 				printf("Le dragon d'eau se porte bien\nmaintenant, glou.\nMerci de l'avoir aidée, glou !")
          			}
          		  case 1:
/*<249>*/ 			printf("Le dragon d'eau ne va pas très bien.\nFais quelque chose, glou !")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf("Le dragon d'eau est gentil, mais il vaut\nmieux ne pas l'énerver, compris, glou ?")
/*<253>*/ 			printf("Et chut, c'est un secret, glou !")
          		  case 1:
/*<234>*/ 			printf("Glou glou ! Ne me mange pas, glou !\n[1]Madame le\ndragon d'eau ?[2]Je ne te\nmangerai pas")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf("Mais non, glou !<pause1E> Tu cherches le dragon\nd'eau, glou ?\n\n\nElle est gentille, mais il ne faut pas\nl'énerver, compris, glou ?")
          					flw_239:
/*<239>*/ 					printf("Et chut, c'est un secret, glou !")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf("Mais non, glou !<pause1E> Tu cherches le dragon\nd'eau, glou ?\n\n\nJe vais te dire où elle est, parce que tu\nportes son écaille, ami humain, glou.")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf("Le dragon d'eau est par ici, glou !\nNote\x2010le tout de suite, glou !")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf("Glou ?<pause0F> Ah, tant mieux, glou !\n\n\n\nJe me cachais parce que depuis peu,\nce n'est plus très bien fréquenté,\npar ici, glou...")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf("Écoutez bien, \x0E\x01\x12\x04\x00\x01Maître.\nEntendez\x2010vous quelque chose ?")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf("Félicitations, \x0E\x01\x12\x04\x00\x04Maître\nLink.")
/*<256>*/ 	printf("Vous avez surmonté l'épreuve, et\nacquis la force nécessaire pour vous\nmettre en quête de la flamme sacrée.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf("Cette <y<écaille du dragon d'eau>> est l'une\ndes reliques de la Déesse.\n\n\nGrâce à la puissance du <b<dragon d'eau>>,\nle grand esprit aquatique, vous pouvez\nà présent nager sous l'eau !")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("La flamme se trouve quelque part dans\ncette forêt, probablement à un endroit\noù vous n'êtes pas encore allé.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf("\x0E\x01\x09\x04\x07\x707Des questions, dis\x2010tu ? À propos\nde quoi ?\n[1]Le dragon\nde feu[2]Le dragon\nde foudre[3]La forêt[4-]Non rien")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x09\x04\x07\x704Ah, celui\x2010là...<pause0F> Il a reçu de la Déesse\nle pouvoir de protéger le volcan.\n\n\nC'est un excentrique qui vit dans\nune telle fournaise que nul ne peut\ny pénétrer.")
          	  case 1:
/*<494>*/ 		printf("\x0E\x01\x09\x04\x07\x704Ah, celui\x2010là...<pause0F> Il a reçu de la Déesse\nle pouvoir de protéger le désert.\n\n\nC'est le plus vieux des dragons,\nmême s'il n'a jamais fait attention\nà sa santé...<pause0F> Je me demande ce qu'il\ndevient.")
          	  case 2:
/*<495>*/ 		printf("\x0E\x01\x09\x04\x07\x704Autrefois, lorsque les humains\nvivaient sur la terre, ils vivaient en\ncommunion avec la nature...\n\nMais ne trouves\x2010tu pas que la forêt\nest plus belle maintenant que les\nhumains l'ont quittée ?")
          	  case 3:
/*<496>*/ 		printf("\x0E\x01\x09\x04\x07\x706Ne néglige pas l'entraînement\nde ton âme ! Tu dois accomplir\nla mission de la Déesse.")
          	}
          }

          void entrypoint_203_51() {
/*< 18>*/ 	start()
/*<349>*/ 	set_camera(15, 0)
/*<346>*/ 	set_camera(16, 0)
/*<347>*/ 	{'type': 'type3', 'subType': 2, 'param1': 35, 'param2': 356, 'next': 348, 'param3': 15}
/*<348>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 0, 'next': 29, 'param3': 13}
/*< 29>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 27, 'param3': 35}
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 99, 'next': 350, 'param3': 17}
/*<350>*/ 	printf("Vous êtes à la cime de l'arbre.\n\n\n\nObservez les environs, vous\ndécouvrirez peut\x2010être des\nendroits inexplorés.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, regardez...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 383, 'param3': 6}
/*<383>*/ 	printf("Vous avez découvert un nouveau Tikwi.\n\n\n\nLa probabilité que le bruit qu'on\nentend depuis un moment soit le\nronflement de ce Tikwi est de 90 %.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 30, 'param3': 6}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf("\x0E\x01\x09\x04\x09\x900Ah, je sens que ma puissance\nme revient...")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf("\x0E\x01\x09\x04\x01\x14Petit pin ! Je t'ai dit mille fois de ne pas\ndire à madame le dragon que c'est moi\nqui t'ai révélé le secret !\n\nQuand la forêt s'est retrouvée inondée,\nj'ai cru que j'allais me faire croquer !\n\n\n\x0E\x01\x09\x04\x01\x07Bon, en contrepartie, il y a moins de\nmonstres et la paix est revenue dans\nla forêt...")
          			flw_540:
/*<540>*/ 			printf("\x0E\x01\x09\x04\x00\x13Moi, je retourne à la sieste.")
          		  case 1:
/*<543>*/ 			printf("\x0E\x01\x09\x04\x01\x01Mais tu vas finir par me rendre\nchèvrefeuille...\n\n\n\x0E\x01\x09\x04\x01\x07Oh, petit pin ! Madame le dragon a\nreconnu ta valeur ? Bravo !\n\n\nBon, sans vouloir voler tes lauriers,\nelle a reconnu la mienne bien avant\nla tienne...")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf("\x0E\x01\x09\x04\x01\x01Par ma rhubarbe, quel sauvageon !\n\n\n\n\x0E\x01\x09\x04\x01\x07Voilà donc l'eau favorite de madame\nle dragon...\n\n\nÇa me froisserait pas la feuille si tu lui\ndisais que ça vient de moi...")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf("\x0E\x01\x09\x04\x01\x01Par ma rhubarbe, quel sauvageon !\n\n\n\n\x0E\x01\x09\x04\x01\x06Noix ? Il faut que tu trouves de l'eau\nsacrée pour madame le dragon ?\n\n\nJe crois qu'il y a une source d'eau pure\nau fond du temple, non ? L'eau d'une\ndes chutes pourrait plaire au dragon.")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf("\x0E\x01\x09\x04\x01\x01Par ma rhubarbe, quel sauvageon !\n\n\n\n\x0E\x01\x09\x04\x01\x07Oh, tu as pu ouvrir la porte qui mène\nau lac !\n\n\nNe dis surtout pas à madame le dragon\nque je t'ai dit comment faire !\nJe suis pas pressé de nourrir les\nchrysanthèmes...")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf("\x0E\x01\x09\x04\x01\x04Noix, encore toi ? Tu as quelque\nrose à me dire, par tous les sapins ?\n[1]Oui[2-]Non")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x00\x03Va compléter le dessin sur la porte au\nsud de la forêt en utilisant le pouvoir\nde la Déesse. Allez, houx !")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf("\x0E\x01\x09\x04\x00\x13Moi, je retourne à la sieste.")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf("\x0E\x01\x09\x04\x00\x14Kiwi me carambole dans mon\nsommeil ?")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf("\x0E\x01\x09\x04\x01\x01\x0E\x01\x06\x02\xFCCDHmm ?<pause0F>\x0E\x01\x06\x02Í On se connaît, non ?\n[1]Oui[2]Pas du tout")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf("\x0E\x01\x09\x04\x00\x07Ah, oui, tu es en <r<mode héroïque>>,\npetit pin ! Tu sais donc ce que\ntu as à faire !\n[1]Bien sûr ![2]J'ai oublié")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf("\x0E\x01\x09\x04\x00\x03Par tous les salsifis, on dirait bien que\ntu as perdu la ciboule...")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf("\x0E\x01\x09\x04\x01\x06Bien, tu promets de ne jamais dire à\nkiwi que ce soit ce que je vais te révéler\nmaintenant ?\n[1]Je le promets[2]Je refuse")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf("\x0E\x01\x09\x04\x03\x08Très bien, petit pin, je vais tout te dire.\nEt souviens\x2010toi, c'est un secret !")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf("\x0E\x01\x09\x04\x03\x04La flamme que tu cherches...<pause0F> s'appelle\nla <b<<pling>flamme de Farore>>.\n\n\n\x0E\x01\x09\x04\x01\x00Son histoire remonte au temps radis,\neuh, jadis, quand la Déesse était parmi\nnous...")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf("\x0E\x01\x09\x04\x00\x02Elle fut confiée au grand esprit qui\nrègne sur la <b<forêt de Firone>>, le <b<dragon\nd'eau>>.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf("\x0E\x01\x09\x04\x00\x04Il est dit que la Déesse la laissa ici pour\nqu'elle puisse un jour être remise à\n<b<celui qui viendra du ciel>>...")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf("Et ça pourrait bien être toi, petit pois...\n\n\n\n\x0E\x01\x09\x04\x03\x09Le temps est venu pour toi de\nrencontrer le dragon d'eau.")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf("Le dragon d'eau qui protège la flamme\nvit dans le grand lac au sud de la forêt.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf("\x0E\x01\x09\x04\x00\x04Cependant, la porte qui permet\nd'accéder au lac est solidement fermée\npour empêcher les intrus d'entrer...\n\n\x0E\x01\x09\x04\x00\x07Mais je vais te révéler comment\non ouvre cette porte, petit pin.")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf("\x0E\x01\x09\x04\x01\x04Le dessin gravé sur la porte...<pause0F> Il faut y\ninsuffler le <r<pouvoir de la Déesse>>.\n\n\n\x0E\x01\x09\x04\x00\x09Mais attention !<pause0F> Il manque une partie\ndu dessin... Il faut le compléter.")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf("\x0E\x01\x09\x04\x03\x01Pour savoir comment compléter le\ndessin, il te faudra trouver un symbole\nidentique à celui de la porte.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf("\x0E\x01\x09\x04\x03\x14\x0E\x01\x08\x02\x2CDNoix ?!\n\n\n\n\x0E\x01\x09\x04\x01\x06Alors que je m'apprêtais à tout te dire,\ntu refuses de promettre ?!\n[1]Dis\x2010moi tout[2]Je refuse")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf("\x0E\x01\x09\x04\x03\x0B\x0E\x01\x08\x02\x2CDNoix ? Chardon ?\n\n\n\n\x0E\x01\x09\x04\x01\x03Tu ne mâches pas tes mots...<pause0F> Bah, tu as\nfait le chemin jusqu'ici, je vais te le\ndire quand même.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf("\x0E\x01\x09\x04\x00\x03Ah, ma mémoire me joue des\ntopinambours... J'ai eu comme\nun sentiment de déjà\x2010vu.")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf("\x0E\x01\x09\x04\x03\x06Bon mais...<pause0F> Quel bourgeon t'amène ?\n[1]Où est\nla flamme ?[2]Non, rien")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf("\x0E\x01\x09\x04\x01\x01Oh ho, pour retrouver ton amie,\ntu cherches la flamme qui affûtera\nton épée comme un roseau ?\n\nUn humain qui me voit, et qui cherche\nla flamme ?<pause0F> Quel étrange pois chiche...")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf("\x0E\x01\x09\x04\x01\x14Si tu avais les feuilles bien ouvertes,\ntu saurais déjà que je veille sur la forêt\ndepuis mon perchoir.\n\nJe sais tout, pistou ! Tu cherches\nla flamme qui affûtera ton épée !")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf("\x0E\x01\x09\x04\x01\x01Oh, doux raisin ! Quelle rareté !\nUn humain !\n\n\nJe suis l'<b<ermite>> Tikwi de ces bois,\nprotecteur de la goyave et de\nl'aubépin !\n\n\x0E\x01\x09\x04\x01\x06Je ne sais quelle échalote t'amène,\nmais il semble raifort que tu me voies !\n[1]Oui, je te vois[2]Non, je ne\nte vois pas")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf("\x0E\x01\x09\x04\x00\x07Quel \x153illet tu as ! Même les autres\nTikwis ne sont pas tous capables de\nme voir...")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf("\x0E\x01\x09\x04\x03\x0BTu mens comme un arracheur\nde chiendent !\n\n\n\x0E\x01\x09\x04\x01\x14Si tu as pu me réveiller en me rentrant\ndans le chou, c'est bien parce que tu me\nvoyais, voyou !")
          						goto flw_363
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_52() {
/*< 62>*/ 	start()
/*< 65>*/ 	story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<468>*/ 	switch (temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<516>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 467, 'param3': 35}
/*<467>*/ 		set_camera(30, 0)
          		flw_64:
/*< 64>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 84, 'param3': 16}
/*< 84>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*< 85>*/ 			printf("Analyse de l'eau de la bassine\x0E\x01\x06\x02\xFCCD...<pause0F>\n\x0E\x01\x06\x02ÍSa <pling><r<composition est identique >>à celle de\nla source de la contemplation, \x0E\x01\x12\x04\x00\x01Maître.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 317, 'param3': 6}
/*<317>*/ 			temp_flags[2 /* 0x1 04 */] = true;
/*<470>*/ 			switch (temp_flags[3 /* 0x1 08 */]) {
          			  case 0:
/*<469>*/ 				set_camera(31, 0)
          				flw_183:
/*<183>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 185, 'param3': 16}
/*<185>*/ 				entrypoint_203_91();
          			  case 1:
          				goto flw_183
          			}
          		  case 1:
/*< 67>*/ 			printf("Analyse de l'eau de la bassine\x0E\x01\x06\x02\xFCCD...<pause0F>\n\x0E\x01\x06\x02Í<pling>Ajout à la <r<fonction détection>> opéré.\nVous pouvez à présent rechercher\nl'eau sacrée.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, vous avez un <y<flacon vide >>parmi\nvos possessions. Veuillez l'utiliser pour\ntransporter l'eau.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 462, 'param3': 6}
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf("\x0E\x01\x09\x04\x00\x05Ce chemin mène à la forêt de Firone.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf("\x0E\x01\x09\x04\x09\x706Alors va ! Ne me fais pas attendre.")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf("\x0E\x01\x12\x04\x00\x01Maître, vous n'avez pas de récipient\ndisponible. Il vous en faudra un pour\npouvoir transporter de l'eau.")
          				goto flw_66
          			}
          		}
          	  case 1:
/*< 63>*/ 		{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 64, 'param3': 35}
          		goto flw_64
          	}
          }

          void entrypoint_203_87() {
/*<400>*/ 	start()
/*<401>*/ 	printf("Contemple ma véritable apparence !\n\n\n\nJe suis<b< Firone>>, le dragon d'eau, à qui\nla Déesse a confié la protection de\ncette forêt !")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf("\x0E\x01\x09\x04\x00\x07Les méchants intrus ont disparu,\nc'est la patate ! Je revis dans la paix\net l'harmonie !\n\n\x0E\x01\x09\x04\x00\x04J'aimerais que tu puisses aussi vivre\ndans la paix et l'harmonie avec ton\namie comme toi !")
          	  case 1:
/*<415>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hé ! C'est moi ! Tu as retrouvé ton amie\ncomme toi ?\n[1]Qui es\x2010tu ?[2]Pas encore")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf("\x0E\x01\x09\x04\x11\x13Tu te souviens pas de moi ?<pause1E> Il serait\npeut\x2010être temps !\n\n\n\x0E\x01\x09\x04\x0B\x04Pour nous différencier, nous,\nles Tikwis, t'as qu'à ouvrir ta carte !\nNotre nom apparaît si tu nous pointes\navec le curseur.")
          		  case 1:
/*<535>*/ 			printf("\x0E\x01\x09\x04\x11\x13C'est dommage... Ce serait tellement\nbien que vous soyez réunis, comme\nnous, les Tikwis !")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf("")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf("Fay d'amour, me voilà !")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf("\x0E\x01\x09\x04\x09\x700Tu m'as apporté l'<b<eau sacrée >>que\nje désirais, et je t'en remercie, humain.\n\n\nJe comprends à présent comment tu as\npu surmonter l'épreuve et mettre la\nmain sur <b<mon écaille>>.")
          	  case 1:
/*<547>*/ 		printf("\x0E\x01\x09\x04\x09\x700Tu m'as apporté l'<b<eau sacrée >>que je\nt'avais demandée, et je t'en remercie,\nhumain.\n\nJe comprends à présent comment tu as\npu surmonter l'épreuve de la Déesse et\nmettre la main sur <b<mon écaille>>.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf("La probabilité que ce dessin soit celui\ndont parlait l'ermite est de 80 %.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf("Je vous recommande de bien\nmémoriser sa forme.")
/*<438>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 439, 'param3': 6}
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf("Han, encore cette <r<bassine>> ?<pause0F> Euh,\npas de problème, laissez\x2010moi faire !")
          	  case 1:
/*<160>*/ 		printf("Ouh, en voilà un gros truc lourd...<pause0F>\nMais pour moi, rien de plus facile !")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf("\x0E\x01\x09\x04\x07\x700Je vais donc te guider vers la <r<flamme\nsacrée>>, comme je te l'ai promis.\n\n\nSuis\x2010moi !")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf("\x0E\x01\x09\x04\x09\x0CTout le monde dit que la paix est\nrevenue dans la forêt, mais j'en crois\npas un mot !\n\n\x0E\x01\x09\x04\x07\x13N'y a\x2010t\x2010il pas un endroit sûr, où nous\npourrions nous tenir droits et fiers,\ncomme des carottes ?")
          	  case 1:
/*<419>*/ 		printf("\x0E\x01\x09\x04\x09\x0CJusqu'à quand serons\x2010nous obligés de\nvivre ainsi dans la peur ?\n\n\n\x0E\x01\x09\x04\x07\x13N'y a\x2010t\x2010il pas un endroit sûr, où nous\npourrions nous tenir droits et fiers,\ncomme des carottes ?")
          	}
          }

