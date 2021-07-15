          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, je détecte un nouveau type\nd'ennemi devant vous qui semble doté\nde fortes capacités physiques.\n\nAppuyez sur (v) lorsque vous <g<ciblez >>un\nennemi avec (Z) et je vous fournirai\ntoutes les informations dont je dispose\nà son sujet.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Rah ! Y a des tonnes de monstres\npartout, j'peux même pas rejoindre\nmon pote ! J'savais que j'aurais dû\nrester chez moi...")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("Hé ! Qu'est\x2010ce que tu fais là ?\nDécidément, tu choisis de drôles\nd'endroits pour chercher ton amie,\ndis donc !\nEn parlant de ça...<pause0F> Avant de venir ici,\nj'ai vu une <r<blonde bizarre>><pling> se faire\nenlever...\n\n\x0E\x01\x09\x04\x14\x1215J'ai pas vraiment pu l'aider,\ntu comprends, y avait tellement\nde monstres !\n\n\x0E\x01\x09\x04ÿ\xFF00D'ailleurs si tu tiens à la vie, tu ferais\nbien de te tailler toi aussi !")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, dame Zelda\nest venue se purifier dans cette source.\n\n\nLes écrits anciens sur la stèle suggèrent\nqu'elle a dû ensuite se diriger vers la\nrégion appelée <b<Lanelle>>.\n\nSi vous rapportez la stèle au temple,\nune colonne de lumière ouvrant une\nnouvelle voie apparaîtra.\n\nRetournez à <b<Célesbourg >>pour y porter\nla stèle et continuez votre route vers\nles <b<terres de Lanelle>>.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Dah ! J'le trouve pas... Où est\x2010ce que\nj'ai bien pu le fourrer ? Je l'ai perdu\nen venant ici, ou quoi ?")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Ah, tu tombes bien, toi !\nC'est moi, <b<Ferrug>> !\n\n\n\x0E\x01\x09\x04ÿ\xFFFFC'est pas le hasard qui nous fait nous\nrencontrer, j'en suis sûr ! T'es venu\nm'aider à chercher mon <y<sac de bombes>>,\nhein ?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("Je cherchais des trésors dans le coin,\nquand je suis tombé sur des monstres\nderrière ces rochers...<pause0F> J'ai dû le perdre\n\x0E\x01\x09\x04\x13\x100Dquand j'me suis carapaté.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFCe sac, c'est super pratique !\nÇa permet de ranger des <r<fleurs bombes\n>>et de les <r<utiliser quand tu veux>>.\nC'est trop galère de pas en avoir !\n\x0E\x01\x09\x04\x11\xDFFDis, tu veux pas chercher mon <y<sac\nde bombes >>? Les monstres ont dû le\nramasser...<pause0A> Allez, quoi !")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08Oh ! T'as retrouvé mon <y<sac de bombes >>!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFOuais, j'te dois une fière chandelle.\nAllez, rends\x2010le\x2010moi...<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0EHein ? Tu veux que je te le prête pour\nque tu puisses continuer ton chemin ?\n\n\n\x0E\x01\x09\x04ÿ\xFFFFAh ouais, tu disais que tu cherchais\nune amie à toi... Tu dois y tenir, pour\nvenir jusqu'ici !\n\n\x0E\x01\x09\x04\x15\xD11Au fait...<pause0F> à propos de mon pote...\n[1]Il est rentré[2]Il s'inquiétait[3]Non")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007Sérieux ? Il est pas possible, celui\x2010là !\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFEnfin bon, t'as assuré, tu l'as retrouvé\ndans ce guet\x2010apens...\n\n\n\x0E\x01\x09\x04\x14\x1209Bah, je te le donne, mon sac, va !\nPrends\x2010le et fais\x2010en bon usage !")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("Je t'ai donné mon <y<sac de bombes>>,\nva donc chercher ton amie !")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004Ah ouais, il se faisait un sang d'encre,\nhein ?<pause0F> C'est de ma faute, encore...\n\n\n\x0E\x01\x09\x04ÿ\x8FFTu dois aussi être très inquiet pour\nton amie... Tu sais même pas si\nelle est encore vivante...\n\n\x0E\x01\x09\x04\x14\x1209Bon, allez, j'te le donne, mon sac !\nEt fais\x2010en bon usage !")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804Ah...<pause0F> J'espère qu'il lui est rien arrivé...\nSi ça se trouve, les monstres lui ont\nréglé son compte...\n\n\x0E\x01\x09\x04\x00\x8FFTu dois aussi être très inquiet pour\nton amie... Tu sais même pas si\nelle est encore vivante...\n\n\x0E\x01\x09\x04\x14\x1209Bon, allez, j'te le donne, mon sac !\nEt fais\x2010en bon usage !")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12Oups ! J'ai oublié de te dire...\n\n\n\n\x0E\x01\x09\x04\x09\x8FFMon sac doit être vide, alors prends ça.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("Tu peux ranger des fleurs bombes\ndans ton sac, alors penses\x2010y quand tu\ncommences à manquer de bombes !\n\n\x0E\x01\x09\x04\x11\x80BPendant que tu portes une bombe, tu\npeux la <g<ranger dans ton sac >>en\nappuyant sur (B). Souviens\x2010t'en !\x0E\x01\x11\x02\x1CD\n\n\x0E\x01\x09\x04\x09\x8FFTon sac peut contenir <r<jusqu'à dix\nbombes>>. Remplis\x2010le quand tu trouves\ndes fleurs bombes !")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Rien à voir, mais... ça t'est déjà arrivé\nde prendre feu pendant que tu te\nbattais avec des monstres ?\n\n\x0E\x01\x09\x04\x09\x8FFSi jamais ça t'arrive, faut penser à\nl'éteindre, hein ! Et surtout, te mets\npas à sortir une <y<bombe>>, il pourrait\nt'arriver des bricoles !")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Héhé, tu as fait passer la <y<fleur bombe\n>>en la faisant rouler...\nTu te débrouilles pas mal !\n\n\x0E\x01\x09\x04\x11\x800T'es bien parti pour me retrouver mon\n<y<sac de bombes >>!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("Avec une bonne <y<fleur bombe>>, tu devrais\npouvoir réduire ces rochers en\npoussière ! Regarde dans le coin si tu\npeux en trouver.")
          			  case 1:
