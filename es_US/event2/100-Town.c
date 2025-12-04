          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000004>Las cosas son como son, no se puede\nvolar de noche.\n\n\nSi quieres volar, ¡vete a dormir un rato\ny espera a que salga el sol!")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000001>¿Se puede saber qué estás haciendo\na estas horas de la noche?\n\n\n<0x10009:0x000c0c09>¡¿Cómo?! No me digas que pretendías\nmontarte en tu neburí y salir a volar\nal cielo abierto...\n\n<0x10009:0x00090c00>¡Deberías saber que los neburís no\nvuelan de noche!\n\n\nSu visión nocturna no es demasiado\nbuena, y solo aquellos que han recibido\nun entrenamiento intensivo distinguen\nalgo en la oscuridad.\n<0x10009:0x00080400>Así que si sientes la necesidad de surcar\nlos cielos, tendrás que esperar hasta\nque salga el sol, compañero.\n\n¿Por qué no vas a dormir un poco?\n¡Ya verás como enseguida se hace\nde día!")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c00>No vamos a solucionar nada\nquedándonos en la academia.\nSerá mejor que busques fuera.\n\nEmpezaré a investigar por mi cuenta.\n¡Si descubro algo, te avisaré!")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000c06>¿Pero cómo? \n¿Todavía estás deambulando por aquí?\n\n\n<0x10009:0x000c0c09>¡¿Qué?!<pause 20>\n¿Dices que tu neburí no ha acudido\na tu llamada? ¿En serio?\n\n<0x10009:0x00010c00>Eso es una cosa rarísima...\n\n\n\nEs la primera vez que oigo algo\nsemejante. No sé muy bien qué\npodemos hacer.\n\n<0x10009:0x00080400>Pero no pienso abandonar a un\ncompañero en apuros. Todo se va\na solucionar, no te preocupes.\n¡Déjamelo a mí!\n<0x10009:0x000b0c00>Voy a ver qué se me ocurre.\nMientras tanto, tú ve a la gran plaza\ny pregunta por ahí. Tal vez alguien\nsepa algo.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x000c0405>Si tienes alguna pregunta sobre aves,\nno dudes en venir a preguntarme.\n¡<color blue<Cocu>coloroff> siempre responde!")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00090401>¡Buenos días, <heroname>!\n\n\n\n<0x10009:0x00080400>Por fin ha llegado el gran día.\n¿Estás listo para el <color red<torneo celeste>coloroff>,\ncompañero?\n\nLos demás ya están en la gran plaza\npracticando, pero veo que tú estás\nbastante tranquilo, como siempre.\n\n<0x10009:0x000b0400>No es para menos, con ese <color red<neburí rojo\n>coloroff>que tienes... Es un ave magnífica.\n\n\nMi pájaro también es bueno, por eso\ngané el año pasado. Pero si tú hubieras\nparticipado, quizá habría sido distinto.\n\n<0x10009:0x00080400>De todos modos, la valía de un ave\nes la valía de su jinete. Por eso yo\nno dejo de entrenar ni un solo día.\n\n<0x10009:0x000c0405>Y también me encanta estudiar a los\nneburís. Si tienes cualquier pregunta\nsobre ellos, ven a hablar conmigo.\n¡<color blue<Cocu >coloroff>te ayudará!")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<145>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000006>Si buscas a <color blue<Cocu>coloroff>, creo que está junto\na la entrada del <color red<gimnasio>coloroff>, en la parte\nde atrás de la academia.\n")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080406>¿Cómo dices?<pause 40>\n¿Preguntas si sé de algún sitio donde\npueda haberse metido <color blue<Vilán>coloroff>?\n<0x10009:0x00000d00>\n¿Por qué? Seguro que se ha vuelto\na meter en otro lío, ¿no? No hace\nfalta que me lo cuentes.\n\nPues<0x10009:0x000c0400> no sé dónde se habrá metido,\npero quizá <color blue<Cocu >coloroff>pueda ayudarte.\n\n\n<0x10009:0x00080e04>Por cierto, me parece que <color blue<Cocu\n>coloroff>estaba buscándote hace un momento<0x10006:0xfccd>...<0x10006:0x00cd> \nCreo que está junto al <color red<gimnasio>coloroff>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06>Para cualquier duda sobre aves,\nlo mejor es hablar con <color blue<Cocu>coloroff>.\nDebe de estar en el piso de abajo,\n¿por qué no vas a hablar con él?")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Se supone que abrir la puerta es su trabajo,\nno el mío... Grrr, no sé por qué siempre\nme toca hacerlo a mí...")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00010406>¿Qué te pasa, <heroname>?\nSe te ve muy alterado.\n\n\n<0x10009:0x00080d00><pause 40>¿Dices que tu <color red<neburí >coloroff>ha desaparecido? \n\n\n\n<0x10009:0x000c0d12>Mmm<0x10006:0xfccd>,<0x10006:0x00cd> yo me he pasado todo el día en\nla academia, así que no he visto nada.\nLo siento, <heroname>...")
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06>Para cualquier duda sobre aves,\nlo mejor es hablar con <color blue<Cocu>coloroff>.\nDebe de estar en el piso de abajo,\n¿por qué no vas a hablar con él?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00080900>A ver si consigues vencer en el <color red<torneo\nceleste>coloroff> y pasas al <color red<curso superior >coloroff>con\nnosotros. De ahí a caballero... ¡un paso!")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00080901>¡Hola, <heroname>!\nVas a participar en el <color red<torneo celeste>coloroff>\nde hoy, ¿verdad? ¡Mucha suerte!\n\n<0x10009:0x00000400>Ya sabes que, si ganas, pasarás\ndirectamente al <color red<curso superior >coloroff>con\nnosotros y estarás mucho más cerca\nde convertirte en <color red<caballero>coloroff>.\n<0x10009:0x00080900>Incluso te darán un <color red<traje de caballero>coloroff>\ncomo este que llevo yo. ¡Seguro que\nte quedaría muy bien!\n\n<0x10009:0x000b0713>Bueno, aunque no tanto como\na cierta persona...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00000001>Esta estatua de piedra está aquí desde\nhace más tiempo del que nadie pueda\nrecordar. Es una pena que le falte un\nojo...\nPuedes comprobarlo tú mismo si la\nobservas con (C). <0x10011:0x06cd>\n")
          }

          void entrypoint_100_30() {
/*<180>*/ 	start()
/*<181>*/ 	set_camera(30, 0)
/*<183>*/ 	set_camera(31, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<160>*/ 	start()
/*<165>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000004>¡Mmm...!\nEsta sopa va a estar para chuparse\nlos dedos, ¡como de costumbre!")
          	  case 1:
/*<161>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000002>¡Este niño me va a volver loca!\n¿Dónde se habrá metido ahora?\n¡La comida ya está casi lista!\n\n\nSi se le ha ocurrido irse a cazar\ninsectos otra vez, me va a oír...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000007>¿Se puede saber adónde vas?\n¡Eso no me sirve para nada!\n\n\n<0x10009:0x00001200>¡Deja de perder el tiempo y termina\nlo que estabas haciendo!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00080909>¡Ah, <heroname>!\nNo sé cómo voy a devolverte el favor,\n¡gracias a ti soy tan feliz!\n\nHoy también va a patrullar por la\nnoche. ¡Y sin que se lo pida nadie!\n\n\n<0x10009:0x000e090a>¡Me emociono solo con pensar en él!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000e12>Mmm, qué voy a hacer con la carta\nesta de Corvy...\n\n\n<0x10009:0x000b0e00>Me pregunto qué dirá Cocu si se\nenterara de todo esto...")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00080d57>¿Eh? ¿Dices que quieres hablar\nconmigo sobre algo? Me temo que\ntendrá que esperar hasta mañana.")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000a0e57>¿Pero cómo se te ocurre entrar\nen la habitación de una señorita\na estas horas de la noche?\n\nCon tu permiso, quisiera darme un\nbaño. ¡Haz el favor de largarte,\n<heroname>!\n\n<0x10009:0x000c0e14>Aunque la verdad es que el baño\nlleva ocupado un buen rato...")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000c0d14>No puedo creer que Zelda se haya\ncaído nubes abajo, siendo tan buena\njinete...\n\n<0x10009:0x000a0d06>¿Cómo? ¿Un monstruo que apareció\nde repente? Seguro que viste visiones\nprovocadas por la conmoción...")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010002>¡<heroname>!<0x1000D:0x1906>")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Si quieres ir a la gran plaza, sal\npor la puerta grande de aquí abajo.\n\n\n<0x10009:0x00090400>La puerta de la planta superior todavía\nestá cerrada con llave.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000c0c16>Y por cierto, ¿por qué no está abierto\nel comedor? Voy a tener que decirle\nun par de cosas a cierta persona.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c05>Como compañero tuyo, debo advertirte\nque el sitio al que te diriges es bastante\npeligroso.\n\nAntes de ir a lugares así, deberías\n<color red<guardar >coloroff>la partida ofreciendo una\n<color red<plegaria a la Diosa>coloroff>.\n\nLas <color red<estatuas>coloroff> ante las que puedes rezar\naparecen marcadas en el mapa.\nObsérvalo bien y nunca te perderás.")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Si piensas ir a la gruta de la cascada,\ndeberías llevar al menos una <color red<espada>coloroff>.\nÚltimamente esa zona está llena de\ncriaturas peligrosas.\n<0x10009:0x00090c00>Acabo de ver al <color blue<maestro de esgrima\n>coloroff>entrando al gimnasio. ¿Por qué no\nle pides que te preste una espada?")
/*< 95>*/ 			scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          		}
          	  case 1:
/*<107>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 74, 'param3': 31}
/*< 74>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 199, 'param3': 32}
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 200, 'param3': 47}
/*<200>*/ 		set_camera(13, 0)
/*<201>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 16}
/*<202>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 72, 'param3': 48}
/*< 72>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 71>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00080401><heroname>...\nCreo que hemos resuelto el misterio\nde tu neburí desaparecido.")
          			flw_73:
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090c00>He estado intentando averiguar\nalgo sobre el paradero de tu neburí...\n\n\n<0x10009:0x00000c00>Y cuando he ido a preguntarle a\nnuestro amigo Gruyo, ha actuado\nde una forma muy sospechosa.")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0c000812>Lo siento, <heroname>.\n\n\n\n<0x10009:0x0c000800>Quería decírtelo, en serio<0x10006:0xfbcd>...<0x10006:0x00cd>\nPero si <color blue<Vilán>coloroff> se entera de que\nte lo he dicho...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000c16>Parece que el amigo <color blue<Vilán>coloroff> le ha\ncerrado el pico a base de amenazas.")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080c00>Vamos,<pause 35> dile la verdad.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c070e11>Verás, estaba limpiando el comedor,\ncuando de repente entraron Vilán\ny los otros dos.\n\n<0x10009:0x0c000800>Estaban tramando algo sobre <color red<esconder\n>coloroff>a tu neburí. Creo que no se dieron\ncuenta de que yo estaba allí.\n\n<0x10009:0x0c000800>Pero cuando quise salir del comedor\npara ir a avisarte...\n\n\n<0x10009:0x0c010e00>Vilán y su pandilla me vieron.\n\n\n\n<0x10009:0x0c070e00>Me amenazaron diciéndome que si se\nme ocurría decirte algo, no iba a poder\nvolver a montar en un neburí en lo que\nme queda de vida...")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090c00>Parece que <color blue<Vilán>coloroff> y su pandilla han\natrapado a tu neburí y lo han escondido\ncerca de la <color red<<sound 4>gruta de la cascada>coloroff>.\n<0x10009:0x00080c00>Mmm<0x10006:0xfbcd>...<0x10006:0x00cd>\n<pause 40>Déjame ver el <color red<mapa>coloroff> un momento.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "¡Mira, es aquí!\nCreo que está en la <color red<gruta de la cascada>coloroff>.\nVoy a marcártelo con una (X).<color red<\n>coloroff>")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000404>¿Ya sabes cómo consultar el mapa?\nOprime (+) en cualquier momento\ny podrás ver el mapa de la zona en\nla que estés.<0x10011:0x03cd>\n<0x10009:0x00080400>Siempre que estés desorientado,\n¡oprime (+) y adiós al problema!<0x10011:0x03cd>")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0c000819>¡Lo siento mucho, <heroname>!\nNo puedo evitar ser un cobarde...\n¡No me odies, por favor!")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000c01>¡<heroname>!\nJusto a tiempo...")
/*<156>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_73
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 50>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 57>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Para cualquier cosa que tenga que ver\ncon neburís, lo mejor es acudir siempre\na <color blue<Cocu>coloroff>.\n\nSabes quién es Cocu, ¿no?\nEs el mejor alumno de la academia\nde caballeros. Seguro que te lo has\ncruzado alguna vez.")
          		  case 1:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000004>¿Qué te pasa, <heroname>?<pause 40>\n<0x10009:0x00001100>¡¿Cómo?!\n¿Dices que tu neburí ha<pause 50> desaparecido?<0x10006:0xfbcd><0x10006:0x00cd>\n\n<0x10009:0x00111100>¡Pero eso no puede ser! ¡Es terrible!\nTenía tantas ganas de ver a tu neburí\nrojo volando a toda velocidad...\nNo, no sé dónde puede estar<0x10006:0xfbcd>...<0x10006:0x00cd> \n<0x10009:0x000a1100>Espera<0x10006:0xfbcd>...<0x10006:0x00cd>\n¿Por qué no le preguntas a <color blue<Cocu>coloroff>?\n<sound 4>Es el que <color red<más sabe de aves >coloroff>en toda\nNeburia.\n<0x10009:0x00000700>Probablemente él te pueda decir algo.")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000a0705>¡Verte con tu neburí rojo será\ntodo un espectáculo!")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nEl torneo celeste está a punto\nde empezar, ¿eh?\n\nEl año pasado <color blue<Cocu>coloroff> ganó justo en el\núltimo momento, aún me acuerdo...\n¡Fue muy emocionante!\n\n<0x10009:0x000a0700>Este año participarás con tu neburí\nrojo, ¿verdad? <pause 40>Estoy deseando verlos.\n¡Ánimo y buena suerte!")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Eeeh!<0x1000D:0x1906>\n¡<heroname>!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10008:0x02cd>¡Eh, oye!<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>¡Acércate un momento, compañero!\nTengo que contarte una cosa sobre\ntu neburí que te va a interesar mucho.")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>¿Eh? ¿Me estás hablando de tu neburí?\n\n\n\n<0x10009:0x00100e00>¡No me importa! No tengo tiempo\npara ocuparme de tus problemas.\n¡Ya tengo bastante con los míos!")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>El <color red<torneo celeste >coloroff>está a punto de\nempezar. ¡Deberías dejar de perder\nel tiempo e ir para allá!")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000002>¿Dónde se ha metido <color blue<Gruyo>coloroff>?\nHace horas que le pedí que me trajera\nunos <color red<barriles>coloroff>, y aquí sigo esperando.\n\n<0x10009:0x00100f00>¿Qué estará haciendo? ¡Grr!")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x00000001>Amo, importantes indicios señalan\nque en la dirección de esa luz se halla\nla clave para encontrar las tres llamas.\n\nSugiero investigar la zona que hay\nal final del rayo de luz.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000004>¡Y una cosa más, <heroname>!")
/*<101>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Si piensas ir a la gruta de la cascada,\ndeberías llevar al menos una <color red<espada>coloroff>.\nÚltimamente esa zona está llena de\ncriaturas peligrosas.\n<0x10009:0x00090c00>Acabo de ver al <color blue<maestro de esgrima\n>coloroff>entrando al gimnasio. ¿Por qué no\nle pides que te preste una espada?")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000005>¿Eh?\n¿Todavía sigues por aquí, muchacho?\n[1-]¿Dónde está\nmi neburí?[2-]¿Dónde está\nVilán?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000012>Lo siento, no tengo idea de hacia\ndónde ha podido ir el pobre animal...")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004>Oí decir a <color blue<Vilán >coloroff>que estarían vigilando\nel lugar del torneo. ¿Vigilando? ¡Ja!\n\n\nQuizá estén en la ciudad...\nPara ir hasta allí podrías bajar por\naquí y llegarías rápidamente, pero...\n\nComo todavía estoy arreglando esta\npuerta, será mejor que vayas dando\nun rodeo por la academia. He dejado\nla puerta de abajo abierta a propósito.")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Pero gorrión, ¿qué te pasa?\n¿Por qué tienes tanta prisa?\nCálmate, muchacho...\n\n¿Cómo dices? ¿Que tu neburí ha\ndesaparecido? ¿Hablas en serio?\n<pause 50>A mí me ha parecido <sound 4><color red<verlo >coloroff>hace un\nmomento...\nLo andaban persiguiendo los neburís\nde <color blue<Vilán>coloroff> y su pandilla.\n[1-]¿Hacia dónde\nlo llevaron?[2-]¿Sabes dónde\nestá Vilán?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00000003>Paciencia, la puerta estará arreglada\npronto. Pero ahora no pases por aquí,\npor favor. Si te puedo ayudar en algo,\nsoy todo oídos.[1-]¿Y Zelda?[2-]¿Y el torneo?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000005>¿<color blue<Zelda>coloroff>?\n<pause 30>Sí, la he visto ir a la efigie de la Diosa\nhace un rato con el director <color blue<Gaepora>coloroff>.\n\n¿Cómo? <pause 30>¿Dices que no sabes dónde\nestá la efigie de la Diosa, gorrión?\nMuy fácil, solo tienes que oprimir (C)\ny mirar a tu alrededor.<0x10011:0x06cd>\n¡La perspectiva es magnífica!\n<color green<Mira a tu alrededor >coloroff>con (C) y, si te\ndespistas, <color green<vuelve a centrarte >coloroff>con (v).\n¡Es muy práctico!<0x10011:0x06cd><0x10011:0x09cd>")
          			  case 1:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000003>Vas a participar en el <color red<torneo celeste\n>coloroff>de hoy, ¿no? \n\n\nEl vencedor del torneo se gana el\nderecho a pasar al <color red<curso superior >coloroff>y,\nsi lo hace bien, puede convertirse\nen <color red<caballero celeste>coloroff>.\nCaballeros celestes, los protectores\nde la paz de Neburia... ¡Ojalá llegues\na ser uno de ellos algún día, gorrión!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000001>¡<heroname>! ¡Buenos días!\n¿Qué tal has dormido esta noche?\n\n\nSeguro que no has podido descansar\npensando en el <color red<torneo celeste>coloroff>, \n¿verdad, gorrión?\n\n¿Preguntas qué estoy haciendo?<pause 40>...\nEstaba intentando arreglar esta\npuerta.\n\nLleva varios días haciendo ruido,\ny como hoy es el día del torneo,\nno quería dejarla así... \n\n<0x10009:0x000c0c00>Por cierto, ¿ya has ido esta mañana\na <color red<rezarle>coloroff> a la Diosa? ¡Deberías hacerlo\ncon frecuencia!\n\n<0x1000A:0x000600cd>Si rezas frente a esa <color red<estatua >coloroff>de ahí,\npodrás <color red<guardar >coloroff>tu progreso hasta\nel momento.\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>Hay estatuas como esa repartidas\npor toda Neburia. ¡Cuando veas una,\nacércate a rezar!\n\nDedícale una oración para pedir <0x10009:0x00000008>\n<color red<protección y seguridad en tu camino>coloroff>.")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0c000800>Este<0x10006:0xfbcd>...<0x10006:0x00cd> ¿Podrás llegar a tiempo,\n<heroname>?\n\n\n<0x10009:0x0c000e06>Si yo no fuera tan cobarde<0x10006:0xfbcd>...<0x10006:0x00cd>\nnada de esto habría pasado.\nLo siento mucho, de verdad...")
          	  case 1:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0c010900><0x10006:0xfbcd>...<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000002>¿Es que no has aprendido nada en la\nacademia? ¡Si quieres llegar a ser un\ncaballero de verdad, más vale que te\ncomportes como tal!")
          	  case 1:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000002>Debes tener más cuidado, muchacho.\n¡No puedes depender de los caballeros\ncomo yo para que te rescatemos\nsiempre que te caigas!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000f1300>Ay, mi precioso <color blue<neburabajo>coloroff>... \nQué pena, con lo cerca que estaba\nde atraparlo.\n\n<0x10009:0x000a0900>Pero claro, para cazar insectos hay\nque tener un cazamariposas.\n\n\nOjalá no hubiera tirado a la basura\nel que compré en la <color red<tienda de Terry>coloroff>... <0x10009:0x00110200>\nAaay...")
          	  case 1:
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>Para hacer el <color green<ataque rodante >coloroff>tienes\nque correr con (A).\n\n\nLa clave está en <color red<agitar el Nunchuk \nrápidamente >coloroff>justo delante del objeto\no lugar que quieras atacar.\n\nSi aciertas de lleno con un <color green<ataque\nrodante>coloroff>, ¡pam!, puede caerte algo\nbueno de arriba.\nPor favooor...<pause 30> Inténtalo...")
          	}
          }

          void entrypoint_100_22() {
/*<178>*/ 	start()
/*<206>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<207>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<208>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_220:
/*<220>*/ 				printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>No he vuelto a oír esa voz del retrete\ndesde hace tiempo... Me pregunto\nquién sería.")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Desde hace unos días, cada vez que\npaso por delante del <color red<retrete por la\nnoche >coloroff>oigo una voz.\n\n¿Quién será a esas horas?\n¡Ojalá no hiciera tanto ruido!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Qué raro... hace mucho que no se ve\na Vilán por ningún sitio. ¿Dónde\nse habrá metido ese granuja?")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>¿Qué tal estás, jovencito? Escúchame\nbien: ahora que estás aquí, aprovecha\ny duerme cuanto quieras en tu <color red<cama>coloroff>.\n¡Tienes que recuperar fuerzas!")
          				  case 1:
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000001>No descansarás hasta encontrar a\nZelda...<pause 20> ¿verdad? Entonces supongo\nque no volverás a comer por aquí en\nuna larga temporada.\n<0x10009:0x000a0c00>Bueno, ten mucho cuidado y no hagas\nlocuras.\n\n\n<0x10009:0x00090800>Y vuelve a visitarnos de vez en cuando,\n¿quieres? No hay nada como dormir\nen tu propia cama.")
          				}
          			}
          		}
          	  case 1:
          		goto flw_222
          	}
          }

          void entrypoint_100_57() {
/*<214>*/ 	start()
/*<215>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000002>¡Oye, oye, a ver si tienes más cuidado!\nA este paso, no llegarás al día de la\ngraduación...\n\nRecuerda que a estas horas solo pueden\nvolar jinetes especialmente entrenados\npara realizar vuelos nocturnos, como\nnosotros. ¡Las normas son las normas!")
          	  case 1:
/*<216>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>¡Tienes que tener más cuidado!\nPor la noche está tan oscuro que es\nfácil despistarse y caerse por cualquier\nsitio...\nY recuerda: a estas horas solo pueden\nvolar jinetes especialmente entrenados\npara realizar vuelos nocturnos, como\nnosotros. ¡Las normas son las normas!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000001><0x1000D:0x1906>¡Oye, <heroname>! ¡Espera!\n\n\n<0x1000D:0x0500>\nEs que... quería pedirte un favor.\n\n\n\n¿Podrías <color green<correr>coloroff> con (A) y hacer un\n<color green<ataque rodante>coloroff> contra este árbol,\ncomo estaba haciendo yo?\n\nTú simplemente <color red<agita el Nunchuk\nrápidamente >coloroff>cuando estés frente al\nárbol para <color green<echarte a rodar >coloroff>y ¡pam!,\nchocarás contra él.\nVamos, <pause 30>por favooor...")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Por suerte, ya no oigo voces cuando\npaso por delante del retrete.\n\n\nPero ahora Corvy llora como un bebé\nen el cuarto de Vilán hasta quedarse\ndormido... ¡Entre todos, me van a\nvolver loca!")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Qué raro... hace mucho que no se ve\na Vilán por ningún sitio. ¿Dónde\nse habrá metido ese granuja?")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>¿Qué tal estás, jovencito? Escúchame\nbien: ahora que estás aquí, aprovecha\ny duerme cuanto quieras en tu <color red<cama>coloroff>.\n¡Tienes que recuperar fuerzas!")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000b05>Qué tranquilidad... A estas horas,\nhasta los mocosos más revoltosos\nestán dormidos como bebés.\n\n<0x10009:0x000a0800>Bueno, ¿cómo va tu búsqueda? \n¿Crees que podrás encontrar a Zelda?\n¡Ánimo, seguro que lo logras!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003>¡Por aquí no se puede pasar!\nNo vaya a meterse alguna criatura\nde esas que andan deambulando por\nlas noches...\nLa puerta de la segunda planta está\nabierta, pero es mejor no andar por\nahí afuera a estas horas.\n\nComprendo que quieras encontrar\na Zelda a toda costa. Sé que son\namigos desde que eran niños...\n\nPero si los vecinos de Neburia no\nponen un pie en la calle de noche\nes porque tienen buenas razones...")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000008>¡Muy bien! ¡Qué golpe!<pause 30>\n¡Aaah! ¡Lo has conseguido!\nAhí está mi precioso <color blue<neburabajo>coloroff>.\n\n¡Ven aquí! ¡Espera, pequeño!\n¡¿Adónde vas?!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>¡Ya está, ya me has\nhartado!<0x1000D:0x1906>\n\n\n<0x1000A:0x000f00cd>¡Se lo voy a decir al director para\nque te expulse, mocoso!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Pero serás...<0x1000D:0x1906>\n¡Mocoso engreído!\n\n\n<0x1000A:0x000f00cd>¡Si sigues así, te voy a dejar sin\nalmuerzo una semana entera!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>¡¿Se puede saber qué haces?!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>¡Será mejor que recojas todo esto!")
/*<123>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>Para que no te pierdas buscando\nla efigie de la Diosa, puedes consultar\nel <color red<mapa >coloroff>oprimiendo(+). ¡Quizá veas\na tu neburí desde allí!<0x10011:0x03cd>")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000057>¿Ha ocurrido algo?...\nPareces nervioso, <heroname>.\n\n\n¿Cómo? ¿Tu neburí? Sí, sé cuál es.\nEl que tiene ese plumaje rojo tan\npeculiar. <pause 40>No, no lo he visto<0x10006:0xfbcd>...<0x10006:0x00cd>\n<0x10009:0x00110200>No sé dónde puede estar.\n<0x10009:0x00090204>Desde la efigie de la Diosa hay una\nbuena panorámica de toda la isla,\n¿por qué no lo buscas desde allí?\n\nSi no sabes cómo llegar, saca el <color red<mapa\n>coloroff>oprimiendo (+). Así no te perderás.<0x10011:0x03cd>")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000c0209>Ah, cómo me gustaría representar\na la Diosa en el torneo celeste, y\nque un caballero bien guapo me\nacompañara en la ceremonia...")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000001>¡Hola, <heroname>, buenos días!\nQué día más precioso, ¿verdad?\nEsta brisa que corre será perfecta\npara el torneo.\n<0x10009:0x00110200>Me pregunto quién ganará... \nParece que <color blue<Vilán >coloroff>es un buen candidato\neste año, ¡quizá lo consiga!\n\n<0x10009:0x000c0200>El campeón será bendecido por la\nmuchacha que interpreta el papel\nde la Diosa. <0x10009:0x00000609>¡Qué romántico!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090802>¿Eh? <heroname>...\nLe había dicho a <color blue<Gruyo >coloroff>que se ocupara\nde esto... Bueno, no importa.\n\n<0x10009:0x000a0c00>Muchas gracias. Siento que hayas\ntenido que perder el tiempo con esto\nprecisamente hoy, que tienes\nel torneo...")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000a0401>Vaya, <heroname>, ¿así que te\nencargas tú del barril?\n\n\n<0x10009:0x00100802>Se suponía que <color blue<Gruyo>coloroff> tenía\nque hacerlo él mismo...\n\n\n<0x10009:0x00090400>Bueno, ¿puedes traer aquí el <color red<barril\n>coloroff>y dejarlo ahí?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "")
          }

