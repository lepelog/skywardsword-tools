          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf("Et puis, t'es content? Si t'en veux d'autres,\nreviens me voir. Je serai là pour toi!")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf("Tu veux acheter un trésor? C'est ça?\n[1]Oui![2-]Non merci!")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf("OK! Dis\x2010moi quelle sorte de trésor tu\nrecherches...\n[1]Plume\nbleue[2]Crâne d'or[3]Poussière\nde Déesse[4-]Autre")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf("Une plume bleue? Pas de problème.\nÇa fera <r<200 rubis>>!\n[1]Ça marche[2-]Trop cher!")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf("Marché conclu! Voici ton beau trésor!")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf("Hm. Tu n'as pas assez d'argent! Quand tu auras\nde quoi payer, on fera des affaires. Vu?")
          						}
          					  case 1:
/*<  8>*/ 						printf("Je t'en prie! C'est pas original ce que tu dis là.\nNormalement quand on dit que quelque chose\nest trop cher, c'est qu'on n'en a pas vraiment\nàenvie.")
          					}
          				  case 1:
/*< 14>*/ 					printf("Un crâne d'or? J'ai ça en stock!\nJe te l'offre à <r<200 rubis>>!\n[1]Ça marche[2-]Trop cher!")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf("Marché conclu! Voici ton beau trésor!")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf("Hm. Tu n'as pas assez d'argent! Quand tu auras\nde quoi payer, on fera des affaires. Vu?")
          						}
          					  case 1:
/*< 15>*/ 						printf("Je t'en prie! C'est pas original ce que tu dis là.\nNormalement quand on dit que quelque chose\nest trop cher, c'est qu'on n'en a pas vraiment\nàenvie.")
          					}
          				  case 2:
/*< 21>*/ 					printf("Une poussière de Déesse? Monsieur\nest un connaisseur. Ça fera <r<200 rubis>>.\n[1]Ça marche[2-]Trop cher!")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf("Marché conclu! Voici ton beau trésor!")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf("Hm. Tu n'as pas assez d'argent! Quand tu auras\nde quoi payer, on fera des affaires. Vu?")
          						}
          					  case 1:
/*< 23>*/ 						printf("Je t'en prie! C'est pas original ce que tu dis là.\nNormalement quand on dit que quelque chose\nest trop cher, c'est qu'on n'en a pas vraiment\nàenvie.")
          					}
          				  case 3:
/*< 53>*/ 					printf("D'autres trésors, hein? Qu'est\x2010ce que tu dis de\nça?\n[1]Perle\nd'ombre[2]Cristal\nmaléfique[3]Cor de\nmonstre[4-]Autre")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf("Une perle d'ombre, tu dis?\nCe sera <r<100 rubis>>!\n[1]Ça marche[2-]Trop cher!")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf("Marché conclu! Voici ton beau trésor!")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf("Hm. Tu n'as pas assez d'argent! Quand tu auras\nde quoi payer, on fera des affaires. Vu?")
          							}
          						  case 1:
/*< 29>*/ 							printf("Je t'en prie! C'est pas original ce que tu dis là.\nNormalement quand on dit que quelque chose\nest trop cher, c'est qu'on n'en a pas vraiment\nàenvie.")
          						}
          					  case 1:
/*< 55>*/ 						printf("Et un cristal maléfique pour notre fin\nconnaisseur! Il est à toi pour la modique\nsomme de <r<100 rubis>>!\n[1]Ça marche[2-]Trop cher!")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf("Marché conclu! Voici ton beau trésor!")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("Hm. Tu n'as pas assez d'argent! Quand tu auras\nde quoi payer, on fera des affaires. Vu?")
          							}
          						  case 1:
/*< 56>*/ 							printf("Je t'en prie! C'est pas original ce que tu dis là.\nNormalement quand on dit que quelque chose\nest trop cher, c'est qu'on n'en a pas vraiment\nàenvie.")
          						}
          					  case 2:
/*< 64>*/ 						printf("OK, un cor de monstre pour Monsieur!\nÇa fera <r<100 rubis>>!\n[1]Ça marche[2-]Trop cher!")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf("Marché conclu! Voici ton beau trésor!")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf("Hm. Tu n'as pas assez d'argent! Quand tu auras\nde quoi payer, on fera des affaires. Vu?")
          							}
          						  case 1:
/*< 65>*/ 							printf("Je t'en prie! C'est pas original ce que tu dis là.\nNormalement quand on dit que quelque chose\nest trop cher, c'est qu'on n'en a pas vraiment\nàenvie.")
          						}
          					  case 3:
/*< 73>*/ 						printf("Désolé, c'est tout ce que j'ai pour le moment.\nSi tu veux autre chose, faudra le chercher\ntoi\x2010même...")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf("C'est comme tu veux... Les gens honnêtes, il vaut\nmieux qu'ils évitent de traîner avec les individus\nde mon genre... Tu comprends?")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf("Psst! Hé, l'ami! La chance te sourit. Tu viens de\ntomber sur le marchant de l'... Ah, c'est toi?\nTu es revenu? Tu veux m'acheter un trésor?\n[1]Oui![2-]Non merci!")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf("Psst! Hé, l'ami! La chance te sourit. Tu viens\nde tomber sur le <b<marchant de l'ombre>>.\n\n\nNe me demande pas comment je me procure ma\nmarchandise. C'est mon secret professionnel.\n\n\nSi tu es à la recherche d'un bidule quelconque,\nje connais sûrement une pierre qui connait\nune autre pierre qui peut te l'obtenir...\n\nPour un prix, bien entendu.")
/*<  2>*/ 				printf("Mais attention! Ça va te coûter cher! Les gens\nviennent me voir quand il y a un trésor qu'ils\narrivent pas à trouver ou qu'ils en ont assez\nde chercher...\nÇa t'intéresse?\n[1]Oui[2-]Non")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Tu dois être tout un aventurier pour avoir\nescaladé jusqu'ici!\n\n\nJe gage que tu pourrais atterrir dans le nid\nsur la tour en sautant d'ici en <g<chute libre>>.\nPenses-tu?")
          }

