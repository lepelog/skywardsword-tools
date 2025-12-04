          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 0, line: 96 */ "Je suis sûr que ton amie créature\nt'attend. Tu n'as pas le droit de\nl'abandonner!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10009:0x00000001>Salut, toi! Ça faisait des lunes!\nMerci pour l'autre fois!\n\n\nAu fait, est‐ce que t'as retrouvé\nton amie créature?\n[1-]Oui[2-]Pas encore")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00110808>Ah bon, tu l'as retrouvée! Bien content\npour toi...<pause 20> Oh? T'as pas encore pu la\nsauver? Hmmm...\n\n<0x10009:0x000908ff>Écoute. Ne te décourage pas.\nJe suis sûr que tu finiras par\ny arriver! Faut pas lâcher!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x0013100d>Je vois... Peut‐être que les monstres\nrouges l'ont... Euh, tu sais...<pause 20>\n\n\n<0x10009:0x0011080e>Quoi? Tu sais qu'elle est encore\nen vie? Et bien, y'a rien de perdu!\nTous les espoirs sont permis!\n\n<0x10009:0x00090800>Si tu baisses les bras, ce sera la fin!\nCourage, mon gars!")
          		}
          	}
          }

          void entrypoint_300_07() {
/*<324>*/ 	start()
/*<325>*/ 	make_actor_do_something(3, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 327, 'param3': 17}
/*<327>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
          		flw_329:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00110800>Hé! Où tu vas comme ça?\nFaut que tu nous débarrasses\nde ces mal élevés!")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00110812>Hé, toi! Ces mal élevés t'ont repéré,\net maintenant ils sont en beau fusil!\n\n\n<0x10009:0x00150d00>Prends tes responsabilités\net débarrasse‐nous‐en!")
/*<330>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          			goto flw_334
          		}
          	}
          }

          void entrypoint_300_08() {
/*< 20>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 57, 'param3': 32}
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 338, 'param3': 16}
/*<338>*/ 	make_actor_do_something(4, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 	set_camera(2, 0)
/*<339>*/ 	switch (scene_flags[27 /* 0x2 08 */]) {
          	  case 0:
/*<341>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 340, 'param3': 13}
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Ouah! Encore eux!\nIls ont réussi à faire couler la\nlave qui était retenue là‐bas...\nMais j'ai pas dit mon dernier mot!")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "Ouah! Les voilà!\n\n\n\nAh, c'est pas les monstres rouges?\n<pause 15><0x10009:0x10090807>Faut pas me faire peur comme ça...\n\n\n<0x10009:0x100aff00>Ah désolé, j'ai les nerfs à fleur de peau\navec ces monstres rouges qui saccagent\nnotre territoire...")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Comme ils sont arrivés par la grotte\nderrière, on a noyé le passage sous la\nlave pour qu'ils ne puissent plus passer.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 58 */ "Nous, on peut passer sous terre,\ndonc ça nous dérange pas. <0x10009:0x1011080b>Héhé!\nPas fou, hein?")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "Faut pas toucher au barrage\nqui retient la lave là‐bas, c'est\ndangereux. Bon, bien, à plus!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00150d0c>Hmm...<pause 20>\nJe me demande ce qu'ils mangent,\nces monstres rouges...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "Mais fais quand même attention,\ndes fois y a des <color red<grosses affaires\nrouges gluantes >coloroff>qui sortent.\nFais-toi pas attraper!")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "Woh! Tu m'as fait peur!<pause 20> <0x10009:0x00110d00>Tu peux pas\ncreuser comme ça au‐dessus de la tête\ndes gens, voyons!\n\n<0x10009:0x00150809>Bon. Je te comprends. Tu t'es laissé\nemporter par l'excitation de découvrir\nce qui va sortir du trou! Tu pouvais\nplus t'arrêter de creuser...\n<color red<<0x10009:0x00ffffff>>coloroff>Moi, j'ai réussi à sortir des <color red<rubis>coloroff>\net du <color red<minerai>coloroff>.\n\n\n<color red<<0x10009:0x00150d11>>coloroff>Avant on trouvait facilement des\n<color red<cœurs>coloroff>, mais on en trouve pas mal\nmoins ces derniers temps. Mystère\net boule de gomme!\n<0x10009:0x00ffffff>En tout cas, si tu vois des trous dans les\nparages, gêne-toi pas pour creuser!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0, line: 61 */ "Woh! Tu m'as fait peur!<pause 20> <0x10009:0x00110d00>Tu peux pas\ncreuser comme ça au‐dessus de la tête\ndes gens, voyons!\n\n<0x10009:0x00150809>Bon. Je te comprends. Tu t'es laissé\nemporter par l'excitation de découvrir\nce qui va sortir du trou! Tu pouvais\nplus t'arrêter de creuser...\n<color red<<0x10009:0x00ffffff>>coloroff>Est‐ce que ce sera un <color red<rubis>coloroff>, du <color red<minerai\n>coloroff>ou bien un <color red<cœur>coloroff>?\n\n\nToi aussi, creuse tous les trous que\ntu trouveras sur ton chemin!")
          			goto flw_75
          		}
          	}
          }

          void entrypoint_300_26() {
/*<230>*/ 	start()
/*<231>*/ 	switch (scene_flags[44 /* 0x4 10 */]) {
          	  case 0:
/*<234>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<238>*/ 			switch (scene_flags[75 /* 0x8 08 */]) {
          			  case 0:
          				flw_236:
/*<236>*/ 				printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x000908ff>Il y a aussi des parois que tu\npeux faire sauter à la surface.\nJe suis sûr que tu peux les\ntrouver.")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00150d10>Ah, c'était là?\nTu te débrouilles pas mal, mon gars!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "Dans le coin, les parois sont moins\népaisses par endroits et il y a souvent\ndes choses cachées derrière.")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000001>Ah, c'est toi? T'as l'air en pleine\nforme!\n\n\n<0x10009:0x00110800>Tu le sais peut‐être déjà, mais\npar endroits, les parois du <color blue<volcan\nd'Ordinn >coloroff>sont moins épaisses.\n\n<0x10009:0x000908ff>Derrière, y a des grottes et souvent,\non y trouve des choses cachées.\n\n\nOn peut y trouver un tas de choses\ndifférentes, mais en général, ce\nsont des <color yellow<rubis>coloroff>.\n\n<0x10009:0x001108ff>Si le cœur t'en dit, pourquoi\nt'essaierais pas de les chercher?")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x0015080c>Mon pif me dit qu'il devrait y en\navoir dans le coin... Snif, snif...")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>Oh, c'est toi? T'as l'air en forme!\n\n\n\n<0x10009:0x001108ff>T'es venu chercher des trésors, cette\nfois? Alors je vais te dire un petit\nquelque chose qui te sera utile.\n\n<0x10009:0x0009080b>Par endroits, les parois du <color blue<volcan\nd'Ordinn>coloroff> sont moins épaisses et\nderrière, il y a des grottes.\n\nOn trouve souvent tout un tas de\nchoses cachées là‐dedans et en\nparticulier des <color yellow<rubis>coloroff>.\n\n<0x10009:0x0015080c>Et mon pif infaillible me dit qu'il y en\na dans le coin... Snif, snif...")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0015080b>Les ruines cachées dans les\nprofondeurs du volcan...\nHéhé! Ça stimule mon instinct\nde <color blue<chasseur de trésors>coloroff>!")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00110801>Ah, c'est toi?\nEst‐ce que tu prends bien soin\nde mon <color yellow<sac de bombes>coloroff>?\n\n<0x10009:0x000909ff>Au fait, est‐ce que t'es déjà\nallé jusque dans les profondeurs\ndu <color blue<volcan d'Ordinn>coloroff>?\n\n<0x10009:0x00150816>Là‐bas, il fait tellement chaud\nque les vêtements prennent feu.\nLa plupart des gens y survivent pas.\n\n<0x10009:0x000909ff>Mais on y trouve des ruines à en\ncouper le souffle, et on raconte\nqu'elles débordent de trésors.\n\n<0x10009:0x0011080b>Nous, on a pas de problèmes\npour y aller, on peut passer\nsous terre. Il faudra que j'aille\ny faire un tour un de ces quatre.")
/*<247>*/ 		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
          	}
          }

          void entrypoint_300_10() {
/*< 23>*/ 	start()
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1000, 'next': 81, 'param3': 24}
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 147, 'param3': 32}
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 277, 'param3': 32}
/*<277>*/ 	make_actor_do_something(1, 16)
/*< 82>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 250, 'param3': 16}
/*<250>*/ 	set_camera(20, 0)
/*<258>*/ 	wait_frames(45)
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "Hmm... Il me semble bien que c'est par\nici qu'ils l'ont enterrée... J'arrive pas à\nla trouver...")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "T'es sûr que c'était par là, <color blue<Ferrug>coloroff>?\nEt c'est quoi qu'ils ont enterré?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "Une <color red<clé>coloroff>! C‐L‐É, <color red<CLÉ>coloroff>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	wait_frames(15)
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "Ils ont cassé la <color red<clé de cette porte>coloroff>\net en ont caché les morceaux un\npeu partout.\n\nJ'suis sûr qu'ils ont enterré un des <color red<cinq\nmorceaux>coloroff> par ici.")
/*<260>*/ 	wait_frames(30)
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "Hmm... Au fait, tout à l'heure,\n<sound 4>ils ont emmené une <color red<fille habillée\nbizarrement>coloroff>, non?")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x10110d0b>Ouais! Je suis sûr qu'ils gardent tous\nleurs objets précieux à l'intérieur.\n\n\n<0x10009:0x10090800>Cette fille qu'ils ont emmenée, ils vont\nsûrement la garder précieusement\npour la manger. Ça sent le trésor,\nmoi je te le dis!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "Et qu'est‐ce que tu veux en faire, de ces\nmorceaux de clé?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x10110d09>C'est évident! On va aller piquer\nles trésors qu'il y a à l'intérieur\nen douce!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Mais...<pause 15> on a pas besoin de clé, on a juste\nà passer sous terre pour se retrouver\nà l'intérieur, non?")
/*<262>*/ 	wait_frames(15)
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ ".........<pause 30>")
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ ".........<pause 30>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	wait_frames(30)
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "Tu sais que t'es pas bête, toi!")
/*<257>*/ 	wait_frames(45)
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	wait_frames(45)
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nNous nous trouvons au <color blue<volcan d'Ordinn>coloroff>,\nun volcan en activité renfermant la\nforce de la terre.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 2, unk: 1, line: 5 */ "<0x10012:0x0000000b>Maître <heroname>, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nLa conversation de ces <color blue<Mogmas\n>coloroff>contenait des informations\nimportantes.\n\nLa « <color red<fille habillée bizarrement>coloroff> »\ndont l'un d'eux a parlé...\n[1-]C'est Zelda![2-]La fille\nen noir?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0, line: 6 */ "En effet, <0x10012:0x00000005>Maître. La probabilité qu'il\ns'agisse de dame Zelda est de 90 %.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 8 */ "En outre, la probabilité que la clé qui\nouvre cette porte soit faite du même\nmatériau que ce dispositif est de 95 %.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 1, line: 9 */ "Je détecte aux alentours des objets\nconstitués du même matériau.\n\n\nJugeant que ces objets pourront nous\npermettre de nous rapprocher de <color red<dame\nZelda>coloroff>, je les ai enregistrés en tant que\ncibles à <color red<détecter>coloroff>.<sound 4>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 2, unk: 0, line: 7 */ "La probabilité qu'il s'agisse de la\nfemme en noir que nous avons croisée\ntout à l'heure est de <0x10008:0x01cd>10 %.\n\nSelon mon analyse, il est fort probable\nque ce soit <color red<dame Zelda >coloroff>qui a été\nenlevée.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10005:0x005a0000>Cette région est composée à 65 %\nde lave et abrite de nombreux monstres\nde feu.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0, line: 70 */ "Retiens bien ça, quand c'est un <color green rupee<rubis\nvert>coloroff>, y a pas de <color red<trou perdant >coloroff>autour.\n\n\nSi c'est un <color blue rupee<rubis bleu>coloroff>, il y en a <color red<un ou\ndeux>coloroff>. Si c'est un <color red rupee<rubis rouge>coloroff>, il y en a\n<color red<trois ou quatre>coloroff>...\n\nSi c'est un <color silver<rubis argenté>coloroff>, il y en a <color red<cinq\nou six >coloroff>et si c'est un <color gold<rubis doré>coloroff>,\nil y en a <color red<sept ou huit>coloroff>.\n\nMais au bout du compte, c'est la chance\nqui décidera si tu peux toucher le\ngros lot. <0x10009:0x00150509>Alors, bonne chance! Héhé...")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 1, line: 72 */ "Regarde‐moi donc ça... Maintenant,\ntu veux que je te révèle mes infos\nsecrètes?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf(/* textboxtype: 1, unk: 1, line: 73 */ "<color red<<0x10009:0x00ffff00>>coloroff>Tu peux connaître les secrets\ndu <color red<Fouille‐rubis >coloroff>pour la modique\nsomme de <color red<20 rubis>coloroff>!\n[1-]Dis‐moi tout![2]Non merci")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0, line: 66 */ "Héhé, merci!\nSurtout, ça reste entre nous, hein!\nVa pas le crier sur tous les toits...")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x0011ff00>En fait, selon la couleur du rubis\nque tu déterres, tu peux connaître\nle nombre de trous perdants qui\nl'entourent.\n<0x10009:0x00ffff0b>Par exemple, si c'est un <color green rupee<rubis vert>coloroff>,\ny a <color red<aucun trou perdant >coloroff>autour!\n\n\nPour un <color blue rupee<bleu>coloroff>, il y en a <color red<un ou deux>coloroff>.\nPour un <color red rupee<rouge>coloroff>, il y en a <color red<trois ou quatre>coloroff>.\nPour un <color silver<argenté>coloroff>, il y en a <color red<cinq ou six>coloroff>.\n\nEt ça arrive pas souvent, mais si c'est\nun <color gold<rubis doré>coloroff>, ça veut dire qu'il y a\n<color red<sept ou huit>coloroff> trous perdants autour.")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "Qu'est-ce que tu en penses? Hein?\n Avec ça, ça va être beaucoup plus\nfacile de déterrer les rubis, non?\n\n<0x10009:0x00ffff09>Mais en fin de compte, ça demeure\nquand même un jeu de chance!\nFais de ton mieux, et croise-toi\nles doigts!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0, line: 71 */ "Mais t'as pas assez de rubis!\n\n\n\n<0x10009:0x00141209>Si tu m'apportes pas <color red<20 rubis>coloroff>,\nje dirai rien.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Fais pas le chiche! C'est un tuyau\npour te rendre riche!\n\n\n<0x10009:0x00ffff00>Bah, tant pis. Si tu changes d'idée,\napporte‐moi <color red<20 rubis >coloroff>et je te dirai tout.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 1, line: 64 */ "Hé toi! Tu vas te faire les griffes au\n<color red<Fouille‐rubis >coloroff>de <color blue<Radigume>coloroff>, ou quoi?\n\n\n<0x10009:0x0015080b>Tu veux que je te donne une <color red<info top\nsecrète>coloroff>? Avec ça, t'es sûr de toucher\nle gros lot. Oui, oui! Le GROS lot!\n\n<0x10009:0x00ffff00>Mais é<pause 10>vi<pause 10>dem<pause 10>ment<pause 10>, comme c'est une\ninfo en or, je vais pas te la donner\ngratuitement.")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf(/* textboxtype: 1, unk: 1, line: 65 */ "<0x10009:0x001108ff>T'as une bonne bette, alors je te fais un\nprix d'ami. <color red<20 rubis>coloroff>. Ç'a de l'allure,\nnon?\n[1-]Dis‐moi tout![2]Non merci")
          			goto flw_44
          		}
          	}
          }

          void entrypoint_300_13() {
/*< 67>*/ 	start()
/*<297>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<205>*/ 	check_item_flag(505, 5)
/*<204>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
          		flw_207:
/*<207>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nJe détecte une <color red<température\n>coloroff><color red<extrêmement élevée>coloroff>.\nAvec votre nombre actuel de\ncœurs, vous n'y survivrez pas,\n<0x10012:0x00000002>Maître. Je vous conseille de\nrebrousser chemin.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nJe détecte une <color red<température\nextrêmement élevée>coloroff>. Avec votre\nnombre actuel de cœurs, vous\nn'y survivrez pas, <0x10012:0x00000002>Maître.\nDe plus, par ici, la réaction de la\n<color red<détection>coloroff> est nulle. Veuillez vérifier\nde nouveau la direction à emprunter.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10005:0x005a0000>Faites attention à vos objets de <color red<bois\n>coloroff>et à vos <color red<vêtements>coloroff>. Ils sont facilement\ninflammables.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "Je crois qu'elle était habillée en\nnoir... J'en sais pas plus.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "Tiens? En voilà encore un autre!\nOn voit beaucoup de nouvelles\ntêtes par ici, aujourd'hui...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Tout à l'heure j'ai vu une <color red<fille habillée\nbizarrement >coloroff>entrer dans la grotte\nlà‐bas.<sound 4>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 2, line: 76 */ "Quoi? C'est peut‐être l'amie que tu\ncherches... Elle ressemble à quoi?")
/*<349>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x0014120c>Hmm...<pause 30> Il me semble qu'elle était\n<color red<habillée en noir>coloroff>. Mais j'en sais pas\nplus.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 2, unk: 0, line: 4 */ "<0x10005:0x004b0000>Si vous prenez feu, je vous conseille\nd'éteindre les flammes en effectuant\nune <color green<roulade>coloroff> ou une <color green<attaque circulaire>coloroff>.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "La fille qui est passée en courant avait\nplus ou moins la même allure que toi.\n\n\nMais je crois pas qu'elle était habillée\nen vert comme toi.")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00110d11>Quoi? C'est pas des trésors que tu\ncherches? Tu cherches une amie?\n\n\n<0x10009:0x00ffff0e>La fille de tout à l'heure, c'était ta\ncopine? <color red<Elle est passée en courant\n>coloroff>sans même nous regarder.<sound 4>\n\nElle allait trop vite pour que je la voie\nbien, mais en tout cas, elle n'était\ndéfinitivement pas un monstre rouge.\n\nElle est partie par là.\nEssaie de la rattraper!")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nGrâce à l'amélioration de votre épée,\nil est à présent possible de <color red<détecter\n>coloroff>les <color yellow<rubis>coloroff>.\n\nJ'ai ajouté les <color yellow<rubis>coloroff> à la liste des cibles\npouvant être <color red<détectées>coloroff>.<sound 4> Cela pourra\nvous servir dans vos recherches.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "Dans le coin, on trouve souvent des\n<color yellow<rubis>coloroff> rouges, bleus ou verts, et parfois\nmême on peut en trouver des <color red<argentés\n>coloroff>ou des <color red<dorés>coloroff>.\nOn trouve aussi souvent un <color red<minerai\nqui pourrait servir de matériau>coloroff>, même\nsi on peut pas vraiment appeler ça un\ntrésor.")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "Nous on est les <color blue<Mogmas>coloroff>, et ici c'est\nnotre territoire. On est des <color blue<chasseurs\nde trésors>coloroff>.\n\nDans le coin, on trouve souvent des\n<color yellow<rubis>coloroff> rouges, bleus ou verts, et parfois\nmême on peut en trouver des <color red<argentés\n>coloroff>ou des <color red<dorés>coloroff>.\nOn trouve aussi souvent un <color red<minerai\nqui pourrait servir de matériau>coloroff>, même\nsi on peut pas vraiment appeler ça un\ntrésor.\nEn parlant de trésors... Puisque t'es\nlà, pourquoi t'en profites pas pour en\nchercher?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00110d11>Quoi? C'est pas des trésors que tu\ncherches? Tu cherches une amie?\n\n\n<0x10009:0x00ffff0e>La fille de tout à l'heure, c'était ta\ncopine? <color red<Elle est passée en courant\n>coloroff>sans même nous regarder.<sound 4>\n\nElle allait trop vite pour que je la voie\nbien, mais en tout cas, elle n'était\ndéfinitivement pas un monstre rouge.\n\nElle est partie par là.\nEssaie de la rattraper!")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 1, unk: 0, line: 107 */ "Où est‐ce que je vais bien pouvoir\naller chercher des trésors?\nCette fois, j'oublierai pas de passer\nsous terre.")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "Tiens, c'est toi?\nAs-tu réussi à entrer dans les ruines?\n\n\n<0x10009:0x0013100d>Moi, j'ai pas pu. J'ai rebroussé chemin\net je me suis fait parler dans le casque\npar mon bon ami...\n\n<0x10009:0x000908ff>« On peut aller n'importe où\nen passant sous terre! », qu'il\nm'a dit...<pause 15> Héhé, ça m'était\ncomplètement sorti de la tête.")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 1, unk: 0, line: 109 */ "Où est‐ce que je vais bien pouvoir\naller chercher des trésors...?\nHéhé! Le voyage d'un <color blue<chasseur\nde trésors >coloroff>finit jamais.")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00110801>Tiens, salut, toi! Tu prends toujours\nbien soin de mon <color yellow<sac de bombes>coloroff>?\n\n\n<0x10009:0x000908ff>C'est pas tous les jours que\nje fais des cadeaux comme ça,\nalors fais‐en bon usage!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Aaah! En voilà un en vert maintenant!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "À l'instant, j'ai vu une <color red<fille en noir >coloroff>qui\navait l'air d'être de la même espèce\nque toi. C'était une amie à toi?<sound 4>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Normalement, on peut pas passer\nici, mais elle a traversé d'un bond\nsans aucun problème.")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "Arriver à sauter aussi loin...<pause 15>\nC'est pas à la portée du premier venu.")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "Plus haut dans la montagne, ça\nfourmille de monstres rouges...\n\n\nMais la fille de tout à l'heure était\nsuper rapide, elle n'aura pas de\nproblème à monter.\n\nAvec elle, la chasse au trésor, ça doit\nêtre un jeu d'enfant... <0x10009:0x001502ff>C'est toute une\ncopine que t'as là...")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x0000000b>Maître, permettez‐moi de vérifier\nquelque chose. Nous sommes\nactuellement à la recherche de\n<color red<dame Zelda>coloroff>...\nMais vous souvenez‐vous de la manière\nde la <color red<détecter>coloroff>?\n[1-]Bien sûr![2-]J'ai oublié...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "Très bien, <0x10012:0x00000005>Maître. Pardonnez‐moi.\nNous pouvons donc continuer\nà chercher dame Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "Très bien, <0x10012:0x00000005>Maître.\nPour enclencher la <color red<détection>coloroff>, appuyez\ntout d'abord longuement sur (C).<0x10011:0x06cd>\n\nAvec la manette Wii Remote, pointez\nle curseur vers ce que vous désirez\nrechercher et je le détecterai avec la\npointe de l'épée.\nPlus la cible est proche, plus la <color red<réaction\nsera forte>coloroff>. Elle se traduira par un son\net des vibrations.\n\nDe plus, le <color red<curseur>coloroff> vous indiquera\nprécisément la direction dans laquelle\nse trouve la cible.\n\nÀ présent, sélectionnez dame Zelda\ncomme cible à détecter et reprenons\nnos recherches.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0, line: 115 */ "Dame Zelda se trouve par ici...<pause 20>\nDépêche‐toi!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "Aah... Ces mal élevés ont envahi notre\nterritoire et maintenant ils font comme\ns'ils étaient chez eux...")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "Mais, mais, mais! T'es qui, toi?\nFais-moi pas peur comme ça...\n\n\nQuoi? Tu cherches ton amie?<0x10009:0x001412ff>\nNon, j'ai vu personne.\n\n\n<0x10009:0x00ffffff>Si elle est pas passée par ici...\n<0x1000A:0x000900cd>Elle a dû passer par là‐haut.")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Haa...<pause 20> Si seulement quelqu'un pouvait\nchasser ces mal élevés...")
/*<104>*/ 	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_300_03() {
/*<  4>*/ 	start()
/*<336>*/ 	switch (zone_temp_flags[19 /* 0x3 08 */]) {
          	  case 0:
/*<337>*/ 		set_camera(26, 0)
          		flw_314:
/*<314>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 346, 'param3': 40}
/*<346>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 313, 'param3': 13}
/*<313>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 320, 'param3': 14}
/*<320>*/ 		make_actor_do_something(3, 0)
/*<263>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 150, 'param3': 17}
/*<150>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2056, 'next': 5, 'param3': 13}
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "T'es vraiment costaud, toi! Tu nous as\nsortis d'un mauvais pépin! Merci!\n\n\n<0x10009:0x00ffff0b>On en a peut‐être pas l'air, mais nous,\nles <color blue<Mogmas>coloroff>, on a des principes.\nJe dois te remercier comme il se doit.\n\nQu'est‐ce qui te ferait plaisir?\n[1-]Je veux aller\nplus loin[2-]Des rubis!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "Ah ouais, c'est vrai, tu m'as\ndit que tu cherchais ton amie\ncréature.\n\n<0x10009:0x00090809>Dans ce cas, je te donne ça,\ntu m'en diras des nouvelles!")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "Avec ça, tu devrais pouvoir monter.<0x1000A:0x000b00cd>\nCreuse donc ce trou, pour voir.")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "J'espère que ton amie créature s'est pas\nfait attraper par ces monstres rouges.")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Quoi? Des rubis?\nT'es sûr que c'est ça que tu veux?\n\n\n<0x10009:0x00151204><0x10008:0xffcd>Hmm, c'est vrai qu'il m'a bien aidé, mais ce\nserait pas la meilleure chose...<pause 20> Je sais, je vais\nlui donner ça à la place.\n\n<0x10009:0x001412ff>Euh... Comment dire...<pause 15> Je suis un peu\nà court, en ce moment...\n\n\n<0x10009:0x00110809>Mais tu m'as dit que tu cherchais ton\namie créature, non? Dans ce cas, tiens,\nje te donne ça.")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "Avec ça, tu devrais pouvoir monter.<0x1000A:0x000b00cd>\nCreuse donc ce trou, pour voir.")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10008:0xffcd>De toute façon, je m'en sers jamais...\nJe préfère lui filer ça que des rubis.")
/*<161>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 137, 'param3': 13}
          			goto flw_137
          		}
          	  case 1:
/*<315>*/ 		set_camera(25, 0)
          		goto flw_314
          	}
          }

          void entrypoint_300_20() {
/*<140>*/ 	start()
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 322, 'param3': 32}
/*<322>*/ 	make_actor_do_something(3, 16)
/*<352>*/ 	make_actor_do_something(4, 16)
/*<143>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 272, 'next': 142, 'param3': 15}
/*<142>*/ 	set_camera(14, 0)
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 1799, 'next': 141, 'param3': 13}
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Pas croyable...<pause 15>\nT'as réussi à tous les éliminer...<pause 15>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "J'espère que tu retrouveras ton amie\ncréature saine et sauve.")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Quand <color red<celui qui a un >coloroff><color red<<color red<chapeau <color red<bleu\n>coloroff>souffle dans son cor, il en arrive en\nrenfort. Qu'est‐ce qu'on peut faire?")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x00110809>C'est toi qui as mis la poudre aux\ncanons! Prends tes responsabilités!\n\n\n<0x10009:0x00ffffff>Mais attention, quand leur nombre\ndiminue, ils <color red<appellent du renfort avec\nleur cor>coloroff>, et ça en finit jamais.\n\nCelui qui a un cor et un <color red<chapeau\nbleu>coloroff>,<sound 4> ça doit être le chef.")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0011080e>Quoi? Tu vas vraiment les\nchasser d'ici?\n\n\n<0x10009:0x00151200>Maintenant qu'ils t'ont à l'œil, faut que\ntu fasses quelque chose.\n\n\n<0x10009:0x00ffff00>Mais dès que leur nombre baisse,\nils <color red<appellent du renfort avec leur\ncor>coloroff>. Ça finit plus.\n\nCelui qui a un cor et un <color red<chapeau\nbleu<sound 4> >coloroff>doit être leur chef.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Si t'as rien d'autre à faire, tu pourrais\npeut‐être les chasser d'ici, non?\n\n\n<0x10009:0x00141209>Mouais... Ah, puis laisse faire.")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "Au fait, je t'ai pas dit? Comme avec\nles pots, tu peux <color green<prendre >coloroff>et <color green<déposer\n>coloroff>les <color yellow<fleurs bombes >coloroff>avec (A).\n\nUne fois que tu en as pris une, <color green<oriente\nla manette Wii Remote vers le haut >coloroff><color green<puis\nagite-la vers le bas >coloroff>pour <color green<lancer >coloroff>une \nfleur bombe.\n<color green<Oriente la manette Wii Remote vers\nle bas et agite-la vers le haut pour >coloroff><color green<faire\nrouler la bombe>coloroff>. Essaie avec les <color yellow<fleurs\nbombes >coloroff>du coin.")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00150d11>Mais dis‐moi, t'as pas de <color yellow<sac de bombes>coloroff>,\non dirait...\n\n\n<0x10009:0x00110dff>Sans <color yellow<sac de bombes>coloroff>, tu peux pas\ntransporter de <color yellow<fleurs bombes>coloroff>.\nTous les <color blue<Mogmas>coloroff> en ont un.\n\n<0x10009:0x00ffffff>...<pause 20> Quoi?\nPourquoi tu me regardes comme ça?\n\n\n<0x10009:0x00141209>Non, non! Je te donnerai pas le mien!\nRêve pas en couleur! Contente‐toi de\nfaire sauter des rochers dans le coin.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00150d11>Hein? T'es qui, toi? Je t'avais jamais\nvu dans le coin, avant...\n\n\nAh!<0x10009:0x00110d12> Me dis pas que t'es de connivence\navec les monstres rouges!\n[1-]Non![2-]Monstres\nrouges?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 1, line: 80 */ "<0x10009:0x00ffff07>Ouf, tu me rassures...<pause 15> C'est vrai que\ntu leur ressembles pas trop.\n\n\n<0x10009:0x0015ff00>Finalement, t'es venu chercher des\n<color yellow<fleurs bombes>coloroff>?\n[1-]C'est quoi?[2-]Exactement")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00ffff00>Tu connais pas les <color yellow<fleurs bombes>coloroff>?\n<0x1000A:0x001100cd>Regarde, il y en a quelques‐unes\nqui poussent, juste là.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 1, unk: 1, line: 83 */ "Ce sont des plantes dangereuses.\nQuand tu les cueilles avec (A),\nelles prennent feu et explosent.\n\n<0x10009:0x0011080b>Mais quand on sait s'en servir,\nce sont des armes redoutables.\nC'est notre arme de prédilection\nà nous, les <color blue<Mogmas>coloroff>.\n<0x10009:0x00ffffff>Comme avec les pots, tu peux les\n<color green<lancer >coloroff>ou les <color green<faire rouler>coloroff>. Essaie\navec les <color yellow<fleurs bombes >coloroff>qui sont là.\n\n<0x10006:0xffcd>......<pause 15><0x10006:0x00cd>\n<0x10009:0x00110d11>Mais, est‐ce que tu sais <color green<comment\non les lance>coloroff>, au moins?\n[1-]Bien sûr.[2-]Pas vraiment...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00090809>Ouais, tout le monde sait ça.\nPour <color green<lancer>coloroff>, il faut <color green<orienter la\nmanette Wii Remote >coloroff><color green<<color green<vers <color green<le\nhaut puis l'agiter>coloroff>...\nPour <color green<faire rouler>coloroff>, il faut l'<color green<orienter\n>coloroff><color green<vers le bas et l'agiter>coloroff>...\nÇa va de soi, non?\n")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00141215>Quoi? Tu sais pas ça?\n<pause 15>Bon, je t'explique.\n\n\n<0x10009:0x000908ff>Après avoir cueilli une <color yellow<fleur bombe>coloroff>,\noriente la manette Wii Remote <color green<vers\nle haut>coloroff>!\n\nUne flèche de guidage s'affichera à\nl'écran. Utilise‐la pour viser ta cible et\nlance la fleur bombe en <color green<l'agitant\nvers le bas>coloroff>.\nÀ l'inverse, quand tu l'<color green<orientes vers\nle bas>coloroff>, une fois que la flèche apparaît,\n<color green<agite-la vers le haut >coloroff>pour\nfaire rouler la bombe!\n<0x10009:0x001108ff>Pour atteindre les <color red<cibles en hauteur>coloroff>, il\nfaut lancer la bombe. Pour atteindre\nun <color red<endroit éloigné ou étroit>coloroff>, il faut la\nfaire rouler. Entraîne‐toi bien.")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x0011020b>Wow! Celles qui poussent par ici sont\nparticulièrement puissantes.\n\n\n<0x10009:0x00ffffff><0x1000A:0x001100cd>Regarde, il y en a juste là.\nCueilles‐en autant que tu veux.")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 1, unk: 1, line: 85 */ "Je suppose que tu le sais déjà\nmais une fois que t'en as cueilli\nune avec (A), elle prend feu et finit\npar exploser.\nComme avec les pots, tu peux\nles <color green<lancer>coloroff> ou les <color green<faire rouler>coloroff>.\nVas‐y, essaie!\n\n<0x10006:0xffcd>......<pause 15><0x10006:0x00cd>\n<0x10009:0x00110d11>Mais, est‐ce que tu sais <color green<comment\non les fait rouler>coloroff>, au moins?\n[1-]Bien sûr[2-]Pas vraiment...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10009:0x00ffff00>Ce sont des monstres avec des armes\ntrès dangereuses! T'en as jamais vu?\nEn ce moment, y'en a partout dans\nle coin.\n<0x10009:0x0015ff07>Si tu sais pas qui c'est, c'est que t'es\npas avec eux. Fiou!\n\n\nFinalement, t'es venu chercher des\n<color yellow<fleurs bombes>coloroff>?\n[1-]C'est quoi?[2-]Exactement")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "Bon, ça suffit maintenant! On\nvous laissera plus saccager\nnotre territoire! Hein?")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Ah, on s'est encore trompés...<pause 15>\nHé, <color blue<Ferrug>coloroff>, lui non plus c'est\npas un des monstres rouges!")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00010800>Ouais, on dirait bien que non...\nVa falloir arrêter de nous faire\npeur comme ça!\n\n<0x10009:0x00110d01>Toutes nos excuses, l'ami! C'est\njuste que ces derniers temps, y a\ndes monstres bizarres qui font du\nremue‐ménage sur notre territoire.\n<0x10009:0x00150800>Ça fait que je les attendais de pied\nferme pour leur montrer de quel\nbois <color blue<Ferrug >coloroff>se chauffe.")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10008:0xffcd>Bien sûr... Il peut bien dire ça, lui qui était\ncaché jusqu'au dernier moment! Pff.")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "En tout cas, si toi aussi t'es venu\nchercher des trésors dans le coin,\ntiens-toi loin des monstres rouges.")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nNous allons entrer dans une zone où la\ntempérature est <color red<extrêmement élevée>coloroff>.\nLa probabilité que vos vêtements\nprennent feu est de 95 %. Soyez\nprudent.\n")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00000002>Jeune élu de la Déesse...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 1, unk: 0, line: 92 */ "Évite de faire le fou en <color green<faisant\ndes roulades >coloroff>dans tous les sens.\nIl y aura de la poussière partout,\naprès.")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0, line: 91 */ "Tiens, te revoilà! Fais pas attention à\nmoi, fais comme chez toi!\n\n\n<0x10009:0x10110d0e>Pardon? Tu veux que j'arrête de sortir\nde terre tout le temps? Dis pas ça...\n\n\n<0x10009:0x10150809>J'ai quand même le droit de venir voir\nce qui se passe dans ma demeure!\nMême si elle est toute petite et un\npeu mal en point...\n<0x10009:0x100909ff>En passant, c'est pas parce que tu t'es\nbien reposé qu'il faut faire le fou et\n<color green<faire des roulades >coloroff>dans tous les sens.")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Salut! Bienvenue chez moi!\nMets‐toi à ton aise!\n\n\n<0x10009:0x1011080e>Pardon? Si cette maison est\nvraiment à moi?\n\n\n<0x10009:0x1015080a>Disons que... ce sont les monstres\nrouges qui l'ont construite...<pause 20> Mais\nmaintenant qu'ils sont plus là...\nElle est à moi... Y'a pas de mal à ça!\n<0x10009:0x100908ff>Nous, les <color blue<Mogmas>coloroff>, on vit sous\nterre, ça fait qu'on a pas vraiment\nde maison...\n\n<0x10009:0x1015080d>Et j'ai toujours voulu pouvoir dire :\n« Bienvenue dans ma demeure! »")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

