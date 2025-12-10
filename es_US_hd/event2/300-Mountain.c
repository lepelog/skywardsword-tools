          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 1, line: 96 */ "Seguro que tu amiga te está esperando.\n¡No te puedes rendir ahora!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000001>¡Hola, chico! ¡Ya tenía ganas de\nvolver a verte! Quería darte las gracias\npor salvarme la última vez.\n\nPor cierto, ¿has encontrado ya\na tu amiga?\n[1-]Así es[2-]Aún no...")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00110808>¡¿En serio?! Me alegro muchísimo...<pause 20>\n¿Cómo? ¿Dices que todavía está\nen peligro?\n\n<0x10009:0x000908ff>Bah, no te preocupes. Todo saldrá bien,\nya lo verás. ¡No te rindas, muchacho!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x0013100d>Vaya... Espero que esos monstruos\nrojos no la hayan...<pause 20>\n\n\n<0x10009:0x0011080e>Ah, ¿sigue viva? Menos mal...\nPor tu cara, me temía lo peor.\n\n\n<0x10009:0x00090800>Bueno, no te rindas. La esperanza\nes lo último que se pierde. ¡Ánimo!")
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
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00110800>¡Oye, no seas cobarde! ¡No huyas!\n¡Tienes que encargarte de los\nmonstruos!")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00110812>¡Oye, tú, chico! Parece que esos \nmonstruos se han dado cuenta\nde que estás aquí. En cuanto te ven\nse ponen como locos, ¿verdad?\n<0x10009:0x00150d00>Pues nos harías a todos un favor\nsi te libraras de unos cuantos...")
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
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "¡Son ellos otra vez! Han atravesado\nla lava... ¿Cómo es posible?")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "¡Aaah! ¡Ya están aquí!\n\n\n\n¿Eh? Tú no pareces un monstruo rojo.\n<pause 15><0x10009:0x10090807>¿Por qué me asustas así, chico?\n\n\n<0x10009:0x100aff00>Uf, perdona, es que tengo los nervios\nde punta. Últimamente, esos monstruos\nno dejan de invadir nuestro territorio.")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Como salieron de ese agujero de ahí\natrás, lo he inundado de lava para\nevitar que lleguen hasta aquí.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 58 */ "Para nosotros no es ningún problema\nporque podemos ir adonde queramos\nbajo tierra. <0x10009:0x1011080b>¿Verdad que soy listo?")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 0, unk: 0, line: 59 */ "Así que mantente alejado de ese\ntapón de piedras que contiene el\npaso de la lava. ¡Nos vemos!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00150d0c>Mmm...<pause 20> Me pregunto qué comerán\nesos monstruos rojos.")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ah, casi lo olvido. También saldrán\nde vez en cuando unos <color red<monstruos\ngelatinosos rojos >coloroff>que, si te atrapan...\nBueno, mejor no te lo cuento.")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 0, unk: 0, line: 62 */ "¡Oye, vaya susto!...<pause 20> <0x10009:0x00110d00>¡¿Cómo se te\nocurre excavar justo encima de mí?!\n\n\n<0x10009:0x00150809>Je, je... Te entiendo. Cuando empiezo\na cavar, no paro hasta saber qué hay\ndentro del agujero.\n\n<0x10009:0x00ffffff>Puede haber <color red<rupias>coloroff>, <color red<mineral\nde Eldin>coloroff>, <color red<corazones>coloroff>...\n\n\n<0x10009:0x00150d11>Aunque, si te digo la verdad,\núltimamente encuentro menos\ncorazones de los que me gustaría.\n\n<0x10009:0x00ffffff>¡Pero que no te desanime mi mala\nracha! En cuanto veas un agujero,\n¡empieza a cavar!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "¡Rayos, qué susto!...<pause 20> <0x10009:0x00110d00>¡¿Cómo se te\nocurre excavar justo encima de mí?!\n\n\n<0x10009:0x00150809>Je, je... Te entiendo. Cuando empiezo\na cavar, no paro hasta saber qué hay\ndentro del agujero.\n\n<0x10009:0x00ffffff>Puede haber <color red<rupias>coloroff>, <color red<mineral de Eldin>coloroff>,\n<color red<corazones>coloroff>... ¡Siempre es una sorpresa!\n\n\nAsí que ya sabes, en cuanto veas un\nagujero, ¡empieza a cavar!")
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
/*<236>*/ 				printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x000908ff>Y no solo hay cavernas ocultas\nen el subsuelo. En la superficie\ntambién encontrarás paredes frágiles\nque podrás destruir. ¡Fíjate bien!")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00150d10>Ah, así que en efecto había una...\nBuen trabajo, chico verdoso.")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "En esta zona hay muchas paredes\nfinas que ocultan cavernas secretas.")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000001>¡Hola, chico! ¿Cómo estás?\n¿Has venido en busca de tesoros?\n\n\n<0x10009:0x00110800>Supongo que ya lo sabes, pero en el\n<color blue<volcán de Eldin >coloroff>encontrarás por\ntodas partes paredes más finas de\nlo habitual.\n<0x10009:0x000908ff>Detrás se ocultan cavernas que\nencierran valiosos tesoros... ¡aunque\ncasi siempre en forma de <color red<rupias>coloroff>!\nEntre otras cosas, claro...\n<0x10009:0x001108ff>Si en algún momento tienes curiosidad,\n¡desata tu instinto depredador de\ntesoros!")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x0015080c>Mi octavo sentido me dice que por aquí\ntiene que haber alguna...")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>¡Hola, muchacho! ¿Qué tal?\n\n\n\n<0x10009:0x001108ff>Has venido en busca de tesoros, ¿no?\nPues te voy a contar algo genial.\n\n\n<0x10009:0x0009080b>El <color blue<volcán de Eldin >coloroff>está lleno de\ncavernas ocultas por paredes\nfinísimas. Y dicen que en ellas\npuedes encontrar grandes tesoros.\nAunque, por lo que tengo entendido,\n¡lo que más abunda son las <color yellow<rupias>coloroff>!\n\n\n<0x10009:0x0015080c>Mi octavo sentido me dice que por aquí\ntiene que haber alguna...")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0015080b>Unas ruinas misteriosas ocultas\nen las profundidades del volcán...\n¿qué <color blue<cazador de tesoros >coloroff>podría\nresistirse a una tentación así?")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00110801>¡Oye, chico! Estarás cuidando bien\nde mi <color yellow<saco de bombas>coloroff>, ¿no?\n\n\n<0x10009:0x000909ff>Por cierto, ¿has llegado a aventurarte\nen las profundidades del <color blue<volcán\nde Eldin>coloroff>?\n\n<0x10009:0x00150816>Allí hace tanto calor que la ropa comienza\na arder sin que te enteres. Se puede\ndecir que es casi imposible sobrevivir.\n\n<0x10009:0x000909ff>Sin embargo, existe un rumor sobre\nunas increíbles ruinas llenas de\ntesoros. ¿No se te hace la boca agua?\n\n<0x10009:0x0011080b>Para nosotros, llegar hasta allí va a ser\nfacilísimo porque vamos bajo tierra.\nCreo que lo intentaré un día de estos,\na ver qué encuentro.")
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
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Estoy seguro de que la enterraron\npor aquí, pero no la encuentro...")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "¿Seguro que este es el sitio correcto,\n<color blue<Jerry>coloroff>? ¿Y qué es lo que dices que han\nenterrado?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "¡Ya te lo he dicho! ¡Una <color red<llave>coloroff>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	wait_frames(15)
/*<149>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "Rompieron la <color red<llave de esa puerta\n>coloroff>y escondieron los trozos por aquí\ny por allá.\n\nEnterraron uno de los <color red<cinco trozos\n>coloroff>en esta zona, estoy seguro.")
/*<260>*/ 	wait_frames(30)
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "Mmm... Ahora que lo pienso, ¿no viste\nque hace un rato <sound 4>metieron a una <color red<chica\nrubia muy rara >coloroff>ahí dentro?")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x10110d0b>¡Cierto! Seguro que es donde esos\ntruhanes guardan todos sus tesoros...\n\n\n<0x10009:0x10090800>¡Y seguro que a ella la guardarán\ntambién, para comérsela después!\n¡Ese sitio tiene que estar repleto\nde riquezas, seguro!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 70, line: 41 */ "Oye, ¿y qué vamos a hacer cuando\ntengamos todos los fragmentos de\nla llave?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x10110d09>¡¿Tú qué crees?! Colarnos ahí dentro y\nrobarles hasta el último de sus tesoros,\n¡obviamente!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "Y digo yo...<pause 15> Aunque no tengamos\nla llave, siempre podemos cavar\ny entrar por debajo, ¿no?")
/*<262>*/ 	wait_frames(15)
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "...<pause 30>")
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 255, 'param3': 16}
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "...<pause 30>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	wait_frames(30)
/*< 34>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Pero qué listo eres...")
/*<257>*/ 	wait_frames(45)
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	wait_frames(45)
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10005:0x004b0000>Tengo información para el <0x10012:0x0000000b>amo.\nHemos llegado al <color blue<volcán de Eldin>coloroff>,\nen cuyo interior bulle el poder\nde la tierra.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Tengo información para el <0x10012:0x0000000b>amo.\nHe obtenido datos interesantes\ntras la reciente conversación de\nlos <color blue<mogmas>coloroff>.\nLa \"<color red<chica rubia muy rara>coloroff>\" a la que\nhan secuestrado podría ser...\n[1-]¡Zelda![2-]¿La mujer\nde negro?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0, line: 6 */ "<0x10012:0x00000005>Correcto, amo. Calculo que\nlas probabilidades de que se tratara\nde Zelda ascienden al 90%.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "Calculo un 95% de probabilidades\nde que la llave de la puerta esté\nhecha del mismo material que\nesta pieza.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 0, line: 9 */ "En los alrededores pueden percibirse\nobjetos de idéntica composición.\n\n\nLocalizar los fragmentos de la llave\nes fundamental para avanzar en la\nbúsqueda de <color red<Zelda>coloroff>, y por ello los he\nregistrado como objetivos de <color red<rastreo>coloroff>.<sound 4>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 2, line: 7 */ "La probabilidad de que se trate de la\nmujer de negro que vimos antes es\ndel... <0x10008:0x01cd>10%.\n\nConsidero que es a <color red<Zelda >coloroff>a quien\nraptaron.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10005:0x005a0000>Calculo que el 65% de la superficie\ntotal de esta región está cubierto\nde lava y da cobijo a una gran\ncantidad de monstruos.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "Está bien, abre bien esas orejotas\ne intenta recordarlo bien. Junto a\nlas <color green rupee<rupias verdes >coloroff><color red<no hay agujeros\ncon trampa>coloroff>.\nJunto a las <color blue rupee<rupias azules >coloroff>encontrarás\n<color red<uno o dos>coloroff>; junto a las <color red rupee<rupias rojas>coloroff>, <color red<tres\no cuatro>coloroff>...\n\nSi son <color silver<rupias de plata>coloroff>, <color red<cinco o seis>coloroff>,\ny si son <color gold<doradas>coloroff>, <color red<siete u ocho>coloroff>;\nintenta no olvidarlo.\n\nPero, eso sí, no olvides que la suerte\ntambién juega un papel determinante.\n<0x10009:0x00150509>¡A ver qué tal lo haces!")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Ah, ¿has venido a escuchar\nmi valiosísima información?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf(/* textboxtype: 0, unk: 1, line: 73 */ "<color red<<0x10009:0x00ffff00>>coloroff>La increíble información secreta sobre\n<color red<Agujeros y rupias >coloroff>solo te costará\n<color red<20 rupias>coloroff>.\n[1-]Muy bien[2]Olvídalo")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0, line: 66 */ "¡Je, je, je, eres muy listo! Está bien,\npero como es un secreto, ¡no se lo\ndigas a nadie!")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x0011ff00>Al extraer una rupia, puedes calcular\nel número de agujeros contiguos que\ncontienen trampas. Si cavas en uno\nde ellos, finalizará la partida.\n<0x10009:0x00ffff0b>Por ejemplo, si sacas una <color green rupee<rupia\nverde>coloroff>, ¡podrás cavar en <color red<cualquier\nagujero contiguo >coloroff>porque en todos\nhabrá premio!\nSin embargo, junto a una <color blue rupee<rupia azul>coloroff>\nhabrá <color red<uno o dos agujeros con trampa>coloroff>,\n<color red<tres o cuatro>coloroff> para las <color red rupee<rojas>coloroff>, <color red<cinco\no seis >coloroff>para las <color silver<de plata>coloroff>...\nY ojo, <color red<siete u ocho >coloroff>junto a las <color gold<rupias\ndoradas>coloroff>; es decir, casi todos los\nagujeros contiguos tendrán trampa.\nPero dudo que llegues a ver algo así...")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "¿Qué me dices? ¡Ahora todo resulta\nmás fácil, ¿verdad?!\n\n\n<0x10009:0x00ffff09>Eso sí, la fortuna jugará un papel\ndeterminante en muchas ocasiones.\n¡Así que buena suerte!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 0, unk: 0, line: 71 */ "¡Oye! ¡Pero si no tienes suficientes\nrupias!\n\n\n<0x10009:0x00141209>Y aquí no se hacen descuentos. O me\ntraes las <color red<20 rupias>coloroff>, o este mogma no\ndice nada.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Buf... ¡Eres un tacaño!\nPues es una pena, porque aquí podrías\nhacerte rico con algo de suerte.\n\n<0x10009:0x00ffff00>Bueno, tú verás. Si cambias de idea,\nvuelve cuando quieras con <color red<20 rupias>coloroff>.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "¡Oye, tú! ¿Quieres probar suerte\ncon <color red<Agujeros y rupias>coloroff>, el fabuloso\njuego ideado por el gran <color blue<Nabucco>coloroff>?\n\n<0x10009:0x0015080b>Además, por ser tú, te daré\n<color red<información secreta >coloroff>privilegiada.\n¡Te aseguro que te volverás\nasquerosamente rico!\n<0x10009:0x00ffff00>Aunque, claro... eso te costaría\ndi<pause 10>ne<pause 10>ri<pause 10>to.")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x001108ff>Anímate, que además te hago un\nprecio especial... ¡<color red<20 rupias>coloroff>!\n¿Hay trato?\n[1-]¡Sí![2]Olvídalo")
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
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tengo información, <0x10012:0x0000000b>amo. Percibo que,\na partir de aquí, la <color red<temperatura es\nextremadamente elevada>coloroff>.\n\nCon los corazones actuales, el <0x10012:0x00000002>amo no\nla podrá resistir. Aconsejo retroceder\nen el camino.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 0, unk: 2, line: 13 */ "Tengo información, <0x10012:0x0000000b>amo:\n\n\n\nPercibo que, a partir de aquí, <color red<la\ntemperatura es extremadamente\nelevada>coloroff>. Con los corazones actuales,\nel <0x10012:0x00000002>amo no la podrá resistir.\nAdemás, confirmo que el <color red<rastreador>coloroff>\nno detecta nada en esa dirección.\nSe recomienda verificar el camino\ncorrecto antes de continuar.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10005:0x005a0000>La <color red<madera >coloroff>y la <color red<ropa >coloroff>arden con\nfacilidad. Por lo tanto, recomiendo\nextremar las precauciones.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "Creo que iba vestida de negro, pero\naparte de eso no recuerdo nada más.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf(/* textboxtype: 0, unk: 0, line: 74 */ "Vaya, otro más... Eres el segundo\nque pasa hoy por aquí y que no\nse parece a esos monstruos rojos.")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Hace un rato vi entrar por ese agujero\nde ahí a una <color red<mujer muy rara>coloroff>.<sound 4>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "¿Cómo dices? ¿Que a lo mejor es\nla amiga que buscas? ¿Y quieres\nque te cuente qué aspecto tenía?")
/*<349>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x0014120c>Mmm...<pause 30> Me pareció que iba <color red<vestida\nde negro>coloroff>, pero no recuerdo nada más.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 0, unk: 2, line: 4 */ "<0x10005:0x004b0000>En caso de combustión, siempre es\nposible extinguir las llamas con\nmovimientos rápidos, como el\n<color green<ataque rodante >coloroff>y el <color green<ataque giratorio>coloroff>.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "La chica que pasó antes por aquí\nparecía de tu especie.\n\n\nAunque no iba toda vestida de verde\ncomo tú, amigo.")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00110d11>¿Cómo? ¿Dices que no has venido\npor tesoros? ¿Que estás buscando\na alguien?\n\n<0x10009:0x00ffff0e>Entonces puede que conozcas a alguien\nque <color red<pasó corriendo >coloroff>antes por aquí...\n¡Iba rapidísimo!<sound 4>\n\nFue todo tan rápido que no me dio\ntiempo a distinguir casi nada, pero lo\nque sí sé es que no era uno de esos\nmonstruos rojos.\nSiguió por este camino. Yo creo que\naún estás a tiempo de encontrarla.")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Tengo información, <0x10012:0x0000000b>amo. Tras las\nmejoras recientes de la espada,\nconfirmo que ya es posible <color red<rastrear\n>coloroff><color yellow<rupias>coloroff>.\nHe añadido las <color yellow<rupias >coloroff>como objetivo\nde <color red<rastreo>coloroff>.<sound 4> Es probable que resulte\nde gran utilidad en la misión.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 0, unk: 1, line: 55 */ "Lo que más abunda en esta zona son\nunas gemas rojas, azules y verdes\nllamadas <color yellow<rupias>coloroff>. A veces encuentras\nalguna <color red<de plata >coloroff>o incluso <color red<dorada>coloroff>.\nTambién hay otros tesoros, como\nunos <color red<minerales >coloroff>muy duros que\npueden tener <color red<distintas aplicaciones>coloroff>.")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "A los <color blue<mogmas>coloroff> nos encanta buscar\nriquezas por todas partes. Somos\nbásicamente lo que se conoce como\n<color blue<cazadores de tesoros>coloroff>.\nLo que más abunda en esta zona son\nunas gemas rojas, azules y verdes\nllamadas <color yellow<rupias>coloroff>. A veces encuentras\nalguna <color red<de plata >coloroff>o incluso <color red<dorada>coloroff>.\nTambién hay otros tesoros, como\nunos <color red<minerales >coloroff>muy duros que\npueden tener <color red<distintas aplicaciones>coloroff>.\n\nYa que estás aquí, ¿no te parece esta\nuna buena oportunidad para buscar\ntesoros?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00110d11>¿Cómo? ¿Dices que no has venido\npor tesoros? ¿Que estás buscando\na alguien?\n\n<0x10009:0x00ffff0e>Entonces puede que conozcas a alguien\nque <color red<pasó corriendo >coloroff>antes por aquí...\n¡Iba rapidísimo!<sound 4>\n\nFue todo tan rápido que no me dio\ntiempo a distinguir casi nada, pero lo\nque sí sé es que no era uno de esos\nmonstruos rojos.\nSiguió por este camino. Yo creo que\naún estás a tiempo de encontrarla.")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 0, unk: 0, line: 107 */ "Dónde estará mi próximo tesoro...\nPienso seguir excavando como\nun auténtico mogma.")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "Ah, eres tú, muchacho. ¿Conseguiste\nllegar por fin a las ruinas?\n\n\n<0x10009:0x0013100d>Yo me di por vencido y volví a casa,\npero mi amigo se enojó muchísimo...\n\n\n<0x10009:0x000908ff>No dejaba de decirme que solo tenía\nque cavar y que no sería tan difícil.<pause 15>\nTenía razón, claro...")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 0, unk: 1, line: 109 */ "Tesorito lindo, ¿dónde estás?\nJe, je, je... ¡Las aventuras de este\n<color blue<cazador de tesoros >coloroff>no terminarán\njamás!")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10009:0x00110801>Ah, eres tú, muchacho. Estarás sacando\nbuen provecho de mi <color yellow<saco de bombas>coloroff>,\n¿verdad?\n\n<0x10009:0x000908ff>Te lo he dado con todo mi cariño, ¡así\nque espero que lo utilices sabiamente!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "¡Aah! ¡Y ahora un tipo verde!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Hace un segundo pasó corriendo\npor aquí una <color red<mujer de negro>coloroff>\nque parecía de tu misma especie.\n¿Es amiga tuya?<sound 4>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Parece un abismo insalvable, ¿no?\n¡Pues esa mujer saltó y lo pasó sin\ntener que hacer ningún esfuerzo!")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "En serio, ese salto fue increíble...<pause 15>\n¡Qué prodigio!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Más arriba, en la montaña, he visto\na varios de esos monstruos rojos\ntramando alguna fechoría.\n\nPero estoy seguro de que esa mujer\nlogró llegar a la cima del volcán sin\nningún problema.\n\nAy, si tuviera una socia así, encontrar\ntesoros sería pan comido... <0x10009:0x001502ff>¡Tienes que\npresentármela!")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x0000000b>Amo, requiero confirmación sobre\nuna cuestión crucial. Nuestro objetivo\nactual es encontrar a <color red<Zelda>coloroff>.\n\n¿Recuerda el <0x10012:0x0000000b>amo cómo usar\nel <color red<rastreador >coloroff>para seguir su pista?[1-]¡Claro![2-]No...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 0, unk: 2, line: 10 */ "<0x10012:0x00000005>Mis disculpas, amo. Aconsejo entonces\nproseguir con la búsqueda de Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10012:0x00000005>No hay problema, amo. Para comenzar\na usar el <color red<rastreador>coloroff>, basta con\nmantener oprimido (^).<0x10011:0x08cd>\n\nA continuación, el <0x10012:0x00000001>amo debe seleccionar\nel objetivo que desee rastrear y yo lo\nbuscaré con la punta de la espada.\n\nCuanto más cerca se encuentre el objeto\nbuscado, <color red<mayor será la reacción>coloroff>, que se\ntraducirá en una fuerte vibración y un\nsonido de alerta.\nAdemás, mostraré un <color red<cursor con forma\nde flecha >coloroff>que indicará la dirección en\nla que se halla el objetivo.\n\nPor lo tanto, recomiendo seleccionar\na Zelda ahora mismo como objetivo\nde rastreo y reanudar la búsqueda.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 0, unk: 1, line: 115 */ "Zelda está por aquí...<pause 20> Deprisa.")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "Qué rabia... Estos tipos creen que\npueden invadir mi territorio y andar\npor él como si fuera su casa.")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "¡Aaah! ¡¿Quién eres tú?! \n¡No me asustes así!\n\n\n¿Cómo dices? ¿Que estás buscando\na una amiga?<0x10009:0x001412ff> Yo no sé nada, chico.\n\n\n<0x10009:0x00ffffff>Por aquí no ha pasado...<0x1000A:0x000900cd> Quizá subió\npor allí y por eso no la vi.")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Ay...<pause 20> Pero ¿es que nadie va a darles su\nmerecido a esos tipos?")
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
/*<  5>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "¡Muy bien, chico! ¡Nos has salvado!\n\n\n\n<0x10009:0x00ffff0b>Los <color blue<mogmas >coloroff>siempre correspondemos\na gestos altruistas como el tuyo con un\nregalo.\n\n¿Quieres algo en especial?\n[1-]Quiero\navanzar[2-]¡Rupias!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "Ah, claro, ya lo había olvidado.\nEstás buscando a tu amiga, ¿no?\n\n\n<0x10009:0x00090809>Parece que has tenido suerte.\n¡Esto es para ti!")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Con esto podrás llegar ahí arriba\nsin problema.<0x1000A:0x000b00cd> Deberías cavar en\naquel agujero de ahí, chico.")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "Espero que tu amiga no haya sido\ncapturada por esos monstruos rojos...")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "¡¿Pero qué...?! ¡¿Rupias?! ¡¿Eso es\nlo que quieres?! ¡¿Rupias?!\n\n\n<0x10009:0x00151204><0x10008:0xffcd>Entiendo que sea lo que quieres como\nrecompensa, pero... ¿Lo dices en serio?\n<pause 20>Además, no tengo ninguna rupia...\n\n<0x10009:0x001412ff>Mira, mejor te doy otra cosa.\nA ver, dónde lo he puesto...<pause 15>\nVaya, parece que lo he perdido.\n\n<0x10009:0x00110809>Ah, aquí está. ¿No decías que estabas\nbuscando a tu amiga? Pues entonces\nesto te vendrá mucho mejor.")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Con esto podrás llegar ahí arriba\nsin problema.<0x1000A:0x000b00cd> Deberías cavar en\naquel agujero de ahí, chico.")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10008:0xffcd>De todas formas, yo ya no los uso... ¡y son\nmuchísimo mejores que unas simples rupias!")
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
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "¡Por todas las madrigueras,<pause 15>\nsi te has deshecho de todos!...<pause 15>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "¡Espero que encuentres a tu amiga\nsana y salva!")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Cuando el <color red<monstruo del gorro azul>coloroff>\ntoca el cuerno, llegan los refuerzos.\nNo sé qué podrías hacer para evitarlo...")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x00110809>Mira, tú has sido quien ha hecho que\nse enfaden, así que te corresponde\nponerle remedio a la situación.\n\n<0x10009:0x00ffffff>Recuerda; en cuanto empiezan a\nquedar menos de ellos, su líder <color red<hace\nsonar un cuerno>coloroff>, y entonces llegan\nlos refuerzos.\nEl <sound 4>líder es el del <color red<gorro azul>coloroff>. ¡Que no\nse te olvide!")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0011080e>¡¿En serio?! ¿Seguro que vas a poder\ncon esos monstruos?\n\n\n<0x10009:0x00151200>Bueno, ya se han dado cuenta de que\nestás aquí, así que no tienes más\nremedio que hacerles frente.\n\n<0x10009:0x00ffff00>Pero cuidado, cuando empiezan a\nquedar menos, uno de ellos <color red<pide ayuda\nhaciendo sonar un cuerno>coloroff>... y los\nrefuerzos llegan enseguida.\n¡Me parece muy injusto! Creo que el\nque da la voz de alarma es su líder,\nun <sound 4><color red<monstruo con un gorro azul>coloroff>.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Oye, ¿tú no podrías encargarte\nde ellos?\n\n\n<0x10009:0x00141209>Aunque no creo que seas capaz\nde hacerlo...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "Escucha, chico... Puedes oprimir (A)\npara <color green<levantar y soltar >coloroff>las <color yellow<flores bomba>coloroff>.\n\n\nCuando estés sujetando algún objeto,\npodrás lanzarlo o hacerlo rodar.\n\n\nSi se te olvida cómo hacerlo, recoge algo\ny oprime <icon 19> para acceder a <color red<Ayuda>coloroff>.\nFácil, ¿no?<0x10011:0x0bcd>\n\nPor esa zona hay muchas <color yellow<flores bomba>coloroff>.\n¡Practica!")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00150d11>Oye... ¿Te has dado cuenta de que\nno tienes un <color yellow<saco de bombas>coloroff>?\n\n\n<0x10009:0x00110dff>Pues sin <color yellow<saco de bombas >coloroff>no puedes\ntomar las <color yellow<flores bomba >coloroff>y guardártelas.\n¡Todos los <color blue<mogmas >coloroff>tenemos uno!\n\n<0x10009:0x00ffffff>¿Eh?<pause 20> ¿Qué pasa? ¿Por qué me miras\ncon esa cara?\n\n\n<0x10009:0x00141209>Ah, ni lo sueñes. Por mucho que te\nempeñes, no pienso darte el mío.\n¡Tendrás que conformarte con explotar\nlas rocas que haya en los alrededores!")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00150d11>¿Mmm? ¿Quién eres tú? Tu cara no\nme es familiar, amigo...\n\n\n¡Ah! <0x10009:0x00110d12>Por casualidad, no serás amigo\nde esos monstruos rojos, ¡¿verdad?!\n[1-]¡Claro que no![2-]¿Monstruos?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00ffff07>Así que no eres uno de ellos...<pause 15> Ahora\nque te observo de cerca, es cierto que\nno te pareces en nada a ellos, chico.\n\n<0x10009:0x0015ff00>¿Y qué estás haciendo aquí?\n¿Has venido por las <color yellow<flores bomba>coloroff>?\n[1-]¿Qué es eso?[2-]Así es")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00ffff00>¿Cómo? ¿Que tampoco sabes lo que es\nuna <color yellow<flor bomba>coloroff>? <0x1000A:0x001100cd>Pues mira, allí mismo\ntienes unas cuantas.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 0, unk: 0, line: 83 */ "En cuanto las arrancas con (A),\nse encienden y explotan unos segundos\ndespués. Son unas flores bastante\npeligrosas, muchacho.\n<0x10009:0x0011080b>Pero una vez que sabes cómo usarlas,\nresultan unas armas muy efectivas.\n¡Los <color blue<mogmas >coloroff>las adoramos!\n\n<0x10009:0x00ffffff>Además, también se pueden <color green<lanzar y\nhacer rodar >coloroff>como si fueran cántaros.\n¿Por qué no pruebas con una de las\n<color red<flores bomba>coloroff> de ahí?\n<0x10006:0xffcd>¿Eh?<pause 15><0x10006:0x00cd> <0x10009:0x00110d11>Un momento... Sabes cómo\n<color green<lanzar y hacer rodar objetos>coloroff>, ¿no?\n[1-]Claro[2-]No sé...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00090809>¡No esperaba menos de ti! Es sencillo:\n<color green<levanta objetos >coloroff>para lanzarlos.\n\n\nSi, por el contrario, los <color green<bajas>coloroff>, podrás\nhacer que rueden. Tiene sentido, ¿no?")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00141215>¿Cómo? ¿Lo dices en serio?<pause 15>\nBueno, tendré que darte una lección\nimprovisada.\n\n<0x10009:0x000908ff>A ver... Primero sujeta la<color yellow< flor bomba\n>coloroff>y <color green<levántala>coloroff>. Hasta aquí bien, ¿no?\n\n\nCuando aparezca el indicador de\ndirección, utilízalo para apuntar\ny <color green<da una sacudida hacia abajo >coloroff>para\nlanzar la bomba.\nSi, por el contrario, <color green<bajas la bomba>coloroff>\ny la <color green<lanzas >coloroff>cuando aparezca el indicador,\n¡la bomba saldrá disparada rodando!\n\n<0x10009:0x001108ff>Lanzando bombas, además, podrás llegar\na <color red<lugares elevados>coloroff>. Y haciéndolas rodar\npodrás colarlas por <color red<lugares estrechos y\nlejanos>coloroff>. ¡Practica!")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x0011020b>¡Perfecto! Pues estás de suerte,\nporque las que hay por esta zona\nson especialmente potentes.\n\n<0x10009:0x00ffffff><0x1000A:0x001100cd>Mira, por allí hay algunas.\nArranca todas las que quieras.")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 0, unk: 1, line: 85 */ "Supongo que ya lo sabrás, pero al\noprimir (A) para arrancar una flor,\nesta se prenderá en el acto y poco\ndespués explotará.\nAun así, te dará tiempo de <color green<lanzarlas\ny hacerlas rodar >coloroff>como si fueran\ncántaros. ¡Practica siempre que\npuedas!\n<0x10006:0xffcd>¿Eh?<pause 15><0x10006:0x00cd> <0x10009:0x00110d11>Un momento... Sabes cómo\n<color green<lanzar objetos rodando>coloroff>, ¿no?\n[1-]Claro[2-]No sé...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00ffff00>¿Acaso no has visto a ninguno de esos\ntipos con sus gigantescas armas?\nÚltimamente están por todas partes.\n\n<0x10009:0x0015ff07>Pero bueno, supongo que el hecho\nde que no los conozcas prueba que\nno eres de los suyos...\n\n¿Y qué estás haciendo aquí?\n¿Has venido por las <color yellow<flores bomba>coloroff>?\n[1-]¿Qué es eso?[2-]Así es")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "¡Eh, eh, tú! No creas que vamos\na consentir que sigan invadiendo\nnuestro territ... ¡¿eh?!")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Vaya, este es distinto...<pause 15> ¡Oye, <color blue<Jerry>coloroff>!\n¿Tú crees que este tipo es uno de esos\nmonstruos rojos?")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00010800>No lo tengo claro... ¡Pero el susto que\nnos ha dado es para meterlo en una\njaula y tirar la llave al río!\n\n<0x10009:0x00110d01>Perdón, perdón... Es que vivimos\nen una situación de estrés crónico\ncon tanta invasión de monstruos.\n\n<0x10009:0x00150800>¡Como los vuelva a ver, se van a enterar\nde quién es <color blue<Jerry>coloroff>! ¡Les dejaré adoloridas\nhasta las encías!")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10008:0xffcd>Claro, claro, claro... Y eso lo dice el osado\nmogma que estaba agazapado en su agujero\nhace un momento.")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Oye, amigo, si tú también has pensado\nbuscar tesoros por esta zona, más te\nvale tener cuidado con esos horribles\nmonstruos rojos.")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "Tengo información, <0x10012:0x0000000b>amo. Percibo que,\na partir de aquí, <color red<la temperatura es\nextremadamente elevada>coloroff>.\n\nCalculo un 95% de probabilidades\nde que las ropas del <0x10012:0x00000001>amo ardan\nen estas circunstancias, por lo que\nrecomiendo extremar el cuidado.\nExiste la posibilidad de atravesar\nla zona <color green<a la carrera>coloroff>, pero sería\naconsejable comprobar antes con\nel <color red<rastreador >coloroff>la dirección correcta.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x00000002>Tú, el elegido de la Diosa...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 0, unk: 0, line: 92 */ "Recuerda lo que te he dicho: nada de\n<color green<rodar y dar golpes>coloroff> por todos lados,\n¿entendido? ¡Podrías levantar polvo!")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 0, unk: 1, line: 91 */ "¿Otra vez tú por aquí? Por mí no\nte preocupes, ¿eh? Estás en tu casa.\n\n\n<0x10009:0x10110d0e>¿Cómo? ¿Dices que no te gusta\nque salga así de la tierra? No seas así...\n\n\n<0x10009:0x10150809>¿Es que no tiene uno derecho\na preocuparse por su casa?\nPor muy pequeña que sea, es\nvieja y necesita cuidados.\n<0x10009:0x100909ff>Y, oye, quería decirte una cosa...\nQue tengas mucha energía y ganas\nde gastarla no significa que puedas\n<color green<rodar >coloroff>donde te plazca, ¿eh?")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "¡Bienvenido a mi morada! ¡Pasa, pasa!\n\n\n\n<0x10009:0x1011080e>¿Cómo? ¿Dices que no crees que esta\nsea mi casa?\n\n\n<0x10009:0x1015080a>Bueno, en realidad la construyeron\nesos monstruos rojos...<pause 20> ¡Pero ya se\nhan ido! ¿Qué tiene de malo ocuparla?\n\n<0x10009:0x100908ff>Los <color blue<mogmas>coloroff> solemos vivir bajo tierra,\nasí que tenía curiosidad por saber\nqué se sentiría ser el propietario\nde una casa de verdad.\n<0x10009:0x1015080d>¡Y siempre he querido decir lo de\n\"Bienvenido a mi morada\"!")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

