          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "Votre <color yellow<grappin >coloroff>peut aussi s'accrocher au lierre. Vous\ndevriez ainsi pouvoir atteindre des endroits éloignés.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "Vous pouvez connaître l'emplacement de la boutique\nde Beedle en regardant votre <color blue<carte>coloroff>. Pour entrer, vous\ndevez faire sonner la <color red<grande cloche>coloroff>.")
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 2, line: 25 */ "Pour entrer dans la boutique ambulante de <color blue<Beedle\n>coloroff>il faut faire sonner la <color red<grande cloche>coloroff>.\n\n\nCependant, à l'heure actuelle, vous ne possédez pas\nl'équipement nécessaire pour la faire sonner. Il vous\nfaut trouver un <color red<objet>coloroff> pour tirer à distance.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Vous pouvez explorer des vestiges d'anciennes\ncivilisations sur les îles à proximité de <color blue<Célesbourg>coloroff>.\n\n\nLa probabilité d'y trouver des coffres est de 80 %.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "La probabilité qu'il s'agisse de <color blue<Morcégo>coloroff>, qui vit sous\nla remise près du cimetière, est de 95 %.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 2, line: 31 */ "En rassemblant les <color yellow<cristaux de gratitude>coloroff>, Morcégo\na pu prendre forme humaine. Il y a donc 60 % de\nchances que cette rumeur disparaisse.\n\nToutefois, il est possible que son visage humain effraie\ntoujours les gens, c'est pourquoi la rumeur a 40 % de\nchances de perdurer.")
          		  case 1:
/*< 37>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Morcégo collectionne les <color yellow<cristaux de gratitude >coloroff>pour\nprendre forme humaine.\n\n\nSi vous l'aidez dans sa quête, il y a 85 % de chances\nque cela vous soit bénéfique, <0x10012:0x00000002>Maître.")
          		}
          	  case 1:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 2, line: 28 */ "Si vous êtes friand de rumeurs en tout genre, je vous\nconseille de vous rendre à la <color blue<Citrouille perchée>coloroff>.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 2, line: 4 */ "L'apprenti chevalier <color blue<Latruche >coloroff>explore souvent le ciel\nà la recherche de cette île.\n\n\nIl aurait récemment découvert une île propice\naux insectes à <color blue<l'intérieur du cumulonimbus>coloroff>.")
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "Cependant, personne ne l'a jamais découverte.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 84 */ "Il semble possible de ramasser les <color blue<flèches perdues >coloroff>qui\nont raté leur cible pour les réutiliser par la suite.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf(/* textboxtype: 0, unk: 0, line: 83 */ "Vous pouvez trancher des arbres fins avec votre épée.\n\n\n\nIl semble que trancher une partie lumineuse peut\nlibérer des rubis.")
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
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "C'est un parc d'attractions où l'on peut gagner des\nsommes de rubis considérables.\n\n\nVeillez bien à avoir suffisamment de place dans votre\nbourse pour stocker les rubis gagnés.")
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "C'est un parc d'attractions où l'on peut gagner\nde grandes sommes de rubis.\n\n\nMais il est probable qu'un montant soit exigé\nau départ.")
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 0, unk: 2, line: 7 */ "On dit qu'il est prévu de l'aménager en un parc\nd'attractions où l'on pourra gagner d'importantes\nsommes de rubis.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 2, line: 58 */ "Ceci n'est pas une rumeur.\n\n\n\nL'énergie des <color red<cubes de la Déesse >coloroff>retourne\ndans le ciel quand elle est libérée.\n\n\nJe peux détecter l'endroit vers lequel elle s'est dirigée\net vous le signaler sur la carte, <0x10012:0x00000002>Maître.")
          	  case 1:
/*< 53>*/ 		printf(/* textboxtype: 2, unk: 0, line: 57 */ "Vous avez sûrement déjà aperçu d'<color red<étranges cubes\n>coloroff>portant l'emblème de la Déesse dispersés sur terre.\n\n\nIl est fort probable qu'ils aient un lien avec les coffres\nscellés que l'on trouve à <color blue<Célesbourg >coloroff>et sur les îlots\ndans le ciel.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Cette boutique disparaît de <color blue<Célesbourg >coloroff>la nuit. Il est\nprobable qu'elle se déplace vers une île plus petite.\n\n\nSi vous voulez découvrir où elle va, je vous conseille de\n<color red<rester dans la boutique jusqu'à la tombée de la nuit>coloroff>.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "Mon analyse indique que vous ne possédez pas\nl'équipement nécessaire pour sonner la cloche.\nTrouvez un <color red<objet>coloroff> pour l'atteindre à distance.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "Jadis, un grand guerrier a découvert une stratégie\npour récolter beaucoup de flèches.\nLa connaissez‐vous?[1-]Connais pas[2]Je connais")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "Le guerrier s'est équipé d'un <color blue<bouclier de bois >coloroff>et s'est\napproché de la forteresse des Bokoblins.\n\n\nIl s'est protégé de la pluie de flèches des Bokoblins\navec son bouclier, puis a battu en retraite.\n\n\nLes flèches sont restées <color red<plantées dans son bouclier de\nbois>coloroff>, et il a pu les réutiliser.")
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "Mon analyse suggère que vous pourriez faire de même\navec un bouclier de bois, <0x10012:0x00000002>Maître.\n\n\nMais cela l'endommagera, alors <color red<surveillez la jauge\ndu bouclier>coloroff>.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 62 */ "Les <color blue<plumes d'oiseau >coloroff>semblent être très utiles pour\naméliorer les objets.\n\n\nCependant, il y a 90 % de chances que vous ayez\nd'abord besoin d'un outil pour attraper les oiseaux.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "Vous pouvez maintenant plonger sous l'eau grâce à\nl'<color blue<écaille du dragon d'eau>coloroff>.\n\n\nVous devriez pouvoir faire de nouvelles découvertes\ndans les endroits que vous avez déjà visités.")
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 2, line: 67 */ "Quelque part dans le monde repose l'<color blue<écaille du\ndragon d'eau>coloroff>. Grâce à elle, vous pourriez plonger\nprofondément sous l'eau.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 0, line: 71 */ "Vous pouvez maintenant pénétrer dans des zones de\nchaleur extrême grâce aux <color blue<boucles ignifuges>coloroff>.\n\n\nVous devriez pouvoir explorer les endroits qui vous\nétaient jusqu'alors inaccessibles à cause de leur trop\nforte chaleur.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 2, line: 70 */ "Quelque part dans le monde se trouvent les <color blue<boucles\nignifuges>coloroff>. Grâce à elles, vous pourriez pénétrer dans\ndes zones de chaleur extrême.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "Si un célestrier s'approche trop près de lui, le grand\nNarisha peut lui donner un coup de nageoire par\ninadvertance. Faites bien attention.")
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 43 */ "Depuis sa naissance, il a grandi jusqu'à atteindre la\ntaille d'une île. Personne ne l'a aperçu récemment.")
          	}
          }

