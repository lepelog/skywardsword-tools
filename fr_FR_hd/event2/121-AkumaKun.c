          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf("\x0E\x01\x09\x04\x15\xC09Non ! Arrêtez ! N'ouvrez surtout pas ce coffre !\n[1]Pourquoi ?[2]Mais si !")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf("\x0E\x01\x09\x04\x13\x800Dans ce coffre se trouve un objet maléfique :\nla <y<médaille démoniaque>>.\n\n\nSi vous la portez, vous trouverez plus de rubis\n\x0E\x01\x09\x04\x15\xC00et de trésors !\n\n\n\x0E\x01\x09\x04\x14\xA00Mais, en revanche... Hmm...\n[1]Intéressant...[2]Mais quoi ?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x13\x800Non, ce n'est vraiment pas intéressant,\ncroyez\x2010moi...")
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x15\xC00Je vous l'ai dit, elle est maléfique !\n\n\n\n\x0E\x01\x09\x04\x14\xA00Quiconque possède cette médaille <r<ne peut plus\nouvrir sa sacoche >>!\n\n\nVous ne pourrez plus utiliser vos potions ou\nvotre bouclier ! C'est un trésor empoisonné !\n\n\n\x0E\x01\x09\x04\x15\xC00Alors n'ouvrez surtout pas ce coffre !")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf("\x0E\x01\x09\x04\x13\x800Je vous ai dit de ne pas l'ouvrir !")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x03Pitié, non ! Ne me faites pas mal !\n\n\n\nJe... Je ne suis pas méchant, même si j'en ai\nl'air !")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x00\x05Laissez\x2010moi vous expliquer.\n\n\n\nJe m'appelle <b<Morcego>>, je suis un démon et je vis\nici, à Célesbourg.\n\n\nMais ne vous méprenez pas, je suis un gentil\ndémon !\n\n\nCette petite fille est la seule qui n'a pas peur de\nmoi et elle vient souvent me rendre visite.\n\n\nJ'aimerais tellement être ami avec tous les\nhabitants de Célesbourg...\n\n\nMais comme vous pouvez le constater, je fais\npeur à voir et personne n'ose m'approcher...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf("J'aimerais tellement que les gens m'apprécient\npour ce que je suis...\n\n\nMais mon apparence monstrueuse fait fuir\nabsolument tout le monde...\n\n\nIl existe cependant une légende que tous les\ndémons comme moi connaissent...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf("On dit qu'il existe des <y<cristaux de gratitude>>,\nqui apparaissent quand on rend un humain\nheureux...")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf("... et que si un démon réussit à rassembler un\ngrand nombre de ces <y<cristaux de gratitude>>, il\npeut devenir humain !")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x07C'est mon v\x153u le plus cher !\n\n\n\nVous êtes quelqu'un d'altruiste, n'est\x2010ce pas ?")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf("Alors que diriez\x2010vous de collecter des <y<cristaux\nde gratitude >>pour moi ?\n[1]Bien sûr ![2-]Hors de\nquestion")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf("C'est vrai ?! Vous acceptez ?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf("On dit que le meilleur moyen d'obtenir des\n<y<cristaux de gratitude>> est de rendre service\naux autres.")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf("Par ailleurs, à Célesbourg et sur les îles habitées\ndans le ciel, il arrive parfois que la gratitude\ndébordante s'échappe des gens !\n\nÀ vous qui avez le c\x153ur pur, je vais vous donner\nla capacité de <g<voir >>les <y<cristaux de gratitude>> !\n\n\nMais attention, les cristaux qui sont tombés ne\nsont visibles que de <r<nuit>>. Alors attendez la <r<nuit\n>>tombée pour les chercher.")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf("Je vous récompenserai, bien naturellement...\nMerci mille fois !")
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
/*<  6>*/ 		printf("Oh, s'il vous plaît... Faites\x2010moi cette faveur...\n[1]D'accord...[2-]J'ai dit\nnon !")
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
/*<159>*/ 		printf("\x0E\x01\x09\x04\x00\xA07Découvrir que mon existence elle\x2010même causait\ndu tort à tout le monde a été un choc pour\nmoi...\n\nMais à présent, je me sens comme un habitant\nde Célesbourg à part entière. Encore merci à\nvous !")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x05Oh, Link ! Il y avait bien\nlongtemps que je n'étais plus sorti\nme promener. Il n'y a plus aucun\nmonstre par ici.\nEst\x2010ce que ça aurait un rapport avec le fait que\nje sois devenu humain ?\n[1]C'est\npossible[2]Aucun\nrapport")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x00\x856Oui, je m'en doutais un peu...")
          			flw_157:
/*<157>*/ 			printf("\x0E\x01\x09\x04\x08\x800Lorsque j'étais un démon, j'émettais malgré moi\nune aura maléfique...\n\n\nMais à présent que je suis humain, elle a\ncomplètement disparu.\n\n\n\x0E\x01\x09\x04\x15\xA07Et grâce à cela, les habitants de Célesbourg\npeuvent mener une vie paisible. Sans vous,\nrien de tout cela n'aurait été possible.")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf("\x0E\x01\x09\x04\x00\x814Vous pouvez être franc avec moi, vous savez.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x13\x808Oh non ! Vous l'avez ouvert !\n\n\n\nLa curiosité est un vilain défaut ! Mais c'est un\ntrait humain...\n\n\nVous ne pouvez plus ouvrir votre sacoche quand\nvous portez cette médaille !\n\n\nVous ne pourrez l'ouvrir à nouveau que si vous\nrangez la médaille à la <b<consigne>>.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf("\x0E\x01\x09\x04\n\xC05Les mots me manquent pour vous remercier !\nJe peux enfin me promener à Célesbourg,\ncomme tout le monde !")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x05Alors, qu'en pensez\x2010vous ? Vous ne m'avez pas\nreconnu, pas vrai ?")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Je... J'ai l'impression d'être dans le corps de\nquelqu'un d'autre !")
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
/*< 36>*/ 											printf("Vous avez récolté tous les <y<80 cristaux de\ngratitude >>!\n\n\n\x0E\x01\x09\x04\x07\x807Oh merci ! Merci mille fois !\n\n\n\nVeuillez accepter ceci, avec toute ma gratitude.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf("Ce n'est pas grand\x2010chose, mais j'espère que ça\nvous sera utile.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf("Je n'arrive pas à y croire ! J'ai assez de\n<y<cristaux de gratitude >>pour devenir humain !\n\n\n\x0E\x01\x09\x04\x07\x809Je me demande si ça va marcher... Et si ça\nne marchait pas ? J'ai le c\x153ur qui bat la\nchamade...")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf("\x0E\x01\x09\x04\x00\x05J'aimerais tellement être humain...\nApportez\x2010moi vite d'autres <y<cristaux\nde gratitude>> !\n\nRevenez me voir quand vous en aurez\nobtenu <r<80>>. Merci d'avance !")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BOh ! Vous avez rassemblé un grand nombre\nde <y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Tenez. En guise de remerciement.")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BCela ne suffit pas à exprimer à quel point je\nvous suis reconnaissant...\n\n\n\x0E\x01\x09\x04\x07\x807Tenez, en voici un autre !")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf("Il ne me manque que quelques <y<cristaux de\ngratitude>> pour devenir humain...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf("\x0E\x01\x09\x04\x09\xD0BOh ! Mais vous avez encore beaucoup de\n<y<cristaux de gratitude >>!\n\n\n<r<80>>... Mais alors, vous avez rassemblé tous les<y<\ncristaux de gratitude >>!\n\n\n\x0E\x01\x09\x04\x07\x807Merci ! Cent fois merci ! Mille fois merci !\n\n\n\nTenez, voici le dernier présent que j'ai à vous\noffrir.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf("\x0E\x01\x09\x04\x00\x05J'aimerais tellement être humain...\nApportez\x2010moi vite d'autres <y<cristaux\nde gratitude>> !\n\nRevenez me voir quand vous en aurez\nobtenu <r<70>>. Merci d'avance !")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BOh ! Vous avez rassemblé un grand nombre\nde <y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Tenez. En guise de remerciement.")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf("Il ne me manque que quelques <y<cristaux de\ngratitude>> pour devenir humain...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BOh ! Mais vous avez encore beaucoup de\n<y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Acceptez ce modeste présent en remerciement !")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x05J'aimerais tellement être humain...\nApportez\x2010moi vite d'autres <y<cristaux\nde gratitude>> !\n\nRevenez me voir quand vous en aurez\nobtenu <r<50>>. Merci d'avance !")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BOh ! Vous avez rassemblé un grand nombre\nde <y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Tenez. En guise de remerciement.")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf("Vous m'avez déjà rapporté tellement de <y<cristaux\nde gratitude>>, merci !\n\n\nMais il m'en faut encore un peu plus...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BOh ! Mais vous avez encore beaucoup de\n<y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Acceptez ce modeste présent en remerciement !")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf("\x0E\x01\x09\x04\x00\x05J'aimerais tellement être humain...\nApportez\x2010moi vite d'autres <y<cristaux\nde gratitude>> !\n\nRevenez me voir quand vous en aurez\nobtenu <r<40>>. Merci d'avance !")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BOh ! Vous avez rassemblé un grand nombre\nde <y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Tenez. En guise de remerciement.")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf("Vous m'avez déjà rapporté tellement de <y<cristaux\nde gratitude>>, merci !\n\n\nMais il m'en faut encore un peu plus...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BOh ! Mais vous avez encore beaucoup de\n<y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Acceptez ce modeste présent en remerciement !")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x05J'aimerais tellement être humain...\nApportez\x2010moi vite d'autres <y<cristaux\nde gratitude>> !\n\nRevenez me voir quand vous en aurez\nobtenu <r<30>>. Merci beaucoup !")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BOh ! Vous avez rassemblé un grand nombre\nde <y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Tenez. En guise de remerciement.")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf("On dirait qu'il me faut plus de <y<cristaux de\ngratitude >>pour devenir humain.\n\n\nJe vous en prie... Vous êtes le seul à pouvoir\nm'aider...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BOh ! Mais vous avez encore beaucoup de\n<y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Acceptez ce modeste présent en remerciement !")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf("\x0E\x01\x09\x04\x00\x05J'aimerais tellement être humain... \nApportez\x2010moi vite d'autres <y<cristaux\nde gratitude>> !\n\nRevenez me voir quand vous en aurez\nobtenu <r<dix>>.")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf("\x0E\x01\x09\x04\x09\xD0BOh ! Vous avez rassemblé un grand nombre\nde <y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Tenez. En guise de remerciement.")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf("On dirait qu'il me faut plus de <y<cristaux de\ngratitude >>pour devenir humain.\n\n\nJe vous en prie... Vous êtes le seul à pouvoir\nm'aider...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BOh ! Mais vous avez encore beaucoup de\n<y<cristaux de gratitude>> !\n\n\n\x0E\x01\x09\x04\x07\x807Acceptez ce modeste présent en remerciement !")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf("\x0E\x01\x09\x04\x00\x05Aaah... Combien de temps vais\x2010je encore devoir\npatienter ? Trouvez des <y<cristaux de gratitude>>,\npar pitié !\n\n<r<Cinq cristaux>> serait un bon début... Plus vous\naidez les autres, plus vous en obtiendrez !")
          							  case 1:
