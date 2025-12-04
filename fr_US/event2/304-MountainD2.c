          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x000c0e09>Il y a une légende qui circule parmi les\nMogmas à propos de cet endroit...\n\n\n« <color red<La statue qui, sereine, sommeille\nface à sa sœur>coloroff> est la clé du passage\nvers le trésor des rois.<color red< >coloroff>»\n\n« Rassemble ton courage et fais taire ta\npeur, <color red<jette‐toi dans sa bouche >coloroff>et la voie\ns'ouvrira. »\n\n<0x10009:0x00090908>Je sais pas si c'est juste des racontars\nou la vérité, mais j'peux t'dire qu'on\nva vérifier ça, c'est sûr.")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<sound 1012><0x10009:0x00ffff02>Aaah, enfin un peu d'air!")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "...<0x10008:0x02cd><0x10009:0x000a5304> AAAAAH!\n\n\n\n<0x10008:0x00cd><0x10009:0x000909ff>Fais-moi pas peur comme ça! Je\npensais que tu étais un monstre!\n\n\n...<0x10009:0x000b0c07> Oh?\n\n\n\nJe vois que t'as des <color yellow<gants creuse‐tout>coloroff>...\n\n\n\n<0x10009:0x00ffff0a>Dis‐moi, t'es qui et tu fais quoi ici?\n[1-]Je cherche\ndes trésors[2-]En fait...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000c0d05>Hmm, je vois...\n\n\n\n<0x10009:0x000c0d07>Hein? Moi?\n\n\n\n<0x10009:0x0009090a>Je suis <color blue<Aurélio>coloroff>, Mogma en chef.\n\n\n\nPour ne rien te cacher, c'est moi qui ai\ninventé les gants que tu portes!\n\n\n<0x10009:0x0009090b>Hohoho!")
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "...<0x10009:0x000c0409> Ouais, il me semble que t'as l'air un\npeu perdu. Pas le genre de gars que\nj'amènerais à la chasse au trésor.\n\n<0x10009:0x00090e08>Bof, je me trompe peut-être.\nDis-moi, es-tu au courant?\n\n\nOn dit qu'y a un grand trésor ici...\n\n\n\nMais aucun de ceux qui l'ont cherché\nn'est jamais revenu pour en parler...\n\n\nCombien de chasseurs de trésors ont\ndisparu ici, personne le sait...\n\n\n<0x10009:0x000c0409>Je t'avertis en tant que compagnon\nchercheur de trésor...\n\n\n<0x10009:0x00ffff08>Veux-tu quand même continuer?\n[1-]Oui[2-]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090905>Oho, je vois... Laisse‐moi te raconter\nune légende qui circule parmi les\nchercheurs de trésors...\n\n<0x10009:0x00ffff0b>Elle est bien connue de tous les\nMogmas.\n\n\n<0x10009:0x000c0d0a>T'es prêt?\n\n\n\n« <color red<La statue qui, sereine, sommeille\nface à sa sœur>coloroff> est la clé du passage\nvers le trésor des rois.<color red< >coloroff>»\n\n« Rassemble ton courage et fais taire ta\npeur, <color red<jette‐toi dans sa bouche >coloroff>et la voie\ns'ouvrira. »\n\n<0x10009:0x00ff0509>Rappelle‐toi de ça!\n[1-]Merci[2-]Tu peux\nrépéter?")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00090905>Mes gars sont en train de fouiller les\nenvirons à la recherche de trésors.\nSi tu te perds, hésite pas à leur\ndemander conseil.")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00ff0007>Hohoho! Ça t'intéresse, hein?\n\n\n\nÉcoute bien...\n\n\n\n<0x10009:0x000c0d0a>« <color red<La statue qui, sereine, sommeille\nface à sa sœur>coloroff> est la clé du passage\nvers le trésor des rois.<color red< >coloroff>»\n\n« Rassemble ton courage et fais taire ta\npeur, <color red<jette‐toi dans sa bouche >coloroff>et la voie\ns'ouvrira. »\n\n<0x10009:0x00090109>L'as‐tu mémorisé?\n[1-]Oui[2-]Encore une fois")
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
/*< 66>*/ 	printf(/* textboxtype: 7, unk: 0, line: 63 */ "En commençant par celle qui\na le moins d'ailes, apporte la\nlumière aux statues en leur\naccordant une prière.\nLorsqu'elles auront toutes\nretrouvé la lumière, le trésor\ndes rois t'appartiendra.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x001b0a02>Les gants que je t'ai donnés étaient une\nassez belle pièce de ma collection.")
          	  case 1:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x001b0a01>Yo, bonhomme! Es-tu satisfait des\ngants que je t'ai donnés?\n\n\nSi tu veux voir ce qu'il y a à la surface\npendant que tu creuses, appuie sur (Z).<0x10011:0x07cd>\n\n\nEn passant, nous les Mogmas, on\npeut aussi savoir ce qui se passe\nà la surface!")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x001b0a0d>Ah nooon! J'me suis encore planté!\nOn dirait que je ne suis pas capable\nde faire comme il faut!")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x001b0a0e>T'as vraiment découvert où était\nle trésor sur la carte?")
          		  case 1:
