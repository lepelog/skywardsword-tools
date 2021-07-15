          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf("Cible verrouillée : <b<lemly (jour)>>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf("Vous en avez vaincu <numeric arg0(1)>.\nMon analyse révèle que votre habileté\nau combat contre cet ennemi est\n<string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf("Je ne dispose pas de suffisamment\nd'informations sur cette créature.\n\n\nIl diffère de tous les monstres\nrencontrés jusqu'ici de par ses\nproportions gigantesques et son aura\nmenaçante.[1]Plus de\ndétails[2-]Merci!")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf("Je vous confirme que le <r<pilier de pierre>>\nqu'il porte sur sa tête est celui qui se\ntrouvait planté au fond du <b<site du\nsceau>>.\nIl semble qu'il soit possible d'infliger\ndes dégâts à cette créature en\nenfonçant ce pilier dans sa tête.\n\nCommencez par l'empêcher de bouger\nen attaquant ce qui vous est accessible :\nses pieds.[1]Plus de\ndétails[2-]Merci!")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("Il semble que si vous coupez tous ses\norteils, le monstre devrait être\nincapable de se déplacer.\n\nJe vous conseille de tirer parti des\ncolonnes de vent afin de devancer le\nmonstre plutôt que de courir derrière\nlui.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf("Si vous parvenez à vous placer\nentre les orteils du monstre, une\n<g<attaque circulaire >>vous permettra\nd'infliger un maximum de dégâts.\nSi vous préférez jouer la carte de\nla sécurité, vous pouvez utiliser des\n<y<bombes >>pour l'attaquer à distance.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf("Je ne dispose pas de suffisamment\nd'informations sur cette créature.\n\n\nJe remarque néanmoins une différence\ndans son apparence. Il semble\ndésormais doté de bras. Son aura\ndémoniaque a gagné en puissance.[1]Plus de\ndétails[2-]Merci!")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf("Il semble que le mode d'attaque contre\ncette créature n'ait pas changé depuis\nvotre précédente rencontre.\n\nIl est possible de couper ses orteils\ncomme vous l'avez fait précédemment.\nL'ordre n'importe pas.[1]Plus de\ndétails[2-]Merci!")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf("La probabilité que le dispositif\nmécanique mis au point par Hergo\nse révèle efficace est de 100 %.\n\nSon utilisation vous permettra de\ngagner du temps en ralentissant la\nprogression de la créature.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf("Le dispositif d'<b<Hergo>> peut être déplacé\navec \x0E\x02\x04\x02\xECD.\n\n\nJe vous conseille de le déplacer chaque\nfois que le monstre se trouve dans un\nangle mort.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf("Cette petite créature vit à <b<Célesbourg>>.\nDepuis que <b<Morcégo>> est devenu\nhumain, elle n'est plus violente la nuit.")
          	  case 1:
/*<296>*/ 		printf("Cette petite créature vit à <b<Célesbourg>>.\nDe nature affectueuse le jour, il vaut\nmieux éviter de la rencontrer la nuit...")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf("Je ne sais que peu de choses sur cette\ncréature, mais il semble qu'elle soit le\nréceptacle de l'âme de l'<b<Avatar du\nNéant>>.\nLa forme physique de la créature est à\nprésent dotée d'une queue.\n\n\nJe vous recommande d'utiliser au\nmieux la machine d'<b<Hergo>>.[1]Plus de\ndétails[2-]Merci!")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("Il semble que le mode d'attaque contre\ncette créature n'ait pas changé depuis\nvotre précédente rencontre.\n\nIl est possible de couper ses doigts et\nses orteils comme vous l'avez fait\nprécédemment. L'ordre n'importe pas.[1]Plus de\ndétails[2-]Merci!")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf("Lorsque le monstre est à terre, il risque\nde vous bloquer le chemin. Vous seriez\nalors dans l'impossibilité d'atteindre\nle <r<pilier de pierre>>.\nDans ce cas, je vous suggère de passer\nau niveau inférieur et de remonter\ndevant le monstre au moyen des\ncolonnes de vent.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf("Le monstre a atteint un tel niveau de\npuissance que la probabilité de le\nterrasser à l'épée est de 0 %.\n\nJe vous recommande d'utiliser la\nmachine d'Hergo. Notez que celle\x2010ci\nvous permet à présent de vous projeter\n<r<vous\x2010même>>.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf("L'apparence de votre adversaire s'est\nmodifiée à 90 % depuis votre première\nrencontre. Une aura profondément\nnoire émane de son corps tout entier.\nJe confirme un changement dans\nles techniques de combat employées\npar Ghirahim en raison des blessures\nqu'il a subies précédemment.[1]Plus de\ndétails[2-]Merci!")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf("Je confirme que vous devez continuer\nà concentrer vos attaques sur <r<son\npoint faible à la poitrine>>.\n\nCependant, la probabilité qu'il pare\nles attaques que vous portez dans des\nconditions normales est de 100 %.[1]Plus de\ndétails[2-]Merci!")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf("Ghirahim utilise son épée pour\nprotéger son <r<point faible>>. Je vous\nconseille de la repousser avec la vôtre,\n\x0E\x01\x12\x04\x00\x02Maître.\nLorsque son point faible n'est pas\nprotégé, ne ratez pas l'occasion de\nl'attaquer.[1]Plus de\ndétails[2-]N'en dis\npas trop!")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf("Mon analyse révèle qu'il est\nimpossible de repousser l'épée\nde Ghirahim en une seule attaque.\n\nFrappez plusieurs fois d'affilée\n<r<avec le même angle d'attaque>>\npour y arriver.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf("Cette petite créature vit à <b<Célesbourg>>.\nDepuis que <b<Morcégo>> est devenu\nhumain, elle n'est plus violente la nuit.")
          	  case 1:
/*<300>*/ 		printf("Adorable avec les humains durant la\njournée, cet animal lunatique vous\nattaquera sans pitié si vous le croisez\nla nuit.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf("C'est la source du mal absolu, un être\nmillénaire qui a traversé les âges.\n\n\nOn raconte que son apparence varie\nen fonction de l'individu qui le regarde\net selon les époques.[1]Plus de\ndétails[2-]Merci!")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf("L'<r<éclat céleste>> ne peut être invoqué\nen ce lieu dominé par l'influence\nmaléfique de l'Avatar du Néant.\n\nC'est pourquoi vous ne pouvez utiliser\naucune attaque impliquant l'<r<éclat\ncéleste >>ici.[1]Plus de\ndétails[2-]Merci!")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf("La probabilité que l'Avatar du Néant\nsoit affecté par un coup unique\nest de 0 %, \x0E\x01\x12\x04\x00\x02Maître.\n\nJe vous suggère de lui asséner des\n<r<coups d'épée répétés selon des angles\nvariés >>afin de faire baisser sa garde.[1]Plus de\ndétails[2-]N'en dis\npas trop!")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf("Mon analyse confirme qu'il existe\nune faille dans la garde de l'Avatar\ndu Néant après ses attaques.\n\nMais soyez vigilant.<pause0F> La probabilité\nqu'il pare toute attaque qui s'approche\nde son épée est de 100 %.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf("Mon analyse révèle que la seule\narme efficace contre l'Avatar du\nNéant est l'<y<épée maîtresse>>.\nToute autre arme est impuissante.[1]Plus de\ndétails[2-]Merci!")
/*<150>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_151
          				  case 1:
          				}
          			  case 2:
          				goto flw_147
          			  case 3:
          				goto flw_147
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_690() {
/*<133>*/ 	start()
/*<134>*/ 	printf("L'apparence de votre adversaire s'est\nmodifiée à 90 % depuis votre première\nrencontre. Je constate également qu'il\nutilise une nouvelle arme.[1]Plus de\ndétails[2-]Merci!")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf("Mon analyse confirme que vous\npouvez <r<casser>> l'épée de Ghirahim\navec votre propre épée, \x0E\x01\x12\x04\x00\x02Maître.\n\nJe confirme que c'est la puissance\nmaléfique de Ghirahim qui donne vie\nà son arme.\n\nSon épée est donc plus fragile\nmaintenant qu'il est blessé.[1]Plus de\ndétails[2-]N'en dis\npas trop!")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf("Je détecte une similitude entre le\ncentre de l'épée de Ghirahim et le\n<r<point faible sur sa poitrine>>.\n\nSi vous détruisez le <r<c\x153ur de son épée>>,\nla probabilité qu'elle soit détruite est\nde 100 %.\n\nJe vous conseille d'analyser les\nmouvements de son épée et d'attaquer\ntoujours <r<au même endroit>>.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf("C'est la source du mal absolu, un être\nmillénaire qui a traversé les âges.\n\n\nOn raconte que son apparence varie\nen fonction de l'individu qui le regarde\net selon les époques.[1]Plus de\ndétails[2-]Merci!")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf("L'<r<éclat céleste>> ne peut être invoqué\nen ce lieu dominé par l'influence\nmaléfique de l'Avatar du Néant.\n\nC'est pourquoi vous ne pouvez utiliser\naucune attaque impliquant l'<r<éclat\ncéleste >>ici.[1]Plus de\ndétails[2-]Merci!")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf("Je confirme que vous pouvez utiliser\nla foudre de la même manière que\nl'Avatar du Néant, \x0E\x01\x12\x04\x00\x02Maître.[1]Plus de\ndétails[2-]N'en dis\npas trop!")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf("<r<Au lieu d'invoquer l'éclat céleste>>,\nvous pouvez collecter la foudre dans\nvotre <y<épée maîtresse>>.\n\nLorsqu'un éclair jaillit dans le ciel,\nbrandissez rapidement votre épée\nau\x2010dessus de votre tête.\n\nPrenez garde à ne pas oublier de\nvous défendre contre les attaques\nde l'Avatar du Néant pendant que\nvous cherchez à collecter la foudre.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf("Je confirme que l'Avatar du Néant peut\nstocker et lancer la foudre grâce à son\népée.\n\nSi votre épée entre en contact avec la\nsienne, vous vous ferez électrocuter,\n\x0E\x01\x12\x04\x00\x02Maître.<pause0F> Il est primordial d'attaquer\nau bon moment.[1]Plus de\ndétails[2-]Merci!")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_154
          			  case 2:
          				goto flw_154
          			  case 3:
          				goto flw_154
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_605() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("Ce parasite aux yeux géants a élu\ndomicile dans le corps de <b<Narisha>>. \n\n\nIl s'agit d'un monstre effrayant\ncapable de prendre le contrôle du corps\net de l'âme de son hôte.[1]Plus de\ndétails[2-]Merci!")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf("Mon analyse révèle que les projectiles\nde <b<Bilocytes>> peuvent être <r<renvoyés\n>>par votre épée.\n\nCette méthode s'avérera\nparticulièrement efficace si vous\nparvenez à le toucher avec ses propres\nprojectiles.[1]Plus de\ndétails[2-]Merci!")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf("Il semble que le point faible de ce\nmonstre soit son <r<\x153il >>central.\n\n\nJe vous préviens néanmoins que tant\nque la <r<collerette >>qui borde sa tête est\nen place, toute attaque sur l'<r<\x153il>> du\nmonstre sera inefficace.[1]Plus de\ndétails[2-]N'en dis\npas trop!")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Afin d'être sûr de toucher votre cible,\nil vous faut faire attention à la\ndirection dans laquelle vous dirigez\nvotre épée.\nEn frappant vers la gauche, la boule\nd'énergie partira à gauche, et\ninversement si vous frappez vers la\ndroite.\n<pause0F>Si vous frappez le projectile en levant\nou en abaissant votre épée, il sera\npropulsé tout droit.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nCiblez l'ennemi en maintenant (Z)\nenfoncé et appuyez sur (v) pour que\nje vous présente mon rapport. \x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\n\nVoulez\x2010vous l'entendre maintenant?[1]Oui[2-]Non")
/*<166>*/ 	story_flags[772 /* us: 805A9B2A 0x10, jp: 805ACDAA 0x10 */] = true;
/*<167>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_69:
/*< 69>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 56>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 46}) {
          			  case 0:
/*<250>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf("Mon analyse révèle que les\ndagues lancées par Ghirahim\npeuvent être alignées verticalement,\nhorizontalement ou en diagonale.\nIl est possible de les renvoyer d'un\nsimple coup d'épée donné au bon\nmoment. La difficulté de cette\ntechnique est élevée.[1]Autre\nchose?[2-]Merci!")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("Je confirme que Ghirahim est doté\ndu pouvoir de téléportation.\n\n\nUne analyse plus poussée tend à\ndémontrer qu'il est vulnérable lors de\nsa réapparition.\n\nIl est conseillé d'attaquer à ce moment.\nIl est néanmoins possible que Ghirahim\nse protège avec son épée.[1]Autre\nchose?[2-]Ne me dis\npas tout!")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf("L'une des attaques de Ghirahim\nconsiste à charger dans votre direction,\n\x0E\x01\x12\x04\x00\x02Maître. Je vous suggère de <r<l'attaquer\n>>dès qu'il arrive à votre niveau.\nLa probabilité qu'un indice révèle de\nquel côté Ghirahim va charger alors\nqu'il prépare son attaque est de 100 %.\n\nSi vous ne parvenez pas à attaquer au\nmoment exact où votre adversaire\npasse près de vous, utilisez l'<g<attaque\ncirculaire>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf("J'ai décelé un changement dans la\ntechnique de combat de Ghirahim\ndepuis le début de l'affrontement.\n\nJ'attribue cette évolution aux quelques\ndégâts qu'il a reçus jusqu'ici.[1]Plus de\ndétails[2-]Merci!")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_53
          			  case 2:
          				goto flw_53
          			  case 3:
          				goto flw_53
          			}
          		  case 1:
/*< 63>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 54}) {
          			  case 0:
/*<249>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_62:
/*< 62>*/ 					printf("Sa confiance en ses capacités est sans\nlimite. Prenez l'avantage au moyen\nd'attaques répétées à l'épée dès que sa\ngarde est baissée.\nMais prenez garde à sa main droite.\n<r<Elle suivra rapidement votre épée\ntandis que vous vous préparez à\n<r<frapper<r<. [1]Plus de\ndétails[2-]Merci!>>")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf("La probabilité qu'il saisisse votre lame\nest de 100 % si vous le frappez du côté\ndroit. Levez alors votre épée <r<du côté de\nl'ouverture laissée par ses doigts>>.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf("Mon analyse confirme que les doigts\nde Ghirahim pointent toujours vers le\nhaut lorsqu'il se saisit de votre lame.\n\nLa probabilité de dégager votre épée\nen <r<donnant un coup vers le haut >>est\nde 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf("Sa confiance en ses capacités est sans\nlimite. Prenez l'avantage au moyen\nd'attaques répétées à l'épée dès que sa\ngarde est baissée.\nMais prenez garde à sa main droite.\n<r<Elle suivra rapidement votre épée\ntandis que vous vous préparez à\n<r<frapper<r<. [1]Plus de\ndétails[2-]Merci!>>")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_62
          			  case 2:
          				goto flw_62
          			  case 3:
          				goto flw_62
          			}
          		}
          	  case 1:
/*<168>*/ 		printf("\x0E\x01\x12\x04\x00\x05À vos ordres, Maître. N'hésitez pas à\nm'appeler si vous souhaitez entendre\nmon rapport plus tard.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nCiblez l'ennemi en maintenant (Z)\nenfoncé et appuyez sur (v) pour que\nje vous présente mon rapport. \x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\n\nVoulez\x2010vous l'entendre maintenant?[1]Oui[2-]Non")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("Votre épée a 0 % de chances de\ntranspercer la roche qui recouvre\nson corps. Je vous conseille d'utiliser\nune arme plus destructrice.[1]Plus de\ndétails[2-]Merci!")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf("En raison de la température élevée\nde sa carapace, la probabilité que\nles <y<bombes>> explosent au contact de\nFusiok est de 100 %. Cependant, les\nimpacts sur la partie externe de son\ncorps ne feront que l'énerver. Vous\ndevrez trouver un point d'attaque\nefficace.[1]Plus de détails\n[2-]N'en dis pas trop!")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf("Mon analyse confirme que pour\nôter la carapace incandescente\nde Fusiok, vous devez lui infliger\nde lourds dégâts internes.\nJe vous conseille de <r<lancer une bombe\ndans sa gueule >>lorsqu'il inhale une\ngrande quantité d'air.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf("\x0E\x01\x12\x04\x00\x05À vos ordres, Maître. N'hésitez pas à\nm'appeler si vous souhaitez entendre\nmon rapport plus tard.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nCiblez l'ennemi en maintenant (Z)\nenfoncé et appuyez sur (v) pour que\nje vous présente mon rapport. \x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\n\nVoulez\x2010vous l'entendre maintenant?[1]Oui[2-]Non")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf("Son <r<point faible >>se situe au creux de ses\npinces géantes. Frappez\x2010le à cet\nendroit en prenant soin d'orienter vos\ncoups d'épée dans la bonne direction.[1]Plus de\ndétails[2-]Merci!")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf("Il lui arrive fréquemment de se terrer\ndans le sable lorsqu'il encaisse des\ndégâts.\n\nLorsqu'il se soustrait ainsi aux regards,\nle risque de le voir réaliser une attaque\nrapide avec son dard meurtrier est\nde 85 %.\nJe vous suggère alors de <r<souffler >>sur le\nsable qui le recouvre afin le faire\nréapparaître.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf("Mon analyse révèle que son <r<\x153il central\n>>est exposé si ses deux pinces sont\ndétruites. La probabilité qu'il s'agisse\nlà de son point faible est de 100 %.\nCependant, la présence de carapace\ntout autour de son <r<\x153il >>laisse penser\nqu'une attaque horizontale, verticale\nou diagonale ne peut le blesser.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf("\x0E\x01\x12\x04\x00\x05À vos ordres, Maître. N'hésitez pas à\nm'appeler si vous souhaitez entendre\nmon rapport plus tard.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf("Comme son nom l'indique, le\n« monstre marin antique » est\nune créature qui régnait sur\nles mers il y a très longtemps.\nSes gros <r<tentacules>> peuvent être\nsectionnés, mais ils repoussent après\nun certain temps.[1]Plus de\ndétails[2-]Merci!")
/*< 45>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_268:
/*<268>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<262>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 226}) {
          			  case 0:
/*<269>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_261:
/*<261>*/ 					printf("Je confirme que pour toucher son\npoint faible, son <r<\x153il>>, vous devez\ntout d'abord vous débarrasser\nde ses tentacules.\nMon analyse révèle que vous pouvez\nfacilement les sectionner à l'aide de\nvotre épée.[1]Plus de\ndétails[2-]Merci!")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf("Il est dangereux de vous attaquer à ses\ntentacules un par un car ils\ncontinueront à vous attaquer sans\nrelâche.\nJe vous conseille d'attaquer de\nmanière à en frapper plusieurs\nà la fois avec votre épée.[1]Plus de\ndétails[2-]N'en dis\npas trop!")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf("Les tentacules sectionnés libèrent\nparfois des <r<c\x153urs >>ou des <r<flèches>>.\n\n\nSi vous en manquez, je vous conseille\nde sectionner le plus de tentacules\npossible au lieu d'abandonner.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          				}
          			  case 1:
          				goto flw_261
          			  case 2:
          				goto flw_261
          			  case 3:
          				goto flw_261
          			}
          		  case 1:
/*< 46>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 36}) {
          			  case 0:
/*<248>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_43:
/*< 43>*/ 					printf("Mon analyse révèle qu'il se montrera\nsi vous sectionnez plusieurs de ses\ntentacules.\n\nLa probabilité que les tentacules qui\nvous empêchaient d'explorer le\nvaisseau soient ceux de Daidagos\nest de 99 %.\nIl semble que le <r<pouvoir sacré>> soit\nle moyen le plus efficace pour\nsectionner ses tentacules.[1]Plus de\ndétails[2-]Merci!")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("Mon analyse confirme que vous\npouvez sectionner les tentacules de\nDaidagos en utilisant l'<r<éclat céleste>>.\n\nSon <r<\x153il >>est son point faible. Mais\nla probabilité que l'éclat céleste\npuisse l'atteindre est de 0 %.\n\nJe vous conseille d'attaquer à l'aide\nd'une arme à longue portée.[1]Plus de\ndétails[2-]N'en dis\npas trop!")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf("Je confirme que pour toucher son\npoint faible, son <r<\x153il>>, l'<y<arc>> est l'arme\nla plus efficace.\n\nTendez votre <y<arc>>, puis utilisez \x0E\x02\x04\x02\x8CD\npour vous déplacer. Je vous conseille\nd'esquiver, puis de tirer une <r<flèche>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          				}
          			  case 1:
          				goto flw_43
          			  case 2:
          				goto flw_43
          			  case 3:
          				goto flw_43
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_660() {
/*<179>*/ 	start()
/*<180>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf("Il semble que les bras de Koloktos se\ndétachent de son corps lorsque les\n<r<orbes rouges >>en sont arrachés.\n\nOr, la probabilité que l'orbe de la\npoitrine soit dissimulé derrière les bras\ndu robot est de 100 %.[1]Plus de\ndétails[2-]Merci!")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf("Mon analyse révèle que les <r<orbes\nrouges >>des bras de Koloktos ne\npeuvent en être arrachés que lorsque\nceux\x2010ci sont étendus au maximum.\nJe vous suggère d'attaquer rapidement\nlorsque Koloktos écrase le sol de ses\nbras tendus.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf("Il semble que les orbes rouges puissent\nêtre arrachés au moyen du <y<fouet>>.\n\n\nAu moment où le robot se prépare à\nabaisser ses bras, vous pourrez\nattaquer l'<r<orbe rouge de sa poitrine\n>>pendant un instant.\nCependant, l'<r<orbe rouge >>de sa poitrine\nn'a pas de prise pour votre <y<fouet>>,\net vous ne pourrez donc le déloger.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf("Forme adulte du <b<minigath>>, cette\ncréature est surnommée « arthropode\nmillénaire ».\n\nSon corps est recouvert à plus de 90 %\nd'une carapace impénétrable contre\nlaquelle toute attaque à l'épée est\ninefficace.[1]Plus de\ndétails[2-]Merci!")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<191>*/ 	story_flags[777 /* us: 805A9B2D 0x02, jp: 805ACDAD 0x02 */] = true;
/*<192>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_87:
/*< 87>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 74>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 66}) {
          			  case 0:
/*<252>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_71:
/*< 71>*/ 					printf("Je vous recommande de renvoyer les\ndagues de Ghirahim selon leur angle\nd'attaque.\n\nSi elles vous encerclent, il est probable\nqu'une <r<technique à l'épée permettant\nune attaque de tous les côtés à la fois >>se\nrévèle payante.[1]Autre\nchose?[2-]Merci!")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf("Si vous parvenez à éviter le coup\nplongeant de Ghirahim lorsqu'il se\ntéléporte derrière vous, vous aurez\nune opportunité de contre\x2010attaque.\nIl lui arrive de se téléporter ailleurs,\nmais sa position initiale vous le\nrévélera.[1]Autre\nchose?[2-]Ne me dis\npas tout!")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf("Il est établi que Ghirahim a recours à\nses épées pour parer vos attaques.\n\n\nDe plus, du fait qu'il manie deux lames,\nla probabilité qu'il soit capable\nd'arrêter deux attaques consécutives\nest de 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf("J'ai décelé un changement dans la\ntechnique de combat de Ghirahim\ndepuis le début de l'affrontement.\n\nJ'attribue cette évolution aux quelques\ndégâts qu'il a reçus jusqu'ici.[1]Plus de\ndétails[2-]Merci!")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_71
          			  case 2:
          				goto flw_71
          			  case 3:
          				goto flw_71
          			}
          		  case 1:
/*< 81>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 74}) {
          			  case 0:
/*<251>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					printf("Mon analyse révèle que les dagues\nlancées par Ghirahim ont également\nune fonction défensive.\n\nÉliminer ces dagues peut être un\nmoyen efficace de faire baisser\nsa défense.[1]Plus de\ndétails[2-]Merci!")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf("Il semble que la fonction de la main\ndroite de Ghirahim soit de tenter\nde saisir votre épée.\n\nS'il y parvient, <r<agitez votre épée vers le\nhaut >>pour le forcer à lâcher prise.\nMais sachez que Ghirahim puise de plus\nen plus dans son immense pouvoir.\nLa probabilité qu'il vous faille répéter\ncette action plusieurs fois avant\nd'obtenir le résultat escompté est\nde 100 %.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf("Si vous souhaitez porter une attaque\nefficace, prenez soin de frapper selon\nune trajectoire qui ne peut être coupée\npar ses dagues ou par sa main droite.\nLa main de Ghirahim suit les\nmouvements de votre épée, mais il lui\narrive d'être <r<trop lent pour arrêter\nvotre coup>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          				}
          			  case 1:
          				goto flw_80
          			  case 2:
          				goto flw_80
          			  case 3:
          				goto flw_80
          			}
          		}
          	  case 1:
/*<193>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf("Cet arachnide démesuré se terre dans\nles forêts profondes. Sa technique\nd'attaque préférée consiste à\nimmobiliser ses victimes dans sa toile.\nSon point faible est dissimulé sur son\nabdomen, sous sa carapace robuste.[1]Plus de\ndétails[2-]Merci!")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf("Je confirme que la skulltula a tendance\nà montrer son dos lorsqu'elle attaque,\nafin de ne pas exposer son point faible.\n\nVous devez faire en sorte de la\nretourner pour pouvoir atteindre son\npoint faible.[1]Autre\nchose?[2-]N'en dis\npas trop!")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf("Son unique point faible se situe au\ncentre de la partie ventrale de son\nabdomen. Le <g<coup de grâce >>devrait\nêtre une technique efficace contre elle.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf("Vous en avez vaincu <numeric arg0(1)>.\nMon analyse révèle que votre habileté\nau combat contre cet ennemi est\n<string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf("Je confirme que la skulltula a tendance\nà montrer son dos lorsqu'elle attaque,\nafin de ne pas exposer son point faible.\n\nVous devez faire en sorte de la\nretourner pour pouvoir atteindre son\npoint faible.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf("Cet arachnide démesuré se terre dans\nles forêts profondes. Sa technique\nd'attaque préférée consiste à\nimmobiliser ses victimes dans sa toile.\nSon point faible est dissimulé sur son\nabdomen, sous sa carapace robuste.\n\n\nJe suis actuellement en train d'analyser\nson schéma d'action plus en détail.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf("L'énergie maléfique qu'il tient de\nGhirahim décuple sa puissance.\n\n\nCe sont les <r<orbes rouges >>de ses\nbras et de sa poitrine qui font tenir\nses pièces ensemble.[1]Plus de\ndétails[2-]Merci!")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf("Son corps est recouvert de roche qui\ndissimule son point faible : son <r<\x153il>>.\n\n\nVous avez plus de chances de le vaincre\nen vous débarrassant de sa carapace.[1]Plus de\ndétails[2-]Merci!")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf("Cet individu se fait appeler le\n« <b<monarque démoniaque>> ». Je ne\ndispose que de peu d'informations\nà son sujet.\nIl semble posséder des pouvoirs\ndéveloppés. Je sens une aura puissante\net maléfique qui n'a pas encore révélé\ntoute l'étendue de son pouvoir.[1]Plus de\ndétails[2-]Merci!")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf("Il s'agit du <b<monarque démoniaque>>, le\nmaître des créatures maléfiques.\nL'excellence de son esprit comme de ses\ncapacités physiques est manifeste.\nIl est également passé maître dans\nl'usage de la magie. Il affiche les\nmanières d'un homme du monde, mais\nses accès de colère sont redoutables.[1]Plus de\ndétails[2-]Merci!")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf("J'ai obtenu de nouvelles données,\n\x0E\x01\x12\x04\x00\x0BMaître. Analyse du mode de\ncomportement de cet ennemi terminée.\n\nVoulez\x2010vous entendre mon rapport\nmaintenant? [1]Oui[2-]Non")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf("Il dissimule son véritable pouvoir,\net sa puissance physique a augmenté.\nIl est à craindre qu'aucune de vos\narmes ne soit en mesure de le blesser.[1]Plus de\ndétails[2-]Merci!")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf("Mon analyse révèle que vos coups\nd'épée <r<peuvent faire reculer >>très\nlégèrement votre adversaire.[1]Plus de\ndétails[2-]Merci!")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf("Ghirahim évite manifestement autant\nque possible de se tenir entre vous et le\nbord de la plate\x2010forme, \x0E\x01\x12\x04\x00\x02Maître.\n\nLa probabilité que ce comportement\ns'explique par la crainte de tomber\nde la plate\x2010forme est de 85 %.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf("La probabilité que, comme lors de\nvos précédents combats, Ghirahim se\ndéfende<r< à main nue >>est de 95 %.\n\nLorsque Ghirahim change de posture,\nfaites bien attention au<r< positionnement\nde ses mains>>.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<253>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<288>*/ 				printf("Il dissimule son véritable pouvoir,\net sa puissance physique a augmenté.\nIl est à craindre qu'aucune de vos\narmes ne soit en mesure de le blesser.[1]Plus de\ndétails[2-]Merci!")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf("Mon analyse révèle que vos coups\nd'épée <r<peuvent faire reculer >>très\nlégèrement votre adversaire.[1]Plus de\ndétails[2-]Merci!")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("Ghirahim évite manifestement autant\nque possible de se tenir entre vous et le\nbord de la plate\x2010forme, \x0E\x01\x12\x04\x00\x02Maître.\n\nLa probabilité que ce comportement\ns'explique par la crainte de tomber\nde la plate\x2010forme est de 85 %.[1]Plus de\ndétails[2-]Ne me dis\npas tout!")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf("Il s'agit là de toutes les données\ndont je dispose pour l'instant.\n\n\nLorsque j'ai des informations à vous\ncommuniquer, votre épée se met à\nclignoter. Appuyez sur (v) quand ma\nprésence est requise.\x0E\x01\x11\x02\x9CD\nSi vous avez besoin de renseignements\nsur votre équipement ou sur votre\nenvironnement, veuillez sélectionner\nl'option <r<Analyse>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf("L'apparence de votre adversaire s'est\nmodifiée à 90 % depuis votre première\nrencontre. Une aura profondément\nnoire émane de son corps entier.\nPrenez garde, \x0E\x01\x12\x04\x00\x01Maître. Votre adversaire\nest redoutable et il est hautement\nrecommandé de ne jamais relâcher\nvotre attention.[1]Plus de\ndétails[2-]Merci!")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf("J'ai obtenu de nouvelles données\nd'analyse sur l'<b<Avatar du Néant>>,\n\x0E\x01\x12\x04\x00\x0BMaître. Voulez\x2010vous écouter mon\nrapport maintenant?[1]Oui[2-]Non")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf("L'<r<éclat céleste>> ne peut être invoqué\nen ce lieu dominé par l'influence\nmaléfique de l'Avatar du Néant.\n\nC'est pourquoi vous ne pouvez utiliser\naucune attaque impliquant l'<r<éclat\ncéleste >>ici.[1]Plus de\ndétails[2-]Merci!")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf("Mon analyse révèle que la seule\narme efficace contre l'Avatar du\nNéant est l'<y<épée maîtresse>>.\nToute autre arme est impuissante.[1]Plus de\ndétails[2-]Merci!")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf("Je confirme que l'Avatar du Néant\npeut stocker et lancer la foudre grâce\nà son épée.\n\nSi votre épée entre en contact avec la\nsienne, vous vous ferez électrocuter,\n\x0E\x01\x12\x04\x00\x02Maître.[1]Plus de\ndétails[2-]Merci!")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf("Il me faut plus de temps pour analyser\nles attaques de l'Avatar du Néant.\n\n\nÀ l'avenir, maintenez (Z) enfoncé pour\nle cibler et appuyez sur (v) pour\nm'appeler. Je vous présenterai mon\nrapport.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          					  case 1:
          					}
          				  case 1:
          					goto flw_229
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
/*<223>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez\nentendre mon rapport, maintenez (Z)\nenfoncé pour cibler l'ennemi et\nappuyez sur (v) pour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