/*<123>*/ 								printf("\x0E\x01\x09\x04\x00\x05Je vais raccompagner cette petite fille chez elle,\nvous pouvez rassurer ses parents.\n\n\nSinon, avez\x2010vous trouvé des <y<cristaux de\ngratitude >>?\n\n\nJ'aimerais bien en avoir <r<cinq >>pour commencer.\nAidez les autres, et ils vous le rendront !")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf("\x0E\x01\x09\x04\x00\x05Oui, je vois que vous avez compris ce qu'étaient\nles <y<cristaux de gratitude >>!<pause14> Vous avez été très\nrapide à en trouver !\n\nS'il vous plaît, rapportez\x2010m'en <r<cinq>>.\n\n\n\nSoyez gentil avec les gens, et vous en recevrez\nbeaucoup !")
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
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x0BC'est... Oh !\x0E\x01\x05\x04<\x00")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 68, 'param3': 6}
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x04\x0E\x01\x08\x02\x2CDAaargh !\x0E\x01\x05\x04\x1E\x00")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í \x0E\x01\x09\x04\x00\x07Alors, de quoi j'ai l'air, Link ?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf("... J'ai compris... Pas la peine de répondre, votre\nvisage en dit long.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf("J'ai tellement changé que ça vous laisse\nbouche bée !")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf("Je vous suis éternellement reconnaissant de ce\nque vous avez fait pour moi...\n\n\nÀ partir d'aujourd'hui, je vais vivre en harmonie\navec tous les habitants !")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x08\xA0CAah, toute cette lumière et ces choses qui\ntournent, c'est superbe. Aah, je suis aux\nanges.")
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00\x05Oh, Link ! Encore merci pour ce\nque vous avez fait pour moi.\n\n\nJ'ai toujours eu envie de venir faire un tour au\nmarché couvert.\n\n\n\x0E\x01\x09\x04\x15\xC00Regardez ! Personne n'a peur de moi ! Je n'ai\njamais été aussi heureux !")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

