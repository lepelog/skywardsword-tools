          void entrypoint_201_51() {
/*<  2>*/ 	start()
/*< 12>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 3, unk: 0, line: 54 */ "")
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 3, unk: 0, line: 53 */ "")
          	}
          }

          void entrypoint_201_17() {
/*< 49>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "Vous avez obtenu un nouvel objet.\nMon analyse indique que cet objet en \nforme d'insecte est <color red<<sound 4>capable de voler>coloroff>.\n\n<color red<Dirigez‐le à distance >coloroff>à l'aide de la\nmanette Wii Remote. Ses mandibules\npeuvent sectionner des choses fines\net frapper de petits objets.\nSortez‐le avec (B) et appuyez sur (2)\npour consulter son mode d'utilisation.<0x10011:0x01cd><0x10011:0x05cd>")
          }

          void entrypoint_201_52() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 3, unk: 0, line: 55 */ "")
          }

          void entrypoint_201_18() {
/*< 72>*/ 	start()
/*<228>*/ 	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
/*< 75>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "J'ai repéré l'<color yellow<eau sacrée >coloroff>à l'intérieur\nde ce temple, mais il est <color red<<sound 4>impossible\nd'utiliser la fonction détection >coloroff>ici.\n\nD'après ce que j'ai pu percevoir de\nl'extérieur, je déduis que l'eau sacrée\nse trouve au plus profond de ce temple.")
/*<209>*/ 		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
/*<204>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 30}
/*<205>*/ 		wait_frames(15)
/*<206>*/ 		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
/*<208>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Je vous recommande d'explorer à\nnouveau les profondeurs de ce temple\nen direction de la (X) indiquée sur\nvotre carte.")
/*<207>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 78, 'param3': 34}
/*< 78>*/ 		printf(/* textboxtype: 2, unk: 0, line: 13 */ "Je ressens la présence de monstres plus\nnombreux que lors de notre dernière\nvisite. Soyez prudent.")
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 2, unk: 0, line: 13 */ "Je ressens la présence de monstres plus\nnombreux que lors de notre dernière\nvisite. Soyez prudent.")
          	}
          }

          void entrypoint_201_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 7, unk: 0, line: 1 */ "La voie s'ouvrira quand les\njoyaux marqués par des (X) sur\nla carte seront frappés. La carte\nrepose dans la salle centrale.")
          }

          void entrypoint_201_53() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10012:0x00000004>Maître <heroname>, selon les\nmots que je vous ai traduits, dame\n<color blue<Zelda >coloroff>serait venue ici se purifier.\n\nLa probabilité qu'elle se soit ensuite\ndirigée vers la source suivante, sur\nles <color blue<terres d'Ordinn>coloroff>, est de 97 %.\n\nJe ne possède cependant aucune\ninformation sur la manière dont\nelle s'y est rendue.")
/*< 87>*/ 	set_camera(1, 0)
/*< 86>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "Selon mes estimations, vous\ndevez retourner à <color blue<Célesbourg\n>coloroff>pour placer dans son piédestal la stèle\nque vous venez d'obtenir.\nAinsi, une <color red<<sound 4>nouvelle colonne de lumière>coloroff>\ndevrait s'élever de la terre et vous\npermettre de continuer à rechercher\ndame Zelda.")
/*< 88>*/ 	set_camera(-1, 0)
/*<  9>*/ 	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
          	  case 0:
/*<  7>*/ 		printf(/* textboxtype: 2, unk: 0, line: 63 */ "Vous pouvez utiliser la <color blue<statue\nd'oiseau >coloroff>qui se trouve à l'extérieur\npour regagner le ciel.")
          		flw_79:
