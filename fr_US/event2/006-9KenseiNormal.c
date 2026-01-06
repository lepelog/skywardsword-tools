          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf(/* textboxtype: 2, unk: 0, line: 77 */ "Votre <color yellow<grappin >coloroff>peut aussi s'accrocher\nau lierre. Vous devriez ainsi pouvoir\natteindre des endroits éloignés.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "Vous pouvez connaître l'emplacement\nde la boutique de Beedle en regardant\nvotre <color blue<carte>coloroff>. Pour entrer, vous devez\nfaire sonner la <color red<grande cloche>coloroff>.")
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 2, unk: 0, line: 25 */ "Pour entrer dans la boutique\nambulante de <color blue<Beedle>coloroff> il faut faire\nsonner la <color red<grande cloche>coloroff>.\n\nCependant, à l'heure actuelle, vous ne\npossédez pas l'équipement nécessaire\npour la faire sonner. Il vous faut\ntrouver un <color red<objet>coloroff> pour tirer à distance.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Vous pouvez explorer des vestiges\nd'anciennes civilisations sur les îles à\nproximité de <color blue<Célesbourg>coloroff>.\n\nLa probabilité d'y trouver des coffres\nest de 80 %.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "La probabilité qu'il s'agisse de\n<color blue<Morcégo>coloroff>, qui vit sous la remise près du\ncimetière, est de 95 %.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 2, unk: 0, line: 31 */ "En rassemblant les <color yellow<cristaux de\ngratitude>coloroff>, Morcégo a pu prendre\nforme humaine. Il y a donc 60 % de\nchances que cette rumeur disparaisse.\nToutefois, il est possible que son visage\nhumain effraie toujours les gens, c'est\npourquoi la rumeur a 40 % de chances\nde perdurer.")
          		  case 1:
/*< 37>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Morcégo collectionne les <color yellow<cristaux\nde gratitude >coloroff>pour prendre forme\nhumaine.\n\nSi vous l'aidez dans sa quête, il y a\n85 % de chances que cela vous soit\nbénéfique, <0x10012:0x00000002>Maître.")
          		}
          	  case 1:
/*< 34>*/ 		printf(/* textboxtype: 2, unk: 0, line: 28 */ "Si vous êtes friand de rumeurs en tout\ngenre, je vous conseille de vous rendre\nà la <color blue<Citrouille perchée>coloroff>.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 4 */ "L'apprenti chevalier <color blue<Latruche >coloroff>explore\nsouvent le ciel à la recherche de\ncette île.\n\nIl aurait récemment découvert\nune île propice aux insectes\nà <color blue<l'intérieur du cumulonimbus>coloroff>.")
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "Cependant, personne ne l'a jamais\ndécouverte.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 84 */ "Il semble possible de ramasser les\n<color blue<flèches perdues >coloroff>qui ont raté leur cible\npour les réutiliser par la suite.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf(/* textboxtype: 2, unk: 0, line: 83 */ "Vous pouvez trancher des arbres fins\navec votre épée.\n\n\nIl semble que trancher une partie\nlumineuse peut libérer des rubis.")
          		}
          	  case 1:
          		goto flw_45
          	}
          }

          void entrypoint_006_904() {
/*<  4>*/ 	start()
/*<  5>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*<  8>*/ 		switch (has_rupees(20)) {
          		  case 0:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "C'est un parc d'attractions où l'on\npeut gagner des sommes de rubis\nconsidérables.\n\nVeillez bien à avoir suffisamment de\nplace dans votre bourse pour stocker\nles rubis gagnés.")
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "C'est un parc d'attractions où l'on peut\ngagner de grandes sommes de rubis.\n\n\nMais il est probable qu'un montant\nsoit exigé au départ.")
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0, line: 7 */ "On dit qu'il est prévu de l'aménager\nen un parc d'attractions où l'on pourra\ngagner d'importantes sommes de rubis.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf(/* textboxtype: 2, unk: 0, line: 58 */ "Ceci n'est pas une rumeur.\n\n\n\nL'énergie des <color red<cubes de la Déesse\n>coloroff>retourne dans le ciel quand elle\nest libérée.\n\nJe peux détecter l'endroit vers lequel\nelle s'est dirigée et vous le signaler sur\nla carte, <0x10012:0x00000002>Maître.")
          	  case 1:
