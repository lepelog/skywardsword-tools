          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070002>Ah, <heroname>!\nAlors, tu penses que tu pourras\nretrouver Zelda?\n\nCourage! Je suis de tout\ncœur avec toi!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000009><0x30001:0x><heroname>!\nReviens nous sain et sauf!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00070811>Comment Zelda a‐t‐elle\npu tomber de son oiseau...?\n\n\nElle qui est si douée pour\nle vol...\n\n\n<0x10009:0x00000e00>Moi qui suis un bien piètre\nmonteur d'oiseau, tout ce\nque je peux faire, c'est prier...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000811>... C'est terrible, <heroname>...<pause 25>\nJ'espère que tu vas vite le retrouver<0x10006:0xfbcd>...<0x10006:0x00cd>")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00010708>Qu'est‐ce qui t'arrive,\n<heroname>? Tu as\nl'air tout affolé.\n\n<0x10009:0x00070c00>Pardon?<pause 25> Tu veux savoir si\nj'ai vu ton célestrier?\n\n\nPourquoi tu me demandes ça?\nQuand tu l'appelles, il ne vient pas...<0x10006:0xfbcd>?<0x10006:0x00cd>\n\n\n<0x10009:0x00010800>Ah...<0x10006:0xfbcd>!<0x10006:0x00cd> Mais alors...<pause 25>\n<0x10008:0xffcd>C'était donc ça...\n\n\n<0x10009:0x00080807>Comment?<pause 25> Ah, non...<pause 25>\nJ'ai...<pause 20> J'ai rien dit...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>Moi, je dois rester garder l'école.\nBon courage pour la <color red<chevauchée\ncéleste>coloroff>, <heroname>.\nJe suis de tout cœur avec toi!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000809>Contrairement à toi,\n<heroname>, quoi que je fasse,\nje suis un bon à rien.\n\nOn m'a dit de reprendre l'entraînement\ndu début en <color green<portant>coloroff> des pots et des\ntonneaux avec (A)...\n\n<0x10009:0x00070e00>Ce n'est pas si mal... Au moins, je suis\npayé pour le faire...")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000002>Ah! Bonjour, <heroname>!\n\n\n\nC'est aujourd'hui qu'a lieu\nla <color red<chevauchée céleste>coloroff>.\n\n\n<0x10009:0x00010800>Moi aussi j'aurais voulu y participer<0x10006:0xfbcd>...<0x10006:0x00cd>\nmais j'ai échoué lors des qualifications.\nAlors aujourd'hui je reste garder\nl'école.\n<0x10009:0x00070800>Et puis il faut que j'apporte ces\n<color red<tonneaux>coloroff> à la cantine.\n\n\n<0x10009:0x00010800>J'aurais au moins voulu te voir\nvoler dans toute ta splendeur,\n<heroname>...\n\n<0x10009:0x00070a00>Eh bien, tant pis.<pause 20> Bon courage, je serai\nde tout cœur avec toi.")
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
/*< 85>*/ 					printf(/* textboxtype: 1, unk: 1, line: 34 */ "Veux-tu faire un peu de tir à la\ncitrouille? C'est <color red<20 rubis >coloroff>la partie.\n[1-]D'accord![2-]C'est quoi,\nles règles?[3]Non merci")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00070a0a>Parfait, on y va! Montre-moi ce que\ntu sais faire, <heroname>!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010811>Je vois, tu as des problèmes\nd'argent... C'est pas drôle.\nPauvre <heroname>...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00070200>Pendant <color red<90 secondes>coloroff>, je vais lancer\ndes citrouilles. Chaque fois que tu\nen touches une, tu gagnes 10 points...\n\n<0x10009:0x00000a00>Mais si tu en touches plusieurs\nde suite, tu gagneras plus de points.\nFais de ton mieux!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070200>Ah, oui... j'avais oublié. Ça va te coûter\n20 rubis à chaque essai.\n\n\n<0x10009:0x00080a00>Si tu le faisais gratuitement, il n'y\naurait pas d'enjeu. Alors, <color red<20 rubis>coloroff> pour\ndu tir à la citrouille, ça te dit?\n[1-]Avec plaisir[2]Non merci")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00070811>Je vois... Tu as autre\nchose à faire, <heroname>...\n\n\nTu as pour mission de sauver Zelda,\naprès tout!<pause 10> Désolé de t'avoir dérangé.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000002>Salut, <heroname>!\nComment ça va?\n\n\nVeux-tu faire un peu de tir à la\ncitrouille? C'est <color red<20 rubis >coloroff>la partie.\n[1-]D'accord![2-]C'est quoi,\nles règles?[3]Non merci")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00070202>Salut, <heroname>!\n\n\n\nJe crois que j'ai atteint ma limite\nde pompes. Je me demande ce que\nje pourrais faire d'autre comme\nexercice...\n<0x10009:0x00000207>Tiens?!<pause 30> Mais c'est un bel arc que\ntu as là! Je suis sûr que tu es un\nexcellent archer, <heroname>!\n[1-]Bien sûr![2-]Bof...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00070aff>Tu ne cesseras jamais de m'épater,\n<heroname>!\n\n\n<0x10009:0x00010200>Même si maintenant je suis assez fort\npour faire 3 000 pompes, je ne t'arrive\npas encore à la cheville...")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00070a00>J'ai une idée! Tu pourrais me montrer\ntes talents d'archer...\n\n\nJe vais lancer des citrouilles dans les\nairs...\n\n\n<0x10009:0x00000200>Et toi, tu essaies de les transpercer\navec tes flèches!\n\n\n<0x10009:0x00070a00>Et puis, lancer des citrouilles, ça me\nfera un bon exercice. Comme ça, on\nfera d'une pierre deux coups!\n\n[1-]D'accord![2]Une autre\nfois")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00070811>Je vois... Tu as autre\nchose à faire, <heroname>...\n\n\nTu as pour mission de sauver Zelda,\naprès tout!<pause 10> Désolé de t'avoir dérangé.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000a09>Ne sois pas modeste!\nJe ne fais que dire la vérité!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000501>Ah, <heroname>!\nC'est terrible! L'île de la Déesse a\ndisparu! Qu'est-ce qui s'est passé?\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>\n<0x10009:0x00000800>Je vois<0x10006:0xfbcd>...<0x10006:0x00cd> Toi, tu sais tout...\n\n\n<0x10009:0x00000200>Je comprends. Ce devait être parce\nque tu dois retrouver Zelda. Plus rien\nne me surprend maintenant.\nL'important c'est que tu la retrouves.")
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
/*< 79>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000012>Hmm... <numeric arg0 0> <0x30004:0x02cd>...\n\n\n\n<0x30001:0x><heroname>... Tu n'es pas dans\nton assiette aujourd'hui? Je ne peux\npas te donner de récompense...\n\n<0x10009:0x00070200>Quand tu vises une citrouille, place ton\ncurseur sur un point de sa trajectoire\nun peu avant qu'elle atteigne ce point.\n\nComme ça, tu devrais pouvoir marquer\n<color red<150 points>coloroff> sans trop de problème...\n\n\n<0x10009:0x00010a00>C'est peut-être pas ma place de te\ndonner des conseils. Tu dois quand\nmême savoir comment t'y prendre.")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00070a00>Si tu veux tenter ta chance à\nnouveau, reviens me voir!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x0000000b><numeric arg0 0> points! Pas mal, <heroname>!\n\n\n\nCe n'est pas exceptionnel, mais ce n'est\npas mauvais non plus. Et tu y es arrivé\nsans verser une goutte de sueur!\n\nLa prochaine fois, essaie de marquer\nau moins <color red<400 points>coloroff>!\n\n\n<0x10009:0x00070a00>Tiens, je te donne les 50 rubis que\nj'ai économisés en travaillant pour\nla dame de la cantine.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0000000b><numeric arg0 0> points! Bravo, <heroname>!\n\n\n\nTu es exceptionnel dans tout ce que\ntu fais! Tu m'épateras toujours!\n\n\n<0x10009:0x00070a00>Tiens, je t'offre ceci en récompense!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00070a00>Penses-tu que tu arriverais à\nmarquer au moins <color red<600 points>coloroff>?\nJ'aimerais beaucoup voir ça!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0000000b><numeric arg0 0> points!\nVraiment impressionnant,\n<heroname>!\n\n<0x10009:0x00070a00>Tu es la fierté de l'école de chevalerie!\nTiens, prends ceci!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000b><numeric arg0 0> points!\nVraiment impressionnant,\n<heroname>!\n\nTu es la fierté de l'école de chevalerie!\n\n\n\n<0x10009:0x00070a00>Accepte ceci en <color red<gage de notre amitié>coloroff>!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001><0x10008:0x01cd><0x30001:0x><heroname>!<0x1000D:0x1906>")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010800><0x10008:0xffcd>Ah...<pause 20> Euh...\n\n\n\n<0x10009:0x00070800>Non, rien...<pause 20> Pardon...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00070a0b>Merci <heroname>, tu m'as été\nd'un grand secours.\n\n\n<0x10009:0x00000209>Ce n'est pas grand‐chose, mais pour\nte remercier, je tiens à te donner la\nmoitié de mon salaire.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>Moi, je dois rester garder l'école.\nBon courage pour la <color red<chevauchée\ncéleste>coloroff>, <heroname>.\nJe suis de tout cœur avec toi!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070203>Il faudrait que tu apportes un <color red<tonneau\n>coloroff>à la dame de la cantine.\n\n\nAppuie sur (A) pour soulever\nun tonneau, puis rappuie sur (A)\npour le <color green<déposer>coloroff> à tes pieds.\n\n<0x10009:0x00010200>Quand tu l'as en mains, <color green<pointe\nla manette Wii Remote>coloroff><color green< vers le haut>coloroff>\net <color green<agite-la>coloroff> pour le <color green<lancer>coloroff>.\n\nPour <color green<faire rouler >coloroff>des objets plus\npetits, comme des pots, <color green<pointe la\nmanette Wii Remote vers le bas >coloroff>et\n<color green<agite-la>coloroff>.\n<0x10009:0x0c070200>Mais il ne faudrait pas casser ceux‐là,\nalors évite de les lancer ou de les faire\nrouler.")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Si tu oublies les commandes, tu peux\n<color green<appuyer sur >coloroff><color green<(2)>coloroff> pour les consulter.<0x10011:0x05cd>\n\n\nLes actions que tu peux réaliser\nselon la situation y sont décrites.\nC'est très pratique.")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Ah, <heroname>...\nTu veux bien m'aider?\n[1-]Oui[2]Pas le temps")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000a0b>Oh, merci! Voici. Je t'explique...")
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070203>Il faudrait que tu apportes un <color red<tonneau\n>coloroff>à la dame de la cantine.\n\n\nAppuie sur (A) pour soulever\nun tonneau, puis rappuie sur (A)\npour le <color green<déposer>coloroff> à tes pieds.\n\n<0x10009:0x00010200>Quand tu l'as en mains, <color green<pointe\nla manette Wii Remote>coloroff><color green< vers le haut>coloroff>\net <color green<agite-la>coloroff> pour le <color green<lancer>coloroff>.\n\nPour <color green<faire rouler >coloroff>des objets plus\npetits, comme des pots, <color green<pointe la\nmanette Wii Remote vers le bas >coloroff>et\n<color green<agite-la>coloroff>.\n<0x10009:0x0c070200>Mais il ne faudrait pas casser ceux‐là,\nalors évite de les lancer ou de les faire\nrouler.")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Si tu oublies les commandes, tu peux\n<color green<appuyer sur >coloroff><color green<(2)>coloroff> pour les consulter.<0x10011:0x05cd>\n\n\nLes actions que tu peux réaliser\nselon la situation y sont décrites.\nC'est très pratique.")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000019>Ah<0x10006:0xfbcd>...<0x10006:0x00cd> Oui, c'est vrai.\nAujourd'hui, tu dois participer\nà la chevauchée céleste!\n\nDans ce cas, tu peux déposer\nça ici.")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00070201><0x30001:0x><heroname>!!!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00071800>Cet uniforme vert te va vraiment\nà merveille! Tu as l'allure d'un vrai\nchevalier.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000b0200>Monsieur le directeur m'a dit que tu\nallais partir en voyage à la recherche\nde Zelda...\n\n<0x10009:0x00001700>Ton courage est vraiment\nextraordinaire... Moi, en comparaison,\nje ne sais pas faire grand‐chose...\n\n<0x1000A:0x000500cd>Mais j'ai quand même fabriqué ça,\nj'y ai mis tout mon cœur! Prends‐le,\nc'est pour toi!")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	wait_frames(20)
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "C'est une <color red<sacoche d'aventurier>coloroff>.\nTu peux y ranger <color red<quatre>coloroff> objets\nqui te serviront durant ton voyage.\n\nTu peux acheter tout un tas d'objets au\nbazar, tu devrais aller y faire un tour.\n\n\n<0x10009:0x00070a09>Je te conseille surtout d'acheter un\n<color yellow<bouclier>coloroff> et des <color yellow<potions>coloroff>. Ça te sera\nsûrement utile!")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x30001:0x><heroname>!\n<0x10009:0x00010c00>Tu dois retrouver Zelda!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "")
          }

