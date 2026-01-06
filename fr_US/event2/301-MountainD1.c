          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x0000000b>Maître, je détecte un nouveau type\nd'ennemi devant vous qui semble doté\nde fortes capacités physiques.\n\nAppuyez sur (v) lorsque vous <color green<ciblez >coloroff>un\nennemi avec (Z) et je vous fournirai\ntoutes les informations dont je dispose\nà son sujet.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Wah! Y a des tonnes de monstres\npartout, j'peux même pas rejoindre\nmon ami! J'aurais donc dû rester\nchez moi...")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Hé! Qu'est‐ce que tu fais là?\nDécidément, tu choisis de drôles\nd'endroits pour chercher ton amie,\ndis donc!\nEn parlant de ça...<pause 15> Avant de venir ici,\nj'ai vu une <color red<blonde bizarre>coloroff><sound 4> se faire\nenlever...\n\n<0x10009:0x00141215>J'ai pas vraiment pu l'aider,\ntu comprends, y avait tellement\nde monstres!\n\n<0x10009:0x00ffff00>D'ailleurs si tu tiens à la vie, tu ferais\nbien de te pousser toi aussi!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10012:0x00000004>Maître <heroname>, dame Zelda\nest venue se purifier dans cette source.\n\n\nLes écrits anciens sur la stèle suggèrent\nqu'elle a dû ensuite se diriger vers la\nrégion appelée <color blue<Lanelle>coloroff>.\n\nSi vous rapportez la stèle dans la statue\nde la Déesse, une colonne de lumière \nouvrant une nouvelle voie apparaîtra.\n\nRetournez à <color blue<Célesbourg >coloroff>pour y porter\nla stèle et continuez votre route vers\nles <color blue<terres de Lanelle>coloroff>.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	wait_frames(15)
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Dah! J'le trouve pas... J'ai dû le perdre\nen m'en venant ici.")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ah, tu tombes bien, toi!\nC'est moi, ton ami <color blue<Ferrug>coloroff>!\n\n\n<0x10009:0x00ffffff>C'est pas le hasard qui nous fait nous\nrencontrer, j'en suis sûr! T'es venu\nm'aider à chercher mon <color yellow<sac de bombes>coloroff>,\nhein?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf(/* textboxtype: 1, unk: 1, line: 4 */ "Je cherchais des trésors de l'autre côté\nde ces rochers, quand je suis tombé sur\ndes monstres...<pause 15> J'ai dû l'échapper\n<0x10009:0x0013100d>quand j'ai paniqué.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000908ff>Ce sac est super pratique! Il permet\nde ranger des <color red<fleurs bombes >coloroff>et de les\n<color red<utiliser quand tu veux>coloroff>. Je ne peux pas\nm'en passer!\n<0x10009:0x00110dff>Veux-tu chercher mon <color yellow<sac de bombes>coloroff>?\nLes monstres ont dû le ramasser...<pause 10>\nTu vas aller me le chercher, hein?")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00110d08>Oh! T'as retrouvé mon <color yellow<sac de bombes>coloroff>!\n\n\n\n<0x10009:0x00ff08ff>Ouais, j'te dois une fière chandelle.\nDonne‐le‐moi, s'il te plaît...<pause 20>\n\n\n<0x10009:0x00110d0e>Hein? Tu veux que je te le prête pour\nque tu puisses continuer ton chemin?\n\n\n<0x10009:0x00ffffff>Ah ouais, tu disais que tu cherchais\nune amie à toi... Tu dois y tenir, pour\nvenir jusqu'ici!\n\n<0x10009:0x00150d11>Au fait...<pause 15> au sujet de mon ami...\n[1-]Il est rentré[2-]Il s'inquiétait[3-]Non")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00131007>Sérieux? Pas moyen de se fier\nà personne de nos jours!\n\n\n<0x10009:0x00ff08ff>Bien, toi au moins tu t'es montré digne\nde confiance. Tu as risqué ta vie pour\nte rendre dans ce guet‐apens...\n\n<0x10009:0x00141209>Tiens, je te le donne, mon sac!\nPrends‐le et fais‐en bon usage!")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "Je t'ai donné mon <color yellow<sac de bombes>coloroff>,\nva donc chercher ton amie!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00001004>Ah oui? Il s'en fait pour moi?<pause 15> C'est de\nma faute, encore...\n\n\n<0x10009:0x00ff08ff>Tu dois aussi être très inquiet pour\nton amie... Tu sais même pas si\nelle est encore vivante...\n\n<0x10009:0x00141209>Bon, tiens, j'te le donne, mon sac!\nEt fais‐en bon usage!")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000804>Ah...<pause 15> J'espère qu'il lui est rien\narrivé... On ne sait jamais, avec\ntous ces monstres... Ils lui ont\npeut‐être réglé son compte...\n\n<0x10009:0x000008ff>Tu dois aussi être très inquiet pour\nton amie... Tu sais même pas si\nelle est encore vivante...\n\n<0x10009:0x00141209>Bon, tiens, j'te le donne, mon sac!\nEt fais‐en bon usage!")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00110d12>Attends un peu! J'ai oublié de te dire...\n\n\n\n<0x10009:0x000908ff>Mon sac doit être vide. Laisse‐moi te\ndonner un petit quelque chose.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Si tu commences à manquer de bombes,\ntu peux en ramasser d'autres et les\nranger dans ton sac.\n\n<0x10009:0x0011080b>Pendant que tu portes une fleur bombe,\ntu peux la <color green<ranger dans ton sac >coloroff>en\nappuyant sur (B). Ne l'oublie pas!<0x10011:0x01cd>\n\n<0x10009:0x000908ff>Ton sac peut contenir <color red<jusqu'à 10\nbombes>coloroff>. Remplis‐le quand tu trouves\ndes fleurs bombes!")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00110d00>Rien à voir, mais... est‐ce que ça t'est\ndéjà arrivé de prendre feu pendant\nque tu te battais avec des monstres?\n\n<0x10009:0x000908ff>Si jamais ça t'arrive, faut penser à\nl'éteindre, hein! Et surtout, ne va pas\nsortir une <color yellow<bombe>coloroff> quand tu es en feu.\nFais‐moi confiance là‐dessus.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00150809>Héhé, bien pensé! Tu as fait passer la\n<color yellow<fleur bombe >coloroff>en la faisant rouler...\nTu te débrouilles pas mal!\n\n<0x10009:0x00110800>T'es bien parti pour me retrouver mon\n<color yellow<sac de bombes>coloroff>! J'ai bon espoir.")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "Avec une bonne <color yellow<fleur bombe>coloroff>, tu\ndevrais pouvoir réduire ces\nrochers en poussière! Regarde\nautour si tu peux en trouver.")
          			  case 1:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Ah, oui, en fait... <pause 15>Tu peux pas creuser\nsous la terre, toi, hein? Donc tu peux\npas retourner de l'autre côté. Hmm.\n\n<0x10009:0x0015120c>J'ai une idée. Tu devrais pouvoir\nfaire sauter ces rochers avec une\n<color yellow<fleur bombe>coloroff>.\n\n<0x10009:0x0009ff00>Regarde autour si tu peux en trouver!")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 20, unk: 0, line: 31 */ "Temple de la terre")
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
/*< 70>*/ 	wait_frames(10)
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0d0805ff>Tiens, tiens... Encore toi.")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0d0005ff>Oh<pause 1>.<pause 1>.<pause 1>.<pause 1><pause 8> La mémoire me fait défaut...\n<pause 20>Ton nom m'est complètement sorti\nde la tête...\n\n<0x10009:0x0d0a05ff>À vrai dire, cela n'a aucune espèce\nd'importance. Je suis quelque peu...\nfroissé, vois‐tu... Tu tombes bien.")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0d000900>Alors que mes acolytes viennent de\nmettre la main sur la prêtresse, je me\nrends sur les lieux le cœur léger...\nEt qu'est‐ce que j'apprends?\n<0x10009:0x0d000cff>Que cette importune servante\nde la Déesse...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10008:0xfecd><0x1000A:0x000c00cd>... l'a encore une fois...\n\n\n\n<0x10009:0x0d000cff><0x10008:0xfecd><pause 15><0x1000A:0x000d00cd>... soustraite à mon emprise...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10005:0x002d0000><0x10008:0x02cd>Pourquoi faut‐il toujours\nqu'on me mette <0x1000A:0x000b00cd>des bâtons\ndans les roues?")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10008:0x01cd>J'ai besoin de la prêtresse pour\nramener mon maître à la vie!\nIL ME LA FAUT!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<pause 5>.<pause 5>.<pause 5>.<pause 5>\n<pause 10>Mais je m'emporte.\nJe te demande pardon.\n\n<0x10009:0x0d0805ff>Tu vois maintenant pourquoi je\ndois me défouler un peu avant\nde partir d'ici.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0d0a05ff>En fait, tu vas pouvoir m'aider...<pause 20>\nTu...<pause 20> vas...<pause 20>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "... subir mon excès de rage!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	wait_frames(65)
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
/*< 42>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nL'aura de dame Zelda est dans les\nenvirons.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf(/* textboxtype: 2, unk: 0, line: 19 */ "La chaîne que vous voyez émet un\nsignal très fort. La probabilité que\ndame Zelda ait été attachée avec\nest de 95 %.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "Dame Zelda a dû trouver un moyen de\nsortir d'ici et de progresser plus avant.\nJe vous recommande de la suivre\nau plus vite.")
          }

