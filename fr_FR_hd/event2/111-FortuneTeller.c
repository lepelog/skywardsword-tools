          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Mais je viens de te dire ma prédiction ! Tu n'as\npas compris, ou quoi ? Bon d'accord, je vais la\nrépéter une dernière fois.")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "Qu'as‐tu donc fait, jeune homme ?\n\n\n\nJe vois que c'est par ta faute que l'île de la\nDéesse a disparu !\n\n\nMais je sais que c'était pour la bonne cause.\n\n\n\nEt maintenant... tu dois trouver ton propre\nchemin !")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf(/* textboxtype: 0, unk: 0, line: 59 */ "Je vois que tu trouveras ce que tu cherches sur\nl'île de la Déesse.\n\n\nMais le chemin sera semé d'embûches.\nPrépare‐toi...")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "Alors, comme ça tu as remporté la dernière\népreuve...\n\n\nJe ne sais pas pourquoi j'ai dit « dernière ».\nUne intuition...\n\n\nTu veux savoir quoi faire de l'objet gagné à la\nfin de l'épreuve ?\n\n\nJe vois qu'à Célesbourg, il existe une <color red<statue\nen pierre qui a la forme d'un oiseau>coloroff>. Un de\nses <color red<yeux est une pierre précieuse>coloroff>, l'autre lui\nmanque...\nTu l'as déjà vue, non ?\n\n\n\nEssaie d'y emboîter l'objet que tu as trouvé...")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf(/* textboxtype: 1, unk: 0, line: 57 */ "Tu trouveras l'entrée de la prochaine <color red<épreuve\n>coloroff>en jouant la chanson que le grand esprit t'a\napprise.\n\nJe vois qu'elle se trouve quelque part à\n<color red<Célesbourg>coloroff>...\n\n\nHum... Je ne sais pas ce que cela signifie.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf(/* textboxtype: 0, unk: 0, line: 56 */ "Oh, je vois que tu as rassemblé trois parties de\nla chanson... La dernière partie est détenue par\nune créature gigantesque !\n\nVa vite rejoindre cette grande créature !")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf(/* textboxtype: 0, unk: 1, line: 37 */ "Je vois... Je vois...\n\n\n\nTu cherches un endroit où planter une pousse,\nn'est‐ce pas ? Et pas n'importe quelle pousse !\nTu dois trouver l'endroit idéal.\n\n<0x10006:0xfccd>Je vois... une vieille femme...<0x10006:0x00cd> Je vois que\nl'endroit idéal est le temple où elle réside !")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf(/* textboxtype: 0, unk: 1, line: 55 */ "Je vois que tu cherches les quatre mélodies\nd'une chanson.\n\n\nJe vois... Tu dois aller dans trois...<pause 10> Oui, trois\nrégions ! Dans n'importe quel ordre !\n\n\nOù que tu ailles, il y aura toujours quelqu'un\npour t'accueillir.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf(/* textboxtype: 1, unk: 0, line: 54 */ "On dirait que tu as enfin trouvé la personne\nque tu cherchais ! Je suis content pour toi !\n\n\nMais je vois que tu as encore des épreuves à\npasser.\n\n\nTu dois aller parler au grand esprit qui vole\ndans le ciel. Demande plus d'informations au\ndirecteur de l'<color red<école de chevalerie>coloroff>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf(/* textboxtype: 0, unk: 1, line: 52 */ "Je vois... Je vois... l'ombre d'un monstre\ngigantesque !\n\n\nÇa a beau ne pas être ma première prédiction,\nton futur me fait toujours frissonner !\n\n\nMiséricorde... Assure‐toi d'avoir assez de <color red<potions\n>coloroff>sur toi !")
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
/*<180>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Je vois... Je vois... La tâche va être difficile !\n\n\n\nLa température au cœur de la montagne de\nfeu est très élevée. Tu devrais t'équiper d'un\n<color red<bouclier en fer >coloroff>!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Je vois... Je te vois transporter la bassine d'eau\nsur la montagne de feu.\n\n\nSi tu ne l'apportes pas très vite à destination,\nquelqu'un aura des problèmes.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf(/* textboxtype: 0, unk: 1, line: 49 */ "Je vois des obstacles... de l'eau... Le manque\nd'eau te posera problème.\n\n\nJe vois... une bassine d'eau. Tu as déjà vu cet\nobjet quelque part.\n\n\nLa forêt ! C'est là‐bas que tu trouveras ce que\ntu cherches.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 65 */ "La probabilité que l'objet que vous cherchez se trouve\ndans la forêt est de 60 %. Je vous conseille de vous y\nrendre.\n\n<sound 4>Voulez‐vous que j'ajoute la<color red< bassine d'eau >coloroff>dans la liste\ndes cibles à <color red<détecter >coloroff>?\n[1-]Oui, merci[2]Pas\nmaintenant")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10012:0x00000005>Très bien, Maître. La <color red<bassine d'eau>coloroff> a été ajoutée à\nla liste des cibles à <color red<détecter>coloroff>.\n\n\nVous pouvez commencer vos recherches.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10012:0x00000005>Très bien, Maître. Je n'ai pas ajouté la bassine d'eau\nà la liste des cibles à détecter.\n\n\nSi vous changez d'avis, adressez‐vous à nouveau\nau diseur de bonne aventure.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf(/* textboxtype: 1, unk: 0, line: 48 */ "Ho ho ! Je vois que tu as remporté l'épreuve\ndu feu avec brio ! Je vois des obstacles...\nDe l'eau... Le manque d'eau te posera problème.\n\nReviens me voir quand ça t'arrivera.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf(/* textboxtype: 0, unk: 0, line: 47 */ "Je vois... Mais combien d'épreuves vas‐tu encore\npasser, jeune homme ?\n\n\nJe vois... du feu ! L'<color red<entrée de la prochaine\népreuve >coloroff>se situe sur une montagne de feu !\n\n\nInutile de préciser qu'un <color red<bouclier en bois >coloroff>y\nserait totalement inutile...")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf(/* textboxtype: 0, unk: 0, line: 44 */ "Je vois... Je vois... Tu dois apprendre une\n<color red<chanson >coloroff>dans un lieu sacré !\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage...")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Oho ! Tu es sorti victorieux de l'épreuve des\nsables !\n\n\nEnsuite, je vois encore plus de sable... La <color red<mer>coloroff>...<pause 20>\nUn <color red<navire>coloroff>...<pause 20> Je n'y comprends pas grand‐chose.\nQuoi qu'il en soit, rends‐toi dans les terres de\nsable.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Je vois... Je vois... L'<color red<entrée de l'épreuve >coloroff>se\ntrouve dans une région pleine de sable !\n\n\nTu dois te rendre en ce lieu.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Je vois... Je vois... Tu dois apprendre une\n<color red<chanson >coloroff>dans un lieu sacré !\n\n\nCe lieu est familier...\n\n\n\nJe vois... un lieu sacré à l'intérieur d'un gros\nnuage...")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf(/* textboxtype: 0, unk: 1, line: 43 */ "Oho... Tu es sorti victorieux de l'épreuve de\nla forêt...\n\n\nMaintenant, je vois un <color red<grand arbre >coloroff>dans cette\nforêt. Tu y trouveras quelqu'un d'important.\n\n\nEnsuite, je vois une gigantesque statue de\npierre...<pause 20> Dans les entrailles de la terre...<pause 20> Elle\nmonte, elle descend, elle ne tient pas en place !\n\nQuoi qu'il en soit, tu devrais te diriger vers\nla forêt !")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Je vois... Je vois... Tu dois passer une épreuve\ndans un lieu très sombre...\n\n\nÇa donne la chair de poule !\n\n\n\nLa forêt ! C'est là que tu pourras passer cette\népreuve !")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 41 */ "Dirige les ailes vers la tour... puis joue une\nmélodie au sommet pour voir la lumière...\n\n\nCette lumière pointe vers ta prochaine\ndestination !")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf(/* textboxtype: 0, unk: 0, line: 38 */ "Je vois... Je vois...\n\n\n\nUne hélice tombée du ciel. Tu dois la\nretrouver...\n\n\nJe vois... Une <color red<montagne de feu>coloroff>... L'hélice se\ntrouve en contrebas du <color red<temple de la montagne\nde feu >coloroff>!\n\nUne montagne de feu ? Ça existe vraiment ?")
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
/*<195>*/ 																						printf(/* textboxtype: 0, unk: 1, line: 40 */ "Je vois... Je vois... Il te faut quelque chose pour\nréparer un certain objet... Je vois... <0x10006:0xfbcd>...<0x10006:0x00cd> une <color yellow<fleur\nancienne >coloroff>!\n\nCette plante fleurit dans le passé, dans une\n<color red<région désertique>coloroff>...<pause 20> Explore les étendues de\nsable et tu trouveras cette fleur !")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Je vois... Je vois... Une construction avec\ndes ailes. Quand le vent souffle, les ailes\ntournent ?!\n\nJe vois qu'il faut diriger deux de ces\nconstructions vers une tour...")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf(/* textboxtype: 0, unk: 1, line: 64 */ "Ho ho ! Tu as relevé de nombreux défis, à ce\nque je vois...\n\n\nLa prochaine étape est...<pause 30> Oh oh ! Le <color red<Chant\nde la Déesse>coloroff>...<pause 30>\n\n\nTu veux en savoir plus ? Qui pourrait te\nrenseigner...?\n\n\nMa boule de cristal me dit que le <color red<directeur\nde l'école de chevalerie >coloroff>pourra te fournir de\nprécieux indices.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Je vois... Je vois... Quelque chose qui se\nréveille !\n\n\nOh !<pause 30> C'est gros...<pause 20> C'est très gros !\n<pause 40>C'est é‐norme !\n\n\nJe vois que si tu possèdes assez de <color red<potions de\nsoin>coloroff>, tu pourras vaincre cette chose !")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf(/* textboxtype: 0, unk: 0, line: 35 */ "Je vois... Je vois... Du sable... Un bac... Un bac\nà sable géant ?\n\n\nEn tout cas, je vois qu'il te faudra être\ntrès prudent avec l'électricité. Le métal\nne t'apportera que des ennuis là‐bas...\n\nUn bouclier de fer ne te sera d'aucune utilité.\nJe vois qu'il te faut un <color red<bouclier en bois >coloroff>ou un\nbouclier encore plus résistant !\n\nJe vois que les bombes s'avéreront très utiles\nen ce lieu. Ton <color red<sac de bombes >coloroff>doit être bien\nfourni !")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf(/* textboxtype: 0, unk: 1, line: 34 */ "Je vois... Je vois... De la lave en fusion ! Une\nchaleur insoutenable !\n\n\nUn bouclier en bois ne serait d'aucune utilité\ndans ce lieu. Je vois... du fer ! Il te faut un\n<color red<bouclier en fer>coloroff> !\n\nJe vois également qu'une <color red<potion pour restaurer\ntes cœurs >coloroff>serait très utile...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Je vois... Je vois... De la végétation... Une forêt...\nDes arbres ! Beaucoup d'arbres !\n\n\n<pause 20>Oui... <pause 10>Je vois une région boisée, je te conseille\ndonc d'acheter un <color red<bouclier en bois>coloroff>.\n\n\nJe vois que tu as encore peu d'expérience.\nJe vois qu'une <color red<potion rouge >coloroff>pourrait t'être\ntrès utile au combat.")
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
/*< 13>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000003>Approche ! Je fais chauffer ma boule de\ncristal ! C'est <color red<10 rubis >coloroff>la séance. La lumière\nte guidera dans ta périlleuse aventure.\n\nAlors, qu'en dis‐tu ? C'est <color red<10 rubis>coloroff>.\n[1-]Oh, oui ![2]Non merci")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "Alors, jeune homme, sur quel sujet dois‐je\ninterroger ma boule de cristal ?\n[1-]Le futur[2-]Les trésors")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf(/* textboxtype: 0, unk: 0, line: 5 */ "Ho ho ! Magnifique ! Extraordinaire !\nJe fais chauffer ma boule de cristal !")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							wait_frames(160)
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ho ho ! Je sens... Je vois... la lumière !")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "Fort bien ! Je fais chauffer ma boule de cristal.")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090909>Miséricorde ! Tu es sans le sou, mon garçon !\n\n\n\nJ'ai beau avoir de grands et jolis yeux ronds,\nje ne suis pas aussi gentil que j'en ai l'air !")
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Je vois... Mais ne viens pas me supplier de te\nvenir en aide plus tard !")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Oh, je sens une âme égarée à la recherche d'une\nprédiction !\n\n\nNormalement, c'est 10 rubis la séance. Mais\npour toi, ce sera <color red<1 rubis >coloroff>!\n\n\nAlors, tu veux que j'interroge ma boule de\ncristal pour<color red< 1 rubis >coloroff>tout petit ?\n[1-]Oh oui ![2]Non merci")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Ho ho ! Ça me met en joie ! D'ailleurs, ça fait\nbien longtemps que je n'avais pas eu de client...\n\n\nEuh<0x10006:0xfdcd>...<0x10006:0x00cd> Mais ça ne veut pas dire que je ne suis\npas un bon voyant, hein ! Mes grands yeux\nronds voient tout bon !")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090909>Miséricorde ! Tu n'as pas un seul rubis en\npoche, mon garçon... Mes services ne sont\npas gratuits !")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000007>Quoi ? Et moi qui t'offrais mes loyaux\nservices ! Tu ne me fais pas confiance ?\nPourtant mes grands yeux ronds voient\ntout bon !\nAlors, tu ne veux pas entendre ma prédiction ?\n[1-]D'accord...[2]Mais non !")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "J'ai bien senti que tu étais têtu. Et je peux\nlire sur ton visage que tu ne crois pas aux\nprédictions.\n\nPourtant, elles t'apporteraient une aide\nprécieuse ! Tu es sûr de ne pas vouloir\nentendre ma prédiction ?\n[1-]Bon, d'accord...[2]J'ai dit\nnon !")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00090909>Tu es un sceptique, toi. Je le savais. Mais ne\nviens pas me supplier de t'aider après, ce sera\ntrop tard ! <0x10008:0xfecd>Pfeuh !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000002>Je vois... Je vois... Quoi ?! Oh, misère...\n\n\n\nJe viens d'avoir une vision catastrophique...\nLe chemin qui s'offre à toi est semé\nd'embûches...\n\nMais grâce à mes dons, je peux voir ce qu'il va\nadvenir de toi !\n\n\nAie confiance en <0x10006:0xfccd><color red<mes grands yeux ronds>coloroff><0x10006:0x00cd> et ma\ndouce voix. Je suis là pour t'aider, jeune homme.\nApproche !")
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
/*<131>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Je sens aussi que tu cherches une <color red<plante>coloroff>...\nJe vois... une <color red<forêt >coloroff>verdoyante. <0x10006:0xfbcd>Hmm...\nCette forêt...<0x10006:0x00cd> Où peut‐elle bien être ?")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "Je vois que tu cherches quelqu'un pour cultiver\nun champ, jeune homme.\n\n\nTu ne trouveras pas une telle personne ici, à\nCélesbourg ! Je vois... Tu dois te rendre dans\nles <color red<grottes >coloroff>où vivent les <color red<êtres qui creusent\npartout >coloroff>!\nC'est là‐bas que tu trouveras la bonne personne.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "Ho ho ! Oui, je vois... Tu cherches un objet\nperdu... Une chose brillante qui tourne.\n\n\nJe vois une <color red<région désertique>coloroff>... Du sable ! C'est\nlà‐bas, dans un recoin, que tu trouveras ce que\ntu cherches !")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>C'est tout ce que ma boule de cristal a à révéler\npour le moment. Reviens me voir si tu es à\nnouveau perdu.")
/*< 41>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Tu peux y arriver !")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ho ho ! Je vois... Quelqu'un a perdu un insecte\nrare.\n\n\nMa boule de cristal me dit que cet insecte se\ncache sur l'île où vit <color red<un passionné d'insectes >coloroff>!")
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
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Les trésors ? Je n'y connais pas grand‐chose...\n\n\n\nOh, peu importe. Je vais quand même essayer !")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	wait_frames(160)
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ho ho ! Je sens... Je vois... la lumière !")
/*<156>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "Je vois... Je vois... Une forêt... Une région\ndésertique... Une montagne de feu... Des\nmonstres !\n\nSur les trésors de quelle région veux‐tu te\nrenseigner ? Ou bien veux‐tu en savoir plus\nsur ceux des monstres ?\n[1-]La forêt[2-]La région\ndésertique[3-]La montagne\nde feu[4-]Les monstres")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "Ah, la forêt ! Ma boule de cristal indique que\nles trésors forestiers les plus courants sont la\n<color yellow<plume d'oiseau >coloroff>et la <color yellow<larve de guêpe>coloroff>.\n\nPour obtenir une <color yellow<plume d'oiseau>coloroff>, il faut d'abord\nattraper un oiseau avec le filet à papillons.\n\n\nOn dit que pour obtenir une <color yellow<larve de guêpe>coloroff>,\nil faut détruire un nid.\n\n\nIl existe aussi des <color red<plumes bleues>coloroff>, symboles\nde bonheur. Si tu en trouves une, tu es très\nchanceux !")
          		flw_155:
/*<155>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Ma boule de cristal m'indique que tu peux\nobtenir des <color yellow<perles d'ambre >coloroff>et des <color yellow<perles\nd'ombre >coloroff>dans toutes les régions.\n\nCependant, les <color yellow<perles d'ombre >coloroff>peuvent\nuniquement être collectées durant les\népreuves.\n\nLe trésor le plus rare au monde est la <color yellow<poussière\nde Déesse>coloroff> !\n\n\nIl faut être extrêmement chanceux pour en\ntrouver une.")
/*<157>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>C'est tout ce que ma boule de cristal a à révéler\npour le moment. Reviens me voir si tu es à\nnouveau perdu.")
/*<158>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Tu peux y arriver !")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ah, la région désertique ! Ma boule de cristal\nindique que les trésors les plus courants de\ncette région sablonneuse sont le <color yellow<virevoltant >coloroff>et\nla <color yellow<fleur ancienne>coloroff>.\nTu peux attraper un <color yellow<virevoltant >coloroff>avec un filet à\npapillons.\n\n\nLa <color yellow<fleur ancienne>coloroff>, comme son nom l'indique,\nne pousse que dans le passé.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Ah, la montagne de feu ! Alors, que m'indique\nma boule de cristal ?\n\n\nJe vois... Je vois deux trésors...\n\n\n\nTu peux parfois obtenir un <color yellow<minerai d'Ordinn\n>coloroff>en creusant la terre.\n\n\nTu peux aussi obtenir une <color yellow<queue de lézard >coloroff>en...\ncombattant des lézards.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Ah, les monstres !\n\n\n\nMa boule de cristal indique que tu peux obtenir\nde nombreux trésors en combattant différents\nmonstres.\n\nLes <color yellow<griffes de monstre >coloroff>s'obtiennent sur les\ncréatures volantes.\n\n\nTu peux trouver des <color yellow<crânes décoratifs >coloroff>sur les\nmonstres humanoïdes.\n\n\nLes <color yellow<gélatibulles >coloroff>se trouvent sur les monstres\nmous.")
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il te faudra utiliser une arme pour arracher les\n<color yellow<cors de monstre >coloroff>aux monstres qui en possèdent.\n\n\nLes <color yellow<cristaux maléfiques>coloroff> se trouvent sur les\nmonstres ayant recours aux malédictions.\n\n\nEt parfois, tu peux même trouver des <color yellow<crânes\nd'or>coloroff> !")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000002>Ho ho ! Je vois...\n\n\n\nOn dirait que tu as collecté de nombreux trésors\ndepuis ta dernière visite.\n\n\nApproche, jeune homme. Je vais interroger ma\nboule de cristal sur d'autres trésors.")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Ho ho ! Revoilà le gentil jeune homme !\nJe t'attendais !\n\n\nJe peux lire sur ton visage que tu as besoin de\nmon aide...")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Je fais chauffer ma boule de cristal !\nC'est moitié prix, rien que pour toi !\n\n\nTu es prêt ? C'est <color red<5 rubis >coloroff>la séance.\n[1-]Oh, oui ![2]Non merci")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090909>Miséricorde ! Ta bourse est vide, mon garçon !\n\n\n\nJe ne suis pas un voyant bénévole, enfin !\nReviens quand tu auras de quoi payer.")
          				}
          			  case 1:
/*< 51>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Je vois... Mais ne viens pas me supplier de te\nvenir en aide plus tard !")
          			}
          		  case 1:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>Ho ho ! Mais je te reconnais, jeune homme !\n\n\n\nC'est grâce à toi que mes affaires ont repris\ndu tonnerre !\n\n\nTu as besoin d'une prédiction ? C'est moitié\nprix rien que pour toi, maintenant !")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00010703>Grâce à toi, jeune homme, je suis désormais\ntrès heureux !\n\n\nSi tu veux en savoir plus sur ton avenir, viens\nme rendre visite au marché couvert en journée !")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010701>Que fais‐tu ici à cette heure tardive ? <0x10006:0xfccd>...<0x10006:0x00cd> Je\nne travaille pas de nuit ! Reviens me voir en\njournée !")
          	}
          }

