          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf("\x0E\x01\x09\x04\x07\x02Ah, Link !\nAlors, tu penses que tu pourras\nretrouver Zelda ?\n\nCourage ! Je suis de tout\nc\x153ur avec toi !")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x09\x0E\x03\x01\x00Link !\nReviens ici sain et sauf !")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf("\x0E\x01\x09\x04\x07\x811Comment Zelda a\x2010t\x2010elle\npu tomber de son oiseau...?\n\n\nElle qui est si douée pour\nle vol...\n\n\n\x0E\x01\x09\x04\x00\xE00Moi qui suis un bien piètre\nmonteur d'oiseau, tout ce\nque je peux faire, c'est prier...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x811... C'est affreux, Link...<pause19>\nJ'espère que tu vas vite le retrouver\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x708Qu'est\x2010ce qui t'arrive,\nLink ? Tu as\nl'air tout affolé.\n\n\x0E\x01\x09\x04\x07\xC00Comment ?<pause19> Si je n'ai pas vu ton\ncélestrier ?\n\n\nPourquoi tu me demandes ça ?\nQuand tu l'appelles, il ne vient pas...\x0E\x01\x06\x02\xFBCD?\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x01\x800Ah...\x0E\x01\x06\x02\xFBCD!\x0E\x01\x06\x02Í Mais alors...<pause19>\n\x0E\x01\x08\x02\xFFCDC'était donc ça...\n\n\n\x0E\x01\x09\x04\x08\x807Comment ?<pause19> Ah, non...<pause19>\nJ'ai...<pause14> J'ai rien dit...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf("\x0E\x01\x09\x04\x00\x09Moi, je dois rester garder l'école.\nBon courage pour la <r<chevauchée\ncéleste>>, Link.\nJe suis de tout c\x153ur avec toi !")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf("\x0E\x01\x09\x04\x00\x809Contrairement à toi,\nLink, quoi que je fasse,\nje suis un bon à rien.\n\nOn m'a dit de reprendre l'entraînement\ndu début en <g<portant>> des pots et des\ntonneaux avec (A)...\n\n\x0E\x01\x09\x04\x07\xE00Enfin, au moins, je suis payé pour ça...")
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x00\x02Ah ! Bonjour, Link !\n\n\n\nC'est aujourd'hui qu'a lieu\nla <r<chevauchée céleste>>.\n\n\n\x0E\x01\x09\x04\x01\x800Moi aussi j'aurais voulu y participer\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nmais j'ai échoué lors des qualifications.\nAlors aujourd'hui je reste garder\nl'école.\n\x0E\x01\x09\x04\x07\x800Et puis il faut que j'apporte ces\n<r<tonneaux>> à la cantine.\n\n\n\x0E\x01\x09\x04\x01\x800J'aurais au moins voulu te voir\nvoler dans toute ta splendeur,\nLink...\n\n\x0E\x01\x09\x04\x07\xA00Enfin, tant pis.<pause14> Bon courage, je serai\nde tout c\x153ur avec toi.")
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
/*< 85>*/ 					printf("\x0E\x01\x09\x04\x00\x02Tu veux encore faire du tir à la\ncitrouille ? Ça te coûtera<r< 20 rubis>>.\n[1]D'accord ![2]C'est quoi,\nles règles ?[3-]Non merci")
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
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x01\x811Je vois, tu as des problèmes\nd'argent... Pauvre Link...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf("\x0E\x01\x09\x04\x07\x200Pendant <r<90 secondes>>, je vais jeter des\ncitrouilles. Chaque fois que tu en\ntoucheras une, tu gagneras 10 points...\n\n\x0E\x01\x09\x04\x00\xA00Mais si tu en touches plusieurs à la\nsuite, tu gagneras plus de points, alors\nfais de ton mieux !")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf("\x0E\x01\x09\x04\x07\x200Ah, mais je devrai te demander\n20 rubis à chaque essai.\n\n\n\x0E\x01\x09\x04\x08\xA00Si tu le faisais gratuitement, il n'y\naurait pas d'enjeu. Alors, <r<20 rubis\n>>pour du tir à la citrouille, ça te dit ?\n[1]Avec plaisir[2-]Non merci")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf("\x0E\x01\x09\x04\x07\x811Je vois... Tu as autre\nchose à faire, Link...\n\n\nTu as pour mission de sauver\nZelda !<pause0A> Désolé de t'avoir ennuyé.")
          					}
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x02Salut, Link !\nComment vas\x2010tu ?\n\n\nTu veux faire un peu de tir à la\ncitrouille ? C'est <r<20 rubis >>la partie.\n[1]D'accord ![2]C'est quoi,\nles règles ?[3-]Non merci")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x07\x202Salut, Link !\n\n\n\nJe crois que j'ai atteint ma limite\nde pompes. Je me demande ce que\nje pourrais faire d'autre comme\nexercice...\n\x0E\x01\x09\x04\x00\x207Tiens ?!<pause1E> Mais c'est un bel arc que\ntu as là ! Je suis sûr que tu es un\nexcellent archer, Link !\n[1]Bien sûr ![2]Mais non,\nvoyons")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf("\x0E\x01\x09\x04\x07\xAFFJe le savais, Link !\n\n\n\n\x0E\x01\x09\x04\x01\x200Même si maintenant je suis assez fort\npour faire 3 000 pompes, je ne t'arrive\npas encore à la cheville...")
          					flw_59:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x07\xA00J'ai une idée ! Si tu me montrais tes\ntalents d'archer ?\n\n\nJe vais jeter des citrouilles en l'air.\n\n\n\n\x0E\x01\x09\x04\x00\x200Essaie de les transpercer avec tes\nflèches !\n\n\n\x0E\x01\x09\x04\x07\xA00Et puis, jeter des citrouilles, ça me\nfera un bon exercice. Comme ça, on\nfera d'une pierre deux coups !\n\n[1]D'accord ![2-]Une autre\nfois")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf("\x0E\x01\x09\x04\x07\x811Je vois... Tu as autre\nchose à faire, Link...\n\n\nTu as pour mission de sauver\nZelda !<pause0A> Désolé de t'avoir ennuyé.")
          					}
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x00\xA09Ne sois pas modeste !\nJe ne fais que dire la vérité !")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x501Ah, Link !\nC'est terrible ! L'île de la Déesse\na disparu !\n\nQu'est\x2010ce qui a bien pu se passer ?\n\n\n\n<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\x0E\x01\x09\x04\x00\x800Je vois\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Toi, tu sais tout...\n\n\n\x0E\x01\x09\x04\x00\x200Je suppose que c'était nécessaire pour\nque tu retrouves Zelda.\n\n\nTrès bien, à présent, quoi qu'il arrive,\nje ne serai plus surpris. Tu dois à tout\nprix retrouver Zelda !")
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
/*< 79>*/ 			printf("\x0E\x01\x09\x04\x00\x12Hmm... <numeric arg0> \x0E\x03\x04\x02\x2CD...\n\n\n\n\x0E\x03\x01\x00Link... Tu n'es pas dans\nton assiette aujourd'hui ? Je ne peux\npas te donner de récompense...\n\n\x0E\x01\x09\x04\x07\x200Quand tu vises une citrouille, place ton\ncurseur sur un point de sa trajectoire\nun peu avant qu'elle atteigne ce point.\n\nComme ça, tu devrais pouvoir marquer\n<r<150 points>> sans trop de problème...\n\n\n\x0E\x01\x09\x04\x01\xA00Ah, désolé ! Je suppose que tu n'as pas\nbesoin de mes conseils !")
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Si tu veux tenter ta chance à\nnouveau, reviens me voir !")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points !\nPas mal, Link !\n\n\nCe n'est pas exceptionnel, mais ce n'est\npas mauvais non plus. Et tu y es arrivé\nsans verser une goutte de sueur !\n\nLa prochaine fois, essaie de marquer\nau moins <r<400 points>> !\n\n\n\x0E\x01\x09\x04\x07\xA00Tiens, je te donne les 50 rubis que\nj'ai économisés en travaillant pour\nla dame de la cantine.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points ! Bravo, Link !\n\n\n\nQuoi que tu fasses, tu es toujours aussi\nexceptionnel !\n\n\n\x0E\x01\x09\x04\x07\xA00Tiens, je t'offre ceci en récompense !")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Tu crois que tu arriverais\nà marquer au moins <r<600 points>> ?\nJ'aimerais beaucoup voir ça !")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points !\nVraiment impressionnant,\nLink !\n\n\x0E\x01\x09\x04\x07\xA00Tu es vraiment la fierté de l'école de\nchevalerie ! Prends ceci !")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> points !\nVraiment impressionnant,\nLink !\n\nTu es vraiment la fierté de l'école de\nchevalerie !\n\n\n\x0E\x01\x09\x04\x07\xA00Accepte ceci en <r<gage de notre amitié >>!")
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
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x07\xA0BMerci Link, tu m'as été\nd'un grand secours.\n\n\n\x0E\x01\x09\x04\x00\x209Ce n'est pas grand\x2010chose, mais pour\nte remercier, je tiens à te donner la\nmoitié de mon salaire.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x09Moi, je dois rester garder l'école.\nBon courage pour la <r<chevauchée\ncéleste>>, Link.\nJe suis de tout c\x153ur avec toi !")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x07\x203Il faudrait que tu apportes un <r<tonneau\n>>à la dame de la cantine.\n\n\nAppuie sur (A) pour soulever\nun tonneau, puis rappuie sur (A)\npour le <g<poser>> à tes pieds.\n\n\x0E\x01\x09\x04\x01\x200Quand tu l'as en mains, <g<pointe\nla >><g<télécommande Wii vers le haut>>\net <g<donne un coup >><g<sec>> pour le <g<jeter>>.\n\nPour <g<faire rouler >>des objets plus\npetits, comme des pots, <g<pointe la\ntélécommande Wii vers le bas >>et\n<g<donne un coup sec>>.\n\x0E\x01\x09\x04\xC07\x200Mais il ne faudrait pas casser ceux\x2010là,\nalors évite de les jeter ou de les faire\nrouler.")
/*<114>*/ 			printf("\x0E\x01\x09\x04\x01\x200Si tu oublies les commandes, tu peux\n<g<appuyer sur >><g<(2)>> pour les consulter.\x0E\x01\x11\x02\x5CD\n\n\nLes actions que tu peux réaliser\nselon la situation y sont décrites.\nC'est très pratique.")
          		  case 1:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ah, Link...\nTu veux bien m'aider ?\n[1]Oui[2-]Pas le temps")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x00\xA0BOh, merci ! Alors, je t'explique...")
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x07\x203Il faudrait que tu apportes un <r<tonneau\n>>à la dame de la cantine.\n\n\nAppuie sur (A) pour soulever\nun tonneau, puis rappuie sur (A)\npour le <g<poser>> à tes pieds.\n\n\x0E\x01\x09\x04\x01\x200Quand tu l'as en mains, <g<pointe\nla >><g<télécommande Wii vers le haut>>\net <g<donne un coup >><g<sec>> pour le <g<jeter>>.\n\nPour <g<faire rouler >>des objets plus\npetits, comme des pots, <g<pointe la\ntélécommande Wii vers le bas >>et\n<g<donne un coup sec>>.\n\x0E\x01\x09\x04\xC07\x200Mais il ne faudrait pas casser ceux\x2010là,\nalors évite de les jeter ou de les faire\nrouler.")
/*<113>*/ 				printf("\x0E\x01\x09\x04\x01\x200Si tu oublies les commandes, tu peux\n<g<appuyer sur >><g<(2)>> pour les consulter.\x0E\x01\x11\x02\x5CD\n\n\nLes actions que tu peux réaliser\nselon la situation y sont décrites.\nC'est très pratique.")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf("\x0E\x01\x09\x04\x00\x19Ah\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Oui, c'est vrai.\nAujourd'hui, tu dois participer\nà la chevauchée céleste !\n\nDans ce cas, tu peux poser\nça ici.")
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
/*< 20>*/ 	printf("\x0E\x01\x09\x04\x07\x1800Cet uniforme vert te va vraiment\nà merveille ! Tu as l'allure d'un vrai\nchevalier.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf("\x0E\x01\x09\x04\x0B\x200Monsieur le directeur m'a dit que tu\nallais partir en voyage à la recherche\nde Zelda...\n\n\x0E\x01\x09\x04\x00\x1700Ton courage est vraiment\nextraordinaire... Moi, en comparaison,\nje ne sais pas faire grand\x2010chose...\n\n\x0E\x01\n\x04\x05ÍMais j'ai quand même fabriqué ça,\nj'y ai mis tout mon c\x153ur ! Prends\x2010le,\nc'est pour toi !")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 50, 'param3': 6}
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf("C'est une <r<sacoche d'aventurier>>.\nTu peux y ranger <r<quatre>> objets\nqui te serviront durant ton voyage.\n\nTu peux acheter tout un tas d'objets au\nmarché couvert, tu devrais aller y faire\nun tour.\n\n\x0E\x01\x09\x04\x07\xA09Je te conseille surtout d'acheter un\n<y<bouclier>> et des <y<potions>>. Ça te sera\nsûrement utile !")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf("\x0E\x03\x01\x00Link !\n\x0E\x01\x09\x04\x01\xC00Tu dois retrouver Zelda !")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("")
          }

