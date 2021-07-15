          void entrypoint_201_51() {
/*<  2>*/ 	start()
/*< 12>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 10>*/ 		printf("")
          	  case 1:
/*< 11>*/ 		printf("")
          	}
          }

          void entrypoint_201_17() {
/*< 49>*/ 	start()
/*< 50>*/ 	printf("Vous avez obtenu un nouvel objet. Mon analyse\nindique que cet objet en forme d'insecte est\n<r<<pling>capable de voler>>.\n\n<r<Dirigez\x2010le à distance >>une fois qu'il a pris son envol.\nSes mandibules peuvent sectionner des choses fines\net frapper de petits objets.\n\nSortez\x2010le avec \x0E\x02\x04\x02\x29CD et appuyez sur \x0E\x02\x04\x02\x25CD pour consulter\nson mode d'utilisation.\x0E\x01\x11\x02\xFCD\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_201_52() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf("")
          }

          void entrypoint_201_18() {
/*< 72>*/ 	start()
/*<228>*/ 	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
/*< 75>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 77>*/ 		printf("J'ai repéré l'<y<eau sacrée >>à l'intérieur de ce temple, mais\nil est <r<<pling>impossible d'utiliser la fonction détection >>ici.\n\n\nD'après ce que j'ai pu percevoir de l'extérieur, je\ndéduis que l'eau sacrée se trouve au plus profond\nde ce temple.")
/*<209>*/ 		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
/*<204>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 30}
/*<205>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 206, 'param3': 6}
/*<206>*/ 		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
/*<208>*/ 		printf("Je vous recommande d'explorer à nouveau les\nprofondeurs de ce temple en direction de la \x0E\x02\x04\x02\x19CD\nindiquée sur votre carte.")
/*<207>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 78, 'param3': 34}
/*< 78>*/ 		printf("Je ressens la présence de monstres plus nombreux que\nlors de notre dernière visite. Soyez prudent.")
          	  case 1:
/*< 76>*/ 		printf("Je ressens la présence de monstres plus nombreux que\nlors de notre dernière visite. Soyez prudent.")
          	}
          }

          void entrypoint_201_01() {
          	start()
/*<  1>*/ 	printf("La voie s'ouvrira quand les\njoyaux marqués par des \x0E\x02\x04\x02\x19CD sur\nla carte seront frappés. La carte\nrepose dans la salle centrale.")
          }

          void entrypoint_201_53() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, selon les mots que je vous\nai traduits, dame <b<Zelda>> est venue ici se purifier.\n\n\nLa probabilité qu'elle se soit ensuite dirigée vers la\nsource suivante, sur les <b<terres d'Ordinn>>, est de 97 %.\n\n\nJe ne possède cependant aucune information sur la\nmanière dont elle s'y est rendue.")
/*< 87>*/ 	set_camera(1, 0)
/*< 86>*/ 	printf("Selon mes estimations, si vous retournez à <b<Célesbourg\n>>pour placer dans son piédestal la stèle que vous venez\nd'obtenir...\n\n... une <r<<pling>nouvelle colonne de lumière >>devrait s'élever de\nla terre et vous permettre de continuer à rechercher\ndame Zelda.")
/*< 88>*/ 	set_camera(-1, 0)
/*<  9>*/ 	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
          	  case 0:
/*<  7>*/ 		printf("Vous pouvez utiliser la <b<statue d'oiseau >>qui se trouve à\nl'extérieur pour regagner le ciel.")
          		flw_79:
/*< 79>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 80>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 81, 'param3': 36}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          	  case 1:
/*<  8>*/ 		printf("Il devrait y avoir dans la forêt un dispositif\npermettant de regagner le ciel.")
          		goto flw_79
          	}
          }

          void entrypoint_201_19() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Je perçois de l'<y<eau sacrée >>tout près d'ici. Les auras des\nmonstres ont disparu, vous pouvez à nouveau utiliser\nla <r<fonction détection>>.")
          }

          void entrypoint_201_02() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf("Toi qui descends des cieux,\nprête l'oreille à l'envoyée\nqui t'a guidé ici\x2010bas.")
          }

          void entrypoint_201_54() {
/*< 23>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 47, 'param2': 0, 'next': 167, 'param3': 40}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 330, 'param2': 0, 'next': 168, 'param3': 51}
/*<168>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 169, 'param3': 17}
/*<169>*/ 	set_camera(9, 0)
/*< 26>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 24>*/ 		printf("La probabilité que cette eau soit la même que celle\nque contient la bassine du dragon d'eau est de 95 %.\nRetournons à sa caverne.")
/*< 82>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*<264>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 36}
/*< 84>*/ 		set_camera(10, 0)
/*<170>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          	  case 1:
/*< 25>*/ 		printf("Cette eau n'est pas une eau ordinaire. Elle dégage\nune grande énergie.\n\n\nSi elle entre en contact avec un corps de même\nfréquence vibratoire, une augmentation d'énergie\npourrait se produire.")
/*<166>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          	}
          }

          void entrypoint_201_03() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Les portes des pièces latérales\ns'ouvrent lorsque les joyaux\nsont frappés. L'un est en haut,\nl'autre est en bas.")
          }

          void entrypoint_201_55() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("Oho...<pause0F> Je vois que tu ne te débrouilles pas trop\nmal.\n\n\nMais tu n'as pas vraiment de mérite...<pause0F> Tu ne le\ndois qu'à cette épée.")
          }

          void entrypoint_201_20() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, il est probable que <b<je>> sois\nl'envoyée dont il est question sur cette stèle.\n\n\nPour vous venir en aide, \x0E\x01\x12\x04\x00\x02Maître, la Déesse m'a\ntransmis une multitude d'informations à propos\nde cette terre.\n\nSi quelque chose vous pose problème, appelez\x2010moi en\nappuyant sur (v).\x0E\x01\x11\x02\x9CD\n\n\nPar ailleurs, lorsque vous <g<ciblez >>quelque chose\navec (Z), appelez\x2010moi avec (v) et je vous donnerai\ndes informations sur votre cible.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*< 93>*/ 	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
          }

          void entrypoint_201_04() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("")
          }

          void entrypoint_201_56() {
/*< 36>*/ 	start()
/*< 33>*/ 	printf("Je suis las de jouer avec toi. Je ne ressens plus\nla présence de la jeune fille...<pause0F> Je n'ai donc plus\nde temps à perdre ici.\n\nAdieu, enfant des cieux. Je te pardonne pour\ncette fois, mais ne t'avise plus de te mettre en\ntravers de ma route.")
/*< 85>*/ 	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
          }

          void entrypoint_201_21() {
/*<214>*/ 	start()
/*<215>*/ 	printf("C'est un gardien créé à partir d'une force maléfique.\nIl a tendance à suivre du regard la pointe des objets\neffilés.")
/*<216>*/ 	set_camera(13, 0)
/*<217>*/ 	printf("Ces yeux sont reliés les uns aux autres. Il est probable\nqu'il soit impossible de leur donner le tournis un par\nun.")
/*<218>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 219, 'param3': 6}
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_91() {
/*< 42>*/ 	start()
/*<195>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 196, 'param3': 32}
/*<196>*/ 	make_actor_do_something(3, 16)
/*<197>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 198, 'param3': 16}
/*<198>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 194, 'param3': 6}
/*<194>*/ 	set_camera(12, 0)
/*<212>*/ 	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
/*<265>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<193>*/ 	make_actor_do_something(4, 16)
/*<255>*/ 	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          	  case 0:
/*<257>*/ 		entrypoint_201_96();
          	  case 1:
/*< 48>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 46, 'param3': 13}
/*< 46>*/ 		printf("Ah, la poisse ! C'était bien la peine que je\nm'embête à chaparder cette clé à ces satanés\nmonstres...")
/*< 47>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 43, 'param3': 13}
/*< 43>*/ 		printf("J'ai dû la cacher dans un trou, mais je me\nsouviens plus lequel...")
/*<258>*/ 		switch (scene_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<259>*/ 			entrypoint_201_96();
          		  case 1:
/*< 44>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 			printf("Enfin, moi, les clés, ça m'intéresse pas tant\nque ça. Ce que je veux, c'est des trésors qui\nrapportent plus de blé !")
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	}
          }

          void entrypoint_201_57() {
/*<210>*/ 	start()
/*<211>*/ 	printf("\x0E\x01\x05\x04K\x00C'est une bien belle épée que tu as là.<pause0F> Mais il\nme suffit d'observer <r<ta posture >>pour l'arrêter\nd'une seule main.")
          }

          void entrypoint_201_22() {
/*<220>*/ 	start()
/*<221>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, j'ai détecté près de nous\nquelque chose que vous pouvez cibler.\n\n\nLorsque vous <g<ciblez>> avec (Z), si vous m'appelez avec\n(v), je vous donnerai de plus amples informations\nsur votre cible.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<222>*/ 	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
/*<223>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 224, 'param3': 32}
/*<224>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 225, 'param3': 17}
/*<225>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 226, 'param3': 6}
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 227, 'param3': 36}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_92() {
/*< 51>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 154, 'param3': 32}
/*<154>*/ 	make_actor_do_something(3, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 161, 'param3': 17}
/*<161>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 57, 'param3': 16}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3342, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf("On se connaît, non ? Ouais, ça me revient, on\ns'est croisés au volcan, c'est ça ?")
/*< 56>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2065, 'next': 52, 'param3': 13}
/*< 52>*/ 	printf("Toi aussi t'es venu chercher des trésors dans le\ncoin ?\n[1]Gagné ![2]Non")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 60, 'param3': 13}
/*< 60>*/ 		printf("C'est bien ce que je pensais ! Tu empestes le\ntrésor à des kilomètres.")
          		flw_61:
/*< 61>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2059, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("Toi aussi t'es venu parce que t'as entendu les\nhistoires du type qui ressemble à un gros\ncaillou ?\n[1]Le Goron ?[2]Des histoires ?")
/*< 95>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2050, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf("« À l'endroit où virevoltent les papillons dans\nle temple, <pling><g<fais résonner une douce mélodie>>. »")
/*< 97>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 2057, 'next': 98, 'param3': 13}
/*< 98>*/ 		printf("C'est ce qu'il m'a raconté, mais même quand je\nchante de ma plus belle voix, il se passe rien.")
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 100, 'param3': 13}
/*<100>*/ 		printf("Enfin, maintenant que je suis là, je vais fouiner\nun peu pour voir si je trouve pas des trésors !")
/*<157>*/ 		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<156>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 53>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 54, 'param3': 13}
/*< 54>*/ 		printf("On m'la fait pas à moi ! Tu empestes le trésor\nà des kilomètres.")
          		goto flw_61
          	}
          }

          void entrypoint_201_23() {
/*<229>*/ 	start()
/*<230>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, l'eau qui se trouve dans\ncette salle... <pause0F>est de l'<r<eau ordinaire>>.\n\n\nL'<y<eau sacrée>> dont a besoin le dragon d'eau devrait\nse trouver dans les profondeurs du temple.")
          }

          void entrypoint_201_93() {
/*< 63>*/ 	start()
/*<199>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 200, 'param3': 32}
/*<200>*/ 	make_actor_do_something(3, 16)
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 202, 'param3': 16}
/*<202>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 160, 'param3': 6}
/*<160>*/ 	set_camera(11, 0)
/*<213>*/ 	zone_temp_flags[56 /* 0x6 01 */] = true;
/*<203>*/ 	make_actor_do_something(4, 16)
/*< 69>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4364, 'next': 67, 'param3': 13}
/*< 67>*/ 	printf("C'est pas vrai... Je me suis embêté à venir\njusqu'ici pour rien. J'ai vraiment pas de bol.")
/*< 68>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4112, 'next': 64, 'param3': 13}
/*< 64>*/ 	printf("On dirait que quelqu'un est déjà passé avant\nmoi. Ici, y a rien d'autre que de l'<y<eau>>.")
/*< 65>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4615, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("Franchement, je vois pas qui pourrait vouloir\nde la flotte !")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2061, 'next': 71, 'param3': 13}
/*< 71>*/ 	printf("Bon, moi, je vais rentrer. À la poche pleine !")
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_94() {
/*<101>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 46}
/*<138>*/ 	set_camera(2, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 143, 'param3': 32}
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 139, 'param3': 49}
/*<139>*/ 	make_actor_do_something(4, 16)
/*<137>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 49}
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4096, 'param2': 1, 'next': 113, 'param3': 13}
/*<113>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 136, 'param3': 40}
/*<136>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 106, 'param3': 17}
/*<106>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 107, 'param3': 6}
/*<107>*/ 	set_camera(3, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 109, 'param3': 15}
/*<109>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 111, 'param3': 17}
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 110, 'param3': 6}
/*<110>*/ 	set_camera(4, 0)
/*<104>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 112, 'param3': 14}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 103, 'param3': 17}
/*<103>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 102, 'param3': 6}
/*<102>*/ 	entrypoint_201_92();
          }

          void entrypoint_201_95() {
/*<114>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 148, 'param3': 46}
/*<148>*/ 	set_camera(5, 0)
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 149, 'param3': 32}
/*<149>*/ 	make_actor_do_something(4, 17)
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 145, 'param3': 49}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 17, 'next': 144, 'param3': 17}
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 162, 'param3': 6}
/*<162>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': -1, 'next': 115, 'param3': 16}
/*<115>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 117, 'param3': 13}
/*<117>*/ 		printf("Hé là ! Tu crois quand même pas que tu vas\nprendre les trésors pour toi tout seul !")
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 119, 'param3': 13}
/*<119>*/ 		printf("M'enfin...<pause1E> Y a un symbole bizarre qu'est apparu\nsur le mur, mais y a pas l'air de se passer\ngrand\x2010chose...")
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 2057, 'next': 121, 'param3': 13}
/*<121>*/ 		printf("Je crois que le gros caillou s'est bien payé notre\ntête.")
/*<122>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2050, 'next': 123, 'param3': 13}
/*<123>*/ 		printf("Allez, je prends la tangente !")
/*<124>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<128>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3329, 'next': 126, 'param3': 13}
/*<126>*/ 		printf("On se connaît, non ? Ouais, ça me revient, on\ns'est croisés au volcan, c'est ça ?")
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 125, 'param3': 13}
/*<125>*/ 		printf("Toi aussi t'es venu chercher des trésors dans le\ncoin ?\n[1]Gagné ![2]Non")
/*<131>*/ 		switch (choice(2)) {
          		  case 0:
/*<132>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 133, 'param3': 13}
/*<133>*/ 			printf("C'est bien ce que je pensais ! Tu empestes le\ntrésor à des kilomètres.")
          			flw_152:
/*<152>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 153, 'param3': 13}
/*<153>*/ 			printf("Toi aussi t'es venu parce que t'as entendu les\nhistoires du type qui ressemble à un gros\ncaillou ?\n[1]Le Goron ?[2]Des histoires ?")
/*<134>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3339, 'next': 135, 'param3': 13}
/*<135>*/ 			printf("C'est moi qui trouverai le trésor en premier !")
/*<159>*/ 			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<158>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4617, 'next': 130, 'param3': 13}
/*<130>*/ 			printf("On m'la fait pas à moi ! Tu empestes le trésor\nà des kilomètres.")
          			goto flw_152
          		}
          	}
          }

          void entrypoint_201_96() {
/*<172>*/ 	start()
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 261, 'param3': 32}
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 173, 'param3': 16}
/*<173>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<174>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<181>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3345, 'next': 177, 'param3': 13}
/*<177>*/ 			printf("Quoi ? T'as trouvé la clé mais tu l'as utilisée ?")
          			flw_182:
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 178, 'param3': 13}
/*<178>*/ 			printf("En fait quand j'y pense, nous autres Mogmas,\non a pas vraiment besoin de clés.")
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 179, 'param3': 13}
/*<179>*/ 			printf("Merci de m'avoir prévenu ! Je retourne à la\nchasse au trésor !")
/*<192>*/ 			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
          			flw_256:
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<180>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 176, 'param3': 13}
/*<176>*/ 			printf("Ouais ! C'est cette clé ! T'es allé la chercher\nexprès pour moi ?")
          			goto flw_182
          		}
          	  case 1:
/*<249>*/ 		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          		  case 0:
/*<254>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 251, 'param3': 13}
/*<251>*/ 			printf("Mais c'est pas vrai ! Je la trouve pas...")
/*<252>*/ 			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
          			flw_189:
/*<189>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 188, 'param3': 13}
/*<188>*/ 			printf("Je suis sûr que j'ai enterré cette satanée clé\nquelque part ! Mais je sais plus où...")
/*<191>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3345, 'next': 190, 'param3': 13}
/*<190>*/ 			printf("C'était où, déjà...? Peut\x2010être dans cette pièce. Ou\npas... T'aurais pas une carte, toi, par hasard ?")
          			goto flw_256
          		  case 1:
/*<253>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3329, 'next': 250, 'param3': 13}
/*<250>*/ 			printf("Qu'est\x2010ce que tu veux ?\n[1]La clé[2]Le trésor[3-]Rien")
/*<175>*/ 			switch (choice(3)) {
          			  case 0:
          				goto flw_189
          			  case 1:
/*<185>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 184, 'param3': 13}
/*<184>*/ 				printf("Un type qui ressemble à un gros caillou m'a dit\nqu'il y avait une <y<sculpture dorée >>au fond de ce\ntemple. Elle ouvrirait une porte importante.")
/*<187>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3332, 'next': 186, 'param3': 13}
/*<186>*/ 				printf("Dis donc... Toi, t'as une tête à savoir quelque\nchose...")
          				goto flw_256
          			  case 2:
          			}
          		}
          	}
          }

          void entrypoint_201_97() {
/*<231>*/ 	start()
/*<241>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 242, 'param3': 32}
/*<242>*/ 	make_actor_do_something(3, 16)
/*<243>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 244, 'param3': 16}
/*<244>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 240, 'param3': 6}
/*<240>*/ 	set_camera(12, 0)
/*<245>*/ 	zone_temp_flags[55 /* 0x7 80 */] = true;
/*<266>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<248>*/ 	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
/*<239>*/ 	make_actor_do_something(4, 16)
/*<237>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 235, 'param3': 13}
/*<235>*/ 	printf("Ah, la poisse ! C'était bien la peine que je\nm'embête à chaparder cette clé à ces satanés\nmonstres...")
/*<236>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 232, 'param3': 13}
/*<232>*/ 	printf("J'ai dû la cacher dans un trou, mais je me\nsouviens plus lequel...")
/*<246>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<247>*/ 		entrypoint_201_96();
          	  case 1:
/*<233>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 234, 'param3': 13}
/*<234>*/ 		printf("Avec cette clé, je pensais mettre la main sur\ndes trésors qui me rendraient riche...<pause0F> Je suis\npourtant sûr que je l'ai <r<enterrée dans le coin >>!")
/*<238>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_201_11() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("J'ai détecté l'aura de dame <b<Zelda >>de manière très\ndistincte derrière cette grande porte. J'en déduis\nqu'elle est toute proche.")
/*< 31>*/ 	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
          }

          void entrypoint_201_12() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
          }

          void entrypoint_201_99() {
/*<163>*/ 	start()
/*<164>*/ 	switch (temp_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<165>*/ 		scene_flags[11 'Faron: Skyview Temple'][16 /* 0x3 01 */] = true;
          	  case 1:
          	}
          }

          void entrypoint_201_13() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("Le mécanisme contrôlant le verrou sur cette porte\nsemble avoir été désactivé.")
/*< 32>*/ 	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
          }

          void entrypoint_201_14() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Je ressens les auras\nmaléfiques de nombreux monstres dans ce temple.\n\n\nIl m'est impossible d'isoler celle de dame Zelda pour\nla localiser\x0E\x01\x06\x02\xFECD...<pause0F>\n\n\n\x0E\x01\x06\x02ÍVous ne pourrez donc pas utiliser la <pling><r<fonction détection\n>>dans cette zone.\n\n\n\x0E\x01\x12\x04\x00\x01Maître, je vous recommande d'analyser la situation\nà l'aide de la <g<vue subjective>>.")
/*< 94>*/ 	temp_flags[50 /* 0x7 04 */] = true;
/*<262>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<263>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_15() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, voici mon rapport sur le\nmécanisme permettant d'ouvrir cette porte.\n\n\nSi j'en juge par sa fonction, je devine qu'il doit se\ntrouver non loin de la porte en question.\n\n\nLa probabilité de le trouver en <g<inspectant\n>>scrupuleusement les alentours de la porte\nest de 80 %.")
          }

          void entrypoint_201_16() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("Les sbires de Ghirahim ont verrouillé la porte à\nnouveau. Il faut en retrouver la clé.")
/*< 41>*/ 	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
          }

