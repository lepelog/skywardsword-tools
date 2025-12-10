          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Mam'selle Fay! Tu as vu ce que\nj'ai réussi à faire? Brrzt!")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ouah! Quelle chaleur...! Brrzrrt.\nMais je suis du dernier modèle\nalors ça me fait ni chaud ni\nfroid! Zzrit!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<sound 114>Bzzzrpt! Où tu vas maintenant?\nSi t'as des choses à faire, je reste ici,\nmoi. Grouille‐toi, veux-tu? Zzzt!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Si je peux encore t'être utile,\nappelle‐moi, ma douce! Bzzrr!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Hé! On n'est pas au bon endroit!\nT'es nul comme guide! Zrrt!")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<sound 114>Zzoubt! Je me fais attaquer!\nViens m'aider! Viiite! Bzzzit!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 2, unk: 0, line: 104 */ "Les flammes qui bloquaient le\nchemin ont été éteintes.\nJe vous conseille d'avancer.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "On arrive bientôt, ou quoi? Brzzt!\nFaudrait peut-être se dépêcher!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<sound 114>Hé! Brzzoupt! Fais quelque chose!\nÇa presse!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 2, unk: 0, line: 121 */ "Vous êtes de retour, <0x10012:0x00000004>Maître\n<heroname>.\n\n\nGrâce aux <color yellow<boucles ignifuges >coloroff>que vous\nvenez d'obtenir, vous devriez pouvoir\nrésister aux températures les plus\nextrêmes.\nJe vous recommande de poursuivre\nvotre recherche de la <color red<flamme sacrée>coloroff>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10005:0x003c0000><0x10008:0x02cd>ZZRRROUPT!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nNous sommes proches du cratère\ndu <color blue<volcan d'Ordinn>coloroff>, au sommet\nde la montagne.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00110801>As-tu réussi à battre ces <color red<gros mal\nléchés avec leur bouclier>coloroff>?\n\n\n<0x10009:0x00ffff00>Découpe leur bouclier s'il est en bois,\nrepousse leurs coups de lance et fonce\nsur leur bouclier comme sur un mur...\n\nSi tu retiens ça, tu devrais pas avoir\nde problème. Courage!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 97 */ "Salut toi! Tu as toujours du mal contre\nles <color red<gros trapus avec leur bouclier>coloroff>?\n\n\n<0x10009:0x0015080b>Si tu veux, je peux te donner mes\n<color red<dernières >coloroff><color red<infos >coloroff><color red<<color red<taupes <color red<secrètes\n>coloroff>pour les battre en un clin d'œil.")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00ffff09>Comme <pause 10>de <pause 10>raison<pause 10>, ce sera pas gratuit!\nÇa te coûtera <color red<50 rubis>coloroff>!\n[1-]Dis‐moi tout![2]Non merci.")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x0011080b>Au diable, la dépense, hein, bonhomme!\nC'est pas moi qui vais m'en plaindre.\n\n\n<0x10009:0x00141200>Fais quand même attention. Faudrait\npas que tu te fasses arnaquer par\ncertains de mes compères...")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00ffff00>Parfait. Voici ma dernière info top\nsecrète. Les boucliers de ces tocsons\nsont grands comme des murs, t'as\nremarqué?\n<0x10009:0x00110800>Puisqu'ils sont comme des murs,\nt'as qu'à foncer dessus comme sur\nun vrai mur...\n\n<0x10009:0x00ffff09>Héhé! Je te laisse la surprise de\ndécouvrir ce que ça fait! Tu seras\npas déçu, crois-moi!\n\n<0x10009:0x00110800>Maintenant, tu vas pouvoir leur donner\nune bonne raclée! Merci pour les rubis!")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00141215>Hé! Mais t'as pas assez de rubis!\nPas de rubis, pas d'infos! C'est\naussi simple que ça!\n\n<0x10009:0x00ffff00>Reviens me voir quand t'auras\nramassé <color red<50 rubis>coloroff>!")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00141215>Bon, tu fais le gratteux, maintenant?\nVoyons, <color red<50 rubis>coloroff>, c'est rien...\n\n\n<0x10009:0x00ffff00>Enfin, si tu changes d'idée,\nfais‐moi signe.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 1, unk: 0, line: 95 */ "Salut toi! Tu as toujours du mal contre\nles <color red<gros trapus avec leur bouclier>coloroff>?\n\n\n<0x10009:0x0015080b>Si tu veux, je peux te donner des\n<color red<infos encore plus >coloroff><color red<<color red<taupes <color red<secrètes\n>coloroff>pour les battre en un clin d'œil.")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00ffff09>Comme <pause 10>de <pause 10>raison<pause 10>, ce sera pas gratuit!\nÇa te coûtera <color red<30 rubis>coloroff>!\n[1-]Dis‐moi tout![2]Non merci.")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00110808>Oh, t'es un garçon généreux, toi!\nParle-moi de ça! Maintenant,\nouvre grand tes oreilles...\n\n<0x10009:0x00ffff00>Ces mal léchés attaquent avec une\ngrande lance, tu sais? Et s'ils te\ntouchent, tu es fini.\n\nMais si tu réussis à <color red<repousser >coloroff>leurs\nattaques...<pause 15><0x10009:0x00110800> Tu vois ce que je veux\ndire?<pause 15>\n[1-]Je savais pas[2-]Je savais")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0011080b>C'est pas nécessairement évident!\nÇa m'a pris pas mal de temps avant\nde comprendre ça.\n\n<0x10009:0x00ffff00>Mais j'en ai encore d'autres\nen réserve...<pause 20> Celles‐là,\nelles coûtent <color red<50 rubis>coloroff>.\n[1-]J'achète![2]Non merci.")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00120e04>Tu savais? Franchement, tu\nm'impressionnes... Chapeau!\n\n\n<0x10009:0x00ffff00>Dans ce cas, il va falloir que je sorte\nl'artillerie lourde. Ça fera <color red<50 rubis>coloroff>!\n[1-]Dis‐moi tout![2]Non merci.")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Hé! Mais t'as pas assez de rubis!\nPas de rubis, pas d'infos! C'est\naussi simple que ça!\n\n<0x10009:0x00ffff00>Reviens me voir quand t'auras\nramassé <color red<30 rubis>coloroff>!")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Bon, tu fais le gratteux, maintenant?\nVoyons, <color red<30 rubis>coloroff>, c'est rien...\n\n\n<0x10009:0x00ffff00>Enfin, si tu changes d'idée,\nfais‐moi signe.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0, line: 93 */ "Salut toi! Tu as toujours du mal contre\nles <color red<gros trapus avec leur bouclier>coloroff>?\n\n\n<0x10009:0x0015080b>Si tu veux, je peux te donner des\n<color red<infos taupes secrètes >coloroff>pour les\nbattre en un clin d'œil.")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00ffff09>Comme <pause 10>de <pause 10>raison<pause 10>, ce sera pas gratuit!\nÇa te coûtera <color red<30 rubis>coloroff>!\n[1-]Dis‐moi tout![2]Non merci.")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00110809>Héhé! Merci, mon gars! C'est des infos\ntaupes secrètes, alors ça va pas plus\nloin qu'ici, compris?\n\n<0x10009:0x00ffff00>Voici donc...<pause 20> Leur bouclier, tu peux\nle découper à coups d'épée! C'est-y\npas un bon tuyau, ça?\n\nMais y en a aussi qu'ont des boucliers\nde métal et ceux‐là, tu peux pas les\ndécouper, alors fais attention!\n[1-]Je vois...[2-]C'est tout?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x0015090b>Héhé! Mais c'est pas tout! J'ai d'autres\ntuyaux pour toi... Ça t'intrigue, hein?\n<0x10009:0x00ffff00>Ouais, je m'en doutais...<pause 20>\nCe sera <color red<30 rubis>coloroff> de plus.\n[1-]Tiens![2]Non merci.")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0, line: 87 */ "Quoi? Pourquoi tu me fais cet air de\npetit-Joe-connaissant?\n\n\n<0x10009:0x00150809>Ça, ce n'était que pour te mettre l'eau\nà la bouche. J'ai des infos encore plus\nintéressantes. Ce sera <color red<30 rubis >coloroff>de plus!\n[1-]Tiens![2]Non merci.")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Hé! Mais t'as pas assez de rubis!\nPas de rubis, pas d'infos! C'est\naussi simple que ça!\n\n<0x10009:0x00ffff00>Reviens me voir quand t'auras\nramassé <color red<30 rubis>coloroff>!")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Bon, tu fais le gratteux, maintenant?\nVoyons, <color red<30 rubis>coloroff>, c'est rien...\n\n\n<0x10009:0x00ffff00>Enfin, si tu changes d'idée,\nfais‐moi signe.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Salut, toi! Si tu fais une pause ici,\nc'est parce que tu t'acharnes contre\nles monstres... C'est ça?\n\n<0x10009:0x00110900>Surtout les <color red<gros trapus avec leur\nbouclier >coloroff>qu'y a par là‐bas. Ils sont\ncoriaces, ceux‐là.\n\n<0x10009:0x0015080b>Mais si tu veux, j'ai des <color red<infos secrètes\n>coloroff>qui te permettront de les battre en un\nclin d'œil.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00ffff09>Mais, comme <pause 10>de <pause 10>raison,<pause 10> ce sera pas\ngratuit. <color red<30 rubis>coloroff>, ça te convient?\n[1-]Dis‐moi tout![2]Non merci.")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10005:0x005a0000>J'Ai... éTÉ MiS... hOrs SerViCe...\nc'EsT... Ta fAuTE... DZZZZZ... ")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 2, unk: 0, line: 106 */ "<0x10005:0x005a0000>Je détecte alentour une <color red<température\nextrêmement élevée>coloroff>, mais vos <color yellow<boucles\nignifuges >coloroff>vous permettront d'y\nrésister.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 2, unk: 0, line: 122 */ "<0x10012:0x0000000b>Maître <heroname>, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nJe ne détecte pas d'<color red<eau>coloroff> ici.\n\n\n\nPour activer ce mécanisme, il faut\nun grand récipient, mais je vous\nrecommande de commencer par\nchercher de l'<color red<eau>coloroff><sound 4>.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10012:0x00000064>Hé! Je peux pas aller là‐dedans, moi!\nZzaarpt! Guide‐moi en marchant!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 2, unk: 0, line: 107 */ "<0x10005:0x005a0000>La probabilité que la dernière <color red<flamme\nsacrée>coloroff> se trouve par ici est de 90 %.\nJe vous suggère de chercher la flamme.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "<sound 114>Brriizt! Abandonne-moi pas!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 108 */ "Le robot a été mis hors service.\nJe vous suggère de rebrousser\nchemin pour le réparer.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10012:0x0000000b>Maître <heroname>, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nLe robot vous attend au pied du volcan.\nJe vous conseille de regagner le pied\ndu volcan depuis le ciel et de revenir\njusqu'ici en guidant le robot.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<sound 114>Je t'ai perdu de vue! Bzzut!\nRegarde ma position sur ta\n<color red<carte>coloroff> avec (+) et reviens \nvite me chercher! Bzzap!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "T'es mieux de faire plus attention\nà moi, cette fois! Zzbrrrat!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Bon, bon. Dépêche‐toi, le maître\nen vert! Je te suis! Zrrt!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<sound 114>Zrrrbit! Y'a des monstres partout! \nVite! Fais quelque chose!")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<sound 114>Bzzzourt! DANGER! Aide‐moi!")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<sound 114>Zzbbrit! Des... des monstres!\nJ'ai peur!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Si je peux encore t'être utile,\nappelle‐moi, ma douce! Bzzrr!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Je pense qu'il reste quelques\n<color yellow<cubes de la Déesse>coloroff> à découvrir\ndans ces montagnes.\nEssaie de les trouver!")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00151b09>Tiens, si c'est pas mon bon ami!\nÇa va, toi?\n\n\nJ'ai entendu dire qu'il y avait\ndes <color yellow<cubes de la Déesse >coloroff>par ici,\nalors je suis venu voir.\n\nTu en as peut‐être déjà trouvé\nplusieurs, mais je sens qu'il\ny en a encore beaucoup qui\nsont cachés dans les parages.\n<0x10009:0x001817ff>Si ça te dit, pourquoi t'essaierais\npas de les chercher?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<sound 114>Zzrrit! Tu vas me faire poireauter\nencore longtemps? Si tu sais pas où\nje suis, regarde sur ta <color red<carte>coloroff> avec (+)!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<sound 114>Viens vite me chercher! Zzzrriit!\nSi tu sais pas où je suis, regarde\nsur ta <color red<carte>coloroff> avec (+)!")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<sound 114>Qu'est‐ce que tu fais? Brrzoupt!\nGrouille‐toi! Pour vérifier où je\nsuis, regarde ta <color red<carte>coloroff> avec (+)!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10012:0x00000064>Eh ben quoi? Y a un problème?\nC'est bien ici qu'il fallait la\ntransporter, ta cuvette, non?\n\n<pause 10>Quoi? Au sommet? BZZZTT!<pause 15> T'aurais\npu le dire plus tôt! Pas question que je\nretourne dans le ciel avec cette affaire\nqui pèse trois tonnes et quart!\nBzzzrt...zrrbt...tzzptrr.<pause 15>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10012:0x00000064>C'est infesté de, zrrrt, monstres, ici...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000064>Enfin, en temps normal, j'en ferais\ndu matériel à dépotoir en un rien de\ntemps... Brrrzzt! Mais, disons que\nj'ai les mains pleines en ce moment...")
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10012:0x00000064>Tiens, puisque t'es là, Maître en\nvert! Tu vas nous montrer de quoi\nt'es capable. Tu vas me servir de\nbouclier, je resterai derrière toi.")
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10012:0x00000064>Surtout, laisse pas les monstres\ntoucher un seul de mes boulons!\nPas. Un. Seul. Zrrrt!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 103 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nGrâce à l'amélioration de votre épée,\nil est à présent possible de <color red<détecter\n>coloroff>les <color yellow<cubes de la Déesse>coloroff>.\n\nJ'ai ajouté les <color yellow<cubes de la Déesse>coloroff>\naux cibles pouvant être <color red<détectées>coloroff>.\n<sound 4>Faites‐en bon usage.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "Dire que tu es venu jusqu'ici et que\ntu ne peux même pas entrer... T'es\nvraiment pas chanceux!\n\n<0x10009:0x00150dff>...<pause 20> J'ai comme l'impression d'avoir\noublié quelque chose d'important.\n\n\nQuelque chose que mon ami m'aurait\ndit...<pause 20> <0x10009:0x00000004>Hmm... C'était quoi, déjà?\n\n\n<0x10009:0x000908ff>Enfin, c'est pas grave.\nSi t'as besoin de beaucoup d'eau,\nva voir au <color red<lac Floria>coloroff>.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 1, line: 55 */ "<0x10009:0x00110801>Tiens, toi aussi t'es arrivé jusqu'ici?\nTu cherches toujours ton amie\ncréature?\n\n<0x10009:0x000908ff>Moi, je suis toujours à la recherche de\ntrésors et j'ai entendu dire qu'il y avait\ndes grandes ruines par ici...\n\n<0x10009:0x00150dff>Mais pour l'instant, j'en ai pas vu le\nmoindre caillou... Tu saurais pas où\nelles sont, les ruines?\n[1-]Tu veux savoir?[2-]Je ne dirai rien")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00110900>Tu sais où elles sont? On se connaît\nbien, tous les deux, non? Tu vas me\nle dire, hein?")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x0009080e>Quoi, y a des flammes qui empêchent\nd'entrer? Ben il suffit de verser de\nl'eau pour les éteindre, non?\n\n<0x10009:0x00150800>Quoi? Il faut beaucoup d'eau?\nJe vois...<pause 20> L'eau d'ici suffira pas.\n\n\n<0x10009:0x000908ff>Il paraît que la source de cette chute\nd'eau est la même que celle du <color red<lac\nFloria<sound 4> >coloroff>qui se trouve très loin d'ici.\n\n<0x10009:0x001108ff>Un de mes potes qu'était allé chercher\ndes trésors dans la <color blue<forêt de Firone>coloroff>\na longé une voie d'eau souterraine qui\npartait de ce lac pour revenir ici.\n<0x10009:0x000908ff>Tout ça pour dire que c'était un super\ngrand lac. Si t'allais là‐bas, tu pourrais\ntrouver toute l'eau qu'il te faut, non?")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0014120a>Tu vas pas commencer à me faire des\ncachettes! On se connaît bien tous les\ndeux... Tu peux me le dire!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 7, unk: 0, line: 102 */ "Étanche ma soif et\nle chemin s'ouvrira.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<sound 114>Il était plus que temps! Brrzt!\nPlus question que tu me plantes\nlà, comme un pion!")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 2, unk: 1, line: 117 */ "<0x10012:0x0000000b>Maître <heroname>, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nVous n'avez pas encore éteint\nles flammes qui vous empêchent\nd'avancer.\n\nVoulez‐vous que j'ajoute le récipient\ndans lequel baignait le <color blue<dragon d'eau\n>coloroff>aux cibles à <color green<détecter>coloroff>?\n[1-]Vas‐y![2]Pas encore")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 2, unk: 0, line: 118 */ "<0x10012:0x00000005>Très bien, Maître.\nJ'ai ajouté le récipient dans\nlequel baignait le <color blue<dragon d'eau>coloroff>\naux cibles à <color green<détecter>coloroff>.<sound 4>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 2, unk: 0, line: 119 */ "<0x10012:0x00000005>Très bien, Maître.\nJe remets l'enregistrement à plus tard.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 2, unk: 1, line: 109 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nComme vous l'a suggéré ce\n<color blue<Mogma>coloroff>, je vous conseille de vous\nrendre au <color red<lac Floria>coloroff>.\n\nPour ce qui est du moyen de\ntransporter l'eau depuis le lac...<pause 15>\npourquoi ne pas demander au\n<color red<dragon d'eau>coloroff>?<sound 4>\nAvec la <color red<cuvette>coloroff> dans laquelle baignait\nle dragon d'eau lorsqu'il était blessé,\nil devrait être possible de transporter\nune grande quantité d'eau.")
/*<296>*/ 		printf(/* textboxtype: 2, unk: 1, line: 116 */ "Voulez‐vous que je recherche dans\nma mémoire pour ajouter ce\nrécipient aux cibles à <color red<détecter>coloroff>?\n[1-]Vas‐y![2]Pas encore")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00151b09>Tiens! Toi aussi tu es venu\nchercher des <color yellow<cubes de la Déesse>coloroff>?\nT'as pas eu de mal à traverser\ncette fournaise?\n<0x10009:0x00ffff00>Moi non plus la chaleur, ça\nme dérange pas, mais je peux\npas passer à travers ces\nflammes...")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>Comment je pourrais me\ndébarrasser de ces flammes?")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00151b09>Tiens, si c'est pas mon bon ami!\nÇa va, toi?\n\n\n<0x10009:0x00160bff>J'ai entendu dire qu'il y avait\nun <color yellow<cube de la Déesse >coloroff>par ici\nalors je suis venu voir.\n\n<0x10009:0x00000b00>Mon instinct me dit qu'il y en a un peu\nplus loin, mais à cause de ces flammes,\nje peux pas y aller!")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<sound 114>Bzzript! Mais, qu'est‐ce que tu fais?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 2, line: 61 */ "<0x10009:0x000c0405>Pour me la couler douce, il faudrait\nque je me trouve un endroit ensoleillé\net en altitude.\n\n<0x10009:0x000c0dff>J'ai toujours vécu sous terre, mais\nj'adore contempler le ciel.\n\n\n<0x10009:0x00090906>Si je devais me réincarner, je voudrais\nêtre un oiseau pour me promener dans\nl'immensité du ciel.")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x000b0c07>Oh, mais t'es le p'tit gars\nde l'autre fois...\n\n\n<0x10009:0x000b0506>Hohoho! Comment tu les trouves,\nles gants que j'ai inventés?\n\n\nComment je vais? Moi? Voyons...\n\n\n\n<0x10009:0x000c0405>Depuis l'autre fois, j'ai cherché\nd'autres endroits qui renferment\ndes trésors, mais j'ai rien trouvé.\n\nJe commence à être fatigué de\nme démener à chercher des\ntrésors dans cette fournaise...\n\n<0x10009:0x00090908>Je devrais peut‐être prendre ma\nretraite et passer mes vieux jours\nà me la couler douce...")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00181700>En sortant d'ici, au fond à droite\nil y a bien une <color red<source d'eau>coloroff>, mais...\nHmm... Comment faire?")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "« Étanche ma soif »? À bien y penser,\nen sortant d'ici, au fond à droite, il y\na une sortie.\n\nJ'y ai trouvé une <color red<source d'eau>coloroff><sound 4>.\nÇa m'a bien désaltéré.\n\n\n<0x10009:0x00181705>Mais comment apporter l'eau\njusqu'ici? On peut pas transporter\ncette drôle de grenouille...<pause 15>\nQu'est-ce qu'on peut faire?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>Comment je pourrais me\ndébarrasser de ces flammes?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<sound 114>Hé! Si tu continues comme ça,\ntu vas me mettre hors service!\nZzbrrt!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00171908>Oh! Les flammes se sont éteintes!\nOn va pouvoir avancer!")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 2, unk: 0, line: 22 */ "<0x10012:0x0000000b>Maître, le robot nous attend au volcan.\nVeuillez l'y rejoindre au plus vite.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x001a030d>Chef... Vous allez être fier de moi.\nVous verrez. Je ferai tout pour être\nvotre digne successeur.\n\nVeillez sur nous de là‐haut...")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x001c180f>Quoi? Le chef a levé les pattes?\nOù est‐ce qu'il est parti?\n[1-]Dans le ciel[2-]Au paradis")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x001a2011>Dans le ciel?\n\n\n\n... <0x10009:0x001b0407>Je vois<pause 20>... C'est vrai\nque le chef a toujours\naimé le ciel.\n\nJe suis sûr que même là‐haut,\nil continue à chercher des\ntrésors.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x001a2011>Au... Au paradis?\n\n\n\n...<0x10009:0x001b2207> Je vois<pause 20>...\nAlors finalement, le chef\nnous a quittés...\n\nJ'imaginais pas ça comme ça,\nle départ pour le paradis...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x001b2207>Se promener comme ça entre le ciel\net la terre... C'est pas évident. Il est\npas mal fort le chef.")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x001a2011>Ah bien, ça parle au diable!\nLe chef... Il est revenu!\n\n\n<0x10009:0x001b2207>Il fait des allers‐retours entre le ciel\net la terre... Il est pas mal fort, notre\nchef!")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000015>Se la couler douce, hein... Bon...\nSi c'est que le chef veut, donne‐lui\nun coup de main, veux‐tu?")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x001a2001>Dis-moi donc, bonhomme, t'es allé\nvoir le chef? Comment tu l'as trouvé?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Quoi? Se la couler douce?\n\n\n\n... <0x10009:0x000000ff>C'est quoi ça? Une nouvelle façon\nde trouver des trésors?\n\n\n<0x10009:0x001b1e15>Les trésors, y'a pas à dire, je m'y\nconnais! Mais ça... j'en ai jamais\nentendu parler!\n\nMais si c'est ce que veut le chef,\nfais ce qu'il te demande.")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x001b2201>Oh! C'est toi, bonhomme!\nÇa creuse?\n\n\nHein? Moi? Toujours en pleine forme!\n\n\n\n<0x10009:0x00000002>Mais depuis qu'on est revenus de ces\nruines, notre chef, <color blue<Aurélio >coloroff>est bizarre.\nIl a pas l'air dans son assiette...\n\n<0x10009:0x001b22ff>Dis-moi donc, t'es allé le voir?\nComment tu l'as trouvé?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Quoi? Se la couler douce?\n\n\n\n...<0x10009:0x000000ff>C'est quoi ça? Une nouvelle façon\nde trouver des trésors?\n\n\n<0x10009:0x001b1e15>Les trésors, y'a pas à dire, je m'y\nconnais! Mais ça... j'en ai jamais\nentendu parler!\n\nMais si c'est ce que veut le chef,\nfais ce qu'il te demande.")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x001b050a>Le <color blue<chef >coloroff>doit être quelque part dans les\nparages. Va donc lui serrer la pince!\n\n\nPeut‐être que s'il te voit,\nça lui remontera le moral!")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x001b2201>Oh! C'est toi, bonhomme!\nÇa creuse?\n\n\nHein? Moi? Toujours en pleine forme!\n\n\n\n<0x10009:0x00000002>Mais depuis qu'on est revenus de ces\nruines, notre chef, <color blue<Aurélio >coloroff>est bizarre.\nIl a pas l'air dans son assiette...\n\n<0x10009:0x001b230a>Va donc lui faire un brin de jasette!\nIl doit être quelque part pas loin.\nJe suis sûr qu'il aimerait bien te\nvoir la bette.")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "Excuse‐moi, mais tu pourrais\npas t'en occuper encore une fois?")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00161e56>En voilà d'autres...\nÇa me brûle!")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10012:0x00000064>Je t'attendais! Zzzrbt! Amène‐moi\nau sommet du volcan! Et que ça saute!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x001b2215>Ce cher <color blue<Tino>coloroff>! C'est bien juste pour la\nchasse au trésor qu'il montre autant\nde volonté...")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x001a200f>Ah... C'est toi! Le p'tit gars de\nl'autre fois!<pause 15>\n\n\n<0x10009:0x001b2209>Héhéhé! Il ne faut surtout pas\nque tu t'en fasses avec ça.\n\n\nMon ami le sait que je me suis planté\ndans les ruines. C'est pas grave.\n\n\n<0x10009:0x001b1eff>Il s'est retrouvé dans le même\npétrin, alors on est quittes!\n\n\n<0x10009:0x001a0a12>Dis‐moi donc... T'aurais pas vu <color blue<Tino\n>coloroff>dans le coin?\n[1-]Il est là‐bas[2-]Non")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x001b0a12>Ah bon? Tant mieux.\n\n\n\nC'est juste que ça fait des lunes\nque je l'ai pas vu.\n\n\n<0x10009:0x001b160f>J'avais peur qu'il soit encore allé\ns'embourber...\n\n\n<0x10009:0x001b16ff>Il a le don d'attirer le trouble, celui-là!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x001b2207>Ah, l'animal!<pause 20> Il a encore dû partir tout\nseul à la chasse au trésor!\n\n\nMon ami lui a pourtant bien dit que\nc'était dangereux d'agir en solo!\n\n\n<0x10009:0x001b0009>Ça doit être son instinct de <color blue<chasseur de\ntrésors >coloroff>qui le pousse à agir comme ça.\n\n\nSi tu vois <color blue<Tino>coloroff> quelque part,\ndis‐lui que je le cherchais!")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00171908>Oh! Tu as bien fait ça!\nBon, plus de temps à perdre.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000064>Bzzuut! Tu m'as pas oublié, j'espère!\nVérifie ma position sur ta <color red<carte>coloroff>\navec (+)!<0x10011:0x03cd>")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x000d0509>Voyons... Où est‐ce que je vais\npouvoir aller chercher des\ntrésors maintenant...?")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 1, line: 77 */ "<0x10008:0x01cd><0x10009:0x000e1008>Tiens, bonhomme! T'es toujours\nvivant, toi?\n\n\n<0x10009:0x0011110b>On dirait que t'as retrouvé\ntout ton équipement! Je savais\nque tu serais capable!\n\nEt puis?<pause 20> T'as trouvé des trésors?\n[1-]Des montagnes![2-]Rien du tout...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000e0505>Vraiment? T'es donc chanceux!\n\n\n\n<0x10009:0x000e1f0a>Mais le monde est vaste!\nJe suis sûr qu'il y a encore\ndes trésors qui dorment un\npeu partout.\nJ'suis pas du genre pessimiste!\nLa prochaine fois, moi aussi je\ntoucherai le gros lot!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x000e040a>Ah bon? Y avait rien d'intéressant?\nHm. Dommage...\n\n\n<0x10009:0x000f0508>Faut pas s'en faire, bonhomme!\nLe monde est vaste! Il y a encore\nplein de trésors qui nous attendent!")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Je vais poursuivre mon voyage et mes\nrecherches. Nous nous croiserons\nsûrement à un moment donné.")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 51 */ "<0x10009:0x00181702>Alors, tu as trouvé quelque\nchose à l'intérieur?\n[1-]Plein de\npièges[2-]Plein de\nmonstres")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00161e56>Ah... Ah bon...?\nDans ce cas, je te laisse\nexplorer l'intérieur.\n\n<0x10009:0x00080bff>Moi, je vais bientôt repartir\npour poursuivre mes recherches\nailleurs. Je suis sûr qu'on se\nreverra.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00161e56>Ah... Ah bon...?\nDans ce cas, je te laisse\nexplorer l'intérieur.\n\n<0x10009:0x00080bff>Au fait, mon instinct me dit\nqu'il y a un <color yellow<cube de la Déesse>coloroff>\ntout près d'ici.\n\nEt mon instinct me trompe\nrarement. Si j'étais toi, je\nchercherais bien dans les environs.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00171908>Ouah! T'es vraiment impressionnant!\nTu peux vraiment tout faire!\n\n\n<0x10009:0x00080bff>Je te laisse passer devant.\nVas‐y, entre!")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00181707>Un <color red<grand récipient >coloroff>qui pourrait\ncontenir beaucoup d'<color red<eau>coloroff>...\nOù est‐ce qu'on pourrait\ntrouver ça?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00181707>Comment faire pour donner assez\nd'<color red<eau >coloroff>à ce... cette... chose? Il en\nfaudrait beaucoup... et aussi un\n<color red<grand récipient>coloroff>...\n<0x10009:0x00161eff>Tu as visité un tas d'endroits\ndifférents durant ton aventure.\nT'aurais pas une idée?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "Tu as vu ça? C'est vraiment\ntrès étrange, tout ça...\n\n\n<0x10009:0x00171908>C'est un peu beaucoup pour\nun simple <color yellow<cube de la Déesse>coloroff>.\nIl doit y avoir <color red<quelque chose\nde très important >coloroff>caché par ici.")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00161eff>Et cette fois, elle est vraiment\nénorme... Je pense pas qu'un\nsimple <color yellow<flacon >coloroff>sera suffisant.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000007>Hmm...<pause 15><0x10009:0x00181700> Tu aurais pas un\n<color red<grand récipient<sound 4> >coloroff>qui pourrait\nte permettre de verser de l'eau\nlà‐dessus?\n<0x10009:0x00161eff>Et il faudrait aussi beaucoup\nd'<color red<eau>coloroff> pour le remplir...\nHmm... Comment faire?")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "C'est là‐dessus qu'il faut verser l'eau?\nOK, je m'en occupe! Brrrzit!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 2, unk: 0, line: 120 */ "Nous sommes arrivés au volcan\nd'Ordinn.\n\n\nÀ l'aide de la <color red<détection>coloroff>, vous pouvez\nrechercher l'entrée de l'épreuve\nqui vous permettra de trouver\nla flamme sacrée.")
          }

