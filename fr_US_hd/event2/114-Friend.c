          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00070002>Ah, <heroname>! Alors, tu penses que\ntu pourras retrouver Zelda?\n\n\nCourage! Je suis de tout cœur avec toi!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000009><0x30001:0x><heroname>! Reviens nous sain et sauf!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00070811>Comment Zelda a‐t‐elle pu tomber de\nson oiseau...?\n\n\nElle qui est si douée pour le vol...\n\n\n\n<0x10009:0x00000e00>Moi qui suis un bien piètre monteur d'oiseau,\ntout ce que je peux faire, c'est prier...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000811>... C'est terrible, <heroname>...<pause 25>\nJ'espère que tu vas vite le retrouver<0x10006:0xfbcd>...<0x10006:0x00cd>")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00010708>Qu'est‐ce qui t'arrive, <heroname>?\nTu as l'air tout affolé.\n\n\n<0x10009:0x00070c00>Pardon?<pause 25> Tu veux savoir si j'ai vu ton célestrier?\n\n\n\nPourquoi tu me demandes ça? Quand tu\nl'appelles, il ne vient pas...<0x10006:0xfbcd>?<0x10006:0x00cd>\n\n\n<0x10009:0x00010800>Ah...<0x10006:0xfbcd>!<0x10006:0x00cd> Mais alors...<pause 25> <0x10008:0xffcd>C'était donc ça...\n\n\n\n<0x10009:0x00080807>Comment?<pause 25> Ah, non...<pause 25> J'ai...<pause 20> J'ai rien dit...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Moi, je dois rester garder l'école. Bon courage\npour la <color red<chevauchée céleste>coloroff>, <heroname>.\nJe suis de tout cœur avec toi!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000809>Contrairement à toi, <heroname>, quoi\nque je fasse, je suis un bon à rien.\n\n\nOn m'a dit de reprendre l'entraînement du\ndébut en <color green<portant>coloroff> des pots et des tonneaux\navec (A)...\n\n<0x10009:0x00070e00>Ce n'est pas si mal... Au moins, je suis payé\npour le faire...")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000002>Ah! Bonjour, <heroname>!\n\n\n\nC'est aujourd'hui qu'a lieu la <color red<chevauchée céleste>coloroff>.\n\n\n\n<0x10009:0x00010800>Moi aussi j'aurais voulu y participer<0x10006:0xfbcd>...<0x10006:0x00cd> mais j'ai\néchoué lors des qualifications. Alors aujourd'hui\nje reste garder l'école.\n\n<0x10009:0x00070800>Et puis il faut que j'apporte ces <color red<tonneaux\n>coloroff>à la cantine.\n\n\n<0x10009:0x00010800>J'aurais au moins voulu te voir voler dans\ntoute ta splendeur, <heroname>...\n\n\n<0x10009:0x00070a00>Eh bien, tant pis.<pause 20> Bon courage, je serai de tout\ncœur avec toi.")
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
/*< 85>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "Veux-tu faire un peu de tir à la citrouille?\nC'est <color red<20 rubis >coloroff>la partie.\n[1-]D'accord![2-]C'est quoi, les règles?[3]Non merci")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00070a0a>Parfait, on y va! Montre-moi ce que tu\nsais faire, <heroname>!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010811>Je vois, tu as des problèmes d'argent...\nC'est pas drôle. Pauvre <heroname>...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070200>Pendant <color red<90 secondes>coloroff>, je vais lancer des\ncitrouilles. Chaque fois que tu en touches\nune, tu gagnes 10 points...\n\n<0x10009:0x00000a00>Mais si tu en touches plusieurs de suite, tu\ngagneras plus de points. Fais de ton mieux!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070200>Ah, oui... j'avais oublié. Ça va te coûter\n20 rubis à chaque essai.\n\n\n<0x10009:0x00080a00>Si tu le faisais gratuitement, il n'y aurait\npas d'enjeu. Alors, <color red<20 rubis>coloroff> pour du tir à\nla citrouille, ça te dit?\n[1-]Avec plaisir[2]Non merci")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Je vois... Tu as autre chose à faire,\n<heroname>...\n\n\nTu as pour mission de sauver Zelda, après tout!\n<pause 10>Désolé de t'avoir dérangé.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Salut, <heroname>! Comment ça va?\n\n\n\nVeux-tu faire un peu de tir à la citrouille?\nC'est <color red<20 rubis >coloroff>la partie.\n[1-]D'accord![2-]C'est quoi, les règles?[3]Non merci")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070202>Salut, <heroname>!\n\n\n\nJe crois que j'ai atteint ma limite de pompes.\nJe me demande ce que je pourrais faire\nd'autre comme exercice...\n\n<0x10009:0x00000207>Tiens?!<pause 30> Mais c'est un bel arc que tu as là!\nJe suis sûr que tu es un excellent archer,\n<heroname>!\n[1-]Bien sûr![2-]Bof...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00070aff>Tu ne cesseras jamais de m'épater,\n<heroname>!\n\n\n<0x10009:0x00010200>Même si maintenant je suis assez fort pour\nfaire 3 000 pompes, je ne t'arrive pas\nencore à la cheville...")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00070a00>J'ai une idée! Tu pourrais me montrer tes\ntalents d'archer...\n\n\nJe vais lancer des citrouilles dans les airs...\n\n\n\n<0x10009:0x00000200>Et toi, tu essaies de les transpercer avec\ntes flèches!\n\n\n<0x10009:0x00070a00>Et puis, lancer des citrouilles, ça me fera\nun bon exercice. Comme ça, on fera d'une\npierre deux coups!\n\n[1-]D'accord![2]Une autre fois")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Je vois... Tu as autre chose à faire,\n<heroname>...\n\n\nTu as pour mission de sauver Zelda, après tout!\n<pause 10>Désolé de t'avoir dérangé.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000a09>Ne sois pas modeste! Je ne fais que dire\nla vérité!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000501>Ah, <heroname>! C'est terrible! L'île de\nla Déesse a disparu! Qu'est-ce qui s'est passé?\n\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10> <0x10009:0x00000800>Je vois<0x10006:0xfbcd>...<0x10006:0x00cd> Toi, tu sais tout...\n\n\n\n<0x10009:0x00000200>Je comprends. Ce devait être parce que tu\ndois retrouver Zelda. Plus rien ne me\nsurprend maintenant. L'important\nc'est que tu la retrouves.")
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
/*< 79>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000012>Hmm... <numeric arg0 0> <0x30004:0x02cd>...\n\n\n\n<0x30001:0x><heroname>... Tu n'es pas dans ton\nassiette aujourd'hui? Je ne peux pas te\ndonner de récompense...\n\n<0x10009:0x00070200>Quand tu vises une citrouille, place ton\ncurseur sur un point de sa trajectoire\nun peu avant qu'elle atteigne ce point.\n\nComme ça, tu devrais pouvoir marquer\n<color red<150 points>coloroff> sans trop de problème...\n\n\n<0x10009:0x00010a00>C'est peut-être pas ma place de te\ndonner des conseils. Tu dois quand\nmême savoir comment t'y prendre.")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070a00>Si tu veux tenter ta chance à nouveau, reviens\nme voir!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x0000000b><numeric arg0 0> points! Pas mal, <heroname>!\n\n\n\nCe n'est pas exceptionnel, mais ce n'est pas\nmauvais non plus. Et tu y es arrivé sans\nverser une goutte de sueur!\n\nLa prochaine fois, essaie de marquer au\nmoins <color red<400 points>coloroff>!\n\n\n<0x10009:0x00070a00>Tiens, je te donne les 50 rubis que j'ai\néconomisés en travaillant pour la dame\nde la cantine.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0000000b><numeric arg0 0> points! Bravo, <heroname>!\n\n\n\nTu es exceptionnel dans tout ce que tu fais!\nTu m'épateras toujours!\n\n\n<0x10009:0x00070a00>Tiens, je t'offre ceci en récompense!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070a00>Penses-tu que tu arriverais à marquer au moins\n<color red<600 points>coloroff>? J'aimerais beaucoup voir ça!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0000000b><numeric arg0 0> points! Vraiment impressionnant,\n<heroname>!\n\n\n<0x10009:0x00070a00>Tu es la fierté de l'école de chevalerie!\nTiens, prends ceci!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0000000b><numeric arg0 0> points! Vraiment impressionnant,\n<heroname>!\n\n\nTu es la fierté de l'école de chevalerie!\n\n\n\n<0x10009:0x00070a00>Accepte ceci en <color red<gage de notre amitié>coloroff>!")
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
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00010800><0x10008:0xffcd>Ah...<pause 20> Euh...\n\n\n\n<0x10009:0x00070800>Non, rien...<pause 20> Pardon...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00070a0b>Merci <heroname>, tu m'as été d'un\ngrand secours.\n\n\n<0x10009:0x00000209>Ce n'est pas grand‐chose, mais pour te\nremercier, je tiens à te donner la moitié\nde mon salaire.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Moi, je dois rester garder l'école. Bon courage\npour la <color red<chevauchée céleste>coloroff>, <heroname>.\nJe suis de tout cœur avec toi!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Ah, <heroname>... Tu veux m'aider?\n\n\n\nTu es toujours si gentil. Eh bien j'accepte ton\naide avec plaisir.\n\n\n<0x10009:0x00070203>Il faudrait que tu apportes un <color red<tonneau >coloroff>à la\ndame de la cantine.\n\n\nAppuie sur (A) pour soulever un tonneau, puis\nrappuie sur (A) pour le <color green<déposer>coloroff> à tes pieds.\n\n\n<0x10009:0x00010200>Quand tu le soulèves au-dessus de ta tête,\ntu peux le <color green<lancer>coloroff>.\n\n\nEt tu peux même <color green<faire rouler >coloroff>des objets plus\npetits, comme des pots.\n\n\n<0x10009:0x0c070200>Mais il ne faudrait pas casser ceux‐là, alors\névite de les lancer ou de les faire rouler.")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Si tu veux en savoir plus sur les commandes,\ntu peux <color green<appuyer sur <icon 19>>coloroff> pour les consulter.<0x10011:0x0bcd>\n\n\nLes actions que tu peux réaliser selon la\nsituation y sont décrites. C'est très pratique.")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "")
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Ah, <heroname>... Tu veux m'aider?\n\n\n\nTu es toujours si gentil. Eh bien j'accepte ton\naide avec plaisir.\n\n\n<0x10009:0x00070203>Il faudrait que tu apportes un <color red<tonneau >coloroff>à la\ndame de la cantine.\n\n\nAppuie sur (A) pour soulever un tonneau, puis\nrappuie sur (A) pour le <color green<déposer>coloroff> à tes pieds.\n\n\n<0x10009:0x00010200>Quand tu le soulèves au-dessus de ta tête,\ntu peux le <color green<lancer>coloroff>.\n\n\nEt tu peux même <color green<faire rouler >coloroff>des objets plus\npetits, comme des pots.\n\n\n<0x10009:0x0c070200>Mais il ne faudrait pas casser ceux‐là, alors\névite de les lancer ou de les faire rouler.")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Si tu veux en savoir plus sur les commandes,\ntu peux <color green<appuyer sur <icon 19>>coloroff> pour les consulter.<0x10011:0x0bcd>\n\n\nLes actions que tu peux réaliser selon la\nsituation y sont décrites. C'est très pratique.")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "")
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
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00071800>Cet uniforme vert te va vraiment à merveille!\nTu as l'allure d'un vrai chevalier.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000b0200>Monsieur le directeur m'a dit que tu allais\npartir en voyage à la recherche de Zelda...\n\n\n<0x10009:0x00001700>Ton courage est vraiment extraordinaire...\nMoi, en comparaison, je ne sais pas faire\ngrand‐chose...\n\n<0x1000A:0x000500cd>Mais j'ai quand même fabriqué ça, j'y ai mis\ntout mon cœur! Prends‐le, c'est pour toi!")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	wait_frames(20)
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "C'est une <color red<sacoche d'aventurier>coloroff>. Tu peux y\nranger <color red<quatre>coloroff> objets qui te serviront\ndurant ton voyage.\n\nTu peux acheter tout un tas d'objets au bazar,\ntu devrais aller y faire un tour.\n\n\n<0x10009:0x00070a09>Je te conseille surtout d'acheter un <color yellow<bouclier\n>coloroff>et des <color yellow<potions>coloroff>. Ça te sera sûrement utile!")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x30001:0x><heroname>! <0x10009:0x00010c00>Tu dois retrouver Zelda!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "")
          }

