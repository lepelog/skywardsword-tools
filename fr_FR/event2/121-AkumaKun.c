          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00150c09>Non ! Arrêtez !\nN'ouvrez surtout pas ce coffre !\n[1-]Pourquoi ?[2-]Mais si !")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00130800>Dans ce coffre se trouve un objet\nmaléfique : la <color yellow<médaille démoniaque>coloroff>.\n\n\nSi vous la portez, vous trouverez plus\nde rubis <0x10009:0x00150c00>et de trésors !\n\n\n<0x10009:0x00140a00>Mais, en revanche... Hmm...\n[1-]Intéressant...[2-]Mais quoi ?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00130800>Non, ce n'est vraiment pas intéressant,\ncroyez‐moi...")
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00150c00>Je vous l'ai dit, elle est maléfique !\n\n\n\n<0x10009:0x00140a00>Quiconque possède cette médaille\n<color red<ne peut plus ouvrir sa sacoche >coloroff>!\n\n\nVous ne pourrez plus utiliser\nvos potions ou votre bouclier !\nC'est un trésor empoisonné !\n\n<0x10009:0x00150c00>Alors n'ouvrez surtout pas ce coffre !")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00130800>Je vous ai dit de ne pas l'ouvrir !")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Pitié, non !\nNe me faites pas mal !\n\n\nJe... Je ne suis pas méchant, même si\nj'en ai l'air !")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000005>Laissez‐moi vous expliquer.\n\n\n\nJe m'appelle <color blue<Morcego>coloroff>, je suis un\ndémon et je vis ici, à Célesbourg.\n\n\nMais ne vous méprenez pas, je suis\nun gentil démon !\n\n\nCette petite fille est la seule qui n'a\npas peur de moi et elle vient souvent\nme rendre visite.\n\nJ'aimerais tellement être ami avec tous\nles habitants de Célesbourg...\n\n\nMais comme vous pouvez le constater,\nje fais peur à voir et personne n'ose\nm'approcher...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "J'aimerais tellement que les gens\nm'apprécient pour ce que je suis...\n\n\nMais mon apparence monstrueuse\nfait fuir absolument tout le monde...\n\n\nIl existe cependant une légende\nque tous les démons comme moi\nconnaissent...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "On dit qu'il existe des <color yellow<cristaux de\ngratitude>coloroff>, qui apparaissent quand\non rend un humain heureux...")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "... et que si un démon réussit à\nrassembler un grand nombre de\nces <color yellow<cristaux de gratitude>coloroff>, il peut\ndevenir humain !")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000007>C'est mon vœu le plus cher !\n\n\n\nVous êtes quelqu'un d'altruiste,\nn'est‐ce pas ?")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "Alors que diriez‐vous de collecter des\n<color yellow<cristaux de gratitude >coloroff>pour moi ?\n[1-]Bien sûr ![2]Hors de\nquestion")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "C'est vrai ?! Vous acceptez ?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "On dit que le meilleur moyen d'obtenir\ndes <color yellow<cristaux de gratitude>coloroff> est de rendre\nservice aux autres.")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "Par ailleurs, à Célesbourg et sur les\nîles habitées dans le ciel, il arrive\nparfois que la gratitude débordante\ns'échappe des gens !\nÀ vous qui avez le cœur pur, je vais\nvous donner la capacité de <color green<voir >coloroff>les\n<color yellow<cristaux de gratitude>coloroff> !\n\nMais attention, les cristaux qui sont\ntombés ne sont visibles que de <color red<nuit>coloroff>.\nAlors attendez la <color red<nuit>coloroff> tombée pour les\nchercher.")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Je vous récompenserai, bien\nnaturellement... Merci mille fois !")
/*<  2>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 65>*/ 		scene_flags[0 'Skyloft'][78 /* 0x8 40 */] = true;
/*< 11>*/ 		switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          		  case 0:
/*< 12>*/ 			story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          			flw_167:
/*<167>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
          			goto flw_167
          		}
          	  case 1:
          		flw_81:
/*< 81>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 6, 'param3': 13}
/*<  6>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "Oh, s'il vous plaît...\nFaites‐moi cette faveur...\n[1-]D'accord...[2]J'ai dit\nnon !")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_82
          		  case 1:
          			goto flw_81
          		}
          	}
          }

          void entrypoint_121_03() {
/*<152>*/ 	start()
/*<158>*/ 	switch (story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */]) {
          	  case 0:
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000a07>Découvrir que mon existence\nelle‐même causait du tort à tout le\nmonde a été un choc pour moi...\n\nMais à présent, je me sens comme un\nhabitant de Célesbourg à part entière.\nEncore merci à vous !")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000005>Oh, <heroname> !\nIl y avait bien longtemps que je n'étais\nplus sorti me promener. Il n'y a plus\naucun monstre par ici.\nEst‐ce que ça aurait un rapport avec le\nfait que je sois devenu humain ?\n[1-]C'est\npossible[2-]Aucun\nrapport")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000856>Oui, je m'en doutais un peu...")
          			flw_157:
