          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00434500>¡¿Pero qué...?! ¡No puede ser!\n¡Hemos fallado! Si no apuntamos\nbien, estamos perdiendo el tiempo.\n\n<0x10009:0x00414000>Pues nada, habrá que cargar otra\nbomba. Mientras esperas a mi señal,\n¡dale duro al bicho ese!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10009:0x00000001>Creo que seguiré investigando un poco\nmás acerca de las estatuas.")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00080b07>Según he leído en unos viejos escritos,\nmás allá de los cielos existe un lugar\nconocido como la <color red<isla de la Diosa>coloroff>.\n\nY, por lo visto, estas antiguas estatuas\nde piedra permitían viajar hasta allí.\n\n\nEsta, en concreto, parece distinta a\nlas demás. Si no me equivoco, debe\nde ser la que <color red<activa >coloroff>al resto.\n\n<0x10009:0x00161900>Puede que parezca un cuento de hadas,\npero yo creo que es verdad.\n\n\n<0x10009:0x00000b04>Si no lo fuera, ¿por qué razón hay\ntantas estatuas como esta repartidas\npor todo el mundo?\n")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181700>Te ha picado el gusanillo, ¿verdad?\n¿Quieres que te cuente más?\n[1-]Sí[2]No")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 0, unk: 2, line: 61 */ "<0x10009:0x00151902>¡Anda! ¿Tú también eres un aficionado\na las antiguas leyendas?\n\n\n<0x10009:0x00160b00>Bien, pues escucha con atención.\n\n\n\nSe cuenta que los habitantes de la isla\nde la Diosa montan sobre unas enormes\nbestias aladas que jamás se han visto\nen esta tierra.\n<0x10009:0x00001e00>La paz reina en toda la isla y sus\nhabitantes adoran con fervor a\nla Diosa.\n\n<0x10009:0x00000b00>Dicen, además, que su civilización es\nmucho más avanzada que la nuestra.")
