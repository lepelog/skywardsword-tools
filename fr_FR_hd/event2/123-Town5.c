          void entrypoint_123_06() {
/*< 54>*/ 	start()
/*< 47>*/ 	switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          	  case 0:
/*< 48>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<266>*/ 			switch (story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 77>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 82>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 83>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 84>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 87>*/ 										printf("\x0E\x01\x09\x04\x00\x07Bonjour, petit ange de mon c\x153ur ! Donne\x2010moi\ntout ce que tu veux, je m'en occupe\nimmédiatement !\n\n[1]D'accord[2-]Non merci")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf("\x0E\x01\x09\x04\x00\x08Bonjour, petit ange de mon c\x153ur ! Bienvenue\nà la consigne !\n\n\nDonne\x2010moi tout ce que tu veux, je m'en occupe\nimmédiatement !\n\n\n[1]D'accord[2-]Non merci")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf("\x0E\x01\x09\x04\x00\x0EBienvenue, Link. As\x2010tu quelque\nchose à confier à la jeune femme que\nson c\x153ur affreusement brisé rend plus\nbelle chaque jour ?\n[1]Oui[2-]Non merci")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x05Ah... Bienvenue, Link.\n\n\n\nJe voudrais m'excuser pour mon comportement\nde l'autre nuit.\n\n\nJ'ai pris le temps de bien réfléchir à la\nsituation, et je vais beaucoup mieux à\nprésent.\n\nOn dit qu'une fille dont le c\x153ur a été brisé\ndevient plus belle encore.\n\n\nEh bien, j'ai compris que c'était vrai ! Et j'ai\nbien l'intention d'embellir chaque jour un peu\nplus !\n\nAlors sans rancune, d'accord ?\n\n\n\nBien. Où en étions\x2010nous ? Tu veux déposer\nquelque chose ?\n\n\n[1]Oui[2-]Non merci")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x05Bonjour, mon chéri...\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je... Enfin je... <r<Je voudrais que tu passes chez\nmoi ce soir>>. Je dois te dire quelque chose.\n\n\n\x0E\x01\x09\x04\x08\xA00J'habite juste à côté du marché couvert. Tu\nviendras, n'est\x2010ce pas ? Je t'attendrai...")
          								flw_79:
/*< 79>*/ 								printf("As\x2010tu quelque chose à consigner ?\n\n\n\n[1]Oui[2-]Non merci")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x00\x05Bonjour, mon chéri...\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je... Enfin je... <r<Je voudrais que tu passes chez\nmoi ce soir>>. Je dois te dire quelque chose.\n\n\n\x0E\x01\x09\x04\x08\xA00J'habite juste à côté du marché couvert. Tu\nviendras, n'est\x2010ce pas ? Je t'attendrai...")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf("\x0E\x01\x09\x04\x00\x07Bienvenue, <r<mon ange >>! Comme je t'ai attendu !\nQu'est\x2010ce que tu as pour moi aujourd'hui ?\n\n\nJe m'occupe de tout, aucun souci ! Vas\x2010y, vide\nton sac !\n[1]D'accord[2-]Non merci")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x08... Aaaaah...")
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x08\xA00Je suis tellement heureuse ! Tu es venu pour\nme voir, n'est\x2010ce pas ?\n\n\n[1]Euh...[2]Oui")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ANe me regarde pas avec ces yeux\x2010là, tu me fais\nrougir, <r<mon adoré >>!")
          					flw_66:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x12\xA00Je ne peux pas m'empêcher de penser à toi.\nJe rêvasse toute la journée, j'ai le c\x153ur qui\ns'emballe, le souffle coupé, je suis prise de\nvertiges !\nCrois\x2010tu que... Enfin, serait\x2010ce...\n\n\n\n[1]C'est la\ngrippe[2]C'est l'amour !")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x0F\x120EOh, quel farceur tu fais !")
          						flw_70:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x12\xA00Mais enfin, où ai\x2010je la tête ? Je dois me\nremettre au travail !\n\n\n\x0E\x01\x09\x04\x0E\x1000Où en étais\x2010je ? Ah oui, j'allais te dire que si tu\navais besoin de moi, j'étais entièrement à ta\ndisposition...\n\n[1]Parfait ![2-]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FTu es sérieux ? Oh, quel bonheur !")
          							flw_72:
/*< 72>*/ 							printf("\x0E\x01\x09\x04\x0D\xF0APar la Déesse, je m'oublie ! Je n'avais pas\nl'intention de te révéler mes rêves les plus\nfous !\n\n\x0E\x01\x09\x04\x08\xA00Oh, je n'aurais pas dû dire ça non plus...\nVeux\x2010tu que je prenne tes affaires, <r<mon\nc\x153ur>> <r<d'amour>> ?\n\n[1]Oui[2-]Non merci")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x0F\xF0DAaah ! Je n'arrive pas à croire que tu aies\nprononcé ce mot ! Je voudrais disparaître\nsous terre !")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ATu me combles de bonheur... Je pourrais mourir\nde félicité...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf("\x0E\x01\x09\x04\x00\x05Bienvenue ! Ça fait plaisir de te voir !\n\n\n\nJe peux garder tes affaires, si tu veux. T'as\nenvie de faire de la place dans ta sacoche ?\n[1]Oui[2-]Non merci")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf("Bonjour, bienvenue à la consigne...\x0E\x01\x09\x04\x00\x05 Oh !")
/*<279>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 57, 'param3': 6}
/*< 57>*/ 				printf("Ah ! Euh... Salut, euh... et euh b\x2010bienvenue...\n\n\n\n[1]Que se\npasse\x2010t\x2010il ?[2]Tu es...\ndifférente")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\n\xF18Ah, euh... non, rien. Tout va très bien.")
          					flw_76:
