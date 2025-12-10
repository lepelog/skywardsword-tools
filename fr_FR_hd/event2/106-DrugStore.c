          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>Cette marmite contient de la <color yellow<polypotion>coloroff>.\n\n\n\nSi tu l'appliques sur un bouclier endommagé,\ncelui‐ci sera à nouveau comme neuf ! Et en\nplus, ça te rend <color red<quatre>coloroff> cœurs ! Magique, hein ?\n\nÇa t'intéresse ? Ça ne coûte que <color red<30 rubis >coloroff>!\n[1-]Oui ![2]Non merci")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme !\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne peux rien te vendre si tu\nne possèdes pas de flacon vide...\n\n\n<0x10009:0x000d0700>Si tu veux que je t'explique le fonctionnement\nde la boutique, demande‐moi !")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070704>D'accord. T‐tu‐tu es sûr de vouloir améliorer\ncette potion ?\n[1-]Oui ![2]Non...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00070700>Très bien. Un instant...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00070708>Et voilà ! C'est prêt !")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000a0a06>Ah, d'accord... Je peux faire autre chose pour\ntoi ? Enfin, peut‐être ?")
/*<100>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 12}
/*< 78>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 54, 'param3': 12}
/*< 54>*/ 	check_item_flag(153, 1)
/*< 53>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0000000b>Cette marmite contient de la <color yellow<Protectine>coloroff>. Cette\npotion limite les dommages physiques pendant\nun certain temps.\n\nSi tu crains de ne pas être à la hauteur pour\nun combat, c'est ce qu'il te faut !\n\n\nPar contre, c'est pas donné. <color red<200 rubis>coloroff>.\nÇa t'intéresse ?\n[1-]Oui ![2]Non merci ")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme !\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne peux rien te vendre si tu\nne possèdes pas de flacon vide...\n\n\n<0x10009:0x000d0700>Si tu veux que je t'explique le fonctionnement\nde la boutique, demande‐moi !")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00090908>Merci beaucoup ! Merci, merci ! Reviens vite !")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000a0a06>Pas de problème, c'est t‐t‐toi qui décides.\nN'hésite pas à revenir. Enfin, si tu as\nenvie...")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (zone_temp_flags[2 /* 0x1 04 */]) {
          						  case 0:
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000b>Oui ? Que veux‐tu ?\n[1-]Explique‐moi[2]Rien ")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000004>Très bien, mon bonhomme ! Mets‐toi devant\nla marmite qui t'intéresse et appuie sur (A).\n\n\nJe t'expliquerai alors les propriétés de la potion.\nPar contre, je n'ai ici que des potions de base.\n\n\nSi tu veux quelque chose de plus performant...\n\n\n\n<0x10009:0x000d0700>... achète une de mes potions et apporte‐la à\nmon mari, à côté. Il en fera sûrement quelque\nchose.\n\n<0x10009:0x000c0000>On dirait pas comme ça, mais il a beaucoup\nde talent et il sait y faire avec les jeunes comme\ntoi.")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x000c0b0e>Oh, c'est bon, j'ai compris. Moi aussi j'ai autre\nchose à faire. Mais je te pardonne pour cette\nfois.\n\n<0x10009:0x000d0000>Si tu veux des potions plus performantes,\ndemande à mon mari là‐bas. Il pourra\naméliorer celles que tu m'as achetées !")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Hé, salut, mon bonhomme !\n\n\n\nBienvenue à la boutique de potions ! Ici, tu\npeux acheter des potions qui s'avéreront très\nutiles dans les situations délicates.\n\nTu veux que je t'explique ?\n[1-]Oui ![2]Non merci")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Hé, bonne nouvelle ! La potion que je préparais\nest enfin finie.\n\n\nJe l'ai nommée l'<color yellow<Endurol>coloroff> !\n\n\n\nSi tu bois cette potion, ta <color blue<jauge d'endurance>coloroff> se\nvidera moins vite pendant un certain temps.\n\n\nOK, c'est pas donné, mais ça en vaut la peine !\n\n\n\nPour en acheter, mets‐toi devant la marmite\net examine‐la.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Salut ! On a une nouvelle potion ! Jettes‐y\ndonc un œil !\n\n\nC'est de la <color yellow<potion d'oxygène >coloroff>!\n\n\n\nQuand tu bois cette potion extraordinaire, ta\n<color blue<jauge d'oxygène >coloroff>baisse moins vite !\n\n\nOn la vend à un prix très abordable, tu devrais\nen acheter un flacon !\n\n\nComme d'habitude, place‐toi devant la marmite\net parle‐moi !")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000002>Hé, salut mon bonhomme !\n\n\n\nBienvenue à la boutique de potions ! Mes\nbreuvages te seront très utiles en cas de\ncomplications au combat.\n\n<0x10009:0x000d0700>Tu es un de ces chevaliers, non ? Ah, tu es\nencore à l'école !\n\n\nCrois‐moi, tu auras grand besoin de mes\npotions, alors ne repars pas les mains vides !")
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000c0b06>Oh<0x10006:0xfccd>...?<0x10006:0x00cd>\n\n\n\nDis‐moi, est‐ce que tu as un flacon vide ?\n\n\n\nTu peux seulement acheter mes potions si tu\npossèdes des flacons vides.\n\n\n<0x10009:0x0009090b>Allez, comme je t'aime bien, je t'en offre un\nen cadeau !\n\n\n<0x10009:0x00070700>Tu peux mettre des tas de choses différentes\ndans un flacon vide, c'est très pratique.\nTu verras, tu ne pourras plus t'en passer !")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000c0b08>Dis donc, ta sacoche est pleine à craquer !\nTu aimes faire du shopping on dirait...\n\n\n<0x10009:0x000a0a00>Tu devrais aller ranger quelques objets à la\nconsigne, ce sera moins lourd !")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000d070b>Les flacons vides sont rangés dans ta sacoche\nd'aventurier. Appuie sur <icon 40> pour en choisir un.<0x10011:0x0ecd>")
/*<114>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "Si ta sacoche d'aventurier est pleine, tu peux\naller ranger des objets à la consigne.\n\n\n<0x10009:0x000c070b>Que veux‐tu acheter, mon bonhomme ?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000d070b>Les flacons vides sont rangés dans ta sacoche\nd'aventurier. Appuie sur <color green<<icon 40> >coloroff>pour en choisir un.<0x10011:0x0ecd>\n\n\nMaintiens <icon 40> enfoncé et choisis le flacon à\nutiliser.<0x10011:0x0ecd>\n\n\n<color green<Relâche>coloroff> <icon 40> pour sélectionner un flacon.<0x10011:0x0ecd>")
/*<115>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "Si ta sacoche d'aventurier est pleine, tu peux\naller ranger des objets à la consigne.\n\n\n<0x10009:0x000c070b>Que veux‐tu acheter, mon bonhomme ?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "Si tu as d'autres potions à améliorer, n'hésite\npas à me les apporter !")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "Oh, tu n'as plus de potion qui puisse être\naméliorée. Va voir ma femme, juste à\ncôté, si tu veux en acheter. Ou pas, si tu\nne veux pas...")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<criquets de Firone>coloroff>...\n\n\nSelon les écrits secrets, les <color yellow<criquets de Firone\n>coloroff>vivraient dans un endroit où la végétation est\nluxuriante. Enfin, je crois...")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Je suis vraiment désolé... Tu veux peut‐être\naméliorer une autre potion ?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0000000a>Tu n'as pas les ingrédients nécessaires pour\naméliorer cette potion...\n\n\nDésolé... Choisis‐en une autre.")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<dynastes de Firone>coloroff>...\n\n\nSelon les écrits secrets, les <color yellow<dynastes de Firone\n>coloroff>vivent entre autres sur les arbres d'une contrée\nà la végétation luxuriante. Enfin, je crois...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Oh, mon enfant... Je suis désolé mais tu n'as\npas assez d'argent...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<guêpes mojo>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<guêpes mojo >coloroff>font\nleur nid dans les arbres d'une contrée à la\nvégétation luxuriante. Enfin, je crois...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x0000000a>Oh, tu ne possèdes aucune potion à améliorer.\nEnfin, je crois...\n\n\n<0x10009:0x00090900>Ma femme, là‐bas, en vend, si ça t'intéresse,\npeut‐être. Sans vouloir te déranger...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<mantes célestes>coloroff>...\n\n\nLes <color yellow<mantes célestes>coloroff> sont assez nombreuses ici,\nà Célesbourg. Enfin, je crois...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000a0a08>Tu n'as pas de <color red<flacon vide>coloroff>... Reviens me voir\nquand tu en auras un.")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<pyroccinelles>coloroff>...\n\n\nSelon les écrits secrets, les <color yellow<pyroccinelles >coloroff>vivent\nsur une montagne de feu. Enfin, je crois...")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Je suis vraiment désolé... Tu veux peut‐être\naméliorer une autre potion ?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000c0b08>Ben alors ! Tu n'as pas assez d'argent. Tu es\nbien gentil mon bonhomme, mais je ne suis\npas ta mère !\n\n<0x10009:0x000a0a00>Reviens me voir quand tu auras de quoi payer.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<papillons azur>coloroff>...\n\n\nMême ici, à Célesbourg, on trouve beaucoup de\n<color yellow<papillons azur>coloroff>.")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0009090a>Merci beaucoup. Si tu veux une potion plus\nperformante, va voir mon mari, à côté. Il\npourra sûrement faire quelque chose pour toi.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<fourmis de Lanelle>coloroff>...\n\n\nSelon les écrits secrets, les <color yellow<fourmis de Lanelle\n>coloroff>vivent en colonies dans une contrée sablonneuse.\nEnfin, je crois...")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000a0a0e>Hé ! Pas de lèche‐vitrine chez moi, compris ?")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000c0b10>Tu n'en veux pas ? Je sais que mes potions ont\nparfois une drôle d'odeur, mais au moins, elles\nsont efficaces !")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<cigales des sables>coloroff>...\n\n\nSelon les écrits secrets, les <color yellow<cigales des sables\n>coloroff>vivent dans une contrée sablonneuse. Enfin,\nje crois...")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<libellules gerudo>coloroff>...\n\n\nSelon les écrits secrets, les <color yellow<libellules gerudo\n>coloroff>vivent dans les touffes d'herbe d'une contrée\nsablonneuse. Enfin, je crois...")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Je suis vraiment désolé... Tu veux peut‐être\naméliorer une autre potion ?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<bousiers d'Ordinn>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<bousiers d'Ordinn\n>coloroff>vivent sur une montagne de feu. Enfin, je\ncrois...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<lucanes du bourg>coloroff>...\n\n\nLes <color yellow<lucanes du bourg >coloroff>sont les insectes les plus\ncélèbres de Célesbourg...")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il ne te manque que\ndes <color yellow<lucielles>coloroff>...\n\n\nLes <color yellow<lucielles>coloroff> sont des insectes rares qu'on peut\napercevoir la nuit ici, à Célesbourg.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001>Cette marmite contient de la <color yellow<potion de soin>coloroff>.\nElle permet de remplir ta jauge de vie.\n\n\nTu veux en acheter ? C'est <color red<20 rubis >coloroff>le flacon.\nT'en dis quoi ?\n[1-]Oui ![2]Non merci")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme !\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne peux rien te vendre si tu\nne possèdes pas de flacon vide...\n\n\n<0x10009:0x000d0700>Si tu veux que je t'explique le fonctionnement\nde la boutique, demande‐moi !")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	check_item_flag(153, 1)
/*< 14>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000004>Cette marmite contient de la <color yellow<potion d'oxygène>coloroff>.\nSi tu bois cette potion, ta <color blue<jauge d'oxygène >coloroff>se\nvidera moins vite pendant un certain temps.\n\nTu veux en acheter ? C'est <color red<20 rubis >coloroff>le flacon.\n[1-]Oui ![2]Non merci")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000c0b04>Cette potion est encore en cours de préparation,\nelle est pas prête. Ça devrait plus prendre\nbeaucoup de temps, un peu de patience !\n\n<0x10009:0x00090700>On a plein d'autres potions en rayon, alors\njettes‐y un œil !")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme !\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne peux rien te vendre si tu\nne possèdes pas de flacon vide...\n\n\n<0x10009:0x000d0700>Si tu veux que je t'explique le fonctionnement\nde la boutique, demande‐moi !")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	check_item_flag(153, 1)
/*< 17>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 25, 'param3': 12}
/*< 25>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0000000b>Cette marmite contient de l'<color yellow<Endurol>coloroff>.\n\n\n\nSi tu bois cette potion, ta <color blue<jauge d'endurance >coloroff>se\nvidera moins vite pendant un certain temps.\n\n\nOK, c'est pas donné, mais ça en vaut la peine.\nTu veux en acheter ? C'est <color red<50 rubis >coloroff>le flacon.\n[1-]Oui ![2]Non merci")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000c0b04>Cette potion exceptionnelle empêchera ta\n<color blue<jauge d'endurance >coloroff>de se vider trop vite.\n\n\nMais elle n'est pas encore tout à fait au point,\nalors il va falloir être patient.\n\n\n<0x10009:0x00090700>Par contre, n'hésite pas à jeter un œil à mes\nautres potions.")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme !\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne peux rien te vendre si tu\nne possèdes pas de flacon vide...\n\n\n<0x10009:0x000d0700>Si tu veux que je t'explique le fonctionnement\nde la boutique, demande‐moi !")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	zone_temp_flags[4 /* 0x1 10 */] = false;
/*<181>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			check_item_flag(71, 1)
/*<119>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 44}) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000001>Euh, bien le bonjour, mon enfant ! Bienvenue\nà la boutique de potions. Nous vendons les\nmeilleures du marché ! Enfin, peut‐être...\n\nDans cette marmite, je peux améliorer les\npotions que tu as achetées à ma femme.\nEnfin, si tu veux...\n\n<0x10009:0x00070700>Très bien... T‐tu veux que j'améliore... euh...\noui, une potion ?\n[1-]Oui[2]Non")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Très bien. Voyons ce que je peux faire pour\ntoi...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x0000000a>Oh, tu ne possèdes aucune potion à améliorer.\nEnfin, je crois...\n\n\n<0x10009:0x00090900>Ma femme, là‐bas, en vend, si ça t'intéresse,\npeut‐être. Sans vouloir te déranger...")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000a0a06>Je comprends... Non, non, ce n'est rien.\nÇa ne m'affecte pas du tout. N'hésite pas\nà r‐re‐revenir !")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Si tu n'as pas encore de <color yellow<filet à papillons>coloroff>, tu\npeux en acheter un à la <color red<boutique de Terry>coloroff>.\n\n\nLa boutique de Terry plane au‐dessus du\nmarché couvert.\n\n\nSi tu veux la trouver, regarde dans le ciel à\nl'aide de la <color green<vue subjective>coloroff>. Enfin, si ça ne te\ndérange pas trop...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000001>B‐bienvenue à la boutique de potions.\n\n\n\nDans cette marmite, je peux améliorer les\npotions que tu as achetées à ma femme.\nEnfin, je crois.\n\n<0x10009:0x00000007>Mais pour concocter mes mixtures, il me faut\ndes... ah oui, des insectes.\n\n\nSi tu n'as pas encore de <color yellow<filet à papillons>coloroff>, tu\npeux en acheter un à la <color red<boutique de Terry>coloroff>.\n\n\n<0x10009:0x00070708>La boutique de Terry plane au‐dessus du\nmarché couvert.\n\n\nSi tu veux la trouver, regarde dans le ciel à\nl'aide de la <color green<vue subjective>coloroff>. Enfin, je voudrais\nsurtout pas te forcer...")
/*<122>*/ 					zone_temp_flags[6 /* 0x1 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				check_item_flag(160, 1)
/*<178>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 58}) {
          				  case 0:
/*<182>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 31}
/*<179>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000001>B‐bienvenue... Comment ? Tu as quelque chose\nà me montrer ?\n\n\nAh, je suis vraiment désolé, mais j'ai beaucoup\nde travail, là. Tu ne voudrais pas revenir me\nvoir la <color red<nuit>coloroff> chez moi, si ça ne te dérange pas ?\nMerci bien.")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000001>B‐bienvenue... <0x10006:0xfbcd>...... <0x10006:0x00cd><0x10009:0x000a0a06>Pfff...\n\n\n\n<0x10009:0x00ffff00>Ah, désolé, ça ne se fait pas de soupirer comme\nça devant les clients... En fait, ces derniers\ntemps, je ne dors pas beaucoup la <color red<nuit>coloroff>...\n\nAh, mais je t'ennuie avec mes histoires...\n\n\n\nFais comme si je n'avais rien dit... ")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