/*< 53>*/ 		printf(/* textboxtype: 2, unk: 0, line: 57 */ "Vous avez sûrement déjà aperçu\nd'<color red<étranges cubes>coloroff> portant l'emblème\nde la Déesse dispersés sur terre.\n\nIl est fort probable qu'ils aient un lien\navec les coffres scellés que l'on trouve\nà <color blue<Célesbourg >coloroff>et sur les îlots dans le\nciel.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Cette boutique disparaît de <color blue<Célesbourg\n>coloroff>la nuit. Il est probable qu'elle se\ndéplace vers une île plus petite.\n\nSi vous voulez découvrir où elle va,\nje vous conseille de<color red< rester dans la\nboutique jusqu'à la tombée de la nuit>coloroff>.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "Mon analyse indique que vous ne\npossédez pas l'équipement nécessaire\npour sonner la cloche. Trouvez un\n<color red<objet>coloroff> pour l'atteindre à distance.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "Jadis, un grand guerrier a découvert\nune stratégie pour récolter beaucoup\nde flèches. La connaissez‐vous?\n[1-]Connais pas[2]Je connais")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 2, unk: 0, line: 64 */ "Le guerrier s'est équipé d'un <color blue<bouclier\nde bois >coloroff>et s'est approché de la\nforteresse des bokoblins.\n\nIl s'est protégé de la pluie de flèches\ndes bokoblins avec son bouclier, puis\na battu en retraite.\n\nLes flèches sont restées <color red<plantées dans\nson bouclier de bois>coloroff>, et il a pu les\nréutiliser.")
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 2, unk: 0, line: 65 */ "Mon analyse suggère que vous pourriez\nfaire de même avec un bouclier de\nbois, <0x10012:0x00000002>Maître.\n\nMais cela l'endommagera, alors\n<color red<surveillez la jauge du bouclier>coloroff>.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf(/* textboxtype: 2, unk: 0, line: 62 */ "Les <color blue<plumes d'oiseau >coloroff>semblent être\ntrès utiles pour améliorer les objets.\n\n\nCependant, il y a 90 % de chances\nque vous ayez d'abord besoin d'un\noutil pour attraper les oiseaux.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf(/* textboxtype: 2, unk: 0, line: 68 */ "Vous pouvez maintenant plonger sous\nl'eau grâce à l'<color blue<écaille du dragon d'eau>coloroff>.\n\n\nVous devriez pouvoir faire de nouvelles\ndécouvertes dans les endroits que vous\navez déjà visités.")
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 2, unk: 0, line: 67 */ "Quelque part dans le monde repose\nl'<color blue<écaille du dragon d'eau>coloroff>. Grâce à elle,\nvous pourriez plonger profondément\nsous l'eau.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf(/* textboxtype: 2, unk: 0, line: 71 */ "Vous pouvez maintenant pénétrer dans\ndes zones de chaleur extrême grâce\naux <color blue<boucles ignifuges>coloroff>.\n\nVous devriez pouvoir explorer les\nendroits qui vous étaient jusqu'alors\ninaccessibles à cause de leur trop forte\nchaleur.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 2, unk: 0, line: 70 */ "Quelque part dans le monde se\ntrouvent les <color blue<boucles ignifuges>coloroff>.\nGrâce à elles, vous pourriez pénétrer\ndans des zones de chaleur extrême.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf(/* textboxtype: 2, unk: 0, line: 44 */ "Si un célestrier s'approche trop près de\nlui, le grand Narisha peut lui donner un\ncoup de nageoire par inadvertance.\nFaites bien attention.")
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 2, unk: 0, line: 43 */ "Depuis sa naissance, il a grandi jusqu'à\natteindre la taille d'une île.\nPersonne ne l'a aperçu récemment.")
          	}
          }

