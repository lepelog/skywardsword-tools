          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, je détecte un nouveau type d'ennemi devant\nvous qui semble doté de fortes capacités physiques.\n\n\nAppuyez sur (v) lorsque vous <g<ciblez >>un ennemi\navec (Z) et je vous fournirai toutes les informations\ndont je dispose à son sujet.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Wah! Y a des tonnes de monstres partout,\nj'peux même pas rejoindre mon ami!\nJ'aurais donc dû rester chez moi...")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("Hé! Qu'est\x2010ce que tu fais là? Décidément,\ntu choisis de drôles d'endroits pour chercher\nton amie, dis donc!\n\nEn parlant de ça...<pause0F> Avant de venir ici, j'ai vu\nune <r<blonde bizarre>><pling> se faire enlever...\n\n\n\x0E\x01\x09\x04\x14\x1215J'ai pas vraiment pu l'aider, tu comprends,\ny avait tellement de monstres!\n\n\n\x0E\x01\x09\x04ÿ\xFF00D'ailleurs si tu tiens à la vie, tu ferais bien\nde te pousser toi aussi!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, dame Zelda est venue se\npurifier dans cette source.\n\n\nLes écrits anciens sur la stèle suggèrent qu'elle a dû\nensuite se diriger vers la région appelée <b<Lanelle>>.\n\n\nSi vous rapportez la stèle dans la statue de la Déesse,\nune colonne de lumière ouvrant une nouvelle voie\napparaîtra.\n\nRetournez à <b<Célesbourg >>pour y porter la stèle et\ncontinuez votre route vers les <b<terres de Lanelle>>.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Dah! J'le trouve pas... J'ai dû le perdre en\nm'en venant ici.")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Ah, tu tombes bien, toi!\nC'est moi, ton ami <b<Ferrug>>!\n\n\n\x0E\x01\x09\x04ÿ\xFFFFC'est pas le hasard qui nous fait nous\nrencontrer, j'en suis sûr! T'es venu m'aider\nà chercher mon <y<sac de bombes>>, hein?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("Je cherchais des trésors de l'autre côté de ces\nrochers, quand je suis tombé sur des monstres...<pause0F>\nJ'ai dû l'échapper \x0E\x01\x09\x04\x13\x100Dquand j'ai paniqué.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFCe sac est super pratique! Il permet de ranger\ndes <r<fleurs bombes >>et de les <r<utiliser quand tu\nveux>>. Je ne peux pas m'en passer!\n\n\x0E\x01\x09\x04\x11\xDFFVeux-tu chercher mon <y<sac de bombes>>?\nLes monstres ont dû le ramasser...<pause0A>\nTu vas aller me le chercher, hein?")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08Oh! T'as retrouvé mon <y<sac de bombes>>!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFOuais, j'te dois une fière chandelle.\nDonne\x2010le\x2010moi, s'il te plaît...<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0EHein? Tu veux que je te le prête pour que tu\npuisses continuer ton chemin?\n\n\n\x0E\x01\x09\x04ÿ\xFFFFAh ouais, tu disais que tu cherchais une amie\nà toi... Tu dois y tenir, pour venir jusqu'ici!\n\n\n\x0E\x01\x09\x04\x15\xD11Au fait...<pause0F> au sujet de mon ami...\n[1]Il est rentré[2]Il s'inquiétait[3]Non")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007Sérieux? Pas moyen de se fier à personne\nde nos jours!\n\n\n\x0E\x01\x09\x04ÿ\x8FFBien, toi au moins tu t'es montré digne de\nconfiance. Tu as risqué ta vie pour te rendre\ndans ce guet\x2010apens...\n\n\x0E\x01\x09\x04\x14\x1209Tiens, je te le donne, mon sac!\nPrends\x2010le et fais\x2010en bon usage!")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("Je t'ai donné mon <y<sac de bombes>>, va donc\nchercher ton amie!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004Ah oui? Il s'en fait pour moi?<pause0F> C'est de ma\nfaute, encore...\n\n\n\x0E\x01\x09\x04ÿ\x8FFTu dois aussi être très inquiet pour ton amie...\nTu sais même pas si elle est encore vivante...\n\n\n\x0E\x01\x09\x04\x14\x1209Bon, tiens, j'te le donne, mon sac!\nEt fais\x2010en bon usage!")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804Ah...<pause0F> J'espère qu'il lui est rien arrivé... On ne\nsait jamais, avec tous ces monstres... Ils lui ont\npeut\x2010être réglé son compte...\n\n\x0E\x01\x09\x04\x00\x8FFTu dois aussi être très inquiet pour ton amie...\nTu sais même pas si elle est encore vivante...\n\n\n\x0E\x01\x09\x04\x14\x1209Bon, tiens, j'te le donne, mon sac!\nEt fais\x2010en bon usage!")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12Attends un peu! J'ai oublié de te dire...\n\n\n\n\x0E\x01\x09\x04\x09\x8FFMon sac doit être vide. Laisse\x2010moi te donner\nun petit quelque chose.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("Si tu commences à manquer de bombes, tu peux\nen ramasser d'autres et les ranger dans ton sac.\n\n\n\x0E\x01\x09\x04\x11\x80BPendant que tu portes une fleur bombe, tu peux\nla <g<ranger dans ton sac >>en appuyant sur (B).\nNe l'oublie pas!\x0E\x01\x11\x02\x1CD\n\n\x0E\x01\x09\x04\x09\x8FFTon sac peut contenir <r<jusqu'à 10 bombes>>.\nRemplis\x2010le quand tu trouves des fleurs bombes!")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Rien à voir, mais... est\x2010ce que ça t'est déjà arrivé\nde prendre feu pendant que tu te battais avec\ndes monstres?\n\n\x0E\x01\x09\x04\x09\x8FFSi jamais ça t'arrive, faut penser à l'éteindre,\nhein! Et surtout, ne va pas sortir une <y<bombe\n>>quand tu es en feu. Fais\x2010moi confiance\nlà\x2010dessus.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Héhé, bien pensé! Tu as fait passer la <y<fleur\nbombe >>en la faisant rouler... Tu te débrouilles\npas mal!\n\n\x0E\x01\x09\x04\x11\x800T'es bien parti pour me retrouver mon <y<sac\nde bombes>>! J'ai bon espoir.")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("Avec une bonne <y<fleur bombe>>, tu devrais pouvoir\nréduire ces rochers en poussière! Regarde\nautour si tu peux en trouver.")
          			  case 1:
/*< 97>*/ 				printf("Ah, oui, en fait... <pause0F>Tu peux pas creuser sous la\nterre, toi, hein? Donc tu peux pas retourner de\nl'autre côté. Hmm.\n\n\x0E\x01\x09\x04\x15\x120CJ'ai une idée. Tu devrais pouvoir faire sauter\nces rochers avec une <y<fleur bombe>>.\n\n\n\x0E\x01\x09\x04\x09\xFF00Regarde autour si tu peux en trouver!")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Temple de la terre")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1006, 'next': 54, 'param3': 24}
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 49, 'param3': 32}
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 99, 'next': 56, 'param3': 16}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 52, 'param3': 40}
/*< 52>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1279, 'next': 70, 'param3': 13}
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 51, 'param3': 6}
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf("\x0E\x01\x09\x04\xD08\x5FFTiens, tiens... Encore toi.")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFOh<pause01>.<pause01>.<pause01>.<pause01><pause08> La mémoire me fait défaut...\n<pause14>Ton nom m'est complètement sorti de la tête...\n\n\n\x0E\x01\x09\x04\xD0A\x5FFÀ vrai dire, cela n'a aucune espèce\nd'importance. Je suis quelque peu... froissé,\nvois\x2010tu... Tu tombes bien.")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900Alors que mes acolytes viennent de mettre la\nmain sur la prêtresse, je me rends sur les lieux\nle c\x153ur léger... Et qu'est\x2010ce que j'apprends?\n\n\x0E\x01\x09\x04\xD00\xCFFQue cette importune servante de la Déesse...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍ... l'a encore une fois...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍ... soustraite à mon emprise...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDPourquoi faut\x2010il toujours\nqu'on me mette \x0E\x01\n\x04\x0BÍdes bâtons\ndans les roues?")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CDJ'ai besoin de la prêtresse pour\nramener mon maître à la vie!\nIL ME LA FAUT!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("<pause05>.<pause05>.<pause05>.<pause05>\n<pause0A>Mais je m'emporte.\nJe te demande pardon.\n\n\x0E\x01\x09\x04\xD08\x5FFTu vois maintenant pourquoi je dois me\ndéfouler un peu avant de partir d'ici.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFEn fait, tu vas pouvoir m'aider...<pause14> Tu...<pause14> vas...<pause14>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf("... subir mon excès de rage!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 65, 'next': 48, 'param3': 6}
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
          		flw_57:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nL'aura de dame Zelda est dans les environs.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf("La chaîne que vous voyez émet un signal très fort.\nLa probabilité que dame Zelda ait été attachée avec\nest de 95 %.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf("Dame Zelda a dû trouver un moyen de sortir d'ici\net de progresser plus avant. Je vous recommande\nde la suivre au plus vite.")
          }

