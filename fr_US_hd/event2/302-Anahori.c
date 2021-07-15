          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf("Bienvenue, l'ami!")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf("Voici. Le jeu consiste à creuser pour trouver\nplein de rubis sans trouver de bombes. Tu veux\njouer au <b<Fouille\x2010rub>>...\n\n\x0E\x01\x09\x04\x14\x1614Ouf... Ça va pas fort, fort, toi! Reviens me voir\nquand tu auras repris des forces. Vu?")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf("Tu peux t'asseoir juste là, si tu veux.")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf("Des rubis en masse! Des explosions surprises!\nC'est ce qui t'attend chez le bon Radigume!\nVeux\x2010tu jouer au <b<Fouille\x2010rubis>>? Hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Non merci")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf("C'est <r<30 rubis >>la partie. Veux\x2010tu jouer?\nHm? Hm?\n\n[1]Absolument[2-]Non merci")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf("J'espère que tu déterreras des tonnes de rubis!\nJe te souhaite bonne chance!")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf("Tu n'as pas assez d'argent, ma foi! Reviens me\nvoir quand tu seras capable de payer! Vu?")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf("À quel niveau veux\x2010tu jouer, hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf("Le champ de rubis niveau débutant possède\npeu de trous. C'est idéal pour les novices.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf("C'est <r<50 rubis>> la partie. Veux\x2010tu jouer?\nHm? Hm?\n[1]Absolument[2-]Non merci")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf("J'espère que tu déterreras des tonnes de rubis!\nJe te souhaite bonne chance!")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf("Tu n'as pas assez d'argent, ma foi! Reviens me\nvoir quand tu seras capable de payer! Vu?")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf("À quel niveau veux\x2010tu jouer, hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf("Le champ de rubis niveau intermédiaire possède\nun peu plus de trous. Mais... gare aux <y<roupirs>>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf("C'est <r<70 rubis>> la partie. Veux\x2010tu jouer?\nHm? Hm?\n[1]Absolument[2-]Non merci")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf("J'espère que tu déterreras des tonnes de rubis!\nJe te souhaite bonne chance!")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf("Tu n'as pas assez d'argent, ma foi! Reviens me\nvoir quand tu seras capable de payer! Vu?")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf("À quel niveau veux\x2010tu jouer, hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf("Le champ de rubis niveau expert est plein\nde bombes, mais a aussi plus de rubis de valeur.\nTu peux déterrer toute une richesse!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf("À la prochaine chicane!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf("Ma foi, c'est ton baptême de Fouille\x2010rubis!\nJ'en suis très honoré!")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf("Je m'appelle <b<Radigume>>. Enchanté de faire ta\nconnaissance, petit! C'est moi le responsable\nde <r<Fouille\x2010rubis>>.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf("Tu as déterré <r<<r<<numeric arg0><r< rubis>>.")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf("Tu n'as pas déterré un seul rubis?\nJe te plains. Pauvre toi.")
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
/*< 56>*/ 						printf("Tu as l'air exténué. Reviens me voir quand\ntu auras repris des forces. Vu?")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf("Tu veux faire une pause? Assieds\x2010toi en face\nde moi. Ça va te faire du bien.")
          					  case 1:
/*<  2>*/ 						printf("Veux\x2010tu rejouer? Hm? Hm? Quel niveau? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]J'ai fini")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf("Écoute bien mon conseil, petit. Les <r<rubis de\nfaible valeur >>ont <r<peu de bombes >>aux alentours.\nVu? \n\nPar contre, si tu déterres un <r<rubis de grande\nvaleur>>, il y a de fortes chances qu'<r<une bombe\nne soit pas loin>>.\n\nSi ton premier trou contient une bombe...<pause14>\nil faut admettre la défaite et réessayer.\nNe baisse pas les bras, tu vois!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf("Tu t'es fait plumer, on dirait! Je suis désolé\npour toi.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf("Tu as perdu un peu d'argent. Hm?\nCe n'est pas ton jour de chance.")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf("Tu n'as rien perdu, mais rien gagné non plus.\nKif-kif, comme on dit. Hm?")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf("Tu as gagné un peu d'argent. Bien joué, l'ami.")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf("Tu as déterré toute une cagnotte! Félicitations!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf("Tu as déterré...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf("In\x2010croy\x2010able! Tu as déterré tous les rubis!\nWatatow! Tiens, voici une récompense.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("Bienvenue au <r<Fouille\x2010rubis>>!\nMerci de ta visite, cher client!\n\n\nVoici un précieux conseil. Les <r<rubis\nde faible valeur >>ont <r<peu de bombes\n>>aux alentours.\n\nPar contre, si tu déterres un <r<rubis\nde grande valeur>>, il y a de fortes\nchances qu'<r<une bombe ne soit pas\nloin>>.\nAlors fais bien attention.\nÀ très bientôt!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("Tu devrais te dépêcher un peu. Le temps est\npresque écoulé.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf("Désolé, le temps est écoulé, petit!\nLa fête est finie...")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf("\x0E\x01\x09\x04\x08\xA04Oh, tu veux faire une pause?\n\n\n\nTu veux bien papoter avec moi un instant,\ntu vois?\n[1]Oui[2-]Non")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf("\x0E\x01\x09\x04\x0F\x110CSuper! Vas\x2010y, pose\x2010moi une question.\n\x0E\x01\x09\x04\x08\xAFF[1]Qui es\x2010tu?[2]Tu flottes?[3]Tu es ébloui?[4-]Rien\x0E\x01\x09\x04\x13\x16FF")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x08\xA04Je m'appelle <b<Radigume>>. Je suis le seul et unique\nresponsable du <r<Fouille\x2010rubis>>! Je n'en suis pas\npeu fier!\n\nTu peux aussi m'appeler <b<monsieur Radigume>>.\n\x0E\x01\x09\x04\x0D\xF01Je n'y aurais aucune objection... Enchanté, petit!")
          				flw_128:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x13\x1806Tu veux me poser une autre question?\n[1]Qui es\x2010tu?[2]Tu flottes?[3]Tu es ébloui?[4-]Rien")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf("Je m'appelle <b<Radigume>>. Je suis le seul et unique\nresponsable du <r<Fouille\x2010rubis>>! Je n'en suis pas\npeu fier!\n\nTu peux aussi m'appeler <b<monsieur Radigume>>.\n\x0E\x01\x09\x04\x0D\xF01Je n'y aurais aucune objection... Enchanté, petit!\n\n\n\x0E\x01\x09\x04\x08\xA09J'ai inventé le <b<Fouille\x2010rubis>> parce que je voulais\nque tout le monde puisse faire fortune.\nPas bête, hm?\n\n\x0E\x01\x09\x04\x10\x1319Mais ils ne veulent pas jouer parce qu'ils\ngagnent déjà tous des tonnes de rubis, tu vois...\n\n\n\x0E\x01\x09\x04\x08\xAFFJ'espère que tu vas devenir un habitué! Ça me\nferait chaud au c\x153ur, et au portefeuille aussi!")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf("\x0E\x01\x09\x04\x08\xA04Je m'appelle <b<Radigume>>. Je suis le seul et unique\nresponsable du <r<Fouille\x2010rubis>>! Je n'en suis pas\npeu fier!\n\nTu peux aussi m'appeler <b<monsieur Radigume>>.\n\x0E\x01\x09\x04\x0D\xF01Je n'y aurais aucune objection... Enchanté, petit!\n\n\n\x0E\x01\x09\x04\x08\xA09J'ai inventé le <b<Fouille\x2010rubis>> parce que je voulais\nque tout le monde puisse faire fortune.\nPas bête, hm?\n\n\x0E\x01\x09\x04\x10\x1319Mais ces derniers temps, ça grouille de\n<r<monstres rouges et effrayants >>dehors...\nLes clients se font rares, tu comprends?\n\n\x0E\x01\x09\x04\x08\xAFFÇa me ferait bien plaisir si quelqu'un allait\nfaire exploser leur <r<tour de guet >>pour les chasser\nde là. Un bon gros BOUM, hm?<pling>")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf("\x0E\x01\x09\x04\x08\xA05Non, je ne flotte pas. Quelle idée! Je suis assis\nsur ma queue pour que les clients admirent mes\n<r<papattes>>.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf("\x0E\x01\x09\x04\x14\x1605Ha! Ha! Non, je ne flotte pas. Quelle drôle\nd'idée... Je suis assis sur ma queue.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf("\x0E\x01\x09\x04\x00\nEn fait, je suis très fier de mes belles <r<papattes>>!")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf("\x0E\x01\x09\x04\x08\xAFFC'est pour ça que je m'assois sur ma queue.\nComme ça, mes clients peuvent les admirer!\nÇa mousse les ventes, c'est pas possible!")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x08\xA09Non, je ne suis pas ébloui. Je suis simplement\nà la pointe de la mode.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf("\x0E\x01\x09\x04\x14\x160AAh, tu parles de mes lunettes? C'est juste pour\nle style, tu vois. Elles me vont bien, hm?")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf("\x0E\x01\x09\x04\x14\xE0BEt ma <r<moustache>>, pas mal, hm? Elle a une belle\nligne, je trouve. Je la peigne tous les matins.")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf("\x0E\x01\x09\x04\x08\xAFFJe dois être présentable auprès de\nmes clients, hm? C'est important\nde soigner son apparence.")
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
/*<139>*/ 							printf("\x0E\x01\x09\x04\x10\x1319Ah non? Très bien... Prends ton temps et\nessaie mon <b<Fouille\x2010rubis>> quand tu es prêt.")
          						  case 1:
/*<141>*/ 							printf("\x0E\x01\x09\x04\x10\x1319Ah non? Hm. Dommage...\n\n\n\n\x0E\x01\x09\x04\x0D\x100CMerci d'avoir placoté avec moi. En échange,\nje vais te donner un conseil.\n\n\n\x0E\x01\x09\x04\x08\xA04Tu vois les pierres brillantes qui sortent du\nmur là\x2010bas? C'est un <r<gisement de rubis>>.\n\n\nSi tu <r<lances un projectile>> dessus, tu feras\nsûrement <r<tomber >>quelques rubis. <pling>Tu devrais\nessayer, pour voir!")
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
/*<121>*/ 		printf("\x0E\x01\x09\x04\x10\x1319Oh, dommage... En tout cas, quand tu te sentiras\nmieux, fais donc une partie de <b<Fouille\x2010rubis>>!")
          	}
          }