/*< 97>*/ 				printf("Ah ouais, en fait... <pause0F>Tu peux pas creuser\nsous la terre, toi, hein ? Donc tu peux\npas aller plus loin...\n\n\x0E\x01\x09\x04\x15\x120CHmm... J'pense que tu devrais pouvoir\nfaire sauter ces rochers avec une <y<fleur\nbombe>>.\n\n\x0E\x01\x09\x04\x09\xFF00Regarde dans le coin si tu peux en\ntrouver !")
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
/*< 40>*/ 	printf("\x0E\x01\x09\x04\xD08\x5FFComme on se retrouve...")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFOh<pause01>.<pause01>.<pause01>.<pause01><pause08> Quel rustre je fais...\n<pause14>Ton nom m'est complètement sorti\nde la tête...\n\n\x0E\x01\x09\x04\xD0A\x5FFÀ vrai dire, cela n'a aucune\nimportance. Je suis quelque peu...\nfroissé, vois\x2010tu...")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900Alors que mes sbires viennent de\nmettre la main sur la prêtresse, je me\nrends sur les lieux le c\x153ur léger...\nEt qu'apprends\x2010je ?\n\x0E\x01\x09\x04\xD00\xCFFQue cette satanée servante\nde la Déesse...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍ... l'a encore une fois...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍ... soustraite à mon emprise...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDPourquoi faut\x2010il toujours\nqu'on me mette \x0E\x01\n\x04\x0BÍdes bâtons\ndans les roues ?!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CDAlors que j'ai besoin de la\nprêtresse pour rappeler mon\nmaître à la vie ! Il le faut !")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("<pause05>.<pause05>.<pause05>.<pause05>\n<pause0A>Mais je m'emporte.\n\n\n\x0E\x01\x09\x04\xD08\x5FFTu vois à présent pourquoi je ne puis\npartir d'ici le c\x153ur tranquille ?")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFEn fait, je n'ai aucune raison de\nrester calme...<pause14>\nJe devrais même plutôt...<pause14>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf("... laisser éclater ma colère !")
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
/*< 42>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\nL'aura de dame Zelda est proche.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf("La chaîne que vous voyez émet un\nsignal très fort. La probabilité que\ndame Zelda ait été attachée avec\nest de 95 %.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf("Dame Zelda a dû trouver un moyen de\nsortir d'ici et de progresser plus avant.\nJe vous recommande de la suivre\nau plus vite.")
          }

