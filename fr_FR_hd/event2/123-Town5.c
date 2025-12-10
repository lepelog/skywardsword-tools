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
/*< 87>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000007>Bonjour, petit ange de mon cœur ! Donne‐moi\ntout ce que tu veux, je m'en occupe\nimmédiatement !\n\n[1-]D'accord[2]Non merci")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000008>Bonjour, petit ange de mon cœur ! Bienvenue\nà la consigne !\n\n\nDonne‐moi tout ce que tu veux, je m'en occupe\nimmédiatement !\n\n\n[1-]D'accord[2]Non merci")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x0000000e>Bienvenue, <heroname>. As‐tu quelque\nchose à confier à la jeune femme que\nson cœur affreusement brisé rend plus\nbelle chaque jour ?\n[1-]Oui[2]Non merci")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000005>Ah... Bienvenue, <heroname>.\n\n\n\nJe voudrais m'excuser pour mon comportement\nde l'autre nuit.\n\n\nJ'ai pris le temps de bien réfléchir à la\nsituation, et je vais beaucoup mieux à\nprésent.\n\nOn dit qu'une fille dont le cœur a été brisé\ndevient plus belle encore.\n\n\nEh bien, j'ai compris que c'était vrai ! Et j'ai\nbien l'intention d'embellir chaque jour un peu\nplus !\n\nAlors sans rancune, d'accord ?\n\n\n\nBien. Où en étions‐nous ? Tu veux déposer\nquelque chose ?\n\n\n[1-]Oui[2]Non merci")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Bonjour, mon chéri...\n\n\n\n<0x10009:0x000d0f00>Je... Enfin je... <color red<Je voudrais que tu passes chez\nmoi ce soir>coloroff>. Je dois te dire quelque chose.\n\n\n<0x10009:0x00080a00>J'habite juste à côté du marché couvert. Tu\nviendras, n'est‐ce pas ? Je t'attendrai...")
          								flw_79:
/*< 79>*/ 								printf(/* textboxtype: 0, unk: 1, line: 76 */ "As‐tu quelque chose à consigner ?\n\n\n\n[1-]Oui[2]Non merci")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Bonjour, mon chéri...\n\n\n\n<0x10009:0x000d0f00>Je... Enfin je... <color red<Je voudrais que tu passes chez\nmoi ce soir>coloroff>. Je dois te dire quelque chose.\n\n\n<0x10009:0x00080a00>J'habite juste à côté du marché couvert. Tu\nviendras, n'est‐ce pas ? Je t'attendrai...")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000007>Bienvenue, <color red<mon ange >coloroff>! Comme je t'ai attendu !\nQu'est‐ce que tu as pour moi aujourd'hui ?\n\n\nJe m'occupe de tout, aucun souci ! Vas‐y, vide\nton sac !\n[1-]D'accord[2]Non merci")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00000008>... Aaaaah...")
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080a00>Je suis tellement heureuse ! Tu es venu pour\nme voir, n'est‐ce pas ?\n\n\n[1-]Euh...[2-]Oui")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x000d0f0a>Ne me regarde pas avec ces yeux‐là, tu me fais\nrougir, <color red<mon adoré >coloroff>!")
          					flw_66:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00120a00>Je ne peux pas m'empêcher de penser à toi.\nJe rêvasse toute la journée, j'ai le cœur qui\ns'emballe, le souffle coupé, je suis prise de\nvertiges !\nCrois‐tu que... Enfin, serait‐ce...\n\n\n\n[1-]C'est la\ngrippe[2-]C'est l'amour !")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x000f120e>Oh, quel farceur tu fais !")
          						flw_70:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00120a00>Mais enfin, où ai‐je la tête ? Je dois me\nremettre au travail !\n\n\n<0x10009:0x000e1000>Où en étais‐je ? Ah oui, j'allais te dire que si tu\navais besoin de moi, j'étais entièrement à ta\ndisposition...\n\n[1-]Parfait ![2]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x000e100f>Tu es sérieux ? Oh, quel bonheur !")
          							flw_72:
