          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf("\x0E\x01\x09\x04\x07\x02Ah, Link ! Alors, tu penses que tu\npourras retrouver Zelda ?\n\n\nCourage ! Je suis de tout c\x153ur avec toi !")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x09\x0E\x03\x01\x00Link ! Reviens ici sain et sauf !")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf("\x0E\x01\x09\x04\x07\x811Comment Zelda a\x2010t\x2010elle pu tomber de son\noiseau...?\n\n\nElle qui est si douée pour le vol...\n\n\n\n\x0E\x01\x09\x04\x00\xE00Moi qui suis un bien piètre monteur d'oiseau,\ntout ce que je peux faire, c'est prier...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x811... C'est affreux, Link...<pause19> J'espère\nque tu vas vite le retrouver\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x708Qu'est\x2010ce qui t'arrive, Link ?\nTu as l'air tout affolé.\n\n\n\x0E\x01\x09\x04\x07\xC00Comment ?<pause19> Si je n'ai pas vu ton célestrier ?\n\n\n\nPourquoi tu me demandes ça ? Quand tu\nl'appelles, il ne vient pas...\x0E\x01\x06\x02\xFBCD?\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x01\x800Ah...\x0E\x01\x06\x02\xFBCD!\x0E\x01\x06\x02Í Mais alors...<pause19> \x0E\x01\x08\x02\xFFCDC'était donc ça...\n\n\n\n\x0E\x01\x09\x04\x08\x807Comment ?<pause19> Ah, non...<pause19> J'ai...<pause14> J'ai rien dit...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf("\x0E\x01\x09\x04\x00\x09Moi, je dois rester garder l'école. Bon courage\npour la <r<chevauchée céleste>>, Link.\nJe suis de tout c\x153ur avec toi !")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf("\x0E\x01\x09\x04\x00\x809Contrairement à toi, Link, quoi\nque je fasse, je suis un bon à rien.\n\n\nOn m'a dit de reprendre l'entraînement du\ndébut en <g<portant>> des pots et des tonneaux\navec (A)...\n\n\x0E\x01\x09\x04\x07\xE00Enfin, au moins, je suis payé pour ça...")
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x00\x02Ah ! Bonjour, Link !\n\n\n\nC'est aujourd'hui qu'a lieu la <r<chevauchée céleste>>.\n\n\n\n\x0E\x01\x09\x04\x01\x800Moi aussi j'aurais voulu y participer\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í mais j'ai\néchoué lors des qualifications. Alors aujourd'hui\nje reste garder l'école.\n\n\x0E\x01\x09\x04\x07\x800Et puis il faut que j'apporte ces <r<tonneaux >>à la\ncantine.\n\n\n\x0E\x01\x09\x04\x01\x800J'aurais au moins voulu te voir voler dans toute\nta splendeur, Link...\n\n\n\x0E\x01\x09\x04\x07\xA00Enfin, tant pis.<pause14> Bon courage, je serai de tout\nc\x153ur avec toi.")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf("\x0E\x01\x09\x04\x00\x02Tu veux encore faire du tir à la citrouille ?\nÇa te coûtera<r< 20 rubis>>.\n[1]D'accord ![2]C'est quoi,\nles règles ?[3-]Non merci")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x07\xA0AAlors, c'est parti !\nCourage, Link !")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x01\x811Je vois, tu as des problèmes d'argent...\nPauvre Link...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf("\x0E\x01\x09\x04\x07\x200Pendant <r<90 secondes>>, je vais jeter des\ncitrouilles. Chaque fois que tu en toucheras\nune, tu gagneras 10 points...\n\n\x0E\x01\x09\x04\x00\xA00Mais si tu en touches plusieurs à la suite, tu\ngagneras plus de points, alors fais de ton\nmieux !")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf("\x0E\x01\x09\x04\x07\x200Ah, mais je devrai te demander 20 rubis à\nchaque essai.\n\n\n\x0E\x01\x09\x04\x08\xA00Si tu le faisais gratuitement, il n'y aurait pas\nd'enjeu. Alors, <r<20 rubis >>pour du tir à la\ncitrouille, ça te dit ?\n[1]Avec plaisir[2-]Non merci")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf("\x0E\x01\x09\x04\x07\x811Je vois... Tu as autre chose à faire,\nLink...\n\n\nTu as pour mission de sauver Zelda !<pause0A> Désolé de\nt'avoir ennuyé.")
          					}
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x02Salut, Link ! Comment vas\x2010tu ?\n\n\n\nTu veux faire un peu de tir à la citrouille ?\nC'est <r<20 rubis >>la partie.\n[1]D'accord ![2]C'est quoi,\nles règles ?[3-]Non merci")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x07\x202Salut, Link !\n\n\n\nJe crois que j'ai atteint ma limite de pompes.\nJe me demande ce que je pourrais faire d'autre\ncomme exercice...\n\n\x0E\x01\x09\x04\x00\x207Tiens ?!<pause1E> Mais c'est un bel arc que tu as là !\nJe suis sûr que tu es un excellent archer,\nLink !\n[1]Bien sûr ![2]Mais non,\nvoyons")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf("\x0E\x01\x09\x04\x07\xAFFJe le savais, Link !\n\n\n\n\x0E\x01\x09\x04\x01\x200Même si maintenant je suis assez fort pour\nfaire 3 000 pompes, je ne t'arrive pas encore\nà la cheville...")
          					flw_59:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x07\xA00J'ai une idée ! Si tu me montrais tes talents\nd'archer ?\n\n\nJe vais jeter des citrouilles en l'air.\n\n\n\n\x0E\x01\x09\x04\x00\x200Essaie de les transpercer avec tes flèches !\n\n\n\n\x0E\x01\x09\x04\x07\xA00Et puis, jeter des citrouilles, ça me fera un bon\nexercice. Comme ça, on fera d'une pierre deux\ncoups !\n\n[1]D'accord ![2-]Une autre\nfois")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf("\x0E\x01\x09\x04\x07\x811Je vois... Tu as autre chose à faire,\nLink...\n\n\nTu as pour mission de sauver Zelda !<pause0A> Désolé de\nt'avoir ennuyé.")
          					}
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x00\xA09Ne sois pas modeste ! Je ne fais que dire la\nvérité !")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x501Ah, Link ! C'est terrible ! L'île de\nla Déesse a disparu !\n\n\nQu'est\x2010ce qui a bien pu se passer ?\n\n\n\n<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A> \x0E\x01\x09\x04\x00\x800Je vois\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Toi, tu sais tout...\n\n\n\n\x0E\x01\x09\x04\x00\x200Je suppose que c'était nécessaire pour que tu\nretrouves Zelda.\n\n\nTrès bien, à présent, quoi qu'il arrive, je ne\nserai plus surpris. Tu dois à tout prix retrouver\nZelda !")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 78, 'param3': 44}
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 28, 'param2': 9472, 'next': 79, 'param3': 13}
/*< 79>*/ 			printf("\x0E\x01\x09\x04\x00\x12Hmm... <numeric arg0> \x0E\x03\x04\x02\x2CD...\n\n\n\n\x0E\x03\x01\x00Link... Tu n'es pas dans ton\nassiette aujourd'hui ? Je ne peux pas te\ndonner de récompense...\n\n\x0E\x01\x09\x04\x07\x200Quand tu vises une citrouille, place ton curseur\nsur un point de sa trajectoire un peu avant\nqu'elle atteigne ce point.\n\nComme ça, tu devrais pouvoir marquer\n<r<150 points>> sans trop de problème...\n\n\n\x0E\x01\x09\x04\x01\xA00Ah, désolé ! Je suppose que tu n'as pas besoin\nde mes conseils !")
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Si tu veux tenter ta chance à nouveau, reviens\nme voir !")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points ! Pas mal, Link !\n\n\n\nCe n'est pas exceptionnel, mais ce n'est pas\nmauvais non plus. Et tu y es arrivé sans\nverser une goutte de sueur !\n\nLa prochaine fois, essaie de marquer au moins\n<r<400 points>> !\n\n\n\x0E\x01\x09\x04\x07\xA00Tiens, je te donne les 50 rubis que j'ai\néconomisés en travaillant pour la dame\nde la cantine.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points ! Bravo, Link !\n\n\n\nQuoi que tu fasses, tu es toujours aussi\nexceptionnel !\n\n\n\x0E\x01\x09\x04\x07\xA00Tiens, je t'offre ceci en récompense !")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Tu crois que tu arriverais à marquer au moins\n<r<600 points>> ? J'aimerais beaucoup voir ça !")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points ! Vraiment impressionnant,\nLink !\n\n\n\x0E\x01\x09\x04\x07\xA00Tu es vraiment la fierté de l'école de\nchevalerie ! Prends ceci !")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points ! Vraiment impressionnant,\nLink !\n\n\nTu es vraiment la fierté de l'école de\nchevalerie !\n\n\n\x0E\x01\x09\x04\x07\xA00Accepte ceci en <r<gage de notre amitié >>!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x1CD\x0E\x03\x01\x00Link !\x0E\x01\x0D\x02\x1906")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf("\x0E\x01\x09\x04\x01\x800\x0E\x01\x08\x02\xFFCDAh...<pause14> Euh...\n\n\n\n\x0E\x01\x09\x04\x07\x800Non, rien...<pause14> Pardon...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x07\xA0BMerci Link, tu m'as été d'un\ngrand secours.\n\n\n\x0E\x01\x09\x04\x00\x209Ce n'est pas grand\x2010chose, mais pour te\nremercier, je tiens à te donner la moitié\nde mon salaire.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x09Moi, je dois rester garder l'école. Bon courage\npour la <r<chevauchée céleste>>, Link.\nJe suis de tout c\x153ur avec toi !")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ah, Link... Tu veux m'aider ?\n\n\n\nTu es toujours si gentil. Eh bien j'accepte ton\naide avec plaisir.\n\n\n\x0E\x01\x09\x04\x07\x203Il faudrait que tu apportes un <r<tonneau >>à la\ndame de la cantine.\n\n\nAppuie sur (A) pour soulever un tonneau, puis\nrappuie sur (A) pour le <g<poser>> à tes pieds.\n\n\n\x0E\x01\x09\x04\x01\x200Quand tu le soulèves au\x2010dessus de ta tête, tu\npeux le <g<jeter>>.\n\n\nEt tu peux même <g<faire rouler >>des objets plus\npetits, comme des pots.\n\n\n\x0E\x01\x09\x04\xC07\x200Mais il ne faudrait pas casser ceux\x2010là, alors\névite de les jeter ou de les faire rouler.")
/*<114>*/ 			printf("\x0E\x01\x09\x04\x01\x200Si tu veux en savoir plus sur les commandes, tu\npeux <g<appuyer sur \x0E\x02\x04\x02\x13CD>> pour les consulter.\x0E\x01\x11\x02\xBCD\n\n\nLes actions que tu peux réaliser selon la\nsituation y sont décrites. C'est très pratique.")
          		  case 1:
/*< 33>*/ 			printf("")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf("")
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ah, Link... Tu veux m'aider ?\n\n\n\nTu es toujours si gentil. Eh bien j'accepte ton\naide avec plaisir.\n\n\n\x0E\x01\x09\x04\x07\x203Il faudrait que tu apportes un <r<tonneau >>à la\ndame de la cantine.\n\n\nAppuie sur (A) pour soulever un tonneau, puis\nrappuie sur (A) pour le <g<poser>> à tes pieds.\n\n\n\x0E\x01\x09\x04\x01\x200Quand tu le soulèves au\x2010dessus de ta tête, tu\npeux le <g<jeter>>.\n\n\nEt tu peux même <g<faire rouler >>des objets plus\npetits, comme des pots.\n\n\n\x0E\x01\x09\x04\xC07\x200Mais il ne faudrait pas casser ceux\x2010là, alors\névite de les jeter ou de les faire rouler.")
/*<113>*/ 				printf("\x0E\x01\x09\x04\x01\x200Si tu veux en savoir plus sur les commandes, tu\npeux <g<appuyer sur \x0E\x02\x04\x02\x13CD>> pour les consulter.\x0E\x01\x11\x02\xBCD\n\n\nLes actions que tu peux réaliser selon la\nsituation y sont décrites. C'est très pratique.")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf("")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("\x0E\x01\x09\x04\x07\x201\x0E\x03\x01\x00Link !!!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf("\x0E\x01\x09\x04\x07\x1800Cet uniforme vert te va vraiment à merveille !\nTu as l'allure d'un vrai chevalier.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf("\x0E\x01\x09\x04\x0B\x200Monsieur le directeur m'a dit que tu allais\npartir en voyage à la recherche de Zelda...\n\n\n\x0E\x01\x09\x04\x00\x1700Ton courage est vraiment extraordinaire...\nMoi, en comparaison, je ne sais pas faire\ngrand\x2010chose...\n\n\x0E\x01\n\x04\x05ÍMais j'ai quand même fabriqué ça, j'y ai mis\ntout mon c\x153ur ! Prends\x2010le, c'est pour toi !")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 50, 'param3': 6}
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf("C'est une <r<sacoche d'aventurier>>. Tu peux y\nranger <r<quatre>> objets qui te serviront durant\nton voyage.\n\nTu peux acheter tout un tas d'objets au marché\ncouvert, tu devrais aller y faire un tour.\n\n\n\x0E\x01\x09\x04\x07\xA09Je te conseille surtout d'acheter un <y<bouclier\n>>et des <y<potions>>. Ça te sera sûrement utile !")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf("\x0E\x03\x01\x00Link ! \x0E\x01\x09\x04\x01\xC00Tu dois retrouver Zelda !")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("")
          }