/*< 79>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 80>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 81, 'param3': 36}
/*< 81>*/ 		wait_frames(15)
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 2, unk: 0, line: 64 */ "Il devrait y avoir dans la forêt un\ndispositif permettant de regagner\nle ciel.")
          		goto flw_79
          	}
          }

          void entrypoint_201_19() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "Je perçois de l'<color yellow<eau sacrée >coloroff>tout près\nd'ici. Les auras des monstres ont\ndisparu, vous pouvez à nouveau\nutiliser la <color red<fonction détection>coloroff>.")
          }

          void entrypoint_201_02() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 7, unk: 0, line: 2 */ "Toi qui descends des cieux,\nprête l'oreille à l'envoyée\nqui t'a guidé ici‐bas.")
          }

          void entrypoint_201_54() {
/*< 23>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 47, 'param2': 0, 'next': 167, 'param3': 40}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 330, 'param2': 0, 'next': 168, 'param3': 51}
/*<168>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 169, 'param3': 17}
/*<169>*/ 	set_camera(9, 0)
/*< 26>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 24>*/ 		printf(/* textboxtype: 2, unk: 0, line: 65 */ "La probabilité que cette eau soit la\nmême que celle que contient la\ncuvette du dragon d'eau est de\n95 %. Retournons à sa caverne.")
/*< 82>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*<264>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 36}
/*< 84>*/ 		set_camera(10, 0)
/*<170>*/ 		wait_frames(15)
          	  case 1:
/*< 25>*/ 		printf(/* textboxtype: 2, unk: 0, line: 66 */ "Cette eau n'est pas une eau ordinaire.\nElle dégage une grande énergie.\n\n\nSi elle entre en contact avec\nun corps qui est sur la même\nlongueur d'onde, une augmentation\nd'énergie pourrait se produire.")
/*<166>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          	}
          }

          void entrypoint_201_03() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 7, unk: 0, line: 3 */ "Les portes des pièces latérales\ns'ouvrent lorsque les joyaux\nsont frappés. L'un est en haut,\nl'autre est en bas.")
          }

          void entrypoint_201_55() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Tiens, tiens...<pause 15> Je vois que tu t'es quand\nmême bien débrouillé pour un jeune\nblanc-bec.\n\nMais tu n'as pas vraiment de mérite...<pause 15>\nSans ton épée, tu en baverais un coup.")
          }

          void entrypoint_201_20() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10012:0x00000004>Maître <heroname>, il est\nprobable que <color blue<je>coloroff> sois l'envoyée dont\nil est question sur cette stèle.\n\nPour vous venir en aide, <0x10012:0x00000002>Maître,\nla Déesse m'a transmis une multitude\nd'informations à propos de cette terre.\n\nSi quelque chose vous pose problème,\nappelez‐moi en appuyant sur (v).<0x10011:0x09cd>\n\n\nPar ailleurs, lorsque vous <color green<ciblez\n>coloroff>quelque chose avec (Z), appelez‐moi\navec (v) et je vous donnerai des\ninformations sur votre cible.<0x10011:0x07cd><0x10011:0x09cd>")
/*< 93>*/ 	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
          }

          void entrypoint_201_04() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 7, unk: 0, line: 4 */ "")
          }

          void entrypoint_201_56() {
/*< 36>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "Bon, j'en ai assez de jouer avec toi.\nJe ne ressens plus la présence de la\njeune fille...<pause 15> Je n'ai donc plus de\ntemps à perdre ici.\nAdieu, enfant des cieux. Je te pardonne\npour cette fois, mais je te conseille de\nne plus croiser ma route.")
/*< 85>*/ 	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
          }

          void entrypoint_201_21() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "C'est un gardien créé à partir d'une\nforce maléfique. Il a tendance à\nsuivre du regard la pointe des\nobjets effilés.")
