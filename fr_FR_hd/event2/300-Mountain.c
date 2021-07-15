          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf("Je suis sûr que ta copine t'attend, alors baisse\npas les bras !")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, toi ! Ça faisait un bail ! Merci pour\nl'autre fois !\n\n\nAu fait, est\x2010ce que t'as retrouvé ta copine ?\n[1]Oui[2]Pas encore")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf("\x0E\x01\x09\x04\x11\x808Ah bon, tu l'as retrouvée ! C'est cool, ça...<pause14>\nOh ? T'as pas encore pu la sauver ?\n\n\n\x0E\x01\x09\x04\x09\x8FFBah, fais pas cette tête. Je suis sûr que\ntu finiras par y arriver ! Courage !")
          		  case 1:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x13\x100DJe vois... Peut\x2010être que les rougeauds l'ont...<pause14>\n\n\n\n\x0E\x01\x09\x04\x11\x80EQuoi ? Tu sais qu'elle est encore en vie ? Alors\ntout va bien ! Fais pas cette tête !\n\n\n\x0E\x01\x09\x04\x09\x800Si tu baisses les bras, elle est fichue ! Alors\ncourage, mon gars !")
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
/*<329>*/ 		printf("\x0E\x01\x09\x04\x11\x800Hé ! Où tu vas comme ça ? Faut que tu nous\ndébarrasses de ces sales types !")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf("\x0E\x01\x09\x04\x11\x812Hé, toi ! Ces sales types t'ont repéré, et\nmaintenant ils sont surexcités !\n\n\n\x0E\x01\x09\x04\x15\xD00Prends tes responsabilités et\ndébarrasse\x2010nous\x2010en !")
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
/*<340>*/ 		printf("Ouah ! Encore eux ! Ils ont réussi à faire\ncouler la lave qu'était retenue là\x2010bas... Mais\nj'ai pas dit mon dernier mot !")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf("Ouah ! Les voilà !\n\n\n\nAh, c'est pas les rougeauds ? <pause0F>\x0E\x01\x09\x04\x1009\x807Faut pas me faire\ndes frayeurs comme ça...\n\n\n\x0E\x01\x09\x04\x100A\xFF00Ah désolé, je suis sur les nerfs avec ces\nrougeauds qui saccagent notre territoire...")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf("Comme ils sont arrivés par la grotte derrière,\non a noyé le passage sous la lave pour qu'ils\npuissent plus passer.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf("Nous, on peut passer sous terre alors ça nous\ndérange pas. \x0E\x01\x09\x04\x1011\x80BHéhé ! Y en a là\x2010dedans !")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf("Alors faut pas toucher au barrage qui retient\nla lave là\x2010bas, c'est dangereux. Allez, à plus !")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf("\x0E\x01\x09\x04\x15\xD0CHmm...<pause14> Je me demande ce qu'ils mangent, ces\nrougeauds...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Mais fais quand même attention, des fois y a\ndes <r<gros trucs rouges gluants >>qui sortent.\nPrends garde à pas te faire attraper.")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf("Woh ! Tu m'as fait peur !<pause14> \x0E\x01\x09\x04\x11\xD00Ça va pas de creuser\ncomme ça au\x2010dessus de la tête des gens ?\n\n\n\x0E\x01\x09\x04\x15\x809Enfin, je te comprends. L'excitation de\ndécouvrir ce qui va sortir du trou, c'est\ngrisant ! On peut plus s'arrêter de creuser.\n\n<r<\x0E\x01\x09\x04ÿ\xFFFF>>Moi, j'ai réussi à choper des <r<rubis >>et du <r<minerai>>.\n\n\n\n<r<\x0E\x01\x09\x04\x15\xD11>>Par contre, j'ai trop de mal à trouver des\n<r<c\x153urs >>dans le coin ces derniers temps.\nMystère et boule de gomme !\n\nLa nature, ça s'explique pas, hein ! \x0E\x01\x09\x04ÿ\xFFFFEn tout cas,\nsi tu vois des trous dans les parages, te gêne pas\npour creuser !")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf("Woh ! Tu m'as fait peur !<pause14> \x0E\x01\x09\x04\x11\xD00Ça va pas de creuser\ncomme ça au\x2010dessus de la tête des gens ?\n\n\n\x0E\x01\x09\x04\x15\x809Enfin, je te comprends. L'excitation de\ndécouvrir ce qui va sortir du trou, c'est\ngrisant ! On peut plus s'arrêter de creuser.\n\n<r<\x0E\x01\x09\x04ÿ\xFFFF>>Est\x2010ce que ce sera un <r<rubis>>, du <r<minerai >>ou bien\nun <r<c\x153ur>> ?\n\n\nToi aussi, creuse tous les trous que tu trouveras\nsur ton chemin !")
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
/*<236>*/ 				printf("\x0E\x01\x09\x04\x09\x8FFIl y a aussi des parois que tu peux faire sauter\nà la surface. Je suis sûr que tu peux les trouver.")
          			  case 1:
/*<235>*/ 				printf("\x0E\x01\x09\x04\x15\xD10Ah, c'était là ? Tu te débrouilles pas mal, mon\ngars !")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf("Dans le coin, les parois sont moins épaisses\npar endroits et il y a souvent des trucs cachés\nderrière.")
          			  case 1:
/*<244>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ah, c'est toi ? T'as l'air en pleine forme !\n\n\n\n\x0E\x01\x09\x04\x11\x800Tu le sais peut\x2010être déjà, mais par endroits, les\nparois du <b<volcan d'Ordinn >>sont moins épaisses.\n\n\n\x0E\x01\x09\x04\x09\x8FFDerrière, y a des grottes et souvent, on y trouve\ndes trucs cachés.\n\n\nOn trouve tout un tas de trucs différents, mais\nen général, c'est des <y<rubis>>.\n\n\n\x0E\x01\x09\x04\x11\x8FFSi l'envie te prend, pourquoi t'essaierais pas de\nles chercher ?")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x15\x80CMon flair me dit qu'il devrait y en avoir dans\nle coin...")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, c'est toi ? T'as l'air en forme !\n\n\n\n\x0E\x01\x09\x04\x11\x8FFT'es venu chercher des trésors, cette fois ?\nAlors je vais te dire un truc qui te sera utile.\n\n\n\x0E\x01\x09\x04\x09\x80BPar endroits, les parois du <b<volcan d'Ordinn>> sont\nmoins épaisses et derrière, il y a des grottes.\n\n\nOn trouve souvent tout un tas de trucs cachés\nlà\x2010dedans et en particulier des <y<rubis>>.\n\n\n\x0E\x01\x09\x04\x15\x80CEt mon flair infaillible me dit qu'il y en a dans\nle coin...")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf("\x0E\x01\x09\x04\x15\x80BLes ruines cachées dans les profondeurs du\nvolcan... Héhé ! Ça stimule mon instinct de\n<b<chasseur de trésor>> !")
          	  case 1:
/*<246>*/ 		printf("\x0E\x01\x09\x04\x11\x801Ah, c'est toi ? Est\x2010ce que tu prends bien soin de\nmon <y<sac de bombes>> ?\n\n\n\x0E\x01\x09\x04\x09\x9FFAu fait, est\x2010ce que t'es déjà allé jusque dans les\nprofondeurs du <b<volcan d'Ordinn>> ?\n\n\n\x0E\x01\x09\x04\x15\x816Là\x2010bas, il fait tellement chaud que les vêtements\nprennent feu. La plupart des gens y survivent\npas.\n\n\x0E\x01\x09\x04\x09\x9FFMais on y trouve de sacrées ruines et on raconte\nqu'elles débordent de trésors.\n\n\n\x0E\x01\x09\x04\x11\x80BNous, on a pas de problèmes pour y aller, on\npeut passer sous terre. Il faudra que j'aille y\nfaire un tour un de ces quatre.")
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
/*< 24>*/ 	printf("Hmm... Il me semble bien que c'est par ici qu'ils\nl'ont enterrée... J'arrive pas à la trouver...")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf("T'es sûr que c'était par là, <b<Ferrug>> ? Et c'est\nquoi qu'ils ont enterré ?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf("Une <r<clé>> ! <r<C\x2010L\x2010É >>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 149, 'param3': 6}
/*<149>*/ 	printf("Ils ont cassé la <r<clé de cette porte >>et en ont caché\nles morceaux un peu partout.\n\n\nJ'suis sûr qu'ils ont enterré un des <r<cinq\nmorceaux>> par ici.")
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 251, 'param3': 6}
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Hmm... Au fait, tout à l'heure, <pling>ils ont emmené\nune <r<fille habillée bizarrement>>, non ?")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x1011\xD0BOuais ! Je suis sûr qu'ils gardent tous leurs\ntrucs précieux à l'intérieur.\n\n\n\x0E\x01\x09\x04\x1009\x800Cette fille qu'ils ont emmenée, ils vont sûrement\nla garder précieusement pour la manger. Ça\nsent le trésor, moi je te le dis !")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Et qu'est\x2010ce que tu veux en faire, de ces\nmorceaux de clé ?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x1011\xD09C'est évident ! On va aller piquer les trésors\nqu'il y a à l'intérieur en douce !")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Mais...<pause0F> on a pas besoin de clé, il suffit de passer\nsous terre pour se retrouver à l'intérieur, non ?")
/*<262>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 254, 'param3': 6}
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(".........<pause1E>")
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 255, 'param3': 16}
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(".........<pause1E>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 34, 'param3': 6}
/*< 34>*/ 	printf("Tu sais que t'es pas bête, toi !")
/*<257>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 345, 'param3': 6}
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Nous nous trouvons au <b<volcan\nd'Ordinn>>, un volcan en activité renfermant la force de\nla terre.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. La\nconversation de ces <b<Mogmas >>contenait des\ninformations importantes.\n\nLa « <r<fille habillée bizarrement>> » dont l'un d'eux a\nparlé...\n[1]C'est Zelda ![2]La fille\nen noir ?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf("En effet, \x0E\x01\x12\x04\x00\x05Maître. La probabilité qu'il s'agisse de dame\nZelda est de 90 %.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf("En outre, la probabilité que la clé qui ouvre cette\nporte soit faite du même matériau que ce dispositif\nest de 95 %.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf("Je détecte aux alentours des objets constitués du même\nmatériau.\n\n\nJugeant que ces objets pourront nous permettre de\nnous rapprocher de <r<dame Zelda>>, je les ai enregistrés\nen tant que cibles à <r<détecter>>.<pling>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf("La probabilité qu'il s'agisse de la femme en noir que\nnous avons croisée tout à l'heure est de \x0E\x01\x08\x02\x1CD10 %.\n\n\nSelon mon analyse, il est fort probable que ce soit\n<r<dame Zelda >>qui ait été enlevée.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf("\x0E\x01\x05\x04Z\x00Cette région est composée à 65 % de lave et abrite de\nnombreux monstres de feu.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf("Retiens bien ça, quand c'est un <g+<rubis vert>>, y a\npas de <r<trou perdant >>autour.\n\n\nSi c'est un <b+<rubis bleu>>, il y en a <r<un ou deux>>. Si\nc'est un <r+<rubis rouge>>, il y en a <r<trois ou quatre>>...\n\n\nSi c'est un <s<rubis argenté>>, il y en a <r<cinq ou six\n>>et si c'est un <y+<rubis doré>>, il y en a <r<sept ou huit>>.\n\n\nMais au bout du compte, c'est la chance qui\ndécidera si tu peux toucher le gros lot. \x0E\x01\x09\x04\x15\x509Alors,\nbonne chance ! Héhé...")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf("Tiens, alors maintenant, tu veux que je te révèle\nmes infos secrètes ?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf("<r<\x0E\x01\x09\x04ÿ\xFF00>>Tu peux connaître les secrets du <r<Fouille\x2010rubis\n>>pour la modique somme de <r<20 rubis >>!\n[1]Dis\x2010moi tout ![2-]Non merci")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf("Héhé, merci ! Surtout, ça reste entre nous,\nhein ! Va pas le crier sur les toits...")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf("\x0E\x01\x09\x04\x11\xFF00En fait, selon la couleur du rubis que tu\ndéterres, tu peux connaître le nombre de\ntrous perdants qui l'entourent.\n\n\x0E\x01\x09\x04ÿ\xFF0BPar exemple, si c'est un <g+<rubis vert>>, y a <r<aucun\ntrou perdant >>autour !\n\n\nPour un <b+<bleu>>, il y en a <r<un ou deux>>.\nPour un <r+<rouge>>, il y en a <r<trois ou quatre>>.\nPour un <s<argenté>>, il y en a <r<cinq ou six>>.\n\nEt ça arrive pas souvent, mais si c'est un <y+<rubis\ndoré>>, ça veut dire qu'il y a <r<sept ou huit>> trous\nperdants autour.")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf("Alors ? Avec ça, ça va être beaucoup plus facile\nde déterrer les rubis, non ?\n\n\n\x0E\x01\x09\x04ÿ\xFF09Mais en fin de compte, c'est quand même un\njeu de chance ! Bon courage !")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf("Mais t'as pas assez de rubis !\n\n\n\n\x0E\x01\x09\x04\x14\x1209Si tu m'apportes pas <r<20 rubis>>, je dirai rien.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf("Allez, fais pas le radin ! C'est un tuyau pour\ntoucher le pactole !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Bah, tant pis. Si tu changes d'avis, apporte\x2010moi\n<r<20 rubis >>et je te dirai tout.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf("Hé toi ! Tu vas te faire les griffes au\n<r<Fouille\x2010rubis >>de <b<Radigume>>, non ?\n\n\n\x0E\x01\x09\x04\x15\x80BTu veux que je te donne une <r<info top secrète >>?\nAvec ça, t'es sûr de toucher le gros lot.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Mais é<pause0A>vi<pause0A>dem<pause0A>ment<pause0A>, comme c'est une info en or,\nje vais pas te la donner gratuitement.")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf("\x0E\x01\x09\x04\x11\x8FFT'as une bonne tête, alors je te fais un prix\nd'ami. <r<20 rubis>>, c'est honnête, non ?\n[1]Dis\x2010moi tout ![2-]Non merci")
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
/*<207>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Je détecte une <r<température\nextrêmement élevée>>.\n\n\nAvec votre nombre actuel de c\x153urs, vous n'y survivrez\npas, \x0E\x01\x12\x04\x00\x02Maître. Je vous conseille de rebrousser chemin.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\n\n\n\nJe détecte une <r<température extrêmement élevée>>. Avec\nvotre nombre actuel de c\x153urs, vous n'y survivrez pas,\n\x0E\x01\x12\x04\x00\x02Maître.\n\nDe plus, par ici, la réaction de la <r<détection >>est nulle.\nVeuillez vérifier de nouveau la direction à emprunter.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf("\x0E\x01\x05\x04Z\x00Faites attention à vos objets en <r<bois >>et à vos <r<vêtements>>.\nIls sont facilement inflammables.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf("Je crois qu'elle était habillée en noir... J'en sais\npas plus.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf("Tiens ? En voilà encore un autre ! On\nvoit beaucoup de nouvelles têtes par ici,\naujourd'hui...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf("Tout à l'heure j'ai vu une <r<fille habillée\nbizarrement >>entrer dans la grotte là\x2010bas.<pling>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf("Quoi ? C'est peut\x2010être l'amie que tu cherches...\nElle ressemble à quoi ?")
/*<349>*/ 		printf("\x0E\x01\x09\x04\x14\x120CHmm...<pause1E> Il me semble qu'elle était <r<habillée en\nnoir>>. Mais j'en sais pas plus.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x05\x04K\x00Si vous prenez feu, je vous conseille d'éteindre les\nflammes en effectuant une <g<roulade>> ou une <g<attaque\ncirculaire>>.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf("La fille qu'est passée en courant avait plus ou\nmoins la même allure que toi.\n\n\nMais je crois pas qu'elle était habillée en vert\ncomme toi.")
          	  case 1:
/*< 97>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Quoi ? C'est pas des trésors que tu cherches ?\nTu cherches une amie ?\n\n\n\x0E\x01\x09\x04ÿ\xFF0EAlors la fille de tout à l'heure, c'était ta\ncopine ? <r<Elle est passée en courant >>sans\nmême nous regarder.<pling>\n\nElle allait trop vite pour que je la voie bien,\nmais en tout cas, c'était pas une rougeaude.\n\n\nElle est partie par là. T'as qu'à essayer de la\nrattraper.")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Grâce à l'amélioration de\nvotre épée, il est à présent possible de <r<détecter >>les\n<y<rubis>>.\n\nJ'ai ajouté les <y<rubis>> à la liste des cibles pouvant être\n<r<détectées>>.<pling> Cela pourra vous servir dans vos recherches.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf("Dans le coin, on trouve souvent des <y<rubis\n>>rouges, bleus ou verts, et parfois même on\npeut en trouver des <r<argentés >>ou des <r<dorés>>.\n\nOn trouve aussi souvent un <r<minerai qui\npourrait servir de matériau>>, même si on\npeut pas vraiment appeler ça un trésor.")
          		  case 1:
/*<101>*/ 			printf("Nous, on est des <b<Mogmas>>, et ici c'est notre\nterritoire. On est des <b<chasseurs de trésors>>.\n\n\nDans le coin, on trouve souvent des <y<rubis\n>>rouges, bleus ou verts, et parfois même on\npeut en trouver des <r<argentés >>ou des <r<dorés>>.\n\nOn trouve aussi souvent un <r<minerai qui\npourrait servir de matériau>>, même si on\npeut pas vraiment appeler ça un trésor.\n\nEn parlant de trésors... Puisque t'es là, pourquoi\nt'en profites pas pour en chercher ?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Quoi ? C'est pas des trésors que tu cherches ?\nTu cherches une amie ?\n\n\n\x0E\x01\x09\x04ÿ\xFF0EAlors la fille de tout à l'heure, c'était ta\ncopine ? <r<Elle est passée en courant >>sans\nmême nous regarder.<pling>\n\nElle allait trop vite pour que je la voie bien,\nmais en tout cas, c'était pas une rougeaude.\n\n\nElle est partie par là. T'as qu'à essayer de la\nrattraper.")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf("Où est\x2010ce que je vais bien pouvoir aller chercher\ndes trésors ? Cette fois, j'oublierai pas de passer\nsous terre.")
          		  case 1:
/*<287>*/ 			printf("Tiens, c'est toi ? T'as pu entrer dans les\nruines ?\n\n\n\x0E\x01\x09\x04\x13\x100DMoi, j'ai pas pu, j'ai rebroussé chemin, et je me\nsuis fait enguirlander par mon pote...\n\n\n\x0E\x01\x09\x04\x09\x8FF« On peut aller n'importe où en passant sous\nterre ! », qu'il m'a fait...<pause0F> Héhé, ça m'était\ncomplètement sorti de la tête.")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf("Où est\x2010ce que je vais bien pouvoir aller chercher\ndes trésors...? Héhé ! Le voyage d'un <b<chasseur\nde trésors >>finit jamais.")
          		  case 1:
/*<292>*/ 			printf("\x0E\x01\x09\x04\x11\x801Tiens, salut, toi ! Tu prends bien soin de mon\n<y<sac de bombes >>?\n\n\n\x0E\x01\x09\x04\x09\x8FFC'est pas tous les jours que je fais des cadeaux\ncomme ça, alors fais\x2010en bon usage !")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("Aaah ! En voilà un en vert maintenant !")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf("À l'instant, j'ai vu une <r<fille en noir >>qui avait\nl'air d'être de la même espèce que toi. C'était\nune amie à toi ?<pling>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf("Normalement, on peut pas passer ici, mais elle\na traversé d'un bond sans aucun problème.")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf("Arriver à sauter aussi loin...<pause0F> C'est pas à la\nportée du premier venu.")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf("Plus haut dans la montagne, ça grouille de\nrougeauds...\n\n\nMais la fille de tout à l'heure était super rapide,\nelle aura pas de problème à monter.\n\n\nAvec elle, la chasse au trésor, ça doit être un jeu\nd'enfant... \x0E\x01\x09\x04\x15\x2FFC'est une sacrée copine que t'as là...")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, permettez\x2010moi de vérifier quelque chose. Nous\nsommes actuellement à la recherche de <r<dame Zelda>>...\n\n\nMais vous souvenez\x2010vous de la manière de la\n<r<détecter >>?\n[1]Bien sûr ![2]J'ai oublié...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf("Très bien, \x0E\x01\x12\x04\x00\x05Maître. Pardonnez\x2010moi. Nous pouvons donc\ncontinuer à chercher dame Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf("Très bien, \x0E\x01\x12\x04\x00\x05Maître. Pour enclencher la <r<détection>>,\nappuyez tout d'abord longuement sur (^).\x0E\x01\x11\x02\x8CD\n\n\nSélectionnez ce que vous désirez rechercher et je le\ndétecterai avec la pointe de l'épée.\n\n\nPlus la cible est proche, plus la <r<réaction sera forte>>.\nElle se traduira par un son et des vibrations.\n\n\nDe plus, le <r<curseur>> vous indiquera précisément la\ndirection dans laquelle se trouve la cible.\n\n\nÀ présent, sélectionnez dame Zelda comme cible à\ndétecter et reprenons nos recherches.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf("Dame Zelda se trouve par ici...<pause14> Dépêche\x2010toi !")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf("Aah... Ces sales types ont envahi notre territoire\net maintenant ils font comme s'ils étaient chez\neux...")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Ouah ! T'es qui, toi ? Me fais pas des frayeurs\ncomme ça...\n\n\nQuoi ? Tu cherches ton amie ?\x0E\x01\x09\x04\x14\x12FF Non, j'ai vu\npersonne.\n\n\n\x0E\x01\x09\x04ÿ\xFFFFSi elle est pas passée par ici... \x0E\x01\n\x04\x09ÍElle a dû passer\npar là\x2010haut.")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf("Haa...<pause14> Si seulement quelqu'un pouvait chasser\nces sales types...")
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
/*<  5>*/ 		printf("T'es sacrément costaud ! Tu m'as ôté une belle\népine du pied ! Merci !\n\n\n\x0E\x01\x09\x04ÿ\xFF0BOn en a peut\x2010être pas l'air, mais nous, les\n<b<Mogmas>>, on a des principes. Je dois te\nremercier comme il se doit.\n\nQu'est\x2010ce qui te ferait plaisir ?\n[1]Je veux aller\nplus loin[2]Des rubis !")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf("Ah ouais, c'est vrai, tu m'as dit que tu cherchais\nta copine.\n\n\n\x0E\x01\x09\x04\x09\x809Dans ce cas, je te donne ça, tu m'en diras des\nnouvelles !")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf("Avec ça, tu devrais pouvoir monter.\x0E\x01\n\x04\x0BÍ Creuse\ndonc ce trou pour voir.")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf("J'espère que ta copine s'est pas fait attraper par\nces sales rougeauds... ")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf("Quoi ?! Des rubis ?! T'es sûr que c'est ce que\ntu veux ?\n\n\n\x0E\x01\x09\x04\x15\x1204\x0E\x01\x08\x02\xFFCDHmm, c'est vrai qu'il m'a bien aidé, mais ce serait quand\nmême du gâchis...<pause14> Je sais, je vais lui donner ça à la place.\n\n\n\x0E\x01\x09\x04\x14\x12FFEuh... Comment dire...<pause0F> Je suis un peu à court,\nlà...\n\n\n\x0E\x01\x09\x04\x11\x809Mais tu m'as dit que tu cherchais ton amie ?\nDans ce cas, je te donne ça.")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf("Avec ça, tu devrais pouvoir monter.\x0E\x01\n\x04\x0BÍ Creuse\ndonc ce trou pour voir.")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf("\x0E\x01\x08\x02\xFFCDDe toute façon, je m'en sers jamais... Je préfère lui filer\nça que des rubis.")
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
/*<141>*/ 	printf("Pas croyable...<pause0F> T'as réussi à tous les éliminer...<pause0F>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf("J'espère que tu retrouveras ta copine saine et\nsauve.")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf("Quand <r<ceux qu'ont un chapeau bleu >>soufflent\ndans leur cor, il en arrive en renfort. Qu'est\x2010ce\nqu'on peut faire ?")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf("\x0E\x01\x09\x04\x11\x809C'est toi qui les as mis en colère, alors prends\ntes responsabilités.\n\n\n\x0E\x01\x09\x04ÿ\xFFFFMais attention, quand leur nombre diminue, ils\n<r<appellent du renfort avec leur cor>>, et ça en finit\njamais.\n\nCeux qu'ont un cor et un <r<chapeau bleu>>,<pling> ça doit\nêtre les chefs.")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf("\x0E\x01\x09\x04\x11\x80EQuoi ? Tu vas vraiment les chasser d'ici ?\n\n\n\n\x0E\x01\x09\x04\x15\x1200Maintenant qu'ils t'ont dans le collimateur, faut\nque tu fasses quelque chose.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Mais dès que leur nombre baisse, ils <r<appellent\ndu renfort avec leur cor>>. Ça n'en finit jamais.\n\n\nCeux qui ont un cor et un <r<chapeau bleu<pling> >>doivent\nêtre les chefs.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf("Si t'as rien d'autre à faire, tu pourrais peut\x2010être\nles chasser d'ici, non ?\n\n\n\x0E\x01\x09\x04\x14\x1209Bah, non, laisse tomber...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf("Au fait, je t'ai pas dit ? Comme avec les pots,\ntu peux <g<prendre >>et <g<poser >>les <y<fleurs bombes\n>>avec (A).\n\nUne fois que tu tiens un objet en main, tu peux\nsoit le lancer, soit le faire rouler.\n\n\nSi tu ne sais plus comment faire, il te suffit\nde prendre quelque chose dans tes mains et\nd'appuyer sur \x0E\x02\x04\x02\x13CD pour consulter l'aide.\nFacile, non ?\x0E\x01\x11\x02\xBCD\nEssaie avec les <y<fleurs bombes >>du coin.")
          		  case 1:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x15\xD11Mais dis\x2010moi, t'as pas de <y<sac de bombes>>, on\ndirait...\n\n\n\x0E\x01\x09\x04\x11\xDFFSans <y<sac de bombes>>, tu peux pas transporter de\n<y<fleurs bombes>>. Tous les <b<Mogmas>> en ont un.\n\n\n\x0E\x01\x09\x04ÿ\xFFFF...<pause14> Quoi ? Pourquoi tu me regardes comme ça ?\n\n\n\n\x0E\x01\x09\x04\x14\x1209Non, non ! Je te donnerai pas le mien ! Faut\npas rêver ! Contente\x2010toi de faire sauter des\nrochers dans le coin.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x15\xD11Hein ? T'es qui, toi ? Je t'avais jamais vu dans\nle coin, avant...\n\n\nAh !\x0E\x01\x09\x04\x11\xD12 Me dis pas que t'es pote avec les\nrougeauds !\n[1]Non ![2]Les\nrougeauds ?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF07Ouf, tu me rassures...<pause0F> C'est vrai que tu leur\nressembles pas trop.\n\n\n\x0E\x01\x09\x04\x15\xFF00Alors t'es venu chercher des <y<fleurs bombes>> ?\n[1]C'est quoi ?[2]Exactement")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Tu connais pas les <y<fleurs bombes>> ? \x0E\x01\n\x04\x11ÍRegarde,\nc'est les trucs qui poussent là.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf("C'est des plantes dangereuses. Quand tu les\ncueilles avec (A), elles prennent feu et\nexplosent.\n\n\x0E\x01\x09\x04\x11\x80BMais quand on sait s'en servir, ce sont des\narmes redoutables. C'est notre arme de\nprédilection à nous, les <b<Mogmas>>.\n\n\x0E\x01\x09\x04ÿ\xFFFFComme avec les pots, tu peux les <g<jeter >>ou les\n<g<faire rouler>>. Essaie avec les <y<fleurs bombes >>qui\nsont là.\n\n\x0E\x01\x06\x02\xFFCD......<pause0F>\x0E\x01\x06\x02Í \x0E\x01\x09\x04\x11\xD11Mais, est\x2010ce que tu sais <g<comment on les\nlance>>, au moins ?\n[1]Bien sûr[2]Pas vraiment...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf("\x0E\x01\x09\x04\x09\x809Ouais, tout le monde sait ça. On <g<brandit un\ntruc en l'air>> pour le jeter, on le <g<tient au ras\ndu sol >>pour le faire rouler. Ça tombe sous\nle sens, non ?")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Quoi ? Tu sais pas ça ? <pause0F>Bon, je t'explique.\n\n\n\n\x0E\x01\x09\x04\x09\x8FFAprès avoir cueilli une <y<fleur bombe>>, <g<brandis\x2010la\n>>en l'air !\n\n\nUne flèche de guidage s'affichera à l'écran.\nUtilise\x2010la pour viser ta cible, et balance ta\nbombe !\n\nPareil si tu <g<tiens ta bombe près du sol>>. Une fois\nque la flèche apparaît, <g<balance ta bombe>> et elle\nroulera le long de la trajectoire affichée !\n\n\x0E\x01\x09\x04\x11\x8FFPour les <r<cibles en hauteur>>, il faut la jeter. Pour\natteindre un <r<endroit éloigné ou étroit>>, il faut la\nfaire rouler. Entraîne\x2010toi bien.")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf("\x0E\x01\x09\x04\x11\x20BHé ouais ! Celles qui poussent par ici sont\nparticulièrement puissantes.\n\n\n\x0E\x01\x09\x04ÿ\xFFFF\x0E\x01\n\x04\x11ÍRegarde, il y en a juste là. Cueilles\x2010en autant\nque tu veux.")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf("Je suppose que tu le sais déjà mais une fois que\nt'en as cueilli une avec (A), elle prend feu et\nfinit par exploser.\n\nComme avec les pots, tu peux les <g<jeter>> ou les\n<g<faire rouler>>. Vas\x2010y, essaie !\n\n\n\x0E\x01\x06\x02\xFFCD......<pause0F>\x0E\x01\x06\x02Í \x0E\x01\x09\x04\x11\xD11Mais, est\x2010ce que tu sais <g<comment on les\nfait rouler>>, au moins ?\n[1]Bien sûr[2]Pas vraiment...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF00C'est des monstres avec des armes très\ndangereuses ! T'en as jamais vu ? En ce\nmoment, ils grouillent partout dans le coin.\n\n\x0E\x01\x09\x04\x15\xFF07Enfin, si tu sais pas qui c'est, c'est que t'es pas \navec eux...\n\n\nAlors t'es venu chercher des <y<fleurs bombes >>?\n[1]C'est quoi ?[2]Exactement")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf("Bon, ça suffit maintenant ! On vous laissera\nplus saccager notre territoire ! Hein ?")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf("Ah, on s'est encore trompés...<pause0F> Hé, <b<Ferrug>>,\nlui non plus c'est pas un rougeaud !")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf("\x0E\x01\x09\x04\x01\x800Ouais, on dirait bien que non... Va falloir\narrêter de nous faire des frayeurs comme ça !\n\n\n\x0E\x01\x09\x04\x11\xD01Enfin, excuse, l'ami ! C'est juste que ces\nderniers temps, y a des monstres bizarres\nqui font du remue\x2010ménage sur notre\nterritoire.\n\x0E\x01\x09\x04\x15\x800Alors je les attendais de pied ferme pour leur\nmontrer de quel bois <b<Ferrug >>se chauffe.")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf("\x0E\x01\x08\x02\xFFCDJ'en reviens pas qu'il dise ça, plus planqué que lui,\ntu meurs !")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf("Enfin, si toi aussi t'es venu chercher des trésors\ndans le coin, fais gaffe aux rougeauds.")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Nous allons entrer dans une\nzone où la température est <r<extrêmement élevée>>.\n\n\nLa probabilité que vos vêtements prennent feu est\nde 95 %. Soyez prudent.\n\n\n<g<En courant>>, il est possible de traverser cette zone.\nJe vous conseille de vérifier la direction à prendre\navec la <r<détection>>.")
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
/*<301>*/ 			printf("Évite de faire le fou en <g<faisant des roulades\n>>dans tous les sens. Il y aura de la poussière\npartout, après.")
          		  case 1:
/*<218>*/ 			printf("Tiens, te revoilà ! Fais pas attention à moi, fais\ncomme chez toi.\n\n\n\x0E\x01\x09\x04\x1011\xD0EComment ? Tu veux que j'arrête de sortir de\nterre tout le temps ? Dis pas ça...\n\n\n\x0E\x01\x09\x04\x1015\x809Je me fais un peu de souci pour ma maison, elle\nest vieille et pas très grande.\n\n\n\x0E\x01\x09\x04\x1009\x9FFC'est pas parce que tu t'es bien reposé qu'il faut\nfaire le fou et <g<faire des roulades >>dans tous les\nsens.")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf("Salut ! Bienvenue chez moi ! Mets\x2010toi à ton\naise !\n\n\n\x0E\x01\x09\x04\x1011\x80EComment ? Si cette maison est vraiment à\nmoi ?\n\n\n\x0E\x01\x09\x04\x1015\x80ABen, à la base, c'est les rougeauds qui l'ont\nconstruite...<pause14> Mais maintenant qu'ils sont\nplus là, ça pose pas de problème, si ?\n\n\x0E\x01\x09\x04\x1009\x8FFNous, les <b<Mogmas>>, on vit sous terre, alors on a\npas vraiment de maison...\n\n\n\x0E\x01\x09\x04\x1015\x80DEt j'ai toujours eu envie de pouvoir dire\n« chez moi »...")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

