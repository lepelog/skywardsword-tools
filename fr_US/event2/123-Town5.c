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
/*< 87>*/ 										printf("\x0E\x01\x09\x04\x00\x07Bonjour, petit ange de mon c\x153ur!\nDonne\x2010moi tout ce que tu veux, je m'en\noccupe immédiatement!\n[1]D'accord[2-]Non merci")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf("\x0E\x01\x09\x04\x00\x08Bonjour, petit ange de mon c\x153ur!\nBienvenue à la consigne!\n\n\nDonne\x2010moi tout ce que tu veux, je m'en\noccupe immédiatement!\n\n[1]D'accord[2-]Non merci")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf("\x0E\x01\x09\x04\x00\x0EBienvenue, Link. As\x2010tu\nquelque chose à confier à la jeune\nfemme qui s'est remise de son c\x153ur \nbrisé et qui est plus belle chaque jour?\n[1]Oui[2-]Non merci")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x05Ah... Bienvenue, Link.\n\n\n\nJe voudrais m'excuser pour mon\ncomportement de l'autre soir.\n\n\nJ'ai pris le temps de bien réfléchir à\nla situation, et je vais beaucoup mieux\nà présent. Fini les folies.\n\nOn dit qu'une fille dont le c\x153ur a été\nbrisé devient plus belle encore.\n\n\nEh bien, j'ai compris que c'était vrai!\nEt j'ai bien l'intention d'embellir\nchaque jour un peu plus!\n\nAlors sans rancune, d'accord?\n\n\n\nBien. Où en étions\x2010nous?\nTu veux déposer quelque chose?\n[1]Oui[2-]Non merci")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x05Bonjour, mon chéri...\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je... Bien, je...\n<r<Je voudrais que tu passes chez moi\nce soir>>. Je dois te dire quelque chose.\n\n\x0E\x01\x09\x04\x08\xA00J'habite juste à côté du bazar.\nTu vas venir, c'est promis?\nJe t'attendrai...")
          								flw_79:
/*< 79>*/ 								printf("As\x2010tu quelque chose à consigner?\n\n\n\n[1]Oui[2-]Non merci")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x00\x05Bonjour, mon chéri...\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je... Bien, je...\n<r<Je voudrais que tu passes chez moi\nce soir>>. Je dois te dire quelque chose.\n\n\x0E\x01\x09\x04\x08\xA00J'habite juste à côté du bazar.\nTu vas venir, c'est promis?\nJe t'attendrai...")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf("\x0E\x01\x09\x04\x00\x07Bienvenue, <r<mon ange>>!\nJe t'attendais, tu sais! Qu'est\x2010ce que\ntu as pour moi aujourd'hui?\n\nJe m'occupe de tout, pas de problème!\nVas\x2010y, vide ton sac!\n[1]D'accord[2-]Non merci")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x08... Aaaaah...")
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x08\xA00Je suis tellement heureuse!\nTu es venu me voir, hein?\n\n\n[1]Euh...[2]Oui")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ANe me regarde pas avec ces yeux\x2010là,\ntu me fais rougir, <r<mon chou>>!")
          					flw_66:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x12\xA00Je ne peux pas m'empêcher de penser à\ntoi. J'ai la tête dans les nuages, j'ai le\nc\x153ur qui s'emballe, le souffle coupé,\nje suis prise de vertiges!\nCrois\x2010tu que... Est\x2010ce que c'est...\n\n\n\n[1]C'est la\ngrippe.[2]C'est l'amour!")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x0F\x120EOh, mon petit comique, toi!")
          						flw_70:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x12\xA00Voyons. Où ai\x2010je la tête? Je dois\nme remettre au travail!\n\n\n\x0E\x01\x09\x04\x0E\x1000Où en était\x2010on? Ah oui, j'allais te dire\nque si tu avais besoin de moi, j'étais\nà ton entière disposition...\n\n[1]Parfait![2-]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FTu es sérieux? Je suis tellement\nheureuse!")
          							flw_72:
/*< 72>*/ 							printf("\x0E\x01\x09\x04\x0D\xF0APardonne moi. Je me laisse aller!\nIl faudrait que je fasse preuve d'un\npeu de retenue et ne pas révéler\nmes rêves les plus fous, comme ça!\n\x0E\x01\x09\x04\x08\xA00Oh, je n'aurais pas dû dire ça non\nplus... Veux\x2010tu que je prenne tes\naffaires, <r<mon c\x153ur>> <r<d'amour>>?\n\n[1]Oui[2-]Non merci")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x0F\xF0DAaah! Je ne peux pas croire que tu\naies prononcé ce mot! Je voudrais\ndisparaître sous terre!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ATu me combles de bonheur...\nMon c\x153ur frémit...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf("\x0E\x01\x09\x04\x00\x05Bienvenue!\nÇa fait plaisir de te voir!\n\n\nJe peux garder tes affaires, si tu veux.\nT'as besoin de faire de la place dans\nta sacoche?\n[1]Oui[2-]Non merci")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf("Bonjour, bienvenue à la consigne...\x0E\x01\x09\x04\x00\x05\nOh!")
/*<279>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 57, 'param3': 6}
/*< 57>*/ 				printf("Ah! Euh... Salut, euh... et euh\nb\x2010bienvenue...\n\n\n[1]Que se\npasse\x2010t\x2010il?[2]Tu es...\ndifférente")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\n\xF18Ah, euh... non, rien.\nTout va très bien.")
          					flw_76:
/*< 76>*/ 					printf("En tout cas, ce n'est pas comme si je\nt'avais attendu avec impatience, ou\nrien du genre...\n\nMais... c'est vrai qu'on se voit tellement\nsouvent qu'on pourrait penser que\nnotre relation évolue. J'avoue que tu\nn'es plus un simple client pour moi...\n\x0E\x01\x09\x04\x10\x1405Euh, bien, je veux dire... Je dis\ndes bêtises.\n\n\nPardon, je suis désolée! Oublie ce que\nje viens de dire, d'accord?\n\n\n\x0E\x01\x09\x04\x07\x800Bon, je me remets au travail.\nTu veux déposer quelque chose?\n\n\n[1]Oui[2-]Non merci")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\n\xF18Tu trouves? Non, pourtant.\nTu te fais des idées!")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bienvenue à la consigne! Dis donc,\ntu viens pas mal souvent, je trouve.\nFaudrait pas que t'en fasses une\nhabitude, hm?\nQu'est-ce que je peux faire pour toi?\nTu as des choses à me laisser?\nDes choses à reprendre?\n[1]Oui[2-]Non merci")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bonjour, bienvenue à la consigne...\nOh, c'est encore toi?\n\n\nTu viens souvent, ces jours-ci...\nEn fait, il y a juste toi qui viens\naussi souvent!\n\n\x0E\x01\x09\x04\x00\x04Oh, mais...\nUne minute...\n\n\nEst\x2010ce que... par hasard...\n\n\n\nTu ne viens pas ici juste pour me voir,\nquand même?\n\n\n[1]Pas du tout![2]Euh, j'avoue...")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ah. Bien sûr...\n\n\n\nC'était prétentieux de ma part.\nQuelle idée idiote!\n\n\n\x0E\x01\x09\x04\n\xC00Non, non, je ne suis pas déçue...\nVraiment pas. Voyons donc!")
          				flw_53:
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x07\x800Euh, bon... J'ai quand même un travail\nà faire, après tout. Tu veux déposer ou\nreprendre quelque chose?\n[1]Oui[2-]Non merci")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x02Tu... l'avoues?\n\n\n\nOuais, ouais... Me semble! Arrête de\nme faire marcher, veux-tu! Je suis pas\ntombée de la dernière pluie!\n\n\x0E\x01\x09\x04\n\xC00Mais... Disons que si c'était vrai,\nça me dérangerait pas...")
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
/*<106>*/ 								printf("\x0E\x01\x09\x04\x00\x09Je suis heureuse que tu m'aies parlé de\ntes sentiments, mon chéri.\nJe te verrai à la consigne!")
          							  case 1:
/*<109>*/ 								printf("\x0E\x01\x09\x04\x00\x0DMon c\x153ur! Je t'ai dit que nous devions\ngarder notre relation secrète pour\nl'instant!\n\nSi tu viens aussi souvent, mon père va\nse douter de quelque chose!\n\n\nQu'est\x2010ce que tu peux bien vouloir,\nà cette heure\x2010ci?\n[1]Te parler.[2]Rien![3]Déposer\ndes objets.")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf("\x0E\x01\x09\x04\x08\x08J'adorerais discuter avec toi pendant\ndes heures, mais mon père nous\nobserve! Nous parlerons plus tard...")
          								  case 1:
/*<112>*/ 									printf("\x0E\x01\x09\x04\x08\xA00Rien? Oh, comme j'adore ton petit\ncôté romantique! Hi hi!")
          								  case 2:
/*<113>*/ 									printf("Pour ça, tu n'as qu'à venir me voir\nà la consigne pendant la journée...\n\n\n\x0E\x01\x09\x04\x0E\x1000On dirait que je ne représente que la\nconsigne, pour toi...")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf("\x0E\x01\x09\x04\x00\x14Je suis forte, je t'oublierai.\nLaisse\x2010moi seule, s'il te plaît.")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf("\x0E\x01\x09\x04\x00\x13Je ne sais pas pourquoi, mais mon père\na l'air d'être de très bonne humeur ces\njours\x2010ci...\n\nÀ croire qu'il n'a même pas remarqué\nque sa fille venait d'avoir le c\x153ur\nbrisé... Pff.")
          									  case 1:
/*<116>*/ 										printf("\x0E\x01\x09\x04\x00\x14Je sais que je t'avais dit que je \nt'oublierais... Mais parfois, la\nnuit, j'ai vraiment mal! C'est\ndonc ça, une peine d'amour?")
          									}
          								  case 1:
/*<114>*/ 									printf("\x0E\x01\x09\x04\x00\x0EOh, Link...\nPersonne ne m'avait avertie que ça\nfaisait si mal, d'avoir le c\x153ur brisé!\x0E\x01\x09\x04\x00\x14")
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
/*<223>*/ 						printf("\x0E\x01\x09\x04\x00\x05\x0E\x03\x01\x00Link...\nTu es venu me voir... Merci.\n\n\n\x0E\x01\x09\x04\x0E\xF00Voilà, il y a quelque chose que je dois\nabsolument te demander.\n\n\nJe ne passerai pas par quatre chemins.")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf("Qu'est\x2010ce que tu penses de moi?\n\n\n\n[1]Tu me plais[2]Tu travailles\nbien")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FC'est vrai? T'es sérieux?\n\n[1]Sérieux![2]C'est à\ndire que...")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf("\x0E\x01\x09\x04\x08\xA08Comme je suis heureuse!\nJe n'arrive pas à y croire...\nDis\x2010le\x2010moi encore, juste une fois!\n\n\x0E\x01\x09\x04\x0E\x1000Je te plais, c'est vraiment, vraiment\nvrai?\n\n\n[1]Bien sûr![2]Non, désolé...")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf("\x0E\x01\x09\x04\x0D\xF0ATu es sérieux, n'est\x2010ce pas?\nSi je découvrais que tu m'as menti,\nje ne sais pas ce que je ferais!\n\n[1]Je suis\nsérieux[2]Eh bien,\nj'ai menti!")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf("\x0E\x01\x09\x04\x08\xA09Oh, merci!\nJe t'aime tellement, mon chéri!\nPardon d'avoir douté de toi!")
/*<318>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 317, 'param3': 6}
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 320, 'param3': 6}
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 314, 'param3': 6}
/*<314>*/ 										printf("\x0E\x01\x09\x04\x00\x13Ne t'inquiète pas. Je comprends tout.\n\n\n\nTu as des choses bien plus importantes\nà gérer en ce moment, je le sais.\n\n\n\x0E\x01\x09\x04\x0E\x1000Ton destin t'attend, tout ça...\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je le vois bien, tu viens toujours\ndéposer des choses à la consigne.\nNe t'en fais pas, je ne te tourmenterai\nplus avec cette histoire.\nJe vais faire de mon mieux pour\nt'offrir le meilleur service possible,\nà la consigne. Rien de plus, rien de\nmoins.\n\x0E\x01\x09\x04\x0E\x1000Mais quand tu auras terminé ce que tu\nas à faire, alors je pourrai te présenter\nà mon père.\n\n\x0E\x01\x09\x04\x0B\xD00Mais pour l'instant, notre histoire\ndoit rester secrète! Je te verrai à\nla consigne...")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf("\x0E\x01\x09\x04\x0F\x1214C'est compris. Tu as répondu\nhonnêtement...\n\n\nDésolée de t'avoir fait perdre ton\ntemps avec ça.")
/*<329>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 328, 'param3': 6}
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 332, 'param3': 6}
/*<332>*/ 										printf("\x0E\x01\x09\x04\x00\x13Je t'en prie. Je n'ai surtout pas besoin\nde ta pitié.\n\n\nÇa va aller. Je vais vite t'oublier.\n\n\n\n\x0E\x01\x09\x04\x14\xD00La prochaine fois que tu viendras\nà la consigne, je t'accueillerai de\nla manière la plus professionnelle\ndu monde.")
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
/*<307>*/ 									printf("\x0E\x01\x09\x04\x0F\x120AMais... Mais...\n\n\n\n\x0E\x01\x09\x04\x0E\x1000Tu ne ressens rien envers moi, et je ne\nsuis rien de plus pour toi que la fille\nde la consigne? C'est vraiment ce que\ntu penses?\n[1]Mais non![2]Euh, oui")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf("\x0E\x01\x09\x04\x0F\x120FSérieusement? Je ne t'intéresse pas\ndu tout?\n\n\n\x0E\x01\x09\x04\x0E\x1000Ah! Je pense que je comprends...\nTu trouves ça difficile d'avouer\ntes vrais sentiments, c'est ça?\n\n[1]C'est ça[2]Pas du tout")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf("\x0E\x01\x09\x04\x08\xA08Comment ça? Alors, je te plais?\n\n\n\n[1]Mais oui...[2]Non, désolé")
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
/*<298>*/ 							printf("\x0E\x01\x09\x04\x0F\x1210Mais...?\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Je ne t'ai peut\x2010être pas posé la question\ncomme il fallait...\n\n\n\x0E\x01\x09\x04\x0E\x1000Bon, laisse\x2010moi réfléchir.\nQu'est\x2010ce que je suis, pour toi?\n\n\n[1]Une fille\nadorable[2]La fille de\nla consigne")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf("\x0E\x01\x09\x04\x00\x07Bonsoir, <r<mon c\x153ur>>! Bienvenue!\n\n\n\nTu es venu jusqu'ici pour me voir...\nÇa me fait bien plaisir!")
          				}
          			  case 1:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x15Oh, bonsoir! Tu es venu jusque chez\nmoi pour me voir...\n\n\nTu n'as pas l'intention de me faire une\ndéclaration, quand même?")
          			}
          		  case 1:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x00\x17J'imagine que tu dois avoir une folle\nenvie de me voir, mais je ne reçois\npas mes clients chez moi.\n\n\x0E\x01\x09\x04\x01\x800Ou, est-ce que je me raconte\nencore des histoires?")
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x00\x02Aaah... Il n'y a donc personne ici qui\npourrait mettre un peu de soleil dans\nma vie?\n\nSi seulement je pouvais rencontrer\nmon prince charmant...\n\n\n\x0E\x01\x09\x04\x01\x800Hé, toi... Ça te prend souvent de\nrentrer chez les gens, comme ça,\nsans permission?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Merci de tout mon c\x153ur,\nLink!\n\n\n\x0E\x01\x09\x04\n\x900Ma maison est propre, propre, propre!\nComme c'est agréable de vivre dans\nune maison sans poussière!")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x01\x909Tu as bien mérité quelques rubis!\nTu es tellement gentil!\nTiens, voilà <r<20 rubis >>!\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf("\x0E\x01\x09\x04\x01\x900La poussière va sûrement revenir.\nEst\x2010ce que je pourrai encore faire\nappel à tes services? Je te paierai,\nbien entendu!")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf("\x0E\x01\x09\x04\n\x900Oh... Une dernière chose...\nN'en parle pas à Kiko...\n\n\n\x0E\x01\x09\x04\x08\x900Il serait bien fâché de savoir que j'ai\ndépensé de l'argent sur quelque chose\nque j'aurais pu faire moi-même...\nMotus, bouche cousue. D'accord?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Merci de tout mon c\x153ur,\nLink!\n\n\n\x0E\x01\x09\x04\n\x900Ma maison est propre, propre, propre!\nComme c'est agréable de vivre dans\nune maison sans poussière!")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf("\x0E\x01\x09\x04\x00\x02Je me trouve bien chanceuse d'avoir\nun vaillant chevalier comme toi pour\nm'aider, Link.\n\nQuand toute la poussière aura disparu,\nje te paierai tes rubis. Viens me voir\ndès que tu auras tout terminé.\n\n\x0E\x01\x09\x04\x01\x900Ou bien veux\x2010tu t'arrêter pour\naujourd'hui?\n[1]J'arrête[2-]Je continue")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf("\x0E\x01\x09\x04\x00\nOh, quel dommage...\nMais ce n'est pas grave. Passe me voir\nquand tu auras envie de t'y remettre!")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x09\x04\n\x900Je vois que tu mets du c\x153ur à\nl'ouvrage! Tu es bien parti!\n\n\nMais j'ai vu de la poussière du côté\ndes <r<fenêtres>>, des <r<étagères>> et sur les\n<r<lits>>. Passe bien partout, il faut que\nça brille!")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf("Attends un peu, Link.\nVoici ta récompense, viens donc la\nprendre.")
          	  case 1:
/*<133>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ah, Link! Je vois que tu\nn'as pas terminé.\n\n\nTu veux t'arrêter là pour aujourd'hui?\n[1]Oui![2-]Pas encore.")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf("\x0E\x01\x09\x04\x00\nOh, quel dommage...\nMais ce n'est pas grave. Passe me voir\nquand tu auras envie de t'y remettre!")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\n\x900Je vois que tu mets du c\x153ur à\nl'ouvrage! Tu es bien parti!\n\n\nMais j'ai vu de la poussière du côté\ndes <r<fenêtres>>, des <r<étagères>> et sur les\n<r<lits>>. Passe bien partout, il faut que\nça brille!")
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
/*<145>*/ 			printf("\x0E\x01\x09\x04\x00\x04Oh, Link!\nTu t'en vas déjà?\n\n\nPasse donc dire bonjour à Kiko si tu\nle vois pendant qu'il patrouille!")
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
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\xD08Mon doux! J'avais oublié la couleur\ndu plancher, depuis le temps!\nMerci beaucoup, Link!\n\n\x0E\x01\x09\x04\n\x900Tu as illuminé ma journée! Viens donc\nici, que je te paie pour tes efforts!")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Tu me dois <r<à peu près 30 rubis>>, petit!\nÇa t'apprendra à détruire des objets\nrares! Et crois bien que je n'ai pas\ninventé cette somme!")
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
/*<386>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<390>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<394>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<398>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<359>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Tu me dois <r<en gros 20 rubis>>, petit!\nÇa t'apprendra à détruire des objets\nrares! Et crois bien que je n'ai pas\ninventé cette somme!")
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
/*<354>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<350>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<346>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<341>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Tu me dois <r<environ 10 rubis>>, petit!\nÇa t'apprendra à détruire des objets\nrares! Et non... je n'ai pas inventé\ncette somme!")
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
/*<366>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<370>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<374>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*<378>*/ 			printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
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
/*< 20>*/ 								printf("\x0E\x01\x09\x04\x00\x01Tiens, bonjour, Link.\n\n\n\nSi jamais la poussière s'accumule à\nnouveau chez moi, je te ferai signe!")
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
/*<125>*/ 										printf("\x0E\x01\x09\x04\x08\xD01Voudrais-tu nettoyer ma maison?\nJe déteste faire le ménage. C'est\nune vraie perte de temps!\n\n\x0E\x01\x09\x04\n\x900Je te donnerai des rubis en échange!\n[1]D'accord[2-]Pas\nquestion!")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf("\x0E\x01\x09\x04\x01\xD07C'est vrai, tu veux m'aider? Merci!\nJ'étais sûre que tu aurais pitié de moi,\nLink.\n\n\x0E\x01\x09\x04\x01\xD00Fais en sorte que ça brille et que ça\nsente bon, veux\x2010tu?")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf("\x0E\x01\x09\x04\x01\x90AAh? Tu me déçois, Link.\nJ'aurais pensé que tu me donnerais\nun coup de main!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Ma maison est toute sale, pour faire\nchangement... Aurais-tu l'obligeance\nde me nettoyer tout ça? Tu pourrais\nte gagner quelques rubis!\n[1]D'accord[2-]Non merci")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Kiko est furieux contre moi...\n\n\n\n\x0E\x01\x09\x04\n\x900Il pense que je dépense mon argent\ninutilement en embauchant une femme\nde ménage.\n\n\x0E\x01\x09\x04\x01\xC00...\n\n\n\n\x0E\x01\x09\x04\x08\xD09Mais toi, tu n'es pas une femme de\nménage... Donc... Pas de problème!\n\n\n\x0E\x01\x09\x04\x08\x900C'est décidé! Tu repasseras faire le\nménage une fois de temps en temps.\nEntendu?")
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
/*< 15>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Voudrais-tu nettoyer ma maison?\nJe déteste faire le ménage. C'est\nune vraie perte de temps!\n\n\x0E\x01\x09\x04\n\x900Je te donnerai des rubis en échange!\n[1]D'accord[2-]Pas\nquestion!")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf("\x0E\x01\x09\x04\n\xD07C'est vrai, tu veux le faire? Wow...\nMerci! J'étais sûre que tu dirais oui,\nLink.\n\n\x0E\x01\x09\x04\x08\x904Bon, où est-ce que j'ai mis le balai?\nÇa fait tellement longtemps que je n'ai\naucune idée où je l'ai rangé... Au fait,\nest-ce que j'ai déjà eu ça, un balai?\n\x0E\x01\x09\x04\x09\x900De toute façon, tout ce que je veux,\nc'est être <r<débarrassée de cette\npoussière>>. Je ne t'en demande\npas plus.\n\x0E\x01\x09\x04\x01\x900Arrange-toi comme tu veux. En autant\nque la poussière <r<s'envole>>! C'est tout ce\nqui compte.\n\n\x0E\x01\x09\x04\x08\x902Bon. Mets\x2010toi au travail, veux- tu?")
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
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x01\x90AAh? Tu me déçois, Link.\nJ'aurais pensé que tu me donnerais\nun coup de main!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Ah! Bonjour, Link!\nTu vas bien?\n\n\n\x0E\x01\x09\x04\x01\x900Voudrais-tu faire un peu de ménage\npour moi? Ça me sort par les oreilles!\n\x0E\x01\x09\x04\n\x900Je te paierai, c'est sûr!\n\n[1]Ça marche![2-]Non merci")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link!\nÇa va?\n\n\n\x0E\x01\x09\x04\x08\x900Il y a quelque chose dont j'aimerais\nte parler, Link.\nMa maison est une vraie porcherie...\n\n\x0E\x01\x09\x04\x09\x900Kiko me répète tous les jours que je\ndevrais faire le ménage, mais y'a rien\nà faire, je ne suis pas capable!\n\n\x0E\x01\x09\x04\x08\x900Alors je me suis dit que je pourrais te\ndemander de le faire pour moi...\nÇa te ferait de l'argent de poche!\n[1]Bien sûr![2-]Pas\nquestion")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que tout se passe bien à l'école,\npour mon Kiko?\n\n\nIl est vraiment motivé. Tout l'opposé\nde sa mère, en fait... J'imagine que je\nne devrais pas m'inquiéter!\n[1]C'est sale, ici[2]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf("\x0E\x01\x09\x04\x01\x909Oh. On dirait, oui... D'où peut bien\nvenir toute cette saleté?\n\n\n\x0E\x01\x09\x04\n\x90ALe ménage, ça me déprime. Ça paraît\nun peu, je suppose... Si quelqu'un\npouvait le faire à ma place, je serais\naux petits oiseaux!")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x01\x904Mais, qu'est-ce qu'il y a? On dirait\nque tu as quelque chose à me dire...")
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\xD01Oh, je suis contente de te voir ici,\nLink!\n\n\n\x0E\x01\x09\x04\n\x900Dis\x2010moi, est\x2010ce que tout se passe bien\nà l'école pour mon Kiko?")
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
/*< 23>*/ 	printf("On a déjà eu cette discussion, maman!")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 24, 'param3': 6}
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 169, 'param3': 6}
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf("Calme\x2010toi, Kiko! Ça ne te donnera\nrien de te fâcher comme ça!")
/*< 26>*/ 	printf("Crois-moi, que je suis fâché!\n\n\n\nJe suis sûr que <r<tu paies quelqu'un>>\npour venir faire le ménage!\n\n\nCet argent, je te l'ai donné pour\nacheter à manger!\n\n\nTu dépenses tellement que je vais\nfinir par ne plus pouvoir payer\nl'école de chevalerie!\n\nSi tu crois que je pars en patrouille\npour que tu puisses te payer des\nluxes du genre!\n\nÇa suffit! Tu dois arrêter ça!")
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
/*< 27>*/ 	printf("Oh, salut, Link...\nIl est un peu tard pour une visite, non?\nQu'est-ce qui se passe?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf("\x0E\x01\x09\x04\x120B\x1100Tu... Tu n'écoutais pas notre\nconversation, hein?\nTu n'as rien entendu, n'est\x2010ce pas?\n[1]De quoi\ntu parles?[2]Désolé...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Euh, non, de rien!\n\n\n\n\x0E\x01\x09\x04\x1208\x400Bon, je dois retourner patrouiller!\nFais attention à toi quand tu te\npromènes dans les rues!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Oh... Tu as tout entendu...\n\n\n\n\x0E\x01\x09\x04\x120F\x1100Eh bien, oui, c'est vrai! Je fais des\npatrouilles de nuit pour gagner un peu\nd'argent... Et puis après!\n\n\x0E\x01\x09\x04\x1208\x1100T'as pas à me regarder de haut!\nRegarde-toi, toi-même : il n'y a\npas de quoi être fier... espionner\nles conversations des gens, pff!\n\x0E\x01\x09\x04\x120C\xC00Bon, on oublie tout ça. Qu'est-ce\nque tu en dis?")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x10\x1100Mais en fait...<pause1E>\nMaintenant que j'y pense, on ne voit\nplus de monstres dans le coin, ces\nderniers temps!\n\x0E\x01\x09\x04ÿ\xFF00Je me demande à quoi c'est dû.\nEnfin, comme ça c'est plus paisible,\nprofitons-en!")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf("Salut, Link!\nFais attention, c'est dangereux la nuit,\npar ici.\n\n\x0E\x01\x09\x04\x11\xC09Oh, et, tu sais, pour l'autre fois...\nÇa demeure entre nous, compris?")
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
/*< 39>*/ 					printf("\x0E\x03\x01\x00Link... J'aurais préféré\nque tu ne sois pas témoin de notre\ndispute. C'est très gênant...\n\n\x0E\x01\x09\x04\x0F\x1100Ma mère me fait honte.\nElle est tellement paresseuse que je\nne sais plus quoi faire pour elle.\n\n\x0E\x01\x09\x04\x08\xC0BMais je vais m'en sortir, ne t'inquiète\npas pour moi!\n\n\n\x0E\x01\x09\x04\x01\x1100Je n'ai toujours pas découvert\nqui faisait le ménage pour ma mère...\n\n\n\x0E\x01\x09\x04\x08\xC16De quel droit se permet\x2010on de se mêler\nde nos affaires, comme ça?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf("Hé, Link! Regarde,\nje fais régner la paix à Célesbourg!\n\n\n\x0E\x01\x09\x04\x0C\x400Je veux que cette île devienne un havre\nde sécurité, où chacun vit en harmonie\navec les autres!\n\n\x0E\x01\x09\x04\x01\xC52Hmm...<pause1E> Pourquoi tu me regardes\ncomme ça? Tu ne me crois pas?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf("\x0E\x03\x01\x00Link! Ne t'inquiète pas.\nUn jour, tu comprendras ce que ça veut\ndire d'être un chevalier. J'en suis sûr!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf("Salut, Link!\nFais attention, c'est dangereux la nuit,\npar ici.\n\n\x0E\x01\x09\x04\x0B\x400C'est ma zone de patrouille, ici.\n\n\n\n\x0E\x01\x09\x04\x08\x404Les monstres s'affairent pas mal\ndans ce secteur, la nuit.\n\n\nEt c'est le devoir d'un chevalier de\nprotéger la population!\n\n\n[1]C'est\nadmirable.[2]Ça paie\nbien?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x09\xC09C'est pas admirable, c'est juste\nnormal finalement. C'est ça, être un\napprenti chevalier!\n\nVoir les gens autour de moi heureux et\ninsouciants, c'est ça ma récompense!\n\n\n\x0E\x01\x09\x04\x08\x400Tant que tu n'as pas compris ça, tu n'es\npas un vrai chevalier. \x0E\x01\x09\x04\x00\x05Je suis sûr qu'un\njour, toi aussi, tu saisiras tout le sens\ndu devoir du chevalier.")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x0C\xC17\x0E\x03\x01\x00Link!\nQu'est-ce qui t'a donné l'envie de\ndevenir chevalier?\n\nL'argent? Garde\x2010toi bien de te laisser\naveugler par l'appât du gain! N'as-tu\npas d'honneur, l'ami?\n\n\x0E\x01\x09\x04\x08\x405Regarde\x2010moi! Rendre les gens heureux\nm'importe bien plus que l'argent.\nC'est ça, l'esprit de la chevalerie.")
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
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x09Regarde ce que tu as fait, mon espèce!\nTu as brisé mes antiquités!\n\n\nFais plus attention la prochaine fois.\nSinon...")
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x00\x07J'ai une vraie passion pour les\nantiquités! C'est bien simple, tout ce\nqui se trouve dans ma maison est\nrecherché et très dispendieux.\nTu es mieux de rien briser!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf("\x0E\x01\x09\x04\x1F00\nNON MAIS JE RÊVE!!!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x1F0A\x300Encore toi!\nMais c'est de l'acharnement!\nQu'est\x2010ce que je t'ai fait, à la fin?")
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
/*<418>*/ 					printf("Et tu n'as pas le moindre rubis pour\nme rembourser! Quelle effronterie!\n\n\nDécampe d'ici tout de suite, voyou!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf("Mais... Tu es complètement fauché,\nma parole!\n\n\nÇa t'amuse de venir détruire des choses\nchez les gens sans avoir un seul rubis \npour les rembourser?\n\nHors de ma vue, scélérat! Je ne veux\npas de ton argent, de toute façon!\nHmf.")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x09\x04\x1F09\x300Tu as du front tout le tour de la tête,\npour venir chez moi détruire mes\nprécieux objets de collection!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x1F09\x300Regarde\x2010moi ce massacre, petit\nmalfaiteur! Tu détruis tout sur\nton passage!\n\nTu ne vas pas t'en sortir à si bon\nmarché! Tu vas payer les pots\ncassés, ça, c'est certain!\n\n\x0E\x01\x09\x04\x1F0B\x700La facture va être salée...\nVoyons voir... Oui, ça doit bien aller\nchercher dans les <r<20 rubis>>, ça!\n\n\x0E\x01\x09\x04\x1F01\x305Et puis, ne me regarde pas comme ça!\nTu penses que j'ai inventé ce chiffre?\n\n\n\x0E\x01\x09\x04\x1F09\x309Petit insolent! J'ai un sens inné de la\nvaleur des choses, figure\x2010toi. Et tu\nvas payer plein prix, fie-toi à moi!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf("\x0E\x01\x09\x04\x1F0A\x300Si je te prends à recommencer, on va\ns'entretenir, toi et moi!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf("Comment ça, tu n'as pas de quoi\npayer? T'es pas gêné!\n\n\nEh bien dans ce cas, je prends tout ce\nque tu as sur toi.  Et je t'aurai à l'\x153il,\nà l'avenir!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf("Mais... Tu es complètement fauché,\nma parole!\n\n\nÇa t'amuse de venir détruire des choses\nchez les gens sans avoir un seul rubis \npour les rembourser?\n\nHors de ma vue, scélérat! Je ne veux\npas de ton argent, de toute façon!\nHmf.")
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