/*< 72>*/ 							printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x000d0f0a>Par la Déesse, je m'oublie ! Je n'avais pas\nl'intention de te révéler mes rêves les plus\nfous !\n\n<0x10009:0x00080a00>Oh, je n'aurais pas dû dire ça non plus...\nVeux‐tu que je prenne tes affaires, <color red<mon\ncœur>coloroff> <color red<d'amour>coloroff> ?\n\n[1-]Oui[2]Non merci")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x000f0f0d>Aaah ! Je n'arrive pas à croire que tu aies\nprononcé ce mot ! Je voudrais disparaître\nsous terre !")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x000d0f0a>Tu me combles de bonheur... Je pourrais mourir\nde félicité...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000005>Bienvenue ! Ça fait plaisir de te voir !\n\n\n\nJe peux garder tes affaires, si tu veux. T'as\nenvie de faire de la place dans ta sacoche ?\n[1-]Oui[2]Non merci")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "Bonjour, bienvenue à la consigne...<0x10009:0x00000005> Oh !")
/*<279>*/ 				wait_frames(15)
/*< 57>*/ 				printf(/* textboxtype: 0, unk: 1, line: 61 */ "Ah ! Euh... Salut, euh... et euh b‐bienvenue...\n\n\n\n[1-]Que se\npasse‐t‐il ?[2-]Tu es...\ndifférente")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x000a0f18>Ah, euh... non, rien. Tout va très bien.")
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 0, unk: 1, line: 64 */ "En tout cas, ce n'est pas du tout parce que je\nsuis très heureuse de te voir !\n\n\nMais... c'est vrai qu'on se voit tellement souvent\nqu'on pourrait penser que notre relation évolue.\nTu n'es plus un simple client pour moi...\n\n<0x10009:0x00101405>Oh, enfin... Mais qu'est‐ce que je raconte ?\n\n\n\nPardon, je suis désolée ! Oublie ce que je viens\nde dire, tu veux bien ?\n\n\n<0x10009:0x00070800>Bon, je me remets au travail. Tu veux déposer\nquelque chose ?\n\n\n[1-]Oui[2]Non merci")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000a0f18>Tu trouves ? Non, pourtant. Tu dois faire\nerreur.")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00000001>Bienvenue à la consigne ! Dis donc, tes visites\nse font fréquentes... Tu vas me faire rougir, tu\nsais !\n\nAlors, que puis‐je faire pour toi ? Tu as\ndes choses à me laisser ? Ou des choses\nà reprendre ?\n[1-]Oui[2]Non merci")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00000001>Bonjour, bienvenue à la consigne... Oh, c'est\nencore toi ?\n\n\nTu viens souvent, en ce moment... À vrai dire,\nil n'y a que toi qui viens aussi souvent !\n\n\n<0x10009:0x00000004>Oh, mais... Une minute...\n\n\n\nEst‐ce que... par hasard...\n\n\n\nTu ne viens pas ici juste pour me voir, quand\nmême ?\n\n\n[1-]Pas du tout ![2-]Si, j'avoue...")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000002>Ah. Très bien...\n\n\n\nC'était stupide de ma part. Quelle idée idiote !\n\n\n\n<0x10009:0x000a0c00>Non, non, je ne suis pas déçue... Vraiment pas.\nMais alors pas du tout !")
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00070800>Oh là, mais je manque à tous mes devoirs ! Tu\nveux déposer ou reprendre quelque chose ?\n\n\n[1-]Oui[2]Non merci")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000002>Tu... l'avoues ?\n\n\n\nOh, c'est bon ! Arrête de me faire marcher ! Je\nsuis pas tombée de la dernière pluie, qu'est‐ce\nque tu crois !\n\n<0x10009:0x000a0c00>Mais bon... Si c'était vrai, ça me déplairait pas...")
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
/*<106>*/ 								printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000009>Je suis heureuse que tu m'aies parlé de tes\nsentiments, mon chéri. Je te verrai à la\nconsigne !")
          							  case 1:
/*<109>*/ 								printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x0000000d>Mon cœur ! Je t'ai dit que nous devions garder\nnotre relation secrète pour l'instant !\n\n\nSi tu viens aussi souvent, mon père va se douter\nde quelque chose !\n\n\nQu'est‐ce que tu peux bien vouloir, à cette\nheure‐ci ?\n[1-]Je dois\nte parler[2-]Rien ![3-]Déposer\ndes objets")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00080008>J'adorerais discuter avec toi pendant des heures,\nmais mon père nous observe ! Nous parlerons\nplus tard...")
          								  case 1:
/*<112>*/ 									printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00080a00>Rien ? Oh, comme c'est romantique ! J'adore\nton côté désinvolte.")
          								  case 2:
/*<113>*/ 									printf(/* textboxtype: 0, unk: 0, line: 107 */ "Pour ça, tu n'as qu'à venir me voir à la consigne\npendant la journée...\n\n\n<0x10009:0x000e1000>On dirait que je ne représente que la consigne,\npour toi...")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000014>Je suis forte, je t'oublierai. Laisse‐moi seule,\ns'il te plaît.")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00000013>Je ne sais pas pourquoi, mais mon père a l'air\nd'être en grande forme ces jours‐ci...\n\n\nÀ croire qu'il n'a même pas remarqué que sa\nfille venait d'avoir le cœur brisé...")
          									  case 1:
/*<116>*/ 										printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10009:0x00000014>Je sais que nous ne sommes plus ensemble...\nMais parfois, la nuit, j'ai vraiment mal... C'est\ndonc ça, un chagrin d'amour ?")
          									}
          								  case 1:
/*<114>*/ 									printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x0000000e><0x30001:0x><heroname>... Ça fait toujours aussi mal,\nd'avoir le cœur brisé ?<0x10009:0x00000014>")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						wait_frames(1)
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000005><0x30001:0x><heroname>... Tu es venu... Merci.\n\n\n\n<0x10009:0x000e0f00>Voilà, il y a quelque chose que je dois\nabsolument te demander.\n\n\nMais surtout, ne te braque pas...")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf(/* textboxtype: 0, unk: 0, line: 86 */ "Qu'est‐ce que tu penses de moi ?\n\n\n\n[1-]Tu me plais[2-]Tu travailles\nbien")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x000e100f>C'est vrai ?! Tu n'es pas en train de me faire\nmarcher ?!\n\n\n[1-]Non[2-]Si")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00080a08>Comme je suis heureuse ! Je n'arrive pas à y\ncroire... Dis‐le‐moi encore, juste une fois !\n\n\n<0x10009:0x000e1000>Je te plais, c'est vraiment vraiment vrai ?\n\n\n\n[1-]Bien sûr ![2-]Non, désolé")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x000d0f0a>Tu es sérieux, n'est‐ce pas ? Si je découvrais que\ntu m'as menti, je ne sais pas ce que je ferais !\n\n\n[1-]Je suis\nsérieux[2-]Eh bien,\nj'ai menti !")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00080a09>Oh, merci ! Je t'aime tellement, mon chéri !\nPardon d'avoir douté de toi !")
/*<318>*/ 										wait_frames(45)
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										wait_frames(30)
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										wait_frames(30)
/*<314>*/ 										printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000013>Mais je sais...\n\n\n\nTu as des choses bien plus importantes à gérer\nen ce moment.\n\n\n<0x10009:0x000e1000>Ton destin t'attend, tout ça...\n\n\n\n<0x10009:0x000d0f00>Je le vois bien, tu viens toujours déposer des\nchoses à la consigne. Ne t'en fais pas, je ne te\ntourmenterai plus avec cette histoire.\n\nJe vais faire de mon mieux pour t'offrir le\nmeilleur service possible, à la consigne.\n\n\n<0x10009:0x000e1000>Mais quand tu auras terminé ce que tu as à\nfaire, alors je pourrai te présenter à mon père.\n\n\n<0x10009:0x000b0d00>Mais pour l'instant, notre histoire doit rester\nsecrète ! Je te verrai à la consigne...")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x000f1214>Très bien... Tu as répondu honnêtement...\n\n\n\nDésolée de t'avoir embêté avec ça. ")
/*<329>*/ 										wait_frames(45)
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										wait_frames(30)
/*<332>*/ 										printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000013>Ne t'inquiète pas. Je n'ai pas besoin de ta pitié.\n\n\n\nJe vais bien. Je t'aurai vite oublié.\n\n\n\n<0x10009:0x00140d00>Je t'accueillerai désormais à la consigne de la\nmanière la plus professionnelle du monde.")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										wait_frames(1)
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										wait_frames(30)
/*<327>*/ 										printf(/* textboxtype: 0, unk: 0, line: 101 */ "Mais ce soir, j'ai besoin de rester seule.\n\n\n\nBonne nuit, mon chéri.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x000f120a>Mais, alors...\n\n\n\n<0x10009:0x000e1000>Je ne te plais pas du tout, et je ne suis rien de\nplus pour toi que la fille de la consigne ? C'est\nvraiment ce que tu penses ?\n[1-]Mais non ![2-]Euh, oui")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x000f120f>Alors... tu ne t'intéresses pas du tout à moi ?\n\n\n\n<0x10009:0x000e1000>Ah ! Mais je comprends... Tu n'arrives pas à\navouer tes véritables sentiments, c'est ça ?\n\n[1-]C'est ça[2-]Pas du tout")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00080a08>Comment ça ? Alors, je te plais ?\n\n\n\n[1-]Mais oui...[2-]Non, désolé")
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
/*<298>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x000f1210>Mais...?\n\n\n\n<0x10009:0x000d0f00>Je ne t'ai peut‐être pas posé la question comme\nil fallait...\n\n\n<0x10009:0x000e1000>Bon, laisse‐moi réfléchir. Qu'est‐ce que je suis,\npour toi ?\n\n\n[1-]Une fille\nadorable[2-]La fille de\nla consigne")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000007>Bonsoir, <color red<mon cœur >coloroff>! Bienvenue !\n\n\n\nTu es venu jusqu'ici pour me voir... Ça me fait\nbien plaisir !")
          				}
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000015>Oh, bonsoir ! Tu es venu jusque chez moi pour\nme voir...\n\n\nTu n'as pas l'intention de me faire une\ndéclaration, quand même ?")
          			}
          		  case 1:
/*<100>*/ 			printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000017>Je me doute que tu dois avoir très envie de me\nvoir, mais je ne reçois pas mes clients chez moi.\n\n\n<0x10009:0x00010800>C'est bien pour ça que tu venais, non ?")
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000002>Aaah... N'y a‐t‐il donc personne ici qui pourrait\nmettre un peu de soleil dans ma vie ?\n\n\nSi seulement je pouvais rencontrer mon prince\ncharmant...\n\n\n<0x10009:0x00010800>Dis donc, toi... Ça te prend souvent de rentrer\nchez les gens, comme ça ?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>Merci de tout mon cœur, <heroname> !\n\n\n\n<0x10009:0x000a0900>Ma maison est rutilante ! Comme c'est agréable\nde vivre dans une maison propre !")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00010909>Tu as bien mérité quelques rubis ! Tu es\ntellement gentil ! Tiens, voilà <color red<20 rubis >coloroff>!<0x10009:0x000a0d00>")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00010900>La poussière pourrait bien revenir, tu sais...\nEst‐ce que je pourrai faire à nouveau appel\nà toi, dans ce cas ? Je te paierai bien !\nTu es d'accord ?")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x000a0900>Oh... Une dernière chose... N'en parle pas à\nKiko.\n\n\n<0x10009:0x00080900>Il se mettrait en colère en disant que je jette\nl'argent par les fenêtres... Tu n'en parleras pas,\nn'est‐ce pas ?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>Merci de tout mon cœur, <heroname> !\n\n\n\n<0x10009:0x000a0900>Ma maison est rutilante ! Comme c'est agréable\nde vivre dans une maison propre !")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000002>J'ai bien de la chance d'avoir un vaillant\nchevalier comme toi pour m'aider,\n<heroname>.\n\nJe te donnerai tes rubis dès que toute la\npoussière aura disparu. Préviens‐moi quand\ntu auras terminé, d'accord ?\n\n<0x10009:0x00010900>Ou bien veux‐tu t'arrêter pour aujourd'hui ?\n\n\n\n[1-]Ça suffit[2]Je continue")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000a>Oh, quel dommage... Mais ce n'est pas grave.\nPasse me voir quand tu auras envie de t'y\nremettre !")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Je vois que tu mets du cœur à l'ouvrage !\nIl y a bien sûr de la poussière sur le <color red<sol>coloroff>...\n\n\nMais j'en ai vu aussi du côté des <color red<fenêtres>coloroff>, des\n<color red<étagères>coloroff> et sur les <color red<lits>coloroff>. Passe bien partout, il\nfaut que ça brille !")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x30001:0x><heroname> ? Voici ta récompense, viens\ndonc la prendre.")
          	  case 1:
