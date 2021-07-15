          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf("\x0E\x01\x09\x04\x00\x04Las cosas son como son, no se puede\nvolar de noche.\n\n\nSi quieres volar, ¡vete a dormir un rato\ny espera a que salga el sol!")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf("\x0E\x01\x09\x04\x00\x01¿Se puede saber qué estás haciendo\na estas horas de la noche?\n\n\n\x0E\x01\x09\x04\x0C\xC09¡¿Cómo?! No me digas que pretendías\nmontarte en tu neburí y salir a volar\nal cielo abierto...\n\n\x0E\x01\x09\x04\x09\xC00¡Deberías saber que los neburís no\nvuelan de noche!\n\n\nSu visión nocturna no es demasiado\nbuena, y solo aquellos que han recibido\nun entrenamiento intensivo distinguen\nalgo en la oscuridad.\n\x0E\x01\x09\x04\x08\x400Así que si sientes la necesidad de surcar\nlos cielos, tendrás que esperar hasta\nque salga el sol, compañero.\n\n¿Por qué no vas a dormir un poco?\n¡Ya verás como enseguida se hace\nde día!")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00No vamos a solucionar nada\nquedándonos en la academia.\nSerá mejor que busques fuera.\n\nEmpezaré a investigar por mi cuenta.\n¡Si descubro algo, te avisaré!")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06¿Pero cómo? \n¿Todavía estás deambulando por aquí?\n\n\n\x0E\x01\x09\x04\x0C\xC09¡¿Qué?!<pause14>\n¿Dices que tu neburí no ha acudido\na tu llamada? ¿En serio?\n\n\x0E\x01\x09\x04\x01\xC00Eso es una cosa rarísima...\n\n\n\nEs la primera vez que oigo algo\nsemejante. No sé muy bien qué\npodemos hacer.\n\n\x0E\x01\x09\x04\x08\x400Pero no pienso abandonar a un\ncompañero en apuros. Todo se va\na solucionar, no te preocupes.\n¡Déjamelo a mí!\n\x0E\x01\x09\x04\x0B\xC00Voy a ver qué se me ocurre.\nMientras tanto, tú ve a la gran plaza\ny pregunta por ahí. Tal vez alguien\nsepa algo.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405Si tienes alguna pregunta sobre aves,\nno dudes en venir a preguntarme.\n¡<b<Cocu>> siempre responde!")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401¡Buenos días, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x400Por fin ha llegado el gran día.\n¿Estás listo para el <r<torneo celeste>>,\ncompañero?\n\nLos demás ya están en la gran plaza\npracticando, pero veo que tú estás\nbastante tranquilo, como siempre.\n\n\x0E\x01\x09\x04\x0B\x400No es para menos, con ese <r<neburí rojo\n>>que tienes... Es un ave magnífica.\n\n\nMi pájaro también es bueno, por eso\ngané el año pasado. Pero si tú hubieras\nparticipado, quizá habría sido distinto.\n\n\x0E\x01\x09\x04\x08\x400De todos modos, la valía de un ave\nes la valía de su jinete. Por eso yo\nno dejo de entrenar ni un solo día.\n\n\x0E\x01\x09\x04\x0C\x405Y también me encanta estudiar a los\nneburís. Si tienes cualquier pregunta\nsobre ellos, ven a hablar conmigo.\n¡<b<Cocu >>te ayudará!")
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
/*<146>*/ 			printf("\x0E\x01\x09\x04\x00\x06Si buscas a <b<Cocu>>, creo que está junto\na la entrada del <r<gimnasio>>, en la parte\nde atrás de la academia.\n")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406¿Cómo dices?<pause28>\n¿Preguntas si sé de algún sitio donde\npueda haberse metido <b<Vilán>>?\n\x0E\x01\x09\x04\x00\xD00\n¿Por qué? Seguro que se ha vuelto\na meter en otro lío, ¿no? No hace\nfalta que me lo cuentes.\n\nPues\x0E\x01\x09\x04\x0C\x400 no sé dónde se habrá metido,\npero quizá <b<Cocu >>pueda ayudarte.\n\n\n\x0E\x01\x09\x04\x08\xE04Por cierto, me parece que <b<Cocu\n>>estaba buscándote hace un momento\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í \nCreo que está junto al <r<gimnasio>>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Para cualquier duda sobre aves,\nlo mejor es hablar con <b<Cocu>>.\nDebe de estar en el piso de abajo,\n¿por qué no vas a hablar con él?")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDSe supone que abrir la puerta es su trabajo,\nno el mío... Grrr, no sé por qué siempre\nme toca hacerlo a mí...")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406¿Qué te pasa, Link?\nSe te ve muy alterado.\n\n\n\x0E\x01\x09\x04\x08\xD00<pause28>¿Dices que tu <r<neburí >>ha desaparecido? \n\n\n\n\x0E\x01\x09\x04\x0C\xD12Mmm\x0E\x01\x06\x02\xFCCD,\x0E\x01\x06\x02Í yo me he pasado todo el día en\nla academia, así que no he visto nada.\nLo siento, Link...")
/*<142>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Para cualquier duda sobre aves,\nlo mejor es hablar con <b<Cocu>>.\nDebe de estar en el piso de abajo,\n¿por qué no vas a hablar con él?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf("\x0E\x01\x09\x04\x08\x900A ver si consigues vencer en el <r<torneo\nceleste>> y pasas al <r<curso superior >>con\nnosotros. De ahí a caballero... ¡un paso!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901¡Hola, Link!\nVas a participar en el <r<torneo celeste>>\nde hoy, ¿verdad? ¡Mucha suerte!\n\n\x0E\x01\x09\x04\x00\x400Ya sabes que, si ganas, pasarás\ndirectamente al <r<curso superior >>con\nnosotros y estarás mucho más cerca\nde convertirte en <r<caballero>>.\n\x0E\x01\x09\x04\x08\x900Incluso te darán un <r<traje de caballero>>\ncomo este que llevo yo. ¡Seguro que\nte quedaría muy bien!\n\n\x0E\x01\x09\x04\x0B\x713Bueno, aunque no tanto como\na cierta persona...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\x01Esta estatua de piedra está aquí desde\nhace más tiempo del que nadie pueda\nrecordar. Es una pena que le falte un\nojo...\nPuedes comprobarlo tú mismo si la\nobservas con (C). \x0E\x01\x11\x02\x6CD\n")
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
/*<166>*/ 		printf("\x0E\x01\x09\x04\x00\x04¡Mmm...!\nEsta sopa va a estar para chuparse\nlos dedos, ¡como de costumbre!")
          	  case 1:
/*<161>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Este niño me va a volver loca!\n¿Dónde se habrá metido ahora?\n¡La comida ya está casi lista!\n\n\nSi se le ha ocurrido irse a cazar\ninsectos otra vez, me va a oír...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07¿Se puede saber adónde vas?\n¡Eso no me sirve para nada!\n\n\n\x0E\x01\x09\x04\x00\x1200¡Deja de perder el tiempo y termina\nlo que estabas haciendo!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf("\x0E\x01\x09\x04\x08\x909¡Ah, Link!\nNo sé cómo voy a devolverte el favor,\n¡gracias a ti soy tan feliz!\n\nHoy también va a patrullar por la\nnoche. ¡Y sin que se lo pida nadie!\n\n\n\x0E\x01\x09\x04\x0E\x90A¡Me emociono solo con pensar en él!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Mmm, qué voy a hacer con la carta\nesta de Corvy...\n\n\n\x0E\x01\x09\x04\x0B\xE00Me pregunto qué dirá Cocu si se\nenterara de todo esto...")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf("\x0E\x01\x09\x04\x08\xD57¿Eh? ¿Dices que quieres hablar\nconmigo sobre algo? Me temo que\ntendrá que esperar hasta mañana.")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf("\x0E\x01\x09\x04\n\xE57¿Pero cómo se te ocurre entrar\nen la habitación de una señorita\na estas horas de la noche?\n\nCon tu permiso, quisiera darme un\nbaño. ¡Haz el favor de largarte,\nLink!\n\n\x0E\x01\x09\x04\x0C\xE14Aunque la verdad es que el baño\nlleva ocupado un buen rato...")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14No puedo creer que Zelda se haya\ncaído nubes abajo, siendo tan buena\njinete...\n\n\x0E\x01\x09\x04\n\xD06¿Cómo? ¿Un monstruo que apareció\nde repente? Seguro que viste visiones\nprovocadas por la conmoción...")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02¡Link!\x0E\x01\x0D\x02\x1906")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf("Si quieres ir a la gran plaza, sal\npor la puerta grande de aquí abajo.\n\n\n\x0E\x01\x09\x04\x09\x400La puerta de la planta superior todavía\nestá cerrada con llave.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Y por cierto, ¿por qué no está abierto\nel comedor? Voy a tener que decirle\nun par de cosas a cierta persona.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Como compañero tuyo, debo advertirte\nque el sitio al que te diriges es bastante\npeligroso.\n\nAntes de ir a lugares así, deberías\n<r<guardar >>la partida ofreciendo una\n<r<plegaria a la Diosa>>.\n\nLas <r<estatuas>> ante las que puedes rezar\naparecen marcadas en el mapa.\nObsérvalo bien y nunca te perderás.")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Si piensas ir a la gruta de la cascada,\ndeberías llevar al menos una <r<espada>>.\nÚltimamente esa zona está llena de\ncriaturas peligrosas.\n\x0E\x01\x09\x04\x09\xC00Acabo de ver al <b<maestro de esgrima\n>>entrando al gimnasio. ¿Por qué no\nle pides que te preste una espada?")
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
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x08\x401Link...\nCreo que hemos resuelto el misterio\nde tu neburí desaparecido.")
          			flw_73:
/*< 73>*/ 			printf("\x0E\x01\x09\x04\x09\xC00He estado intentando averiguar\nalgo sobre el paradero de tu neburí...\n\n\n\x0E\x01\x09\x04\x00\xC00Y cuando he ido a preguntarle a\nnuestro amigo Gruyo, ha actuado\nde una forma muy sospechosa.")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Lo siento, Link.\n\n\n\n\x0E\x01\x09\x04\xC00\x800Quería decírtelo, en serio\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nPero si <b<Vilán>> se entera de que\nte lo he dicho...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\xC16Parece que el amigo <b<Vilán>> le ha\ncerrado el pico a base de amenazas.")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Vamos,<pause23> dile la verdad.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Verás, estaba limpiando el comedor,\ncuando de repente entraron Vilán\ny los otros dos.\n\n\x0E\x01\x09\x04\xC00\x800Estaban tramando algo sobre <r<esconder\n>>a tu neburí. Creo que no se dieron\ncuenta de que yo estaba allí.\n\n\x0E\x01\x09\x04\xC00\x800Pero cuando quise salir del comedor\npara ir a avisarte...\n\n\n\x0E\x01\x09\x04\xC01\xE00Vilán y su pandilla me vieron.\n\n\n\n\x0E\x01\x09\x04\xC07\xE00Me amenazaron diciéndome que si se\nme ocurría decirte algo, no iba a poder\nvolver a montar en un neburí en lo que\nme queda de vida...")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Parece que <b<Vilán>> y su pandilla han\natrapado a tu neburí y lo han escondido\ncerca de la <r<<pling>gruta de la cascada>>.\n\x0E\x01\x09\x04\x08\xC00Mmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Déjame ver el <r<mapa>> un momento.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf("¡Mira, es aquí!\nCreo que está en la <r<gruta de la cascada>>.\nVoy a marcártelo con una \x0E\x02\x04\x02\x19CD.<r<\n>>")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x404¿Ya sabes cómo consultar el mapa?\nOprime \x0E\x02\x04\x02\x3CD en cualquier momento\ny podrás ver el mapa de la zona en\nla que estés.\x0E\x01\x11\x02\x3CD\n\x0E\x01\x09\x04\x08\x400Siempre que estés desorientado,\n¡oprime \x0E\x02\x04\x02\x3CD y adiós al problema!\x0E\x01\x11\x02\x3CD")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf("\x0E\x01\x09\x04\xC00\x819¡Lo siento mucho, Link!\nNo puedo evitar ser un cobarde...\n¡No me odies, por favor!")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\xC01¡Link!\nJusto a tiempo...")
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
/*< 57>*/ 			printf("\x0E\x01\x09\x04\x00\x02Para cualquier cosa que tenga que ver\ncon neburís, lo mejor es acudir siempre\na <b<Cocu>>.\n\nSabes quién es Cocu, ¿no?\nEs el mejor alumno de la academia\nde caballeros. Seguro que te lo has\ncruzado alguna vez.")
          		  case 1:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04¿Qué te pasa, Link?<pause28>\n\x0E\x01\x09\x04\x00\x1100¡¿Cómo?!\n¿Dices que tu neburí ha<pause32> desaparecido?\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x1100¡Pero eso no puede ser! ¡Es terrible!\nTenía tantas ganas de ver a tu neburí\nrojo volando a toda velocidad...\nNo, no sé dónde puede estar\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í \n\x0E\x01\x09\x04\n\x1100Espera\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n¿Por qué no le preguntas a <b<Cocu>>?\n<pling>Es el que <r<más sabe de aves >>en toda\nNeburia.\n\x0E\x01\x09\x04\x00\x700Probablemente él te pueda decir algo.")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf("\x0E\x01\x09\x04\n\x705¡Verte con tu neburí rojo será\ntodo un espectáculo!")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\nEl torneo celeste está a punto\nde empezar, ¿eh?\n\nEl año pasado <b<Cocu>> ganó justo en el\núltimo momento, aún me acuerdo...\n¡Fue muy emocionante!\n\n\x0E\x01\x09\x04\n\x700Este año participarás con tu neburí\nrojo, ¿verdad? <pause28>Estoy deseando verlos.\n¡Ánimo y buena suerte!")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CD¡Eeeh!\x0E\x01\x0D\x02\x1906\n¡Link!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf("\x0E\x01\x08\x02\x2CD¡Eh, oye!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03Í¡Acércate un momento, compañero!\nTengo que contarte una cosa sobre\ntu neburí que te va a interesar mucho.")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03¿Eh? ¿Me estás hablando de tu neburí?\n\n\n\n\x0E\x01\x09\x04\x10\xE00¡No me importa! No tengo tiempo\npara ocuparme de tus problemas.\n¡Ya tengo bastante con los míos!")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x00\x01El <r<torneo celeste >>está a punto de\nempezar. ¡Deberías dejar de perder\nel tiempo e ir para allá!")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02¿Dónde se ha metido <b<Gruyo>>?\nHace horas que le pedí que me trajera\nunos <r<barriles>>, y aquí sigo esperando.\n\n\x0E\x01\x09\x04\x10\xF00¿Qué estará haciendo? ¡Grr!")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, importantes indicios señalan\nque en la dirección de esa luz se halla\nla clave para encontrar las tres llamas.\n\nSugiero investigar la zona que hay\nal final del rayo de luz.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x09\x04\x00\x04¡Y una cosa más, Link!")