/*<426>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00080b00>¡Pero espera, que me he reservado\nlo mejor para el final!\n\n\n<0x10009:0x001f1e00>Como la isla es creación de la Diosa,\nestá plagada de maravillas con las que\nsolo podemos soñar en esta parte del\nmundo.\n<0x10009:0x00001908>¡Todos los edificios son de oro!\n¡El agua sagrada brota sin cesar de\nsus manantiales y otorga la eterna\njuventud!\n<0x10009:0x00000b00>¡Los árboles dan frutos capaces de\ncurar enfermedades, las calabazas\nde los huertos nunca se pudren, y\nlas flores jamás pierden su color!\n<0x10009:0x00171900>Y por si fuera poco, el clima siempre es\nagradable. Nadie pasa frío ni calor.\n¡Es como si vivieran en una primavera\neterna!\n<0x10009:0x00000b05><0x10008:0x01cd>¡¿No te parece increíble?!\n\n\n\n<0x10009:0x00211806><0x10008:0x02cd>¿Quieres que te cuente\naún más cosas?\n\n\n<0x10008:0x01cd>¿Qué me dices?\n[1-]Sí[2]No")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00271956>¡Por Goron! Ya veo que la historia de\nla isla de la Diosa te ha calado hondo...\nSin embargo, me temo que vamos a\ntener que dejarlo por hoy.\n<0x10009:0x00161e00>Me gustaría contarte más cosas, pero\npara eso tengo que seguir investigando.\n\n\n<0x10009:0x00000b00>Ya volveremos a hablar la próxima vez\nque nos encontremos.")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>Entiendo. Pues nada, cuando quieras\nsaber algo más, ya sabes dónde estoy.")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>Entiendo. Pues nada, cuando quieras\nsaber algo más, ya sabes dónde estoy.")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 0, unk: 11, line: 53 */ "<0x10009:0x00000008>¡Gracias por ayudarme!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080b0a>¿Qué eran esos monstruos rojos?\nJamás pensé que me encontraría\ncon algo así en este bosque...\n\n<0x10009:0x00161e00>Por cierto, eres el segundo de tu\nespecie con el que me topo hoy.\nÚltimamente me pasan unas cosas\nmuy raras...\n<0x10009:0x00000b00>Pero bueno, supongo que debo darte las\ngracias por lo de los monstruos, así que\ncompartiré contigo cierta información\na modo de recompensa.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf(/* textboxtype: 11, unk: 1, line: 55 */ "<0x10009:0x00080b01>Me llamo <color blue<Marcogoro>coloroff>, y soy un goron\nque se dedica principalmente a\ninvestigar el pasado.\n\n<0x10009:0x00001700>Según he leído en unos viejos escritos,\nmás allá de los cielos existe un lugar\nconocido como la <color red<isla de la Diosa>coloroff>.\n\n<0x10009:0x00000b00>Por lo visto, estas <color blue<antiguas estatuas>coloroff>\nde piedra marcaban los lugares desde\nlos que se podía <color red<ascender al cielo>coloroff>... y\ntambién los puntos de aterrizaje.\n<sound 4>Te aconsejo que <color red<examines todas las que\nencuentres>coloroff>. ¡Cuantas más referencias\ntengas en el mapa, más sencillo te\nresultará viajar!\nDicen que esta estatua, en concreto,\nes especial porque es la que <color red<despertará>coloroff>\na las demás de su letargo.\n\n<0x10009:0x00161907>Puede que parezca un cuento de hadas,\npero yo creo que es verdad.\n\n\nSi no lo fuera, ¿por qué razón hay\ntantas estatuas como esta repartidas\npor todo el mundo?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 11, unk: 1, line: 52 */ "<0x10009:0x00000b52>¡Po... por Goron!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x18000b52>¡Dejadme en paz, malditos!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 6, line: 11 */ "<0x10005:0x00320000><0x10012:0x00000004>Amo <heroname>...")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 2, unk: 0, line: 66 */ "<0x10009:0x00151b09><0x10008:0x01cd>¡Uaaah!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "¡Ya estás encima! Me gustaría ayudarte,\n¡pero no sé cómo!")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10005:0x004b0000>Nos encontramos en las <color blue<tierras\ninferiores>coloroff>, un lugar que, para los\nhabitantes de Altárea, existe solo\nen las leyendas.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	wait_frames(30)
/*<444>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>¡Eooo! ¡Aquí, <heroname>!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Je, je, je... ¡abre bien los ojos y alucina\ncon el arma secreta del asombroso\nMalton!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Te presento... ¡la <color red<supercatapulta>coloroff>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Te has quedado sin habla, ¿eh? ¡Ni\nte imaginas lo que me ha costado\nconstruir esta maravilla!")
/*<462>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "¡Contémplala en todo su esplendor!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>¡Yo solito quité de en medio todos los\nobstáculos y planté los raíles para\npoder moverla! ¡¿No es increíble?!\n\n¡Hasta yo me sorprendo conmigo\nmismo!<pause 30> Sabía que mi talento era\ninconmensurable, pero tanto...\n\n<0x10009:0x28414000>Con esta máquina vamos a hacer\npicadillo a esa bestia, ¡ya lo verás!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>¡Un buen bombazo dejará a ese\nestúpido monstruo atontado un rato!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Aunque tengo que reconocer que\nse ha despertado un poco antes de\nlo que esperaba...")
/*<451>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>¡Y aún me quedan unos ajustes por\nhacerle a mi catapulta!\n\n\nTe avisaré en cuanto la tenga a punto,\n¿vale? Mientras tanto, ¡dale duro!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 2, line: 6 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 2, line: 13 */ "<0x10005:0x004b0000>A esta zona en concreto se la conoce\ncomo la <color blue<tierra del presidio>coloroff>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10006:0xfdcd>Tú...\n\n\n\n<0x10006:0xfdcd>El hijo del destino caído del cielo...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>¡El sello se ha roto!\n\n\n\n¡Pero mejor será que dejemos las\nexplicaciones para más tarde!\n\n\n¡Por el momento, limítate a evitar\nque escape del agujero!\n\n\n¡Y no permitas que se acerque\nal templo!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>¡Ahora, <heroname>!<pause 30>\n\n\n\n¡Golpea el pilar con el <color red<rayo celestial>coloroff>!\n\n\n\n<0x10009:0x00111700>¡Tienes que darte prisa!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	wait_frames(30)
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	wait_frames(10)
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	wait_frames(60)
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	wait_frames(10)
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf(/* textboxtype: 0, unk: 11, line: 119 */ "<0x10009:0x28000053>¡Uaaah!<0x10005:0x001e0000>")
/*<254>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>Pufff, la cosa empieza a complicarse...<0x10005:0x001e0000>")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>¡Tranquilo, que no cunda el pánico!\n\n\n\n<0x10009:0x28410000>¡Todavía tenemos mi <color red<supercatapulta>coloroff>!\n¡Y ya has visto lo que es capaz de hacer!")
/*<256>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>¡Mientras cuente con un arma así,\nla palabra derrota no forma parte\nde mi diccionario!\n\n<0x10009:0x28000200>¡Es mi destino, y pienso grabarlo con\nletras de oro en los anales de la\nhistoria!")
/*<257>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200>¡<heroname>, procura no estorbar!\n¡Tengo una misión que cumplir!")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 419, 'param3': 42}
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "<0x10006:0xfdcd>Eleva la espada de la Diosa hacia\nel cielo...\n\n\n<pause 15><0x10006:0xfdcd>Y libera su poder para extirpar el mal\nque nos acecha.")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "¡<heroname>, el monstruo lleva\nincrustado en la cabeza el <color red<pilar\ndel sello>coloroff>!\n\n<0x10009:0x0e000013>¡Usa la espada para empujarlo hasta\nel fondo, a ver qué pasa!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x004b0000>Aconsejo prudencia, <0x10012:0x0000000b>amo.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "Tengo información importante, <0x10012:0x00000001>amo.")
/*<482>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Por las marcas que muestra, infiero\nque la puerta se ha abierto hace\npoco, pero una intensa energía la\nmantiene sellada.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 76, line: 86 */ "<0x10009:0x00000026>¡Así se hace, <heroname>!\nMe debes una, ¿eh?\n\n\n¡Y ahora hay que activar ese Portal del\nTiempo o como se llame! ¡Yo me voy\nadelantando!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Tengo información, <0x10012:0x0000000b>amo. El monstruo\nlleva el <color red<pilar del sello >coloroff>clavado en la\ncabeza.\n\nEs imperativo volver a encerrar a la\nbestia antes de abandonar la zona.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "Tengo información,<0x10012:0x0000000b> amo. La prioridad\nen este momento es volver a apresar al\nmonstruo en el sello.\n\nMientras este objetivo no se cumpla,\nel <0x10012:0x00000002>amo no podrá abandonar la zona.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Tengo información, <0x10012:0x0000000b>amo. El monstruo\nlleva el <color red<pilar del sello >coloroff>clavado en la\ncabeza.\n\nEs imperativo volver a encerrar a la\nbestia antes de abandonar la zona.")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x003e4515><0x10008:0x01cd>¡Aaaah!\n\n\n\n<0x10009:0x00004000>¡Ahí va! ¡El camino ha quedado\nbloqueado tras el temblor y ya no\npuedo llegar a las bombas!...\n¡¿Qué hago?!\n<0x10008:0x01cd>(!)")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 0, unk: 2, line: 67 */ "<0x10009:0x00131907>¡¿Co... cómo has hecho eso?!\n¿Ha sido magia?\n\n\n<0x10009:0x00171b08>¡La estatua ha reaccionado cuando\nte has acercado a ella! ¡Es increíble!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00444300>Le hemos dado, sí, pero un poco\na destiempo... ¡Creo que hemos\ntardado demasiado!\n\n<0x10009:0x00004000>Pues nada, habrá que cargar otra\nbomba. Mientras esperas a mi señal,\n¡dale duro al bicho ese!")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 76, unk: 1, line: 88 */ "<0x10009:0x00203010>Arf, aaarf... <heroname>, creí\nque esta vez no lo contábamos,\n¡pero al final todo ha salido bien!\n\n<0x10009:0x00420200>¡Yo voy para el templo; nos vemos allí!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x003e4026>¡Date prisa, <heroname>!\n¡Tienes que <color red<subir hasta aquí >coloroff>por el\nlateral del templo!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0020403c>¡Bien, ya estás subido en la <color blue<catapulta>coloroff>!\n¡Apunta hacia el pilar que lleva el bicho\nen la cabeza y vuela!")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 369, 'param3': 32}
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 260, 'next': 403, 'param3': 15}
/*<403>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 402, 'param3': 13}
/*<402>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 4, 'next': 483, 'param3': 14}
/*<483>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 404, 'param3': 17}
/*<404>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 521, 'param3': 17}
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 132, 'param3': 13}
/*<132>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "¡<heroname>! ¡Es horrible, es\nhorrible! ¡El monstruo está a punto\nde despertarse otra vez!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "¡Ah, espera un momento! Tengo que\nprepararlo todo.")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>¡Eooo! ¡Aquí, <heroname>!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	wait_frames(45)
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Je, je, je... ¡abre bien los ojos y alucina\ncon el arma secreta del asombroso\nMalton!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Te presento... ¡la <color red<supercatapulta>coloroff>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Te has quedado sin habla, ¿eh? ¡Ni\nte imaginas lo que me ha costado\nconstruir esta maravilla!")
/*<361>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "¡Contémplala en todo su esplendor!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>¡Yo solito quité de en medio todos los\nobstáculos y planté los raíles para\npoder moverla! ¡¿No es increíble?!\n\n¡Hasta yo me sorprendo conmigo\nmismo!<pause 30> Sabía que mi talento era\ninconmensurable, pero tanto...\n\n<0x10009:0x28414000>Con esta máquina vamos a hacer\npicadillo a esa bestia, ¡ya lo verás!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>¡Un buen bombazo dejará a ese\nestúpido monstruo atontado un rato!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Aunque tengo que reconocer que\nse ha despertado un poco antes de\nlo que esperaba...")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>¡Y aún me quedan unos ajustes por\nhacerle a mi catapulta!\n\n\nTe avisaré en cuanto la tenga a punto,\n¿vale? Mientras tanto, ¡dale duro!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 0, unk: 11, line: 128 */ "<0x10012:0x0000000b>Amo, tengo información importante.\nLa prioridad actual es encerrar al\nmonstruo en el sello. Esta tarea no\npuede postergarse.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 244, 'param3': 32}
/*<244>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 245, 'param3': 16}
/*<245>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>¡Eooo! ¡Aquí, <heroname>!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	wait_frames(30)
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Je, je, je... ¡abre bien los ojos y alucina\ncon el arma secreta del asombroso\nMalton!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	wait_frames(15)
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Te presento... ¡la <color red<supercatapulta>coloroff>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Te has quedado sin habla, ¿eh? ¡Ni\nte imaginas lo que me ha costado\nconstruir esta maravilla!")
/*<363>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "¡Contémplala en todo su esplendor!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>¡Yo solito quité de en medio todos los\nobstáculos y planté los raíles para\npoder moverla! ¡¿No es increíble?!\n\n¡Hasta yo me sorprendo conmigo\nmismo!<pause 30> Sabía que mi talento era\ninconmensurable, pero tanto...\n\n<0x10009:0x28414000>Con esta máquina vamos a hacer\npicadillo a esa bestia, ¡ya lo verás!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>¡Un buen bombazo dejará a ese\nestúpido monstruo atontado un rato!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Aunque tengo que reconocer que\nse ha despertado un poco antes de\nlo que esperaba...")
/*<252>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>¡Y aún me quedan unos ajustes por\nhacerle a mi catapulta!\n\n\nTe avisaré en cuanto la tenga a punto,\n¿vale? Mientras tanto, ¡dale duro!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 2, unk: 0, line: 60 */ "<0x10009:0x00171b08>¡La estatua ha reaccionado!\n¡Tú sabes algo, seguro!")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00151b05><0x10008:0x01cd>¡Por Goron!")
/*<357>*/ 		printf(/* textboxtype: 0, unk: 6, line: 59 */ "<0x10009:0x00131909>¡Eres una caja de sorpresas!\n\n\n\n<0x10009:0x00171b08>¡¿Cómo has hecho eso?! ¡La estatua\nha reaccionado! Tú sabes algo que no\nme has contado, ¿verdad? Confiesa...")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000026>¡Juo, juo, juo! ¡¿Y ahora le han salido\nbrazos?! ¡Lo que faltaba!\n\n\nMejor. ¡Así quedará más claro el\nincreíble poder de mi supercatapulta!\n\n\n<0x10009:0x00424000>¡Te haré una señal en cuanto lo tenga\ntodo listo! ¡Tú dale duro mientras\ntanto!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 6, unk: 1, line: 43 */ "Tengo información importante para\nel<0x10012:0x0000000b> amo. La bestia ha vuelto a despertar,\npor lo que en este momento no es\nposible escapar.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 0, unk: 6, line: 44 */ "<0x10012:0x0000000b>Amo, un aviso importante: la prioridad\nen este momento es volver a encerrar\na la bestia en el sello.\n\nEl <0x10012:0x00000002>amo no podrá abandonar esta zona\nhasta haber cumplido la misión.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 6, unk: 1, line: 43 */ "Tengo información importante para\nel<0x10012:0x0000000b> amo. La bestia ha vuelto a despertar,\npor lo que en este momento no es\nposible escapar.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	wait_frames(45)
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	wait_frames(30)
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>Pufff, la cosa empieza a complicarse...<0x10005:0x001e0000>")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>¡Tranquilo, que no cunda el pánico!\n\n\n\n<0x10009:0x28410000>¡Todavía tenemos mi <color red<supercatapulta>coloroff>!\n¡Y ya has visto lo que es capaz de hacer!")
/*<237>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>¡Mientras cuente con un arma así,\nla palabra derrota no forma parte\nde mi diccionario!\n\n<0x10009:0x28000200>¡Es mi destino, y pienso grabarlo con\nletras de oro en los anales de la\nhistoria!")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200>¡<heroname>, procura no estorbar!\n¡Tengo una misión que cumplir!")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 100, 'param3': 46}
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026>¡Ojo, <heroname>, ya no nos\nquedan más bombas!\n\n\n<0x10009:0x00204000>¡Vas a tener que lanzarte directamente\nsobre su cabeza! ¡Deprisa, súbete!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>¡Usa mi <color red<supercatapulta >coloroff>cuando quieras!\n\n\n\n¡Para preparar el disparo, pulsa <icon 30>!<0x10011:0x10cd>\n\n\n\nPuedes mover la catapulta con (ControlStick)\ny apuntar. Luego solo hay que lanzar\nla bomba y... ¡catapum!")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>¡Por lo visto, mi <color red<supercatapulta >coloroff>vuelve\na ser necesaria!\n\n\nSeguro que no hace falta que lo repita,\npero cuando la tenga a punto te haré\nuna señal con <icon 30>.<0x10011:0x10cd>\n\n<0x10009:0x00424000>¡Entre los dos nos cargamos a ese\nmaldito monstruo, ya verás!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>¡Usa mi <color red<supercatapulta >coloroff>cuando quieras!\n\n\n\n¡Para preparar el disparo, pulsa <icon 30>!<0x10011:0x10cd>\n\n\n\nPuedes mover la catapulta con (ControlStick)\ny apuntar. Luego solo hay que lanzar\nla bomba y... ¡catapum!")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>¡Por fin ha llegado el momento de\ndemostrar las virtudes de mi\n<color red<supercatapulta >coloroff>secreta!\n\n<0x10009:0x00000300>En cuanto esté lista, ¡te haré una señal\ncon <icon 30>! <0x10009:0x00004000>¡Tú dale duro mientras tanto!<0x10011:0x10cd>")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf(/* textboxtype: 76, unk: 1, line: 100 */ "<0x10009:0x00000026>¿Y bien? ¿Adónde te mando?\n\n\n\n[1-]Juegos de\nCeléstea[2-]Juegos de\ntierras inferiores[3]Olvídalo")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 0, unk: 76, line: 101 */ "¿A la zona de juegos de Celéstea?\n¿A qué lugar exactamente?\n\n[1-]Isla\nFortuna[2-]Insectia[3-]Otro")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf(/* textboxtype: 1, unk: 2, line: 105 */ "<0x10009:0x00420342>¡Muy bien, allá vamos! ¡Agárrate bien!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 0, line: 102 */ "¿A qué quieres jugar?\n[1-]Mil pedazos\nde bambú[2-]Tiro a la\ncalabaza[3]Olvídalo")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												zone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												zone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf(/* textboxtype: 11, unk: 1, line: 106 */ "Si cambias de opinión, ¡ya sabes dónde\nestoy!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 6, unk: 1, line: 103 */ "¿A la zona de juegos de Celéstea?\n¿A qué lugar exactamente?\n[1-]Isla\nFortuna[2-]Insectia[3-]Isla Bambú[4]Olvídalo")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf(/* textboxtype: 0, unk: 6, line: 104 */ "Así que a la zona de juegos de las\ntierras inferiores... ¿A qué lugar\nexactamente?\n[1-]Duelo\natronador[2-]Hoyos\ny rupias[3-]Montaña\nrusa[4]Olvídalo")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										zone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										zone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										zone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf(/* textboxtype: 2, unk: 11, line: 107 */ "<0x10009:0x00000004>¡Hola, <heroname>!\n\n\n\n¡He venido a ayudarte! No te vendrá\nmal que el gran Malton te eche una\nmanita, ¿verdad?")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 0, unk: 76, line: 98 */ "Puedes usar la catapulta para llegar\nvolando a otros lugares.")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0, line: 99 */ "¿Adónde te gustaría ir? Seguro que\nte lo pasas bomba viajando así.\n\n\n¡Tiene que haber muchos sitios que\nno hayas explorado aún!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 76, unk: 1, line: 97 */ "<0x10009:0x00000004>Oye, <heroname>, ¿sabes que\npuedes usar la catapulta para llegar\nvolando a otros lugares?")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000003>Así que te diriges al bosque de Farone,\n¿verdad?\n\n\n¡Pues puedo usar mi <color red<supercatapulta\n>coloroff>para mandarte allí en un periquete!\n[1-]Gracias[2]Olvídalo")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 0, unk: 76, line: 92 */ "<0x10009:0x00000042>¡Déjaselo al gran Malton!")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 76, unk: 1, line: 91 */ "¡Si cambias de idea, ya sabes dónde\nestoy!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 0, unk: 76, line: 89 */ "<0x10009:0x00000026>¡Toma! El gran Malton ha vuelto\na arreglar el desaguisado. ¡Ya puedes\nencerrar de nuevo a ese monstruo!")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026>¡Ojo, <heroname>, ya no nos\nquedan más bombas!\n\n\n<0x10009:0x00204000>¡Vas a tener que lanzarte directamente\nsobre su cabeza! ¡Deprisa, súbete!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>¡Usa mi <color red<supercatapulta >coloroff>cuando quieras!\n\n\n\n¡Para preparar el disparo, pulsa <icon 30>!<0x10011:0x10cd>\n\n\n\nPuedes mover la catapulta con (ControlStick)\ny apuntar. Luego solo hay que lanzar\nla bomba y... ¡catapum!")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>¡Por lo visto, mi <color red<supercatapulta >coloroff>vuelve\na ser necesaria!\n\n\nSeguro que no hace falta que lo repita,\npero cuando la tenga a punto te haré\nuna señal con <icon 30>.<0x10011:0x10cd>\n\n<0x10009:0x00424000>¡Entre los dos nos cargamos a ese\nmaldito monstruo, ya verás!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000026>¡Todo ha sido gracias a mí!<pause 30> ¡Ahora ya\npuedes encerrar de nuevo al monstruo!\n\n\nLa última vez golpeaste el pilar con el\nrayo de luz de tu espada, ¿no?")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>¡Usa mi <color red<supercatapulta >coloroff>cuando quieras!\n\n\n\n¡Para preparar el disparo, pulsa <icon 30>!<0x10011:0x10cd>\n\n\n\nPuedes mover la catapulta con (ControlStick)\ny apuntar. Luego solo hay que lanzar\nla bomba y... ¡catapum!")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>¡Por fin ha llegado el momento de\ndemostrar las virtudes de mi\n<color red<supercatapulta >coloroff>secreta!\n\n<0x10009:0x00000300>En cuanto esté lista, ¡te haré una señal\ncon <icon 30>! <0x10009:0x00004000>¡Tú dale duro mientras tanto!<0x10011:0x10cd>")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 77 */ "<0x10009:0x00000026>¡La anciana dice que es posible que\nese pedazo de monstruo despierte\nde nuevo!\n\n<0x10009:0x00004200>Como soy muy precavido, he inventado\nun arma secreta para enfrentarme a él.\n\n\n<0x10009:0x0000000f>¡Todavía no está a punto, pero ya verás\ncuando la termine!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00000026>¡Viene hacia aquí! ¡Vamos, bestia\nasquerosa, ven aquí! ¡Te voy a dar\npara el pelo!\n\n<0x10009:0x00044000>¡<heroname>, usaremos el mismo\ntruco de antes!, ¿vale?")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 392, 'param3': 32}
/*<392>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 260, 'next': 382, 'param3': 15}
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 394, 'param3': 17}
/*<394>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 393, 'param3': 13}
/*<393>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 4, 'next': 395, 'param3': 14}
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 524, 'param3': 16}
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "¡<heroname>! ¡Es horrible, es\nhorrible! ¡El monstruo está a punto\nde despertarse otra vez!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "¡Ah, espera un momento! Tengo que\nprepararlo todo.")
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 772, 'next': 422, 'param3': 14}
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 540, 'param3': 13}
/*<540>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "¡<heroname>, el monstruo lleva\nincrustado en la cabeza el <color red<pilar\ndel sello>coloroff>!\n\n<0x10009:0x0e000013>¡Usa la espada para empujarlo hasta\nel fondo, a ver qué pasa!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>¡Ahora, <heroname>!<pause 30>\n\n\n\n¡Golpea el pilar con el <color red<rayo celestial>coloroff>!\n\n\n\n<0x10009:0x00111700>¡Tienes que darte prisa!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "¡<heroname>, el monstruo lleva\nincrustado en la cabeza el <color red<pilar\ndel sello>coloroff>!\n\n<0x10009:0x0e000013>¡Usa la espada para empujarlo hasta\nel fondo, a ver qué pasa!")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f>¡Deprisa, <heroname>!\n¡Baja al centro del valle y comprueba\nsi el pilar del sello sigue intacto!\n\n<0x10009:0x00140b00>¡Este temblor no presagia nada bueno!\n¡Debemos asegurarnos de que el\nmonstruo no haya despertado!")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	wait_frames(60)
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 356, 'next': 270, 'param3': 15}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 500, 'param3': 32}
/*<500>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 268, 'param3': 17}
/*<268>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 271, 'param3': 15}
/*<271>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 269, 'param3': 32}
/*<269>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 504, 'param3': 15}
/*<504>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': 256, 'next': 272, 'param3': 13}
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 290, 'param3': 13}
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15360, 'next': 267, 'param3': 13}
/*<267>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>¡¿Pe... pero qué pasa?!\n¿Por qué tiembla todo?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>¡Un terremoto! ¡Sálvese quien pueda!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010>¡Vamos, tienes que darte prisa,\n<heroname>! Ve a comprobar\nsi el pilar del sello que hay en el fondo\ndel valle sigue intacto.")
/*<284>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>¡Debemos asegurarnos de que el\nmonstruo no haya despertado!\n¡No pierdas más tiempo!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>¡El sello se ha roto!\n\n\n\n¡Pero mejor será que dejemos las\nexplicaciones para más tarde!\n\n\n¡Por el momento, limítate a evitar\nque escape del agujero!\n\n\n¡Y no permitas que se acerque\nal templo!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f>¡<heroname>, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Sabes cómo asegurar el sello del\nmonstruo, ¿verdad?\n\n\nSolo tienes que descargar el <color red<rayo\ncelestial >coloroff>sobre el pilar.<pause 30> ¡Ánimo; sé\nque lo conseguirás!")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f>¡<heroname>, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 0, unk: 1, line: 80 */ "<0x10009:0x00434553><0x10008:0x01cd>¡Uaaah! <pause 10>¡Y ahora vuela!\n\n\n\n<0x10009:0x00424026>Creo que va directo hacia el templo...\n¡No pienso permitírselo!\n\n\n<pause 8>¡Te la vas a pegar, bestia inmunda!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "Hay novedades, <0x10012:0x0000000b>amo <heroname>.\nAl usar el rayo celestial, he detectado\ncambios en esta zona.")
/*<495>*/ 	printf(/* textboxtype: 11, unk: 1, line: 124 */ "Además, percibo un aura similar a la\ndel paracaídas del <0x10012:0x00000002>amo en esta zona.\nDeduzco que podría pertenecer\na Zelda.\nConfirmo la posibilidad de guiar al\n<0x10012:0x00000002>amo hasta el origen de la señal\nmediante la función de <sound 4><color red<rastreo>coloroff>.\n\n¿Necesita el <0x10012:0x00000001>amo una explicación más\ndetallada?\n[1-]Sí[2]No")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 0, unk: 11, line: 125 */ "<0x10012:0x00000005>Muy bien, amo.\n\n\n\nLa función de rastreo permite al <0x10012:0x0000000c>amo\nbuscar un objetivo determinado usando\nla punta de la espada como brújula.\n\nCuanto más cerca se halle el origen\nde la señal, <color red<mayor será la reacción>coloroff> de\nla espada, que se manifestará a través\nde sonido y vibración.\nLa dirección del objetivo que emite la\nseñal se mostrará en pantalla con un\n<color red<cursor>coloroff>.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf(/* textboxtype: 1, unk: 0, line: 126 */ "Basta con mantener pulsado (^),\nseleccionar a Zelda como objetivo del\nrastreo y seguir la dirección que\nmarca el cursor.<0x10011:0x08cd>")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 11, unk: 1, line: 127 */ "Estoy preparada.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "¡<heroname>, el monstruo lleva\nincrustado en la cabeza el <color red<pilar\ndel sello>coloroff>!\n\n<0x10009:0x0e000013>¡Usa la espada para empujarlo hasta\nel fondo, a ver qué pasa!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>¡Ahora, <heroname>!<pause 30>\n\n\n\n¡Golpea el pilar con el <color red<rayo celestial>coloroff>!\n\n\n\n<0x10009:0x00111700>¡Tienes que darte prisa!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "¡<heroname>, el monstruo lleva\nincrustado en la cabeza el <color red<pilar\ndel sello>coloroff>!\n\n<0x10009:0x0e000013>¡Usa la espada para empujarlo hasta\nel fondo, a ver qué pasa!")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f>¡Deprisa, <heroname>!\n¡Baja al centro del valle y comprueba\nsi el pilar del sello sigue intacto!\n\n<0x10009:0x00140b00>¡Este temblor no presagia nada bueno!\n¡Debemos asegurarnos de que el\nmonstruo no haya despertado!")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f>¡<heroname>, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Sabes cómo asegurar el sello del\nmonstruo, ¿verdad?\n\n\nSolo tienes que descargar el <color red<rayo\ncelestial >coloroff>sobre el pilar.<pause 30> ¡Ánimo; sé\nque lo conseguirás!")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f>¡<heroname>, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00414043>¡Toma ya! ¡Mi catapulta es la bomba,\ny nunca mejor dicho! ¡No hay monstruo\nque se me resista; lo he dejado frito!\n\n¡Vamos, ahora te toca a ti! ¡Dale duro!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "Tengo datos importantes para el <0x10012:0x0000000b>amo.\n\n\n\nPara recibir información detallada\nsobre un objetivo, en primer lugar\nhay que <color green<seleccionarlo >coloroff>pulsando (Z).<0x10011:0x07cd>\n\nUna vez <color red<fijado el objetivo>coloroff> con (Z), solo\nqueda pulsar (v) y apareceré para\nfacilitar al <0x10012:0x00000001>amo la información que\nhaya solicitado.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>¡Aaaah!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000030>¡Da... date prisa! ¡Tienes que proteger\nel sello tal y como dice la anciana!\n\n\n¡Golpea el pilar con la luz de tu espada!")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>¡Aaaah!")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000015>¡¿Pe... pero qué pasa?!\n¿Por qué tiembla todo?\n\n\n¡Un terremoto! ¡Sálvese quien pueda!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000026>¡Oye, <heroname>, la catapulta ya\nestá lista!\n\n\nEn cuanto necesites que te eche una\nmano, ¡pulsa <icon 30> para avisarme!<0x10011:0x10cd>")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00040202>Te lo demostraré, <heroname>...<pause 30>\nPienso hacer todo lo posible con tal\nde ayudar a Zelda.")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000002>Ah, oye, <heroname>...\nLe he estado dando muchas vueltas y...\n\n\nPuede que la anciana tenga razón.\nQuizá haya algo que solamente yo\nsea capaz de hacer.\n\nEstá claro que no tengo tus habilidades\npara el combate, pero...\n\n\n<0x10009:0x00404200>¡Haré todo lo que esté en mi mano para\nayudar a Zelda!\n\n\n¡Te lo demostraré!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000002d>Soy...<pause 30> soy...<pause 30> un inútil<pause 30>.<pause 30>.<pause 30>.")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000003d><0x10008:0x01cd>¡Noooooo!\n\n\n\n<0x10009:0x00003a00><0x10008:0x01cd><0x10008:0x01cd>¡No he podido hacer nada!\n\n\n\n<0x10009:0x00004000><0x10008:0x01cd><0x10008:0x02cd>¡Nada de nada!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "El destino del <0x10012:0x00000001>amo es detener al\nmonstruo. Hasta entonces, no será\nposible salir de aquí.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10012:0x0000000b>Amo, un aviso importante: la prioridad\nen este momento es volver a encerrar\na la bestia en el sello.\n\nEl <0x10012:0x00000002>amo no podrá abandonar esta zona\nhasta haber cumplido la misión.")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "El destino del <0x10012:0x00000001>amo es detener al\nmonstruo. Hasta entonces, no será\nposible salir de aquí.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	wait_frames(30)
/*<489>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 407, 'param3': 47}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 400, 'param3': 32}
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 396, 'param3': 15}
/*<396>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 260, 'next': 486, 'param3': 15}
/*<486>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 490, 'param3': 17}
/*<490>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 398, 'param3': 48}
/*<398>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 397, 'param3': 13}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 4, 'next': 399, 'param3': 14}
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 523, 'param3': 16}
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 386, 'param3': 13}
/*<386>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "¡<heroname>! ¡Es horrible, es\nhorrible! ¡El monstruo está a punto\nde despertarse otra vez!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "¡Ah, espera un momento! Tengo que\nprepararlo todo.")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000026>¡Llegarás volando al bosque de Farone!\n<0x10005:0x000a0000>")
/*< 99>*/ 	printf(/* textboxtype: 76, unk: 1, line: 94 */ "¡Ve con cuidado!<0x10005:0x001e0000>")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f>¡<heroname>, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Es horrible... Esa bestia ha vuelto\na romper el sello...\n\n\nTú sabes cómo asegurarlo, ¿no?\nVamos, confío plenamente en ti.")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f>¡<heroname>, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "¡Bien! ¡Ahora me toca a mí!")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "Mueve la catapulta con (ControlStick) y apunta\nal objetivo.\n\n\nDespués solo tienes que tirarle una\nbomba con <icon 41> y lo dejarás aturdido...\n¡Aprovecha la ocasión para arrearle!")
/*<412>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "Si se te olvida cómo manejar la\n<color blue<catapulta>coloroff>, ¡pulsa <icon 19> para pedir ayuda!<0x10011:0x0bcd>")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "No sé yo, <heroname>...\n\n\n\n¿De verdad que al final de este\ncamino hay un <color red<templo >coloroff>donde vive\nuna anciana que sabe dónde está\n<color blue<Zelda>coloroff>?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "Ajá... ¡En fin, buen trabajo,\n<heroname>! Pero ya puedes\nirte a jugar, si quieres. A partir\nde aquí me encargo yo.\n<0x10009:0x000d0b41>¡Ha llegado el momento de que el\ngran <color blue<Malton>coloroff> se ponga manos a la\nobra! ¡Yo encontraré a <color blue<Zelda>coloroff>!")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "Cuando la rescate, regresará conmigo\na Altárea...<pause 30>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0000000c>¡Y entonces pediré su mano, y ella\naceptará y viviremos felices para\nsiempre!")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10009:0x0000000d>Tú no te preocupes y déjalo todo\nen mis manos.")
/*<109>*/ 	wait_frames(30)
/*<105>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "¡Pues nada, voy a ver a la anciana!")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10008:0x01cd>¡Pórtate bien!<pause 45>\n<0x10008:0xffcd>¡Adiós, <heroname>!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0, line: 69 */ "<0x10009:0x0e000054><0x10006:0x01cd>¡Aaah!<pause 15>\n<color red<<0x10006:0x00cd>Es...<pause 10><0x10006:0xfecd> el fin...>coloroff><0x10005:0x00280000>")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f>¡<heroname>, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Es horrible... Esa bestia ha vuelto\na romper el sello...\n\n\nTú sabes cómo asegurarlo, ¿no?\nVamos, confío plenamente en ti.")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f>¡<heroname>, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	wait_frames(60)
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 30, 'param3': 15}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 28, 'param3': 32}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 31, 'param3': 15}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 29, 'param3': 32}
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 270, 'next': 120, 'param3': 15}
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 17}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 32, 'param3': 13}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 470, 'param3': 17}
/*<470>*/ 	wait_frames(30)
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	wait_frames(15)
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>¡¿Pe... pero qué pasa?!\n¿Por qué tiembla todo?")
/*<121>*/ 	wait_frames(30)
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	wait_frames(15)
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>¡Un terremoto! ¡Sálvese quien pueda!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010>¡Vamos, tienes que darte prisa,\n<heroname>! Ve a comprobar\nsi el pilar del sello que hay en el fondo\ndel valle sigue intacto.")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>¡Debemos asegurarnos de que el\nmonstruo no haya despertado!\n¡No pierdas más tiempo!")
/*<126>*/ 	wait_frames(15)
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00424300>¿Qué me dices de la potencia de mi\nsupercatapulta? ¿No te parece\nincreíble, fascinante y soberbia?\n\n<0x10009:0x003e4000>Pues nada, voy a cargar el próximo\nregalito. Mientras esperas a mi\nseñal, ¡dale duro al bicho ese!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "Puede que este sujeto sepa algo más\nsobre el monstruo que nos ha atacado.\nRecomiendo prestarle ayuda.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000026>¡Oye, <heroname>, la catapulta ya\nestá lista!\n\n\nSi esa cosa intenta escalar el muro,\npuedo lanzarle una bomba para\ndetenerla.\n\nEn cuanto necesites que te eche una\nmano, ¡pulsa <icon 30> para avisarme!<0x10011:0x10cd>")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "<0x10012:0x00000001>Amo, no abrir el <color blue<paracaídas >coloroff>antes de\naterrizar puede acarrear graves\nconsecuencias.\n\nEl <0x10012:0x00000002>amo puede pulsar <icon 41> para abrirlo,\naunque, si se le olvida, lo haré yo en\nsu lugar.<0x10011:0x0fcd>")
          }

