          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf("Alors, t'es content ? Si t'en veux\nd'autres, reviens me voir.")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf("Alors, tu veux acheter un trésor ?\n[1]Oui[2-]Non merci")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf("OK ! Alors dis\x2010moi si y a quelque chose\nqui te fait envie là\x2010dedans...\n[1]Plume\nbleue[2]Crâne d'or[3]Poussière\nde Déesse[4-]Autre")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf("Une plume bleue ? Pas de problème.\nÇa fera <r<200 rubis>> !\n[1]Ça marche[2-]Trop cher !")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf("Super ! Voici ton trésor.")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf("Tu n'as pas assez d'argent !\nReviens me voir quand tu auras\nde quoi payer.")
          						}
          					  case 1:
/*<  8>*/ 						printf("Qu'est\x2010ce que tu croyais, petit ?\nC'est pas les soldes ! Et si t'en avais\nvraiment envie, tu regarderais même\npas le prix...")
          					}
          				  case 1:
/*< 14>*/ 					printf("Un crâne d'or ? J'ai ça en stock !\nJe te le fais à <r<200 rubis>> !\n[1]Ça marche[2-]Trop cher !")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf("Super ! Voici ton trésor.")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf("Tu n'as pas assez d'argent !\nReviens me voir quand tu auras\nde quoi payer.")
          						}
          					  case 1:
/*< 15>*/ 						printf("Qu'est\x2010ce que tu croyais, petit ?\nC'est pas les soldes ! Et si t'en avais\nvraiment envie, tu regarderais même\npas le prix...")
          					}
          				  case 2:
/*< 21>*/ 					printf("Une poussière de Déesse ? Monsieur\nest un connaisseur. Ça fera <r<200 rubis>>.\n[1]Ça marche[2-]Trop cher !")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf("Super ! Voici ton trésor.")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf("Tu n'as pas assez d'argent !\nReviens me voir quand tu auras\nde quoi payer.")
          						}
          					  case 1:
/*< 23>*/ 						printf("Qu'est\x2010ce que tu croyais, petit ?\nC'est pas les soldes ! Et si t'en avais\nvraiment envie, tu regarderais même\npas le prix...")
          					}
          				  case 3:
/*< 53>*/ 					printf("D'autres trésors, hein ? Qu'est\x2010ce que\ntu dis de ça ?\n[1]Perle\nd'ombre[2]Cristal\nmaléfique[3]Cor de\nmonstre[4-]Autre")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf("Une perle d'ombre, tu dis ?\nCe sera <r<100 rubis>> !\n[1]Ça marche[2-]Trop cher !")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf("Super ! Voici ton trésor.")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf("Tu n'as pas assez d'argent !\nReviens me voir quand tu auras\nde quoi payer.")
          							}
          						  case 1:
/*< 29>*/ 							printf("Qu'est\x2010ce que tu croyais, petit ?\nC'est pas les soldes ! Et si t'en avais\nvraiment envie, tu regarderais même\npas le prix...")
          						}
          					  case 1:
/*< 55>*/ 						printf("Et un cristal maléfique, un !\nIl t'en coûtera <r<100 rubis>> !\n[1]Ça marche[2-]Trop cher !")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf("Super ! Voici ton trésor.")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("Tu n'as pas assez d'argent !\nReviens me voir quand tu auras\nde quoi payer.")
          							}
          						  case 1:
/*< 56>*/ 							printf("Qu'est\x2010ce que tu croyais, petit ?\nC'est pas les soldes ! Et si t'en avais\nvraiment envie, tu regarderais même\npas le prix...")
          						}
          					  case 2:
/*< 64>*/ 						printf("OK, un cor de monstre pour Monsieur !\nÇa fera <r<100 rubis >>!\n[1]Ça marche[2-]Trop cher !")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf("Super ! Voici ton trésor.")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf("Tu n'as pas assez d'argent !\nReviens me voir quand tu auras\nde quoi payer.")
          							}
          						  case 1:
/*< 65>*/ 							printf("Qu'est\x2010ce que tu croyais, petit ?\nC'est pas les soldes ! Et si t'en avais\nvraiment envie, tu regarderais même\npas le prix...")
          						}
          					  case 3:
/*< 73>*/ 						printf("Désolé, j'ai que ça en stock...\nSi tu veux autre chose, faudra\nle chercher toi\x2010même...")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf("C'est comme tu le sens... Les gens\nhonnêtes, il vaut mieux qu'ils évitent\nde traîner avec moi...")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf("Boing\x2010soir ! Je suis un vendeur de\nl'ombre... Ah, encore toi ? Pas besoin\nde te faire mon speech, alors !\nTu veux m'acheter un trésor ?\n[1]Oui[2-]Non merci")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf("Boing\x2010soir ! \nJe suis un <b<vendeur de l'ombre>>.\n\n\nS'il y a des trésors que tu désires\nvraiment par\x2010dessus tout, et que tu\ndemandes gentiment, je te les vendrai\npeut\x2010être !")
/*<  2>*/ 				printf("Mais attention ! Ça va te coûter cher !\nLes gens viennent me voir quand il y a\nun trésor qu'ils arrivent pas à trouver\nou qu'ils ont la flemme de chercher...\nAlors, ça t'intéresse ?\n[1]Oui[2-]Non")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Tu dois être un sacré aventurier pour\nêtre arrivé jusqu'ici !\n\n\nTu crois que tu pourrais atterrir dans\nle nid sur la tour en <g<chute libre>>, en\nsautant d'ici ?")
          }

