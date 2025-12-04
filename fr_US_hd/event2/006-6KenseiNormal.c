          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Cible verrouillée : <color blue<Lemly (jour)>coloroff><color blue<<entrypoint_6_601>>coloroff>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf(/* textboxtype: 0, unk: 0, line: 185 */ "Vous en avez vaincu <numeric arg0 1>. Mon analyse révèle que\nvotre habileté au combat contre cet ennemi est\n<string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "Je ne dispose pas de suffisamment d'informations\nsur cette créature.\n\n\nIl diffère de tous les monstres rencontrés jusqu'ici\nde par ses proportions gigantesques et son aura\nmenaçante.[1-]Plus de\ndétails[2]Merci!")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf(/* textboxtype: 2, unk: 0, line: 96 */ "Je vous confirme que le <color red<pilier de pierre >coloroff>qu'il porte\nsur sa tête est celui qui se trouvait planté au fond\ndu <color blue<site du sceau>coloroff>.\n\nIl semble qu'il soit possible d'infliger des dégâts à\ncette créature en enfonçant ce pilier dans sa tête.\n\n\nCommencez par l'empêcher de bouger en attaquant\nce qui vous est accessible : ses pieds.[1-]Plus de \ndétails[2]Merci!")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 0, unk: 2, line: 97 */ "Il semble que si vous coupez tous ses orteils, le\nmonstre devrait être incapable de se déplacer.\n\n\nJe vous conseille de tirer parti des colonnes de vent\nafin de devancer le monstre plutôt que de courir\nderrière lui.[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "Si vous parvenez à vous placer entre les orteils du\nmonstre, une <color green<attaque circulaire >coloroff>vous permettra\nd'infliger un maximum de dégâts.\n\nSi vous préférez jouer la carte de la sécurité, vous\npouvez utiliser des <color yellow<bombes >coloroff>pour l'attaquer à distance.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf(/* textboxtype: 0, unk: 2, line: 100 */ "Je ne dispose pas de suffisamment d'informations\nsur cette créature.\n\n\nJe remarque néanmoins une différence dans son\napparence. Il semble désormais doté de bras. Son\naura démoniaque a gagné en puissance.[1-]Plus de\ndétails[2]Merci!")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "Il semble que le mode d'attaque contre cette créature\nn'ait pas changé depuis votre précédente rencontre.\n\n\nIl est possible de couper ses orteils comme vous l'avez\nfait précédemment. L'ordre n'importe pas.[1-]Plus de\ndétails[2]Merci!")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf(/* textboxtype: 2, unk: 1, line: 102 */ "La probabilité que le dispositif mécanique mis au\npoint par <color blue<Hergo>coloroff> se révèle efficace est de 100 %.\n\n\nSon utilisation vous permettra de gagner du temps\nen ralentissant la progression de la créature.[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf(/* textboxtype: 0, unk: 2, line: 103 */ "Le dispositif d'<color blue<Hergo>coloroff> peut être déplacé avec (ControlStick).\n\n\n\nJe vous conseille de le déplacer chaque fois que le\nmonstre se trouve dans un angle mort.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf(/* textboxtype: 0, unk: 0, line: 2 */ "Cette petite créature vit à <color blue<Célesbourg>coloroff>. Depuis que\n<color blue<Morcégo>coloroff> est devenu humain, elle n'est plus violente\nla nuit.")
          	  case 1:
/*<296>*/ 		printf(/* textboxtype: 0, unk: 2, line: 1 */ "Cette petite créature vit à <color blue<Célesbourg>coloroff>. De nature\naffectueuse le jour, il vaut mieux éviter de la\nrencontrer la nuit...")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "Je ne sais que peu de choses sur cette créature, mais\nil semble qu'elle soit le réceptacle de l'âme de l'<color blue<Avatar\ndu Néant>coloroff>.\n\nLa forme physique de la créature est à présent dotée\nd'une queue.\n\n\nJe vous recommande d'utiliser au mieux la machine\nd'<color blue<Hergo>coloroff>.[1-]Plus de\ndétails[2]Merci!")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 0, unk: 2, line: 106 */ "Il semble que le mode d'attaque contre cette créature\nn'ait pas changé depuis votre précédente rencontre.\n\n\nIl est possible de couper ses doigts et ses orteils comme\nvous l'avez fait précédemment. L'ordre n'importe pas.[1-]Plus de\ndétails[2]Merci!")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf(/* textboxtype: 0, unk: 0, line: 107 */ "Lorsque le monstre est à terre, il risque de vous\nbloquer le chemin. Vous seriez alors dans\nl'impossibilité d'atteindre le <color red<pilier de pierre>coloroff>.\n\nDans ce cas, je vous suggère de passer au niveau\ninférieur et de remonter devant le monstre au\nmoyen des colonnes de vent.[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf(/* textboxtype: 2, unk: 0, line: 108 */ "Le monstre a atteint un tel niveau de puissance que\nla probabilité de le terrasser à l'épée est de 0 %.\n\n\nJe vous recommande d'utiliser la machine d'Hergo.\nNotez que celle‐ci vous permet à présent de vous\nprojeter <color red<vous‐même>coloroff>.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 0, unk: 2, line: 169 */ "L'apparence de votre adversaire s'est modifiée à\n90 % depuis votre première rencontre. Une aura\nprofondément noire émane de son corps tout entier.\n\nJe confirme un changement dans les techniques de\ncombat employées par Ghirahim en raison des\nblessures qu'il a subies précédemment.[1-]Plus de\ndétails[2]Merci!")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 0, unk: 0, line: 170 */ "Je confirme que vous devez continuer à concentrer\nvos attaques sur <color red<son point faible à la poitrine>coloroff>.\n\n\nCependant, la probabilité qu'il pare les attaques\nque vous portez dans des conditions normales est\nde 100 %.[1-]Plus de\ndétails[2]Merci!")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 2, unk: 0, line: 171 */ "Ghirahim utilise son épée pour protéger son <color red<point\nfaible>coloroff>. Je vous conseille de la repousser avec la\nvôtre, <0x10012:0x00000002>Maître.\n\nLorsque son point faible n'est pas protégé, ne ratez\npas l'occasion de l'attaquer.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf(/* textboxtype: 0, unk: 2, line: 172 */ "Mon analyse révèle qu'il est impossible de repousser\nl'épée de Ghirahim en une seule attaque.\n\n\nFrappez plusieurs fois d'affilée <color red<avec le même angle\nd'attaque >coloroff>pour y arriver.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf(/* textboxtype: 0, unk: 0, line: 2 */ "Cette petite créature vit à <color blue<Célesbourg>coloroff>. Depuis que\n<color blue<Morcégo>coloroff> est devenu humain, elle n'est plus violente\nla nuit.")
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 0, unk: 2, line: 4 */ "Adorable avec les humains durant la journée, cet\nanimal lunatique vous attaquera sans pitié si vous\nle croisez la nuit.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "C'est la source du mal absolu, un être millénaire\nqui a traversé les âges.\n\n\nOn raconte que son apparence varie en fonction de\nl'individu qui le regarde et selon les époques.[1-]Plus de\ndétails[2]Merci!")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf(/* textboxtype: 0, unk: 2, line: 124 */ "L'<color red<éclat céleste>coloroff> ne peut être invoqué en ce lieu dominé\npar l'influence maléfique de l'Avatar du Néant.\n\n\nC'est pourquoi vous ne pouvez utiliser aucune attaque\nimpliquant l'<color red<éclat céleste >coloroff>ici.[1-]Plus de\ndétails[2]Merci!")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf(/* textboxtype: 0, unk: 2, line: 112 */ "La probabilité que l'Avatar du Néant soit affecté par\nun coup unique est de 0 %, <0x10012:0x00000002>Maître.\n\n\nJe vous suggère de lui asséner des <color red<coups d'épée\nrépétés selon des angles variés >coloroff>afin de faire baisser\nsa garde.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf(/* textboxtype: 0, unk: 0, line: 113 */ "Mon analyse confirme qu'il existe une faille dans la\ngarde de l'Avatar du Néant après ses attaques.\n\n\nMais soyez vigilant.<pause 15> La probabilité qu'il pare toute\nattaque qui s'approche de son épée est de 100 %.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf(/* textboxtype: 2, unk: 0, line: 111 */ "Mon analyse révèle que la seule arme efficace contre\nl'Avatar du Néant est l'<color yellow<épée de légende>coloroff>. Toute autre\narme est impuissante.[1-]Plus de\ndétails[2]Merci!")
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
/*<134>*/ 	printf(/* textboxtype: 2, unk: 0, line: 174 */ "L'apparence de votre adversaire s'est modifiée à\n90 % depuis votre première rencontre. Je constate\négalement qu'il utilise une nouvelle arme.[1-]Plus de\ndétails[2]Merci!")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 0, unk: 0, line: 176 */ "Mon analyse confirme que vous pouvez <color red<casser>coloroff> l'épée\nde Ghirahim avec votre propre épée, <0x10012:0x00000002>Maître.\n\n\nJe confirme que c'est la puissance maléfique de\nGhirahim qui donne vie à son arme.\n\n\nSon épée est donc plus fragile maintenant qu'il est\nblessé.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf(/* textboxtype: 2, unk: 0, line: 177 */ "Je détecte une similitude entre le centre de l'épée de\nGhirahim et le <color red<point faible sur sa poitrine>coloroff>.\n\n\nSi vous détruisez le <color red<cœur de son épée>coloroff>, la probabilité\nqu'elle soit détruite est de 100 %.\n\n\nJe vous conseille d'analyser les mouvements de son\népée et d'attaquer toujours <color red<au même endroit>coloroff>.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "C'est la source du mal absolu, un être millénaire\nqui a traversé les âges.\n\n\nOn raconte que son apparence varie en fonction de\nl'individu qui le regarde et selon les époques.[1-]Plus de\ndétails[2]Merci!")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf(/* textboxtype: 0, unk: 2, line: 124 */ "L'<color red<éclat céleste>coloroff> ne peut être invoqué en ce lieu dominé\npar l'influence maléfique de l'Avatar du Néant.\n\n\nC'est pourquoi vous ne pouvez utiliser aucune attaque\nimpliquant l'<color red<éclat céleste >coloroff>ici.[1-]Plus de\ndétails[2]Merci!")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf(/* textboxtype: 2, unk: 0, line: 120 */ "Je confirme que vous pouvez utiliser la foudre de la\nmême manière que l'Avatar du Néant, <0x10012:0x00000002>Maître.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf(/* textboxtype: 0, unk: 2, line: 121 */ "<color red<Au lieu d'invoquer l'éclat céleste>coloroff>, vous pouvez collecter\nla foudre dans votre <color yellow<épée maîtresse>coloroff>.\n\n\nLorsqu'un éclair jaillit dans le ciel, brandissez\nrapidement votre épée au‐dessus de votre tête.\n\n\nPrenez garde à ne pas oublier de vous défendre contre\nles attaques de l'Avatar du Néant pendant que vous\ncherchez à collecter la foudre.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf(/* textboxtype: 0, unk: 0, line: 119 */ "Je confirme que l'Avatar du Néant peut stocker et\nlancer la foudre grâce à son épée.\n\n\nSi votre épée entre en contact avec la sienne, vous\nvous ferez électrocuter, <0x10012:0x00000002>Maître.<pause 15> Il est primordial\nd'attaquer au bon moment.[1-]Plus de\ndétails[2]Merci!")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
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
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Ce parasite aux yeux géants a élu domicile dans le\ncorps de <color blue<Narisha>coloroff>. \n\n\nIl s'agit d'un monstre effrayant capable de prendre le\ncontrôle du corps et de l'âme de son hôte.[1-]Plus de\ndétails[2]Merci!")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf(/* textboxtype: 0, unk: 2, line: 10 */ "Mon analyse révèle que les projectiles de <color blue<Bilocytes\n>coloroff>peuvent être <color red<renvoyés >coloroff>par votre épée.\n\n\nCette méthode s'avérera particulièrement efficace\nsi vous parvenez à le toucher avec ses propres\nprojectiles.[1-]Plus de\ndétails[2]Merci!")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "Il semble que le point faible de ce monstre soit son\n<color red<œil >coloroff>central.\n\n\nJe vous préviens néanmoins que tant que la <color red<collerette\n>coloroff>qui borde sa tête est en place, toute attaque sur l'<color red<œil\n>coloroff>du monstre sera inefficace.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 2, unk: 0, line: 12 */ "Afin d'être sûr de toucher votre cible, il vous faut\nfaire attention à la direction dans laquelle vous\ndirigez votre épée.\n\nEn frappant vers la gauche, la boule d'énergie partira\nà gauche, et inversement si vous frappez vers la droite.\n\n\n<pause 15>Si vous frappez le projectile en levant ou en abaissant\nvotre épée, il sera propulsé tout droit.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "J'ai obtenu de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nCiblez l'ennemi en maintenant (Z) enfoncé et appuyez\nsur (v) pour que je vous présente mon rapport.\n<0x10011:0x07cd><0x10011:0x09cd>\n\nVoulez‐vous l'entendre maintenant?[1-]Oui[2]Non")
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
/*< 53>*/ 					printf(/* textboxtype: 0, unk: 2, line: 76 */ "Mon analyse révèle que les dagues lancées par\nGhirahim peuvent être alignées verticalement,\nhorizontalement ou en diagonale.\n\nIl est possible de les renvoyer d'un simple coup d'épée\ndonné au bon moment. La difficulté de cette technique\nest élevée.[1-]Autre\nchose?[2]Merci!")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 0, unk: 0, line: 77 */ "Je confirme que Ghirahim est doté du pouvoir\nde téléportation.\n\n\nUne analyse plus poussée tend à démontrer qu'il est\nvulnérable lors de sa réapparition.\n\n\nIl est conseillé d'attaquer à ce moment. Il est\nnéanmoins possible que Ghirahim se protège\navec son épée.[1-]Autre\nchose?[2]Ne me dis\npas tout!")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf(/* textboxtype: 2, unk: 0, line: 78 */ "L'une des attaques de Ghirahim consiste à charger\ndans votre direction, <0x10012:0x00000002>Maître. Je vous suggère de\n<color red<l'attaquer >coloroff>dès qu'il arrive à votre niveau.\n\nLa probabilité qu'un indice révèle de quel côté\nGhirahim va charger alors qu'il prépare son\nattaque est de 100 %.\n\nSi vous ne parvenez pas à attaquer au moment exact\noù votre adversaire passe près de vous, utilisez\nl'<color green<attaque circulaire>coloroff>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf(/* textboxtype: 2, unk: 0, line: 75 */ "J'ai décelé un changement dans la technique\nde combat de Ghirahim depuis le début de\nl'affrontement.\n\nJ'attribue cette évolution aux quelques dégâts qu'il a\nreçus jusqu'ici.[1-]Plus de\ndétails[2]Merci!")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
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
/*< 62>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Sa confiance en ses capacités est sans limite. Prenez\nl'avantage au moyen d'attaques répétées à l'épée dès\nque sa garde est baissée.\n\nMais prenez garde à sa main droite. <color red<Elle suivra\nrapidement votre épée tandis que vous vous préparez\nà frapper>coloroff>. [1-]Plus de\ndétails[2]Merci!")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 0, unk: 2, line: 73 */ "La probabilité qu'il saisisse votre lame est de 100 %\nsi vous le frappez du côté droit. Levez alors votre épée\n<color red<du côté de l'ouverture laissée par ses doigts>coloroff>.\n[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf(/* textboxtype: 0, unk: 0, line: 74 */ "Mon analyse confirme que les doigts de Ghirahim\npointent toujours vers le haut lorsqu'il se saisit de\nvotre lame.\n\nLa probabilité de dégager votre épée en <color red<donnant un\ncoup vers le haut >coloroff>est de 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Sa confiance en ses capacités est sans limite. Prenez\nl'avantage au moyen d'attaques répétées à l'épée dès\nque sa garde est baissée.\n\nMais prenez garde à sa main droite. <color red<Elle suivra\nrapidement votre épée tandis que vous vous préparez\nà frapper>coloroff>. [1-]Plus de\ndétails[2]Merci!")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
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
/*<168>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "<0x10012:0x00000005>À vos ordres, Maître. N'hésitez pas à m'appeler si vous\nsouhaitez entendre mon rapport plus tard.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "J'ai obtenu de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nCiblez l'ennemi en maintenant (Z) enfoncé et appuyez\nsur (v) pour que je vous présente mon rapport.\n<0x10011:0x07cd><0x10011:0x09cd>\n\nVoulez‐vous l'entendre maintenant?[1-]Oui[2]Non")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 2, unk: 0, line: 135 */ "Votre épée a 0 % de chances de transpercer la roche\nqui recouvre son corps. Je vous conseille d'utiliser\nune arme plus destructrice.[1-]Plus de\ndétails[2]Merci!")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 0, unk: 2, line: 136 */ "En raison de la température élevée de sa carapace,\nla probabilité que les <color yellow<bombes>coloroff> explosent au contact\nde Fusiok est de 100 %.\n\nCependant, les impacts sur la partie externe de son\ncorps ne feront que l'énerver. Vous devrez trouver\nun point d'attaque efficace.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 0, unk: 0, line: 137 */ "Mon analyse confirme que pour ôter la carapace\nincandescente de Fusiok, vous devez lui infliger\nde lourds dégâts internes.\n\nJe vous conseille de <color red<lancer une bombe dans sa gueule\n>coloroff>lorsqu'il inhale une grande quantité d'air.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "<0x10012:0x00000005>À vos ordres, Maître. N'hésitez pas à m'appeler si vous\nsouhaitez entendre mon rapport plus tard.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "J'ai obtenu de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nCiblez l'ennemi en maintenant (Z) enfoncé et appuyez\nsur (v) pour que je vous présente mon rapport.\n<0x10011:0x07cd><0x10011:0x09cd>\n\nVoulez‐vous l'entendre maintenant?[1-]Oui[2]Non")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 2, line: 25 */ "Deux de ses <color red<points faibles >coloroff>se cachent au creux de ses\npinces géantes. Portez vos attaques en prenant soin\nd'orienter vos coups d'épée dans la bonne direction.\n[1-]Plus de\ndétails[2]Merci!")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "Il lui arrive fréquemment de se terrer dans le sable\nlorsqu'il encaisse des dégâts.\n\n\nLorsqu'il se soustrait ainsi aux regards, le risque de\nle voir réaliser une attaque rapide avec son dard\nmeurtrier est de 85 %.\n\nJe vous suggère alors de <color red<souffler >coloroff>sur le sable qui le\nrecouvre afin le faire réapparaître.[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 2, unk: 0, line: 27 */ "Mon analyse révèle que son <color red<œil central >coloroff>est exposé si\nses deux pinces sont détruites. La probabilité qu'il\ns'agisse là de son point faible est de 100 %.\n\nCependant, la présence de carapace tout autour de\nson <color red<œil >coloroff>laisse penser qu'une attaque horizontale,\nverticale ou diagonale ne peut le blesser.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "<0x10012:0x00000005>À vos ordres, Maître. N'hésitez pas à m'appeler si vous\nsouhaitez entendre mon rapport plus tard.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 2, unk: 0, line: 150 */ "Comme son nom l'indique, le « monstre marin\nantique » est une créature qui régnait sur les\nmers il y a très longtemps.\n\nSes gros <color red<tentacules>coloroff> peuvent être sectionnés, mais ils\nrepoussent après un certain temps.[1-]Plus de\ndétails[2]Merci!")
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
/*<261>*/ 					printf(/* textboxtype: 0, unk: 2, line: 154 */ "Je confirme que pour toucher son point faible,\nson <color red<œil>coloroff>, vous devez tout d'abord vous débarrasser\nde ses tentacules.\n\nMon analyse révèle que vous pouvez facilement les\nsectionner à l'aide de votre épée.[1-]Plus de\ndétails[2]Merci!")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf(/* textboxtype: 0, unk: 0, line: 155 */ "Il est dangereux de vous attaquer à ses tentacules\nun par un car ils continueront à vous attaquer sans\nrelâche.\n\nJe vous conseille d'attaquer de manière à en frapper\nplusieurs à la fois avec votre épée.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf(/* textboxtype: 2, unk: 0, line: 156 */ "Les tentacules sectionnés libèrent parfois des <color red<cœurs\n>coloroff>ou des <color red<flèches>coloroff>.\n\n\nSi vous en manquez, je vous conseille de sectionner\nle plus de tentacules possible au lieu d'abandonner.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
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
/*< 43>*/ 					printf(/* textboxtype: 0, unk: 2, line: 151 */ "Mon analyse révèle qu'il se montrera si vous\nsectionnez plusieurs de ses tentacules.\n\n\nLa probabilité que les tentacules qui vous empêchaient\nd'explorer le vaisseau soient ceux de Daidagos est de\n99 %.\n\nIl semble que le <color red<pouvoir sacré>coloroff> soit le moyen le plus\nefficace pour sectionner ses tentacules.[1-]Plus de\ndétails[2]Merci!")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 0, unk: 0, line: 152 */ "Mon analyse confirme que vous pouvez sectionner\nles tentacules de Daidagos en utilisant l'<color red<éclat céleste>coloroff>.\n\n\nSon <color red<œil >coloroff>est son point faible. Mais la probabilité que\nl'éclat céleste puisse l'atteindre est de 0 %.\n\n\nJe vous conseille d'attaquer à l'aide d'une arme à\nlongue portée.[1-]Plus de\ndétails[2]N'en dis\npas trop!")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf(/* textboxtype: 2, unk: 0, line: 153 */ "Je confirme que pour toucher son point faible,\nson <color red<œil>coloroff>, l'<color yellow<arc>coloroff> est l'arme la plus efficace.\n\n\nTendez votre <color yellow<arc>coloroff>, puis utilisez (ControlStick2) pour vous déplacer.\nJe vous conseille d'esquiver, puis de tirer une <color red<flèche>coloroff>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
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
/*<180>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf(/* textboxtype: 0, unk: 2, line: 67 */ "Il semble que les bras de Koloktos se détachent de\nson corps lorsque les <color red<orbes rouges >coloroff>en sont arrachés.\n\n\nOr, la probabilité que l'orbe de la poitrine soit\ndissimulé derrière les bras du robot est de 100 %.\n[1-]Plus de\ndétails[2]Merci!")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "Mon analyse révèle que les <color red<orbes rouges >coloroff>des bras de\nKoloktos ne peuvent en être arrachés que lorsque\nceux‐ci sont étendus au maximum.\n\nJe vous suggère d'attaquer rapidement lorsque\nKoloktos écrase le sol de ses bras tendus.[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf(/* textboxtype: 2, unk: 0, line: 69 */ "Il semble que les orbes rouges puissent être arrachés\nau moyen du <color yellow<fouet>coloroff>.\n\n\nAu moment où le robot se prépare à abaisser ses bras,\nvous pourrez attaquer l'<color red<orbe rouge de sa poitrine\n>coloroff>pendant un instant.\n\nCependant, l'<color red<orbe rouge >coloroff>de sa poitrine n'a pas de prise\npour votre <color yellow<fouet>coloroff>, et vous ne pourrez donc le déloger.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "Forme adulte du <color blue<Minigath>coloroff>, cette créature est\nsurnommée « arthropode millénaire ».\n\n\nSon corps est recouvert à plus de 90 % d'une carapace\nimpénétrable contre laquelle toute attaque à l'épée est\ninefficace.[1-]Plus de\ndétails[2]Merci!")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
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
/*< 71>*/ 					printf(/* textboxtype: 0, unk: 2, line: 85 */ "Je vous recommande de renvoyer les dagues de\nGhirahim selon leur angle d'attaque.\n\n\nSi elles vous encerclent, il est probable qu'une\n<color red<technique à l'épée permettant une attaque de\ntous les côtés à la fois >coloroff>se révèle payante.[1-]Autre\nchose?[2]Merci!")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf(/* textboxtype: 0, unk: 0, line: 86 */ "Si vous parvenez à éviter le coup plongeant de\nGhirahim lorsqu'il se téléporte derrière vous,\nvous aurez une opportunité de contre‐attaque.\n\nIl lui arrive de se téléporter ailleurs, mais sa position\ninitiale vous le révélera.[1-]Autre\nchose?[2]Ne me dis\npas tout!")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf(/* textboxtype: 2, unk: 0, line: 87 */ "Il est établi que Ghirahim a recours à ses épées pour\nparer vos attaques.\n\n\nDe plus, du fait qu'il manie deux lames, la probabilité\nqu'il soit capable d'arrêter deux attaques consécutives\nest de 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf(/* textboxtype: 2, unk: 0, line: 84 */ "J'ai décelé un changement dans la technique\nde combat de Ghirahim depuis le début de\nl'affrontement.\n\nJ'attribue cette évolution aux quelques dégâts qu'il a\nreçus jusqu'ici.[1-]Plus de\ndétails[2]Merci!")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
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
/*< 80>*/ 					printf(/* textboxtype: 2, unk: 0, line: 81 */ "Mon analyse révèle que les dagues lancées par\nGhirahim ont également une fonction défensive.\n\n\nÉliminer ces dagues peut être un moyen efficace de\nfaire baisser sa défense.[1-]Plus de\ndétails[2]Merci!")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf(/* textboxtype: 0, unk: 2, line: 82 */ "Il semble que la fonction de la main droite de\nGhirahim soit de tenter de saisir votre épée.\n\n\nS'il y parvient, <color red<agitez votre épée vers le haut >coloroff>pour le\nforcer à lâcher prise. Mais sachez que Ghirahim puise\nde plus en plus dans son immense pouvoir.\n\nLa probabilité qu'il vous faille répéter cette action\nplusieurs fois avant d'obtenir le résultat escompté\nest de 100 %.[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 0, line: 83 */ "Si vous souhaitez porter une attaque efficace, prenez\nsoin de frapper selon une trajectoire qui ne peut être\ncoupée par ses dagues ou par sa main droite.\n\nLa main de Ghirahim suit les mouvements de votre\népée, mais il lui arrive d'être <color red<trop lent pour arrêter\nvotre coup>coloroff>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
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
/*<193>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Cet arachnide démesuré se terre dans les forêts\nprofondes. Sa technique d'attaque préférée consiste\nà immobiliser ses victimes dans sa toile.\n\nSon point faible est dissimulé sur son abdomen, sous\nsa carapace robuste.[1-]Plus de\ndétails[2]Merci!")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "Je confirme que la Skulltula a tendance à montrer\nson dos lorsqu'elle attaque, afin de ne pas exposer\nson point faible.\n\nVous devez faire en sorte de la retourner pour pouvoir\natteindre son point faible.\n[1-]Autre\nchose?[2]N'en dis\npas trop!")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "Son unique point faible se situe au centre de la partie\nventrale de son abdomen. Le <color green<coup de grâce >coloroff>devrait\nêtre une technique efficace contre elle.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf(/* textboxtype: 0, unk: 0, line: 185 */ "Vous en avez vaincu <numeric arg0 1>. Mon analyse révèle que\nvotre habileté au combat contre cet ennemi est\n<string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf(/* textboxtype: 2, unk: 0, line: 18 */ "Je confirme que la Skulltula a tendance à montrer\nson dos lorsqu'elle attaque, afin de ne pas exposer\nson point faible.\n\nVous devez faire en sorte de la retourner pour pouvoir\natteindre son point faible.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf(/* textboxtype: 0, unk: 2, line: 16 */ "Cet arachnide démesuré se terre dans les forêts\nprofondes. Sa technique d'attaque préférée consiste\nà immobiliser ses victimes dans sa toile.\n\nSon point faible est dissimulé sur son abdomen, sous\nsa carapace robuste.\n\n\nJe suis actuellement en train d'analyser son schéma\nd'action plus en détail.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 2, unk: 0, line: 66 */ "L'énergie maléfique qu'il tient de Ghirahim décuple\nsa puissance.\n\n\nCe sont les <color red<orbes rouges >coloroff>de ses bras et de sa poitrine\nqui font tenir ses pièces ensemble.[1-]Plus de \ndétails[2]Merci!")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 134 */ "Son corps est recouvert de roche qui dissimule son\npoint faible : son <color red<œil>coloroff>.\n\n\nVous avez plus de chances de le vaincre en vous\ndébarrassant de sa carapace.[1-]Plus de\ndétails[2]Merci!")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "Cet individu se fait appeler le « <color blue<monarque\ndémoniaque>coloroff> ». Je ne dispose que de peu\nd'informations à son sujet.\n\nIl semble posséder des pouvoirs développés. Je sens\nune aura puissante et maléfique qui n'a pas encore\nrévélé toute l'étendue de son pouvoir.[1-]Plus de\ndétails[2]Merci!")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "Il s'agit du <color blue<monarque démoniaque>coloroff>, le maître des\ncréatures maléfiques. L'excellence de son esprit\ncomme de ses capacités physiques est manifeste.\n\nIl est également passé maître dans l'usage de la magie.\nIl affiche les manières d'un homme du monde, mais\nses accès de colère sont redoutables.[1-]Plus de\ndétails[2]Merci!")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'ai collecté de nouvelles données, <0x10012:0x0000000b>Maître. Analyse\ndu mode de comportement de cet ennemi terminée.\n\n\nVoulez‐vous entendre mon rapport maintenant? [1-]Oui[2]Non")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 90 */ "Il dissimule son véritable pouvoir, et sa puissance\nphysique a augmenté. Il est à craindre qu'aucune\nde vos armes ne soit en mesure de le blesser.[1-]Plus de\ndétails[2]Merci!")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 0, unk: 2, line: 91 */ "Mon analyse révèle que vos coups d'épée <color red<peuvent faire\nreculer >coloroff>très légèrement votre adversaire.[1-]Plus de\ndétails[2]Merci!")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 0, unk: 0, line: 92 */ "Ghirahim évite manifestement autant que possible\nde se tenir entre vous et le bord de la plate‐forme,\n<0x10012:0x00000002>Maître.\n\nLa probabilité que ce comportement s'explique par la\ncrainte de tomber de la plate‐forme est de 85 %.\n[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf(/* textboxtype: 2, unk: 0, line: 93 */ "La probabilité que, comme lors de vos précédents\ncombats, Ghirahim se défende<color red< à main nue >coloroff>est de 95 %.\n\n\nLorsque Ghirahim change de posture, faites bien\nattention au<color red< positionnement de ses mains>coloroff>.")
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
/*<288>*/ 				printf(/* textboxtype: 2, unk: 0, line: 90 */ "Il dissimule son véritable pouvoir, et sa puissance\nphysique a augmenté. Il est à craindre qu'aucune\nde vos armes ne soit en mesure de le blesser.[1-]Plus de\ndétails[2]Merci!")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf(/* textboxtype: 0, unk: 2, line: 91 */ "Mon analyse révèle que vos coups d'épée <color red<peuvent faire\nreculer >coloroff>très légèrement votre adversaire.[1-]Plus de\ndétails[2]Merci!")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 0, unk: 0, line: 92 */ "Ghirahim évite manifestement autant que possible\nde se tenir entre vous et le bord de la plate‐forme,\n<0x10012:0x00000002>Maître.\n\nLa probabilité que ce comportement s'explique par la\ncrainte de tomber de la plate‐forme est de 85 %.\n[1-]Plus de\ndétails[2]Ne me dis\npas tout!")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf(/* textboxtype: 0, unk: 2, line: 13 */ "Il s'agit là de toutes les données dont je dispose\npour l'instant.\n\n\nLorsque j'ai des informations à vous communiquer,\nvotre épée se met à clignoter. Appuyez sur (v) quand\nma présence est requise.<0x10011:0x09cd>\n\nSi vous avez besoin de renseignements sur votre\néquipement ou sur votre environnement, veuillez\nsélectionner l'option <color red<Analyse>coloroff>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "L'apparence de votre adversaire s'est modifiée à\n90 % depuis votre première rencontre. Une aura\nprofondément noire émane de son corps entier.\n\nPrenez garde, <0x10012:0x00000001>Maître. Votre adversaire est redoutable\net il est hautement recommandé de ne jamais relâcher\nvotre attention.[1-]Plus de\ndétails[2]Merci!")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 0, unk: 0, line: 191 */ "J'ai obtenu de nouvelles données d'analyse sur\nl'<color blue<Avatar du Néant>coloroff>, <0x10012:0x0000000b>Maître. Voulez‐vous écouter\nmon rapport maintenant?[1-]Oui[2]Non")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf(/* textboxtype: 0, unk: 2, line: 124 */ "L'<color red<éclat céleste>coloroff> ne peut être invoqué en ce lieu dominé\npar l'influence maléfique de l'Avatar du Néant.\n\n\nC'est pourquoi vous ne pouvez utiliser aucune attaque\nimpliquant l'<color red<éclat céleste >coloroff>ici.[1-]Plus de\ndétails[2]Merci!")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf(/* textboxtype: 2, unk: 0, line: 111 */ "Mon analyse révèle que la seule arme efficace contre\nl'Avatar du Néant est l'<color yellow<épée de légende>coloroff>. Toute autre\narme est impuissante.[1-]Plus de\ndétails[2]Merci!")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 0, unk: 0, line: 122 */ "Je confirme que l'Avatar du Néant peut stocker et\nlancer la foudre grâce à son épée.\n\n\nSi votre épée entre en contact avec la sienne, vous\nvous ferez électrocuter, <0x10012:0x00000002>Maître.[1-]Plus de\ndétails[2]Merci!")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf(/* textboxtype: 2, unk: 0, line: 123 */ "Il me faut plus de temps pour analyser les attaques de\nl'Avatar du Néant.\n\n\nÀ l'avenir, maintenez (Z) enfoncé pour le cibler et\nappuyez sur (v) pour m'appeler. Je vous présenterai\nmon rapport.<0x10011:0x07cd><0x10011:0x09cd>")
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
/*<223>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez entendre mon\nrapport, maintenez (Z) enfoncé pour cibler l'ennemi\net appuyez sur (v) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