/*< 76>*/ 					printf("En tout cas, ce n'est pas du tout parce que je\nsuis très heureuse de te voir !\n\n\nMais... c'est vrai qu'on se voit tellement souvent\nqu'on pourrait penser que notre relation évolue.\nTu n'es plus un simple client pour moi...\n\n\x0E\x01\x09\x04\x10\x1405Oh, enfin... Mais qu'est\x2010ce que je raconte ?\n\n\n\nPardon, je suis désolée ! Oublie ce que je viens\nde dire, tu veux bien ?\n\n\n\x0E\x01\x09\x04\x07\x800Bon, je me remets au travail. Tu veux déposer\nquelque chose ?\n\n\n[1]Oui[2-]Non merci")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\n\xF18Tu trouves ? Non, pourtant. Tu dois faire\nerreur.")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bienvenue à la consigne ! Dis donc, tes visites\nse font fréquentes... Tu vas me faire rougir, tu\nsais !\n\nAlors, que puis\x2010je faire pour toi ? Tu as\ndes choses à me laisser ? Ou des choses\nà reprendre ?\n[1]Oui[2-]Non merci")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bonjour, bienvenue à la consigne... Oh, c'est\nencore toi ?\n\n\nTu viens souvent, en ce moment... À vrai dire,\nil n'y a que toi qui viens aussi souvent !\n\n\n\x0E\x01\x09\x04\x00\x04Oh, mais... Une minute...\n\n\n\nEst\x2010ce que... par hasard...\n\n\n\nTu ne viens pas ici juste pour me voir, quand\nmême ?\n\n\n[1]Pas du tout ![2]Si, j'avoue...")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ah. Très bien...\n\n\n\nC'était stupide de ma part. Quelle idée idiote !\n\n\n\n\x0E\x01\x09\x04\n\xC00Non, non, je ne suis pas déçue... Vraiment pas.\nMais alors pas du tout !")
          				flw_53:
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x07\x800Oh là, mais je manque à tous mes devoirs ! Tu\nveux déposer ou reprendre quelque chose ?\n\n\n[1]Oui[2-]Non merci")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x02Tu... l'avoues ?\n\n\n\nOh, c'est bon ! Arrête de me faire marcher ! Je\nsuis pas tombée de la dernière pluie, qu'est\x2010ce\nque tu crois !\n\n\x0E\x01\x09\x04\n\xC00Mais bon... Si c'était vrai, ça me déplairait pas...")
          				goto flw_53
          			}
          		}
          	}
          }

          void entrypoint_123_07() {
/*< 93>*/ 	start()
/*< 92>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 94>*/ 		switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          		  case 0:
/*< 95>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 96>*/ 				switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          				  case 0:
/*< 97>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
/*<105>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<106>*/ 								printf("\x0E\x01\x09\x04\x00\x09Je suis heureuse que tu m'aies parlé de tes\nsentiments, mon chéri. Je te verrai à la\nconsigne !")
          							  case 1:
/*<109>*/ 								printf("\x0E\x01\x09\x04\x00\x0DMon c\x153ur ! Je t'ai dit que nous devions garder\nnotre relation secrète pour l'instant !\n\n\nSi tu viens aussi souvent, mon père va se douter\nde quelque chose !\n\n\nQu'est\x2010ce que tu peux bien vouloir, à cette\nheure\x2010ci ?\n[1]Je dois\nte parler[2]Rien ![3]Déposer\ndes objets")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf("\x0E\x01\x09\x04\x08\x08J'adorerais discuter avec toi pendant des heures,\nmais mon père nous observe ! Nous parlerons\nplus tard...")
          								  case 1:
/*<112>*/ 									printf("\x0E\x01\x09\x04\x08\xA00Rien ? Oh, comme c'est romantique ! J'adore\nton côté désinvolte.")
          								  case 2:
/*<113>*/ 									printf("Pour ça, tu n'as qu'à venir me voir à la consigne\npendant la journée...\n\n\n\x0E\x01\x09\x04\x0E\x1000On dirait que je ne représente que la consigne,\npour toi...")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf("\x0E\x01\x09\x04\x00\x14Je suis forte, je t'oublierai. Laisse\x2010moi seule,\ns'il te plaît.")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf("\x0E\x01\x09\x04\x00\x13Je ne sais pas pourquoi, mais mon père a l'air\nd'être en grande forme ces jours\x2010ci...\n\n\nÀ croire qu'il n'a même pas remarqué que sa\nfille venait d'avoir le c\x153ur brisé...")
          									  case 1:
/*<116>*/ 										printf("\x0E\x01\x09\x04\x00\x14Je sais que nous ne sommes plus ensemble...\nMais parfois, la nuit, j'ai vraiment mal... C'est\ndonc ça, un chagrin d'amour ?")
          									}
          								  case 1:
/*<114>*/ 									printf("\x0E\x01\x09\x04\x00\x0E\x0E\x03\x01\x00Link... Ça fait toujours aussi mal,\nd'avoir le c\x153ur brisé ?\x0E\x01\x09\x04\x00\x14")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 226, 'param3': 6}
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf("\x0E\x01\x09\x04\x00\x05\x0E\x03\x01\x00Link... Tu es venu... Merci.\n\n\n\n\x0E\x01\x09\x04\x0E\xF00Voilà, il y a quelque chose que je dois\nabsolument te demander.\n\n\nMais surtout, ne te braque pas...")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf("Qu'est\x2010ce que tu penses de moi ?\n\n\n\n[1]Tu me plais[2]Tu travailles\nbien")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FC'est vrai ?! Tu n'es pas en train de me faire\nmarcher ?!\n\n\n[1]Non[2]Si")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf("\x0E\x01\x09\x04\x08\xA08Comme je suis heureuse ! Je n'arrive pas à y\ncroire... Dis\x2010le\x2010moi encore, juste une fois !\n\n\n\x0E\x01\x09\x04\x0E\x1000Je te plais, c'est vraiment vraiment vrai ?\n\n\n\n[1]Bien sûr ![2]Non, désolé")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf("\x0E\x01\x09\x04\x0D\xF0ATu es sérieux, n'est\x2010ce pas ? Si je découvrais que\ntu m'as menti, je ne sais pas ce que je ferais !\n\n\n[1]Je suis\nsérieux[2]Eh bien,\nj'ai menti !")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf("\x0E\x01\x09\x04\x08\xA09Oh, merci ! Je t'aime tellement, mon chéri !\nPardon d'avoir douté de toi !")
/*<318>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 317, 'param3': 6}
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 320, 'param3': 6}
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 314, 'param3': 6}
/*<314>*/ 										printf("\x0E\x01\x09\x04\x00\x13Mais je sais...\n\n\n\nTu as des choses bien plus importantes à gérer\nen ce moment.\n\n\n\x0E\x01\x09\x04\x0E\x1000Ton destin t'attend, tout ça...\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je le vois bien, tu viens toujours déposer des\nchoses à la consigne. Ne t'en fais pas, je ne te\ntourmenterai plus avec cette histoire.\n\nJe vais faire de mon mieux pour t'offrir le\nmeilleur service possible, à la consigne.\n\n\n\x0E\x01\x09\x04\x0E\x1000Mais quand tu auras terminé ce que tu as à\nfaire, alors je pourrai te présenter à mon père.\n\n\n\x0E\x01\x09\x04\x0B\xD00Mais pour l'instant, notre histoire doit rester\nsecrète ! Je te verrai à la consigne...")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf("\x0E\x01\x09\x04\x0F\x1214Très bien... Tu as répondu honnêtement...\n\n\n\nDésolée de t'avoir embêté avec ça. ")
/*<329>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 328, 'param3': 6}
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 332, 'param3': 6}
/*<332>*/ 										printf("\x0E\x01\x09\x04\x00\x13Ne t'inquiète pas. Je n'ai pas besoin de ta pitié.\n\n\n\nJe vais bien. Je t'aurai vite oublié.\n\n\n\n\x0E\x01\x09\x04\x14\xD00Je t'accueillerai désormais à la consigne de la\nmanière la plus professionnelle du monde.")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 6}
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 327, 'param3': 6}
/*<327>*/ 										printf("Mais ce soir, j'ai besoin de rester seule.\n\n\n\nBonne nuit, mon chéri.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf("\x0E\x01\x09\x04\x0F\x120AMais, alors...\n\n\n\n\x0E\x01\x09\x04\x0E\x1000Je ne te plais pas du tout, et je ne suis rien de\nplus pour toi que la fille de la consigne ? C'est\nvraiment ce que tu penses ?\n[1]Mais non ![2]Euh, oui")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf("\x0E\x01\x09\x04\x0F\x120FAlors... tu ne t'intéresses pas du tout à moi ?\n\n\n\n\x0E\x01\x09\x04\x0E\x1000Ah ! Mais je comprends... Tu n'arrives pas à\navouer tes véritables sentiments, c'est ça ?\n\n[1]C'est ça[2]Pas du tout")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf("\x0E\x01\x09\x04\x08\xA08Comment ça ? Alors, je te plais ?\n\n\n\n[1]Mais oui...[2]Non, désolé")
/*<313>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								  case 1:
          									goto flw_307
          								}
          							}
          						  case 1:
/*<298>*/ 							printf("\x0E\x01\x09\x04\x0F\x1210Mais...?\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je ne t'ai peut\x2010être pas posé la question comme\nil fallait...\n\n\n\x0E\x01\x09\x04\x0E\x1000Bon, laisse\x2010moi réfléchir. Qu'est\x2010ce que je suis,\npour toi ?\n\n\n[1]Une fille\nadorable[2]La fille de\nla consigne")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf("\x0E\x01\x09\x04\x00\x07Bonsoir, <r<mon c\x153ur >>! Bienvenue !\n\n\n\nTu es venu jusqu'ici pour me voir... Ça me fait\nbien plaisir !")
          				}
          			  case 1:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x15Oh, bonsoir ! Tu es venu jusque chez moi pour\nme voir...\n\n\nTu n'as pas l'intention de me faire une\ndéclaration, quand même ?")
          			}
          		  case 1:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x00\x17Je me doute que tu dois avoir très envie de me\nvoir, mais je ne reçois pas mes clients chez moi.\n\n\n\x0E\x01\x09\x04\x01\x800C'est bien pour ça que tu venais, non ?")
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x00\x02Aaah... N'y a\x2010t\x2010il donc personne ici qui pourrait\nmettre un peu de soleil dans ma vie ?\n\n\nSi seulement je pouvais rencontrer mon prince\ncharmant...\n\n\n\x0E\x01\x09\x04\x01\x800Dis donc, toi... Ça te prend souvent de rentrer\nchez les gens, comme ça ?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Merci de tout mon c\x153ur, Link !\n\n\n\n\x0E\x01\x09\x04\n\x900Ma maison est rutilante ! Comme c'est agréable\nde vivre dans une maison propre !")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x01\x909Tu as bien mérité quelques rubis ! Tu es\ntellement gentil ! Tiens, voilà <r<20 rubis >>!\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf("\x0E\x01\x09\x04\x01\x900La poussière pourrait bien revenir, tu sais...\nEst\x2010ce que je pourrai faire à nouveau appel\nà toi, dans ce cas ? Je te paierai bien !\nTu es d'accord ?")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf("\x0E\x01\x09\x04\n\x900Oh... Une dernière chose... N'en parle pas à\nKiko.\n\n\n\x0E\x01\x09\x04\x08\x900Il se mettrait en colère en disant que je jette\nl'argent par les fenêtres... Tu n'en parleras pas,\nn'est\x2010ce pas ?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Merci de tout mon c\x153ur, Link !\n\n\n\n\x0E\x01\x09\x04\n\x900Ma maison est rutilante ! Comme c'est agréable\nde vivre dans une maison propre !")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf("\x0E\x01\x09\x04\x00\x02J'ai bien de la chance d'avoir un vaillant\nchevalier comme toi pour m'aider,\nLink.\n\nJe te donnerai tes rubis dès que toute la\npoussière aura disparu. Préviens\x2010moi quand\ntu auras terminé, d'accord ?\n\n\x0E\x01\x09\x04\x01\x900Ou bien veux\x2010tu t'arrêter pour aujourd'hui ?\n\n\n\n[1]Ça suffit[2-]Je continue")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf("\x0E\x01\x09\x04\x00\nOh, quel dommage... Mais ce n'est pas grave.\nPasse me voir quand tu auras envie de t'y\nremettre !")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x09\x04\n\x900Je vois que tu mets du c\x153ur à l'ouvrage !\nIl y a bien sûr de la poussière sur le <r<sol>>...\n\n\nMais j'en ai vu aussi du côté des <r<fenêtres>>, des\n<r<étagères>> et sur les <r<lits>>. Passe bien partout, il\nfaut que ça brille !")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf("\x0E\x03\x01\x00Link ? Voici ta récompense, viens\ndonc la prendre.")
          	  case 1:
/*<133>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ah, Link ! Tu sais que tu n'as\npas terminé, n'est\x2010ce pas ?\n\n\nTu veux t'arrêter là pour aujourd'hui ?\n\n\n\n[1]Oui ![2-]Pas encore")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf("\x0E\x01\x09\x04\x00\nOh, quel dommage... Mais ce n'est pas grave.\nPasse me voir quand tu auras envie de t'y\nremettre !")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\n\x900Je vois que tu mets du c\x153ur à l'ouvrage !\nIl y a bien sûr de la poussière sur le <r<sol>>...\n\n\nMais j'en ai vu aussi du côté des <r<fenêtres>>, des\n<r<étagères>> et sur les <r<lits>>. Passe bien partout, il\nfaut que ça brille !")
/*<165>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 140, 'param3': 15}
          			goto flw_140
          		}
          	}
          }

          void entrypoint_123_11() {
/*<141>*/ 	start()
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 147, 'param3': 17}
/*<147>*/ 	set_camera(4, 0)
/*<142>*/ 	switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          	  case 0:
          		flw_164:
/*<164>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
          			goto flw_219
          		  case 1:
/*<145>*/ 			printf("\x0E\x01\x09\x04\x00\x04Oh, Link ! Tu t'en vas déjà ?\n\n\n\nPasse donc dire bonjour à Kiko si tu le vois\npendant qu'il patrouille !")
/*<146>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*<163>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<143>*/ 		switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          		  case 0:
/*<144>*/ 			story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = false;
          			goto flw_164
          		  case 1:
          			goto flw_164
          		}
          	}
          }

          void entrypoint_123_12() {
/*<214>*/ 	start()
/*<274>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 215, 'param3': 6}
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\xD08Ça alors ! J'avais oublié la couleur du plancher,\ndepuis le temps ! Merci beaucoup,\nLink !\n\n\x0E\x01\x09\x04\n\x900Tu as illuminé ma journée ! Il est temps de te\npayer pour tes efforts !")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Tu me dois <r<à peu près 30 rubis>>, petit ! Ça\nt'apprendra à détruire des objets rares !\nEt crois bien que je ne calcule pas cette\nsomme au hasard !")
/*<382>*/ 	switch (random(4)) {
          	  case 0:
/*<383>*/ 		check_item_flag(501, 24)
/*<384>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 174}) {
          		  case 0:
          			flw_385:
/*<385>*/ 			rupees += -24;
          			flw_400:
/*<400>*/ 			entrypoint_123_14();
          		  case 1:
/*<386>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<406>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_385
          		}
          	  case 1:
/*<387>*/ 		check_item_flag(501, 26)
/*<388>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 176}) {
          		  case 0:
          			flw_389:
/*<389>*/ 			rupees += -26;
          			goto flw_400
          		  case 1:
/*<390>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<407>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_389
          		}
          	  case 2:
/*<391>*/ 		check_item_flag(501, 29)
/*<392>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 178}) {
          		  case 0:
          			flw_393:
/*<393>*/ 			rupees += -29;
          			goto flw_400
          		  case 1:
/*<394>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<408>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_393
          		}
          	  case 3:
/*<395>*/ 		check_item_flag(501, 38)
/*<396>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 180}) {
          		  case 0:
          			flw_397:
/*<397>*/ 			rupees += -38;
          			goto flw_400
          		  case 1:
/*<398>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<409>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_397
          		}
          	}
          }

          void entrypoint_123_14() {
/*<337>*/ 	start()
          	flw_246:
/*<246>*/ 	zone_temp_flags[1 /* 0x1 02 */] = false;
/*<247>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_248:
/*<248>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<245>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_248
          	}
          }

          void entrypoint_123_15() {
/*<360>*/ 	start()
/*<359>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Tu me dois <r<en gros 20 rubis>>, petit ! Ça\nt'apprendra à détruire des objets rares !\nEt crois bien que je ne calcule pas cette\nsomme au hasard !")
/*<358>*/ 	switch (random(4)) {
          	  case 0:
/*<357>*/ 		check_item_flag(501, 17)
/*<356>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 152}) {
          		  case 0:
          			flw_355:
/*<355>*/ 			rupees += -17;
          			flw_342:
/*<342>*/ 			entrypoint_123_14();
          		  case 1:
/*<354>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<410>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_355
          		}
          	  case 1:
/*<353>*/ 		check_item_flag(501, 19)
/*<352>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 150}) {
          		  case 0:
          			flw_351:
/*<351>*/ 			rupees += -19;
          			goto flw_342
          		  case 1:
/*<350>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<411>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_351
          		}
          	  case 2:
/*<349>*/ 		check_item_flag(501, 22)
/*<348>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 148}) {
          		  case 0:
          			flw_347:
/*<347>*/ 			rupees += -22;
          			goto flw_342
          		  case 1:
/*<346>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<412>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_347
          		}
          	  case 3:
/*<345>*/ 		check_item_flag(501, 23)
/*<344>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 146}) {
          		  case 0:
          			flw_343:
/*<343>*/ 			rupees += -23;
          			goto flw_342
          		  case 1:
/*<341>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Tu me dois <r<environ 10 rubis>>, petit ! Ça\nt'apprendra à détruire des objets rares !\nEt crois bien que je ne calcule pas cette\nsomme au hasard !")
/*<362>*/ 	switch (random(4)) {
          	  case 0:
/*<363>*/ 		check_item_flag(501, 7)
/*<364>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 162}) {
          		  case 0:
          			flw_365:
/*<365>*/ 			rupees += -7;
          			flw_380:
/*<380>*/ 			entrypoint_123_14();
          		  case 1:
/*<366>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<414>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_365
          		}
          	  case 1:
/*<367>*/ 		check_item_flag(501, 8)
/*<368>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 164}) {
          		  case 0:
          			flw_369:
/*<369>*/ 			rupees += -8;
          			goto flw_380
          		  case 1:
/*<370>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<415>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_369
          		}
          	  case 2:
/*<371>*/ 		check_item_flag(501, 11)
/*<372>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 166}) {
          		  case 0:
          			flw_373:
/*<373>*/ 			rupees += -11;
          			goto flw_380
          		  case 1:
/*<374>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<416>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_373
          		}
          	  case 3:
/*<375>*/ 		check_item_flag(501, 13)
/*<376>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 168}) {
          		  case 0:
          			flw_377:
/*<377>*/ 			rupees += -13;
          			goto flw_380
          		  case 1:
/*<378>*/ 			printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<417>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_377
          		}
          	}
          }

          void entrypoint_123_00() {
          	start()
/*<  4>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<  5>*/ 		check_item_flag(49, 1)
/*<  6>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          		  case 0:
/*<  1>*/ 			switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          			  case 0:
/*<  7>*/ 				switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          				  case 0:
/*< 44>*/ 					switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          					  case 0:
/*< 43>*/ 						switch (story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */]) {
          						  case 0:
          							flw_19:
/*< 19>*/ 							switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          							  case 0:
/*< 20>*/ 								printf("\x0E\x01\x09\x04\x00\x01Tiens, bonjour, Link.\n\n\n\nSi jamais la poussière s'accumule à nouveau\nchez moi, je te ferai signe !")
          							  case 1:
/*<124>*/ 								switch (zone_temp_flags[0 /* 0x1 01 */]) {
          								  case 0:
/*<211>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<213>*/ 										entrypoint_123_08();
          									  case 1:
/*<212>*/ 										entrypoint_123_09();
          									}
          								  case 1:
/*<123>*/ 									switch (zone_temp_flags[1 /* 0x1 02 */]) {
          									  case 0:
/*<125>*/ 										printf("\x0E\x01\x09\x04\x08\xD01Tu voudrais bien nettoyer ma maison ? Je ne\nsupporte pas de perdre mon temps à ça.\n\n\n\x0E\x01\x09\x04\n\x900Je te donnerai des rubis en échange !\n\n\n\n[1]D'accord[2-]Pas\nquestion !")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf("\x0E\x01\x09\x04\x01\xD07C'est vrai, tu veux bien ? Merci ! J'étais sûre\nque tu accepterais, Link.\n\n\n\x0E\x01\x09\x04\x01\xD00Fais en sorte que ça brille et que ça sente bon,\nveux\x2010tu ?")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf("\x0E\x01\x09\x04\x01\x90AAh bon ? \x0E\x03\x01\x00Link, tu me déçois.\nJe pensais que tu serais à la hauteur !")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("\x0E\x01\x09\x04\x00\x01Salut, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Ma maison est à nouveau sale à faire peur.\nTu veux bien me récurer tout ça ? Il y a des\nrubis à gagner !\n[1]D'accord[2-]Non merci")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Kiko est furieux contre moi...\n\n\n\n\x0E\x01\x09\x04\n\x900Il pense que je dépense mon argent inutilement\nen embauchant une femme de ménage.\n\n\n\x0E\x01\x09\x04\x01\xC00...\n\n\n\n\x0E\x01\x09\x04\x08\xD09Mais toi, tu n'es pas une femme de ménage,\nalors ça va, n'est\x2010ce pas ?\n\n\n\x0E\x01\x09\x04\x08\x900Voilà, le problème est réglé ! Tu peux donc\ncontinuer à passer faire le ménage de temps\nen temps, n'est\x2010ce pas, mon petit ?")
/*< 46>*/ 							story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */] = true;
          						}
          					  case 1:
          						goto flw_19
          					}
          				  case 1:
/*<438>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 31}
/*<120>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<200>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<210>*/ 							entrypoint_123_08();
          						  case 1:
/*<209>*/ 							entrypoint_123_09();
          						}
          					  case 1:
/*<  8>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
/*< 15>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Tu voudrais bien nettoyer ma maison ? Je ne\nsupporte pas de perdre mon temps à ça.\n\n\n\x0E\x01\x09\x04\n\x900Je te donnerai des rubis en échange !\n\n\n\n[1]D'accord[2-]Pas\nquestion !")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf("\x0E\x01\x09\x04\n\xD07C'est vrai, tu veux bien ? Merci ! J'étais sûre\nque tu accepterais, Link.\n\n\n\x0E\x01\x09\x04\x08\x904Bon, où ai\x2010je mis le balai ? Ça fait tellement\nlongtemps, je n'ai plus la moindre idée d'où\nje l'ai rangé...\n\n\x0E\x01\x09\x04\x09\x900De toute façon, tout ce que je veux, c'est être\n<r<débarrassée de cette poussière>>.\n\n\n\x0E\x01\x09\x04\x01\x900Peu importe la méthode, du moment que la\npoussière <r<s'envole >>!\n\n\n\x0E\x01\x09\x04\x08\x902Allez, mets\x2010toi au travail, tu veux bien ?")
/*<119>*/ 								make_actor_do_something(0, 0)
/*<148>*/ 								story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<  3>*/ 								zone_temp_flags[0 /* 0x1 01 */] = true;
          								flw_122:
