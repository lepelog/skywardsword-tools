          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf("Mais je viens de te dire ma prédiction!\nJe t'ai pourtant tout décrit dans tous\nles détails. Tu ne m'écoutais pas?\n\nBon d'accord, d'accord. Je vais la\nrépéter une dernière fois. Et n'oublies\npas que je vois tout, tout, tout!")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf("Mais qu'est-ce que tu as fait,\njeune homme?\n\n\nJe vois que c'est par ta faute que l'île\nde la Déesse a disparu!\n\n\nMais je sais que c'était pour la\nbonne cause.\n\n\nEt maintenant... tu dois trouver ton\npropre chemin. Fais confiance à\ntes instincts! Oui, fais confiance!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf("Je vois que tu trouveras ce que tu\ncherches sur l'île de la Déesse.\n\n\nMais le chemin sera semé d'embûches.\nOui, beaucoup d'embûches. Tu devras\nbien te préparer, jeune homme.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf("Alors, je vois que tu as remporté la\ndernière épreuve... Oui. Tout est\nrévélé dans ma vision...\n\nJe ne sais pas pourquoi j'ai dit\n« dernière ». Une intuition...\nC'est fort, l'intuition.\n\nTu veux savoir quoi faire de l'objet\ngagné à la fin de l'épreuve?\n\n\nJe vois qu'à Célesbourg, il existe une\n<r<statue en pierre qui a la forme d'un\noiseau>>. Un de ses <r<yeux est une pierre\nprécieuse>>, l'autre lui manque...\nTu l'as déjà vue, non?\n\n\n\nEssaie d'y emboîter l'objet que tu as\ntrouvé... Je le vois déjà... Ton chemin\nsera tracé!")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf("Tu trouveras l'entrée de la prochaine\n<r<épreuve >>en jouant la chanson que\nle grand esprit t'a apprise. La belle\nchanson, oui.\nJe vois qu'elle se trouve quelque part\nà <r<Célesbourg>>...\n\n\nHum... Je ne sais pas ce que cela\nsignifie. Peut-être... Ah, non, je ne\nvois pas, finalement.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf("Aaah! Je vois que tu as rassemblé trois\nparties de la chanson convoitée...\nLa dernière partie est détenue par une\ncréature gigantesque... énorme!\nVa vite rejoindre cette grande\ncréature! Je prédis que lorsque\ntu l'auras trouvée, ta chanson\nsera enfin complète. Oui...")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf("Je vois... Je vois...\n\n\n\nTu cherches un endroit où planter\nune pousse, n'est\x2010ce pas? Et pas\nn'importe quelle pousse!\nTu dois trouver l'endroit idéal.\n\x0E\x01\x06\x02\xFCCDJe vois... une vieille femme...\x0E\x01\x06\x02Í\nJe vois que l'endroit idéal est le temple\noù elle réside! Oui! Le temple...")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf("Je vois que tu cherches les quatre\nmélodies d'une chanson. Une belle\nchanson.\n\nJe vois... Tu dois aller dans trois...<pause0A>\nOui, trois régions!\nDans n'importe quel ordre!\n\nOù que tu ailles, il y aura toujours\nquelqu'un pour t'accueillir, jeune\nhomme.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf("On dirait que tu as enfin trouvé\nla personne que tu cherchais!\nJe suis content pour toi!\n\nMais je vois que tu as encore des\népreuves à passer. Miséricorde...\n\n\nTu dois aller parler au grand esprit\nqui vole dans le ciel.\nDemande plus d'informations au\ndirecteur de l'<r<école de chevalerie>>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf("Je vois... Je vois... l'ombre d'un\nmonstre gigantesque!\n\n\nÇa a beau ne pas être ma première\nprédiction, ton futur me fait toujours\nfrissonner, jeune homme!\n\nMiséricorde... Assure\x2010toi d'avoir assez\nde <r<potions >>sur toi!")
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
/*<180>*/ 																	printf("Je vois... Je vois...\nOuille, ouille, ouille. La tâche va\nêtre ardue!\n\nLa température au c\x153ur de la\nmontagne de feu est très élevée.\nTu devrais t'équiper d'un <r<bouclier\nde fer>>! Oui, de fer.")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf("Je vois... Je te vois transporter la\ncuvette d'eau sur une montagne\nde feu.\n\nSi tu ne l'apportes pas très vite à\ndestination, quelqu'un aura des\nproblèmes. Des gros problèmes.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf("Je vois des obstacles... de l'eau...\nLe manque d'eau deviendra un\nproblème pour toi.\n\nJe vois... une cuvette d'eau.\nTu as déjà vu cet objet quelque part.\n\n\nLa forêt! C'est là\x2010bas que tu trouveras\nce que tu cherches. Oui, dans la forêt!")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf("La probabilité que l'objet que vous\ncherchez se trouve dans la forêt\nest de 60 %. Je vous conseille\nde vous y rendre.\n<pling>Voulez\x2010vous que j'ajoute la<r< cuvette\nd'eau >>dans la liste des cibles\nà <r<détecter>>?\n[1]Oui, merci[2-]Pas\nmaintenant")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nLa <r<cuvette d'eau>> a été ajoutée à la\nliste des cibles à <r<détecter>>.\n\nVous pouvez commencer\nvos recherches.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je n'ai pas ajouté la\ncuvette d'eau à la liste des cibles\nà détecter.\n\nSi vous changez d'avis, adressez-vous à\nnouveau au diseur de bonne aventure.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf("Ho ho! Je vois que tu as remporté\nl'épreuve du feu avec brio! Ah, mais,\nje vois des obstacles... Quelque chose\nen rapport avec l'eau.\nÇa y est! Oui, c'est ça! Le manque\nd'eau te causera des ennuis. Des\nennuis, oui. Reviens me voir quand\nça t'arrivera.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf("Je vois...\nDis-moi donc. Combien d'épreuves\nvas\x2010tu encore passer, jeune homme?\n\nJe vois... du feu! L'<r<entrée de la\nprochaine épreuve >>se situe sur\nune montagne de feu!\n\nJe prédis qu'un <r<bouclier de bois >>y\nsera totalement inutile... Euh, oui,\ninutile.")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf("Je vois... Je vois...\nTu dois apprendre une <r<chanson\n>>dans un lieu sacré!\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un\ngros nuage... Un gros nuage, oui.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf("Oho! Tu es sorti victorieux de\nl'épreuve des sables!\n\n\nEnsuite, je vois encore plus de sable...\nLa <r<mer>>...<pause14> Un <r<navire>>...<pause14> Je n'y comprends\npas grand\x2010chose. Quoi qu'il en soit,\nrends\x2010toi dans les terres de sable.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf("Je vois... Je vois...\nL'<r<entrée de l'épreuve >>se trouve\ndans une région pleine de sable!\n\nTu dois te rendre à cet endroit.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf("Je vois... Je vois...\nTu dois apprendre une <r<chanson\n>>dans un lieu sacré!\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un\ngros nuage... Un gros nuage, oui.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf("Oho... Tu es sorti victorieux de\nl'épreuve de la forêt...\n\n\nMaintenant, je vois un <r<grand arbre>>\ndans cette forêt. Tu y trouveras\nquelqu'un d'important.\n\nEnsuite, je vois une gigantesque statue\nde pierre...<pause14> Dans les entrailles de la\nterre...<pause14> Elle monte, elle descend, elle\nne tient pas en place!\nQuoi qu'il en soit, tu devrais te diriger\nvers la forêt!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf("Je vois... Je vois...\nTu dois passer une épreuve dans un lieu\ntrès sombre... Oui, très sombre...\n\n\nÇa donne la chair de poule! Brrr...\n\n\n\nLa forêt! Oui! C'est là que tu pourras\npasser cette épreuve!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf("Dirige les ailes vers la tour...\npuis joue une mélodie au sommet\npour voir la lumière...\n\nCette lumière pointe vers\nta prochaine destination!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf("Je vois... Je vois...\n\n\n\nUne hélice tombée du ciel. Une hélice,\noui. Tu dois la retrouver...\n\n\nJe vois... Une <r<montagne de feu>>...\nL'hélice se trouve au bas du\n<r<temple de la montagne de feu>>!\n\nUne montagne de feu?\nÇa existe vraiment?")
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
/*<195>*/ 																						printf("Je vois... Je vois...\nIl te faut quelque chose pour\nréparer un certain objet...\nJe vois...\n\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í une <y<fleur ancienne>>!\n\n\n\nCette plante fleurit dans le passé,\ndans une <r<région désertique>>...<pause14>\nExplore les étendues de sable et tu\ntrouveras cette fleur! Oui...")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf("Je vois... Je vois...\nUne construction avec des ailes.\nQuand le vent souffle, les ailes\ntournent?!\nJe vois qu'il faut diriger deux de ces\nconstructions vers une tour... Oui,\nc'est ça... Une tour!")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf("Ho ho! Tu as relevé de nombreux\ndéfis, à ce que je vois...\n\n\nLa prochaine étape est...<pause1E>\nOh oh! Le <r<Chant de la Déesse>>...<pause1E>\n\n\nTu veux en savoir plus... \nQui pourrait te renseigner...?\n\n\nMa boule de cristal me dit que le\n<r<directeur de l'école de chevalerie\n>>pourra te fournir de précieux indices.\nC'est ça : le directeur.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf("Je vois... Je vois...\nQuelque chose qui se réveille!\n\n\nOh!<pause1E> C'est gros...<pause14> C'est même très gros!\n<pause28>C'est é\x2010norme!\n\n\nJe vois que si tu possèdes assez de\n<r<potions de santé>>, tu pourras vaincre\ncette chose! Ouille, ouille, ouille.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf("Je vois... Je vois...\nDu sable... Un bac...\nUn bac à sable géant?\n\nEn tout cas, je vois qu'il te faudra\nêtre très prudent avec l'électricité.\nLe métal ne t'apportera que des\nproblèmes là\x2010bas...\nUn bouclier de fer ne te sera d'aucune\nutilité. Je vois qu'il te faut un <r<bouclier\nde bois >>ou un bouclier encore plus\nrésistant!\nJe vois que les bombes s'avéreront\ntrès utiles dans cet endroit. Ton\n<r<sac de bombes >>doit être bien rempli!")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf("Je vois... Je vois...\nDe la lave en fusion!\nUne chaleur insoutenable!\n\nUn bouclier de bois ne serait d'aucune\nutilité dans cet endroit.\nJe vois... du fer! Oui, du fer!\nIl te faut un <r<bouclier de fer>>!\nJe vois également qu'une <r<potion pour\nrestaurer tes c\x153urs >>serait très utile...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf("Je vois... Je vois...\nDe la végétation... Une forêt...\nDes arbres! Beaucoup d'arbres!\n\n<pause14>Oui... <pause0A>Je vois une région boisée.\nTu devrais probablement t'équiper \nd'un <r<bouclier de bois>>.\n\nJe vois que tu as encore peu\nd'expérience. Je vois qu'une <r<potion\nde santé >>pourrait t'être très utile au\ncombat.")
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
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x03Approche! Je réchauffe ma boule\nde cristal! C'est <r<10 rubis >>la séance.\nLa lumière te guidera dans ta\npérilleuse aventure.\nMes grands yeux ronds voient...\ndes choses. Alors, on commence?\nC'est <r<10 rubis>>.\n[1]Oh, oui![2-]Non merci")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf("Alors, jeune homme, sur quel sujet\ndois\x2010je interroger ma boule de cristal?\n[1]L'avenir[2]Les trésors")
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
/*< 21>*/ 							printf("Ho ho! Aaaaaahhh...\nJe sens... Je vois... la lumière!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf("Fort bien! Je réchauffe ma boule de\ncristal. On va voir ce qu'on va voir!")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde! Je vois que tu es\nsans le sou, mon garçon!\n\n\nTu ne t'attends quand même pas à ce\nque mes beaux grands yeux ronds\nscrutent ton avenir pour rien!")
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x09\x900Je vois...\nMais ne viens pas me supplier\nde te venir en aide plus tard!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x03Oh, j'aperçois devant moi... Hm?\nRegarde-moi dans les yeux... N'aie\npas peur de mon regard perçant...\n\nJe vois des choses... Fais confiance\nà mes grands yeux ronds. Je vois...\nun fil égaré sur ta tunique... Je vois...\n\nJe vois tout! Rien n'échappe à mes\ngrands yeux bleus. Normalement,\nc'est 10 rubis la séance. Mais pour toi...\nce sera <r<1 rubis>>!\nAlors, tu veux que j'interroge ma boule\nde cristal pour<r< 1 rubis >>tout petit?\n[1]Oh oui![2-]Plus tard?")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x00\nHo ho! Ce que tu me fais plaisir!\nD'ailleurs, ça fait bien longtemps que\nje n'avais pas eu de client...\n\nEuh\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Mais ça ne veut pas dire que\nje ne suis pas un bon voyant, hein! Mes\ngrands yeux ronds voient tout, bon!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x09\x909Miséricorde! Je vois que tu n'as pas un\nseul rubis en poche, mon garçon... \nLes services de mes grands yeux\nronds ne sont pas gratuits! Pff!")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x07Quoi? Et moi qui t'offrais mes loyaux\nservices! Tu ne me fais pas confiance?\nPourtant mes grands yeux ronds\nvoient tout, bon!\nAlors, tu ne veux pas entendre\nma prédiction? Je vois des choses...\n[1]D'accord...[2-]Mais non!")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf("J'ai senti que tu étais têtu dès que je\nt'ai vu. Et je peux lire sur ton visage\nque tu ne crois pas aux prédictions.\n\nPourtant, elles t'apporteraient une\naide précieuse! Tu es sûr de ne pas\nvouloir entendre ma prédiction?\nJe vois des choses...\n[1]Bon, ça va...[2-]J'ai dit\nnon!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x09\x909Je vois que tu es un sceptique, toi. \nNe viens pas me supplier de\nt'aider après, ce sera trop tard!\n\x0E\x01\x08\x02\xFECDPfff!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x02Je vois... Je vois...\nQuoi donc? Oh, misère...\n\n\nJe viens d'avoir une vision\ncatastrophique...\n\n\nLe chemin qui s'offre à\ntoi est semé d'embûches...\n\n\nMais grâce à mes dons de voyant,\nje peux voir ce qu'il va advenir de toi!\n\n\nAie confiance en \x0E\x01\x06\x02\xFCCD<r<mes grands yeux\nronds>>\x0E\x01\x06\x02Í et en ma voix pure et douce.\n\n\nJe veux ton bien, jeune homme.\nRegarde-moi bien dans les yeux.\nApproche!")
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
/*<131>*/ 		printf("Je sens aussi que tu cherches une\n<r<plante>>... Je vois... une <r<forêt\n>>verdoyante. \x0E\x01\x06\x02\xFBCDHmm... Cette forêt...\x0E\x01\x06\x02Í\nDifficile d'imaginer cette forêt...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf("Je vois que tu cherches quelqu'un pour\ncultiver un champ, jeune homme.\n\n\nTu ne trouveras pas une telle personne\nici, à Célesbourg! Ah, je vois... Tu dois\nte rendre dans les <r<grottes >>où vivent les\n<r<êtres qui creusent partout>>!\nC'est là\x2010bas que tu trouveras la bonne\npersonne. Oui, c'est là.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf("Ho ho! Oui, je vois...\nTu cherches un objet perdu...\nUne chose brillante qui tourne.\n\nJe vois une <r<région désertique>>...\nDu sable! C'est là\x2010bas, dans un recoin,\nque tu trouveras ce que tu cherches!")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal\na à révéler pour le moment. Reviens\nme voir si tu te perds encore.")
/*< 41>*/ 						printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DBonne chance à toi!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf("Ho ho! Je vois...\nQuelqu'un a perdu un insecte rare.\n\n\nMa boule de cristal me dit que cet\ninsecte se cache sur l'île où vit\n<r<un passionné d'insectes>>! Un\npassionné, oui. C'est bien ça.")
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
/*<144>*/ 	printf("Oh, oui, les trésors. Tu veux que\nje scrute ma boule de cristal pour\ny trouver des trésors. Je t'avoue,\nje n'y connais pas grand\x2010chose...\nMais, je vais quand même essayer!")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 149, 'param3': 6}
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf("Ho ho! Aaaaaahhh...\nJe sens... Je vois... la lumière!")
/*<156>*/ 	printf("Je vois... Je vois des choses... Oh!\nUne forêt... Une région désertique...\nUne montagne de feu... Des monstres!\nToutes des sources de trésor...\nSur les trésors de quelle région veux\x2010tu\nte renseigner? Ou bien veux\x2010tu en\nsavoir plus sur ceux des monstres?\n[1]La forêt[2]La région\ndésertique[3]La montagne\nde feu[4]Les monstres")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf("Aaah, la forêt! Ma boule de cristal\nindique que les trésors forestiers les\nplus courants sont la <y<plume d'oiseau>>\net la <y<larve de guêpe>>.\nPour obtenir une <y<plume d'oiseau>>, je\nvois qu'il faudra d'abord attraper un\noiseau avec le filet. Oui, c'est ça.\n\nAaah, oui. Je vois... Pour obtenir une\n<y<larve de guêpe>>, il faudra détruire un...\noh, il faudra détruire un nid.\n\nTiens, j'aperçois des <r<plumes bleues>>,\nsymboles de bonheur. Si tu en trouves\nune, tu es très chanceux!")
          		flw_155:
/*<155>*/ 		printf("Ma boule de cristal m'indique que\ntu peux obtenir des <y<perles d'ambre\n>>et des <y<perles d'ombre >>dans toutes\nles régions.\nAaah... Les <y<perles d'ombre >>peuvent\nuniquement être collectées durant\nles épreuves.\n\nEt, le trésor le plus rare au monde est\nla <y<poussière de Déesse>>!\n\n\nIl va falloir que tu sois extrêmement\nchanceux pour en trouver une.")
/*<157>*/ 		printf("\x0E\x01\x09\x04\x00\x12C'est tout ce que ma boule de cristal\na à révéler pour le moment. Reviens\nme voir si tu te perds encore.")
/*<158>*/ 		printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DBonne chance à toi!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf("Ah, la région désertique! Ma boule\nde cristal me laisse entrevoir que tu\ntrouveras un... attends... ça y est :\nun <y<virevoltant >>et une <y<fleur ancienne>>.\nOh, je prédis que tu attraperas un\n<y<virevoltant >>avec un filet!\n\n\nJe vois... eh, oui, c'est évident : il faut\nvoyager dans le passé pour trouver la\n<y<fleur ancienne>>. Elle est ancienne,\naprès tout.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf("Ah, la montagne de feu! Tu y\ntrouveras... Tu y trouveras...\nLaisse-moi voir...\n\nJe vois... Je vois deux trésors...\nUn minerai...  une queue...\n\n\nMa boule de cristal me montre que\ntu peux parfois obtenir un <y<minerai\nd'Ordinn >>en creusant la terre.\n\nTu peux aussi obtenir une <y<queue de\nlézard >>en combattant des espèces\nde... lézards.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf("Ah, les monstres!\n\n\n\nMa boule de cristal indique que tu peux\nobtenir de nombreux trésors en\ncombattant différents monstres.\n\nLes <y<griffes de monstre >>s'obtiennent\nsur les créatures volantes.\n\n\nTu peux trouver des <y<crânes décoratifs\n>>sur les monstres humanoïdes.\n\n\nLes <y<gélatibulles >>se trouvent sur\nles monstres mous. Dégoûtant.")
/*<207>*/ 		printf("Il te faudra utiliser une arme pour\narracher les <y<cors de monstre >>aux\nmonstres qui en possèdent.\n\nLes <y<cristaux maléfiques>> se trouvent\nsur les monstres ayant recours aux\nmalédictions.\n\nEt parfois, tu peux même trouver\ndes <y<crânes d'or>>!")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ho ho!\nJe vois...\n\n\nJe vois que tu as l'air à bien aller! On\ndirait que tu as collecté de nombreux\ntrésors depuis ta dernière visite.\n\nViens par ici, jeune homme. Je vais\ninterroger ma boule de cristal sur\nd'autres trésors. On va voir ce qu'on\npeut voir!")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho! Revoilà le gentil jeune homme!\nJe t'attendais! J'avais pressenti que tu\nreviendrais, en fait.\n\nJe peux lire sur ton visage que tu as\nbesoin de mon aide...")
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
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x09\x909Miséricorde! Je vois que\nta bourse est vide, mon garçon!\n\n\nJe ne suis pas un voyant bénévole,\ntout de même! Regarde-moi dans\nle blanc des yeux : Reviens quand\ntu auras de quoi payer.")
          				}
          			  case 1:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x09\x900Je vois...\nMais ne viens pas me supplier\nde te venir en aide plus tard!")
          			}
          		  case 1:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x00\nHo ho!\nMais je te reconnais, jeune homme!\n\n\nC'est grâce à toi que mes affaires\nont repris du poil de la bête!\n\n\nTu as besoin d'une prédiction?\nC'est moitié prix rien que pour toi,\nmaintenant!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x703Grâce à toi, jeune homme, je suis\ndésormais très heureux!\n\n\nSi tu veux en savoir plus sur ton avenir,\nviens me rendre visite au bazar en\njournée!")
          	  case 1:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x01\x701Mais il se fait tard! Que fais\x2010tu ici?\n\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Je ne travaille pas de nuit!\nReviens me voir en journée!")
          	}
          }

