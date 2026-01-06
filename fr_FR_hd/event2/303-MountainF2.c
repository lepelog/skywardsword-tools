          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 73, line: 26 */ "Ma Fay adorée ! Tu as vu ce que j'ai réussi à\nfaire ?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 73, unk: 1, line: 1 */ "Ouah ! Quelle chaleur...! Mais je suis du dernier\nmodèle alors ça me fait ni chaud ni froid !")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 73, unk: 1, line: 4 */ "<sound 114>Hé ! Où tu vas ?! Bon, je t'attends ici alors.\nMais grouille‐toi de faire ce que t'as à faire !")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Si je peux encore t'être utile, appelle‐moi,\nma douce !")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 73, line: 2 */ "Hé ! On est pas au bon endroit, si ? T'es nul\ncomme guide !")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 0, unk: 73, line: 5 */ "<sound 114>Je me fais attaquer ! Viens vite m'aider !")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "Les flammes qui bloquaient le chemin ont été éteintes.\nJe vous conseille d'avancer.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "On est bientôt arrivés ? Allez, on se dépêche !")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<sound 114>Hé ! Fais quelque chose ! Vite !")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 0, unk: 1, line: 121 */ "Vous êtes de retour, <0x10012:0x00000004>Maître <heroname>.\n\n\n\nGrâce aux <color yellow<boucles ignifuges >coloroff>que vous venez d'obtenir,\nvous devriez pouvoir résister aux températures les\nplus extrêmes.\n\nJe vous recommande de poursuivre votre recherche\nde la <color red<flamme sacrée>coloroff>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 73, unk: 1, line: 7 */ "<0x10005:0x003c0000><0x10008:0x02cd>Aaaah !")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Maître, Fay au rapport. Nous sommes proches\ndu cratère du <color blue<volcan d'Ordinn>coloroff>, au sommet de\nla montagne.")
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
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00110801>Alors, t'as réussi à battre ces <color red<gros lourdauds\navec leur bouclier>coloroff> ?\n\n\n<0x10009:0x00ffff00>Découpe leur bouclier s'il est en bois, repousse\nleurs coups de lance et fonce sur leur bouclier\ncomme sur un mur...\n\nSi tu retiens ça, tu devrais pas avoir de\nproblème. Courage !")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "Salut, toi ! Alors, tu as toujours du mal\ncontre les <color red<gros balourds avec leur\nbouclier >coloroff>?\n\n<0x10009:0x0015080b>Si tu veux, je peux te donner mes\n<color red<dernières infos taupes secrètes >coloroff>pour les\nbattre en un clin d'œil.")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00ffff09>É<pause 10>vi<pause 10>dem<pause 10>ment<pause 10>, ce sera pas donné ! Ça te coûtera\n<color red<50 rubis>coloroff> !\n[1-]Dis‐moi tout ![2]Non merci")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x0011080b>Tu regardes vraiment pas à la dépense, toi !\nEnfin, c'est pas moi qui vais m'en plaindre.\n\n\n<0x10009:0x00141200>Fais quand même gaffe à pas te faire arnaquer\npar mes compères...")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x00ffff00>Alors, voilà ma dernière info top secrète. Les\nboucliers de ces lourdauds sont grands comme\ndes murs, pas vrai ?\n\n<0x10009:0x00110800>S'ils sont comme des murs, t'as qu'à foncer\ndessus comme sur un vrai mur...\n\n\n<0x10009:0x00ffff09>Héhé ! Je te laisse la surprise de découvrir ce\nque ça fait ! Tu seras pas déçu !\n\n\n<0x10009:0x00110800>Allez, maintenant, tu vas pouvoir leur mettre\nune belle raclée ! Merci pour les rubis !")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00141215>Hé ! Mais t'as pas assez de rubis ! Pas de rubis,\npas d'info !\n\n\n<0x10009:0x00ffff00>Reviens me voir quand t'auras économisé\n<color red<50 rubis >coloroff>!")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00141215>Allez, fais pas le radin ! <color red<50 rubis>coloroff>, c'est rien.\n\n\n\n<0x10009:0x00ffff00>Enfin, si tu changes d'avis, fais‐moi signe.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 0, unk: 0, line: 95 */ "Salut, toi ! Alors, tu as toujours du mal contre\nles <color red<gros balourds avec leur bouclier >coloroff>?\n\n\n<0x10009:0x0015080b>Si tu veux, je peux te donner des <color red<infos encore\nplus taupes secrètes >coloroff>pour les battre en un clin\nd'œil.")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00ffff09>É<pause 10>vi<pause 10>dem<pause 10>ment<pause 10>, ce sera pas gratuit ! Ça te coûtera\n<color red<30 rubis>coloroff> !\n[1-]Dis‐moi tout ![2]Non merci")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00110808>Oh, t'es un garçon généreux, toi ! Tu me plais\nbien. Alors, ouvre bien tes oreilles...\n\n\n<0x10009:0x00ffff00>Ces balourds attaquent avec une grande lance,\npas vrai ? Et s'ils te touchent, tu fais pas un pli.\n\n\nMais si t'arrives à <color red<repousser >coloroff>leurs attaques...<pause 15><0x10009:0x00110800>\nTu vois ce que je veux dire ?<pause 15>\n[1-]Je savais pas[2-]Je savais")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x0011080b>Eh ouais ! Ça m'a pris pas mal de temps pour\nrassembler ces infos.\n\n\n<0x10009:0x00ffff00>Mais j'en ai encore d'autres en réserve...<pause 20>\nCelles‐là, elles coûtent <color red<50 rubis>coloroff>.\n[1-]Je paie ![2]Non merci")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00120e04>Quoi ?! T'étais au courant ? T'es un sacré\nnuméro, toi !\n\n\n<0x10009:0x00ffff00>Dans ce cas, il va falloir que je sorte l'artillerie\nlourde. Ça fera <color red<50 rubis>coloroff> !\n[1-]Dis‐moi tout ![2]Non merci")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Hé ! Mais t'as pas assez de rubis ! Pas de rubis,\npas d'infos !\n\n\n<0x10009:0x00ffff00>Reviens me voir quand t'auras économisé\n<color red<30 rubis>coloroff> !")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Allez, fais pas ton radin ! <color red<30 rubis>coloroff>, c'est rien...\n\n\n\n<0x10009:0x00ffff00>Enfin, si tu changes d'avis, fais‐moi signe.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0, line: 93 */ "Salut, toi ! Alors, tu as toujours du mal contre\nles <color red<gros balourds avec leur bouclier >coloroff>?\n\n\n<0x10009:0x0015080b>Si tu veux, je peux te donner des<color red< infos taupes\nsecrètes >coloroff>pour les battre en un clin d'œil.")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00ffff09>É<pause 10>vi<pause 10>dem<pause 10>ment<pause 10>, ce sera pas gratuit ! Ça te coûtera\n<color red<30 rubis>coloroff> !\n[1-]Dis‐moi tout ![2]Non merci")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00110809>Héhé ! Merci, mon gars ! C'est des infos taupes\nsecrètes, alors ça reste entre nous, hein !\n\n\n<0x10009:0x00ffff00>Alors en fait...<pause 20> Leur bouclier, tu peux le\ndécouper à coups d'épée ! Ça, c'est de\nl'info, hein ?\n\nMais y en a aussi qu'ont des boucliers en métal\net ceux‐là, tu peux pas les découper, alors fais\ngaffe !\n[1-]Je vois...[2-]C'est tout ?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x0015090b>Héhé ! Mais c'est pas tout ! J'ai encore d'autres\ninfos... Ça t'intrigue, hein ?\n\n\n<0x10009:0x00ffff00>Ouais, je m'en doutais...<pause 20> Ce sera <color red<30 rubis>coloroff> de\nplus.\n[1-]Voilà ![2]Non merci")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0, line: 87 */ "Quoi ? Pourquoi tu me regardes comme si tu\nle savais depuis longtemps ?\n\n\n<0x10009:0x00150809>Bon, on va dire que ça, c'était juste le\nhors‐d'œuvre. J'ai des infos bien plus\nintéressantes. Ce sera <color red<30 rubis >coloroff>de plus !\n[1-]Voilà ![2]Non merci")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Hé ! Mais t'as pas assez de rubis ! Pas de rubis,\npas d'infos !\n\n\n<0x10009:0x00ffff00>Reviens me voir quand t'auras économisé\n<color red<30 rubis>coloroff> !")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Allez, fais pas ton radin ! <color red<30 rubis>coloroff>, c'est rien...\n\n\n\n<0x10009:0x00ffff00>Enfin, si tu changes d'avis, fais‐moi signe.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Salut, toi ! Si tu fais une pause ici, c'est\nque tu galères contre les monstres, non ?\n\n\n<0x10009:0x00110900>Surtout les <color red<gros baraqués avec leur bouclier\n>coloroff>qu'y a par là‐bas. Ils sont coriaces, ceux‐là.\n\n\n<0x10009:0x0015080b>Mais si tu veux, j'ai des <color red<infos secrètes >coloroff>qui te\npermettront de les battre les doigts dans le nez.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00ffff09>Mais é<pause 10>vi<pause 10>dem<pause 10>ment,<pause 10> ce sera pas gratuit. <color red<30 rubis>coloroff>,\nça te va ?\n[1-]Dis‐moi tout ![2]Non merci")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 0, unk: 73, line: 8 */ "<0x10005:0x005a0000>J'Ai... éTÉ MiS... hOrs SerViCe...\nc'EsT... Ta fAuTE... DZZZZZ... ")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10005:0x005a0000>Je détecte alentour une <color red<température extrêmement\nélevée>coloroff>, mais vos <color yellow<boucles ignifuges >coloroff>vous permettront\nd'y résister.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Je ne\ndétecte pas d'<color red<eau>coloroff> ici.\n\n\nPour activer ce mécanisme, il faut un grand récipient,\nmais je vous recommande de commencer par chercher\nde l'<color red<eau>coloroff><sound 4>.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 73, unk: 1, line: 10 */ "<0x10012:0x00000064>Hé ! Je peux pas aller là‐dedans ! Guide‐moi\nplutôt en marchant !")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10005:0x005a0000>La probabilité que la dernière <color red<flamme sacrée>coloroff> se\ntrouve par ici est de 90 %. Je vous suggère de\nchercher la flamme.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 73, line: 11 */ "<sound 114>Oh ! Me laisse pas ici !")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "Le robot a été mis hors service. Je vous suggère de\nrebrousser chemin pour le réparer.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Le robot\nvous attend au pied du volcan.\n\n\nJe vous conseille de regagner le pied du volcan depuis\nle ciel et de revenir jusqu'ici en guidant le robot.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<sound 114>Je t'ai perdu de vue ! Regarde ma position sur\nta <color red<carte>coloroff> avec (-) et reviens vite me chercher !")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "T'as intérêt à faire plus attention à moi, cette\nfois !")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Allez, dépêche‐toi, le maître en vert ! Je te\nsuis !")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 73, unk: 1, line: 13 */ "<sound 114>Ouah ! Y a des monstres ! Vite ! Fais quelque\nchose !")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 0, unk: 73, line: 14 */ "<sound 114>Ouah ! Ils ont pas l'air commodes ! Dépêche‐toi\nde les éliminer !")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<sound 114>Aaah ! Des... des monstres ! J'ai peur !")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Si je peux encore t'être utile, appelle‐moi,\nma douce !")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 73, line: 35 */ "Je pense qu'il reste quelques <color yellow<cubes de la Déesse\n>coloroff>à découvrir dans ces montagnes. Essaie de les\ntrouver !")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 4, unk: 1, line: 34 */ "<0x10009:0x00151b09>Tiens, comme on se retrouve ! Comment\nvas‐tu ?\n\n\nJ'ai entendu dire qu'il y avait des <color yellow<cubes de la\nDéesse >coloroff>par ici, alors je suis venu voir.\n\n\nTu en as peut‐être déjà trouvé plusieurs, mais\nje sens qu'il y en a encore beaucoup qui sont\ncachés dans les parages.\n\n<0x10009:0x001817ff>Si ça te dit, pourquoi t'essaierais pas de les\nchercher ?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 73, unk: 1, line: 16 */ "<sound 114>Hé ! Tu comptes me faire poireauter encore\nlongtemps ?! Si tu sais pas où je suis, regarde\nsur ta <color red<carte>coloroff> avec (-) !")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 73, line: 17 */ "<sound 114>Viens vite me chercher ! Si tu sais pas où je\nsuis, regarde sur ta <color red<carte>coloroff> avec (-) !")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<sound 114>Qu'est‐ce que tu fabriques ?! Magne‐toi !\nPour vérifier où je suis, regarde ta <color red<carte\n>coloroff>avec (-) !")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf(/* textboxtype: 2, unk: 0, line: 33 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf(/* textboxtype: 73, unk: 1, line: 28 */ "<0x10012:0x00000064>Eh ben quoi ? Y a un problème ? C'est bien ici\nqu'il fallait la transporter, ta bassine, non ?\n\n\n<pause 10>Quoi ? Au sommet ?! <pause 15>T'aurais pu le dire plus\ntôt ! Pas question que je retourne dans le ciel\navec ce truc qui pèse trois tonnes !\n\nMais, d'un autre côté...<pause 15>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 0, unk: 73, line: 29 */ "<0x10012:0x00000064>C'est infesté de monstres, par ici...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000064>Enfin, en temps normal, j'en ferais qu'une\nbouchée ! Mais il se trouve que j'ai les\nmains prises...")
/*<113>*/ 		printf(/* textboxtype: 73, unk: 1, line: 31 */ "<0x10012:0x00000064>Tiens, puisque t'es là, Maître en vert ! Tu vas\nnous montrer de quoi t'es capable. Tu vas me\nservir de bouclier, je resterai derrière toi.")
/*<187>*/ 		printf(/* textboxtype: 0, unk: 73, line: 32 */ "<0x10012:0x00000064>Surtout, laisse pas les monstres toucher un seul\nde mes boulons !")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Grâce à l'amélioration de\nvotre épée, il est à présent possible de <color red<détecter>coloroff> les\n<color yellow<cubes de la Déesse>coloroff>.\n\nJ'ai ajouté les <color yellow<cubes de la Déesse >coloroff>aux cibles pouvant\nêtre <color red<détectées>coloroff>. <sound 4>Faites‐en bon usage.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 0, unk: 0, line: 59 */ "T'as vraiment pas de bol. Être arrivé jusqu'ici\net pas pouvoir entrer...\n\n\n<0x10009:0x00150dff>...<pause 20> J'ai comme l'impression d'avoir oublié\nquelque chose de très important.\n\n\nQuelque chose que mon pote m'aurait dit...<pause 20>\n<0x10009:0x00000004>Hmm... C'était quoi, déjà ?\n\n\n<0x10009:0x000908ff>Enfin, c'est pas grave. Si t'as besoin de\nbeaucoup d'eau, va voir au <color red<lac Faroria>coloroff>.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00110801>Tiens, toi aussi t'es arrivé jusqu'ici ?\nTu cherches toujours ta copine ?\n\n\n<0x10009:0x000908ff>Moi, je suis toujours à la recherche de trésors\net j'ai entendu dire qu'il y avait des grandes\nruines par ici...\n\n<0x10009:0x00150dff>Mais pour l'instant, j'en ai pas vu le moindre\ncaillou... Tu saurais pas où elles sont ?\n[1-]Tu veux savoir ?[2-]Je ne dirai rien")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00110900>Tu sais où elles sont ? On est potes, tous les\ndeux, non ? Tu vas me le dire, hein ?")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x0009080e>Quoi, y a des flammes qui empêchent d'entrer ?\nBen il suffit de verser de l'eau pour les éteindre,\nnon ?\n\n<0x10009:0x00150800>Quoi ? Il faut beaucoup d'eau ? Je vois...<pause 20> L'eau\nd'ici suffira pas.\n\n\n<0x10009:0x000908ff>Il paraît que la source de cette chute d'eau est\nla même que celle du <color red<lac Faroria<sound 4> >coloroff>qui se trouve\ntrès loin d'ici.\n\n<0x10009:0x001108ff>Un de mes potes qu'était allé chercher des\ntrésors dans la <color blue<forêt de Firone >coloroff>a longé une\nvoie d'eau souterraine qui partait de ce lac\npour revenir ici.\n<0x10009:0x000908ff>Tout ça pour dire que c'était un super grand\nlac. Si t'allais là‐bas, tu pourrais trouver toute\nl'eau qu'il te faut, non ?")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0014120a>Allez, fais pas ton radin ! On est potes, tous les\ndeux, non ? Tu peux bien me le dire !")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 102 */ "Étanche ma soif et\nle chemin s'ouvrira.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 73, unk: 1, line: 19 */ "<sound 114>C'est pas trop tôt ! Me laisse plus en plan\ncomme ça !")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport.\nVous n'avez pas encore éteint les flammes\nqui vous empêchent d'avancer.\n\nVoulez‐vous que j'ajoute le récipient dans lequel\nbaignait le <color blue<dragon d'eau >coloroff>aux cibles à <color green<détecter>coloroff> ?\n[1-]Vas‐y ![2]Pas encore")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 0, unk: 1, line: 118 */ "<0x10012:0x00000005>Très bien, Maître. J'ai ajouté le récipient dans lequel\nbaignait le <color blue<dragon d'eau >coloroff>aux cibles à <color green<détecter>coloroff>.<sound 4>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10012:0x00000005>Très bien, Maître. Je remets l'enregistrement à plus\ntard.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Comme\nvous l'a suggéré ce <color blue<Mogma>coloroff>, je vous conseille\nde vous rendre au <color red<lac Faroria>coloroff>.\n\nPour ce qui est du moyen de transporter l'eau depuis\nle lac...<pause 15> pourquoi ne pas demander au <color red<dragon d'eau >coloroff>?<sound 4>\n\n\nAvec la <color red<bassine>coloroff> dans laquelle baignait le dragon\nd'eau lorsqu'il était blessé, il devrait être possible\nde transporter une grande quantité d'eau.")
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "Voulez‐vous que je recherche dans ma mémoire pour\najouter ce récipient aux cibles à <color red<détecter>coloroff> ?\n[1-]Vas‐y ![2]Pas encore")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 73, unk: 1, line: 37 */ "<0x10009:0x00151b09>Tiens ! Toi aussi tu es venu chercher des\n<color yellow<cubes de la Déesse >coloroff>? T'as pas eu de mal à\ntraverser cette fournaise ?\n\n<0x10009:0x00ffff00>Moi non plus la chaleur, ça me dérange pas,\nmais je peux pas passer à travers ces flammes...")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 0, unk: 73, line: 38 */ "<0x10009:0x001817ff>Comment je pourrais me débarrasser de ces\nflammes ?")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00151b09>Tiens, comme on se retrouve ! Comment\nvas‐tu ?\n\n\n<0x10009:0x00160bff>J'ai entendu dire qu'il y avait un <color yellow<cube de la\nDéesse >coloroff>par ici alors je suis venu voir.\n\n\n<0x10009:0x00000b00>Mon instinct me dit qu'il y en a un peu plus\nloin, mais à cause de ces flammes, je peux\npas y aller !")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 0, unk: 73, line: 20 */ "<sound 114>Oh ! Qu'est‐ce que tu fabriques ?!")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x000c0405>Pour le farniente, ce qu'il me faudrait, c'est\nun endroit ensoleillé et en altitude.\n\n\n<0x10009:0x000c0dff>J'ai toujours vécu sous terre, mais j'adore\ncontempler le ciel.\n\n\n<0x10009:0x00090906>Si je devais me réincarner, je voudrais être un\noiseau pour parcourir l'immensité du ciel.")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x000b0c07>Oh, mais t'es le p'tit gars de la dernière fois...\n\n\n\n<0x10009:0x000b0506>Hohoho ! Alors, comment tu trouves les gants\nque j'ai inventés ?\n\n\nComment je vais ? Moi ? Oh, tu sais, moi...\n\n\n\n<0x10009:0x000c0405>Depuis l'autre fois, j'ai cherché d'autres\nendroits qui renferment des trésors, mais\nj'ai rien trouvé.\n\nJe commence à être fatigué de me démener à\nchercher des trésors dans cette fournaise...\n\n\n<0x10009:0x00090908>Je devrais peut‐être prendre ma retraite\net passer mes vieux jours à me livrer aux\ndouceurs du farniente...")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 73, unk: 1, line: 40 */ "<0x10009:0x00181700>En sortant d'ici, au fond à droite il y a bien une\n<color red<source d'eau>coloroff>, mais... Hmm... Comment faire ?")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "« Étanche ma soif » ? Maintenant que j'y\npense, en sortant d'ici, au fond à droite,\nil y a une sortie.\n\nJ'y ai trouvé une <color red<source d'eau>coloroff><sound 4>. Ça m'a bien\ndésaltéré.\n\n\n<0x10009:0x00181705>Mais comment apporter l'eau jusqu'ici ? On\npeut pas transporter cette drôle de grenouille...<pause 15>\nComment faire ?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 0, unk: 73, line: 38 */ "<0x10009:0x001817ff>Comment je pourrais me débarrasser de ces\nflammes ?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<sound 114>Hé ! Si tu continues comme ça, tu vas me\nmettre hors service !")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 73, line: 41 */ "<0x10009:0x00171908>Oh ! Les flammes se sont éteintes ! On va\npouvoir avancer !")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 73, unk: 1, line: 22 */ "<0x10012:0x0000000b>Maître, le robot nous attend au volcan. Veuillez l'y\nrejoindre au plus vite.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x001a030d>Boss... Je ferai tout pour être votre digne\nsuccesseur. Veillez sur nous de là‐haut...")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x001c180f>Ouah ! Le boss a décollé ! Où est‐ce qu'il est\nparti ? \n[1-]Dans le ciel[2-]Au paradis")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x001a2011>Dans le ciel ?\n\n\n\n... <0x10009:0x001b0407>Je vois<pause 20>... C'est vrai que le boss a toujours\naimé le ciel.\n\n\nJe suis sûr que même là‐haut, il continue à\nchercher des trésors.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x001a2011>Au... Au paradis ?\n\n\n\n...<0x10009:0x001b2207> Je vois<pause 20>... Alors finalement, le boss nous a\nquittés...\n\n\nJ'imaginais pas ça comme ça, le départ pour le\nparadis...")
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
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x001b2207>Se promener comme ça entre le ciel et la terre...\nIl est trop fort le boss.")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x001a2011>Bah ça alors ! Le boss... Il est revenu !\n\n\n\n<0x10009:0x001b2207>Il fait des allers‐retours entre le ciel et la\nterre... Il est trop fort, le boss !")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000015>Du farniente, hein... Bah, si c'est que le boss\nveut, donne‐lui ce qu'il demande.")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x001a2001>Alors, frangin, t'es allé voir le boss ? Comment\ntu l'as trouvé ?\n\n\n......\n\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Quoi ? Du farniente ?\n\n\n\n... <0x10009:0x000000ff>C'est quoi ça ? Un trésor ?\n\n\n\n<0x10009:0x001b1e15>Bah, moi, j'y connais rien...\n\n\n\nMais si c'est ce que veut le boss, fais ce qu'il te\ndemande.")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x001b2201>Oh ! C'est toi, frangin ! Ça creuse ?\n\n\n\nHein ? Moi ? Ben, je pète toujours la forme !\n\n\n\n<0x10009:0x00000002>Mais depuis qu'on est revenus de ces ruines, le\nboss est bizarre. Il a pas l'air dans son assiette...\n\n\n<0x10009:0x001b22ff>T'es allé lui parler tout à l'heure, non ? Alors,\ncomment il va ?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Quoi ? Du farniente ?\n\n\n\n... <0x10009:0x000000ff>C'est quoi ça ? Un trésor ?\n\n\n\n<0x10009:0x001b1e15>Bah, moi, j'y connais rien...\n\n\n\nMais si c'est ce que veut le boss, fais ce qu'il te\ndemande.")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x001b050a>Le <color blue<boss >coloroff>doit être quelque part dans le coin.\nVa donc lui serrer la pince !\n\n\nPeut‐être que s'il te voit, ça lui remontera\nle moral !")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x001b2201>Oh ! C'est toi, frangin ! Ça creuse ?\n\n\n\nHein ? Moi ? Ben, je pète toujours la forme !\n\n\n\n<0x10009:0x00000002>Mais depuis qu'on est revenus de ces ruines, le\n<color blue<boss >coloroff>est bizarre. Il a pas l'air dans son assiette...\n\n\n<0x10009:0x001b230a>Bah, va donc tailler la bavette avec lui ! Il doit\nêtre quelque part dans le coin.")
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
/*< 32>*/ 		printf(/* textboxtype: 73, unk: 1, line: 43 */ "Excuse‐moi, mais tu pourrais pas t'en occuper\nencore une fois ?")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00161e56>En voilà d'autres... C'est agaçant...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 73, line: 23 */ "Je t'attendais ! Amène‐moi au sommet ! Et que\nça saute !")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x001b2215>Il y a bien que pour la chasse au trésor que\n<color blue<Tino>coloroff> montre de la volonté...")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x001a200f>Ah... T'es le p'tit gars de l'autre fois !<pause 15>\n\n\n\n<0x10009:0x001b2209>Héhéhé ! T'inquiète, y a pas de lézard.\n\n\n\nMon frangin m'a capté quand je me suis planté\ndans les ruines.\n\n\n<0x10009:0x001b1eff>Mais il s'est retrouvé dans le même pétrin, alors\non est quittes !\n\n\n<0x10009:0x001a0a12>Dis‐moi plutôt... T'aurais pas vu <color blue<Tino >coloroff>dans le\ncoin ?\n[1-]Il est là‐bas[2-]Non")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x001b0a12>Ah bon ? Alors, tant mieux.\n\n\n\nC'est juste que ça fait un bail que je l'ai pas vu.\n\n\n\n<0x10009:0x001b160f>J'avais peur qu'il soit encore allé se fourrer\ndans un sale pétrin...\n\n\n<0x10009:0x001b16ff>Il faut toujours être sur son dos !")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x001b2207>C'est pas possible, ça...<pause 20> Il a encore dû partir tout\nseul à la chasse au trésor !\n\n\nMon frangin lui a pourtant dit que c'était\ndangereux d'agir en solo !\n\n\n<0x10009:0x001b0009>Enfin, je suppose que c'est son instinct de\n<color blue<chasseur de trésor >coloroff>qui veut ça.\n\n\nSi tu vois <color blue<Tino>coloroff> quelque part, dis‐lui que je le\ncherchais !")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 73, line: 44 */ "<0x10009:0x00171908>Oh ! Bien joué ! Bon, j'y vais !")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000064>Hé ! Tu m'as pas oublié, j'espère ! Vérifie ma\nposition sur ta <color red<carte >coloroff>avec (-) !<0x10011:0x02cd>")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x000d0509>Voyons, où est‐ce que je vais pouvoir aller\nchercher des trésors maintenant...?")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10008:0x01cd><0x10009:0x000e1008>Tiens, frangin ! T'es encore vivant ?!\n\n\n\n<0x10009:0x0011110b>On dirait que t'as retrouvé tout ton\néquipement ! Je savais que tu y\narriverais !\n\nAlors ?<pause 20> T'as trouvé des trésors ?\n[1-]Des montagnes ![2-]Rien du tout...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000e0505>Vraiment ? T'es un sacré veinard !\n\n\n\n<0x10009:0x000e1f0a>Mais le monde est vaste ! Je suis sûr qu'il y a\nencore des trésors qui dorment un peu partout.\n\n\nJ'suis pas du genre pessimiste ! La prochaine\nfois, moi aussi je toucherai le gros lot !")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x000e040a>Ah bon ? Y avait rien d'intéressant ? C'est pas\nde bol...\n\n\n<0x10009:0x000f0508>Bah, t'en fais pas, va ! Le monde est vaste !\nIl y a encore plein de trésors qui attendent !")
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
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Je vais poursuivre mon voyage et mes\nrecherches. Nous nous croiserons\nsûrement à nouveau.")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00181702>Alors, tu as trouvé quelque chose à l'intérieur ?\n[1-]Plein de\npièges[2-]Plein de\nmonstres")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00161e56>Ah... Ah bon...? Dans ce cas, je te laisse explorer\nl'intérieur.\n\n\n<0x10009:0x00080bff>Moi, je vais bientôt repartir pour poursuivre\nmes recherches ailleurs. Je suis sûr qu'on se\nreverra.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00161e56>Ah... Ah bon...? Dans ce cas, je te laisse explorer\nl'intérieur.\n\n\n<0x10009:0x00080bff>Au fait, mon instinct me dit qu'il y a un <color yellow<cube\nde la Déesse >coloroff>tout près d'ici.\n\n\nEt mon instinct me trompe rarement. Si j'étais\ntoi, je chercherais bien dans les environs.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00171908>Ouah ! T'es vraiment impressionnant !\nTu peux vraiment tout faire !\n\n\n<0x10009:0x00080bff>Je te laisse passer devant. Vas‐y, entre !")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 73, unk: 1, line: 49 */ "<0x10009:0x00181707>Un <color red<grand récipient >coloroff>qui pourrait contenir\nbeaucoup d'<color red<eau>coloroff>... Où est‐ce qu'on pourrait\ntrouver ça ?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00181707>Comment faire pour donner assez d'<color red<eau >coloroff>à ce\ntruc ? Il en faudrait beaucoup... et aussi un\n<color red<grand récipient>coloroff>...\n\n<0x10009:0x00161eff>Tu as visité un tas d'endroits différents durant\nton aventure. T'aurais pas une idée ?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "Tu as vu ça ? C'est vraiment très louche, tout\nça...\n\n\n<0x10009:0x00171908>C'est un peu beaucoup pour un simple <color yellow<cube de\nla Déesse>coloroff>. Il doit y avoir <color red<quelque chose de très\nimportant >coloroff>caché par ici.")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 73, unk: 1, line: 46 */ "<0x10009:0x00161eff>Et cette fois, elle est vraiment énorme...\nJe pense pas qu'un simple <color yellow<flacon >coloroff>suffira.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 0, unk: 73, line: 47 */ "<0x10009:0x00000007>Hmm...<pause 15><0x10009:0x00181700> Tu aurais pas un <color red<grand récipient<sound 4> >coloroff>qui\npourrait te permettre de verser de l'eau\nlà‐dessus ?\n\n<0x10009:0x00161eff>Et il faudrait aussi beaucoup d'<color red<eau>coloroff> pour le\nremplir... Hmm... Comment faire ?")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 73, unk: 1, line: 25 */ "C'est là‐dessus qu'il faut verser l'eau ? OK, je\nm'en occupe !")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "Nous sommes arrivés au volcan d'Ordinn.\n\n\n\nÀ l'aide de la <color red<détection>coloroff>, vous pouvez rechercher\nl'entrée de l'épreuve qui vous permettra de trouver\nla flamme sacrée.")
          }

