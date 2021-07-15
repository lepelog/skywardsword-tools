          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf("Vous participez actuellement au programme\nd'entraînement de <b<Lanelle>>, le dragon de foudre.\nL'analyse de cette zone est impossible.")
          	  case 1:
/*<  1>*/ 		printf("Nous sommes au <b<site du sceau>>. Je détecte la\nprésence de quelques monstres peu dangereux.")
/*<  5>*/ 		printf("\x0E\x01\x12\x04\x00\x01Maître, votre équipement actuel est de type\n« <string arg0> ».")
/*<  2>*/ 		printf("L'adéquation de votre équipement à la zone actuelle\nest de <numeric arg0> %.")
/*<  6>*/ 		printf("Votre épée est la seule arme dont vous aurez besoin\nici. Je vous conseille de vous équiper d'objets non\ndestinés au combat.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf("Le bouclier de bois n'est pas conçu pour vous protéger\ndes attaques de feu.<pause0F> Je ne vous recommande pas de\nl'équiper ici.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Je ne possède aucune information pertinente sur\ncette zone.")
          }

