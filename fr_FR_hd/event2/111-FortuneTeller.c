          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf("Mais je viens de te dire ma prédiction ! Tu n'as\npas compris, ou quoi ? Bon d'accord, je vais la\nrépéter une dernière fois.")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf("Qu'as\x2010tu donc fait, jeune homme ?\n\n\n\nJe vois que c'est par ta faute que l'île de la\nDéesse a disparu !\n\n\nMais je sais que c'était pour la bonne cause.\n\n\n\nEt maintenant... tu dois trouver ton propre\nchemin !")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf("Je vois que tu trouveras ce que tu cherches sur\nl'île de la Déesse.\n\n\nMais le chemin sera semé d'embûches.\nPrépare\x2010toi...")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf("Alors, comme ça tu as remporté la dernière\népreuve...\n\n\nJe ne sais pas pourquoi j'ai dit « dernière ».\nUne intuition...\n\n\nTu veux savoir quoi faire de l'objet gagné à la\nfin de l'épreuve ?\n\n\nJe vois qu'à Célesbourg, il existe une <r<statue\nen pierre qui a la forme d'un oiseau>>. Un de\nses <r<yeux est une pierre précieuse>>, l'autre lui\nmanque...\nTu l'as déjà vue, non ?\n\n\n\nEssaie d'y emboîter l'objet que tu as trouvé...")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf("Tu trouveras l'entrée de la prochaine <r<épreuve\n>>en jouant la chanson que le grand esprit t'a\napprise.\n\nJe vois qu'elle se trouve quelque part à\n<r<Célesbourg>>...\n\n\nHum... Je ne sais pas ce que cela signifie.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf("Oh, je vois que tu as rassemblé trois parties de\nla chanson... La dernière partie est détenue par\nune créature gigantesque !\n\nVa vite rejoindre cette grande créature !")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf("Je vois... Je vois...\n\n\n\nTu cherches un endroit où planter une pousse,\nn'est\x2010ce pas ? Et pas n'importe quelle pousse !\nTu dois trouver l'endroit idéal.\n\n\x0E\x01\x06\x02\xFCCDJe vois... une vieille femme...\x0E\x01\x06\x02Í Je vois que\nl'endroit idéal est le temple où elle réside !")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf("Je vois que tu cherches les quatre mélodies\nd'une chanson.\n\n\nJe vois... Tu dois aller dans trois...<pause0A> Oui, trois\nrégions ! Dans n'importe quel ordre !\n\n\nOù que tu ailles, il y aura toujours quelqu'un\npour t'accueillir.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf("On dirait que tu as enfin trouvé la personne\nque tu cherchais ! Je suis content pour toi !\n\n\nMais je vois que tu as encore des épreuves à\npasser.\n\n\nTu dois aller parler au grand esprit qui vole\ndans le ciel. Demande plus d'informations au\ndirecteur de l'<r<école de chevalerie>>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf("Je vois... Je vois... l'ombre d'un monstre\ngigantesque !\n\n\nÇa a beau ne pas être ma première prédiction,\nton futur me fait toujours frissonner !\n\n\nMiséricorde... Assure\x2010toi d'avoir assez de <r<potions\n>>sur toi !")
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
/*<180>*/ 																	printf("Je vois... Je vois... La tâche va être difficile !\n\n\n\nLa température au c\x153ur de la montagne de\nfeu est très élevée. Tu devrais t'équiper d'un\n<r<bouclier en fer >>!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf("Je vois... Je te vois transporter la bassine d'eau\nsur la montagne de feu.\n\n\nSi tu ne l'apportes pas très vite à destination,\nquelqu'un aura des problèmes.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf("Je vois des obstacles... de l'eau... Le manque\nd'eau te posera problème.\n\n\nJe vois... une bassine d'eau. Tu as déjà vu cet\nobjet quelque part.\n\n\nLa forêt ! C'est là\x2010bas que tu trouveras ce que\ntu cherches.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf("La probabilité que l'objet que vous cherchez se trouve\ndans la forêt est de 60 %. Je vous conseille de vous y\nrendre.\n\n<pling>Voulez\x2010vous que j'ajoute la<r< bassine d'eau >>dans la liste\ndes cibles à <r<détecter >>?\n[1]Oui, merci[2-]Pas\nmaintenant")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. La <r<bassine d'eau>> a été ajoutée à\nla liste des cibles à <r<détecter>>.\n\n\nVous pouvez commencer vos recherches.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je n'ai pas ajouté la bassine d'eau\nà la liste des cibles à détecter.\n\n\nSi vous changez d'avis, adressez\x2010vous à nouveau\nau diseur de bonne aventure.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf("Ho ho ! Je vois que tu as remporté l'épreuve\ndu feu avec brio ! Je vois des obstacles...\nDe l'eau... Le manque d'eau te posera problème.\n\nReviens me voir quand ça t'arrivera.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf("Je vois... Mais combien d'épreuves vas\x2010tu encore\npasser, jeune homme ?\n\n\nJe vois... du feu ! L'<r<entrée de la prochaine\népreuve >>se situe sur une montagne de feu !\n\n\nInutile de préciser qu'un <r<bouclier en bois >>y\nserait totalement inutile...")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf("Je vois... Je vois... Tu dois apprendre une\n<r<chanson >>dans un lieu sacré !\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage...")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf("Oho ! Tu es sorti victorieux de l'épreuve des\nsables !\n\n\nEnsuite, je vois encore plus de sable... La <r<mer>>...<pause14>\nUn <r<navire>>...<pause14> Je n'y comprends pas grand\x2010chose.\nQuoi qu'il en soit, rends\x2010toi dans les terres de\nsable.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf("Je vois... Je vois... L'<r<entrée de l'épreuve >>se\ntrouve dans une région pleine de sable !\n\n\nTu dois te rendre en ce lieu.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf("Je vois... Je vois... Tu dois apprendre une\n<r<chanson >>dans un lieu sacré !\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage...")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf("Oho... Tu es sorti victorieux de l'épreuve de\nla forêt...\n\n\nMaintenant, je vois un <r<grand arbre >>dans cette\nforêt. Tu y trouveras quelqu'un d'important.\n\n\nEnsuite, je vois une gigantesque statue de\npierre...<pause14> Dans les entrailles de la terre...<pause14> Elle\nmonte, elle descend, elle ne tient pas en place !\n\nQuoi qu'il en soit, tu devrais te diriger vers\nla forêt !")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf("Je vois... Je vois... Tu dois passer une épreuve\ndans un lieu très sombre...\n\n\nÇa donne la chair de poule !\n\n\n\nLa forêt ! C'est là que tu pourras passer cette\népreuve !")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf("Dirige les ailes vers la tour... puis joue une\nmélodie au sommet pour voir la lumière...\n\n\nCette lumière pointe vers ta prochaine\ndestination !")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf("Je vois... Je vois...\n\n\n\nUne hélice tombée du ciel. Tu dois la\nretrouver...\n\n\nJe vois... Une <r<montagne de feu>>... L'hélice se\ntrouve en contrebas du <r<temple de la montagne\nde feu >>!\n\nUne montagne de feu ? Ça existe vraiment ?")
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
/*<195>*/ 																						printf("Je vois... Je vois... Il te faut quelque chose pour\nréparer un certain objet... Je vois... \x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í une <y<fleur\nancienne >>!\n\nCette plante fleurit dans le passé, dans une\n<r<région désertique>>...<pause14> Explore les étendues de\nsable et tu trouveras cette fleur !")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf("Je vois... Je vois... Une construction avec\ndes ailes. Quand le vent souffle, les ailes\ntournent ?!\n\nJe vois qu'il faut diriger deux de ces\nconstructions vers une tour...")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf("Ho ho ! Tu as relevé de nombreux défis, à ce\nque je vois...\n\n\nLa prochaine étape est...<pause1E> Oh oh ! Le <r<Chant\nde la Déesse>>...<pause1E>\n\n\nTu veux en savoir plus ? Qui pourrait te\nrenseigner...?\n\n\nMa boule de cristal me dit que le <r<directeur\nde l'école de chevalerie >>pourra te fournir de\nprécieux indices.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf("Je vois... Je vois... Quelque chose qui se\nréveille !\n\n\nOh !<pause1E> C'est gros...<pause14> C'est très gros !\n<pause28>C'est é\x2010norme !\n\n\nJe vois que si tu possèdes assez de <r<potions de\nsoin>>, tu pourras vaincre cette chose !")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf("Je vois... Je vois... Du sable... Un bac... Un bac\nà sable géant ?\n\n\nEn tout cas, je vois qu'il te faudra être\ntrès prudent avec l'électricité. Le métal\nne t'apportera que des ennuis là\x2010bas...\n\nUn bouclier de fer ne te sera d'aucune utilité.\nJe vois qu'il te faut un <r<bouclier en bois >>ou un\nbouclier encore plus résistant !\n\nJe vois que les bombes s'avéreront très utiles\nen ce lieu. Ton <r<sac de bombes >>doit être bien\nfourni !")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf("Je vois... Je vois... De la lave en fusion ! Une\nchaleur insoutenable !\n\n\nUn bouclier en bois ne serait d'aucune utilité\ndans ce lieu. Je vois... du fer ! Il te faut un\n<r<bouclier en fer>> !\n\nJe vois également qu'une <r<potion pour restaurer\ntes c\x153urs >>serait très utile...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf("Je vois... Je vois... De la végétation... Une forêt...\nDes arbres ! Beaucoup d'arbres !\n\n\n<pause14>Oui... <pause0A>Je vois une région boisée, je te conseille\ndonc d'acheter un <r<bouclier en bois>>.\n\n\nJe vois que tu as encore peu d'expérience.\nJe vois qu'une <r<potion rouge >>pourrait t'être\ntrès utile au combat.")
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
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x03Approche ! Je fais chauffer ma boule de\ncristal ! C'est <r<10 rubis >>la séance. La lumière\nte guidera dans ta périlleuse aventure.\n\nAlors, qu'en dis\x2010tu ? C'est <r<10 rubis>>.\n[1]Oh, oui ![2-]Non merci")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf("Alors, jeune homme, sur quel sujet dois\x2010je\ninterroger ma boule de cristal ?\n[1]Le futur[2]Les trésors")
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
/*< 21>*/ 							printf("Ho ho ! Je sens... Je vois... la lumière !")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf("Fort bien ! Je fais chauffer ma boule de cristal.")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde ! Tu es sans le sou, mon garçon !\n\n\n\nJ'ai beau avoir de grands et jolis yeux ronds,\nje ne suis pas aussi gentil que j'en ai l'air !")
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x09\x909Je vois... Mais ne viens pas me supplier de te\nvenir en aide plus tard !")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x03Oh, je sens une âme égarée à la recherche d'une\nprédiction !\n\n\nNormalement, c'est 10 rubis la séance. Mais\npour toi, ce sera <r<1 rubis >>!\n\n\nAlors, tu veux que j'interroge ma boule de\ncristal pour<r< 1 rubis >>tout petit ?\n[1]Oh oui ![2-]Non merci")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x00\nHo ho ! Ça me met en joie ! D'ailleurs, ça fait\nbien longtemps que je n'avais pas eu de client...\n\n\nEuh\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Mais ça ne veut pas dire que je ne suis\npas un bon voyant, hein ! Mes grands yeux\nronds voient tout bon !")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x09\x909Miséricorde ! Tu n'as pas un seul rubis en\npoche, mon garçon... Mes services ne sont\npas gratuits !")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x07Quoi ? Et moi qui t'offrais mes loyaux\nservices ! Tu ne me fais pas confiance ?\nPourtant mes grands yeux ronds voient\ntout bon !\nAlors, tu ne veux pas entendre ma prédiction ?\n[1]D'accord...[2-]Mais non !")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf("J'ai bien senti que tu étais têtu. Et je peux\nlire sur ton visage que tu ne crois pas aux\nprédictions.\n\nPourtant, elles t'apporteraient une aide\nprécieuse ! Tu es sûr de ne pas vouloir\nentendre ma prédiction ?\n[1]Bon, d'accord...[2-]J'ai dit\nnon !")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x09\x909Tu es un sceptique, toi. Je le savais. Mais ne\nviens pas me supplier de t'aider après, ce sera\ntrop tard ! \x0E\x01\x08\x02\xFECDPfeuh !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x02Je vois... Je vois... Quoi ?! Oh, misère...\n\n\n\nJe viens d'avoir une vision catastrophique...\nLe chemin qui s'offre à toi est semé\nd'embûches...\n\nMais grâce à mes dons, je peux voir ce qu'il va\nadvenir de toi !\n\n\nAie confiance en \x0E\x01\x06\x02\xFCCD<r<mes grands yeux ronds>>\x0E\x01\x06\x02Í et ma\ndouce voix. Je suis là pour t'aider, jeune homme.\nApproche !")
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
/*<131>*/ 		printf("Je sens aussi que tu cherches une <r<plante>>...\nJe vois... une <r<forêt >>verdoyante. \x0E\x01\x06\x02\xFBCDHmm...\nCette forêt...\x0E\x01\x06\x02Í Où peut\x2010elle bien être ?")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf("Je vois que tu cherches quelqu'un pour cultiver\nun champ, jeune homme.\n\n\nTu ne trouveras pas une telle personne ici, à\nCélesbourg ! Je vois... Tu dois te rendre dans\nles <r<grottes >>où vivent les <r<êtres qui creusent\npartout >>!\nC'est là\x2010bas que tu trouveras la bonne personne.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf("Ho ho ! Oui, je vois... Tu cherches un objet\nperdu... Une chose brillante qui tourne.\n\n\nJe vois une <r<région désertique>>... Du sable ! C'est\nlà\x2010bas, dans un recoin, que tu trouveras ce que\ntu cherches !")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal a à révéler\npour le moment. Reviens me voir si tu es à\nnouveau perdu.")
/*< 41>*/ 						printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DTu peux y arriver !")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf("Ho ho ! Je vois... Quelqu'un a perdu un insecte\nrare.\n\n\nMa boule de cristal me dit que cet insecte se\ncache sur l'île où vit <r<un passionné d'insectes >>!")
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
/*<144>*/ 	printf("Les trésors ? Je n'y connais pas grand\x2010chose...\n\n\n\nOh, peu importe. Je vais quand même essayer !")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 149, 'param3': 6}
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf("Ho ho ! Je sens... Je vois... la lumière !")
/*<156>*/ 	printf("Je vois... Je vois... Une forêt... Une région\ndésertique... Une montagne de feu... Des\nmonstres !\n\nSur les trésors de quelle région veux\x2010tu te\nrenseigner ? Ou bien veux\x2010tu en savoir plus\nsur ceux des monstres ?\n[1]La forêt[2]La région\ndésertique[3]La montagne\nde feu[4]Les monstres")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf("Ah, la forêt ! Ma boule de cristal indique que\nles trésors forestiers les plus courants sont la\n<y<plume d'oiseau >>et la <y<larve de guêpe>>.\n\nPour obtenir une <y<plume d'oiseau>>, il faut d'abord\nattraper un oiseau avec le filet à papillons.\n\n\nOn dit que pour obtenir une <y<larve de guêpe>>,\nil faut détruire un nid.\n\n\nIl existe aussi des <r<plumes bleues>>, symboles\nde bonheur. Si tu en trouves une, tu es très\nchanceux !")
          		flw_155:
/*<155>*/ 		printf("Ma boule de cristal m'indique que tu peux\nobtenir des <y<perles d'ambre >>et des <y<perles\nd'ombre >>dans toutes les régions.\n\nCependant, les <y<perles d'ombre >>peuvent\nuniquement être collectées durant les\népreuves.\n\nLe trésor le plus rare au monde est la <y<poussière\nde Déesse>> !\n\n\nIl faut être extrêmement chanceux pour en\ntrouver une.")
/*<157>*/ 		printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal a à révéler\npour le moment. Reviens me voir si tu es à\nnouveau perdu.")
/*<158>*/ 		printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DTu peux y arriver !")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf("Ah, la région désertique ! Ma boule de cristal\nindique que les trésors les plus courants de\ncette région sablonneuse sont le <y<virevoltant >>et\nla <y<fleur ancienne>>.\nTu peux attraper un <y<virevoltant >>avec un filet à\npapillons.\n\n\nLa <y<fleur ancienne>>, comme son nom l'indique,\nne pousse que dans le passé.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf("Ah, la montagne de feu ! Alors, que m'indique\nma boule de cristal ?\n\n\nJe vois... Je vois deux trésors...\n\n\n\nTu peux parfois obtenir un <y<minerai d'Ordinn\n>>en creusant la terre.\n\n\nTu peux aussi obtenir une <y<queue de lézard >>en...\ncombattant des lézards.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf("Ah, les monstres !\n\n\n\nMa boule de cristal indique que tu peux obtenir\nde nombreux trésors en combattant différents\nmonstres.\n\nLes <y<griffes de monstre >>s'obtiennent sur les\ncréatures volantes.\n\n\nTu peux trouver des <y<crânes décoratifs >>sur les\nmonstres humanoïdes.\n\n\nLes <y<gélatibulles >>se trouvent sur les monstres\nmous.")
/*<207>*/ 		printf("Il te faudra utiliser une arme pour arracher les\n<y<cors de monstre >>aux monstres qui en possèdent.\n\n\nLes <y<cristaux maléfiques>> se trouvent sur les\nmonstres ayant recours aux malédictions.\n\n\nEt parfois, tu peux même trouver des <y<crânes\nd'or>> !")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ho ho ! Je vois...\n\n\n\nOn dirait que tu as collecté de nombreux trésors\ndepuis ta dernière visite.\n\n\nApproche, jeune homme. Je vais interroger ma\nboule de cristal sur d'autres trésors.")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho ! Revoilà le gentil jeune homme !\nJe t'attendais !\n\n\nJe peux lire sur ton visage que tu as besoin de\nmon aide...")
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
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde ! Ta bourse est vide, mon garçon !\n\n\n\nJe ne suis pas un voyant bénévole, enfin !\nReviens quand tu auras de quoi payer.")
          				}
          			  case 1:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x09\x909Je vois... Mais ne viens pas me supplier de te\nvenir en aide plus tard !")
          			}
          		  case 1:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho ! Mais je te reconnais, jeune homme !\n\n\n\nC'est grâce à toi que mes affaires ont repris\ndu tonnerre !\n\n\nTu as besoin d'une prédiction ? C'est moitié\nprix rien que pour toi, maintenant !")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x703Grâce à toi, jeune homme, je suis désormais\ntrès heureux !\n\n\nSi tu veux en savoir plus sur ton avenir, viens\nme rendre visite au marché couvert en journée !")
          	  case 1:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x01\x701Que fais\x2010tu ici à cette heure tardive ? \x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Je\nne travaille pas de nuit ! Reviens me voir en\njournée !")
          	}
          }

