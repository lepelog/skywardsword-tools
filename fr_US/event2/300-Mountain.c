          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf("Je suis sûr que ton amie créature\nt'attend. Tu n'as pas le droit de\nl'abandonner!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, toi! Ça faisait des lunes!\nMerci pour l'autre fois!\n\n\nAu fait, est\x2010ce que t'as retrouvé\nton amie créature?\n[1]Oui[2]Pas encore")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf("\x0E\x01\x09\x04\x11\x808Ah bon, tu l'as retrouvée! Bien content\npour toi...<pause14> Oh? T'as pas encore pu la\nsauver? Hmmm...\n\n\x0E\x01\x09\x04\x09\x8FFÉcoute. Ne te décourage pas.\nJe suis sûr que tu finiras par\ny arriver! Faut pas lâcher!")
          		  case 1:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x13\x100DJe vois... Peut\x2010être que les monstres\nrouges l'ont... Euh, tu sais...<pause14>\n\n\n\x0E\x01\x09\x04\x11\x80EQuoi? Tu sais qu'elle est encore\nen vie? Et bien, y'a rien de perdu!\nTous les espoirs sont permis!\n\n\x0E\x01\x09\x04\x09\x800Si tu baisses les bras, ce sera la fin!\nCourage, mon gars!")
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
/*<329>*/ 		printf("\x0E\x01\x09\x04\x11\x800Hé! Où tu vas comme ça?\nFaut que tu nous débarrasses\nde ces mal élevés!")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf("\x0E\x01\x09\x04\x11\x812Hé, toi! Ces mal élevés t'ont repéré,\net maintenant ils sont en beau fusil!\n\n\n\x0E\x01\x09\x04\x15\xD00Prends tes responsabilités\net débarrasse\x2010nous\x2010en!")
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
/*<340>*/ 		printf("Ouah! Encore eux!\nIls ont réussi à faire couler la\nlave qui était retenue là\x2010bas...\nMais j'ai pas dit mon dernier mot!")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf("Ouah! Les voilà!\n\n\n\nAh, c'est pas les monstres rouges?\n<pause0F>\x0E\x01\x09\x04\x1009\x807Faut pas me faire peur comme ça...\n\n\n\x0E\x01\x09\x04\x100A\xFF00Ah désolé, j'ai les nerfs à fleur de peau\navec ces monstres rouges qui saccagent\nnotre territoire...")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf("Comme ils sont arrivés par la grotte\nderrière, on a noyé le passage sous la\nlave pour qu'ils ne puissent plus passer.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf("Nous, on peut passer sous terre,\ndonc ça nous dérange pas. \x0E\x01\x09\x04\x1011\x80BHéhé!\nPas fou, hein?")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf("Faut pas toucher au barrage\nqui retient la lave là\x2010bas, c'est\ndangereux. Bon, bien, à plus!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf("\x0E\x01\x09\x04\x15\xD0CHmm...<pause14>\nJe me demande ce qu'ils mangent,\nces monstres rouges...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Mais fais quand même attention,\ndes fois y a des <r<grosses affaires\nrouges gluantes >>qui sortent.\nFais-toi pas attraper!")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf("Woh! Tu m'as fait peur!<pause14> \x0E\x01\x09\x04\x11\xD00Tu peux pas\ncreuser comme ça au\x2010dessus de la tête\ndes gens, voyons!\n\n\x0E\x01\x09\x04\x15\x809Bon. Je te comprends. Tu t'es laissé\nemporter par l'excitation de découvrir\nce qui va sortir du trou! Tu pouvais\nplus t'arrêter de creuser...\n<r<\x0E\x01\x09\x04ÿ\xFFFF>>Moi, j'ai réussi à sortir des <r<rubis>>\net du <r<minerai>>.\n\n\n<r<\x0E\x01\x09\x04\x15\xD11>>Avant on trouvait facilement des\n<r<c\x153urs>>, mais on en trouve pas mal\nmoins ces derniers temps. Mystère\net boule de gomme!\n\x0E\x01\x09\x04ÿ\xFFFFEn tout cas, si tu vois des trous dans les\nparages, gêne-toi pas pour creuser!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf("Woh! Tu m'as fait peur!<pause14> \x0E\x01\x09\x04\x11\xD00Tu peux pas\ncreuser comme ça au\x2010dessus de la tête\ndes gens, voyons!\n\n\x0E\x01\x09\x04\x15\x809Bon. Je te comprends. Tu t'es laissé\nemporter par l'excitation de découvrir\nce qui va sortir du trou! Tu pouvais\nplus t'arrêter de creuser...\n<r<\x0E\x01\x09\x04ÿ\xFFFF>>Est\x2010ce que ce sera un <r<rubis>>, du <r<minerai\n>>ou bien un <r<c\x153ur>>?\n\n\nToi aussi, creuse tous les trous que\ntu trouveras sur ton chemin!")
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
/*<236>*/ 				printf("\x0E\x01\x09\x04\x09\x8FFIl y a aussi des parois que tu\npeux faire sauter à la surface.\nJe suis sûr que tu peux les\ntrouver.")
          			  case 1:
/*<235>*/ 				printf("\x0E\x01\x09\x04\x15\xD10Ah, c'était là?\nTu te débrouilles pas mal, mon gars!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf("Dans le coin, les parois sont moins\népaisses par endroits et il y a souvent\ndes choses cachées derrière.")
          			  case 1:
/*<244>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ah, c'est toi? T'as l'air en pleine\nforme!\n\n\n\x0E\x01\x09\x04\x11\x800Tu le sais peut\x2010être déjà, mais\npar endroits, les parois du <b<volcan\nd'Ordinn >>sont moins épaisses.\n\n\x0E\x01\x09\x04\x09\x8FFDerrière, y a des grottes et souvent,\non y trouve des choses cachées.\n\n\nOn peut y trouver un tas de choses\ndifférentes, mais en général, ce\nsont des <y<rubis>>.\n\n\x0E\x01\x09\x04\x11\x8FFSi le c\x153ur t'en dit, pourquoi\nt'essaierais pas de les chercher?")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x15\x80CMon pif me dit qu'il devrait y en\navoir dans le coin... Snif, snif...")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, c'est toi? T'as l'air en forme!\n\n\n\n\x0E\x01\x09\x04\x11\x8FFT'es venu chercher des trésors, cette\nfois? Alors je vais te dire un petit\nquelque chose qui te sera utile.\n\n\x0E\x01\x09\x04\x09\x80BPar endroits, les parois du <b<volcan\nd'Ordinn>> sont moins épaisses et\nderrière, il y a des grottes.\n\nOn trouve souvent tout un tas de\nchoses cachées là\x2010dedans et en\nparticulier des <y<rubis>>.\n\n\x0E\x01\x09\x04\x15\x80CEt mon pif infaillible me dit qu'il y en\na dans le coin... Snif, snif...")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf("\x0E\x01\x09\x04\x15\x80BLes ruines cachées dans les\nprofondeurs du volcan...\nHéhé! Ça stimule mon instinct\nde <b<chasseur de trésors>>!")
          	  case 1:
/*<246>*/ 		printf("\x0E\x01\x09\x04\x11\x801Ah, c'est toi?\nEst\x2010ce que tu prends bien soin\nde mon <y<sac de bombes>>?\n\n\x0E\x01\x09\x04\x09\x9FFAu fait, est\x2010ce que t'es déjà\nallé jusque dans les profondeurs\ndu <b<volcan d'Ordinn>>?\n\n\x0E\x01\x09\x04\x15\x816Là\x2010bas, il fait tellement chaud\nque les vêtements prennent feu.\nLa plupart des gens y survivent pas.\n\n\x0E\x01\x09\x04\x09\x9FFMais on y trouve des ruines à en\ncouper le souffle, et on raconte\nqu'elles débordent de trésors.\n\n\x0E\x01\x09\x04\x11\x80BNous, on a pas de problèmes\npour y aller, on peut passer\nsous terre. Il faudra que j'aille\ny faire un tour un de ces quatre.")
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
/*<258>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 298, 'param3': 6}
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf("Hmm... Il me semble bien que c'est par\nici qu'ils l'ont enterrée... J'arrive pas à\nla trouver...")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf("T'es sûr que c'était par là, <b<Ferrug>>?\nEt c'est quoi qu'ils ont enterré?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf("Une <r<clé>>! C\x2010L\x2010É, <r<CLÉ>>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 149, 'param3': 6}
/*<149>*/ 	printf("Ils ont cassé la <r<clé de cette porte>>\net en ont caché les morceaux un\npeu partout.\n\nJ'suis sûr qu'ils ont enterré un des <r<cinq\nmorceaux>> par ici.")
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 251, 'param3': 6}
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Hmm... Au fait, tout à l'heure,\n<pling>ils ont emmené une <r<fille habillée\nbizarrement>>, non?")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x1011\xD0BOuais! Je suis sûr qu'ils gardent tous\nleurs objets précieux à l'intérieur.\n\n\n\x0E\x01\x09\x04\x1009\x800Cette fille qu'ils ont emmenée, ils vont\nsûrement la garder précieusement\npour la manger. Ça sent le trésor,\nmoi je te le dis!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Et qu'est\x2010ce que tu veux en faire, de ces\nmorceaux de clé?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x1011\xD09C'est évident! On va aller piquer\nles trésors qu'il y a à l'intérieur\nen douce!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Mais...<pause0F> on a pas besoin de clé, on a juste\nà passer sous terre pour se retrouver\nà l'intérieur, non?")
/*<262>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 254, 'param3': 6}
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(".........<pause1E>")
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(".........<pause1E>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 34, 'param3': 6}
/*< 34>*/ 	printf("Tu sais que t'es pas bête, toi!")
/*<257>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 345, 'param3': 6}
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nNous nous trouvons au <b<volcan d'Ordinn>>,\nun volcan en activité renfermant la\nforce de la terre.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nLa conversation de ces <b<Mogmas\n>>contenait des informations\nimportantes.\n\nLa « <r<fille habillée bizarrement>> »\ndont l'un d'eux a parlé...\n[1]C'est Zelda![2]La fille\nen noir?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf("En effet, \x0E\x01\x12\x04\x00\x05Maître. La probabilité qu'il\ns'agisse de dame Zelda est de 90 %.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf("En outre, la probabilité que la clé qui\nouvre cette porte soit faite du même\nmatériau que ce dispositif est de 95 %.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf("Je détecte aux alentours des objets\nconstitués du même matériau.\n\n\nJugeant que ces objets pourront nous\npermettre de nous rapprocher de <r<dame\nZelda>>, je les ai enregistrés en tant que\ncibles à <r<détecter>>.<pling>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf("La probabilité qu'il s'agisse de la\nfemme en noir que nous avons croisée\ntout à l'heure est de \x0E\x01\x08\x02\x1CD10 %.\n\nSelon mon analyse, il est fort probable\nque ce soit <r<dame Zelda >>qui a été\nenlevée.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf("\x0E\x01\x05\x04Z\x00Cette région est composée à 65 %\nde lave et abrite de nombreux monstres\nde feu.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf("Retiens bien ça, quand c'est un <g+<rubis\nvert>>, y a pas de <r<trou perdant >>autour.\n\n\nSi c'est un <b+<rubis bleu>>, il y en a <r<un ou\ndeux>>. Si c'est un <r+<rubis rouge>>, il y en a\n<r<trois ou quatre>>...\n\nSi c'est un <s<rubis argenté>>, il y en a <r<cinq\nou six >>et si c'est un <y+<rubis doré>>,\nil y en a <r<sept ou huit>>.\n\nMais au bout du compte, c'est la chance\nqui décidera si tu peux toucher le\ngros lot. \x0E\x01\x09\x04\x15\x509Alors, bonne chance! Héhé...")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf("Regarde\x2010moi donc ça... Maintenant,\ntu veux que je te révèle mes infos\nsecrètes?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf("<r<\x0E\x01\x09\x04ÿ\xFF00>>Tu peux connaître les secrets\ndu <r<Fouille\x2010rubis >>pour la modique\nsomme de <r<20 rubis>>!\n[1]Dis\x2010moi tout![2-]Non merci")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf("Héhé, merci!\nSurtout, ça reste entre nous, hein!\nVa pas le crier sur tous les toits...")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf("\x0E\x01\x09\x04\x11\xFF00En fait, selon la couleur du rubis\nque tu déterres, tu peux connaître\nle nombre de trous perdants qui\nl'entourent.\n\x0E\x01\x09\x04ÿ\xFF0BPar exemple, si c'est un <g+<rubis vert>>,\ny a <r<aucun trou perdant >>autour!\n\n\nPour un <b+<bleu>>, il y en a <r<un ou deux>>.\nPour un <r+<rouge>>, il y en a <r<trois ou quatre>>.\nPour un <s<argenté>>, il y en a <r<cinq ou six>>.\n\nEt ça arrive pas souvent, mais si c'est\nun <y+<rubis doré>>, ça veut dire qu'il y a\n<r<sept ou huit>> trous perdants autour.")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf("Qu'est-ce que tu en penses? Hein?\n Avec ça, ça va être beaucoup plus\nfacile de déterrer les rubis, non?\n\n\x0E\x01\x09\x04ÿ\xFF09Mais en fin de compte, ça demeure\nquand même un jeu de chance!\nFais de ton mieux, et croise-toi\nles doigts!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf("Mais t'as pas assez de rubis!\n\n\n\n\x0E\x01\x09\x04\x14\x1209Si tu m'apportes pas <r<20 rubis>>,\nje dirai rien.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf("Fais pas le chiche! C'est un tuyau\npour te rendre riche!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Bah, tant pis. Si tu changes d'idée,\napporte\x2010moi <r<20 rubis >>et je te dirai tout.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf("Hé toi! Tu vas te faire les griffes au\n<r<Fouille\x2010rubis >>de <b<Radigume>>, ou quoi?\n\n\n\x0E\x01\x09\x04\x15\x80BTu veux que je te donne une <r<info top\nsecrète>>? Avec ça, t'es sûr de toucher\nle gros lot. Oui, oui! Le GROS lot!\n\n\x0E\x01\x09\x04ÿ\xFF00Mais é<pause0A>vi<pause0A>dem<pause0A>ment<pause0A>, comme c'est une\ninfo en or, je vais pas te la donner\ngratuitement.")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf("\x0E\x01\x09\x04\x11\x8FFT'as une bonne bette, alors je te fais un\nprix d'ami. <r<20 rubis>>. Ç'a de l'allure,\nnon?\n[1]Dis\x2010moi tout![2-]Non merci")
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
/*<207>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\nJe détecte une <r<température\n>><r<extrêmement élevée>>.\nAvec votre nombre actuel de\nc\x153urs, vous n'y survivrez pas,\n\x0E\x01\x12\x04\x00\x02Maître. Je vous conseille de\nrebrousser chemin.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nJe détecte une <r<température\nextrêmement élevée>>. Avec votre\nnombre actuel de c\x153urs, vous\nn'y survivrez pas, \x0E\x01\x12\x04\x00\x02Maître.\nDe plus, par ici, la réaction de la\n<r<détection>> est nulle. Veuillez vérifier\nde nouveau la direction à emprunter.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf("\x0E\x01\x05\x04Z\x00Faites attention à vos objets de <r<bois\n>>et à vos <r<vêtements>>. Ils sont facilement\ninflammables.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf("Je crois qu'elle était habillée en\nnoir... J'en sais pas plus.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf("Tiens? En voilà encore un autre!\nOn voit beaucoup de nouvelles\ntêtes par ici, aujourd'hui...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf("Tout à l'heure j'ai vu une <r<fille habillée\nbizarrement >>entrer dans la grotte\nlà\x2010bas.<pling>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf("Quoi? C'est peut\x2010être l'amie que tu\ncherches... Elle ressemble à quoi?")
/*<349>*/ 		printf("\x0E\x01\x09\x04\x14\x120CHmm...<pause1E> Il me semble qu'elle était\n<r<habillée en noir>>. Mais j'en sais pas\nplus.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x05\x04K\x00Si vous prenez feu, je vous conseille\nd'éteindre les flammes en effectuant\nune <g<roulade>> ou une <g<attaque circulaire>>.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf("La fille qui est passée en courant avait\nplus ou moins la même allure que toi.\n\n\nMais je crois pas qu'elle était habillée\nen vert comme toi.")
          	  case 1:
/*< 97>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Quoi? C'est pas des trésors que tu\ncherches? Tu cherches une amie?\n\n\n\x0E\x01\x09\x04ÿ\xFF0ELa fille de tout à l'heure, c'était ta\ncopine? <r<Elle est passée en courant\n>>sans même nous regarder.<pling>\n\nElle allait trop vite pour que je la voie\nbien, mais en tout cas, elle n'était\ndéfinitivement pas un monstre rouge.\n\nElle est partie par là.\nEssaie de la rattraper!")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nGrâce à l'amélioration de votre épée,\nil est à présent possible de <r<détecter\n>>les <y<rubis>>.\n\nJ'ai ajouté les <y<rubis>> à la liste des cibles\npouvant être <r<détectées>>.<pling> Cela pourra\nvous servir dans vos recherches.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf("Dans le coin, on trouve souvent des\n<y<rubis>> rouges, bleus ou verts, et parfois\nmême on peut en trouver des <r<argentés\n>>ou des <r<dorés>>.\nOn trouve aussi souvent un <r<minerai\nqui pourrait servir de matériau>>, même\nsi on peut pas vraiment appeler ça un\ntrésor.")
          		  case 1:
/*<101>*/ 			printf("Nous on est les <b<Mogmas>>, et ici c'est\nnotre territoire. On est des <b<chasseurs\nde trésors>>.\n\nDans le coin, on trouve souvent des\n<y<rubis>> rouges, bleus ou verts, et parfois\nmême on peut en trouver des <r<argentés\n>>ou des <r<dorés>>.\nOn trouve aussi souvent un <r<minerai\nqui pourrait servir de matériau>>, même\nsi on peut pas vraiment appeler ça un\ntrésor.\nEn parlant de trésors... Puisque t'es\nlà, pourquoi t'en profites pas pour en\nchercher?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Quoi? C'est pas des trésors que tu\ncherches? Tu cherches une amie?\n\n\n\x0E\x01\x09\x04ÿ\xFF0ELa fille de tout à l'heure, c'était ta\ncopine? <r<Elle est passée en courant\n>>sans même nous regarder.<pling>\n\nElle allait trop vite pour que je la voie\nbien, mais en tout cas, elle n'était\ndéfinitivement pas un monstre rouge.\n\nElle est partie par là.\nEssaie de la rattraper!")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf("Où est\x2010ce que je vais bien pouvoir\naller chercher des trésors?\nCette fois, j'oublierai pas de passer\nsous terre.")
          		  case 1:
/*<287>*/ 			printf("Tiens, c'est toi?\nAs-tu réussi à entrer dans les ruines?\n\n\n\x0E\x01\x09\x04\x13\x100DMoi, j'ai pas pu. J'ai rebroussé chemin\net je me suis fait parler dans le casque\npar mon bon ami...\n\n\x0E\x01\x09\x04\x09\x8FF« On peut aller n'importe où\nen passant sous terre! », qu'il\nm'a dit...<pause0F> Héhé, ça m'était\ncomplètement sorti de la tête.")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf("Où est\x2010ce que je vais bien pouvoir\naller chercher des trésors...?\nHéhé! Le voyage d'un <b<chasseur\nde trésors >>finit jamais.")
          		  case 1:
/*<292>*/ 			printf("\x0E\x01\x09\x04\x11\x801Tiens, salut, toi! Tu prends toujours\nbien soin de mon <y<sac de bombes>>?\n\n\n\x0E\x01\x09\x04\x09\x8FFC'est pas tous les jours que\nje fais des cadeaux comme ça,\nalors fais\x2010en bon usage!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("Aaah! En voilà un en vert maintenant!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf("À l'instant, j'ai vu une <r<fille en noir >>qui\navait l'air d'être de la même espèce\nque toi. C'était une amie à toi?<pling>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf("Normalement, on peut pas passer\nici, mais elle a traversé d'un bond\nsans aucun problème.")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf("Arriver à sauter aussi loin...<pause0F>\nC'est pas à la portée du premier venu.")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf("Plus haut dans la montagne, ça\nfourmille de monstres rouges...\n\n\nMais la fille de tout à l'heure était\nsuper rapide, elle n'aura pas de\nproblème à monter.\n\nAvec elle, la chasse au trésor, ça doit\nêtre un jeu d'enfant... \x0E\x01\x09\x04\x15\x2FFC'est toute une\ncopine que t'as là...")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, permettez\x2010moi de vérifier\nquelque chose. Nous sommes\nactuellement à la recherche de\n<r<dame Zelda>>...\nMais vous souvenez\x2010vous de la manière\nde la <r<détecter>>?\n[1]Bien sûr![2]J'ai oublié...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf("Très bien, \x0E\x01\x12\x04\x00\x05Maître. Pardonnez\x2010moi.\nNous pouvons donc continuer\nà chercher dame Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf("Très bien, \x0E\x01\x12\x04\x00\x05Maître.\nPour enclencher la <r<détection>>, appuyez\ntout d'abord longuement sur (C).\x0E\x01\x11\x02\x6CD\n\nAvec la manette Wii Remote, pointez\nle curseur vers ce que vous désirez\nrechercher et je le détecterai avec la\npointe de l'épée.\nPlus la cible est proche, plus la <r<réaction\nsera forte>>. Elle se traduira par un son\net des vibrations.\n\nDe plus, le <r<curseur>> vous indiquera\nprécisément la direction dans laquelle\nse trouve la cible.\n\nÀ présent, sélectionnez dame Zelda\ncomme cible à détecter et reprenons\nnos recherches.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf("Dame Zelda se trouve par ici...<pause14>\nDépêche\x2010toi!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf("Aah... Ces mal élevés ont envahi notre\nterritoire et maintenant ils font comme\ns'ils étaient chez eux...")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Mais, mais, mais! T'es qui, toi?\nFais-moi pas peur comme ça...\n\n\nQuoi? Tu cherches ton amie?\x0E\x01\x09\x04\x14\x12FF\nNon, j'ai vu personne.\n\n\n\x0E\x01\x09\x04ÿ\xFFFFSi elle est pas passée par ici...\n\x0E\x01\n\x04\x09ÍElle a dû passer par là\x2010haut.")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf("Haa...<pause14> Si seulement quelqu'un pouvait\nchasser ces mal élevés...")
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
/*<  5>*/ 		printf("T'es vraiment costaud, toi! Tu nous as\nsortis d'un mauvais pépin! Merci!\n\n\n\x0E\x01\x09\x04ÿ\xFF0BOn en a peut\x2010être pas l'air, mais nous,\nles <b<Mogmas>>, on a des principes.\nJe dois te remercier comme il se doit.\n\nQu'est\x2010ce qui te ferait plaisir?\n[1]Je veux aller\nplus loin[2]Des rubis!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf("Ah ouais, c'est vrai, tu m'as\ndit que tu cherchais ton amie\ncréature.\n\n\x0E\x01\x09\x04\x09\x809Dans ce cas, je te donne ça,\ntu m'en diras des nouvelles!")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf("Avec ça, tu devrais pouvoir monter.\x0E\x01\n\x04\x0BÍ\nCreuse donc ce trou, pour voir.")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf("J'espère que ton amie créature s'est pas\nfait attraper par ces monstres rouges.")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf("Quoi? Des rubis?\nT'es sûr que c'est ça que tu veux?\n\n\n\x0E\x01\x09\x04\x15\x1204\x0E\x01\x08\x02\xFFCDHmm, c'est vrai qu'il m'a bien aidé, mais ce\nserait pas la meilleure chose...<pause14> Je sais, je vais\nlui donner ça à la place.\n\n\x0E\x01\x09\x04\x14\x12FFEuh... Comment dire...<pause0F> Je suis un peu\nà court, en ce moment...\n\n\n\x0E\x01\x09\x04\x11\x809Mais tu m'as dit que tu cherchais ton\namie créature, non? Dans ce cas, tiens,\nje te donne ça.")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf("Avec ça, tu devrais pouvoir monter.\x0E\x01\n\x04\x0BÍ\nCreuse donc ce trou, pour voir.")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf("\x0E\x01\x08\x02\xFFCDDe toute façon, je m'en sers jamais...\nJe préfère lui filer ça que des rubis.")
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
/*<141>*/ 	printf("Pas croyable...<pause0F>\nT'as réussi à tous les éliminer...<pause0F>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf("J'espère que tu retrouveras ton amie\ncréature saine et sauve.")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf("Quand <r<celui qui a un >><r<<r<chapeau <r<bleu\n>>souffle dans son cor, il en arrive en\nrenfort. Qu'est\x2010ce qu'on peut faire?")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf("\x0E\x01\x09\x04\x11\x809C'est toi qui as mis la poudre aux\ncanons! Prends tes responsabilités!\n\n\n\x0E\x01\x09\x04ÿ\xFFFFMais attention, quand leur nombre\ndiminue, ils <r<appellent du renfort avec\nleur cor>>, et ça en finit jamais.\n\nCelui qui a un cor et un <r<chapeau\nbleu>>,<pling> ça doit être le chef.")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf("\x0E\x01\x09\x04\x11\x80EQuoi? Tu vas vraiment les\nchasser d'ici?\n\n\n\x0E\x01\x09\x04\x15\x1200Maintenant qu'ils t'ont à l'\x153il, faut que\ntu fasses quelque chose.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Mais dès que leur nombre baisse,\nils <r<appellent du renfort avec leur\ncor>>. Ça finit plus.\n\nCelui qui a un cor et un <r<chapeau\nbleu<pling> >>doit être leur chef.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf("Si t'as rien d'autre à faire, tu pourrais\npeut\x2010être les chasser d'ici, non?\n\n\n\x0E\x01\x09\x04\x14\x1209Mouais... Ah, puis laisse faire.")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf("Au fait, je t'ai pas dit? Comme avec\nles pots, tu peux <g<prendre >>et <g<déposer\n>>les <y<fleurs bombes >>avec (A).\n\nUne fois que tu en as pris une, <g<oriente\nla manette Wii Remote vers le haut >><g<puis\nagite-la vers le bas >>pour <g<lancer >>une \nfleur bombe.\n<g<Oriente la manette Wii Remote vers\nle bas et agite-la vers le haut pour >><g<faire\nrouler la bombe>>. Essaie avec les <y<fleurs\nbombes >>du coin.")
          		  case 1:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x15\xD11Mais dis\x2010moi, t'as pas de <y<sac de bombes>>,\non dirait...\n\n\n\x0E\x01\x09\x04\x11\xDFFSans <y<sac de bombes>>, tu peux pas\ntransporter de <y<fleurs bombes>>.\nTous les <b<Mogmas>> en ont un.\n\n\x0E\x01\x09\x04ÿ\xFFFF...<pause14> Quoi?\nPourquoi tu me regardes comme ça?\n\n\n\x0E\x01\x09\x04\x14\x1209Non, non! Je te donnerai pas le mien!\nRêve pas en couleur! Contente\x2010toi de\nfaire sauter des rochers dans le coin.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x15\xD11Hein? T'es qui, toi? Je t'avais jamais\nvu dans le coin, avant...\n\n\nAh!\x0E\x01\x09\x04\x11\xD12 Me dis pas que t'es de connivence\navec les monstres rouges!\n[1]Non![2]Monstres\nrouges?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF07Ouf, tu me rassures...<pause0F> C'est vrai que\ntu leur ressembles pas trop.\n\n\n\x0E\x01\x09\x04\x15\xFF00Finalement, t'es venu chercher des\n<y<fleurs bombes>>?\n[1]C'est quoi?[2]Exactement")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Tu connais pas les <y<fleurs bombes>>?\n\x0E\x01\n\x04\x11ÍRegarde, il y en a quelques\x2010unes\nqui poussent, juste là.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf("Ce sont des plantes dangereuses.\nQuand tu les cueilles avec (A),\nelles prennent feu et explosent.\n\n\x0E\x01\x09\x04\x11\x80BMais quand on sait s'en servir,\nce sont des armes redoutables.\nC'est notre arme de prédilection\nà nous, les <b<Mogmas>>.\n\x0E\x01\x09\x04ÿ\xFFFFComme avec les pots, tu peux les\n<g<lancer >>ou les <g<faire rouler>>. Essaie\navec les <y<fleurs bombes >>qui sont là.\n\n\x0E\x01\x06\x02\xFFCD......<pause0F>\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Mais, est\x2010ce que tu sais <g<comment\non les lance>>, au moins?\n[1]Bien sûr.[2]Pas vraiment...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf("\x0E\x01\x09\x04\x09\x809Ouais, tout le monde sait ça.\nPour <g<lancer>>, il faut <g<orienter la\nmanette Wii Remote >><g<<g<vers <g<le\nhaut puis l'agiter>>...\nPour <g<faire rouler>>, il faut l'<g<orienter\n>><g<vers le bas et l'agiter>>...\nÇa va de soi, non?\n")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Quoi? Tu sais pas ça?\n<pause0F>Bon, je t'explique.\n\n\n\x0E\x01\x09\x04\x09\x8FFAprès avoir cueilli une <y<fleur bombe>>,\noriente la manette Wii Remote <g<vers\nle haut>>!\n\nUne flèche de guidage s'affichera à\nl'écran. Utilise\x2010la pour viser ta cible et\nlance la fleur bombe en <g<l'agitant\nvers le bas>>.\nÀ l'inverse, quand tu l'<g<orientes vers\nle bas>>, une fois que la flèche apparaît,\n<g<agite-la vers le haut >>pour\nfaire rouler la bombe!\n\x0E\x01\x09\x04\x11\x8FFPour atteindre les <r<cibles en hauteur>>, il\nfaut lancer la bombe. Pour atteindre\nun <r<endroit éloigné ou étroit>>, il faut la\nfaire rouler. Entraîne\x2010toi bien.")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf("\x0E\x01\x09\x04\x11\x20BWow! Celles qui poussent par ici sont\nparticulièrement puissantes.\n\n\n\x0E\x01\x09\x04ÿ\xFFFF\x0E\x01\n\x04\x11ÍRegarde, il y en a juste là.\nCueilles\x2010en autant que tu veux.")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf("Je suppose que tu le sais déjà\nmais une fois que t'en as cueilli\nune avec (A), elle prend feu et finit\npar exploser.\nComme avec les pots, tu peux\nles <g<lancer>> ou les <g<faire rouler>>.\nVas\x2010y, essaie!\n\n\x0E\x01\x06\x02\xFFCD......<pause0F>\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Mais, est\x2010ce que tu sais <g<comment\non les fait rouler>>, au moins?\n[1]Bien sûr[2]Pas vraiment...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF00Ce sont des monstres avec des armes\ntrès dangereuses! T'en as jamais vu?\nEn ce moment, y'en a partout dans\nle coin.\n\x0E\x01\x09\x04\x15\xFF07Si tu sais pas qui c'est, c'est que t'es\npas avec eux. Fiou!\n\n\nFinalement, t'es venu chercher des\n<y<fleurs bombes>>?\n[1]C'est quoi?[2]Exactement")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf("Bon, ça suffit maintenant! On\nvous laissera plus saccager\nnotre territoire! Hein?")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf("Ah, on s'est encore trompés...<pause0F>\nHé, <b<Ferrug>>, lui non plus c'est\npas un des monstres rouges!")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf("\x0E\x01\x09\x04\x01\x800Ouais, on dirait bien que non...\nVa falloir arrêter de nous faire\npeur comme ça!\n\n\x0E\x01\x09\x04\x11\xD01Toutes nos excuses, l'ami! C'est\njuste que ces derniers temps, y a\ndes monstres bizarres qui font du\nremue\x2010ménage sur notre territoire.\n\x0E\x01\x09\x04\x15\x800Ça fait que je les attendais de pied\nferme pour leur montrer de quel\nbois <b<Ferrug >>se chauffe.")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf("\x0E\x01\x08\x02\xFFCDBien sûr... Il peut bien dire ça, lui qui était\ncaché jusqu'au dernier moment! Pff.")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf("En tout cas, si toi aussi t'es venu\nchercher des trésors dans le coin,\ntiens-toi loin des monstres rouges.")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\nNous allons entrer dans une zone où la\ntempérature est <r<extrêmement élevée>>.\nLa probabilité que vos vêtements\nprennent feu est de 95 %. Soyez\nprudent.\n")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x00\x02Jeune élu de la Déesse...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf("Évite de faire le fou en <g<faisant\ndes roulades >>dans tous les sens.\nIl y aura de la poussière partout,\naprès.")
          		  case 1:
/*<218>*/ 			printf("Tiens, te revoilà! Fais pas attention à\nmoi, fais comme chez toi!\n\n\n\x0E\x01\x09\x04\x1011\xD0EPardon? Tu veux que j'arrête de sortir\nde terre tout le temps? Dis pas ça...\n\n\n\x0E\x01\x09\x04\x1015\x809J'ai quand même le droit de venir voir\nce qui se passe dans ma demeure!\nMême si elle est toute petite et un\npeu mal en point...\n\x0E\x01\x09\x04\x1009\x9FFEn passant, c'est pas parce que tu t'es\nbien reposé qu'il faut faire le fou et\n<g<faire des roulades >>dans tous les sens.")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf("Salut! Bienvenue chez moi!\nMets\x2010toi à ton aise!\n\n\n\x0E\x01\x09\x04\x1011\x80EPardon? Si cette maison est\nvraiment à moi?\n\n\n\x0E\x01\x09\x04\x1015\x80ADisons que... ce sont les monstres\nrouges qui l'ont construite...<pause14> Mais\nmaintenant qu'ils sont plus là...\nElle est à moi... Y'a pas de mal à ça!\n\x0E\x01\x09\x04\x1009\x8FFNous, les <b<Mogmas>>, on vit sous\nterre, ça fait qu'on a pas vraiment\nde maison...\n\n\x0E\x01\x09\x04\x1015\x80DEt j'ai toujours voulu pouvoir dire :\n« Bienvenue dans ma demeure! »")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

