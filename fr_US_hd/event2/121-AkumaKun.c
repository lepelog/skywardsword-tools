          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00150c09>Non! Arrêtez! N'ouvrez surtout pas ce coffre!\nIl y a quelque chose d'horrible à l'intérieur!\n[1-]Quoi donc?[2-]Tant pis!")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00130800>Dans ce coffre se trouve la <color yellow<médaille maléfique>coloroff>.\nUn objet maudit, doté de pouvoirs très\npuissants...\n\nSi vous la portez, vous trouverez plus de rubis\n<0x10009:0x00150c00>et de trésors!\n\n\n<0x10009:0x00140a00>Mais, mais... diantre... Je ne suis pas capable\nde le dire...\n[1-]Intéressant![2-]Mais quoi?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00130800>Ça peut paraître intéressant de prime abord,\nmais ce n'est pas intéressant. Pas du tout.\nCroyez‐moi.")
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00150c00>Je vous l'ai dit, elle est maléfique!\n\n\n\n<0x10009:0x00140a00>Quiconque possède cette médaille <color red<ne peut plus\nouvrir sa sacoche>coloroff>!\n\n\nVous ne pourrez plus utiliser vos potions ou\nvotre bouclier! C'est un trésor empoisonné!\n\n\n<0x10009:0x00150c00>Alors n'ouvrez surtout pas ce coffre!\nCe serait trop terrible!")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00130800>Je vous ai dit de ne pas l'ouvrir!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Pitié, non! Ne me faites pas mal!\n\n\n\nJe... Je ne suis pas méchant, même si\nj'en ai l'air!")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000005>Laissez‐moi vous expliquer.\n\n\n\nJe m'appelle <color blue<Morcégo>coloroff>, je suis un monstre et\nje vis ici dans cette humble demeure,\nsous Célesbourg.\n\nTout le monde semble me craindre, alors que je\nsuis un gentil monstre! Je n'ai vraiment aucune\nenvie de terroriser la population, croyez-moi.\n\nCette petite fille est la seule qui n'a pas peur de\nmoi et elle vient souvent me rendre visite. Ça\nme fait tellement plaisir de la recevoir!\n\nJ'aimerais tellement être ami avec tous\nles habitants de Célesbourg...\nC'est mon vœu le plus cher.\n\nMais comme vous pouvez le constater, je fais\npeur à voir et personne n'ose m'approcher...\nC'est difficile de briser la glace avec une\nallure pareille.")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "J'aimerais tellement que les gens m'apprécient\npour ce que je suis...\n\n\nCréer des liens d'amitié avec les gens du village\nme réjouirait, mais mon apparence monstrueuse\nfait fuir absolument tout le monde...\n\nAh, au fait... Je voulais te parler d'une ancienne\nlégende que tous les monstres comme moi\nconnaissent...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "On dit qu'il existe des <color yellow<cristaux de gratitude\n>coloroff>qui apparaissent quand on rend un\nhumain heureux...")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "... et que si un monstre réussit à rassembler un\ngrand nombre de ces <color yellow<cristaux de gratitude>coloroff>,\nil peut devenir humain!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000007>Devenir humain est mon vœu le plus cher!\n\n\n\nJ'ai l'impression que vous avez un bien grand\ncœur. Je le vois dans vos yeux.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "Alors que diriez‐vous de collecter des <color yellow<cristaux\nde gratitude >coloroff>pour moi?\n[1-]Bien sûr![2]Hors de\nquestion")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "C'est vrai?! Vous acceptez de m'aider?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "On dit que le meilleur moyen d'obtenir des\n<color yellow<cristaux de gratitude>coloroff> est de rendre\nservice aux autres.")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "Par ailleurs, à Célesbourg et sur les îles habitées\ndans le ciel, il arrive parfois que la gratitude\ndébordante s'échappe des gens!\n\nÀ vous qui avez le cœur pur, je vais vous donner\nla capacité de <color green<voir >coloroff>les <color yellow<cristaux de gratitude>coloroff>!\n\n\nMais attention, les cristaux qui sont tombés ne\nsont visibles que de <color red<nuit>coloroff>. Alors attendez la\n<color red<nuit>coloroff> tombée pour les chercher.")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Je vous récompenserai, bien naturellement...\nMerci mille fois!")
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
/*<  6>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "Oh, s'il vous plaît... Je vous en supplie.\nFaites‐moi cette faveur...\n[1-]D'accord...[2]J'ai dit\nnon!")
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
/*<159>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000a07>Découvrir que mon existence elle‐même\ncausait du tort à tout le monde a été un\nchoc pour moi...\n\nMais à présent, je sens que je suis devenu\nun habitant de Célesbourg à part entière.\nEncore merci à vous!")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000005>Oh, <heroname>! Il y avait bien\nlongtemps que je n'étais plus sorti me\npromener. Il n'y a plus aucun monstre par ici.\n\nEst‐ce que ça aurait un rapport avec le fait que\nje sois devenu humain?\n[1-]C'est\npossible[2-]Aucun\nrapport")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000856>Oui, je m'en doutais un peu...")
          			flw_157:
/*<157>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00080800>Lorsque j'étais un monstre, j'émettais malgré\nmoi une aura maléfique...\n\n\nMais à présent que je suis humain, elle a\ncomplètement disparu.\n\n\n<0x10009:0x00150a07>Et grâce à cela, les habitants de Célesbourg\npeuvent mener une vie paisible. Sans vous,\nrien de tout cela n'aurait été possible.")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000814>Vous pouvez être franc avec moi, vous savez.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00130808>Diantre! Vous l'avez ouvert!\n\n\n\nLa curiosité est un vilain défaut! Mais c'est un\ntrait humain... Un trait qui vous rend plutôt\nintéressants, finalement...\n\nVous ne pouvez plus ouvrir votre sacoche\nquand vous portez cette médaille!\nMais ne vous en faites pas.\n\nVous pourrez l'ouvrir à nouveau si vous\nrangez la médaille à la <color blue<consigne>coloroff>.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000a0c05>Les mots me manquent pour vous remercier!\nJe peux enfin me promener à Célesbourg,\ncomme tout le monde! Et les gens n'auront\nplus peur de moi!")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>Alors, qu'en pensez‐vous? Vous êtes surpris?\nVous ne m'avez pas reconnu, pas vrai?")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 0, unk: 0, line: 38 */ "Je... En fait, j'ai l'impression d'être dans le\ncorps de quelqu'un d'autre!")
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
/*< 36>*/ 											printf(/* textboxtype: 0, unk: 1, line: 40 */ "Vous avez récolté tous les <color yellow<80 cristaux\nde gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Oh merci! Merci mille fois!\n\n\n\nVeuillez accepter ceci, avec toute ma gratitude.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf(/* textboxtype: 1, unk: 0, line: 36 */ "Ce n'est pas grand‐chose, mais j'espère que\nça vous sera utile.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf(/* textboxtype: 0, unk: 0, line: 29 */ "Je n'arrive pas à y croire! J'ai assez de\n<color yellow<cristaux de gratitude >coloroff>pour devenir humain!\n\n\n<0x10009:0x00070809>Je me demande si ça va marcher... Et si ça ne\nmarchait pas? J'en ai des palpitations...")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff>!\n\nRevenez me voir quand vous en aurez\nobtenu <color red<80>coloroff>. Merci d'avance!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! Vous avez rassemblé un grand nombre\nde <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00090d0b>Cela ne suffit pas à exprimer à quel point je\nvous suis reconnaissant... Je voudrais vous en\ndonner tellement plus!\n\n<0x10009:0x00070807>Tenez, en voici un autre!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il ne me manque que quelques <color yellow<cristaux\nde gratitude>coloroff> pour devenir humain...\nNe m'abandonnez pas, j'ai besoin de vous!")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00090d0b>Oh! Mais vous avez encore beaucoup\nde <color yellow<cristaux de gratitude>coloroff>!\n\n\nVous en avez rassemblé pas moins de <color red<80>coloroff>!\nCela veut dire que vous avez trouvé tous\nles <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Merci! Cent fois merci! Mille fois merci!\n\n\n\nTenez, voici le dernier présent que j'ai à\nvous offrir.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff>!\n\nRevenez me voir quand vous en aurez\nobtenu <color red<70>coloroff>. Merci d'avance!")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! Vous avez rassemblé un grand nombre\nde <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf(/* textboxtype: 1, unk: 0, line: 24 */ "Il ne me manque que quelques <color yellow<cristaux\nde gratitude>coloroff> pour devenir humain...\nNe m'abandonnez pas, j'ai besoin de vous!")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh, là, là! Mais vous m'avez encore apporté\nbeaucoup de <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en guise de\nremerciement!")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff>!\n\nRevenez me voir quand vous en aurez\nobtenu <color red<50>coloroff>. Merci d'avance!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! Vous avez rassemblé un grand nombre\nde <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf(/* textboxtype: 0, unk: 0, line: 23 */ "Vous m'avez déjà rapporté tellement de\n<color yellow<cristaux de gratitude>coloroff>, merci!\n\n\nMais il m'en faut encore un peu plus...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh, là, là! Mais vous m'avez encore apporté\nbeaucoup de <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en guise de\nremerciement!")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff>!\n\nRevenez me voir quand vous en aurez\nobtenu <color red<40>coloroff>. Merci d'avance!")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! Vous avez rassemblé un grand nombre\nde <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf(/* textboxtype: 0, unk: 0, line: 23 */ "Vous m'avez déjà rapporté tellement de\n<color yellow<cristaux de gratitude>coloroff>, merci!\n\n\nMais il m'en faut encore un peu plus...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh, là, là! Mais vous m'avez encore apporté\nbeaucoup de <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en guise de\nremerciement!")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff>!\n\nRevenez me voir quand vous en aurez\nobtenu <color red<30>coloroff>. Merci beaucoup!")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! Vous avez rassemblé un grand nombre\nde <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf(/* textboxtype: 0, unk: 1, line: 22 */ "On dirait qu'il me faut plus de <color yellow<cristaux\nde gratitude >coloroff>pour devenir humain.\n\n\nJe vous en prie... Vous êtes le seul à\npouvoir m'aider...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh, là, là! Mais vous m'avez encore apporté\nbeaucoup de <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en guise de\nremerciement!")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000005>J'aimerais tellement être humain...\nApportez‐moi vite d'autres <color yellow<cristaux\nde gratitude>coloroff>!\n\nRevenez me voir quand vous en aurez\nobtenu <color red<dix>coloroff>.")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! Vous avez rassemblé un grand nombre\nde <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Tenez. En guise de remerciement.")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 1, line: 22 */ "On dirait qu'il me faut plus de <color yellow<cristaux\nde gratitude >coloroff>pour devenir humain.\n\n\nJe vous en prie... Vous êtes le seul à\npouvoir m'aider...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh, là, là! Mais vous m'avez encore apporté\nbeaucoup de <color yellow<cristaux de gratitude>coloroff>!\n\n\n<0x10009:0x00070807>Acceptez ce modeste présent en guise de\nremerciement!")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000005>Aaah... Combien de temps vais‐je encore\ndevoir patienter? Trouvez des <color yellow<cristaux de\ngratitude>coloroff>, par pitié! J'ai tellement hâte\nde devenir humain!\n<color red<Cinq cristaux>coloroff> serait un bon début... Plus vous\naidez les autres, plus vous en obtiendrez!")
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000005>Je vais raccompagner cette petite fille chez elle,\nvous pouvez rassurer ses parents.\n\n\nEt surtout, n'oubliez pas d'amasser les <color yellow<cristaux\nde gratitude >coloroff>dont j'ai besoin. J'aimerais bien en\navoir <color red<cinq >coloroff>pour commencer.\n\nAidez les autres, et ils vous le rendront!")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000005>Oui, je vois que vous avez compris ce qu'étaient\nles <color yellow<cristaux de gratitude>coloroff>!<pause 20> Vous avez été très\nrapide à en trouver!\n\nS'il vous plaît, voulez-vous m'en ramener <color red<cinq>coloroff>.\n\n\n\nSoyez gentil avec les gens, et vous en recevrez\nbeaucoup!")
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
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000b>C'est... Oh!<0x10005:0x003c0000>")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	wait_frames(40)
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004><0x10008:0x02cd>Aaargh!<0x10005:0x001e0000>")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10006:0xfccd>...<0x10006:0x00cd> <0x10009:0x00000007>Alors, de quoi j'ai l'air, <heroname>?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "... J'ai compris... Pas la peine de répondre,\nvotre visage en dit long.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "J'ai tellement changé que ça vous laisse\nbouche bée!")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Je vous suis éternellement reconnaissant\nde ce que vous avez fait pour moi...\n\n\nÀ partir d'aujourd'hui, je vais vivre en harmonie\navec tous les habitants, comme une personne\ntout à fait normale.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00080a0c>Aah, toute cette lumière et ces choses qui\ntournent, c'est superbe. Aah, je suis aux anges.")
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000005>Oh, <heroname>! Encore merci pour ce\nque vous avez fait pour moi.\n\n\nJ'ai toujours eu envie de venir faire un tour\nau bazar.\n\n\n<0x10009:0x00150c00>Regardez! Personne n'a peur de moi!\nJe n'ai jamais été aussi heureux!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

