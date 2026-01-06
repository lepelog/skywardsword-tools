          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Mais je viens de te dire ma prédiction!\nJe t'ai pourtant tout décrit dans tous\nles détails. Tu ne m'écoutais pas?\n\nBon d'accord, d'accord. Je vais la\nrépéter une dernière fois. Et n'oublies\npas que je vois tout, tout, tout!")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "Mais qu'est-ce que tu as fait,\njeune homme?\n\n\nJe vois que c'est par ta faute que l'île\nde la Déesse a disparu!\n\n\nMais je sais que c'était pour la\nbonne cause.\n\n\nEt maintenant... tu dois trouver ton\npropre chemin. Fais confiance à\ntes instincts! Oui, fais confiance!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf(/* textboxtype: 1, unk: 0, line: 59 */ "Je vois que tu trouveras ce que tu\ncherches sur l'île de la Déesse.\n\n\nMais le chemin sera semé d'embûches.\nOui, beaucoup d'embûches. Tu devras\nbien te préparer, jeune homme.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf(/* textboxtype: 1, unk: 0, line: 58 */ "Alors, je vois que tu as remporté la\ndernière épreuve... Oui. Tout est\nrévélé dans ma vision...\n\nJe ne sais pas pourquoi j'ai dit\n« dernière ». Une intuition...\nC'est fort, l'intuition.\n\nTu veux savoir quoi faire de l'objet\ngagné à la fin de l'épreuve?\n\n\nJe vois qu'à Célesbourg, il existe une\n<color red<statue en pierre qui a la forme d'un\noiseau>coloroff>. Un de ses <color red<yeux est une pierre\nprécieuse>coloroff>, l'autre lui manque...\nTu l'as déjà vue, non?\n\n\n\nEssaie d'y emboîter l'objet que tu as\ntrouvé... Je le vois déjà... Ton chemin\nsera tracé!")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf(/* textboxtype: 1, unk: 0, line: 57 */ "Tu trouveras l'entrée de la prochaine\n<color red<épreuve >coloroff>en jouant la chanson que\nle grand esprit t'a apprise. La belle\nchanson, oui.\nJe vois qu'elle se trouve quelque part\nà <color red<Célesbourg>coloroff>...\n\n\nHum... Je ne sais pas ce que cela\nsignifie. Peut-être... Ah, non, je ne\nvois pas, finalement.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf(/* textboxtype: 1, unk: 0, line: 56 */ "Aaah! Je vois que tu as rassemblé trois\nparties de la chanson convoitée...\nLa dernière partie est détenue par une\ncréature gigantesque... énorme!\nVa vite rejoindre cette grande\ncréature! Je prédis que lorsque\ntu l'auras trouvée, ta chanson\nsera enfin complète. Oui...")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf(/* textboxtype: 1, unk: 0, line: 37 */ "Je vois... Je vois...\n\n\n\nTu cherches un endroit où planter\nune pousse, n'est‐ce pas? Et pas\nn'importe quelle pousse!\nTu dois trouver l'endroit idéal.\n<0x10006:0xfccd>Je vois... une vieille femme...<0x10006:0x00cd>\nJe vois que l'endroit idéal est le temple\noù elle réside! Oui! Le temple...")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf(/* textboxtype: 1, unk: 0, line: 55 */ "Je vois que tu cherches les quatre\nmélodies d'une chanson. Une belle\nchanson.\n\nJe vois... Tu dois aller dans trois...<pause 10>\nOui, trois régions!\nDans n'importe quel ordre!\n\nOù que tu ailles, il y aura toujours\nquelqu'un pour t'accueillir, jeune\nhomme.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf(/* textboxtype: 1, unk: 0, line: 54 */ "On dirait que tu as enfin trouvé\nla personne que tu cherchais!\nJe suis content pour toi!\n\nMais je vois que tu as encore des\népreuves à passer. Miséricorde...\n\n\nTu dois aller parler au grand esprit\nqui vole dans le ciel.\nDemande plus d'informations au\ndirecteur de l'<color red<école de chevalerie>coloroff>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf(/* textboxtype: 1, unk: 0, line: 52 */ "Je vois... Je vois... l'ombre d'un\nmonstre gigantesque!\n\n\nÇa a beau ne pas être ma première\nprédiction, ton futur me fait toujours\nfrissonner, jeune homme!\n\nMiséricorde... Assure‐toi d'avoir assez\nde <color red<potions >coloroff>sur toi!")
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
/*<180>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Je vois... Je vois...\nOuille, ouille, ouille. La tâche va\nêtre ardue!\n\nLa température au cœur de la\nmontagne de feu est très élevée.\nTu devrais t'équiper d'un <color red<bouclier\nde fer>coloroff>! Oui, de fer.")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf(/* textboxtype: 1, unk: 0, line: 50 */ "Je vois... Je te vois transporter la\ncuvette d'eau sur une montagne\nde feu.\n\nSi tu ne l'apportes pas très vite à\ndestination, quelqu'un aura des\nproblèmes. Des gros problèmes.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf(/* textboxtype: 1, unk: 0, line: 49 */ "Je vois des obstacles... de l'eau...\nLe manque d'eau deviendra un\nproblème pour toi.\n\nJe vois... une cuvette d'eau.\nTu as déjà vu cet objet quelque part.\n\n\nLa forêt! C'est là‐bas que tu trouveras\nce que tu cherches. Oui, dans la forêt!")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf(/* textboxtype: 2, unk: 0, line: 65 */ "La probabilité que l'objet que vous\ncherchez se trouve dans la forêt\nest de 60 %. Je vous conseille\nde vous y rendre.\n<sound 4>Voulez‐vous que j'ajoute la<color red< cuvette\nd'eau >coloroff>dans la liste des cibles\nà <color red<détecter>coloroff>?\n[1-]Oui, merci[2]Pas\nmaintenant")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf(/* textboxtype: 2, unk: 0, line: 66 */ "<0x10012:0x00000005>Très bien, Maître.\nLa <color red<cuvette d'eau>coloroff> a été ajoutée à la\nliste des cibles à <color red<détecter>coloroff>.\n\nVous pouvez commencer\nvos recherches.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf(/* textboxtype: 2, unk: 0, line: 67 */ "<0x10012:0x00000005>Très bien, Maître. Je n'ai pas ajouté la\ncuvette d'eau à la liste des cibles\nà détecter.\n\nSi vous changez d'avis, adressez-vous à\nnouveau au diseur de bonne aventure.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf(/* textboxtype: 1, unk: 0, line: 48 */ "Ho ho! Je vois que tu as remporté\nl'épreuve du feu avec brio! Ah, mais,\nje vois des obstacles... Quelque chose\nen rapport avec l'eau.\nÇa y est! Oui, c'est ça! Le manque\nd'eau te causera des ennuis. Des\nennuis, oui. Reviens me voir quand\nça t'arrivera.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf(/* textboxtype: 1, unk: 0, line: 47 */ "Je vois...\nDis-moi donc. Combien d'épreuves\nvas‐tu encore passer, jeune homme?\n\nJe vois... du feu! L'<color red<entrée de la\nprochaine épreuve >coloroff>se situe sur\nune montagne de feu!\n\nJe prédis qu'un <color red<bouclier de bois >coloroff>y\nsera totalement inutile... Euh, oui,\ninutile.")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf(/* textboxtype: 1, unk: 0, line: 44 */ "Je vois... Je vois...\nTu dois apprendre une <color red<chanson\n>coloroff>dans un lieu sacré!\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un\ngros nuage... Un gros nuage, oui.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 46 */ "Oho! Tu es sorti victorieux de\nl'épreuve des sables!\n\n\nEnsuite, je vois encore plus de sable...\nLa <color red<mer>coloroff>...<pause 20> Un <color red<navire>coloroff>...<pause 20> Je n'y comprends\npas grand‐chose. Quoi qu'il en soit,\nrends‐toi dans les terres de sable.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Je vois... Je vois...\nL'<color red<entrée de l'épreuve >coloroff>se trouve\ndans une région pleine de sable!\n\nTu dois te rendre à cet endroit.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Je vois... Je vois...\nTu dois apprendre une <color red<chanson\n>coloroff>dans un lieu sacré!\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un\ngros nuage... Un gros nuage, oui.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 43 */ "Oho... Tu es sorti victorieux de\nl'épreuve de la forêt...\n\n\nMaintenant, je vois un <color red<grand arbre>coloroff>\ndans cette forêt. Tu y trouveras\nquelqu'un d'important.\n\nEnsuite, je vois une gigantesque statue\nde pierre...<pause 20> Dans les entrailles de la\nterre...<pause 20> Elle monte, elle descend, elle\nne tient pas en place!\nQuoi qu'il en soit, tu devrais te diriger\nvers la forêt!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Je vois... Je vois...\nTu dois passer une épreuve dans un lieu\ntrès sombre... Oui, très sombre...\n\n\nÇa donne la chair de poule! Brrr...\n\n\n\nLa forêt! Oui! C'est là que tu pourras\npasser cette épreuve!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 41 */ "Dirige les ailes vers la tour...\npuis joue une mélodie au sommet\npour voir la lumière...\n\nCette lumière pointe vers\nta prochaine destination!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf(/* textboxtype: 1, unk: 0, line: 38 */ "Je vois... Je vois...\n\n\n\nUne hélice tombée du ciel. Une hélice,\noui. Tu dois la retrouver...\n\n\nJe vois... Une <color red<montagne de feu>coloroff>...\nL'hélice se trouve au bas du\n<color red<temple de la montagne de feu>coloroff>!\n\nUne montagne de feu?\nÇa existe vraiment?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf(/* textboxtype: 2, unk: 0, line: 68 */ "")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf(/* textboxtype: 2, unk: 0, line: 69 */ "")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf(/* textboxtype: 2, unk: 0, line: 70 */ "")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 40 */ "Je vois... Je vois...\nIl te faut quelque chose pour\nréparer un certain objet...\nJe vois...\n<0x10006:0xfbcd>...<0x10006:0x00cd> une <color yellow<fleur ancienne>coloroff>!\n\n\n\nCette plante fleurit dans le passé,\ndans une <color red<région désertique>coloroff>...<pause 20>\nExplore les étendues de sable et tu\ntrouveras cette fleur! Oui...")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Je vois... Je vois...\nUne construction avec des ailes.\nQuand le vent souffle, les ailes\ntournent?!\nJe vois qu'il faut diriger deux de ces\nconstructions vers une tour... Oui,\nc'est ça... Une tour!")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf(/* textboxtype: 1, unk: 0, line: 64 */ "Ho ho! Tu as relevé de nombreux\ndéfis, à ce que je vois...\n\n\nLa prochaine étape est...<pause 30>\nOh oh! Le <color red<Chant de la Déesse>coloroff>...<pause 30>\n\n\nTu veux en savoir plus... \nQui pourrait te renseigner...?\n\n\nMa boule de cristal me dit que le\n<color red<directeur de l'école de chevalerie\n>coloroff>pourra te fournir de précieux indices.\nC'est ça : le directeur.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Je vois... Je vois...\nQuelque chose qui se réveille!\n\n\nOh!<pause 30> C'est gros...<pause 20> C'est même très gros!\n<pause 40>C'est é‐norme!\n\n\nJe vois que si tu possèdes assez de\n<color red<potions de santé>coloroff>, tu pourras vaincre\ncette chose! Ouille, ouille, ouille.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf(/* textboxtype: 1, unk: 0, line: 35 */ "Je vois... Je vois...\nDu sable... Un bac...\nUn bac à sable géant?\n\nEn tout cas, je vois qu'il te faudra\nêtre très prudent avec l'électricité.\nLe métal ne t'apportera que des\nproblèmes là‐bas...\nUn bouclier de fer ne te sera d'aucune\nutilité. Je vois qu'il te faut un <color red<bouclier\nde bois >coloroff>ou un bouclier encore plus\nrésistant!\nJe vois que les bombes s'avéreront\ntrès utiles dans cet endroit. Ton\n<color red<sac de bombes >coloroff>doit être bien rempli!")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 34 */ "Je vois... Je vois...\nDe la lave en fusion!\nUne chaleur insoutenable!\n\nUn bouclier de bois ne serait d'aucune\nutilité dans cet endroit.\nJe vois... du fer! Oui, du fer!\nIl te faut un <color red<bouclier de fer>coloroff>!\nJe vois également qu'une <color red<potion pour\nrestaurer tes cœurs >coloroff>serait très utile...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Je vois... Je vois...\nDe la végétation... Une forêt...\nDes arbres! Beaucoup d'arbres!\n\n<pause 20>Oui... <pause 10>Je vois une région boisée.\nTu devrais probablement t'équiper \nd'un <color red<bouclier de bois>coloroff>.\n\nJe vois que tu as encore peu\nd'expérience. Je vois qu'une <color red<potion\nde santé >coloroff>pourrait t'être très utile au\ncombat.")
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
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000003>Approche! Je réchauffe ma boule\nde cristal! C'est <color red<10 rubis >coloroff>la séance.\nLa lumière te guidera dans ta\npérilleuse aventure.\nMes grands yeux ronds voient...\ndes choses. Alors, on commence?\nC'est <color red<10 rubis>coloroff>.\n[1-]Oh, oui![2]Non merci")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "Alors, jeune homme, sur quel sujet\ndois‐je interroger ma boule de cristal?\n[1-]L'avenir[2-]Les trésors")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "Ho ho! Magnifique! Extraordinaire!\nOn va voir ce qu'on va voir... Je\nvais réchauffer ma boule de cristal!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							wait_frames(160)
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ho ho! Aaaaaahhh...\nJe sens... Je vois... la lumière!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf(/* textboxtype: 1, unk: 0, line: 16 */ "Fort bien! Je réchauffe ma boule de\ncristal. On va voir ce qu'on va voir!")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00090909>Miséricorde! Je vois que tu es\nsans le sou, mon garçon!\n\n\nTu ne t'attends quand même pas à ce\nque mes beaux grands yeux ronds\nscrutent ton avenir pour rien!")
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090900>Je vois...\nMais ne viens pas me supplier\nde te venir en aide plus tard!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Oh, j'aperçois devant moi... Hm?\nRegarde-moi dans les yeux... N'aie\npas peur de mon regard perçant...\n\nJe vois des choses... Fais confiance\nà mes grands yeux ronds. Je vois...\nun fil égaré sur ta tunique... Je vois...\n\nJe vois tout! Rien n'échappe à mes\ngrands yeux bleus. Normalement,\nc'est 10 rubis la séance. Mais pour toi...\nce sera <color red<1 rubis>coloroff>!\nAlors, tu veux que j'interroge ma boule\nde cristal pour<color red< 1 rubis >coloroff>tout petit?\n[1-]Oh oui![2]Plus tard?")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Ho ho! Ce que tu me fais plaisir!\nD'ailleurs, ça fait bien longtemps que\nje n'avais pas eu de client...\n\nEuh<0x10006:0xfdcd>...<0x10006:0x00cd> Mais ça ne veut pas dire que\nje ne suis pas un bon voyant, hein! Mes\ngrands yeux ronds voient tout, bon!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00090909>Miséricorde! Je vois que tu n'as pas un\nseul rubis en poche, mon garçon... \nLes services de mes grands yeux\nronds ne sont pas gratuits! Pff!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000007>Quoi? Et moi qui t'offrais mes loyaux\nservices! Tu ne me fais pas confiance?\nPourtant mes grands yeux ronds\nvoient tout, bon!\nAlors, tu ne veux pas entendre\nma prédiction? Je vois des choses...\n[1-]D'accord...[2]Mais non!")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "J'ai senti que tu étais têtu dès que je\nt'ai vu. Et je peux lire sur ton visage\nque tu ne crois pas aux prédictions.\n\nPourtant, elles t'apporteraient une\naide précieuse! Tu es sûr de ne pas\nvouloir entendre ma prédiction?\nJe vois des choses...\n[1-]Bon, ça va...[2]J'ai dit\nnon!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00090909>Je vois que tu es un sceptique, toi. \nNe viens pas me supplier de\nt'aider après, ce sera trop tard!\n<0x10008:0xfecd>Pfff!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000002>Je vois... Je vois...\nQuoi donc? Oh, misère...\n\n\nJe viens d'avoir une vision\ncatastrophique...\n\n\nLe chemin qui s'offre à\ntoi est semé d'embûches...\n\n\nMais grâce à mes dons de voyant,\nje peux voir ce qu'il va advenir de toi!\n\n\nAie confiance en <0x10006:0xfccd><color red<mes grands yeux\nronds>coloroff><0x10006:0x00cd> et en ma voix pure et douce.\n\n\nJe veux ton bien, jeune homme.\nRegarde-moi bien dans les yeux.\nApproche!")
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
/*<131>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Je sens aussi que tu cherches une\n<color red<plante>coloroff>... Je vois... une <color red<forêt\n>coloroff>verdoyante. <0x10006:0xfbcd>Hmm... Cette forêt...<0x10006:0x00cd>\nDifficile d'imaginer cette forêt...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 61 */ "Je vois que tu cherches quelqu'un pour\ncultiver un champ, jeune homme.\n\n\nTu ne trouveras pas une telle personne\nici, à Célesbourg! Ah, je vois... Tu dois\nte rendre dans les <color red<grottes >coloroff>où vivent les\n<color red<êtres qui creusent partout>coloroff>!\nC'est là‐bas que tu trouveras la bonne\npersonne. Oui, c'est là.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Ho ho! Oui, je vois...\nTu cherches un objet perdu...\nUne chose brillante qui tourne.\n\nJe vois une <color red<région désertique>coloroff>...\nDu sable! C'est là‐bas, dans un recoin,\nque tu trouveras ce que tu cherches!")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000012>C'est tout ce que ma boule de cristal\na à révéler pour le moment. Reviens\nme voir si tu te perds encore.")
/*< 41>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Bonne chance à toi!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ho ho! Je vois...\nQuelqu'un a perdu un insecte rare.\n\n\nMa boule de cristal me dit que cet\ninsecte se cache sur l'île où vit\n<color red<un passionné d'insectes>coloroff>! Un\npassionné, oui. C'est bien ça.")
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
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Oh, oui, les trésors. Tu veux que\nje scrute ma boule de cristal pour\ny trouver des trésors. Je t'avoue,\nje n'y connais pas grand‐chose...\nMais, je vais quand même essayer!")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	wait_frames(160)
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ho ho! Aaaaaahhh...\nJe sens... Je vois... la lumière!")
/*<156>*/ 	printf(/* textboxtype: 1, unk: 1, line: 19 */ "Je vois... Je vois des choses... Oh!\nUne forêt... Une région désertique...\nUne montagne de feu... Des monstres!\nToutes des sources de trésor...\nSur les trésors de quelle région veux‐tu\nte renseigner? Ou bien veux‐tu en\nsavoir plus sur ceux des monstres?\n[1-]La forêt[2-]La région\ndésertique[3-]La montagne\nde feu[4-]Les monstres")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "Aaah, la forêt! Ma boule de cristal\nindique que les trésors forestiers les\nplus courants sont la <color yellow<plume d'oiseau>coloroff>\net la <color yellow<larve de guêpe>coloroff>.\nPour obtenir une <color yellow<plume d'oiseau>coloroff>, je\nvois qu'il faudra d'abord attraper un\noiseau avec le filet. Oui, c'est ça.\n\nAaah, oui. Je vois... Pour obtenir une\n<color yellow<larve de guêpe>coloroff>, il faudra détruire un...\noh, il faudra détruire un nid.\n\nTiens, j'aperçois des <color red<plumes bleues>coloroff>,\nsymboles de bonheur. Si tu en trouves\nune, tu es très chanceux!")
          		flw_155:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Ma boule de cristal m'indique que\ntu peux obtenir des <color yellow<perles d'ambre\n>coloroff>et des <color yellow<perles d'ombre >coloroff>dans toutes\nles régions.\nAaah... Les <color yellow<perles d'ombre >coloroff>peuvent\nuniquement être collectées durant\nles épreuves.\n\nEt, le trésor le plus rare au monde est\nla <color yellow<poussière de Déesse>coloroff>!\n\n\nIl va falloir que tu sois extrêmement\nchanceux pour en trouver une.")
