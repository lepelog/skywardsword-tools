          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10012:0x0000000b>Maître, je détecte un nouveau type d'ennemi devant\nvous qui semble doté de fortes capacités physiques.\n\n\nAppuyez sur (v) lorsque vous <color green<ciblez >coloroff>un ennemi\navec (Z) et je vous fournirai toutes les informations\ndont je dispose à son sujet.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Rah ! Y a des tonnes de monstres partout,\nj'peux même pas rejoindre mon pote !\nJ'savais que j'aurais dû rester chez moi...")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Hé ! Qu'est‐ce que tu fais là ? Décidément, tu\nchoisis de drôles d'endroits pour chercher ton\namie, dis donc !\n\nEn parlant de ça...<pause 15> Avant de venir ici, j'ai vu\nune <color red<blonde bizarre>coloroff><sound 4> se faire enlever...\n\n\n<0x10009:0x00141215>J'ai pas vraiment pu l'aider, tu comprends,\ny avait tellement de monstres !\n\n\n<0x10009:0x00ffff00>D'ailleurs si tu tiens à la vie, tu ferais bien de\nte tailler toi aussi !")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10012:0x00000004>Maître <heroname>, dame Zelda est venue se\npurifier dans cette source.\n\n\nLes écrits anciens sur la stèle suggèrent qu'elle a dû\nensuite se diriger vers la région appelée <color blue<Lanelle>coloroff>.\n\n\nSi vous rapportez la stèle au temple, une colonne de\nlumière ouvrant une nouvelle voie apparaîtra.\n\n\nRetournez à <color blue<Célesbourg >coloroff>pour y porter la stèle et\ncontinuez votre route vers les <color blue<terres de Lanelle>coloroff>.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	wait_frames(15)
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Dah ! J'le trouve pas... Où est‐ce que j'ai bien\npu le fourrer ? Je l'ai perdu en venant ici, ou\nquoi ?")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ah, tu tombes bien, toi ! C'est moi, <color blue<Ferrug>coloroff> !\n\n\n\n<0x10009:0x00ffffff>C'est pas le hasard qui nous fait nous\nrencontrer, j'en suis sûr ! T'es venu m'aider\nà chercher mon <color yellow<sac de bombes>coloroff>, hein ?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "Je cherchais des trésors dans le coin, quand\nje suis tombé sur des monstres derrière ces\nrochers...<pause 15> J'ai dû le perdre <0x10009:0x0013100d>quand j'me suis\ncarapaté.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000908ff>Ce sac, c'est super pratique ! Ça permet de\nranger des <color red<fleurs bombes >coloroff>et de les <color red<utiliser\nquand tu veux>coloroff>. C'est trop galère de pas en\navoir !\n<0x10009:0x00110dff>Dis, tu veux pas chercher mon <color yellow<sac de bombes >coloroff>?\nLes monstres ont dû le ramasser...<pause 10> Allez, quoi !")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00110d08>Oh ! T'as retrouvé mon <color yellow<sac de bombes >coloroff>!\n\n\n\n<0x10009:0x00ff08ff>Ouais, j'te dois une fière chandelle. Allez,\nrends‐le‐moi...<pause 20>\n\n\n<0x10009:0x00110d0e>Hein ? Tu veux que je te le prête pour que tu\npuisses continuer ton chemin ?\n\n\n<0x10009:0x00ffffff>Ah ouais, tu disais que tu cherchais une amie\nà toi... Tu dois y tenir, pour venir jusqu'ici !\n\n\n<0x10009:0x00150d11>Au fait...<pause 15> à propos de mon pote...\n[1-]Il est rentré[2-]Il s'inquiétait[3-]Non")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00131007>Sérieux ? Il est pas possible, celui‐là !\n\n\n\n<0x10009:0x00ff08ff>Enfin bon, t'as assuré, tu l'as retrouvé dans ce\nguet‐apens...\n\n\n<0x10009:0x00141209>Bah, je te le donne, mon sac, va ! Prends‐le et\nfais‐en bon usage !")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "Je t'ai donné mon <color yellow<sac de bombes>coloroff>, va donc\nchercher ton amie !")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00001004>Ah ouais, il se faisait un sang d'encre, hein ?<pause 15>\nC'est de ma faute, encore...\n\n\n<0x10009:0x00ff08ff>Tu dois aussi être très inquiet pour ton amie...\nTu sais même pas si elle est encore vivante...\n\n\n<0x10009:0x00141209>Bon, allez, j'te le donne, mon sac ! Et fais‐en\nbon usage !")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000804>Ah...<pause 15> J'espère qu'il lui est rien arrivé... Si ça se\ntrouve, les monstres lui ont réglé son compte...\n\n\n<0x10009:0x000008ff>Tu dois aussi être très inquiet pour ton amie...\nTu sais même pas si elle est encore vivante...\n\n\n<0x10009:0x00141209>Bon, allez, j'te le donne, mon sac ! Et fais‐en\nbon usage !")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00110d12>Oups ! J'ai oublié de te dire...\n\n\n\n<0x10009:0x000908ff>Mon sac doit être vide, alors prends ça.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Tu peux ranger des fleurs bombes dans ton sac,\nalors penses‐y quand tu commences à manquer\nde bombes !\n\n<0x10009:0x0011080b>Pendant que tu portes une bombe, tu peux\nla <color green<ranger dans ton sac >coloroff>en appuyant sur (B).\nSouviens‐t'en !<0x10011:0x01cd>\n\n<0x10009:0x000908ff>Ton sac peut contenir <color red<jusqu'à dix bombes>coloroff>.\nRemplis‐le quand tu trouves des fleurs\nbombes !")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00110d00>Rien à voir, mais... ça t'est déjà arrivé de\nprendre feu pendant que tu te battais avec\ndes monstres ?\n\n<0x10009:0x000908ff>Si jamais ça t'arrive, faut penser à l'éteindre,\nhein ! Et surtout, te mets pas à sortir une\n<color yellow<bombe>coloroff>, il pourrait t'arriver des bricoles !")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00150809>Héhé, tu as fait passer la <color yellow<fleur bombe >coloroff>en la\nfaisant rouler... Tu te débrouilles pas mal !\n\n\n<0x10009:0x00110800>T'es bien parti pour me retrouver mon <color yellow<sac de\nbombes >coloroff>!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Avec une bonne <color yellow<fleur bombe>coloroff>, tu devrais pouvoir\nréduire ces rochers en poussière ! Regarde dans\nle coin si tu peux en trouver.")
          			  case 1:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "Ah ouais, en fait... <pause 15>Tu peux pas creuser sous\nla terre, toi, hein ? Donc tu peux pas aller plus\nloin...\n\n<0x10009:0x0015120c>Hmm... J'pense que tu devrais pouvoir faire\nsauter ces rochers avec une <color yellow<fleur bombe>coloroff>.\n\n\n<0x10009:0x0009ff00>Regarde dans le coin si tu peux en trouver !")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 2, line: 31 */ "Temple de la terre")
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
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0d0805ff>Comme on se retrouve...")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0d0005ff>Oh<pause 1>.<pause 1>.<pause 1>.<pause 1><pause 8> Quel rustre je fais... <pause 20>Ton nom m'est\ncomplètement sorti de la tête...\n\n\n<0x10009:0x0d0a05ff>À vrai dire, cela n'a aucune importance. Je suis\nquelque peu... froissé, vois‐tu...")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0d000900>Alors que mes sbires viennent de mettre la\nmain sur la prêtresse, je me rends sur les lieux\nle cœur léger... Et qu'apprends‐je ?\n\n<0x10009:0x0d000cff>Que cette satanée servante de la Déesse...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10008:0xfecd><0x1000A:0x000c00cd>... l'a encore une fois...\n\n\n\n<0x10009:0x0d000cff><0x10008:0xfecd><pause 15><0x1000A:0x000d00cd>... soustraite à mon emprise...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10005:0x002d0000><0x10008:0x02cd>Pourquoi faut‐il toujours\nqu'on me mette <0x1000A:0x000b00cd>des bâtons\ndans les roues ?!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf(/* textboxtype: 2, unk: 0, line: 27 */ "<0x10008:0x01cd>Alors que j'ai besoin de la prêtresse\npour rappeler mon maître à la vie !\nIl le faut !")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<pause 5>.<pause 5>.<pause 5>.<pause 5> <pause 10>Mais je m'emporte.\n\n\n\n<0x10009:0x0d0805ff>Tu vois à présent pourquoi je ne puis partir\nd'ici le cœur tranquille ?")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0d0a05ff>En fait, je n'ai aucune raison de rester calme...\n<pause 20>Je devrais même plutôt...<pause 20>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf(/* textboxtype: 2, unk: 0, line: 30 */ "... laisser éclater ma colère !")
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
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10012:0x0000000b>Maître, Fay au rapport. L'aura de dame Zelda est\nproche.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "La chaîne que vous voyez émet un signal très fort.\nLa probabilité que dame Zelda ait été attachée avec\nest de 95 %.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Dame Zelda a dû trouver un moyen de sortir d'ici\net de progresser plus avant. Je vous recommande\nde la suivre au plus vite.")
          }

