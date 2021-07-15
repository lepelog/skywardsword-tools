          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x0C\xE09Il y a une légende qui circule parmi les\nMogmas à propos de cet endroit...\n\n\n« <r<La statue qui, sereine, sommeille\nface à sa s\x153ur>> est la clé du passage\nvers le trésor des rois.<r< >>»\n\n« Rassemble ton courage et fais taire ta\npeur, <r<jette\x2010toi dans sa bouche >>et la voie\ns'ouvrira. »\n\n\x0E\x01\x09\x04\x09\x908Je sais pas si c'est juste des racontars\nou la vérité, mais j'peux t'dire qu'on\nest sur le coup... On va vérifier ça.")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf("\x0E\x01\x0B\x04\x00\x3F4\x0E\x01\x09\x04ÿ\xFF02Aaah, enfin un peu d'air !")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf("...\x0E\x01\x08\x02\x2CD\x0E\x01\x09\x04\n\x5304 Mouarf !\n\n\n\n\x0E\x01\x08\x02Í\x0E\x01\x09\x04\x09\x9FFTu m'as fait une de ces frayeurs, j'ai\ncru que c'était un monstre !\n\n\n...\x0E\x01\x09\x04\x0B\xC07 Oh ?\n\n\n\nJe vois que t'as des <y<gants creuse\x2010tout>>...\n\n\n\n\x0E\x01\x09\x04ÿ\xFF0ADis\x2010moi, t'es qui et tu fais quoi ici ?\n[1]Je cherche\ndes trésors[2]En vérité...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x0C\xD05Hmm, je vois...\n\n\n\n\x0E\x01\x09\x04\x0C\xD07Hein ? Moi ?\n\n\n\n\x0E\x01\x09\x04\x09\x90AJe suis <b<Aurélio>>, Mogma en chef.\n\n\n\nPour ne rien te cacher, c'est moi qui ai\ninventé les gants que tu portes !\n\n\n\x0E\x01\x09\x04\x09\x90BMuhohoho !")
/*< 61>*/ 			printf("...\x0E\x01\x09\x04\x0C\x409 Ouais, t'as pas l'air très doué, toi...\n\n\n\n\x0E\x01\x09\x04\x09\xE08T'es pas au courant ?\n\n\n\nOn dit qu'y a un grand trésor ici...\n\n\n\nMais aucun de ceux qui l'ont cherché\nn'est jamais revenu pour en parler...\n\n\nCombien de chasseurs de trésors ont\ndisparu ici, nul ne le sait...\n\n\n\x0E\x01\x09\x04\x0C\x409Je t'avertis en tant que compagnon\nchercheur de trésor...\n\n\n\x0E\x01\x09\x04ÿ\xFF08Tu souhaites continuer ton chemin\nmalgré tout ?\n[1]Oui[2]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf("\x0E\x01\x09\x04\x09\x905Oho, je vois... Laisse\x2010moi te raconter\nune légende qui circule parmi les\nchercheurs de trésors...\n\n\x0E\x01\x09\x04ÿ\xFF0BElle est bien connue de tous les\nMogmas.\n\n\n\x0E\x01\x09\x04\x0C\xD0AT'es prêt ?\n\n\n\n« <r<La statue qui, sereine, sommeille\nface à sa s\x153ur>> est la clé du passage\nvers le trésor des rois.<r< >>»\n\n« Rassemble ton courage et fais taire ta\npeur, <r<jette\x2010toi dans sa bouche >>et la voie\ns'ouvrira. »\n\n\x0E\x01\x09\x04ÿ\x509Souviens\x2010t'en bien !\n[1]Merci[2]Tu peux\nrépéter ?")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf("\x0E\x01\x09\x04\x09\x905Mes gars sont en train de fouiller les\nenvirons à la recherche de trésors.\nSi tu te perds, hésite pas à leur\ndemander conseil.")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf("\x0E\x01\x09\x04ÿ\x07Hohoho ! Ça t'intéresse, hein ?\n\n\n\nÉcoute bien...\n\n\n\n\x0E\x01\x09\x04\x0C\xD0A« <r<La statue qui, sereine, sommeille\nface à sa s\x153ur>> est la clé du passage\nvers le trésor des rois.<r< >>»\n\n« Rassemble ton courage et fais taire ta\npeur, <r<jette\x2010toi dans sa bouche >>et la voie\ns'ouvrira. »\n\n\x0E\x01\x09\x04\x09\x109T'as mémorisé ?\n[1]Oui[2]Encore une fois")
          					goto flw_78
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
          			goto flw_62
          		}
          	}
          }

          void entrypoint_304_15() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("En commençant par celle qui\na le moins d'ailes, apporte la\nlumière aux statues en leur\naccordant une prière.\nLorsqu'elles auront toutes\nretrouvé la lumière, le trésor\ndes rois sera tien.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x1B\xA02Les gants que je t'ai filés étaient une\nassez belle pièce de ma collection.")
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Yo, frangin ! Alors, satisfait des gants\nque je t'ai filés ?\n\n\nSi tu veux voir ce qu'il y a à la surface\npendant que tu creuses, appuie sur (Z).\x0E\x01\x11\x02\x7CD\n\n\nEh ouais, nous les Mogmas, on peut\naussi savoir ce qui se passe à la\nsurface !")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf("\x0E\x01\x09\x04\x1B\xA0DAh la la ! J'me suis encore raté !\nPourquoi faut toujours que j'me rate ?")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x1B\xA0ET'as vu où était le trésor sur la carte ?")
          		  case 1:
