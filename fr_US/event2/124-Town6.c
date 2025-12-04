          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "Et puis, t'es content? Si t'en veux\nd'autres, reviens me voir. Je serai\nlà pour toi!")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 1, line: 17 */ "Tu veux acheter un trésor? C'est ça?\n[1-]Oui![2]Non merci!")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 1, line: 2 */ "OK! Dis‐moi quelle sorte de trésor tu\nrecherches...\n[1-]Plume\nbleue[2-]Crâne d'or[3-]Poussière\nde Déesse[4]Autre")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 1, line: 5 */ "Une plume bleue? Pas de problème.\nÇa fera <color red<200 rubis>coloroff>!\n[1-]Ça marche[2]Trop cher!")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf(/* textboxtype: 1, unk: 1, line: 13 */ "Marché conclu! Voici ton beau trésor!")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf(/* textboxtype: 1, unk: 1, line: 14 */ "Hm. Tu n'as pas assez d'argent!\nQuand tu auras de quoi payer,\non fera des affaires. Vu?")
          						}
          					  case 1:
/*<  8>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Je t'en prie! C'est pas original ce que\ntu dis là. Normalement quand on dit\nque quelque chose est trop cher, c'est\nqu'on n'en a pas vraiment envie.")
          					}
          				  case 1:
/*< 14>*/ 					printf(/* textboxtype: 1, unk: 1, line: 6 */ "Un crâne d'or? J'ai ça en stock!\nJe te l'offre à <color red<200 rubis>coloroff>!\n[1-]Ça marche[2]Trop cher!")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf(/* textboxtype: 1, unk: 1, line: 13 */ "Marché conclu! Voici ton beau trésor!")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf(/* textboxtype: 1, unk: 1, line: 14 */ "Hm. Tu n'as pas assez d'argent!\nQuand tu auras de quoi payer,\non fera des affaires. Vu?")
          						}
          					  case 1:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Je t'en prie! C'est pas original ce que\ntu dis là. Normalement quand on dit\nque quelque chose est trop cher, c'est\nqu'on n'en a pas vraiment envie.")
          					}
          				  case 2:
/*< 21>*/ 					printf(/* textboxtype: 1, unk: 1, line: 7 */ "Une poussière de Déesse? Monsieur\nest un connaisseur. Ça fera <color red<200 rubis>coloroff>.\n[1-]Ça marche[2]Trop cher!")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1, line: 13 */ "Marché conclu! Voici ton beau trésor!")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 1, line: 14 */ "Hm. Tu n'as pas assez d'argent!\nQuand tu auras de quoi payer,\non fera des affaires. Vu?")
          						}
          					  case 1:
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Je t'en prie! C'est pas original ce que\ntu dis là. Normalement quand on dit\nque quelque chose est trop cher, c'est\nqu'on n'en a pas vraiment envie.")
          					}
          				  case 3:
/*< 53>*/ 					printf(/* textboxtype: 1, unk: 1, line: 3 */ "D'autres trésors, hein? Qu'est‐ce que\ntu dis de ça?\n[1-]Perle\nd'ombre[2-]Cristal\nmaléfique[3-]Cor de\nmonstre[4]Autre")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1, line: 8 */ "Une perle d'ombre, tu dis?\nCe sera <color red<100 rubis>coloroff>!\n[1-]Ça marche[2]Trop cher!")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf(/* textboxtype: 1, unk: 1, line: 13 */ "Marché conclu! Voici ton beau trésor!")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf(/* textboxtype: 1, unk: 1, line: 14 */ "Hm. Tu n'as pas assez d'argent!\nQuand tu auras de quoi payer,\non fera des affaires. Vu?")
          							}
          						  case 1:
/*< 29>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "Je t'en prie! C'est pas original ce que\ntu dis là. Normalement quand on dit\nque quelque chose est trop cher, c'est\nqu'on n'en a pas vraiment envie.")
          						}
          					  case 1:
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 1, line: 9 */ "Et un cristal maléfique pour notre\nfin connaisseur! Il est à toi pour la\nmodique somme de <color red<100 rubis>coloroff>!\n[1-]Ça marche[2]Trop cher!")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 1, line: 13 */ "Marché conclu! Voici ton beau trésor!")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 1, line: 14 */ "Hm. Tu n'as pas assez d'argent!\nQuand tu auras de quoi payer,\non fera des affaires. Vu?")
          							}
          						  case 1:
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "Je t'en prie! C'est pas original ce que\ntu dis là. Normalement quand on dit\nque quelque chose est trop cher, c'est\nqu'on n'en a pas vraiment envie.")
          						}
          					  case 2:
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 1, line: 10 */ "OK, un cor de monstre pour Monsieur!\nÇa fera <color red<100 rubis>coloroff>!\n[1-]Ça marche[2]Trop cher!")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf(/* textboxtype: 1, unk: 1, line: 13 */ "Marché conclu! Voici ton beau trésor!")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf(/* textboxtype: 1, unk: 1, line: 14 */ "Hm. Tu n'as pas assez d'argent!\nQuand tu auras de quoi payer,\non fera des affaires. Vu?")
          							}
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "Je t'en prie! C'est pas original ce que\ntu dis là. Normalement quand on dit\nque quelque chose est trop cher, c'est\nqu'on n'en a pas vraiment envie.")
          						}
          					  case 3:
/*< 73>*/ 						printf(/* textboxtype: 1, unk: 1, line: 4 */ "Désolé, c'est tout ce que j'ai pour\nle moment. Si tu veux autre chose,\nfaudra le chercher toi‐même...")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 1, line: 11 */ "C'est comme tu veux... Les gens\nhonnêtes, il vaut mieux qu'ils évitent\nde traîner avec les individus de mon\ngenre... Tu comprends?")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 1, line: 16 */ "Psst! Hé, l'ami! La chance te sourit.\nTu viens de tomber sur le marchant\nde l'... Ah, c'est toi? Tu es revenu?\nTu veux m'acheter un trésor?\n[1-]Oui![2]Non merci!")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Psst! Hé, l'ami! La chance te sourit.\nTu viens de tomber sur le <color blue<marchant\nde l'ombre>coloroff>.\n\nNe me demande pas comment je\nme procure ma marchandise.\nC'est mon secret professionnel.\n\nSi tu es à la recherche d'un bidule\nquelconque, je connais sûrement\nune pierre qui connait une autre\npierre qui peut te l'obtenir...\nPour un prix, bien entendu.")
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 1, line: 1 */ "Mais attention! Ça va te coûter cher!\nLes gens viennent me voir quand il y a\nun trésor qu'ils arrivent pas à trouver\nou qu'ils en ont assez de chercher...\nÇa t'intéresse?\n[1-]Oui[2]Non")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Tu dois être tout un aventurier pour\navoir escaladé jusqu'ici!\n\n\nJe gage que tu pourrais atterrir dans\nle nid sur la tour en sautant d'ici en\n<color green<chute libre>coloroff>. Penses-tu?")
          }

