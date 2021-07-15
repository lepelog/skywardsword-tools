          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf("Bienvenue, tu vois !")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf("Chez Radigume, tu peux faire\nfortune, tu vois !\nTu veux jouer au <b<Fouille\x2010rub>>...\n\n\x0E\x01\x09\x04\x14\x1614Oh, tu as l'air exténué !\nReviens me voir quand tu\nauras repris des forces, tu vois.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf("Tu peux t'asseoir en face de moi,\nsi tu veux, tu vois.")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf("Chez Radigume, tu peux faire\nfortune, tu vois !\nTu veux jouer au <b<Fouille\x2010rubis>> ?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf("C'est <r<30 rubis >>la partie, tu vois.\nTu veux jouer ?\n[1]Oui[2-]Non")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf("J'espère que tu déterreras des tonnes\nde rubis ! Bonne chance, tu vois !")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf("Tu n'as pas assez d'argent.\nReviens me voir quand tu\nauras de quoi payer, tu vois !")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf("À quel niveau veux\x2010tu jouer, tu vois ?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf("Le champ de rubis niveau débutant\npossède peu de trous.\nIdéal pour les novices, tu vois !")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf("C'est <r<50 rubis>> la partie, tu vois.\nTu veux jouer ?\n[1]Oui[2-]Non")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf("J'espère que tu déterreras des tonnes\nde rubis ! Bonne chance, tu vois !")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf("Tu n'as pas assez d'argent.\nReviens me voir quand tu\nauras de quoi payer, tu vois !")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf("À quel niveau veux\x2010tu jouer, tu vois ?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf("Le champ de rubis niveau\nintermédiaire possède un peu plus de\ntrous, tu vois. Mais gare aux <y<roupirs >>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf("C'est <r<70 rubis>> la partie, tu vois.\nTu veux jouer ?\n[1]Oui[2-]Non")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf("J'espère que tu déterreras des tonnes\nde rubis ! Bonne chance, tu vois !")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf("Tu n'as pas assez d'argent.\nReviens me voir quand tu\nauras de quoi payer, tu vois !")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf("À quel niveau veux\x2010tu jouer, tu vois ?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf("Le champ de rubis niveau expert\nest truffé de bombes, mais a aussi\nplus de rubis de valeur, tu vois.\nTu peux déterrer un sacré pactole !")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf("À la prochaine, tu vois !")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf("Mais dis\x2010moi, c'est ton baptême de\nFouille\x2010rubis ! J'en suis très honoré,\ntu vois.")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf("Je m'appelle <b<Radigume>>.\nEnchanté, petit ! Je suis le responsable\ndu <r<Fouille\x2010rubis>>, tu vois.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf("Tu as déterré <r<<r<<numeric arg0><r< rubis>>, tu vois.")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf("Tu n'as pas déterré un seul rubis ?\nJe te plains vraiment, tu vois...")
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
/*< 56>*/ 						printf("Tu as l'air exténué, tu vois. Reviens me\nvoir quand tu auras repris des forces.")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf("Tu veux faire une pause ?\nAssieds\x2010toi en face de moi, tu vois.")
          					  case 1:
/*<  2>*/ 						printf("Alors, tu veux rejouer ?\nQuel niveau ?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf("Écoute bien mon conseil, petit.\nLes <r<rubis de faible valeur >>ont <r<peu\nde bombes >>aux alentours, tu vois. \n\nPar contre, si tu déterres un <r<rubis\nde grande valeur>>, il y a de fortes\nchances qu'<r<une bombe ne soit pas loin>>.\n\nSi ton premier trou contient une\nbombe...<pause14> il faut admettre la défaite et\nréessayer. Ne baisse pas les bras,\ntu vois !")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf("Tu t'es fait dépouiller !\nJe suis désolé pour toi, tu vois.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf("Tu as perdu un peu d'argent, tu vois.\nCe n'est pas ton jour de chance.")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf("Tu n'as rien perdu, mais\nrien gagné non plus, tu vois !")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf("Tu as gagné un peu d'argent.\nBien joué, tu vois.")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf("Tu as déterré un sacré pactole !\nFélicitations, tu vois !")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf("Tu as déterré...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf("In\x2010croy\x2010able ! Tu as déterré\ntous les rubis, tu vois !\nTiens, voici une récompense.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("Bienvenue au <r<Fouille\x2010rubis>> !\nMerci de ta visite !\n\n\nVoici un précieux conseil.\nLes <r<rubis de faible valeur >>ont\n<r<peu de bombes >>aux alentours.\n\nPar contre, si tu déterres un\n<r<rubis de grande valeur>>, il y a\nde fortes chances qu'<r<une bombe\nne soit pas loin>>.\nAlors fais bien attention.\nÀ très bientôt !")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("Tu devrais te dépêcher un peu.\nLe temps est presque écoulé, tu vois.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf("Désolé, le temps est écoulé,\npetit ! C'est trop tard, tu vois.")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf("\x0E\x01\x09\x04\x08\xA04Oh, tu veux faire une pause ?\n\n\n\nTu veux bien papoter avec moi\nun instant, tu vois ?\n[1]Oui[2-]Non")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf("\x0E\x01\x09\x04\x0F\x110CSuper, tu vois !\nVas\x2010y, pose\x2010moi une question.\x0E\x01\x09\x04\x08\xAFF[1]Qui es\x2010tu ?[2]Tu flottes ?[3]Tu es ébloui ?[4-]Rien\x0E\x01\x09\x04\x13\x16FF")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x08\xA04Je m'appelle <b<Radigume >>!\nJe suis le seul et unique responsable\ndu <r<Fouille\x2010rubis>>, tu vois.\n\n\x0E\x01\x09\x04\x09\xB09Tu peux aussi m'appeler <b<Monsieur\nRadigume>>. Enchanté, petit !")
          				flw_128:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x13\x1806Tu veux me poser une autre question ?\n[1]Qui es\x2010tu ?[2]Tu flottes ?[3]Tu es ébloui ?[4-]Rien")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x08\xA04Je m'appelle <b<Radigume>>, tu vois.\nJe suis le seul et unique responsable\ndu <r<Fouille\x2010rubis>>, tu vois !\n\nTu peux aussi m'appeler <b<Monsieur\nRadigume>>. \x0E\x01\x09\x04\x0D\xF01Enchanté, petit !\n\n\n\x0E\x01\x09\x04\x08\xA09J'ai lancé le <b<Fouille\x2010rubis>> car je voulais\nque les <b<Mogmas >>puissent faire fortune.\n\n\n\x0E\x01\x09\x04\x10\x1319Mais ils ne veulent pas jouer parce\nqu'ils gagnent déjà tous des tonnes\nde rubis, tu vois...\n\n\x0E\x01\x09\x04\x08\xAFFJ'espère que tu vas devenir un habitué !\nÇa me ferait chaud au c\x153ur, et au\nportefeuille, tu vois.")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf("\x0E\x01\x09\x04\x08\xA04Je m'appelle <b<Radigume>>, tu vois.\nJe suis le seul et unique responsable\ndu <r<Fouille\x2010rubis>>, tu vois !\n\nTu peux aussi m'appeler <b<Monsieur\nRadigume>>. \x0E\x01\x09\x04\x0D\xF01Enchanté, petit !\n\n\n\x0E\x01\x09\x04\x08\xA09J'ai lancé le <b<Fouille\x2010rubis>> car je voulais\nque tout le monde<b< >>puisse faire fortune.\n\n\n\x0E\x01\x09\x04\x10\x1319Mais ces derniers temps, ça grouille\nde <r<monstres rouges et effrayants>>\ndehors... Du coup, les clients viennent\nplus.\n\x0E\x01\x09\x04\x08\xAFFÇa me ferait bien plaisir si quelqu'un\nallait exploser leur <r<tour de guet >>pour\nles chasser de là. Un bon gros BOUM,\ntu vois ?<pling>")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf("\x0E\x01\x09\x04\x08\xA05Non, je ne flotte pas, tu vois.\nJe suis assis sur ma queue pour que\nles clients admirent mes <r<coussinets>>.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf("\x0E\x01\x09\x04\x14\x1605Non, je ne flotte pas, tu vois.\nJe suis assis sur ma queue.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf("\x0E\x01\x09\x04\x00\nEn fait, je suis très fier\nde mes coussinets, tu vois.\nIls sont si meugnons, hein ?")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf("\x0E\x01\x09\x04\x08\xAFFC'est pour ça que je m'assois sur\nma queue ! Comme ça, mes clients\npeuvent admirer mes jolis coussinets !\nC'est ma technique de vente, tu vois.")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x08\xA09Non, je ne suis pas ébloui, tu vois.\nJe suis juste à la pointe de la mode.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf("\x0E\x01\x09\x04\x14\x160AAh, tu parles de mes lunettes ?\nC'est juste pour le style, tu vois.\nElles me vont bien, non ?")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf("\x0E\x01\x09\x04\x14\xE0BEt ma <r<moustache>>, pas mal, non ?\nElle est bien recourbée, tu vois.\nJe la peigne tous les matins.")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf("\x0E\x01\x09\x04\x08\xAFFJe dois être présentable\nauprès de mes clients, non ?\nC'est important, tu vois.")
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
/*<139>*/ 							printf("\x0E\x01\x09\x04\x10\x1319Ah non ? Très bien...\nPrends ton temps et essaie mon\n<b<Fouille\x2010rubis>> quand tu es prêt.")
          						  case 1:
/*<141>*/ 							printf("\x0E\x01\x09\x04\x10\x1319Ah non ? Dommage, tu vois...\n\n\n\n\x0E\x01\x09\x04\x0D\x100CMerci d'avoir papoté avec moi.\nEn échange, je vais te donner\nun conseil.\n\n\x0E\x01\x09\x04\x08\xA04Tu vois les pierres brillantes qui\nsortent du mur là\x2010bas ? C'est un\n<r<gisement de rubis>>.\n\nSi tu <r<lances un projectile>> dessus, tu\nferas sûrement <r<tomber >>quelques rubis.\n<pling>Tu devrais essayer, tu vois !")
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
/*<121>*/ 		printf("\x0E\x01\x09\x04\x10\x1319Oh, dommage, tu vois...\nEn tout cas, quand tu te sentiras mieux,\nfais donc une partie de <b<Fouille\x2010rubis>> !")
          	}
          }

