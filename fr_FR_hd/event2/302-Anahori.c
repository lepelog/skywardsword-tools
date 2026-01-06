          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "Bienvenue, tu vois !")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Chez Radigume, tu peux faire fortune, tu vois !\nTu veux jouer au <color blue<Fouille‐rub>coloroff>...\n\n\n<0x10009:0x00141614>Oh, tu as l'air exténué ! Reviens me voir quand\ntu auras repris des forces, tu vois.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 2, unk: 0, line: 8 */ "Tu peux t'asseoir en face de moi, si tu veux,\ntu vois.")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Chez Radigume, tu peux faire fortune, tu vois !\nTu veux jouer au <color blue<Fouille‐rubis>coloroff> ?\n[1-]Débutant[2-]Intermédiaire[3-]Expert[4]Quitter")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "C'est <color red<30 rubis >coloroff>la partie, tu vois. Tu veux jouer ?\n[1-]Oui[2]Non")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "J'espère que tu déterreras des tonnes de rubis !\nBonne chance, tu vois !")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Tu n'as pas assez d'argent. Reviens me voir\nquand tu auras de quoi payer, tu vois !")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "À quel niveau veux‐tu jouer, tu vois ?\n[1-]Débutant[2-]Intermédiaire[3-]Expert[4]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "Le champ de rubis niveau débutant possède peu\nde trous. Idéal pour les novices, tu vois !")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "C'est <color red<50 rubis>coloroff> la partie, tu vois. Tu veux jouer ?\n[1-]Oui[2]Non")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "J'espère que tu déterreras des tonnes de rubis !\nBonne chance, tu vois !")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Tu n'as pas assez d'argent. Reviens me voir\nquand tu auras de quoi payer, tu vois !")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "À quel niveau veux‐tu jouer, tu vois ?\n[1-]Débutant[2-]Intermédiaire[3-]Expert[4]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "Le champ de rubis niveau intermédiaire possède\nun peu plus de trous, tu vois. Mais gare aux\n<color yellow<roupirs >coloroff>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "C'est <color red<70 rubis>coloroff> la partie, tu vois. Tu veux jouer ?\n[1-]Oui[2]Non")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "J'espère que tu déterreras des tonnes de rubis !\nBonne chance, tu vois !")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Tu n'as pas assez d'argent. Reviens me voir\nquand tu auras de quoi payer, tu vois !")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "À quel niveau veux‐tu jouer, tu vois ?\n[1-]Débutant[2-]Intermédiaire[3-]Expert[4]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "Le champ de rubis niveau expert est truffé de\nbombes, mais a aussi plus de rubis de valeur,\ntu vois. Tu peux déterrer un sacré pactole !")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "À la prochaine, tu vois !")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Mais dis‐moi, c'est ton baptême de\nFouille‐rubis ! J'en suis très honoré,\ntu vois.")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Je m'appelle <color blue<Radigume>coloroff>. Enchanté, petit ! Je\nsuis le responsable du <color red<Fouille‐rubis>coloroff>, tu vois.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 1, line: 24 */ "Tu as déterré <color red<<color red<<numeric arg0 0><color red< rubis>coloroff>, tu vois.")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "Tu n'as pas déterré un seul rubis ? Je te plains\nvraiment, tu vois...")
          				flw_103:
/*<103>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 81, 'param3': 13}
/*< 81>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 108, 'param3': 12}
/*<108>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 45}
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 56, 'param3': 13}
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "Tu as l'air exténué, tu vois. Reviens me voir\nquand tu auras repris des forces.")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Tu veux faire une pause ? Assieds‐toi en face\nde moi, tu vois.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "Alors, tu veux rejouer ? Quel niveau ?\n[1-]Débutant[2-]Intermédiaire[3-]Expert[4]Quitter")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "Écoute bien mon conseil, petit. Les <color red<rubis de\nfaible valeur >coloroff>ont <color red<peu de bombes >coloroff>aux alentours,\ntu vois. \n\nPar contre, si tu déterres un <color red<rubis de grande\nvaleur>coloroff>, il y a de fortes chances qu'<color red<une bombe\nne soit pas loin>coloroff>.\n\nSi ton premier trou contient une bombe...<pause 20> il faut\nadmettre la défaite et réessayer. Ne baisse pas\nles bras, tu vois !")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 1, line: 18 */ "Tu t'es fait dépouiller ! Je suis désolé pour toi,\ntu vois.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "Tu as perdu un peu d'argent, tu vois. Ce n'est\npas ton jour de chance.")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Tu n'as rien perdu, mais rien gagné non plus,\ntu vois !")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 1, line: 21 */ "Tu as gagné un peu d'argent. Bien joué, tu vois.")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "Tu as déterré un sacré pactole ! Félicitations,\ntu vois !")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Tu as déterré...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "In‐croy‐able ! Tu as déterré tous les rubis,\ntu vois ! Tiens, voici une récompense.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Bienvenue au <color red<Fouille‐rubis>coloroff> !\nMerci de ta visite !\n\n\nVoici un précieux conseil. Les <color red<rubis\nde faible valeur >coloroff>ont <color red<peu de bombes\n>coloroff>aux alentours.\n\nPar contre, si tu déterres un <color red<rubis\nde grande valeur>coloroff>, il y a de fortes\nchances qu'<color red<une bombe ne soit pas\nloin>coloroff>.\nAlors fais bien attention.\nÀ très bientôt !")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "Tu devrais te dépêcher un peu. Le temps est\npresque écoulé, tu vois.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "Désolé, le temps est écoulé, petit ! C'est trop\ntard, tu vois.")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00080a04>Oh, tu veux faire une pause ?\n\n\n\nTu veux bien papoter avec moi un instant,\ntu vois ?\n[1-]Oui[2]Non")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000f110c>Super, tu vois ! Vas‐y, pose‐moi une question.<0x10009:0x00080aff>\n[1-]Qui es‐tu ?[2-]Tu flottes ?[3-]Tu es ébloui ?[4]Rien<0x10009:0x001316ff>")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00080a04>Je m'appelle <color blue<Radigume >coloroff>! Je suis le seul et\nunique responsable du <color red<Fouille‐rubis>coloroff>, tu vois.\n\n\n<0x10009:0x00090b09>Tu peux aussi m'appeler <color blue<Monsieur Radigume>coloroff>.\nEnchanté, petit !")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00131806>Tu veux me poser une autre question ?\n[1-]Qui es‐tu ?[2-]Tu flottes ?[3-]Tu es ébloui ?[4]Rien")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00080a04>Je m'appelle <color blue<Radigume>coloroff>, tu vois. Je suis le seul\net unique responsable du <color red<Fouille‐rubis>coloroff>, tu vois !\n\n\nTu peux aussi m'appeler <color blue<Monsieur Radigume>coloroff>.\n<0x10009:0x000d0f01>Enchanté, petit !\n\n\n<0x10009:0x00080a09>J'ai lancé le <color blue<Fouille‐rubis>coloroff> car je voulais que les\n<color blue<Mogmas >coloroff>puissent faire fortune.\n\n\n<0x10009:0x00101319>Mais ils ne veulent pas jouer parce qu'ils\ngagnent déjà tous des tonnes de rubis, tu vois...\n\n\n<0x10009:0x00080aff>J'espère que tu vas devenir un habitué ! Ça me\nferait chaud au cœur, et au portefeuille, tu vois.")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00080a04>Je m'appelle <color blue<Radigume>coloroff>, tu vois. Je suis le seul\net unique responsable du <color red<Fouille‐rubis>coloroff>, tu vois !\n\n\nTu peux aussi m'appeler <color blue<Monsieur Radigume>coloroff>.\n<0x10009:0x000d0f01>Enchanté, petit !\n\n\n<0x10009:0x00080a09>J'ai lancé le <color blue<Fouille‐rubis>coloroff> car je voulais que tout\nle monde<color blue< >coloroff>puisse faire fortune.\n\n\n<0x10009:0x00101319>Mais ces derniers temps, ça grouille de\n<color red<monstres rouges et effrayants >coloroff>dehors...\nDu coup, les clients viennent plus.\n\n<0x10009:0x00080aff>Ça me ferait bien plaisir si quelqu'un allait\nexploser leur <color red<tour de guet >coloroff>pour les chasser\nde là. Un bon gros BOUM, tu vois ?<sound 4>")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00080a05>Non, je ne flotte pas, tu vois. Je suis assis sur\nma queue pour que les clients admirent mes\n<color red<coussinets>coloroff>.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00141605>Non, je ne flotte pas, tu vois. Je suis assis sur\nma queue.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>En fait, je suis très fier de mes coussinets,\ntu vois. Ils sont si meugnons, hein ?")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00080aff>C'est pour ça que je m'assois sur ma queue !\nComme ça, mes clients peuvent admirer mes\njolis coussinets ! C'est ma technique de vente,\ntu vois.")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00080a09>Non, je ne suis pas ébloui, tu vois. Je suis juste\nà la pointe de la mode.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x0014160a>Ah, tu parles de mes lunettes ? C'est juste pour\nle style, tu vois. Elles me vont bien, non ?")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00140e0b>Et ma <color red<moustache>coloroff>, pas mal, non ? Elle est bien\nrecourbée, tu vois. Je la peigne tous les matins.")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080aff>Je dois être présentable auprès de mes clients,\nnon ? C'est important, tu vois.")
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (zone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00101319>Ah non ? Très bien... Prends ton temps et\nessaie mon <color blue<Fouille‐rubis>coloroff> quand tu es prêt.")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00101319>Ah non ? Dommage, tu vois...\n\n\n\n<0x10009:0x000d100c>Merci d'avoir papoté avec moi. En échange,\nje vais te donner un conseil.\n\n\n<0x10009:0x00080a04>Tu vois les pierres brillantes qui sortent du\nmur là‐bas ? C'est un <color red<gisement de rubis>coloroff>.\n\n\nSi tu <color red<lances un projectile>coloroff> dessus, tu feras\nsûrement <color red<tomber >coloroff>quelques rubis. <sound 4>Tu devrais\nessayer, tu vois !")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00101319>Oh, dommage, tu vois... En tout cas, quand\ntu te sentiras mieux, fais donc une partie de\n<color blue<Fouille‐rubis>coloroff> !")
          	}
          }