/*< 88>*/ 			printf("\x0E\x01\x09\x04\x1B\xB12Ah ! Mais je t'ai donné une carte au\ntrésor exprès !\n\n\n\x0E\x01\x09\x04\x1B\xA0DPfoua la la, ça fait un peu aventurier\nde seconde zone, là...")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x09\x04\x0F\xF09Quant à nous, on va pas rester dans le\ncoin tant qu'y a trop de monstres qui\ntraînent.")
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0BHé, frangin ! T'es encore vivant ?\n\n\n\nJ'ai vu qu'y avait des tonnes de\nmonstres partout !\n\n\n\x0E\x01\x09\x04\x0E\xE0AJ'me demande bien ce qu'ils\ncherchaient...")
/*< 93>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_304_01() {
/*< 14>*/ 	start()
/*< 10>*/ 	switch (scene_flags[100 /* 0xD 10 */]) {
          	  case 0:
/*<101>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<105>*/ 			switch (scene_flags[108 /* 0xC 10 */]) {
          			  case 0:
/*<103>*/ 				printf("\x0E\x01\x09\x04\x3311\x120FHé, frangin !\n\n\n\nPas mal, c'que tu viens de faire\navec la lave, là...\n\n\n\x0E\x01\x09\x04\x3311\x1213Tant que tu y es... tu voudrais pas voir\nc'que tu peux faire pour cette chaîne ?")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf("\x0E\x01\x09\x04\x3311\x1208Hé oh !\n\n\n\nMais t'es le roi de la baston, frangin !\nJe t'ai vu battre ces monstres à plate\ncouture ! J'suis fan !\n\n\x0E\x01\x09\x04\x3311\x1213Tant qu'à faire, tu veux pas me\ndécrocher de là ?")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x13\x1317Fait chaud !\n\n\n\nHé ! C'est pas un spectacle !\nVa voir ailleurs si j'y suis !")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x3313\x1917Ouh ! C'est bon pour les courbatures,\nça !")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf("\x0E\x01\x09\x04\x3316\x1614Hein ? J'savais pas qu'ils recrutaient\nencore des nouveaux geôliers !\n\n\nEh !\n\n\n\nDésolé de te l'annoncer, mais ça me\nfait ni chaud ni froid votre truc !\nJ'vous dirai rien !\n\n\x0E\x01\x09\x04\x3313\x1913Et c'est pas un spectacle !\nVa donc voir ailleurs !")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf("\x0E\x01\x06\x02\xFDCDC'est RIDICULE ! Je suis Ghirahim,\nmonarque démoniaque...")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x331B\xA05Tiens, prends !\n\n\n\nIls étaient enterrés bien au chaud dans\nun coffre, alors ils sont pas sales du\ntout !\n\nT'en trouves pas des comme ça\nn'importe où, alors fais\x2010y attention !")
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x331B\x502Bah OK, je file, hein !\nAdios !")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x330B\x208Yahou ! Je suis sauvé !\n\n\n\n\x0E\x01\x09\x04\x08\xAFFJ'sais pas qui t'es, mais merci !\n\n\n\nT'es aussi venu chercher des trésors ?\n[1]Oui[2]Des trésors ?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x08\x509Haha ! Toi aussi c'est ça qui t'a attiré !")
          			flw_17:
/*< 17>*/ 			printf("Ça se voit à ta tête... T'es là à cause de\nla légende de la <r<statue qui dort>>, hein ?\n\n\nMais dis donc, tes <y<gants >>sentent un peu\nle vieux... Tu les as trouvés au dépotoir\nou quoi ?\n\nBon, euh...\n\n\n\n\x0E\x01\x09\x04\x3308\x90BAllez ! En guise de remerciement, je\nvais te donner mes gants « collection\nspéciale ».\n\nJuste un instant...")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x08\x509Allez, on sait très bien tous les deux\npourquoi t'es venu jusqu'ici !")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf("Peu importe l'épée que tu brandis, tu\nn'en demeures pas moins un\nvulgaire humain...<pause14>\nUn moins que rien !")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf("\x0E\x01\x09\x04\x3311\x1208Hé oh !\n\n\n\nMais t'es le roi de la baston, frangin !\nJe t'ai vu battre ces monstres à plate\ncouture ! J'suis fan !\n\n\x0E\x01\x09\x04\x3311\x1213Tant qu'à faire, tu veux pas me\ndécrocher de là ?")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf("Ma haine envers toi ne s'éteindra\njamais... Je t'ouvrirai les portes de\nl'enfer, misérable insecte !")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf("")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("Hé oh, frangin !\n\n\n\nAlors, t'es content des gants que je t'ai\ndonnés ?\n\n\nSi tu veux voir à la <r<surface>>, appuie\nsur (Z) !\x0E\x01\x11\x02\x7CD\n\n\nT'as saisi ? (Z) pour voir la surface !\nOublie pas, hein !\x0E\x01\x11\x02\x7CD")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf("")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Je vais aller fouiller un peu cette salle.\n\n\n\nFaut que je fasse le rapport au boss à la\nplace de celui qui s'est enfui, et tout...")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x1B\x1A15Ouah, tu lui as vraiment fait sa fête à\nce mur, frangin !")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf("\x0E\x01\x09\x04\x1B\xA02On appelle cet endroit la <r<salle du mur\nsecret>>.\n\n\nIl paraît qu'y a une autre salle derrière\nun de ces murs.\n\n\n\x0E\x01\x09\x04\x1B\x1E0AOn ose pas trop s'approcher des\nsouterrains par ici, c'est trop plein de\nmonstres...\n\n<pling>Mais il existe peut\x2010être un <r<passage\nsecret>>...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09T'inquiète pas, je vais pas te les\npiquer !\n\n\n\x0E\x01\x09\x04\x1B\xA02Les infos qu'il y a dans ce coffre te\nseraient sûrement utiles...")
          				  case 1:
/*<126>*/ 					printf("...")
/*<129>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Salut, frangin !\nContent de te revoir !\n\n\nHéhéhé... Excuse\x2010moi, mais j'ai\nentendu ta conversation.\n\n\nDésolé si ce lascar t'a fait tourner en\nbourrique...\n\n\n\x0E\x01\x09\x04\x1B\xC02Mais ce qu'il t'a dit,\nc'était pas des foutaises !\n\n\nJe sens comme un courant d'air dans\ncette salle...\n\n\n\x0E\x01\x09\x04\x331B\xA0BJe suis sûr que les infos contenues\ndans le coffre te seront utiles !")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf("Le pont de la détermination\nChoisis ton chemin en montrant\nton courage.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Grand sanctuaire\nancien")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf("La probabilité que l'information\ndétenue par cette créature vous soit\nutile est de 80 %.\n\nJe vous recommande fortement de\nl'aider.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf("\x0E\x01\x09\x04\x11\x1213Hé ! Hé ! Allez, frangin, sois pas\ncomme ça ! S'il te plaît, quoi !\nLa chaîne !\n\n\x0E\x01\x09\x04\x16\x1614J'te donnerai une info tellement\nincroyable que tu le regretteras pas !")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x11\x1213Oh ! T'arrives pile au bon moment,\nfrangin !\n\n\n\x0E\x01\x09\x04\x16\x1614J'sais pas qui t'es, mais enlève\x2010moi\ncette chaîne, s'il te plaît !\n[1]Je suis\npressé[2]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("\x0E\x01\x09\x04\x11\x130FAllez ! Si tu me libères, je te dirai un\n<r<super secret >>sur cette salle !\n\n\nUne vraie info qui vaut de l'or !\nHein ? Qu'est\x2010ce que t'en dis ?")
/*< 38>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
          		  case 1:
          			goto flw_43
          		}
          	}
          }

          void entrypoint_304_10() {
/*< 50>*/ 	start()
/*< 49>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 53>*/ 		printf("\x0E\x01\x09\x04\x331B\x2203Tiens ! Prends ça, va !\n\n\n\nCette pièce a un secret super secret,\nque j'ai découvert grâce à mes fouilles\nspéciales... Et cette fois, j'en suis sûr...\n\nT'es prêt ? Il y a dans cette salle...\n\n\n\n\x0E\x01\x09\x04\x331A\x2008\x0E\x01\x08\x02\x2CDUn <r<compartiment secret >>!\n\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x331B\x50ABon, euh, tu diras à personne que je\nm'étais fait attraper, hein ?\n[1]D'accord[2]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Super ! Tu te souviendras de ta\npromesse, j'espère !")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DIngrat !")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Super ! Tu te souviendras de ta\npromesse, j'espère !\n\n\nAllez, salut !")
          				flw_131:
/*<131>*/ 				printf("\x0E\x01\x08\x02\x2CDOh\x2010ho !")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DAh quel ingrat ! Et moi qui croyais\nt'avoir dans la poche...")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf("\x0E\x01\x09\x04\x330B\xA08Youhou ! À moi la liberté !\n\n\n\n\x0E\x01\x09\x04\x3308\xA09Héhé... Merci du coup de main,\nbanane !\n\n\nTu croyais vraiment que j'allais te\ndonner ma super info alors que j'ai eu\ntellement de mal à...\n\n\x0E\x01\x09\x04\x3325\x1A06\x0E\x01\x08\x02\x2CDHein ?\n\n\n\n\x0E\x01\x09\x04\x08\xA00Mais c'est les gants « collection\nspéciale » de mon frérot que t'as là !\nT'es un de ses potes ?\n\n[1]Bien sûr[2]Je l'ai sauvé")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x3325\x1A00Attends ! J'voudrais te donner un\ntruc...\n\n\n\x0E\x01\x09\x04\x00\x500J'vais le chercher, bouge pas !")
/*< 52>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
          		  case 1:
          			goto flw_51
          		}
          	}
          }

          void entrypoint_304_11() {
/*<150>*/ 	start()
/*< 45>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 46>*/ 		printf("\x0E\x01\x09\x04\x11\x1312Hé oh ! Attends une minute !\n\n\n\nJ'te donnerai une super info, alors\nlibère\x2010moi de cette chaîne !")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("\x0E\x01\x09\x04\x11\x1312Hé ! Attends !\n\n\n\nJ'trouve ça pas très sympa que tu\nm'ignores comme ça !\nHein ?\n\nAllez, j'te donnerai un bon tuyau si tu\nm'enlèves cette chaîne !")
          		goto flw_44
          	}
          }

          void entrypoint_304_12() {
/*<  9>*/ 	start()
/*< 18>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 23>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x3308\x802Aaah ! T'es encore là, toi ?\n\n\n\n\x0E\x01\x09\x04\x330B\x901Tu peux revenir autant de fois que tu\nveux, ça changera rien !")
          		  case 1:
/*< 20>*/ 			printf("Ouah ! Un monstre vert !\n\n\n\n\x0E\x01\x09\x04\x332A\x9FFJe pensais pas qu'on me trouverait\nici...\n\n\nJ'suis acculé, faut que j'trouve un\ntruc...\n\n\n\x0E\x01\x09\x04\x330B\x901Héhéhé ! Il peut rien faire contre un\nMogma dans son habitat naturel !\n\n\nÀ moins de me <r<bloquer>> complètement,\nil m'attrapera jamais !")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x331A\x1A0BY a trop de trésors à chercher, par ici !\nC'est parti pour une nuit blanche !")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf("Tiens, voilà pour toi !\n\n\n\n\x0E\x01\x09\x04\x330E\xEFFAu fait, j'y pense, les monstres avaient\nl'air de chercher quelque chose au bord\ndu gouffre, plus loin...\n\nC'est là où tu vas, non ?\nFais attention à toi !\n\n\n\x0E\x01\x09\x04\x330F\xF0BMoi, je retourne chez le boss.\n\n\n\nJe t'ouvrirai la porte au passage.\nAllez, à plus !")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x3321\x1601Ah non ! Tu m'as eu ! Tu peux me faire\ngriller ou bouillir, ça m'est bien égal !\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x331C\x1D05Hein ? Ces gants...\n\n\n\nCe sont ceux de la collection spéciale de\nmon frangin, non ?\n[1]Il me les\na donnés[2]Oui")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("\x0E\x01\x09\x04\x331D\x0BFallait le dire que tu connaissais mon\nfrangin !\n\n\nT'es tout vert, alors j'ai cru que t'étais\nun monstre !\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x3324\x2109Allez, sois pas fâché, va !\nC'était juste un petit préjugé de rien\ndu tout !\n\nTiens, j'vais te donner quelque chose\npour me faire pardonner.\nAttends\x2010moi ici !")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