/*<122>*/ 								switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          								  case 0:
          									flw_121:
/*<121>*/ 									zone_temp_flags[1 /* 0x1 02 */] = true;
          								  case 1:
/*<118>*/ 									story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */] = true;
          									goto flw_121
          								}
          							  case 1:
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x01\x90AAh bon ? \x0E\x03\x01\x00Link, tu me déçois.\nJe pensais que tu serais à la hauteur !")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Oh, Link ! Tu vas bien ?\n\n\n\n\x0E\x01\x09\x04\x01\x900Tu ne voudrais pas faire un peu de ménage\npour moi ? Ça me sort par les trous de nez !\n\n\n\x0E\x01\x09\x04\n\x900Et il y a de l'argent de poche à gagner !\n\n\n\n[1]Oh oui ![2-]Non merci")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link ! Tu vas bien ?\n\n\n\n\x0E\x01\x09\x04\x08\x900Il y a quelque chose dont j'aimerais te\nparler, Link. Ma maison est une\nvraie porcherie...\n\n\x0E\x01\x09\x04\x09\x900Kiko me répète tous les jours que je devrais\nfaire le ménage, mais rien n'y fait, je n'arrive\npas à m'y mettre !\n\n\x0E\x01\x09\x04\x08\x900Alors je me suis dit que je pourrais te demander\nde le faire pour moi... Ça te ferait de l'argent\nde poche !\n[1]Bien sûr ![2-]Pas\nquestion")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que tout se passe bien à l'école, pour mon\nKiko ?\n\n\nIl est vraiment tout l'opposé de sa mère, alors\nj'imagine que je ne devrais pas m'inquiéter !\n\n[1]C'est sale, ici[2]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf("\x0E\x01\x09\x04\x01\x909Oh. On dirait, oui... D'où peut bien venir toute\ncette saleté ?\n\n\n\x0E\x01\x09\x04\n\x90ALe ménage, ça me déprime. Si quelqu'un pouvait\nle faire à ma place, ça serait tellement gentil !")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x01\x904Que se passe\x2010t\x2010il ? On dirait que tu as quelque\nchose à me dire...")
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\xD01Oh, contente de te voir ici, Link !\n\n\n\n\x0E\x01\x09\x04\n\x900Dis\x2010moi, est\x2010ce que tout se passe bien à l'école\npour mon Kiko ?")
/*< 16>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			}
          		}
          	  case 1:
          		goto flw_17
          	}
          }

          void entrypoint_123_01() {
/*< 22>*/ 	start()
/*<295>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1014, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf("On a déjà eu cette discussion, maman !")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 24, 'param3': 6}
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 169, 'param3': 6}
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf("Calme\x2010toi, Kiko ! Ce n'est pas la peine de te\nmettre dans des états pareils !")
/*< 26>*/ 	printf("Bien sûr que si !\n\n\n\nJe suis sûr que <r<tu paies quelqu'un >>pour venir\nfaire le ménage !\n\n\nCet argent, je te l'ai donné pour acheter de quoi\nmanger !\n\n\nTu dépenses tellement que je vais finir par ne\nplus avoir de quoi payer l'école de chevalerie !\n\n\nSi tu crois que je pars en patrouille pour que tu\npuisses te payer des luxes comme celui\x2010ci !\n\n\nÇa suffit, maintenant ! Tu dois arrêter ça !")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 28, 'param3': 6}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 90, 'next': 32, 'param3': 6}
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 170, 'param3': 6}
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Oh, salut, Link... Il est un peu\ntard pour une visite. Il se passe quelque\nchose ?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf("\x0E\x01\x09\x04\x120B\x1100Tu... Tu n'écoutais pas notre conversation,\nhein ? Tu n'as rien entendu, n'est\x2010ce pas ?\n[1]De quoi\ntu parles ?[2]Désolé...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Euh, non, de rien !\n\n\n\n\x0E\x01\x09\x04\x1208\x400Bon, je dois retourner patrouiller ! Fais\nattention à toi quand tu déambules dans\nles rues !")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Oh... Tu as tout entendu...\n\n\n\n\x0E\x01\x09\x04\x120F\x1100Eh bien, oui, c'est vrai ! Je fais des patrouilles\nde nuit pour gagner un peu d'argent...\n\n\n\x0E\x01\x09\x04\x1208\x1100Et tant pis si tu me méprises ! De toute façon,\ntu n'as pas à espionner les conversations des\ngens !\n\n\x0E\x01\x09\x04\x120C\xC00Allez, oublions tous les deux ce qui vient de se\npasser, d'accord ?")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x10\x1100Mais en fait...<pause1E> Maintenant que j'y pense, on ne\nvoit plus de monstres dans le coin, ces derniers\ntemps !\n\n\x0E\x01\x09\x04ÿ\xFF00Je me demande à quoi c'est dû. Enfin, comme\nça c'est plus paisible, réjouissons\x2010nous !")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf("Salut, Link ! Fais attention, c'est\ndangereux la nuit, par ici.\n\n\n\x0E\x01\x09\x04\x11\xC09Oh, et, tu sais, pour l'autre fois... N'en parle à\npersonne, surtout !")
          				flw_431:
/*<431>*/ 				switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          				  case 0:
/*<433>*/ 					zone_temp_flags[16 /* 0x3 01 */] = true;
          				  case 1:
          				}
          			  case 1:
/*<161>*/ 				switch (scene_flags[76 /* 0x8 10 */]) {
          				  case 0:
/*<176>*/ 					{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4376, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("\x0E\x03\x01\x00Link... J'aurais préféré que tu ne\nnous voies pas nous disputer. C'est très\nembarrassant...\n\n\x0E\x01\x09\x04\x0F\x1100Ma mère me fait honte. Elle est tellement\nparesseuse que je ne sais plus quoi faire\npour elle.\n\n\x0E\x01\x09\x04\x08\xC0BMais je vais m'en sortir, ne t'inquiète pas pour\nmoi !\n\n\n\x0E\x01\x09\x04\x01\x1100Je n'ai toujours pas découvert qui faisait le\nménage pour ma mère...\n\n\n\x0E\x01\x09\x04\x08\xC16De quel droit se permet\x2010on de se mêler de nos\naffaires, comme ça ?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf("Hé, Link ! Regarde, je suis là\npour faire régner la paix à Célesbourg !\n\n\n\x0E\x01\x09\x04\x0C\x400Je veux que cette île devienne un havre de\nsécurité, où chacun vit en harmonie avec les\nautres !\n\n\x0E\x01\x09\x04\x01\xC52Hmm...<pause1E> Bizarre, tu n'as pas l'air de me croire...")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf("\x0E\x03\x01\x00Link ! Ne te tourmente pas. Un\njour, tu comprendras ce que ça veut dire\nd'être un chevalier. J'en suis sûr !")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf("Salut, Link ! Fais attention, c'est\ndangereux la nuit, par ici.\n\n\n\x0E\x01\x09\x04\x0B\x400C'est ma zone de patrouille.\n\n\n\n\x0E\x01\x09\x04\x08\x404Les monstres posent souvent des problèmes\ndans ce secteur, la nuit.\n\n\nEt c'est le devoir d'un chevalier de protéger la\npopulation !\n\n\n[1]C'est\nadmirable[2]Pour l'argent ?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x09\xC09C'est pas admirable, c'est juste normal, enfin !\nC'est ça, être un apprenti chevalier !\n\n\nVoir les gens autour de moi heureux et\ninsouciants, la voilà ma récompense !\n\n\n\x0E\x01\x09\x04\x08\x400Tu n'es pas un vrai chevalier tant que tu ne l'as\npas compris. \x0E\x01\x09\x04\x00\x05Je suis sûr qu'un jour, tu verras la\nlumière, toi aussi.")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x0C\xC17\x0E\x03\x01\x00Link ! Qu'est ce qui t'a donné\nl'envie de devenir chevalier ?\n\n\nL'argent ? Garde\x2010toi bien de te laisser aveugler\npar ses artifices !\n\n\n\x0E\x01\x09\x04\x08\x405Regarde\x2010moi ! Rendre les gens heureux\nm'importe bien plus que l'argent. C'est ça,\nl'esprit de la chevalerie.")
          					goto flw_158
          				}
          			}
          		}
          	}
          }

          void entrypoint_123_03() {
/*<251>*/ 	start()
/*<253>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<255>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 768, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x09Regarde ce que tu as fait, chenapan ! Je\nt'interdis de réduire ma collection en miettes !\n\n\nJe te préviens, si tu recommences, ça va\nchauffer pour ton matricule !")
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x00\x07J'ai une vraie passion pour les antiquités !\nC'est bien simple, tout ce qui se trouve dans\nma maison est honteusement hors de prix.\n\nGare à toi si tu casses quelque chose !")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf("\x0E\x01\x09\x04\x1F00\nNON MAIS JE RÊVE !!!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x1F0A\x300Encore toi ! Mais c'est de l'acharnement !\nQu'est\x2010ce que je t'ai fait, à la fin ?!")
          			flw_401:
/*<401>*/ 			check_item_flag(501, 1)
/*<402>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 182}) {
          			  case 0:
/*<244>*/ 				switch (random(3)) {
          				  case 0:
/*<338>*/ 					entrypoint_123_13();
          				  case 1:
/*<339>*/ 					entrypoint_123_15();
          				  case 2:
/*<340>*/ 					entrypoint_123_16();
          				}
          			  case 1:
/*<405>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<418>*/ 					printf("Et tu n'as pas le moindre rubis pour me\nrembourser ! C'est à peine croyable,\nquelle outrecuidance !\n\nDécampe d'ici tout de suite, voyou !")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf("Mais... Tu es complètement sur la paille,\nma parole !\n\n\nAlors comme ça, ça t'amuse de venir détruire\ndes choses chez les gens sans avoir un seul rubis\npour les rembourser ?!\n\nHors de ma vue, fripouille ! Je ne veux pas de\nton argent, de toute façon !")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x09\x04\x1F09\x300Tu ne manques pas d'air, pour venir chez moi\ndétruire mes objets de collection !")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x1F09\x300Regarde\x2010moi ce massacre, petit gredin !\nTu détruis tout sur ton passage !\n\n\nTu ne vas pas t'en sortir à si bon compte !\nIl va falloir payer les pots cassés !\n\n\n\x0E\x01\x09\x04\x1F0B\x700La facture va être salée... Voyons voir... Oui, ça\ndoit bien aller chercher dans les <r<20 rubis>>, ça !\n\n\n\x0E\x01\x09\x04\x1F01\x305Pas la peine de me regarder comme ça !\nComment ça, je gonfle la facture ?!\n\n\n\x0E\x01\x09\x04\x1F09\x309Petit insolent ! J'ai un sens inné de la valeur\ndes choses, figure\x2010toi. Et crois\x2010moi, tu vas\npayer !")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf("\x0E\x01\x09\x04\x1F0A\x300Si je te prends à recommencer, je prendrai des\nmesures !")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf("Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'\x153il, à l'avenir !")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf("Mais... Tu es complètement sur la paille,\nma parole !\n\n\nAlors comme ça, ça t'amuse de venir détruire\ndes choses chez les gens sans avoir un seul rubis\npour les rembourser ?!\n\nHors de ma vue, fripouille ! Je ne veux pas de\nton argent, de toute façon !")
/*<422>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_235
          		}
          	}
          }

          void entrypoint_123_05() {
/*<258>*/ 	start()
/*<284>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 43, 'next': 292, 'param3': 32}
/*<292>*/ 	set_camera(13, 0)
/*<291>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 287, 'param3': 14}
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 43, 'param2': 99, 'next': 259, 'param3': 50}
/*<259>*/ 	printf("")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 260, 'param3': 6}
/*<260>*/ 	changeScene(0, 0) // 
          }