/*< 88>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x001b0b12>Ah! Mais je t'ai donné une carte au\ntrésor exprès!\n\n\n<0x10009:0x001b0a0d>Ouais... Ça fait un peu aventurier\namateur, ça...")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000f0f09>Tant qu'y a plein de monstres qui\ntraînent ici, on devrait déguerpir.")
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000f0f0b>Hé, bonhomme! T'es encore vivant?\n\n\n\nJ'ai vu qu'y avait des tonnes de\nmonstres partout!\n\n\n<0x10009:0x000e0e0a>J'me demande bien ce qu'ils\ncherchaient...")
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
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x3311120f>Hé, bonhomme!\n\n\n\nPas mal, c'que tu viens de faire\navec la lave, là...\n\n\n<0x10009:0x33111213>Tant qu'à y être... tu voudrais pas voir\nc'que tu peux faire pour cette chaîne?")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>Hé oh!\n\n\n\nMais t'es un champion, bonhomme!\nJe t'ai vu battre ces monstres à plate\ncouture! Impressionnant!\n\n<0x10009:0x33111213>En passant, pourrais-tu me\ndécrocher de là?")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00131317>C'est chaud! C'est chaud! C'est chaud!\n\n\n\nHé! Je ne donne pas de spectacle!\nVa voir ailleurs si j'y suis! Va! Va!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x33131917>Ouf! Ç'a l'air chaud! On dit que c'est\nbon pour les courbatures, ça!")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x33161614>Hein? J'savais pas qu'ils recrutaient\nde nouveaux gardiens!\n\n\nEh!\n\n\n\nÇa me fait de la peine de te dire ça,\nmais ça me fait ni chaud ni froid votre\ninterrogatoire! J'vous dirai rien!\n\n<0x10009:0x33131913>Et je ne donne pas de spectacle!\nVa donc voir ailleurs! Va! Va!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10006:0xfdcd>C'est RIDICULE! Je suis Ghirahim,\nmonarque démoniaque...")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x331b0a05>Tiens, c'est pour toi!\n\n\n\nIls étaient enterrés bien au chaud dans\nun coffre, alors ils sont pas sales du\ntout!\n\nT'en trouves pas des comme ça\nn'importe où, alors fais‐y attention!")
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x331b0502>Parfait. Dans ce cas-là, je me pousse.\nAdios!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x330b0208>Ouiiii! Enfin, sauvé!\n\n\n\n<0x10009:0x00080aff>J'sais pas qui t'es, mais merci!\nJe te revaudrai ça!\n\n\nToi aussi t'es venu chercher\ndes trésors?\n[1-]Oui![2-]Des trésors?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00080509>Haha! Toi aussi c'est ça qui t'a attiré!")
          			flw_17:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ça paraît. T'es là à cause de la fameuse\nlégende de la <color red<statue qui dort>coloroff>, hein?\n\n\nEn passant, tes <color yellow<gants >coloroff>sentent un peu\nle vieux... Tu les as trouvés au dépotoir\nou quoi?\n\n<0x10009:0x3308090b>Tiens! En guise de remerciement, je\nvais te donner mes gants « collection\nspéciale ». Juste un instant...")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00080509>Finalement, on sait très bien tous les\ndeux pourquoi t'es venu jusqu'ici!")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Peu importe l'épée que tu brandis, tu\nn'en demeures pas moins un\nvulgaire humain...<pause 20>\nUn moins que rien!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>Hé oh!\n\n\n\nMais t'es un champion, bonhomme!\nJe t'ai vu battre ces monstres à plate\ncouture! Impressionnant!\n\n<0x10009:0x33111213>En passant, pourrais-tu me\ndécrocher de là?")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "Ma haine envers toi ne s'éteindra\njamais... Je t'ouvrirai les portes de\nl'enfer, misérable insecte!")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "Hé oh, bonhomme!\n\n\n\nT'es content des gants que je t'ai\ndonnés?\n\n\nSi tu veux voir à la <color red<surface>coloroff>, appuie\nsur (Z)!<0x10011:0x07cd>\n\n\nT'as compris? (Z) pour voir la surface!\nOublie pas, hein!<0x10011:0x07cd>")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x001b0a01>Je vais aller fouiller un peu cette salle.\n\n\n\nFaut aussi que je fasse le rapport au\nchef à la place de celui qui s'est enfui.")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x001b1a15>Wow! Tu ne l'as pas manqué,\nle mur, bonhomme!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x001b0a02>On appelle cet endroit la <color red<salle du mur\nsecret>coloroff>.\n\n\nIl paraît qu'y a une autre salle derrière\nun de ces murs.\n\n\n<0x10009:0x001b1e0a>On n'ose pas trop s'approcher des\nsouterrains par ici, c'est tout plein de\nmonstres...\n\n<sound 4>Mais il existe peut‐être un <color red<passage\nsecret>coloroff>...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x001b0a09>C'est un de mes amis qui t'a donné ça?\nT'inquiète pas, je vais pas te les piquer!\n\n\n<0x10009:0x001b0a02>Les informations qu'il y a dans ce\ncoffre te seraient sûrement utiles...")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "...")
/*<129>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x001b0a09>Salut, bonhomme!\nContent de te revoir!\n\n\nHéhéhé... Excuse‐moi, mais j'ai\nentendu ta conversation.\n\n\nDésolé si ce voyou t'a importuné.\n\n\n\n<0x10009:0x001b0c02>Mais ce qu'il t'a dit, c'était tout vrai!\n\n\n\nJe sens comme un courant d'air dans\ncette salle... Je me demande d'où ça\npeut bien venir.\n\n\n<0x10009:0x331b0a0b>Je suis sûr que les informations\ncontenues dans le coffre te seront\nutiles!")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf(/* textboxtype: 7, unk: 0, line: 64 */ "Le pont de la détermination\nChoisis ton chemin en montrant\nton courage.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 20, unk: 0, line: 62 */ "Grand sanctuaire\nancien")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 2, unk: 0, line: 4 */ "La probabilité que l'information\ndétenue par cette créature vous soit\nutile est de 80 %.\n\nJe vous recommande fortement de\nl'aider.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00111213>Hé! Hé! Mon bonhomme. Je te le\ndemande poliment. S'il te plaît.\nLa chaîne!\n\n<0x10009:0x00161614>J'te donnerai une info tellement\nincroyable que tu le regretteras pas!")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00111213>Oh! T'arrives pile au bon moment,\nbonhomme!\n\n\n<0x10009:0x00161614>J'sais pas qui t'es ni d'où tu viens,\nmais enlève‐moi cette chaîne,\ns'il te plaît!\n[1-]Je suis pressé[2-]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x0011130f>Je te récompenserai, même!\nSi tu me libères, je te dirai un\n<color red<super secret >coloroff>sur cette salle!\n\nUne vraie info qui vaut de l'or!\nHein? Dis oui!")
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
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x331b2203>Tiens! Prends ça!\n\n\n\nCette pièce a un secret super secret,\nque j'ai découvert grâce à mes fouilles\nspéciales... Et cette fois, j'en suis sûr...\n\nT'es prêt? Il y a dans cette salle...\n\n\n\n<0x10009:0x331a2008><0x10008:0x02cd>Un <color red<compartiment secret>coloroff>!\n\n\n\n...\n\n\n\n<0x10009:0x331b050a>Bon, euh, tu diras à personne que je\nm'étais fait attraper, compris?\n[1-]D'accord[2-]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x331b2200>Super! Tu te souviendras de ta\npromesse, j'espère!")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x3300100d>Pas de classe!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x331b2200>Super! Tu te souviendras de ta\npromesse, j'espère!\n\n\nBon, bien. À plus! Euh, salut là!")
          				flw_131:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10008:0x02cd>Oh‐ho!")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x3300100d>Ah t'as pas de classe! Et moi qui \nvoulais te rendre service...")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x330b0a08>Ouiiii! Enfin! Douce liberté!\n\n\n\n<0x10009:0x33080a09>Héhé... Euh. Oh, oui... J'oubliais...\nMerci du coup de main, bonhomme!\nTu t'es fait avoir, par contre... Ha!\n\nTu croyais vraiment que j'allais te\ndonner ma super info alors que j'en\nai tellement arraché pour...\n\n<0x10009:0x33251a06><0x10008:0x02cd>Hein?\n\n\n\n<0x10009:0x00080a00>Mais c'est les gants « collection\nspéciale » de mon frérot que t'as là!\nT'es un de ses amis?\n\n[1-]Bien sûr![2-]Je l'ai sauvé!")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x33251a00>Attends! J'voudrais te donner\nquelque chose...\n\n\n<0x10009:0x00000500>J'vais le chercher, bouge pas!")
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
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00111312>Hé oh! Attends une minute, toi!\n\n\n\nJ'te donnerai une super info en\néchange. Libère‐moi de cette\nchaîne! S'IL TE PLAÎT!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00111312>Hé! Attends un peu, toi!\n\n\n\nJ'trouve ça pas très gentil que tu\nm'ignores comme ça! Hein?\n\n\nTiens. J'te donnerai un bon tuyau si tu\nm'enlèves cette chaîne!")
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
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x33080802>Aaah! T'es encore là, toi?\n\n\n\n<0x10009:0x330b0901>Reviens tant que tu veux,\nça ne changera rien!")
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Aaaahh! Un monstre vert!\n\n\n\n<0x10009:0x332a09ff>Je pensais pas qu'ils viendraient\nme trouver jusqu'ici...\n\n\nIl ne me reste plus qu'à essayer de\nles semer.\n\n\n<0x10009:0x330b0901>Héhéhé! Il peut rien faire contre un\nMogma dans son habitat naturel!\n\n\nÀ moins de me <color red<bloquer>coloroff> complètement,\nil m'attrapera jamais!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x331a1a0b>Y a plein de trésors à chercher, par ici!\nOn est parti pour une nuit blanche!")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "Tiens, bonhomme!\n\n\n\n<0x10009:0x330e0eff>Au fait, j'y pense, les monstres avaient\nl'air de chercher quelque chose au bord\ndu gouffre, plus loin...\n\nTu t'en vas là? Fais attention à toi!\n\n\n\n<0x10009:0x330f0f0b>Moi, je retourne chez le chef.\nJe t'ouvrirai la porte au passage.\nÀ plus!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x33211601>Ah nooon! Tu m'as eu! Fais-moi griller\nou bouillir, ça m'est bien égal!\n\n\n...\n\n\n\n<0x10009:0x331c1d05>Une petite minute. Ces gants...\nÇa me dit quelque chose...\n\n\nCe sont ceux de la collection spéciale de\nmon frère, non?\n[1-]Il me les\na donnés[2-]Oui")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x331d000b>Fallait le dire que tu connaissais mon\nfrère!\n\n\nT'es tout vert, alors j'ai cru que t'étais\nun monstre!\n\n\n...\n\n\n\n<0x10009:0x33242109>Prends pas ça personnellement!\nJe me suis trompé, c'est tout.\nExcuse‐moi.\n\nTiens, j'vais te donner quelque chose\npour me faire pardonner.\nAttends‐moi ici!")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

