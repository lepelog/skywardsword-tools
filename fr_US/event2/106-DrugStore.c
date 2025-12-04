          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>Cette marmite contient de la\n<color yellow<polypotion>coloroff>.\n\n\nSi tu l'appliques sur un bouclier\nendommagé, celui‐ci sera à nouveau\ncomme neuf! Et en plus, ça te rend\n<color red<quatre>coloroff> cœurs! Magique, hein?\nÇa t'intéresse? Ça ne coûte\nque <color red<30 rubis>coloroff>!\n[1-]Oui![2]Non merci")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme!\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n<0x10009:0x000d0700>Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070704>Oh. D'accord. Tu es sûr de vouloir\naméliorer cette potion?\n[1-]Oui![2]Non...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00070700>Très bien. Un petit instant...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00070708>Et voilà! Euh. C'est prêt!")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000a0a06>Ah, d'accord... Est-ce que je peux faire\nautre chose pour toi? Peut-être?")
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
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0000000b>Cette marmite contient de la <color yellow<potion\nd'invincibilité>coloroff>. Cette potion limite\nles dommages physiques pendant\nun certain temps.\nSi tu penses ne pas être à la\nhauteur pour un combat, c'est\nexactement ce qu'il te faut!\n\nPar contre, c'est pas donné.\n<color red<200 rubis>coloroff>. Ça t'intéresse?\n[1-]Oui![2]Non merci ")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme!\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n<0x10009:0x000d0700>Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090908>Oh! Merci beaucoup!\nMerci, merci! Reviens vite!\nEuh, si tu veux. Bien entendu.")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000a0a06>Pas de problème, c'est toi qui décides.\nBien, c'est sûr que c'est toi qui décides.\nN'hésite pas à revenir. Juste si tu veux.")
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
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000b>Oui? Je peux t'aider?\n[1-]Explique‐moi[2]Rien ")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000004>Très bien, mon bonhomme!\nMets‐toi devant la marmite qui\nt'intéresse et appuie sur (A).\n\nJe t'expliquerai les propriétés\nde la potion. Par contre, je n'ai\nici que des potions de base.\n\nSi tu veux quelque chose de\nplus performant...\n\n\n<0x10009:0x000d0700>... achète une de mes potions et\napporte‐la à mon mari, à côté.\nIl pourra sûrement en faire\nquelque chose.\n<0x10009:0x000c0000>À le regarder, on dirait pas, mais\nil a beaucoup de talent et il s'entend\nbien avec les jeunes comme toi.")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000c0b0e>Oh, ça va, j'ai compris.\nMoi aussi j'ai autre chose à faire.\nJe te pardonne pour cette fois.\n\n<0x10009:0x000d0000>Si tu veux des potions plus\nperformantes, demande à mon mari\nlà‐bas. Il pourra améliorer celles\nque tu m'as achetées!")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Hé, salut, mon bonhomme!\n\n\n\nBienvenue à la boutique de potions!\nIci, tu peux acheter des potions qui\ns'avéreront très utiles dans\nles situations délicates.\nTu veux que je t'explique?\n[1-]Oui![2]Non merci")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>Hé, bonne nouvelle! La potion\nque je préparais est enfin finie.\n\n\nC'est une <color yellow<potion d'endurance>coloroff>!\n\n\n\nSi tu bois cette potion, ta <color blue<jauge\nd'endurance>coloroff> se videra moins\nvite pendant un certain temps.\n\nOK, c'est pas donné, mais\nça en vaut la peine!\n\n\nPour en acheter, mets‐toi devant\nla marmite et examine‐la.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Salut! On a une nouvelle potion!\nJettes‐y donc un coup d'œil!\n\n\nC'est de la <color yellow<potion d'oxygène>coloroff>!\n\n\n\nQuand tu bois cette potion\nextraordinaire, ta <color blue<jauge d'oxygène\n>coloroff>baisse moins vite!\n\nOn la vend à un prix très abordable,\ntu devrais en acheter un flacon!\n\n\nComme d'habitude, place‐toi devant\nla marmite et parle‐moi!")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Hé, salut mon bonhomme!\n\n\n\nBienvenue à la boutique de potions!\nMes breuvages sont très utiles quand\nle nombre de cœurs diminue au combat.\n\n<0x10009:0x000d0700>Tu es un de ces chevaliers, non?\nAh, tu es encore à l'école!\n\n\nCrois‐moi, tu auras grand besoin\nde mes potions, alors ne repars\npas les mains vides!")
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000c0b06>Oh<0x10006:0xfccd>...?<0x10006:0x00cd>\n\n\n\nDis‐moi, est‐ce que tu as un flacon\nvide?\n\n\nTu peux seulement acheter mes potions\nsi tu possèdes des flacons vides.\n\n\n<0x10009:0x0009090b>Tiens, comme je t'aime bien,\nje t'en offre un en cadeau!\n\n\n<0x10009:0x00070700>Tu peux mettre des tas de choses\ndifférentes dans un flacon vide,\nc'est très pratique. Tu verras,\ntu ne pourras plus t'en passer!")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0b08>Dis donc, ta sacoche est pleine\nà craquer! Tu aimes ça, le\nmagasinage, on dirait...\n\n<0x10009:0x000a0a00>Tu devrais aller ranger quelques objets\nà la consigne, ce sera moins lourd!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000d070b>Les flacons vides se rangent bien\ndans ta sacoche d'aventurier.\nAppuie sur (-) pour en choisir un.<0x10011:0x02cd>")
/*<114>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Si ta sacoche d'aventurier est pleine,\ntu peux aller ranger des objets à\nla consigne.\n\n<0x10009:0x000c070b>Que veux‐tu acheter, mon bonhomme?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000d070b>Les flacons vides se rangent\nbien dans ta sacoche d'aventurier.\nAppuie sur <color green<(-) >coloroff>pour en choisir un.<0x10011:0x02cd>\n\nMaintiens (-) enfoncé et\n<color green<incline>coloroff> la manette Wii Remote\npour choisir le flacon à utiliser.<0x10011:0x02cd>\n\n<color green<Relâche>coloroff> (-) pour\nsélectionner un flacon.<0x10011:0x02cd>")
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Si ta sacoche d'aventurier est pleine,\ntu peux aller ranger des objets à\nla consigne.\n\n<0x10009:0x000c070b>Que veux‐tu acheter, mon bonhomme?")
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
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "Si tu as d'autres potions à améliorer,\nn'hésite pas à me les apporter!")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "Oh, tu n'as plus de potion qui puisse\nêtre améliorée. Va voir ma femme,\njuste à côté, si tu veux en acheter.\nOu pas, si tu ne veux pas...")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<criquets de Firone>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<criquets\nde Firone >coloroff>vivraient dans un endroit\noù la végétation est luxuriante. Euh,\nje pense bien en tous cas...")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Je suis vraiment désolé...\nTu veux peut‐être améliorer\nune autre potion?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>Tu n'as pas les ingrédients nécessaires\npour améliorer cette potion...\n\n\nDésolé... Choisis‐en une autre.")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<dynastes de Firone>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<dynastes\nde Firone >coloroff>vivent entre autres sur les\narbres d'une contrée à la végétation\nluxuriante. En tous cas, je le pense...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Oh, mon enfant... Je suis désolé mais\ntu n'as pas assez d'argent...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<guêpes Mojo>coloroff>...\n\n\nD'après les écrits secrets, les\n<color yellow<guêpes Mojo>coloroff> font leur nid dans les\narbres d'une contrée à la végétation\nluxuriante. Euh, je le pense...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh. Tu ne possèdes aucune potion à\naméliorer. Du moins, je crois...\n\n\n<0x10009:0x00090900>Ma femme, là‐bas, en vend, si ça\nt'intéresse, peut‐être. Sans vouloir\nte déranger...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<mantes célestes>coloroff>...\n\n\nLes <color yellow<mantes célestes>coloroff> sont assez\nnombreuses ici, à Célesbourg.\nJe le pense bien en tous cas...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000a0a08>Tu n'as pas de <color red<flacon vide>coloroff>...\nReviens me voir quand tu\nen auras un.")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<pyroccinelles>coloroff>...\n\n\nD'après les écrits secrets, les\n<color yellow<pyroccinelles >coloroff>vivent sur une\nmontagne de feu. Euh, je le\npense bien, en tous cas...")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Je suis vraiment désolé...\nTu veux peut‐être améliorer\nune autre potion?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000c0b08>Mon cher! Tu n'as pas assez\nd'argent. Tu es bien gentil mon\nbonhomme, mais je ne suis pas\nta mère!\n<0x10009:0x000a0a00>Reviens me voir quand\ntu auras de quoi payer.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<papillons azur>coloroff>...\n\n\nSi je me souviens bien, même ici,\nà Célesbourg, on trouve beaucoup\nde <color yellow<papillons azur>coloroff>.")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0009090a>Merci beaucoup. Si tu veux une potion\nplus performante, va voir mon mari,\nà côté. Il pourra sûrement faire\nquelque chose pour toi.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<fourmis de Lanelle>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<fourmis\nde Lanelle >coloroff>vivent en colonies dans une\ncontrée sablonneuse. Du moins, je le\npense, oui.")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000a0a0e>Hé! Pas de lèche‐vitrine chez moi,\ncompris?")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000c0b10>Tu n'en veux pas? Je sais que mes\npotions ont parfois un goût bizarre,\nmais au moins, elles sont efficaces!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<cigales des sables>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<cigales\ndes sables>coloroff> vivent dans une contrée,\neuh, sablonneuse. Du moins, je le\npense, oui.")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<libellules Gerudo>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<libellules\nGerudo >coloroff>vivent dans les touffes d'herbe\nd'une contrée sablonneuse. Euh, je le\npense bien, en tous cas...")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Je suis vraiment désolé...\nTu veux peut‐être améliorer\nune autre potion?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<bousiers d'Ordinn>coloroff>...\n\n\nD'après les écrits secrets, les <color yellow<bousiers\nd'Ordinn >coloroff>vivent sur une montagne de\nfeu. Euh, du moins, je le pense...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<lucanes célestes>coloroff>...\n\n\nLes <color yellow<lucanes célestes >coloroff>sont les insectes\nles plus célèbres de Célesbourg...")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000a>Pour réaliser ce mélange, il te manque\njuste des <color yellow<lucielles>coloroff>...\n\n\nLes <color yellow<lucielles>coloroff> sont des insectes rares\nqu'on peut apercevoir la nuit ici,\nà Célesbourg, et dans d'autres endroits\ndu ciel.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001>Cette marmite contient de\nla <color yellow<potion de santé>coloroff>. Elle permet\nde remplir ta jauge de vie.\n\nTu veux en acheter? C'est <color red<20 rubis>coloroff>\nle flacon. Qu'est-ce que t'en dis?\n[1-]Oui![2]Non merci")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme!\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n<0x10009:0x000d0700>Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
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
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004>Cette marmite contient de la <color yellow<potion\nd'oxygène>coloroff>. Si tu bois cette potion,\nta <color blue<jauge d'oxygène >coloroff>se videra moins\nvite pendant un certain temps.\nTu veux en acheter?\nC'est <color red<20 rubis >coloroff>le flacon.\n[1-]Oui![2]Non merci")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000c0b04>Cette potion n'est pas encore prête à \nêtre consommée. Ça ne devrait pas\nêtre bien long... Un peu de patience!\n\n<0x10009:0x00090700>En attendant, on a plein d'autres\npotions en rayon, jette‐leur un coup\nd'œil!")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme!\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n<0x10009:0x000d0700>Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
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
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0000000b>Cette marmite contient de la\n<color yellow<potion d'endurance>coloroff>.\n\n\nSi tu bois cette potion, ta <color blue<jauge\nd'endurance >coloroff>se videra moins vite\npendant un certain temps.\n\nOK, c'est pas donné, mais ça en\nvaut la peine. Tu veux en acheter?\nC'est <color red<50 rubis >coloroff>le flacon.\n[1-]Oui![2]Non merci")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000c0b04>Cette potion exceptionnelle\nempêchera ta <color blue<jauge d'endurance>coloroff>\nde se vider trop vite.\n\nMais elle n'est pas encore tout à fait\nau point, alors il va falloir être patient.\n\n\n<0x10009:0x00090700>Par contre, n'hésite pas à jeter un\n coup d'œil à mes autres potions.")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Salut, mon bonhomme!\n\n\n\n<0x10009:0x000c0b00>Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n<0x10009:0x000d0700>Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
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
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000001>Euh, bien le bonjour, mon jeune!\nBienvenue à la boutique de potions.\nNous vendons les meilleures du\nbazar! Du moins, je le pense...\nDans cette marmite, je peux améliorer\nles potions que tu as achetées à ma\nfemme. Bien, si tu veux...\n\n<0x10009:0x00070700>Très bien... Veux-tu que j'améliore...\neuh... oui, une potion?\n[1-]Oui[2]Non")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Bon...Très bien... Voyons ce que je\npeux faire pour toi...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh. Tu ne possèdes aucune potion à\naméliorer. Du moins, je crois...\n\n\n<0x10009:0x00090900>Ma femme, là‐bas, en vend, si ça\nt'intéresse, peut‐être. Sans vouloir\nte déranger...")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000a0a06>Je comprends... Non, non, ce n'est rien.\nÇa ne me dérange pas du tout. N'hésite\npas à revenir! Quand tu veux...")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Si tu n'as pas encore de <color yellow<filet>coloroff>,\ntu peux en acheter un\nà la <color red<boutique de Beedle>coloroff>.\n\nLa boutique de Beedle plane\nau‐dessus du bazar.\n\n\nSi tu veux la trouver, regarde dans\nle ciel à l'aide de la <color green<vue subjective>coloroff>.\nEnfin, si ça ne te dérange pas trop...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000001>Oh. Bienvenue à la boutique de potions.\n\n\n\nDans cette marmite, je peux améliorer\nles potions que tu as achetées à ma\nfemme. Du moins, je le pense.\n\n<0x10009:0x00000007>Mais pour concocter mes mixtures,\nil me faut des... ah oui, des insectes.\n\n\nSi tu n'as pas encore de filet, tu\npeux en acheter un à la <color red<boutique\nde Beedle>coloroff>.\n\n<0x10009:0x00070708>La boutique de Beedle plane\nau‐dessus du bazar.\n\n\nSi tu veux la trouver, regarde dans\nle ciel à l'aide de la <color green<vue subjective>coloroff>.\nBien, je voudrais surtout pas te\nfaire sentir obligé...")
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
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000001>B‐bienvenue... Heu? Pardon?\nTu as quelque chose à me montrer?\n\n\nAh, je suis vraiment désolé, mais j'ai\nbeaucoup de travail, là. Tu ne voudrais\npas revenir me voir la <color red<nuit>coloroff> chez moi, si\nça ne te dérange pas?\nMerci bien.")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000001>B‐bienvenue...\n<0x10006:0xfbcd>...... <0x10006:0x00cd><0x10009:0x000a0a06>Pfff...\n\n\n<0x10009:0x00ffff00>Ah, désolé, ça ne se fait pas de soupirer\ncomme ça devant les clients... En fait, \nces derniers temps, je ne dors pas\nbeaucoup la <color red<nuit>coloroff>...\nAh, mais je t'ennuie avec mes\nhistoires...\n\n\nFais comme si je n'avais rien dit... ")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