/*<216>*/ 	set_camera(13, 0)
/*<217>*/ 	printf(/* textboxtype: 2, unk: 0, line: 19 */ "Ces yeux sont reliés les uns aux autres.\nJ'en déduis qu'il est impossible de les\nfaire tourner individuellement.")
/*<218>*/ 	wait_frames(15)
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_91() {
/*< 42>*/ 	start()
/*<195>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 196, 'param3': 32}
/*<196>*/ 	make_actor_do_something(3, 16)
/*<197>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 198, 'param3': 16}
/*<198>*/ 	wait_frames(5)
/*<194>*/ 	set_camera(12, 0)
/*<212>*/ 	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
/*<265>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<193>*/ 	make_actor_do_something(4, 16)
/*<255>*/ 	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          	  case 0:
/*<257>*/ 		entrypoint_201_96();
          	  case 1:
/*< 48>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 46, 'param3': 13}
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "Ah, bien saudit! Ça valait bien la peine\nque je me force pour arracher cette clé\nà ce monstre, juste pour la perdre pas\nlongtemps après...")
/*< 47>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 43, 'param3': 13}
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "J'ai dû la cacher dans un trou, mais\nje me souviens plus lequel...")
/*<258>*/ 		switch (scene_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<259>*/ 			entrypoint_201_96();
          		  case 1:
/*< 44>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "De toute façon, les clés, c'est pas ça\nqui va me rendre riche. Je suis bien\nmieux de trouver des trésors, c'est\nbeaucoup plus payant!")
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	}
          }

          void entrypoint_201_57() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10005:0x004b0000>C'est une bien belle épée que tu as là.<pause 15>\nMais il me suffit d'observer <color red<tes gestes\n>coloroff>pour l'arrêter d'une seule main.")
          }

          void entrypoint_201_22() {
/*<220>*/ 	start()
/*<221>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "<0x10012:0x00000004>Maître <heroname>, j'ai détecté\nprès de nous quelque chose que vous\npouvez cibler.\n\nLorsque vous <color green<ciblez>coloroff> avec (Z), si vous\nm'appelez avec (v), je vous donnerai\nde plus amples informations sur votre\ncible.<0x10011:0x07cd><0x10011:0x09cd>")
/*<222>*/ 	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
/*<223>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 224, 'param3': 32}
/*<224>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 225, 'param3': 17}
/*<225>*/ 	wait_frames(15)
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
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Un instant... On se connaît, je crois.\nOuais, ça me revient, on s'est\ncroisés au volcan, c'est ça?")
/*< 56>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2065, 'next': 52, 'param3': 13}
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "Toi aussi t'es venu chercher\ndes trésors dans le coin?\n[1-]Effectivement[2-]Non")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 60, 'param3': 13}
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "C'est bien ce que je pensais!\nÇa se voit bien que tu es\nun chasseur de trésors.")
          		flw_61:
/*< 61>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2059, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "Je suppose que t'es venu parce que\nt'as entendu les histoires du type qui\nressemble à un gros caillou?\n[1-]Le Goron?[2-]Des histoires?")
/*< 95>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2050, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "Qu'est-ce qu'il a dit, déjà?\n« À l'endroit où virevoltent les\npapillons dans le temple, <sound 4><color green<fais\nrésonner une douce mélodie>coloroff>. »")
/*< 97>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 2057, 'next': 98, 'param3': 13}
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "Je me suis rendu là, et me suis mis à\nchanter de ma plus belle voix... et rien.\nIl ne s'est absolument rien passé.")
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 100, 'param3': 13}
/*<100>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "Tant qu'à être si près du but, je me\nsuis dit qu'il ne fallait pas lâcher.\nJe vais continuer jusqu'à ce que je\ntrouve un beau gros trésor!")
/*<157>*/ 		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<156>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 53>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 54, 'param3': 13}
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "Ouais, ouais, me semble...\nÇa se voit bien que tu es\nun chasseur de trésors.")
          		goto flw_61
          	}
          }

          void entrypoint_201_23() {
/*<229>*/ 	start()
/*<230>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000004>Maître <heroname>,\nl'eau qui se trouve dans cette salle...\n<pause 15>est de l'<color red<eau ordinaire>coloroff>.\n\nL'<color yellow<eau sacrée>coloroff> dont a besoin le dragon\nd'eau devrait se trouver dans les\nprofondeurs du temple.")
          }

          void entrypoint_201_93() {
/*< 63>*/ 	start()
/*<199>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 200, 'param3': 32}
/*<200>*/ 	make_actor_do_something(3, 16)
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 202, 'param3': 16}
/*<202>*/ 	wait_frames(5)
/*<160>*/ 	set_camera(11, 0)
/*<213>*/ 	zone_temp_flags[56 /* 0x6 01 */] = true;
/*<203>*/ 	make_actor_do_something(4, 16)
/*< 69>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4364, 'next': 67, 'param3': 13}
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "C'est pas vrai... J'ai vraiment creusé\nfort pour arriver jusqu'ici. Je ne peux\npas croire que je vais retourner les\npattes vides... Hmpf.")
/*< 68>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4112, 'next': 64, 'param3': 13}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "On dirait que quelqu'un est déjà passé\navant moi. Il ne reste que de l'<color yellow<eau>coloroff>, ici!")
/*< 65>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4615, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "Franchement, je vois pas qui pourrait\nvouloir venir jusqu'ici rien que pour\nde la flotte!")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2061, 'next': 71, 'param3': 13}
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "Bon, moi, je m'en vais chez nous.\nÀ la revoyure!")
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
/*<106>*/ 	wait_frames(45)
/*<107>*/ 	set_camera(3, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 109, 'param3': 15}
/*<109>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 111, 'param3': 17}
/*<111>*/ 	wait_frames(15)
/*<110>*/ 	set_camera(4, 0)
/*<104>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 112, 'param3': 14}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 103, 'param3': 17}
/*<103>*/ 	wait_frames(15)
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
/*<144>*/ 	wait_frames(15)
/*<162>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': -1, 'next': 115, 'param3': 16}
/*<115>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 117, 'param3': 13}
/*<117>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "Un instant... Un instant! Penses-tu\nque je vais tout te laisser les trésors\npour toi tout seul? Hein?")
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 119, 'param3': 13}
/*<119>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "Écoute‐moi bien, toi...<pause 30>\nMême si un symbole bizarre est apparu\nsur le mur, ça ne veut rien dire. On\ns'entend là‐dessus?")
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 2057, 'next': 121, 'param3': 13}
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "J'ai l'impression que le gros caillou\nt'as bien eu, toi!")
/*<122>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2050, 'next': 123, 'param3': 13}
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Reste ici, si tu veux. Moi, je fonce.")
/*<124>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<128>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3329, 'next': 126, 'param3': 13}
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Un instant... On se connaît, je crois.\nOuais, ça me revient, on s'est\ncroisés au volcan, c'est ça?")
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 125, 'param3': 13}
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Toi aussi t'es venu chercher\ndes trésors dans le coin?\n[1-]Effectivement[2-]Non")
/*<131>*/ 		switch (choice(2)) {
          		  case 0:
/*<132>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 133, 'param3': 13}
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "C'est bien ce que je pensais!\nÇa se voit bien que tu es\nun chasseur de trésors.")
          			flw_152:
/*<152>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 153, 'param3': 13}
/*<153>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "Je suppose que t'es venu parce que\nt'as entendu les histoires du type qui\nressemble à un gros caillou?\n[1-]Le Goron?[2-]Des histoires?")
/*<134>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3339, 'next': 135, 'param3': 13}
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "C'est moi qui vais trouver le\ntrésor en premier! Garanti.")
/*<159>*/ 			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<158>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4617, 'next': 130, 'param3': 13}
/*<130>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Ouais, ouais, me semble...\nÇa se voit bien que tu es\nun chasseur de trésors.")
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
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "Quoi? T'as trouvé la clé mais\ntu l'as déjà utilisée?")
          			flw_182:
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 178, 'param3': 13}
/*<178>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "À bien y penser, nous les Mogmas, on\nn'a pas vraiment besoin de clés. On\nest capables de creuser pour se rendre\npartout où on veut aller!")
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 179, 'param3': 13}
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "Merci de m'avoir passé le tuyau!\nMoi, je retourne à la chasse au\ntrésor! Bonne chance!")
/*<192>*/ 			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
          			flw_256:
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<180>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 176, 'param3': 13}
/*<176>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "Ouais! C'est la clé que j'avais perdue!\nT'es allé la chercher exprès pour moi?")
          			goto flw_182
          		}
          	  case 1:
/*<249>*/ 		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          		  case 0:
/*<254>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 251, 'param3': 13}
/*<251>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "Mais c'est pas vrai! Je la trouve pas...")
/*<252>*/ 			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
          			flw_189:
/*<189>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 188, 'param3': 13}
/*<188>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "Je suis sûr que j'ai enterré cette\nsatanée clé quelque part!\nMais je sais plus où...")
/*<191>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3345, 'next': 190, 'param3': 13}
/*<190>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "C'était où, déjà...? Peut‐être dans\ncette pièce. Ou pas... T'aurais pas une\ncarte, toi, par hasard?")
          			goto flw_256
          		  case 1:
/*<253>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3329, 'next': 250, 'param3': 13}
/*<250>*/ 			printf(/* textboxtype: 1, unk: 1, line: 26 */ "Qu'est‐ce que tu veux?\n[1-]La clé[2-]Le trésor[3]Rien")
/*<175>*/ 			switch (choice(3)) {
          			  case 0:
          				goto flw_189
          			  case 1:
/*<185>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 184, 'param3': 13}
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 29 */ "Tu sais, le bonhomme qui ressemble à\nun gros caillou à pattes? Celui qui a des\nsourcils comme des balais...\n\nIl m'a dit qu'il y avait une <color yellow<sculpture\ndorée >coloroff>au fond de ce temple. Elle\nouvrirait une porte importante...")
/*<187>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3332, 'next': 186, 'param3': 13}
/*<186>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "Tiens, tiens... À te voir la face, on\ndirait que tu sais quelque chose, toi!\nAllez! Raconte!")
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
/*<244>*/ 	wait_frames(5)
/*<240>*/ 	set_camera(12, 0)
/*<245>*/ 	zone_temp_flags[55 /* 0x7 80 */] = true;
/*<266>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<248>*/ 	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
/*<239>*/ 	make_actor_do_something(4, 16)
/*<237>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "Ah, bien saudit! Ça valait bien la peine\nque je me force pour arracher cette clé\nà ce monstre, juste pour la perdre pas\nlongtemps après...")
/*<236>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 232, 'param3': 13}
/*<232>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "J'ai dû la cacher dans un trou, mais\nje me souviens plus lequel...")
/*<246>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<247>*/ 		entrypoint_201_96();
          	  case 1:
/*<233>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 234, 'param3': 13}
/*<234>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Avec cette clé, je pensais mettre la\nmain sur des trésors qui me rendraient\nriche...<pause 15> Je suis pourtant sûr que je l'ai\n<color red<enterrée dans le coin>coloroff>!")
/*<238>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_201_11() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "J'ai détecté l'aura de dame <color blue<Zelda >coloroff>de\nmanière très distincte derrière cette\ngrande porte. J'en déduis qu'elle est\ntoute proche.")
/*< 31>*/ 	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
          }

          void entrypoint_201_12() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 6 */ "")
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
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 7 */ "Le mécanisme contrôlant le verrou sur\ncette porte semble avoir été désactivé.")
/*< 32>*/ 	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
          }

          void entrypoint_201_14() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nJe ressens les auras maléfiques de\nnombreux monstres dans ce temple.\nIl m'est impossible d'isoler celle de\ndame Zelda pour la localiser<0x10006:0xfecd>...<pause 15>\n\n\n<0x10006:0x00cd>Vous ne pourrez donc pas utiliser la\n<sound 4><color red<fonction détection >coloroff>dans cette zone.\n\n\n<0x10012:0x00000001>Maître, je vous recommande\nd'analyser la situation à l'aide\nde la <color green<vue subjective>coloroff>.\n")
/*< 94>*/ 	temp_flags[50 /* 0x7 04 */] = true;
/*<262>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<263>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_15() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000004>Maître <heroname>, voici mon\nrapport sur le mécanisme permettant\nd'ouvrir cette porte.\n\nSi j'en juge par sa fonction, je devine\nqu'il doit se trouver non loin de la\nporte en question.\n\nLa probabilité de le trouver en\n<color green<inspectant >coloroff>scrupuleusement les\nalentours de la porte est de 80 %.")
          }

          void entrypoint_201_16() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "Les acolytes de Ghirahim ont verrouillé\nla porte à nouveau. Il faut en retrouver\nla clé.")
/*< 41>*/ 	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
          }

