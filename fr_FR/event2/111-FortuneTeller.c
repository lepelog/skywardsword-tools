          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf("Mais je viens de te dire ma prédiction !\nTu n'as pas compris, ou quoi ?\nBon d'accord, je vais la répéter\nune dernière fois.")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf("Qu'as\x2010tu donc fait, jeune homme ?\n\n\n\nJe vois que c'est par ta faute que l'île\nde la Déesse a disparu !\n\n\nMais je sais que c'était pour la\nbonne cause.\n\n\nEt maintenant... tu dois trouver ton\npropre chemin !")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf("Je vois que tu trouveras ce que tu\ncherches sur l'île de la Déesse.\n\n\nMais le chemin sera semé d'embûches.\nPrépare\x2010toi...")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf("Alors, comme ça tu as remporté\nla dernière épreuve...\n\n\nJe ne sais pas pourquoi j'ai dit\n« dernière ». Une intuition...\n\n\nTu veux savoir quoi faire de l'objet\ngagné à la fin de l'épreuve ?\n\n\nJe vois qu'à Célesbourg, il existe une\n<r<statue en pierre qui a la forme d'un\noiseau>>. Un de ses <r<yeux est une pierre\nprécieuse>>, l'autre lui manque...\nTu l'as déjà vue, non ?\n\n\n\nEssaie d'y emboîter l'objet que tu as\ntrouvé...")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf("Tu trouveras l'entrée de la prochaine\n<r<épreuve >>en jouant la chanson que\nle grand esprit t'a apprise.\n\nJe vois qu'elle se trouve quelque part\nà <r<Célesbourg>>...\n\n\nHum... Je ne sais pas ce que cela\nsignifie.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf("Oh, je vois que tu as rassemblé trois\nparties de la chanson... La dernière\npartie est détenue par une créature\ngigantesque !\nVa vite rejoindre cette grande\ncréature !")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf("Je vois... Je vois...\n\n\n\nTu cherches un endroit où planter\nune pousse, n'est\x2010ce pas ? Et pas\nn'importe quelle pousse !\nTu dois trouver l'endroit idéal.\n\x0E\x01\x06\x02\xFCCDJe vois... une vieille femme...\x0E\x01\x06\x02Í\nJe vois que l'endroit idéal est le temple\noù elle réside !")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf("Je vois que tu cherches les quatre\nmélodies d'une chanson.\n\n\nJe vois... Tu dois aller dans trois...<pause0A>\nOui, trois régions !\nDans n'importe quel ordre !\n\nOù que tu ailles, il y aura toujours\nquelqu'un pour t'accueillir.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf("On dirait que tu as enfin trouvé\nla personne que tu cherchais !\nJe suis content pour toi !\n\nMais je vois que tu as encore des\népreuves à passer.\n\n\nTu dois aller parler au grand esprit\nqui vole dans le ciel.\nDemande plus d'informations au\ndirecteur de l'<r<école de chevalerie>>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf("Je vois... Je vois... l'ombre d'un\nmonstre gigantesque !\n\n\nÇa a beau ne pas être ma première\nprédiction, ton futur me fait toujours\nfrissonner !\n\nMiséricorde... Assure\x2010toi d'avoir assez\nde <r<potions >>sur toi !")
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
/*<180>*/ 																	printf("Je vois... Je vois...\nLa tâche va être difficile !\n\n\nLa température au c\x153ur de la\nmontagne de feu est très élevée.\nTu devrais t'équiper d'un <r<bouclier\nen fer >>!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf("Je vois... Je te vois transporter la\nbassine d'eau sur la montagne de feu.\n\n\nSi tu ne l'apportes pas très vite à\ndestination, quelqu'un aura des\nproblèmes.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf("Je vois des obstacles... de l'eau...\nLe manque d'eau te posera problème.\n\n\nJe vois... une bassine d'eau.\nTu as déjà vu cet objet quelque part.\n\n\nLa forêt ! C'est là\x2010bas que tu trouveras\nce que tu cherches.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf("La probabilité que l'objet que vous\ncherchez se trouve dans la forêt\nest de 60 %. Je vous conseille\nde vous y rendre.\n<pling>Voulez\x2010vous que j'ajoute la<r< bassine\nd'eau >>dans la liste des cibles\nà <r<détecter >>?\n[1]Oui, merci[2-]Pas\nmaintenant")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nLa <r<bassine d'eau>> a été ajoutée à la\nliste des cibles à <r<détecter>>.\n\nVous pouvez commencer\nvos recherches.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je n'ai pas ajouté la\nbassine d'eau à la liste des cibles\nà détecter.\n\nSi vous changez d'avis, adressez\x2010vous à\nnouveau au diseur de bonne aventure.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf("Ho ho ! Je vois que tu as remporté\nl'épreuve du feu avec brio ! Je vois des\nobstacles... De l'eau... Le manque d'eau\nte posera problème.\nReviens me voir quand ça t'arrivera.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf("Je vois...\nMais combien d'épreuves vas\x2010tu encore\npasser, jeune homme ?\n\nJe vois... du feu ! L'<r<entrée de la\nprochaine épreuve >>se situe sur une\nmontagne de feu !\n\nInutile de préciser qu'un <r<bouclier\nen bois >>y serait totalement inutile...")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf("Je vois... Je vois...\nTu dois apprendre une <r<chanson >>dans\nun lieu sacré !\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur\nd'un gros nuage...")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf("Oho ! Tu es sorti victorieux de\nl'épreuve des sables !\n\n\nEnsuite, je vois encore plus de sable...\nLa <r<mer>>...<pause14> Un <r<navire>>...<pause14> Je n'y comprends\npas grand\x2010chose. Quoi qu'il en soit,\nrends\x2010toi dans les terres de sable.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf("Je vois... Je vois...\nL'<r<entrée de l'épreuve >>se trouve\ndans une région pleine de sable !\n\nTu dois te rendre en ce lieu.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf("Je vois... Je vois...\nTu dois apprendre une <r<chanson >>dans\nun lieu sacré !\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur\nd'un gros nuage...")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf("Oho... Tu es sorti victorieux de\nl'épreuve de la forêt...\n\n\nMaintenant, je vois un <r<grand arbre>>\ndans cette forêt. Tu y trouveras\nquelqu'un d'important.\n\nEnsuite, je vois une gigantesque statue\nde pierre...<pause14> Dans les entrailles de la\nterre...<pause14> Elle monte, elle descend, elle\nne tient pas en place !\nQuoi qu'il en soit, tu devrais te diriger\nvers la forêt !")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf("Je vois... Je vois...\nTu dois passer une épreuve dans un lieu\ntrès sombre...\n\nÇa donne la chair de poule !\n\n\n\nLa forêt ! C'est là que tu pourras passer\ncette épreuve !")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf("Dirige les ailes vers la tour...\npuis joue une mélodie au sommet\npour voir la lumière...\n\nCette lumière pointe vers\nta prochaine destination !")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf("Je vois... Je vois...\n\n\n\nUne hélice tombée du ciel.\nTu dois la retrouver...\n\n\nJe vois... Une <r<montagne de feu>>...\nL'hélice se trouve en contrebas du\n<r<temple de la montagne de feu >>!\n\nUne montagne de feu ?\nÇa existe vraiment ?")
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
/*<195>*/ 																						printf("Je vois... Je vois...\nIl te faut quelque chose pour\nréparer un certain objet...\nJe vois...\n\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í une <y<fleur ancienne >>!\n\n\n\nCette plante fleurit dans le passé,\ndans une <r<région désertique>>...<pause14>\nExplore les étendues de sable et tu\ntrouveras cette fleur !")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf("Je vois... Je vois...\nUne construction avec des ailes.\nQuand le vent souffle, les ailes\ntournent ?!\nJe vois qu'il faut diriger deux de ces\nconstructions vers une tour...")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf("Ho ho ! Tu as relevé de nombreux\ndéfis, à ce que je vois...\n\n\nLa prochaine étape est...<pause1E>\nOh oh ! Le <r<Chant de la Déesse>>...<pause1E>\n\n\nTu veux en savoir plus ?\nQui pourrait te renseigner...?\n\n\nMa boule de cristal me dit que le\n<r<directeur de l'école de chevalerie\n>>pourra te fournir de précieux indices.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf("Je vois... Je vois...\nQuelque chose qui se réveille !\n\n\nOh !<pause1E> C'est gros...<pause14> C'est très gros !\n<pause28>C'est é\x2010norme !\n\n\nJe vois que si tu possèdes assez de\n<r<potions de soin>>, tu pourras vaincre\ncette chose !")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf("Je vois... Je vois...\nDu sable... Un bac...\nUn bac à sable géant ?\n\nEn tout cas, je vois qu'il te faudra\nêtre très prudent avec l'électricité.\nLe métal ne t'apportera que des\nennuis là\x2010bas...\nUn bouclier de fer ne te sera d'aucune\nutilité. Je vois qu'il te faut un <r<bouclier\nen bois >>ou un bouclier encore plus\nrésistant !\nJe vois que les bombes s'avéreront\ntrès utiles en ce lieu. Ton <r<sac de bombes\n>>doit être bien fourni !")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf("Je vois... Je vois...\nDe la lave en fusion !\nUne chaleur insoutenable !\n\nUn bouclier en bois ne serait d'aucune\nutilité dans ce lieu.\nJe vois... du fer !\nIl te faut un <r<bouclier en fer>> !\nJe vois également qu'une <r<potion pour\nrestaurer tes c\x153urs >>serait très utile...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf("Je vois... Je vois...\nDe la végétation... Une forêt...\nDes arbres ! Beaucoup d'arbres !\n\n<pause14>Oui... <pause0A>Je vois une région boisée,\nje te conseille donc d'acheter un\n<r<bouclier en bois>>.\n\nJe vois que tu as encore peu\nd'expérience. Je vois qu'une <r<potion\nrouge >>pourrait t'être très utile au\ncombat.")
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
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x03Approche ! Je fais chauffer ma boule\nde cristal ! C'est <r<10 rubis >>la séance.\nLa lumière te guidera dans ta\npérilleuse aventure.\nAlors, qu'en dis\x2010tu ? C'est <r<10 rubis>>.\n[1]Oh, oui ![2-]Non merci")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf("Alors, jeune homme, sur quel sujet\ndois\x2010je interroger ma boule de cristal ?\n[1]Le futur[2]Les trésors")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf("Ho ho ! Magnifique ! Extraordinaire !\nJe fais chauffer ma boule de cristal !")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 40, 'param3': 6}
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf("Ho ho !\nJe sens... Je vois... la lumière !")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf("Fort bien ! Je fais chauffer\nma boule de cristal.")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde !\nTu es sans le sou, mon garçon !\n\n\nJ'ai beau avoir de grands et jolis yeux\nronds, je ne suis pas aussi gentil que\nj'en ai l'air !")
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x09\x900Je vois...\nMais ne viens pas me supplier\nde te venir en aide plus tard !")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x03Oh, je sens une âme égarée à la\nrecherche d'une prédiction !\n\n\nNormalement, c'est 10 rubis la séance.\nMais pour toi, ce sera <r<1 rubis >>!\n\n\nAlors, tu veux que j'interroge ma boule\nde cristal pour<r< 1 rubis >>tout petit ?\n[1]Oh oui ![2-]Non merci")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x00\nHo ho ! Ça me met en joie !\nD'ailleurs, ça fait bien longtemps que\nje n'avais pas eu de client...\n\nEuh\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Mais ça ne veut pas dire que\nje ne suis pas un bon voyant, hein !\nMes grands yeux ronds voient tout bon !")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x09\x909Miséricorde !\nTu n'as pas un seul rubis en poche,\nmon garçon...\nMes services ne sont pas gratuits !")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x07Quoi ? Et moi qui t'offrais mes loyaux\nservices ! Tu ne me fais pas confiance ?\nPourtant mes grands yeux ronds\nvoient tout bon !\nAlors, tu ne veux pas entendre\nma prédiction ?\n[1]D'accord...[2-]Mais non !")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf("J'ai bien senti que tu étais têtu.\nEt je peux lire sur ton visage que\ntu ne crois pas aux prédictions.\n\nPourtant, elles t'apporteraient une\naide précieuse ! Tu es sûr de ne pas\nvouloir entendre ma prédiction ?\n[1]Bon, d'accord...[2-]J'ai dit\nnon !")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x09\x909Tu es un sceptique, toi. Je le savais.\nMais ne viens pas me supplier de\nt'aider après, ce sera trop tard !\n\x0E\x01\x08\x02\xFECDPfeuh !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x02Je vois... Je vois...\nQuoi ?! Oh, misère...\n\n\nJe viens d'avoir une vision\ncatastrophique... Le chemin qui s'offre\nà toi est semé d'embûches...\n\nMais grâce à mes dons, je peux voir\nce qu'il va advenir de toi !\n\n\nAie confiance en \x0E\x01\x06\x02\xFCCD<r<mes grands yeux\nronds>>\x0E\x01\x06\x02Í et ma douce voix. Je suis là pour\nt'aider, jeune homme. Approche !")
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
/*<131>*/ 		printf("Je sens aussi que tu cherches une\n<r<plante>>... Je vois... une <r<forêt\n>>verdoyante. \x0E\x01\x06\x02\xFBCDHmm... Cette forêt...\x0E\x01\x06\x02Í\nOù peut\x2010elle bien être ?")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf("Je vois que tu cherches quelqu'un pour\ncultiver un champ, jeune homme.\n\n\nTu ne trouveras pas une telle personne\nici, à Célesbourg ! Je vois... Tu dois te\nrendre dans les <r<grottes >>où vivent les\n<r<êtres qui creusent partout >>!\nC'est là\x2010bas que tu trouveras la bonne\npersonne.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf("Ho ho ! Oui, je vois...\nTu cherches un objet perdu...\nUne chose brillante qui tourne.\n\nJe vois une <r<région désertique>>...\nDu sable ! C'est là\x2010bas, dans un recoin,\nque tu trouveras ce que tu cherches !")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal\na à révéler pour le moment. Reviens\nme voir si tu es à nouveau perdu.")
/*< 41>*/ 						printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DTu peux y arriver !")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf("Ho ho ! Je vois...\nQuelqu'un a perdu un insecte rare.\n\n\nMa boule de cristal me dit que cet\ninsecte se cache sur l'île où vit\n<r<un passionné d'insectes >>!")
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
/*<144>*/ 	printf("Les trésors ?\nJe n'y connais pas grand\x2010chose...\n\n\nOh, peu importe.\nJe vais quand même essayer !")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 149, 'param3': 6}
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf("Ho ho !\nJe sens... Je vois... la lumière !")
/*<156>*/ 	printf("Je vois... Je vois...\nUne forêt... Une région désertique...\nUne montagne de feu... Des monstres !\n\nSur les trésors de quelle région veux\x2010tu\nte renseigner ? Ou bien veux\x2010tu en\nsavoir plus sur ceux des monstres ?\n[1]La forêt[2]La région\ndésertique[3]La montagne\nde feu[4]Les monstres")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf("Ah, la forêt ! Ma boule de cristal\nindique que les trésors forestiers les\nplus courants sont la <y<plume d'oiseau>>\net la <y<larve de guêpe>>.\nPour obtenir une <y<plume d'oiseau>>, il\nfaut d'abord attraper un oiseau\navec le filet à papillons.\n\nOn dit que pour obtenir une <y<larve\nde guêpe>>, il faut détruire un nid.\n\n\nIl existe aussi des <r<plumes bleues>>,\nsymboles de bonheur. Si tu en trouves\nune, tu es très chanceux !")
          		flw_155:
/*<155>*/ 		printf("Ma boule de cristal m'indique que\ntu peux obtenir des <y<perles d'ambre\n>>et des <y<perles d'ombre >>dans toutes les\nrégions.\nCependant, les <y<perles d'ombre >>peuvent\nuniquement être collectées durant\nles épreuves.\n\nLe trésor le plus rare au monde est\nla <y<poussière de Déesse>> !\n\n\nIl faut être extrêmement chanceux\npour en trouver une.")
/*<157>*/ 		printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal\na à révéler pour le moment. Reviens\nme voir si tu es à nouveau perdu.")
/*<158>*/ 		printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DTu peux y arriver !")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf("Ah, la région désertique ! Ma boule de\ncristal indique que les trésors les plus\ncourants de cette région sablonneuse\nsont le <y<virevoltant >>et la <y<fleur ancienne>>.\nTu peux attraper un <y<virevoltant >>avec\nun filet à papillons.\n\n\nLa <y<fleur ancienne>>, comme son nom\nl'indique, ne pousse que dans le passé.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf("Ah, la montagne de feu ! Alors, que\nm'indique ma boule de cristal ?\n\n\nJe vois... Je vois deux trésors...\n\n\n\nTu peux parfois obtenir un <y<minerai\nd'Ordinn >>en creusant la terre.\n\n\nTu peux aussi obtenir une <y<queue de\nlézard >>en... combattant des lézards.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf("Ah, les monstres !\n\n\n\nMa boule de cristal indique que tu peux\nobtenir de nombreux trésors en\ncombattant différents monstres.\n\nLes <y<griffes de monstre >>s'obtiennent\nsur les créatures volantes.\n\n\nTu peux trouver des <y<crânes décoratifs\n>>sur les monstres humanoïdes.\n\n\nLes <y<gélatibulles >>se trouvent sur\nles monstres mous.")
/*<207>*/ 		printf("Il te faudra utiliser une arme pour\narracher les <y<cors de monstre >>aux\nmonstres qui en possèdent.\n\nLes <y<cristaux maléfiques>> se trouvent\nsur les monstres ayant recours aux\nmalédictions.\n\nEt parfois, tu peux même trouver\ndes <y<crânes d'or>> !")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ho ho !\nJe vois...\n\n\nOn dirait que tu as collecté de\nnombreux trésors depuis ta dernière\nvisite.\n\nApproche, jeune homme. Je vais\ninterroger ma boule de cristal sur\nd'autres trésors.")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho ! Revoilà le gentil jeune homme !\nJe t'attendais !\n\n\nJe peux lire sur ton visage que tu as\nbesoin de mon aide...")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf("Je fais chauffer ma boule de cristal !\nC'est moitié prix, rien que pour toi !\n\n\nTu es prêt ? C'est <r<5 rubis >>la séance.\n[1]Oh, oui ![2-]Non merci")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde !\nTa bourse est vide, mon garçon !\n\n\nJe ne suis pas un voyant bénévole,\nenfin ! Reviens quand tu auras\nde quoi payer.")
          				}
          			  case 1:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x09\x900Je vois...\nMais ne viens pas me supplier\nde te venir en aide plus tard !")
          			}
          		  case 1:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho !\nMais je te reconnais, jeune homme !\n\n\nC'est grâce à toi que mes affaires\nont repris du tonnerre !\n\n\nTu as besoin d'une prédiction ?\nC'est moitié prix rien que pour toi,\nmaintenant !")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x703Grâce à toi, jeune homme, je suis\ndésormais très heureux !\n\n\nSi tu veux en savoir plus sur ton avenir,\nviens me rendre visite au marché\ncouvert en journée !")
          	  case 1:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x01\x701Que fais\x2010tu ici à cette heure tardive ?\n\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Je ne travaille pas de nuit !\nReviens me voir en journée !")
          	}
          }
