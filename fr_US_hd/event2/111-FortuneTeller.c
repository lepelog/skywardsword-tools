          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Mais je viens de te dire ma prédiction! Je t'ai\npourtant tout décrit dans tous les détails. Tu\nne m'écoutais pas?\n\nBon d'accord, d'accord. Je vais la répéter une\ndernière fois. Et n'oublies pas que je vois tout,\ntout, tout!")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "Mais qu'est-ce que tu as fait, jeune homme?\n\n\n\nJe vois que c'est par ta faute que l'île de la\nDéesse a disparu!\n\n\nMais je sais que c'était pour la bonne cause.\n\n\n\nEt maintenant... tu dois trouver ton propre\nchemin. Fais confiance à tes instincts! Oui,\nfais confiance!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf(/* textboxtype: 0, unk: 0, line: 59 */ "Je vois que tu trouveras ce que tu cherches\nsur l'île de la Déesse.\n\n\nMais le chemin sera semé d'embûches. Oui,\nbeaucoup d'embûches. Tu devras bien te\npréparer, jeune homme.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "Alors, je vois que tu as remporté la dernière\népreuve... Oui. Tout est révélé dans ma vision...\n\n\nJe ne sais pas pourquoi j'ai dit « dernière ».\nUne intuition... C'est fort, l'intuition.\n\n\nTu veux savoir quoi faire de l'objet gagné à\nla fin de l'épreuve?\n\n\nJe vois qu'à Célesbourg, il existe une <color red<statue en\npierre qui a la forme d'un oiseau>coloroff>. Un de ses\n<color red<yeux est une pierre précieuse>coloroff>, l'autre lui\nmanque...\nTu l'as déjà vue, non?\n\n\n\nEssaie d'y emboîter l'objet que tu as trouvé...\nJe le vois déjà... Ton chemin sera tracé!")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf(/* textboxtype: 1, unk: 0, line: 57 */ "Tu trouveras l'entrée de la prochaine <color red<épreuve\n>coloroff>en jouant la chanson que le grand esprit t'a\napprise. La belle chanson, oui.\n\nJe vois qu'elle se trouve quelque part à\n<color red<Célesbourg>coloroff>...\n\n\nHum... Je ne sais pas ce que cela signifie.\nPeut-être... Ah, non, je ne vois pas, finalement.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf(/* textboxtype: 0, unk: 0, line: 56 */ "Aaah! Je vois que tu as rassemblé trois parties\nde la chanson convoitée... La dernière partie\nest détenue par une créature gigantesque...\nénorme!\nVa vite rejoindre cette grande créature! Je\nprédis que lorsque tu l'auras trouvée, ta\nchanson sera enfin complète. Oui...")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf(/* textboxtype: 0, unk: 1, line: 37 */ "Je vois... Je vois...\n\n\n\nTu cherches un endroit où planter une pousse,\nn'est‐ce pas? Et pas n'importe quelle pousse!\nTu dois trouver l'endroit idéal.\n\n<0x10006:0xfccd>Je vois... une vieille femme...<0x10006:0x00cd> Je vois que\nl'endroit idéal est le temple où elle réside!\nOui! Le temple...")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf(/* textboxtype: 0, unk: 1, line: 55 */ "Je vois que tu cherches les quatre mélodies\nd'une chanson. Une belle chanson.\n\n\nJe vois... Tu dois aller dans trois...<pause 10> Oui, trois\nrégions! Dans n'importe quel ordre!\n\n\nOù que tu ailles, il y aura toujours quelqu'un\npour t'accueillir, jeune homme.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf(/* textboxtype: 1, unk: 0, line: 54 */ "On dirait que tu as enfin trouvé la personne\nque tu cherchais! Je suis content pour toi!\n\n\nMais je vois que tu as encore des épreuves\nà passer. Miséricorde...\n\n\nTu dois aller parler au grand esprit qui vole\ndans le ciel. Demande plus d'informations au\ndirecteur de l'<color red<école de chevalerie>coloroff>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf(/* textboxtype: 0, unk: 1, line: 52 */ "Je vois... Je vois... l'ombre d'un monstre\ngigantesque!\n\n\nÇa a beau ne pas être ma première prédiction,\nton futur me fait toujours frissonner, jeune\nhomme!\n\nMiséricorde... Assure‐toi d'avoir assez de\n<color red<potions >coloroff>sur toi!")
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
/*<180>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Je vois... Je vois... Ouille, ouille, ouille.\nLa tâche va être ardue!\n\n\nLa température au cœur de la montagne de\nfeu est très élevée. Tu devrais t'équiper\nd'un <color red<bouclier de fer>coloroff>! Oui, de fer.")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Je vois... Je te vois transporter la cuvette\nd'eau sur une montagne de feu.\n\n\nSi tu ne l'apportes pas très vite à destination,\nquelqu'un aura des problèmes. Des gros\nproblèmes.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf(/* textboxtype: 0, unk: 1, line: 49 */ "Je vois des obstacles... de l'eau... Le manque\nd'eau deviendra un problème pour toi.\n\n\nJe vois... une cuvette d'eau. Tu as déjà vu cet\nobjet quelque part.\n\n\nLa forêt! C'est là‐bas que tu trouveras ce que\ntu cherches. Oui, dans la forêt!")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 65 */ "La probabilité que l'objet que vous cherchez se trouve\ndans la forêt est de 60 %. Je vous conseille de vous\ny rendre.\n\n<sound 4>Voulez‐vous que j'ajoute la<color red< cuvette d'eau >coloroff>dans la liste\ndes cibles à <color red<détecter>coloroff>?\n[1-]Oui, merci[2]Pas maintenant")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10012:0x00000005>Très bien, Maître. La <color red<cuvette d'eau>coloroff> a été ajoutée à\nla liste des cibles à <color red<détecter>coloroff>.\n\n\nVous pouvez commencer vos recherches.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10012:0x00000005>Très bien, Maître. Je n'ai pas ajouté la cuvette d'eau\nà la liste des cibles à détecter.\n\n\nSi vous changez d'avis, adressez‐vous à nouveau\nau diseur de bonne aventure.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf(/* textboxtype: 1, unk: 0, line: 48 */ "Ho ho! Je vois que tu as remporté l'épreuve\ndu feu avec brio! Ah, mais, je vois des\nobstacles... Quelque chose en rapport avec l'eau.\n\nÇa y est! Oui, c'est ça! Le manque d'eau te\ncausera des ennuis. Des ennuis, oui. Reviens\nme voir quand ça t'arrivera.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf(/* textboxtype: 0, unk: 0, line: 47 */ "Je vois... Dis-moi donc. Combien d'épreuves\nvas‐tu encore passer, jeune homme?\n\n\nJe vois... du feu! L'<color red<entrée de la prochaine\népreuve >coloroff>se situe sur une montagne de feu!\n\n\nJe prédis qu'un <color red<bouclier de bois >coloroff>y sera\ntotalement inutile... Euh, oui, inutile.")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf(/* textboxtype: 0, unk: 0, line: 44 */ "Je vois... Je vois... Tu dois apprendre une\n<color red<chanson >coloroff>dans un lieu sacré!\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage... Un gros nuage, oui.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Oho! Tu es sorti victorieux de l'épreuve\ndes sables!\n\n\nEnsuite, je vois encore plus de sable... La <color red<mer>coloroff>...<pause 20>\nUn <color red<navire>coloroff>...<pause 20> Je n'y comprends pas grand‐chose.\nQuoi qu'il en soit, rends‐toi dans les terres de\nsable.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Je vois... Je vois... L'<color red<entrée de l'épreuve >coloroff>se\ntrouve dans une région pleine de sable!\n\n\nTu dois te rendre à cet endroit.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Je vois... Je vois... Tu dois apprendre une\n<color red<chanson >coloroff>dans un lieu sacré!\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage... Un gros nuage, oui.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf(/* textboxtype: 0, unk: 1, line: 43 */ "Oho... Tu es sorti victorieux de l'épreuve de\nla forêt...\n\n\nMaintenant, je vois un <color red<grand arbre >coloroff>dans cette\nforêt. Tu y trouveras quelqu'un d'important.\n\n\nEnsuite, je vois une gigantesque statue de\npierre...<pause 20> Dans les entrailles de la terre...<pause 20>\nElle monte, elle descend, elle ne tient pas\nen place!\nQuoi qu'il en soit, tu devrais te diriger\nvers la forêt!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Je vois... Je vois... Tu dois passer une épreuve\ndans un lieu très sombre... Oui, très sombre...\n\n\nÇa donne la chair de poule! Brrr...\n\n\n\nLa forêt! Oui! C'est là que tu pourras passer\ncette épreuve!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 41 */ "Dirige les ailes vers la tour... puis joue une\nmélodie au sommet pour voir la lumière...\n\n\nCette lumière pointe vers ta prochaine\ndestination!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf(/* textboxtype: 0, unk: 0, line: 38 */ "Je vois... Je vois...\n\n\n\nUne hélice tombée du ciel. Une hélice, oui.\nTu dois la retrouver...\n\n\nJe vois... Une <color red<montagne de feu>coloroff>... L'hélice se\ntrouve au bas du <color red<temple de la montagne de feu>coloroff>!\n\n\nUne montagne de feu? Ça existe vraiment?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf(/* textboxtype: 0, unk: 0, line: 68 */ "")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf(/* textboxtype: 1, unk: 0, line: 69 */ "")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf(/* textboxtype: 0, unk: 1, line: 70 */ "")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf(/* textboxtype: 0, unk: 1, line: 40 */ "Je vois... Je vois... Il te faut quelque chose\npour réparer un certain objet... Je vois...\n<0x10006:0xfbcd>...<0x10006:0x00cd> une <color yellow<fleur ancienne>coloroff>!\n\nCette plante fleurit dans le passé, dans une\n<color red<région désertique>coloroff>...<pause 20> Explore les étendues de\nsable et tu trouveras cette fleur! Oui...")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Je vois... Je vois... Une construction avec\ndes ailes. Quand le vent souffle, les ailes\ntournent?!\n\nJe vois qu'il faut diriger deux de ces\nconstructions vers une tour... Oui,\nc'est ça... Une tour!")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf(/* textboxtype: 0, unk: 1, line: 64 */ "Ho ho! Tu as relevé de nombreux défis, à ce\nque je vois...\n\n\nLa prochaine étape est...<pause 30> Oh oh!\nLe <color red<Chant de la Déesse>coloroff>...<pause 30>\n\n\nTu veux en savoir plus...  Qui pourrait te\nrenseigner...?\n\n\nMa boule de cristal me dit que le <color red<directeur de\nl'école de chevalerie >coloroff>pourra te fournir de\nprécieux indices. C'est ça : le directeur.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Je vois... Je vois... Quelque chose qui se réveille!\n\n\n\nOh!<pause 30> C'est gros...<pause 20> C'est même très gros!\n<pause 40>C'est é‐norme!\n\n\nJe vois que si tu possèdes assez de <color red<potions\nde santé>coloroff>, tu pourras vaincre cette chose!\nOuille, ouille, ouille.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf(/* textboxtype: 0, unk: 0, line: 35 */ "Je vois... Je vois... Du sable... Un bac...\nUn bac à sable géant?\n\n\nEn tout cas, je vois qu'il te faudra être très\nprudent avec l'électricité. Le métal ne\nt'apportera que des problèmes là‐bas...\n\nUn bouclier de fer ne te sera d'aucune utilité.\nJe vois qu'il te faut un <color red<bouclier de bois >coloroff>ou un\nbouclier encore plus résistant!\n\nJe vois que les bombes s'avéreront très utiles\ndans cet endroit. Ton <color red<sac de bombes >coloroff>doit être\nbien rempli!")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf(/* textboxtype: 0, unk: 1, line: 34 */ "Je vois... Je vois... De la lave en fusion!\nUne chaleur insoutenable!\n\n\nUn bouclier de bois ne serait d'aucune utilité\ndans cet endroit. Je vois... du fer! Oui, du fer!\nIl te faut un <color red<bouclier de fer>coloroff>!\n\nJe vois également qu'une <color red<potion pour restaurer\ntes cœurs >coloroff>serait très utile...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Je vois... Je vois... De la végétation... Une\nforêt... Des arbres! Beaucoup d'arbres!\n\n\n<pause 20>Oui... <pause 10>Je vois une région boisée. Tu devrais\nprobablement t'équiper d'un <color red<bouclier de bois>coloroff>.\n\n\nJe vois que tu as encore peu d'expérience.\nJe vois qu'une <color red<potion de santé >coloroff>pourrait\nt'être très utile au combat.")
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
/*< 13>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000003>Approche! Je réchauffe ma boule de cristal!\nC'est <color red<10 rubis >coloroff>la séance. La lumière te guidera\ndans ta périlleuse aventure.\n\nMes grands yeux ronds voient... des choses.\nAlors, on commence? C'est <color red<10 rubis>coloroff>.\n[1-]Oh, oui![2]Non merci")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "Alors, jeune homme, sur quel sujet dois‐je\ninterroger ma boule de cristal?\n[1-]L'avenir[2-]Les trésors")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf(/* textboxtype: 0, unk: 0, line: 5 */ "Ho ho! Magnifique! Extraordinaire!\nOn va voir ce qu'on va voir... Je\nvais réchauffer ma boule de cristal!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							wait_frames(160)
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ho ho! Aaaaaahhh... Je sens...\nJe vois... la lumière!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "Fort bien! Je réchauffe ma boule de cristal.\nOn va voir ce qu'on va voir!")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090909>Miséricorde! Je vois que tu es sans le sou,\nmon garçon!\n\n\nTu ne t'attends quand même pas à ce que\nmes beaux grands yeux ronds scrutent ton\navenir pour rien!")
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Je vois... Mais ne viens pas me supplier de\nte venir en aide plus tard!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Oh, j'aperçois devant moi... Hm? Regarde-moi\ndans les yeux... N'aie pas peur de mon regard\nperçant...\n\nJe vois des choses... Fais confiance à mes\ngrands yeux ronds. Je vois... un fil égaré\nsur ta tunique... Je vois...\n\nJe vois tout! Rien n'échappe à mes grands\nyeux bleus. Normalement, c'est 10 rubis\nla séance. Mais pour toi... ce sera <color red<1 rubis>coloroff>!\n\nAlors, tu veux que j'interroge ma boule de\ncristal pour<color red< 1 rubis >coloroff>tout petit?\n[1-]Oh oui![2]Plus tard?")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Ho ho! Ce que tu me fais plaisir! D'ailleurs,\nça fait bien longtemps que je n'avais pas eu\nde client...\n\nEuh<0x10006:0xfdcd>...<0x10006:0x00cd> Mais ça ne veut pas dire que je ne suis\npas un bon voyant, hein! Mes grands yeux\nronds voient tout, bon!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090909>Miséricorde! Je vois que tu n'as pas un seul\nrubis en poche, mon garçon... Les services\nde mes grands yeux ronds ne sont pas\ngratuits! Pff!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000007>Quoi? Et moi qui t'offrais mes loyaux\nservices! Tu ne me fais pas confiance?\nPourtant mes grands yeux ronds voient tout,\nbon!\nAlors, tu ne veux pas entendre ma prédiction?\nJe vois des choses...\n[1-]D'accord...[2]Mais non!")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "J'ai senti que tu étais têtu dès que je t'ai\nvu. Et je peux lire sur ton visage que tu\nne crois pas aux prédictions.\n\nPourtant, elles t'apporteraient une aide\nprécieuse! Tu es sûr de ne pas vouloir\nentendre ma prédiction? Je vois des\nchoses...\n[1-]Bon, ça va...[2]J'ai dit\nnon!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00090909>Je vois que tu es un sceptique, toi. Ne viens\npas me supplier de t'aider après, ce sera\ntrop tard! <0x10008:0xfecd>Pfff!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000002>Je vois... Je vois... Quoi donc? Oh, misère...\n\n\n\nJe viens d'avoir une vision catastrophique...\nLe chemin qui s'offre à toi est semé\nd'embûches...\n\nMais grâce à mes dons de voyant, je peux voir\nce qu'il va advenir de toi!\n\n\nAie confiance en <0x10006:0xfccd><color red<mes grands yeux ronds>coloroff><0x10006:0x00cd> et\nen ma voix pure et douce.\n\n\nJe veux ton bien, jeune homme. Regarde-moi\nbien dans les yeux. Approche!")
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
/*<131>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Je sens aussi que tu cherches une <color red<plante>coloroff>...\nJe vois... une <color red<forêt >coloroff>verdoyante. <0x10006:0xfbcd>Hmm...\nCette forêt...<0x10006:0x00cd> Difficile d'imaginer cette forêt...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "Je vois que tu cherches quelqu'un pour\ncultiver un champ, jeune homme.\n\n\nTu ne trouveras pas une telle personne ici,\nà Célesbourg! Ah, je vois... Tu dois te\nrendre dans les <color red<grottes >coloroff>où vivent les\n<color red<êtres qui creusent partout>coloroff>!\nC'est là‐bas que tu trouveras la bonne personne.\nOui, c'est là.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "Ho ho! Oui, je vois... Tu cherches un objet\nperdu... Une chose brillante qui tourne.\n\n\nJe vois une <color red<région désertique>coloroff>... Du sable!\nC'est là‐bas, dans un recoin, que tu trouveras\nce que tu cherches!")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>C'est tout ce que ma boule de cristal a à\nrévéler pour le moment. Reviens me voir\nsi tu te perds encore.")
/*< 41>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Bonne chance à toi!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ho ho! Je vois... Quelqu'un a perdu un\ninsecte rare.\n\n\nMa boule de cristal me dit que cet insecte se\ncache sur l'île où vit <color red<un passionné d'insectes>coloroff>!\nUn passionné, oui. C'est bien ça.")
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
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Oh, oui, les trésors. Tu veux que je scrute\nma boule de cristal pour y trouver des trésors.\nJe t'avoue, je n'y connais pas grand‐chose...\n\nMais, je vais quand même essayer!")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	wait_frames(160)
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ho ho! Aaaaaahhh... Je sens...\nJe vois... la lumière!")
/*<156>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "Je vois... Je vois des choses... Oh! Une forêt...\nUne région désertique... Une montagne de feu...\nDes monstres! Toutes des sources de trésor...\n\nSur les trésors de quelle région veux‐tu te\nrenseigner? Ou bien veux‐tu en savoir plus\nsur ceux des monstres?\n[1-]La forêt[2-]La région\ndésertique[3-]La montagne\nde feu[4-]Les monstres")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "Aaah, la forêt! Ma boule de cristal indique\nque les trésors forestiers les plus courants\nsont la <color yellow<plume d'oiseau >coloroff>et la <color yellow<larve de guêpe>coloroff>.\n\nPour obtenir une <color yellow<plume d'oiseau>coloroff>, je vois qu'il\nfaudra d'abord attraper un oiseau avec le filet.\nOui, c'est ça.\n\nAaah, oui. Je vois... Pour obtenir une <color yellow<larve de\nguêpe>coloroff>, il faudra détruire un... oh, il faudra\ndétruire un nid.\n\nTiens, j'aperçois des <color red<plumes bleues>coloroff>, symboles\nde bonheur. Si tu en trouves une, tu es très\nchanceux!")
          		flw_155:
/*<155>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Ma boule de cristal m'indique que tu peux\nobtenir des <color yellow<perles d'ambre >coloroff>et des <color yellow<perles\nd'ombre >coloroff>dans toutes les régions.\n\nAaah... Les <color yellow<perles d'ombre >coloroff>peuvent\nuniquement être collectées durant les épreuves.\n\n\nEt, le trésor le plus rare au monde est la\n<color yellow<poussière de Déesse>coloroff>!\n\n\nIl va falloir que tu sois extrêmement chanceux\npour en trouver une.")
/*<157>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>C'est tout ce que ma boule de cristal a à\nrévéler pour le moment. Reviens me voir\nsi tu te perds encore.")
/*<158>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Bonne chance à toi!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ah, la région désertique! Ma boule de cristal\nme laisse entrevoir que tu trouveras un...\nattends... ça y est : un <color yellow<virevoltant >coloroff>et une\n<color yellow<fleur ancienne>coloroff>.\nOh, je prédis que tu attraperas un <color yellow<virevoltant\n>coloroff>avec un filet!\n\n\nJe vois... eh, oui, c'est évident : il faut voyager\ndans le passé pour trouver la <color yellow<fleur ancienne>coloroff>.\nElle est ancienne, après tout.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Ah, la montagne de feu! Tu y trouveras...\nTu y trouveras... Laisse-moi voir...\n\n\nJe vois... Je vois deux trésors... Un minerai... \nune queue...\n\n\nMa boule de cristal me montre que tu peux\nparfois obtenir un <color yellow<minerai d'Ordinn >coloroff>en\ncreusant la terre.\n\nTu peux aussi obtenir une <color yellow<queue de lézard >coloroff>en\ncombattant des espèces de... lézards.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Ah, les monstres!\n\n\n\nMa boule de cristal indique que tu peux\nobtenir de nombreux trésors en combattant\ndifférents monstres.\n\nLes <color yellow<griffes de monstre >coloroff>s'obtiennent sur les\ncréatures volantes.\n\n\nTu peux trouver des <color yellow<crânes décoratifs >coloroff>sur les\nmonstres humanoïdes.\n\n\nLes <color yellow<gélatibulles >coloroff>se trouvent sur les monstres\nmous. Dégoûtant.")
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il te faudra utiliser une arme pour arracher\nles <color yellow<cors de monstre >coloroff>aux monstres qui en\npossèdent.\n\nLes <color yellow<cristaux maléfiques>coloroff> se trouvent sur les\nmonstres ayant recours aux malédictions.\n\n\nEt parfois, tu peux même trouver des\n<color yellow<crânes d'or>coloroff>!")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000002>Ho ho! Je vois...\n\n\n\nJe vois que tu as l'air à bien aller! On dirait\nque tu as collecté de nombreux trésors depuis\nta dernière visite.\n\nViens par ici, jeune homme. Je vais interroger\nma boule de cristal sur d'autres trésors. On va\nvoir ce qu'on peut voir!")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Ho ho! Revoilà le gentil jeune homme! Je\nt'attendais! J'avais pressenti que tu reviendrais,\nen fait.\n\nJe peux lire sur ton visage que tu as besoin\nde mon aide...")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Je vais réchauffer ma boule de cristal!\nC'est moitié prix, rien que pour toi!\n\n\nTu es prêt? C'est <color red<5 rubis >coloroff>la séance.\n[1-]Oh, oui![2]Non merci")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090909>Miséricorde! Je vois que ta bourse est vide,\nmon garçon!\n\n\nJe ne suis pas un voyant bénévole, tout de\nmême! Regarde-moi dans le blanc des yeux :\nReviens quand tu auras de quoi payer.")
          				}
          			  case 1:
/*< 51>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Je vois... Mais ne viens pas me supplier de\nte venir en aide plus tard!")
          			}
          		  case 1:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>Ho ho! Mais je te reconnais, jeune homme!\n\n\n\nC'est grâce à toi que mes affaires ont repris\ndu poil de la bête!\n\n\nTu as besoin d'une prédiction? C'est moitié\nprix rien que pour toi, maintenant!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00010703>Grâce à toi, jeune homme, je suis désormais\ntrès heureux!\n\n\nSi tu veux en savoir plus sur ton avenir, viens\nme rendre visite au bazar en journée!")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010701>Mais il se fait tard! Que fais‐tu ici? <0x10006:0xfccd>...<0x10006:0x00cd> Je ne\ntravaille pas de nuit! Reviens me voir en\njournée!")
          	}
          }

