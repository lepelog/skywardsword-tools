          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf("Mais je viens de te dire ma prédiction! Je t'ai\npourtant tout décrit dans tous les détails. Tu\nne m'écoutais pas?\n\nBon d'accord, d'accord. Je vais la répéter une\ndernière fois. Et n'oublies pas que je vois tout,\ntout, tout!")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf("Mais qu'est-ce que tu as fait, jeune homme?\n\n\n\nJe vois que c'est par ta faute que l'île de la\nDéesse a disparu!\n\n\nMais je sais que c'était pour la bonne cause.\n\n\n\nEt maintenant... tu dois trouver ton propre\nchemin. Fais confiance à tes instincts! Oui,\nfais confiance!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf("Je vois que tu trouveras ce que tu cherches\nsur l'île de la Déesse.\n\n\nMais le chemin sera semé d'embûches. Oui,\nbeaucoup d'embûches. Tu devras bien te\npréparer, jeune homme.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf("Alors, je vois que tu as remporté la dernière\népreuve... Oui. Tout est révélé dans ma vision...\n\n\nJe ne sais pas pourquoi j'ai dit « dernière ».\nUne intuition... C'est fort, l'intuition.\n\n\nTu veux savoir quoi faire de l'objet gagné à\nla fin de l'épreuve?\n\n\nJe vois qu'à Célesbourg, il existe une <r<statue en\npierre qui a la forme d'un oiseau>>. Un de ses\n<r<yeux est une pierre précieuse>>, l'autre lui\nmanque...\nTu l'as déjà vue, non?\n\n\n\nEssaie d'y emboîter l'objet que tu as trouvé...\nJe le vois déjà... Ton chemin sera tracé!")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf("Tu trouveras l'entrée de la prochaine <r<épreuve\n>>en jouant la chanson que le grand esprit t'a\napprise. La belle chanson, oui.\n\nJe vois qu'elle se trouve quelque part à\n<r<Célesbourg>>...\n\n\nHum... Je ne sais pas ce que cela signifie.\nPeut-être... Ah, non, je ne vois pas, finalement.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf("Aaah! Je vois que tu as rassemblé trois parties\nde la chanson convoitée... La dernière partie\nest détenue par une créature gigantesque...\nénorme!\nVa vite rejoindre cette grande créature! Je\nprédis que lorsque tu l'auras trouvée, ta\nchanson sera enfin complète. Oui...")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf("Je vois... Je vois...\n\n\n\nTu cherches un endroit où planter une pousse,\nn'est\x2010ce pas? Et pas n'importe quelle pousse!\nTu dois trouver l'endroit idéal.\n\n\x0E\x01\x06\x02\xFCCDJe vois... une vieille femme...\x0E\x01\x06\x02Í Je vois que\nl'endroit idéal est le temple où elle réside!\nOui! Le temple...")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf("Je vois que tu cherches les quatre mélodies\nd'une chanson. Une belle chanson.\n\n\nJe vois... Tu dois aller dans trois...<pause0A> Oui, trois\nrégions! Dans n'importe quel ordre!\n\n\nOù que tu ailles, il y aura toujours quelqu'un\npour t'accueillir, jeune homme.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf("On dirait que tu as enfin trouvé la personne\nque tu cherchais! Je suis content pour toi!\n\n\nMais je vois que tu as encore des épreuves\nà passer. Miséricorde...\n\n\nTu dois aller parler au grand esprit qui vole\ndans le ciel. Demande plus d'informations au\ndirecteur de l'<r<école de chevalerie>>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf("Je vois... Je vois... l'ombre d'un monstre\ngigantesque!\n\n\nÇa a beau ne pas être ma première prédiction,\nton futur me fait toujours frissonner, jeune\nhomme!\n\nMiséricorde... Assure\x2010toi d'avoir assez de\n<r<potions >>sur toi!")
          													goto flw_126
          												  case 1:
/*<183>*/ 													switch (story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */]) {
          													  case 0:
/*< 90>*/ 														switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          														  case 0:
/*< 92>*/ 															switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          															  case 0:
/*<179>*/ 																switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          																  case 0:
/*<180>*/ 																	printf("Je vois... Je vois... Ouille, ouille, ouille.\nLa tâche va être ardue!\n\n\nLa température au c\x153ur de la montagne de\nfeu est très élevée. Tu devrais t'équiper\nd'un <r<bouclier de fer>>! Oui, de fer.")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf("Je vois... Je te vois transporter la cuvette\nd'eau sur une montagne de feu.\n\n\nSi tu ne l'apportes pas très vite à destination,\nquelqu'un aura des problèmes. Des gros\nproblèmes.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf("Je vois des obstacles... de l'eau... Le manque\nd'eau deviendra un problème pour toi.\n\n\nJe vois... une cuvette d'eau. Tu as déjà vu cet\nobjet quelque part.\n\n\nLa forêt! C'est là\x2010bas que tu trouveras ce que\ntu cherches. Oui, dans la forêt!")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf("La probabilité que l'objet que vous cherchez se trouve\ndans la forêt est de 60 %. Je vous conseille de vous\ny rendre.\n\n<pling>Voulez\x2010vous que j'ajoute la<r< cuvette d'eau >>dans la liste\ndes cibles à <r<détecter>>?\n[1]Oui, merci[2-]Pas maintenant")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. La <r<cuvette d'eau>> a été ajoutée à\nla liste des cibles à <r<détecter>>.\n\n\nVous pouvez commencer vos recherches.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je n'ai pas ajouté la cuvette d'eau\nà la liste des cibles à détecter.\n\n\nSi vous changez d'avis, adressez\x2010vous à nouveau\nau diseur de bonne aventure.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf("Ho ho! Je vois que tu as remporté l'épreuve\ndu feu avec brio! Ah, mais, je vois des\nobstacles... Quelque chose en rapport avec l'eau.\n\nÇa y est! Oui, c'est ça! Le manque d'eau te\ncausera des ennuis. Des ennuis, oui. Reviens\nme voir quand ça t'arrivera.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf("Je vois... Dis-moi donc. Combien d'épreuves\nvas\x2010tu encore passer, jeune homme?\n\n\nJe vois... du feu! L'<r<entrée de la prochaine\népreuve >>se situe sur une montagne de feu!\n\n\nJe prédis qu'un <r<bouclier de bois >>y sera\ntotalement inutile... Euh, oui, inutile.")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf("Je vois... Je vois... Tu dois apprendre une\n<r<chanson >>dans un lieu sacré!\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage... Un gros nuage, oui.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf("Oho! Tu es sorti victorieux de l'épreuve\ndes sables!\n\n\nEnsuite, je vois encore plus de sable... La <r<mer>>...<pause14>\nUn <r<navire>>...<pause14> Je n'y comprends pas grand\x2010chose.\nQuoi qu'il en soit, rends\x2010toi dans les terres de\nsable.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf("Je vois... Je vois... L'<r<entrée de l'épreuve >>se\ntrouve dans une région pleine de sable!\n\n\nTu dois te rendre à cet endroit.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf("Je vois... Je vois... Tu dois apprendre une\n<r<chanson >>dans un lieu sacré!\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage... Un gros nuage, oui.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf("Oho... Tu es sorti victorieux de l'épreuve de\nla forêt...\n\n\nMaintenant, je vois un <r<grand arbre >>dans cette\nforêt. Tu y trouveras quelqu'un d'important.\n\n\nEnsuite, je vois une gigantesque statue de\npierre...<pause14> Dans les entrailles de la terre...<pause14>\nElle monte, elle descend, elle ne tient pas\nen place!\nQuoi qu'il en soit, tu devrais te diriger\nvers la forêt!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf("Je vois... Je vois... Tu dois passer une épreuve\ndans un lieu très sombre... Oui, très sombre...\n\n\nÇa donne la chair de poule! Brrr...\n\n\n\nLa forêt! Oui! C'est là que tu pourras passer\ncette épreuve!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf("Dirige les ailes vers la tour... puis joue une\nmélodie au sommet pour voir la lumière...\n\n\nCette lumière pointe vers ta prochaine\ndestination!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf("Je vois... Je vois...\n\n\n\nUne hélice tombée du ciel. Une hélice, oui.\nTu dois la retrouver...\n\n\nJe vois... Une <r<montagne de feu>>... L'hélice se\ntrouve au bas du <r<temple de la montagne de feu>>!\n\n\nUne montagne de feu? Ça existe vraiment?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf("")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf("")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf("")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf("Je vois... Je vois... Il te faut quelque chose\npour réparer un certain objet... Je vois...\n\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í une <y<fleur ancienne>>!\n\nCette plante fleurit dans le passé, dans une\n<r<région désertique>>...<pause14> Explore les étendues de\nsable et tu trouveras cette fleur! Oui...")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf("Je vois... Je vois... Une construction avec\ndes ailes. Quand le vent souffle, les ailes\ntournent?!\n\nJe vois qu'il faut diriger deux de ces\nconstructions vers une tour... Oui,\nc'est ça... Une tour!")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf("Ho ho! Tu as relevé de nombreux défis, à ce\nque je vois...\n\n\nLa prochaine étape est...<pause1E> Oh oh!\nLe <r<Chant de la Déesse>>...<pause1E>\n\n\nTu veux en savoir plus...  Qui pourrait te\nrenseigner...?\n\n\nMa boule de cristal me dit que le <r<directeur de\nl'école de chevalerie >>pourra te fournir de\nprécieux indices. C'est ça : le directeur.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf("Je vois... Je vois... Quelque chose qui se réveille!\n\n\n\nOh!<pause1E> C'est gros...<pause14> C'est même très gros!\n<pause28>C'est é\x2010norme!\n\n\nJe vois que si tu possèdes assez de <r<potions\nde santé>>, tu pourras vaincre cette chose!\nOuille, ouille, ouille.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf("Je vois... Je vois... Du sable... Un bac...\nUn bac à sable géant?\n\n\nEn tout cas, je vois qu'il te faudra être très\nprudent avec l'électricité. Le métal ne\nt'apportera que des problèmes là\x2010bas...\n\nUn bouclier de fer ne te sera d'aucune utilité.\nJe vois qu'il te faut un <r<bouclier de bois >>ou un\nbouclier encore plus résistant!\n\nJe vois que les bombes s'avéreront très utiles\ndans cet endroit. Ton <r<sac de bombes >>doit être\nbien rempli!")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf("Je vois... Je vois... De la lave en fusion!\nUne chaleur insoutenable!\n\n\nUn bouclier de bois ne serait d'aucune utilité\ndans cet endroit. Je vois... du fer! Oui, du fer!\nIl te faut un <r<bouclier de fer>>!\n\nJe vois également qu'une <r<potion pour restaurer\ntes c\x153urs >>serait très utile...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf("Je vois... Je vois... De la végétation... Une\nforêt... Des arbres! Beaucoup d'arbres!\n\n\n<pause14>Oui... <pause0A>Je vois une région boisée. Tu devrais\nprobablement t'équiper d'un <r<bouclier de bois>>.\n\n\nJe vois que tu as encore peu d'expérience.\nJe vois qu'une <r<potion de santé >>pourrait\nt'être très utile au combat.")
/*< 83>*/ 																								entrypoint_111_05();
          																							}
          																						}
          																					}
          																				}
          																			}
          																		}
          																	}
          																}
          															}
          														}
          													}
          												}
          											}
          										}
          									}
          								  case 1:
          									goto flw_71
          								}
          							  case 1:
          								goto flw_71
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 31>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 12}
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x03Approche! Je réchauffe ma boule de cristal!\nC'est <r<10 rubis >>la séance. La lumière te guidera\ndans ta périlleuse aventure.\n\nMes grands yeux ronds voient... des choses.\nAlors, on commence? C'est <r<10 rubis>>.\n[1]Oh, oui![2-]Non merci")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf("Alors, jeune homme, sur quel sujet dois\x2010je\ninterroger ma boule de cristal?\n[1]L'avenir[2]Les trésors")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf("Ho ho! Magnifique! Extraordinaire!\nOn va voir ce qu'on va voir... Je\nvais réchauffer ma boule de cristal!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 40, 'param3': 6}
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf("Ho ho! Aaaaaahhh... Je sens...\nJe vois... la lumière!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf("Fort bien! Je réchauffe ma boule de cristal.\nOn va voir ce qu'on va voir!")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde! Je vois que tu es sans le sou,\nmon garçon!\n\n\nTu ne t'attends quand même pas à ce que\nmes beaux grands yeux ronds scrutent ton\navenir pour rien!")
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x09\x909Je vois... Mais ne viens pas me supplier de\nte venir en aide plus tard!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x03Oh, j'aperçois devant moi... Hm? Regarde-moi\ndans les yeux... N'aie pas peur de mon regard\nperçant...\n\nJe vois des choses... Fais confiance à mes\ngrands yeux ronds. Je vois... un fil égaré\nsur ta tunique... Je vois...\n\nJe vois tout! Rien n'échappe à mes grands\nyeux bleus. Normalement, c'est 10 rubis\nla séance. Mais pour toi... ce sera <r<1 rubis>>!\n\nAlors, tu veux que j'interroge ma boule de\ncristal pour<r< 1 rubis >>tout petit?\n[1]Oh oui![2-]Plus tard?")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x00\nHo ho! Ce que tu me fais plaisir! D'ailleurs,\nça fait bien longtemps que je n'avais pas eu\nde client...\n\nEuh\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Mais ça ne veut pas dire que je ne suis\npas un bon voyant, hein! Mes grands yeux\nronds voient tout, bon!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x09\x909Miséricorde! Je vois que tu n'as pas un seul\nrubis en poche, mon garçon... Les services\nde mes grands yeux ronds ne sont pas\ngratuits! Pff!")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x07Quoi? Et moi qui t'offrais mes loyaux\nservices! Tu ne me fais pas confiance?\nPourtant mes grands yeux ronds voient tout,\nbon!\nAlors, tu ne veux pas entendre ma prédiction?\nJe vois des choses...\n[1]D'accord...[2-]Mais non!")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf("J'ai senti que tu étais têtu dès que je t'ai\nvu. Et je peux lire sur ton visage que tu\nne crois pas aux prédictions.\n\nPourtant, elles t'apporteraient une aide\nprécieuse! Tu es sûr de ne pas vouloir\nentendre ma prédiction? Je vois des\nchoses...\n[1]Bon, ça va...[2-]J'ai dit\nnon!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x09\x909Je vois que tu es un sceptique, toi. Ne viens\npas me supplier de t'aider après, ce sera\ntrop tard! \x0E\x01\x08\x02\xFECDPfff!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x02Je vois... Je vois... Quoi donc? Oh, misère...\n\n\n\nJe viens d'avoir une vision catastrophique...\nLe chemin qui s'offre à toi est semé\nd'embûches...\n\nMais grâce à mes dons de voyant, je peux voir\nce qu'il va advenir de toi!\n\n\nAie confiance en \x0E\x01\x06\x02\xFCCD<r<mes grands yeux ronds>>\x0E\x01\x06\x02Í et\nen ma voix pure et douce.\n\n\nJe veux ton bien, jeune homme. Regarde-moi\nbien dans les yeux. Approche!")
          }

          void entrypoint_111_03() {
/*< 48>*/ 	start()
          	goto flw_160
          }

          void entrypoint_111_04() {
/*< 53>*/ 	start()
          	goto flw_19
          }

          void entrypoint_111_05() {
/*< 82>*/ 	start()
/*<130>*/ 	switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          	  case 0:
/*<131>*/ 		printf("Je sens aussi que tu cherches une <r<plante>>...\nJe vois... une <r<forêt >>verdoyante. \x0E\x01\x06\x02\xFBCDHmm...\nCette forêt...\x0E\x01\x06\x02Í Difficile d'imaginer cette forêt...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf("Je vois que tu cherches quelqu'un pour\ncultiver un champ, jeune homme.\n\n\nTu ne trouveras pas une telle personne ici,\nà Célesbourg! Ah, je vois... Tu dois te\nrendre dans les <r<grottes >>où vivent les\n<r<êtres qui creusent partout>>!\nC'est là\x2010bas que tu trouveras la bonne personne.\nOui, c'est là.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf("Ho ho! Oui, je vois... Tu cherches un objet\nperdu... Une chose brillante qui tourne.\n\n\nJe vois une <r<région désertique>>... Du sable!\nC'est là\x2010bas, dans un recoin, que tu trouveras\nce que tu cherches!")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal a à\nrévéler pour le moment. Reviens me voir\nsi tu te perds encore.")
/*< 41>*/ 						printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DBonne chance à toi!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf("Ho ho! Je vois... Quelqu'un a perdu un\ninsecte rare.\n\n\nMa boule de cristal me dit que cet insecte se\ncache sur l'île où vit <r<un passionné d'insectes>>!\nUn passionné, oui. C'est bien ça.")
          						goto flw_33
          					}
          				  case 1:
          					goto flw_33
          				}
          			  case 1:
          				goto flw_170
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
          		goto flw_132
          	}
          }

          void entrypoint_111_06() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Oh, oui, les trésors. Tu veux que je scrute\nma boule de cristal pour y trouver des trésors.\nJe t'avoue, je n'y connais pas grand\x2010chose...\n\nMais, je vais quand même essayer!")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 149, 'param3': 6}
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf("Ho ho! Aaaaaahhh... Je sens...\nJe vois... la lumière!")
/*<156>*/ 	printf("Je vois... Je vois des choses... Oh! Une forêt...\nUne région désertique... Une montagne de feu...\nDes monstres! Toutes des sources de trésor...\n\nSur les trésors de quelle région veux\x2010tu te\nrenseigner? Ou bien veux\x2010tu en savoir plus\nsur ceux des monstres?\n[1]La forêt[2]La région\ndésertique[3]La montagne\nde feu[4]Les monstres")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf("Aaah, la forêt! Ma boule de cristal indique\nque les trésors forestiers les plus courants\nsont la <y<plume d'oiseau >>et la <y<larve de guêpe>>.\n\nPour obtenir une <y<plume d'oiseau>>, je vois qu'il\nfaudra d'abord attraper un oiseau avec le filet.\nOui, c'est ça.\n\nAaah, oui. Je vois... Pour obtenir une <y<larve de\nguêpe>>, il faudra détruire un... oh, il faudra\ndétruire un nid.\n\nTiens, j'aperçois des <r<plumes bleues>>, symboles\nde bonheur. Si tu en trouves une, tu es très\nchanceux!")
          		flw_155:
/*<155>*/ 		printf("Ma boule de cristal m'indique que tu peux\nobtenir des <y<perles d'ambre >>et des <y<perles\nd'ombre >>dans toutes les régions.\n\nAaah... Les <y<perles d'ombre >>peuvent\nuniquement être collectées durant les épreuves.\n\n\nEt, le trésor le plus rare au monde est la\n<y<poussière de Déesse>>!\n\n\nIl va falloir que tu sois extrêmement chanceux\npour en trouver une.")
/*<157>*/ 		printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal a à\nrévéler pour le moment. Reviens me voir\nsi tu te perds encore.")
/*<158>*/ 		printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DBonne chance à toi!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf("Ah, la région désertique! Ma boule de cristal\nme laisse entrevoir que tu trouveras un...\nattends... ça y est : un <y<virevoltant >>et une\n<y<fleur ancienne>>.\nOh, je prédis que tu attraperas un <y<virevoltant\n>>avec un filet!\n\n\nJe vois... eh, oui, c'est évident : il faut voyager\ndans le passé pour trouver la <y<fleur ancienne>>.\nElle est ancienne, après tout.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf("Ah, la montagne de feu! Tu y trouveras...\nTu y trouveras... Laisse-moi voir...\n\n\nJe vois... Je vois deux trésors... Un minerai... \nune queue...\n\n\nMa boule de cristal me montre que tu peux\nparfois obtenir un <y<minerai d'Ordinn >>en\ncreusant la terre.\n\nTu peux aussi obtenir une <y<queue de lézard >>en\ncombattant des espèces de... lézards.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf("Ah, les monstres!\n\n\n\nMa boule de cristal indique que tu peux\nobtenir de nombreux trésors en combattant\ndifférents monstres.\n\nLes <y<griffes de monstre >>s'obtiennent sur les\ncréatures volantes.\n\n\nTu peux trouver des <y<crânes décoratifs >>sur les\nmonstres humanoïdes.\n\n\nLes <y<gélatibulles >>se trouvent sur les monstres\nmous. Dégoûtant.")
/*<207>*/ 		printf("Il te faudra utiliser une arme pour arracher\nles <y<cors de monstre >>aux monstres qui en\npossèdent.\n\nLes <y<cristaux maléfiques>> se trouvent sur les\nmonstres ayant recours aux malédictions.\n\n\nEt parfois, tu peux même trouver des\n<y<crânes d'or>>!")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ho ho! Je vois...\n\n\n\nJe vois que tu as l'air à bien aller! On dirait\nque tu as collecté de nombreux trésors depuis\nta dernière visite.\n\nViens par ici, jeune homme. Je vais interroger\nma boule de cristal sur d'autres trésors. On va\nvoir ce qu'on peut voir!")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho! Revoilà le gentil jeune homme! Je\nt'attendais! J'avais pressenti que tu reviendrais,\nen fait.\n\nJe peux lire sur ton visage que tu as besoin\nde mon aide...")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf("Je vais réchauffer ma boule de cristal!\nC'est moitié prix, rien que pour toi!\n\n\nTu es prêt? C'est <r<5 rubis >>la séance.\n[1]Oh, oui![2-]Non merci")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde! Je vois que ta bourse est vide,\nmon garçon!\n\n\nJe ne suis pas un voyant bénévole, tout de\nmême! Regarde-moi dans le blanc des yeux :\nReviens quand tu auras de quoi payer.")
          				}
          			  case 1:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x09\x909Je vois... Mais ne viens pas me supplier de\nte venir en aide plus tard!")
          			}
          		  case 1:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho! Mais je te reconnais, jeune homme!\n\n\n\nC'est grâce à toi que mes affaires ont repris\ndu poil de la bête!\n\n\nTu as besoin d'une prédiction? C'est moitié\nprix rien que pour toi, maintenant!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x703Grâce à toi, jeune homme, je suis désormais\ntrès heureux!\n\n\nSi tu veux en savoir plus sur ton avenir, viens\nme rendre visite au bazar en journée!")
          	  case 1:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x01\x701Mais il se fait tard! Que fais\x2010tu ici? \x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Je ne\ntravaille pas de nuit! Reviens me voir en\njournée!")
          	}
          }