/*<157>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000012>C'est tout ce que ma boule de cristal\na à révéler pour le moment. Reviens\nme voir si tu te perds encore.")
/*<158>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Bonne chance à toi!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ah, la région désertique! Ma boule\nde cristal me laisse entrevoir que tu\ntrouveras un... attends... ça y est :\nun <color yellow<virevoltant >coloroff>et une <color yellow<fleur ancienne>coloroff>.\nOh, je prédis que tu attraperas un\n<color yellow<virevoltant >coloroff>avec un filet!\n\n\nJe vois... eh, oui, c'est évident : il faut\nvoyager dans le passé pour trouver la\n<color yellow<fleur ancienne>coloroff>. Elle est ancienne,\naprès tout.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "Ah, la montagne de feu! Tu y\ntrouveras... Tu y trouveras...\nLaisse-moi voir...\n\nJe vois... Je vois deux trésors...\nUn minerai...  une queue...\n\n\nMa boule de cristal me montre que\ntu peux parfois obtenir un <color yellow<minerai\nd'Ordinn >coloroff>en creusant la terre.\n\nTu peux aussi obtenir une <color yellow<queue de\nlézard >coloroff>en combattant des espèces\nde... lézards.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Ah, les monstres!\n\n\n\nMa boule de cristal indique que tu peux\nobtenir de nombreux trésors en\ncombattant différents monstres.\n\nLes <color yellow<griffes de monstre >coloroff>s'obtiennent\nsur les créatures volantes.\n\n\nTu peux trouver des <color yellow<crânes décoratifs\n>coloroff>sur les monstres humanoïdes.\n\n\nLes <color yellow<gélatibulles >coloroff>se trouvent sur\nles monstres mous. Dégoûtant.")
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il te faudra utiliser une arme pour\narracher les <color yellow<cors de monstre >coloroff>aux\nmonstres qui en possèdent.\n\nLes <color yellow<cristaux maléfiques>coloroff> se trouvent\nsur les monstres ayant recours aux\nmalédictions.\n\nEt parfois, tu peux même trouver\ndes <color yellow<crânes d'or>coloroff>!")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000002>Ho ho!\nJe vois...\n\n\nJe vois que tu as l'air à bien aller! On\ndirait que tu as collecté de nombreux\ntrésors depuis ta dernière visite.\n\nViens par ici, jeune homme. Je vais\ninterroger ma boule de cristal sur\nd'autres trésors. On va voir ce qu'on\npeut voir!")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Ho ho! Revoilà le gentil jeune homme!\nJe t'attendais! J'avais pressenti que tu\nreviendrais, en fait.\n\nJe peux lire sur ton visage que tu as\nbesoin de mon aide...")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "Je vais réchauffer ma boule de cristal!\nC'est moitié prix, rien que pour toi!\n\n\nTu es prêt? C'est <color red<5 rubis >coloroff>la séance.\n[1-]Oh, oui![2]Non merci")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090909>Miséricorde! Je vois que\nta bourse est vide, mon garçon!\n\n\nJe ne suis pas un voyant bénévole,\ntout de même! Regarde-moi dans\nle blanc des yeux : Reviens quand\ntu auras de quoi payer.")
          				}
          			  case 1:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090900>Je vois...\nMais ne viens pas me supplier\nde te venir en aide plus tard!")
          			}
          		  case 1:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>Ho ho!\nMais je te reconnais, jeune homme!\n\n\nC'est grâce à toi que mes affaires\nont repris du poil de la bête!\n\n\nTu as besoin d'une prédiction?\nC'est moitié prix rien que pour toi,\nmaintenant!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00010703>Grâce à toi, jeune homme, je suis\ndésormais très heureux!\n\n\nSi tu veux en savoir plus sur ton avenir,\nviens me rendre visite au bazar en\njournée!")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010701>Mais il se fait tard! Que fais‐tu ici?\n<0x10006:0xfccd>...<0x10006:0x00cd> Je ne travaille pas de nuit!\nReviens me voir en journée!")
          	}
          }

