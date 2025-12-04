          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "Alors, t'es content ? Si t'en veux d'autres,\nreviens me voir.")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "Alors, tu veux acheter un trésor ?\n[1-]Oui[2]Non merci")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "OK ! Alors dis‐moi si y a quelque chose qui te\nfait envie là‐dedans...\n[1-]Plume\nbleue[2-]Crâne d'or[3-]Poussière\nde Déesse[4]Autre")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "Une plume bleue ? Pas de problème. Ça fera\n<color red<200 rubis>coloroff> !\n[1-]Ça marche[2]Trop cher !")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "Super ! Voici ton trésor.")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tu n'as pas assez d'argent ! Reviens me voir\nquand tu auras de quoi payer.")
          						}
          					  case 1:
/*<  8>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Qu'est‐ce que tu croyais, petit ? C'est pas les\nsoldes ! Et si t'en avais vraiment envie, tu\nregarderais même pas le prix...")
          					}
          				  case 1:
/*< 14>*/ 					printf(/* textboxtype: 1, unk: 1, line: 6 */ "Un crâne d'or ? J'ai ça en stock ! Je te le fais\nà <color red<200 rubis>coloroff> !\n[1-]Ça marche[2]Trop cher !")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "Super ! Voici ton trésor.")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tu n'as pas assez d'argent ! Reviens me voir\nquand tu auras de quoi payer.")
          						}
          					  case 1:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Qu'est‐ce que tu croyais, petit ? C'est pas les\nsoldes ! Et si t'en avais vraiment envie, tu\nregarderais même pas le prix...")
          					}
          				  case 2:
/*< 21>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Une poussière de Déesse ? Monsieur est un\nconnaisseur. Ça fera <color red<200 rubis>coloroff>.\n[1-]Ça marche[2]Trop cher !")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "Super ! Voici ton trésor.")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tu n'as pas assez d'argent ! Reviens me voir\nquand tu auras de quoi payer.")
          						}
          					  case 1:
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Qu'est‐ce que tu croyais, petit ? C'est pas les\nsoldes ! Et si t'en avais vraiment envie, tu\nregarderais même pas le prix...")
          					}
          				  case 3:
/*< 53>*/ 					printf(/* textboxtype: 1, unk: 1, line: 3 */ "D'autres trésors, hein ? Qu'est‐ce que tu dis de\nça ?\n[1-]Perle\nd'ombre[2-]Cristal\nmaléfique[3-]Cor de\nmonstre[4]Autre")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 8 */ "Une perle d'ombre, tu dis ? Ce sera <color red<100 rubis>coloroff> !\n[1-]Ça marche[2]Trop cher !")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "Super ! Voici ton trésor.")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tu n'as pas assez d'argent ! Reviens me voir\nquand tu auras de quoi payer.")
          							}
          						  case 1:
/*< 29>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "Qu'est‐ce que tu croyais, petit ? C'est pas les\nsoldes ! Et si t'en avais vraiment envie, tu\nregarderais même pas le prix...")
          						}
          					  case 1:
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 1, line: 9 */ "Et un cristal maléfique, un ! Il t'en coûtera\n<color red<100 rubis>coloroff> !\n[1-]Ça marche[2]Trop cher !")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "Super ! Voici ton trésor.")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tu n'as pas assez d'argent ! Reviens me voir\nquand tu auras de quoi payer.")
          							}
          						  case 1:
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "Qu'est‐ce que tu croyais, petit ? C'est pas les\nsoldes ! Et si t'en avais vraiment envie, tu\nregarderais même pas le prix...")
          						}
          					  case 2:
/*< 64>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "OK, un cor de monstre pour Monsieur ! Ça\nfera <color red<100 rubis >coloroff>!\n[1-]Ça marche[2]Trop cher !")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "Super ! Voici ton trésor.")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tu n'as pas assez d'argent ! Reviens me voir\nquand tu auras de quoi payer.")
          							}
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "Qu'est‐ce que tu croyais, petit ? C'est pas les\nsoldes ! Et si t'en avais vraiment envie, tu\nregarderais même pas le prix...")
          						}
          					  case 3:
/*< 73>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "Désolé, j'ai que ça en stock... Si tu veux autre\nchose, faudra le chercher toi‐même...")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "C'est comme tu le sens... Les gens honnêtes, il\nvaut mieux qu'ils évitent de traîner avec moi...")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "Boing‐soir ! Je suis un vendeur de l'ombre...\nAh, encore toi ? Pas besoin de te faire mon\nspeech, alors ! Tu veux m'acheter un trésor ?\n[1-]Oui[2]Non merci")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Boing‐soir ! Je suis un <color blue<vendeur de l'ombre>coloroff>.\n\n\n\nS'il y a des trésors que tu désires vraiment\npar‐dessus tout, et que tu demandes gentiment,\nje te les vendrai peut‐être !")
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "Mais attention ! Ça va te coûter cher ! Les gens\nviennent me voir quand il y a un trésor qu'ils\narrivent pas à trouver ou qu'ils ont la flemme\nde chercher...\nAlors, ça t'intéresse ?\n[1-]Oui[2]Non")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 1, line: 18 */ "Tu dois être un sacré aventurier pour être\narrivé jusqu'ici !\n\n\nTu crois que tu pourrais atterrir dans le nid sur\nla tour en <color green<chute libre>coloroff>, en sautant d'ici ?")
          }