/*<133>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000004>Ah, <heroname> ! Tu sais que tu n'as\npas terminé, n'est‐ce pas ?\n\n\nTu veux t'arrêter là pour aujourd'hui ?\n\n\n\n[1-]Oui ![2]Pas encore")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000a>Oh, quel dommage... Mais ce n'est pas grave.\nPasse me voir quand tu auras envie de t'y\nremettre !")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Je vois que tu mets du cœur à l'ouvrage !\nIl y a bien sûr de la poussière sur le <color red<sol>coloroff>...\n\n\nMais j'en ai vu aussi du côté des <color red<fenêtres>coloroff>, des\n<color red<étagères>coloroff> et sur les <color red<lits>coloroff>. Passe bien partout, il\nfaut que ça brille !")
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
/*<145>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Oh, <heroname> ! Tu t'en vas déjà ?\n\n\n\nPasse donc dire bonjour à Kiko si tu le vois\npendant qu'il patrouille !")
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
/*<274>*/ 	wait_frames(10)
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000d08>Ça alors ! J'avais oublié la couleur du plancher,\ndepuis le temps ! Merci beaucoup,\n<heroname> !\n\n<0x10009:0x000a0900>Tu as illuminé ma journée ! Il est temps de te\npayer pour tes efforts !")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x1f0a0309>Tu me dois <color red<à peu près 30 rubis>coloroff>, petit ! Ça\nt'apprendra à détruire des objets rares !\nEt crois bien que je ne calcule pas cette\nsomme au hasard !")
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
/*<386>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<394>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<398>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<359>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x1f0a0309>Tu me dois <color red<en gros 20 rubis>coloroff>, petit ! Ça\nt'apprendra à détruire des objets rares !\nEt crois bien que je ne calcule pas cette\nsomme au hasard !")
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
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<350>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<346>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x1f0a0309>Tu me dois <color red<environ 10 rubis>coloroff>, petit ! Ça\nt'apprendra à détruire des objets rares !\nEt crois bien que je ne calcule pas cette\nsomme au hasard !")
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
/*<366>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<370>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<374>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*<378>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
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
/*< 20>*/ 								printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000001>Tiens, bonjour, <heroname>.\n\n\n\nSi jamais la poussière s'accumule à nouveau\nchez moi, je te ferai signe !")
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
/*<125>*/ 										printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080d01>Tu voudrais bien nettoyer ma maison ? Je ne\nsupporte pas de perdre mon temps à ça.\n\n\n<0x10009:0x000a0900>Je te donnerai des rubis en échange !\n\n\n\n[1-]D'accord[2]Pas\nquestion !")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00010d07>C'est vrai, tu veux bien ? Merci ! J'étais sûre\nque tu accepterais, <heroname>.\n\n\n<0x10009:0x00010d00>Fais en sorte que ça brille et que ça sente bon,\nveux‐tu ?")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0001090a>Ah bon ? <0x30001:0x><heroname>, tu me déçois.\nJe pensais que tu serais à la hauteur !")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Salut, <heroname>.\n\n\n\n<0x10009:0x00080900>Ma maison est à nouveau sale à faire peur.\nTu veux bien me récurer tout ça ? Il y a des\nrubis à gagner !\n[1-]D'accord[2]Non merci")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000001>Bonjour, <heroname>.\n\n\n\n<0x10009:0x00080900>Kiko est furieux contre moi...\n\n\n\n<0x10009:0x000a0900>Il pense que je dépense mon argent inutilement\nen embauchant une femme de ménage.\n\n\n<0x10009:0x00010c00>...\n\n\n\n<0x10009:0x00080d09>Mais toi, tu n'es pas une femme de ménage,\nalors ça va, n'est‐ce pas ?\n\n\n<0x10009:0x00080900>Voilà, le problème est réglé ! Tu peux donc\ncontinuer à passer faire le ménage de temps\nen temps, n'est‐ce pas, mon petit ?")
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
/*< 15>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080d01>Tu voudrais bien nettoyer ma maison ? Je ne\nsupporte pas de perdre mon temps à ça.\n\n\n<0x10009:0x000a0900>Je te donnerai des rubis en échange !\n\n\n\n[1-]D'accord[2]Pas\nquestion !")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000a0d07>C'est vrai, tu veux bien ? Merci ! J'étais sûre\nque tu accepterais, <heroname>.\n\n\n<0x10009:0x00080904>Bon, où ai‐je mis le balai ? Ça fait tellement\nlongtemps, je n'ai plus la moindre idée d'où\nje l'ai rangé...\n\n<0x10009:0x00090900>De toute façon, tout ce que je veux, c'est être\n<color red<débarrassée de cette poussière>coloroff>.\n\n\n<0x10009:0x00010900>Peu importe la méthode, du moment que la\npoussière <color red<s'envole >coloroff>!\n\n\n<0x10009:0x00080902>Allez, mets‐toi au travail, tu veux bien ?")
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
/*< 13>*/ 								printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0001090a>Ah bon ? <0x30001:0x><heroname>, tu me déçois.\nJe pensais que tu serais à la hauteur !")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080d01>Oh, <heroname> ! Tu vas bien ?\n\n\n\n<0x10009:0x00010900>Tu ne voudrais pas faire un peu de ménage\npour moi ? Ça me sort par les trous de nez !\n\n\n<0x10009:0x000a0900>Et il y a de l'argent de poche à gagner !\n\n\n\n[1-]Oh oui ![2]Non merci")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>Bonjour, <heroname> ! Tu vas bien ?\n\n\n\n<0x10009:0x00080900>Il y a quelque chose dont j'aimerais te\nparler, <heroname>. Ma maison est une\nvraie porcherie...\n\n<0x10009:0x00090900>Kiko me répète tous les jours que je devrais\nfaire le ménage, mais rien n'y fait, je n'arrive\npas à m'y mettre !\n\n<0x10009:0x00080900>Alors je me suis dit que je pourrais te demander\nde le faire pour moi... Ça te ferait de l'argent\nde poche !\n[1-]Bien sûr ![2]Pas\nquestion")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000002>Est‐ce que tout se passe bien à l'école, pour mon\nKiko ?\n\n\nIl est vraiment tout l'opposé de sa mère, alors\nj'imagine que je ne devrais pas m'inquiéter !\n\n[1-]C'est sale, ici[2-]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00010909>Oh. On dirait, oui... D'où peut bien venir toute\ncette saleté ?\n\n\n<0x10009:0x000a090a>Le ménage, ça me déprime. Si quelqu'un pouvait\nle faire à ma place, ça serait tellement gentil !")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010904>Que se passe‐t‐il ? On dirait que tu as quelque\nchose à me dire...")
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000d01>Oh, contente de te voir ici, <heroname> !\n\n\n\n<0x10009:0x000a0900>Dis‐moi, est‐ce que tout se passe bien à l'école\npour mon Kiko ?")
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
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "On a déjà eu cette discussion, maman !")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	wait_frames(30)
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	wait_frames(30)
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Calme‐toi, Kiko ! Ce n'est pas la peine de te\nmettre dans des états pareils !")
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "Bien sûr que si !\n\n\n\nJe suis sûr que <color red<tu paies quelqu'un >coloroff>pour venir\nfaire le ménage !\n\n\nCet argent, je te l'ai donné pour acheter de quoi\nmanger !\n\n\nTu dépenses tellement que je vais finir par ne\nplus avoir de quoi payer l'école de chevalerie !\n\n\nSi tu crois que je pars en patrouille pour que tu\npuisses te payer des luxes comme celui‐ci !\n\n\nÇa suffit, maintenant ! Tu dois arrêter ça !")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	wait_frames(1)
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	wait_frames(90)
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	wait_frames(30)
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Oh, salut, <heroname>... Il est un peu\ntard pour une visite. Il se passe quelque\nchose ?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x120b1100>Tu... Tu n'écoutais pas notre conversation,\nhein ? Tu n'as rien entendu, n'est‐ce pas ?\n[1-]De quoi\ntu parles ?[2-]Désolé...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x12011100>Euh, non, de rien !\n\n\n\n<0x10009:0x12080400>Bon, je dois retourner patrouiller ! Fais\nattention à toi quand tu déambules dans\nles rues !")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x12011100>Oh... Tu as tout entendu...\n\n\n\n<0x10009:0x120f1100>Eh bien, oui, c'est vrai ! Je fais des patrouilles\nde nuit pour gagner un peu d'argent...\n\n\n<0x10009:0x12081100>Et tant pis si tu me méprises ! De toute façon,\ntu n'as pas à espionner les conversations des\ngens !\n\n<0x10009:0x120c0c00>Allez, oublions tous les deux ce qui vient de se\npasser, d'accord ?")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10009:0x00101100>Mais en fait...<pause 30> Maintenant que j'y pense, on ne\nvoit plus de monstres dans le coin, ces derniers\ntemps !\n\n<0x10009:0x00ffff00>Je me demande à quoi c'est dû. Enfin, comme\nça c'est plus paisible, réjouissons‐nous !")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "Salut, <heroname> ! Fais attention, c'est\ndangereux la nuit, par ici.\n\n\n<0x10009:0x00110c09>Oh, et, tu sais, pour l'autre fois... N'en parle à\npersonne, surtout !")
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
/*< 39>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x30001:0x><heroname>... J'aurais préféré que tu ne\nnous voies pas nous disputer. C'est très\nembarrassant...\n\n<0x10009:0x000f1100>Ma mère me fait honte. Elle est tellement\nparesseuse que je ne sais plus quoi faire\npour elle.\n\n<0x10009:0x00080c0b>Mais je vais m'en sortir, ne t'inquiète pas pour\nmoi !\n\n\n<0x10009:0x00011100>Je n'ai toujours pas découvert qui faisait le\nménage pour ma mère...\n\n\n<0x10009:0x00080c16>De quel droit se permet‐on de se mêler de nos\naffaires, comme ça ?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf(/* textboxtype: 1, unk: 1, line: 36 */ "Hé, <heroname> ! Regarde, je suis là\npour faire régner la paix à Célesbourg !\n\n\n<0x10009:0x000c0400>Je veux que cette île devienne un havre de\nsécurité, où chacun vit en harmonie avec les\nautres !\n\n<0x10009:0x00010c52>Hmm...<pause 30> Bizarre, tu n'as pas l'air de me croire...")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x30001:0x><heroname> ! Ne te tourmente pas. Un\njour, tu comprendras ce que ça veut dire\nd'être un chevalier. J'en suis sûr !")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf(/* textboxtype: 0, unk: 1, line: 31 */ "Salut, <heroname> ! Fais attention, c'est\ndangereux la nuit, par ici.\n\n\n<0x10009:0x000b0400>C'est ma zone de patrouille.\n\n\n\n<0x10009:0x00080404>Les monstres posent souvent des problèmes\ndans ce secteur, la nuit.\n\n\nEt c'est le devoir d'un chevalier de protéger la\npopulation !\n\n\n[1-]C'est\nadmirable[2-]Pour l'argent ?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00090c09>C'est pas admirable, c'est juste normal, enfin !\nC'est ça, être un apprenti chevalier !\n\n\nVoir les gens autour de moi heureux et\ninsouciants, la voilà ma récompense !\n\n\n<0x10009:0x00080400>Tu n'es pas un vrai chevalier tant que tu ne l'as\npas compris. <0x10009:0x00000005>Je suis sûr qu'un jour, tu verras la\nlumière, toi aussi.")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000c0c17><0x30001:0x><heroname> ! Qu'est ce qui t'a donné\nl'envie de devenir chevalier ?\n\n\nL'argent ? Garde‐toi bien de te laisser aveugler\npar ses artifices !\n\n\n<0x10009:0x00080405>Regarde‐moi ! Rendre les gens heureux\nm'importe bien plus que l'argent. C'est ça,\nl'esprit de la chevalerie.")
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
/*<254>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000009>Regarde ce que tu as fait, chenapan ! Je\nt'interdis de réduire ma collection en miettes !\n\n\nJe te préviens, si tu recommences, ça va\nchauffer pour ton matricule !")
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 1, unk: 1, line: 39 */ "<0x10009:0x00000007>J'ai une vraie passion pour les antiquités !\nC'est bien simple, tout ce qui se trouve dans\nma maison est honteusement hors de prix.\n\nGare à toi si tu casses quelque chose !")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x1f00000a>NON MAIS JE RÊVE !!!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x1f0a0300>Encore toi ! Mais c'est de l'acharnement !\nQu'est‐ce que je t'ai fait, à la fin ?!")
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
/*<418>*/ 					printf(/* textboxtype: 0, unk: 0, line: 50 */ "Et tu n'as pas le moindre rubis pour me\nrembourser ! C'est à peine croyable,\nquelle outrecuidance !\n\nDécampe d'ici tout de suite, voyou !")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf(/* textboxtype: 0, unk: 1, line: 49 */ "Mais... Tu es complètement sur la paille,\nma parole !\n\n\nAlors comme ça, ça t'amuse de venir détruire\ndes choses chez les gens sans avoir un seul rubis\npour les rembourser ?!\n\nHors de ma vue, fripouille ! Je ne veux pas de\nton argent, de toute façon !")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x1f090300>Tu ne manques pas d'air, pour venir chez moi\ndétruire mes objets de collection !")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x1f090300>Regarde‐moi ce massacre, petit gredin !\nTu détruis tout sur ton passage !\n\n\nTu ne vas pas t'en sortir à si bon compte !\nIl va falloir payer les pots cassés !\n\n\n<0x10009:0x1f0b0700>La facture va être salée... Voyons voir... Oui, ça\ndoit bien aller chercher dans les <color red<20 rubis>coloroff>, ça !\n\n\n<0x10009:0x1f010305>Pas la peine de me regarder comme ça !\nComment ça, je gonfle la facture ?!\n\n\n<0x10009:0x1f090309>Petit insolent ! J'ai un sens inné de la valeur\ndes choses, figure‐toi. Et crois‐moi, tu vas\npayer !")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x1f0a0300>Si je te prends à recommencer, je prendrai des\nmesures !")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "Comment ça, tu n'as pas de quoi payer ?\nMais quelle insolence !\n\n\nEh bien dans ce cas, je prends tout ce que tu as\nsur toi. Et je t'aurai à l'œil, à l'avenir !")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "Mais... Tu es complètement sur la paille,\nma parole !\n\n\nAlors comme ça, ça t'amuse de venir détruire\ndes choses chez les gens sans avoir un seul rubis\npour les rembourser ?!\n\nHors de ma vue, fripouille ! Je ne veux pas de\nton argent, de toute façon !")
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
/*<259>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	wait_frames(10)
/*<260>*/ 	changeScene(0, 0) // 
          }