/*<157>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00080800>Lorsque j'étais un démon, j'émettais\nmalgré moi une aura maléfique...\n\n\nMais à présent que je suis humain, elle\na complètement disparu.\n\n\n<0x10009:0x00150a07>Et grâce à cela, les habitants de\nCélesbourg peuvent mener une vie\npaisible. Sans vous, rien de tout cela\nn'aurait été possible.")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000814>Vous pouvez être franc avec moi,\nvous savez.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00130808>Oh non ! Vous l'avez ouvert !\n\n\n\nLa curiosité est un vilain défaut !\nMais c'est un trait humain...\n\n\nVous ne pouvez plus ouvrir votre\nsacoche quand vous portez cette\nmédaille !\n\nVous ne pourrez l'ouvrir à nouveau\nque si vous rangez la médaille à\nla <color blue<consigne>coloroff>.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000a0c05>Les mots me manquent pour vous\nremercier ! Je peux enfin me promener\nà Célesbourg, comme tout le monde !")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000005>Alors, qu'en pensez‐vous ?\nVous ne m'avez pas reconnu, pas vrai ?")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "Je...\nJ'ai l'impression d'être dans le corps\nde quelqu'un d'autre !")
/*<124>*/ 					scene_flags[0 'Skyloft'][79 /* 0x8 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				switch (scene_flags[70 /* 0x9 40 */]) {
          				  case 0:
/*< 41>*/ 					switch (scene_flags[71 /* 0x9 80 */]) {
          					  case 0:
/*< 46>*/ 						switch (scene_flags[72 /* 0x8 01 */]) {
          						  case 0:
/*< 52>*/ 							switch (scene_flags[73 /* 0x8 02 */]) {
          							  case 0:
/*< 55>*/ 								switch (scene_flags[74 /* 0x8 04 */]) {
          								  case 0:
/*< 58>*/ 									switch (scene_flags[75 /* 0x8 08 */]) {
          									  case 0:
/*< 35>*/ 										switch (context_related2(6)) {
          										  case 0:
/*< 98>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3083, 'next': 36, 'param3': 13}
/*< 36>*/ 											printf(/* textboxtype: 1, unk: 0, line: 40 */ "Vous avez récolté tous les <color yellow<80 cristaux\nde gratitude >coloroff>!\n\n\n<0x10009:0x00070807>Oh merci ! Merci mille fois !\n\n\n\nVeuillez accepter ceci, avec toute\nma gratitude.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf(/* textboxtype: 1, unk: 0, line: 36 */ "Ce n'est pas grand‐chose, mais j'espère\nque ça vous sera utile.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf(/* textboxtype: 1, unk: 0, line: 29 */ "Je n'arrive pas à y croire ! J'ai assez\nde <color yellow<cristaux de gratitude >coloroff>pour devenir\nhumain !\n\n<0x10009:0x00070809>Je me demande si ça va marcher...\nEt si ça ne marchait pas ?\nJ'ai le cœur qui bat la chamade...")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff> !\n\nRevenez me voir quand vous en aurez\nobtenu <color red<80>coloroff>. Merci d'avance !")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh ! Vous avez rassemblé un grand\nnombre de <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00090d0b>Cela ne suffit pas à exprimer à quel\npoint je vous suis reconnaissant...\n\n\n<0x10009:0x00070807>Tenez, en voici un autre !")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il ne me manque que quelques\n<color yellow<cristaux de gratitude>coloroff> pour devenir\nhumain...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00090d0b>Oh ! Mais vous avez encore beaucoup\nde <color yellow<cristaux de gratitude >coloroff>!\n\n\n<color red<80>coloroff>... Mais alors, vous avez rassemblé\ntous les<color yellow< cristaux de gratitude >coloroff>!\n\n\n<0x10009:0x00070807>Merci ! Cent fois merci !\nMille fois merci !\n\n\nTenez, voici le dernier présent\nque j'ai à vous offrir.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff> !\n\nRevenez me voir quand vous en aurez\nobtenu <color red<70>coloroff>. Merci d'avance !")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh ! Vous avez rassemblé un grand\nnombre de <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il ne me manque que quelques\n<color yellow<cristaux de gratitude>coloroff> pour devenir\nhumain...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh ! Mais vous avez encore beaucoup\nde <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en\nremerciement !")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff> !\n\nRevenez me voir quand vous en aurez\nobtenu <color red<50>coloroff>. Merci d'avance !")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh ! Vous avez rassemblé un grand\nnombre de <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf(/* textboxtype: 1, unk: 0, line: 23 */ "Vous m'avez déjà rapporté tellement\nde <color yellow<cristaux de gratitude>coloroff>, merci !\n\n\nMais il m'en faut encore un peu plus...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh ! Mais vous avez encore beaucoup\nde <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en\nremerciement !")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff> !\n\nRevenez me voir quand vous en aurez\nobtenu <color red<40>coloroff>. Merci d'avance !")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh ! Vous avez rassemblé un grand\nnombre de <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "Vous m'avez déjà rapporté tellement\nde <color yellow<cristaux de gratitude>coloroff>, merci !\n\n\nMais il m'en faut encore un peu plus...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh ! Mais vous avez encore beaucoup\nde <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en\nremerciement !")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff> !\n\nRevenez me voir quand vous en aurez\nobtenu <color red<30>coloroff>. Merci beaucoup !")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh ! Vous avez rassemblé un grand\nnombre de <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "On dirait qu'il me faut plus de <color yellow<cristaux\nde gratitude >coloroff>pour devenir humain.\n\n\nJe vous en prie... Vous êtes le seul à\npouvoir m'aider...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh ! Mais vous avez encore beaucoup\nde <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en\nremerciement !")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff> !\n\nRevenez me voir quand vous en aurez\nobtenu <color red<dix>coloroff>.")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh ! Vous avez rassemblé un grand\nnombre de <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0, line: 22 */ "On dirait qu'il me faut plus de <color yellow<cristaux\nde gratitude >coloroff>pour devenir humain.\n\n\nJe vous en prie... Vous êtes le seul à\npouvoir m'aider...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh ! Mais vous avez encore beaucoup\nde <color yellow<cristaux de gratitude>coloroff> !\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en\nremerciement !")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000005>Aaah... Combien de temps vais‐je\nencore devoir patienter ? Trouvez des\n<color yellow<cristaux de gratitude>coloroff>, par pitié !\n\n<color red<Cinq cristaux>coloroff> serait un bon début...\nPlus vous aidez les autres, plus vous\nen obtiendrez !")
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000005>Je vais raccompagner cette petite fille\nchez elle, vous pouvez rassurer ses\nparents.\n\nSinon, avez‐vous trouvé des <color yellow<cristaux\nde gratitude >coloroff>?\n\n\nJ'aimerais bien en avoir <color red<cinq >coloroff>pour\ncommencer. Aidez les autres, et ils\nvous le rendront !")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000005>Oui, je vois que vous avez compris ce\nqu'étaient les <color yellow<cristaux de gratitude >coloroff>!<pause 20>\nVous avez été très rapide à en trouver !\n\nS'il vous plaît, rapportez‐m'en <color red<cinq>coloroff>.\n\n\n\nSoyez gentil avec les gens, et vous en\nrecevrez beaucoup !")
/*<131>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
          								goto flw_122
          							}
          						}
          					}
          				}
          			}
          		  case 1:
          			goto flw_13
          		}
          	}
          }

          void entrypoint_121_00() {
          	start()
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 18, 'param3': 32}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x0000000b>C'est... Oh !<0x10005:0x003c0000>")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	wait_frames(40)
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 1, line: 31 */ "<0x10009:0x00000004><0x10008:0x02cd>Aaargh !<0x10005:0x001e0000>")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10006:0xfccd>...<0x10006:0x00cd>\n<0x10009:0x00000007>Alors, de quoi j'ai l'air,\n<heroname> ?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "... J'ai compris...\nPas la peine de répondre, votre visage\nen dit long.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "J'ai tellement changé que ça vous laisse\nbouche bée !")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "Je vous suis éternellement\nreconnaissant de ce que vous\navez fait pour moi...\n\nÀ partir d'aujourd'hui, je vais vivre\nen harmonie avec tous les habitants !")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00080a0c>Aah, toute cette lumière et ces\nchoses qui tournent, c'est superbe.\nAah, je suis aux anges.")
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000005>Oh, <heroname> !\nEncore merci pour ce que vous avez\nfait pour moi.\n\nJ'ai toujours eu envie de venir faire\nun tour au marché couvert.\n\n\n<0x10009:0x00150c00>Regardez ! Personne n'a peur de moi !\nJe n'ai jamais été aussi heureux !")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

