          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf("Vous participez actuellement au\nprogramme d'entraînement de\n<b<Lanelle>>, le dragon de foudre. L'analyse\nde cette zone est impossible.")
          	  case 1:
/*<  1>*/ 		printf("Nous sommes au <b<vallon du sceau>>.\nJe détecte la présence de quelques\nmonstres peu dangereux.")
/*<  5>*/ 		printf("\x0E\x01\x12\x04\x00\x01Maître, votre équipement actuel est de\ntype « <string arg0> ».")
/*<  2>*/ 		printf("L'adéquation de votre équipement à la\nzone actuelle est de <numeric arg0> %.")
/*<  6>*/ 		printf("Votre épée est la seule arme dont vous\naurez besoin ici. Je vous conseille de\nvous équiper d'objets non destinés au\ncombat.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf("Le bouclier en bois n'est pas conçu\npour vous protéger des attaques de\nfeu.<pause0F> Je ne vous recommande pas de\nl'équiper ici.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Je ne possède aucune information\npertinente sur cette zone.")
          }