/*<101>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Si piensas ir a la gruta de la cascada,\ndeberías llevar al menos una <r<espada>>.\nÚltimamente esa zona está llena de\ncriaturas peligrosas.\n\x0E\x01\x09\x04\x09\xC00Acabo de ver al <b<maestro de esgrima\n>>entrando al gimnasio. ¿Por qué no\nle pides que te preste una espada?")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x05¿Eh?\n¿Todavía sigues por aquí, muchacho?\n[1]¿Dónde está\nmi neburí?[2]¿Dónde está\nVilán?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x00\x12Lo siento, no tengo idea de hacia\ndónde ha podido ir el pobre animal...")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oí decir a <b<Vilán >>que estarían vigilando\nel lugar del torneo. ¿Vigilando? ¡Ja!\n\n\nQuizá estén en la ciudad...\nPara ir hasta allí podrías bajar por\naquí y llegarías rápidamente, pero...\n\nComo todavía estoy arreglando esta\npuerta, será mejor que vayas dando\nun rodeo por la academia. He dejado\nla puerta de abajo abierta a propósito.")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf("\x0E\x01\x09\x04\x00\x05Pero gorrión, ¿qué te pasa?\n¿Por qué tienes tanta prisa?\nCálmate, muchacho...\n\n¿Cómo dices? ¿Que tu neburí ha\ndesaparecido? ¿Hablas en serio?\n<pause32>A mí me ha parecido <pling><r<verlo >>hace un\nmomento...\nLo andaban persiguiendo los neburís\nde <b<Vilán>> y su pandilla.\n[1]¿Hacia dónde\nlo llevaron?[2]¿Sabes dónde\nestá Vilán?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x00\x03Paciencia, la puerta estará arreglada\npronto. Pero ahora no pases por aquí,\npor favor. Si te puedo ayudar en algo,\nsoy todo oídos.[1]¿Y Zelda?[2]¿Y el torneo?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x05¿<b<Zelda>>?\n<pause1E>Sí, la he visto ir a la efigie de la Diosa\nhace un rato con el director <b<Gaepora>>.\n\n¿Cómo? <pause1E>¿Dices que no sabes dónde\nestá la efigie de la Diosa, gorrión?\nMuy fácil, solo tienes que oprimir (C)\ny mirar a tu alrededor.\x0E\x01\x11\x02\x6CD\n¡La perspectiva es magnífica!\n<g<Mira a tu alrededor >>con (C) y, si te\ndespistas, <g<vuelve a centrarte >>con (v).\n¡Es muy práctico!\x0E\x01\x11\x02\x6CD\x0E\x01\x11\x02\x9CD")
          			  case 1:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x03Vas a participar en el <r<torneo celeste\n>>de hoy, ¿no? \n\n\nEl vencedor del torneo se gana el\nderecho a pasar al <r<curso superior >>y,\nsi lo hace bien, puede convertirse\nen <r<caballero celeste>>.\nCaballeros celestes, los protectores\nde la paz de Neburia... ¡Ojalá llegues\na ser uno de ellos algún día, gorrión!")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Link! ¡Buenos días!\n¿Qué tal has dormido esta noche?\n\n\nSeguro que no has podido descansar\npensando en el <r<torneo celeste>>, \n¿verdad, gorrión?\n\n¿Preguntas qué estoy haciendo?<pause28>...\nEstaba intentando arreglar esta\npuerta.\n\nLleva varios días haciendo ruido,\ny como hoy es el día del torneo,\nno quería dejarla así... \n\n\x0E\x01\x09\x04\x0C\xC00Por cierto, ¿ya has ido esta mañana\na <r<rezarle>> a la Diosa? ¡Deberías hacerlo\ncon frecuencia!\n\n\x0E\x01\n\x04\x06ÍSi rezas frente a esa <r<estatua >>de ahí,\npodrás <r<guardar >>tu progreso hasta\nel momento.\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍHay estatuas como esa repartidas\npor toda Neburia. ¡Cuando veas una,\nacércate a rezar!\n\nDedícale una oración para pedir \x0E\x01\x09\x04\x00\x08\n<r<protección y seguridad en tu camino>>.")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x09\x04\xC00\x800Este\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í ¿Podrás llegar a tiempo,\nLink?\n\n\n\x0E\x01\x09\x04\xC00\xE06Si yo no fuera tan cobarde\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nnada de esto habría pasado.\nLo siento mucho, de verdad...")
          	  case 1:
/*<104>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf("\x0E\x01\x09\x04\x00\x02¿Es que no has aprendido nada en la\nacademia? ¡Si quieres llegar a ser un\ncaballero de verdad, más vale que te\ncomportes como tal!")
          	  case 1:
/*<187>*/ 		printf("\x0E\x01\x09\x04\x00\x02Debes tener más cuidado, muchacho.\n¡No puedes depender de los caballeros\ncomo yo para que te rescatemos\nsiempre que te caigas!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf("\x0E\x01\x09\x04\x0F\x1300Ay, mi precioso <b<neburabajo>>... \nQué pena, con lo cerca que estaba\nde atraparlo.\n\n\x0E\x01\x09\x04\n\x900Pero claro, para cazar insectos hay\nque tener un cazamariposas.\n\n\nOjalá no hubiera tirado a la basura\nel que compré en la <r<tienda de Terry>>... \x0E\x01\x09\x04\x11\x200\nAaay...")
          	  case 1:
/*<110>*/ 		printf("\x0E\x01\x09\x04\x00\x04Para hacer el <g<ataque rodante >>tienes\nque correr con (A).\n\n\nLa clave está en <r<agitar el Nunchuk \nrápidamente >>justo delante del objeto\no lugar que quieras atacar.\n\nSi aciertas de lleno con un <g<ataque\nrodante>>, ¡pam!, puede caerte algo\nbueno de arriba.\nPor favooor...<pause1E> Inténtalo...")
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
/*<220>*/ 				printf("\x0E\x01\x09\x04\x00\x01No he vuelto a oír esa voz del retrete\ndesde hace tiempo... Me pregunto\nquién sería.")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf("\x0E\x01\x09\x04\x00\x01Desde hace unos días, cada vez que\npaso por delante del <r<retrete por la\nnoche >>oigo una voz.\n\n¿Quién será a esas horas?\n¡Ojalá no hiciera tanto ruido!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qué raro... hace mucho que no se ve\na Vilán por ningún sitio. ¿Dónde\nse habrá metido ese granuja?")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Qué tal estás, jovencito? Escúchame\nbien: ahora que estás aquí, aprovecha\ny duerme cuanto quieras en tu <r<cama>>.\n¡Tienes que recuperar fuerzas!")
          				  case 1:
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01No descansarás hasta encontrar a\nZelda...<pause14> ¿verdad? Entonces supongo\nque no volverás a comer por aquí en\nuna larga temporada.\n\x0E\x01\x09\x04\n\xC00Bueno, ten mucho cuidado y no hagas\nlocuras.\n\n\n\x0E\x01\x09\x04\x09\x800Y vuelve a visitarnos de vez en cuando,\n¿quieres? No hay nada como dormir\nen tu propia cama.")
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
/*<217>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Oye, oye, a ver si tienes más cuidado!\nA este paso, no llegarás al día de la\ngraduación...\n\nRecuerda que a estas horas solo pueden\nvolar jinetes especialmente entrenados\npara realizar vuelos nocturnos, como\nnosotros. ¡Las normas son las normas!")
          	  case 1:
/*<216>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Tienes que tener más cuidado!\nPor la noche está tan oscuro que es\nfácil despistarse y caerse por cualquier\nsitio...\nY recuerda: a estas horas solo pueden\nvolar jinetes especialmente entrenados\npara realizar vuelos nocturnos, como\nnosotros. ¡Las normas son las normas!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906¡Oye, Link! ¡Espera!\n\n\n\x0E\x01\x0D\x02\x500\nEs que... quería pedirte un favor.\n\n\n\n¿Podrías <g<correr>> con (A) y hacer un\n<g<ataque rodante>> contra este árbol,\ncomo estaba haciendo yo?\n\nTú simplemente <r<agita el Nunchuk\nrápidamente >>cuando estés frente al\nárbol para <g<echarte a rodar >>y ¡pam!,\nchocarás contra él.\nVamos, <pause1E>por favooor...")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf("\x0E\x01\x09\x04\x00\x01Por suerte, ya no oigo voces cuando\npaso por delante del retrete.\n\n\nPero ahora Corvy llora como un bebé\nen el cuarto de Vilán hasta quedarse\ndormido... ¡Entre todos, me van a\nvolver loca!")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qué raro... hace mucho que no se ve\na Vilán por ningún sitio. ¿Dónde\nse habrá metido ese granuja?")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Qué tal estás, jovencito? Escúchame\nbien: ahora que estás aquí, aprovecha\ny duerme cuanto quieras en tu <r<cama>>.\n¡Tienes que recuperar fuerzas!")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Qué tranquilidad... A estas horas,\nhasta los mocosos más revoltosos\nestán dormidos como bebés.\n\n\x0E\x01\x09\x04\n\x800Bueno, ¿cómo va tu búsqueda? \n¿Crees que podrás encontrar a Zelda?\n¡Ánimo, seguro que lo logras!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03¡Por aquí no se puede pasar!\nNo vaya a meterse alguna criatura\nde esas que andan deambulando por\nlas noches...\nLa puerta de la segunda planta está\nabierta, pero es mejor no andar por\nahí afuera a estas horas.\n\nComprendo que quieras encontrar\na Zelda a toda costa. Sé que son\namigos desde que eran niños...\n\nPero si los vecinos de Neburia no\nponen un pie en la calle de noche\nes porque tienen buenas razones...")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x08¡Muy bien! ¡Qué golpe!<pause1E>\n¡Aaah! ¡Lo has conseguido!\nAhí está mi precioso <b<neburabajo>>.\n\n¡Ven aquí! ¡Espera, pequeño!\n¡¿Adónde vas?!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CD¡Ya está, ya me has\nhartado!\x0E\x01\x0D\x02\x1906\n\n\n\x0E\x01\n\x04\x0FÍ¡Se lo voy a decir al director para\nque te expulse, mocoso!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDPero serás...\x0E\x01\x0D\x02\x1906\n¡Mocoso engreído!\n\n\n\x0E\x01\n\x04\x0FÍ¡Si sigues así, te voy a dejar sin\nalmuerzo una semana entera!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206¡¿Se puede saber qué haces?!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍ¡Será mejor que recojas todo esto!")
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
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x04Para que no te pierdas buscando\nla efigie de la Diosa, puedes consultar\nel <r<mapa >>oprimiendo\x0E\x02\x04\x02\x3CD. ¡Quizá veas\na tu neburí desde allí!\x0E\x01\x11\x02\x3CD")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00W¿Ha ocurrido algo?...\nPareces nervioso, Link.\n\n\n¿Cómo? ¿Tu neburí? Sí, sé cuál es.\nEl que tiene ese plumaje rojo tan\npeculiar. <pause28>No, no lo he visto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\x200No sé dónde puede estar.\n\x0E\x01\x09\x04\x09\x204Desde la efigie de la Diosa hay una\nbuena panorámica de toda la isla,\n¿por qué no lo buscas desde allí?\n\nSi no sabes cómo llegar, saca el <r<mapa\n>>oprimiendo \x0E\x02\x04\x02\x3CD. Así no te perderás.\x0E\x01\x11\x02\x3CD")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209Ah, cómo me gustaría representar\na la Diosa en el torneo celeste, y\nque un caballero bien guapo me\nacompañara en la ceremonia...")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link, buenos días!\nQué día más precioso, ¿verdad?\nEsta brisa que corre será perfecta\npara el torneo.\n\x0E\x01\x09\x04\x11\x200Me pregunto quién ganará... \nParece que <b<Vilán >>es un buen candidato\neste año, ¡quizá lo consiga!\n\n\x0E\x01\x09\x04\x0C\x200El campeón será bendecido por la\nmuchacha que interpreta el papel\nde la Diosa. \x0E\x01\x09\x04\x00\x609¡Qué romántico!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf("\x0E\x01\x09\x04\x09\x802¿Eh? Link...\nLe había dicho a <b<Gruyo >>que se ocupara\nde esto... Bueno, no importa.\n\n\x0E\x01\x09\x04\n\xC00Muchas gracias. Siento que hayas\ntenido que perder el tiempo con esto\nprecisamente hoy, que tienes\nel torneo...")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\n\x401Vaya, Link, ¿así que te\nencargas tú del barril?\n\n\n\x0E\x01\x09\x04\x10\x802Se suponía que <b<Gruyo>> tenía\nque hacerlo él mismo...\n\n\n\x0E\x01\x09\x04\x09\x400Bueno, ¿puedes traer aquí el <r<barril\n>>y dejarlo ahí?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

