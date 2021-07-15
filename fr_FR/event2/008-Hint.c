          void entrypoint_008_002() {
/*<  5>*/ 	start()
/*<  7>*/ 	printf("Hé, p'tit gars !\nViens donc voir par ici !")
          }

          void entrypoint_008_003() {
/*<  6>*/ 	start()
/*< 17>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 18>*/ 		printf("Moi, j'suis une <b<pierre Sheikah>> !\n<pause0A>.<pause05>.<pause05>.<pause0A> Oh, tu le savais déjà ?\n\n\nOK, alors voilà le topo...<pause0F> Comme tu\njoues en <r<mode héroïque>>, ça veut dire\nque t'as réussi à résoudre toutes les\nénigmes.\nAlors, j'te tire mon chapeau et je vais\nte permettre de consulter <pling><r<toutes les\nvisions >>dès le début !\n\nSi jamais y a une vision que tu veux\nconsulter, hésite pas à venir me voir.\n\n\nAllez, bon courage !")
          	  case 1:
/*< 16>*/ 		printf("Moi, j'suis une <b<pierre Sheikah>> !\nSalutations, enchanté, tout ça...\n\n\nOK, voilà le topo...<pause0F> J'pense que dans\nles prochains jours, tu vas souvent te\nretrouver à galérer et à tourner en\nrond.\nSi jamais y a une énigme que\nt'arrives vraiment pas à résoudre\net qui t'empêche d'avancer, viens\ndonc me voir.\nPour l'instant, j'ai rien à te montrer,\nmais plus tard, j'aurai des <r<trucs\nintéressants >>pour toi. Allez, bon\ncourage, p'tit gars !")
          	}
          }

          void entrypoint_008_004() {
/*< 13>*/ 	start()
/*< 20>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 21>*/ 		entrypoint_008_06();
          	  case 1:
/*< 19>*/ 		printf("Salut, p'tit gars !<pause0A>\nPour l'instant, j'ai rien à te raconter.\n\n\nReviens donc me voir plus tard quand\ntu seras bloqué !")
          	}
          }

          void entrypoint_008_005() {
          	start()
/*<  3>*/ 	printf("Hé ! Ça roule ?\nJ'ai de nouvelles visions !\nTu veux y jeter un \x153il ?[1]Oui[2-]Non merci")
/*<  1>*/ 	switch (choice(2)) {
          	  case 0:
/*<  2>*/ 		changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<  4>*/ 		printf("Je vois... Dans ce cas, bon courage !")
          	}
          }

          void entrypoint_008_006() {
/*<  8>*/ 	start()
/*< 14>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf("Salut, p'tit gars !<pause0A>\nJe peux te montrer toutes mes visions.\nÇa te dit ?[1]Oui[2-]Non merci")
          		flw_9:
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          		  case 1:
/*< 12>*/ 			printf("Je vois... Dans ce cas, bon courage !")
          		}
          	  case 1:
/*< 11>*/ 		printf("Salut !<pause0A> J'ai pas grand\x2010chose de\npassionnant pour toi, mais tu peux\ntoujours jeter un \x153il aux anciennes\nvisions. Ça te dit ?[1]Oui[2-]Non merci")
          		goto flw_9
          	}
          }

