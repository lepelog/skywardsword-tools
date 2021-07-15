          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf("\x0E\x01\x09\x04\x00\x04Las cosas son como son, no se puede\nvolar de noche.\n\n\nNo queda otra, vete a la cama a dormir\ntranquilamente hasta que salga el sol.")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf("\x0E\x01\x09\x04\x00\x01¿Se puede saber qué andas haciendo\na estas horas de la noche?\n\n\n\x0E\x01\x09\x04\x0C\xC09¡¿Cómo?! No me digas que pretendías\nmontarte en tu pelícaro y salir a cielo\nabierto alegremente...\n\n\x0E\x01\x09\x04\x09\xC00¡Deberías saber que los pelícaros no\nvuelan de noche!\n\n\nSu visión nocturna deja mucho que\ndesear, y solo los que han recibido\nun entrenamiento intensivo distinguen\nalgo en la oscuridad.\n\x0E\x01\x09\x04\x08\x400Así que si sientes la necesidad de surcar\nlos cielos, tendrás que esperar hasta\nque salga el sol, compañero.\n\nAnda, vete a la cama a echar una\ncabezadita. ¡Ya verás como enseguida\nse hace de día!")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00Aquí en la academia no vamos a\nsolucionar nada. Será mejor que\nbusques fuera.\n\nYo voy a ponerme a investigar por mi\ncuenta, descuida. Si descubro algo, te\naviso.")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06¿Pero cómo? \n¿Todavía estás aquí zascandileando?\n\n\n\x0E\x01\x09\x04\x0C\xC09¡¿Qué me dices?!<pause14> ¿Que tu pelícaro no\nha acudido a tu llamada? ¡Imposible!\n¿Te estás quedando conmigo?\n\n\x0E\x01\x09\x04\x01\xC00Eso es una cosa rarísima...\n\n\n\nEs la primera vez que oigo algo\nsemejante; no sé muy bien qué\npodemos hacer.\n\n\x0E\x01\x09\x04\x08\x400Pero no pienso dejar a un compañero\nen la estacada. Todo se va a solucionar,\nno te preocupes. ¡Déjamelo a mí!\n\n\x0E\x01\x09\x04\x0B\xC00Voy a ver qué se me ocurre.\nMientras tanto, tú ve a la gran plaza\ny pregunta por ahí. Tal vez alguien\nsepa algo.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405Si tienes alguna pregunta sobre aves,\nno te cortes y ven a preguntarme.\n¡<b<Coocker>> siempre responde!")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401¡Muy buenas, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x400Por fin ha llegado el gran día.\n¿Cómo lo ves? ¿Estás listo para el\n<r<torneo celeste>>, compañero?\n\nLos demás ya están en la gran plaza\nhaciendo el calentamiento, pero veo\nque tú te lo tomas con tranquilidad,\ncomo de costumbre.\n\x0E\x01\x09\x04\x0B\x400No es para menos, con ese <r<pelícaro rojo\n>>que tienes... Es un ave magnífica.\n\n\nMi montura tampoco es manca, por eso\ngané el año pasado. Pero si tú hubieses\nparticipado, tal vez la cosa habría sido\ndiferente.\n\x0E\x01\x09\x04\x08\x400De todos modos, la valía de un ave es la\nvalía de su jinete. Por eso yo no dejo de\nentrenar ni un solo día.\n\n\x0E\x01\x09\x04\x0C\x405Y también me encanta estudiar a los\npelícaros. ¡Así que si tienes cualquier\npregunta sobre ellos, no dudes en\nhablar conmigo! ¡<b<Coocker >>te ayudará!\n")
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
/*<146>*/ 			printf("\x0E\x01\x09\x04\x00\x06Si buscas a <b<Coocker>>, creo que está\njunto a la entrada del <r<gimnasio>>, en\nla parte de atrás de la academia.\n")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406¿Cómo dices?<pause28>\n¿Que si sé de algún sitio donde\npueda haberse metido <b<Malton>>?\n\x0E\x01\x09\x04\x00\xD00Menudo elemento...\nA saber qué jaleo habrán montado esta\nvez él y su cuadrilla. Casi mejor ni me\nlo cuentes.\n\nPues\x0E\x01\x09\x04\x0C\x400 no tengo ni idea de por dónde\npuede andar, pero igual <b<Coocker\n>>puede ayudarte.\n\n\x0E\x01\x09\x04\x08\xE04Por cierto, ahora que caigo, <b<Coocker\n>>andaba buscándote hace un momento\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í \nCreo que está junto al <r<gimnasio>>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Para cualquier duda sobre aves,\n<b<Coocker>> es tu hombre.\nDebe de estar en el piso de abajo,\n¿por qué no vas a hablar con él?")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCD(Se supone que abrir la puerta es su trabajo,\nno el mío... Grrr, no sé por qué siempre me\nendilga la tarea a mí.)")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406¿Qué te pasa, Link?\nEstás completamente atacado...\n\n\n\x0E\x01\x09\x04\x08\xD00<pause28>¿Que tu <r<pelícaro >>ha desaparecido? \nNo me lo puedo creer... ¡Y además \nen qué momento! Así no me extraña\nque estés de los nervios, claro.\n\x0E\x01\x09\x04\x0C\xD12Mmm\x0E\x01\x06\x02\xFCCD,\x0E\x01\x06\x02Í yo llevo todo el día sin salir de\nla academia, y no he visto nada.\nYa lo siento, Link...")
/*<142>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Para cualquier duda sobre aves,\n<b<Coocker>> es tu hombre.\nDebe de estar en el piso de abajo,\n¿por qué no vas a hablar con él?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf("\x0E\x01\x09\x04\x08\x900A ver si consigues vencer en el <r<torneo\nceleste>> y pasas al <r<curso superior >>con\nnosotros. De ahí a caballero... ¡un paso!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901¡Muy buenas, Link!\nVas a participar en el <r<torneo celeste>>\nde hoy, ¿verdad? ¡Pues mucha suerte!\n\n\x0E\x01\x09\x04\x00\x400Ya sabes que, si ganas, pasas\ndirectamente al <r<curso superior >>con\nnosotros. ¡Aprobarlo es el último paso\npara ser <r<caballero>>!\n\x0E\x01\x09\x04\x08\x900Y hasta te dan un <r<traje de caballero>>\nde lo más chulo, como este que llevo\nyo. ¡Seguro que te queda de fábula!\n\n\x0E\x01\x09\x04\x0B\x713Bueno, aunque no tanto como a uno\nque yo me sé...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\x01Esta estatua de piedra está aquí desde\nhace más tiempo del que nadie pueda\nrecordar. Es una pena que le falte un\nojo a la pobre...\nPuedes comprobarlo tú mismo si echas\nun vistazo con (C). \x0E\x01\x11\x02\x6CD\n")
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
/*<161>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Este niño me va a volver loca!\n¿Dónde se habrá metido ahora?\n¡La comida ya está casi lista!\n\nComo se haya ido otra vez a cazar\ninsectos, me va a oír.")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07¿Se puede saber qué te pasa por la\ncabeza, zagal? ¡Deja de hacer el idiota,\nque eso no es para jugar!\n\n\n\x0E\x01\x09\x04\x00\x1200Anda, haz el favor de largarte a\nhacer el bobo a otra parte, ¡tunante!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf("\x0E\x01\x09\x04\x08\x909¡Ah, Link!\nNo sé cómo voy a devolverte el favor,\n¡gracias a ti soy tan feliz!\n\nHoy también va a hacer la patrulla\npor la noche. ¡Y sin que se lo pida\nnadie, sin cobrar ni nada!\n\x0E\x01\x09\x04\x0E\x90A¡Ay, que me acelero toda!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Mmm, qué voy a hacer con la carta\nesta de Corvy...\n\n\n\x0E\x01\x09\x04\x0B\xE00Me pregunto qué diría Coocker si\nse enterase de todo esto...")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf("\x0E\x01\x09\x04\x08\xD57¿Eh? ¿Que quieres hablar conmigo\nsobre algo? ¿Y ese algo no puede\nesperar hasta mañana?")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf("\x0E\x01\x09\x04\n\xE57¿Pero cómo se te ocurre entrar tan\ncampante en la habitación de una\nseñorita a estas horas de la noche?\n\nCon tu permiso, quisiera darme un\nbaño. ¡Haz el favor de largarte,\nLink!\n\n\x0E\x01\x09\x04\x0C\xE14(Aunque la verdad es que el baño\nlleva ocupado un buen rato...)")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14No puedo creer que Zelda se haya\ncaído nubes abajo, con lo buena\njinete que es...\n\n\x0E\x01\x09\x04\n\xD06¿Cómo? ¿Un monstruo que apareció\nde repente? Eso serán visiones\nprovocadas por la conmoción,\nhombre.")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02¡Link!\x0E\x01\x0D\x02\x1906")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf("Si quieres ir a la gran plaza, sal por\nla puerta grande de aquí abajo.\n\n\n\x0E\x01\x09\x04\x09\x400La puerta del piso de arriba está\ncerrada con llave.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Y por cierto, ¿por qué no está abierto\nel comedor? Voy a tener que decirle\nun par de cosas a quien yo me sé.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Como compañero tuyo me veo en el\ndeber de advertirte de que el sitio al\nque te diriges es peligroso.\n\nAntes de ir a lugares así, lo suyo sería\n<r<guardar >>la partida ofreciendo una\n<r<plegaria a la Diosa>>.\n\nLas <r<estatuas>> ante las que puedes rezar\naparecen marcadas en el mapa; échale\nun ojo y nunca te perderás.")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Si piensas ir a la gruta de la cascada,\nal menos llévate una <r<espada>>.\nÚltimamente esa zona está llena de\nbichos muy feos.\n\x0E\x01\x09\x04\x09\xC00Acabo de ver al <b<maestro de esgrima\n>>entrando al gimnasio. ¿Por qué no\nle pides que te deje un buen acero?")
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
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x08\x401Link...\nCreo que hemos resuelto el misterio\nde tu pelícaro desaparecido.")
          			flw_73:
/*< 73>*/ 			printf("\x0E\x01\x09\x04\x09\xC00He estado haciendo averiguaciones\npara ver si sacaba algo en claro sobre\nel paradero de tu pelícaro...\n\n\x0E\x01\x09\x04\x00\xC00Y cuando he ido a preguntarle aquí\nal amigo Gruyo, ha puesto una cara\nde lo más sospechosa.")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Lo siento, Link.\n\n\n\n\x0E\x01\x09\x04\xC00\x800Te juro que iba a decírtelo, en serio\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nPero es que si <b<Malton>> se entera de que\nhe abierto la bocaza...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\xC16Parece que el amigo <b<Malton>> le ha\ncerrado el pico a base de amenazas.")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Venga,<pause23> hablemos claro.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Verás, resulta que estaba barriendo el\ncomedor, cuando de repente entraron\nMalton y los otros dos.\n\n\x0E\x01\x09\x04\xC00\x800Estaban tramando algo sobre <r<esconder\n>>a tu pelícaro. Creo que no se dieron\ncuenta de que yo estaba delante.\n\n\x0E\x01\x09\x04\xC00\x800Pero cuando quise salir del comedor\npara ir a avisarte...\n\n\n\x0E\x01\x09\x04\xC01\xE00Malton y sus amigotes me pillaron de\npleno.\n\n\n\x0E\x01\x09\x04\xC07\xE00Me amenazaron con que si se me\nocurría decirte algo, no iba a poder\nvolver a montar en pelícaro en lo que\nme queda de vida...")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Se ve que <b<Malton>> y su pandilla han\ncogido a tu pelícaro y lo han escondido\ncerca de la <r<<pling>gruta de la cascada>>.\n\x0E\x01\x09\x04\x08\xC00Mmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Déjame el <r<mapa>> un momento.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf("¡Mira, es aquí!\nCreo que está en la <r<gruta de la cascada>>.\nFíjate, te lo marco con una \x0E\x02\x04\x02\x19CD.<r<\n>>")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x404¿Ya sabes cómo consultar el mapa?\nPulsa \x0E\x02\x04\x02\x3CD en cualquier momento y\npodrás ver el mapa de la zona en la\nque estés.\x0E\x01\x11\x02\x3CD\n\x0E\x01\x09\x04\x08\x400Siempre que estés desorientado,\n¡pulsa \x0E\x02\x04\x02\x3CD y adiós al problema!\x0E\x01\x11\x02\x3CD")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf("\x0E\x01\x09\x04\xC00\x819¡Lo siento mucho, Link!\nSoy una birria, tan poquita cosa...\nNo he podido hacer nada...\n¡No me odies, por favor!")
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
/*< 57>*/ 			printf("\x0E\x01\x09\x04\x00\x02Para cualquier cosa que tenga que ver\ncon pelícaros, lo mejor es acudir\nsiempre a <b<Coocker>>.\n\nSabes quién es Coocker, ¿no?\nEs el mejor alumno de la academia\nde caballeros. te lo tienes que haber\ncruzado en clase alguna vez.")
          		  case 1:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04¿Qué te pasa, Link?<pause28>\n\x0E\x01\x09\x04\x00\x1100¡¿Cómo?! ¿Que tu pelícaro ha...<pause32>\ndesaparecido?\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x1100¡Pero eso no puede ser! ¡Es terrible!\n¡Qué horror! Con las ganas que tenía yo\nde ver a tu pelícaro rojo volando a toda\npastilla...\nLa verdad es que no tengo ni idea de\ndónde puede estar\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\n\x1100Espera\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í ¿Y si le preguntas a <b<Coocker>>?\n<pling>Es el tipo que <r<más sabe de aves >>en toda\nAltárea; parece una enciclopedia.\n\n\x0E\x01\x09\x04\x00\x700Probablemente él te pueda decir algo.\nPara este tipo de cosas es un hacha. ")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf("\x0E\x01\x09\x04\n\x705Tú y tu pelícaro rojo tenéis que ser\ntodo un espectáculo.")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hombre, Link. Ya no queda\nprácticamente nada para el torneo\nceleste, ¿eh? Tengo unas ganas de\nver a los pelícaros volar a todo trapo...\nEl año pasado <b<Coocker>> ganó justo en\nel último suspiro, aún me acuerdo...\n¡Menudo espectáculo! Estuvo muy\nemocionante, francamente.\n\x0E\x01\x09\x04\n\x700Este año participáis tú y tu pelícaro\nrojo, ¿verdad? <pause28>Estoy deseando veros.\n¡Ánimo y a por todas!")
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
/*<147>*/ 	printf("\x0E\x01\x08\x02\x2CDPssst, ¡eh!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03Í¡Acércate un momento, compañero!\nTengo una cosilla que contarte sobre\ntu pelícaro que te va a interesar mucho.")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03¿Qué? ¿Que tu pelícaro qué?\n\n\n\n\x0E\x01\x09\x04\x10\xE00¡Y a mí qué me cuentas! No tengo\ntiempo para ocuparme de tus\nproblemas, que bastante tengo ya\ncon lo mío...")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x00\x01El <r<torneo celeste >>está a punto de\nempezar, yo que tú dejaría de hacer\nel bobo e iría para allá.")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02¿Dónde se ha metido <b<Gruyo>>?\nHace horas que le pedí que me trajera\nunos <r<barriles>>, y aquí sigo esperando.\n\n\x0E\x01\x09\x04\x10\xF00A saber lo que andará haciendo, el muy\npánfilo... ¡Grrr!")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, importantes indicios señalan\nque en la dirección de esa luz se halla\nla clave para dar con las tres llamas.\n\nSugiero investigar la zona que hay\nal final del rayo de luz.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x09\x04\x00\x04¡Y una cosa más, Link!")
/*<101>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Si piensas ir a la gruta de la cascada,\nal menos llévate una <r<espada>>.\nÚltimamente esa zona está llena de\nbichos muy feos.\n\x0E\x01\x09\x04\x09\xC00Acabo de ver al <b<maestro de esgrima\n>>entrando al gimnasio. ¿Por qué no\nle pides que te deje un buen acero?")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x05¿Uh?\n¿Todavía estás aquí, chaval?\n[1]¿Dónde está\nmi pelícaro?[2]¿Dónde está\nMalton?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x00\x12Lo siento, no tengo ni idea de hacia\ndónde habrá ido el pobre animal...")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf("\x0E\x01\x09\x04\x00\x04<b<Malton >>y sus amigotes dijeron algo de\nque iban a estar vigilando el lugar del\ntorneo. «Vigilando»... ¡ja! Anda que...\n\nLo mismo andan por la ciudad...\nPara ir hasta allí podrías bajar por\naquí y llegarías en un periquete, pero...\n\ncomo todavía estoy arreglando esta\npuerta dichosa, mejor te vas dando\nun rodeo por la academia. He dejado\nla puerta de abajo abierta a propósito.")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf("\x0E\x01\x09\x04\x00\x05Pero gorrión, ¿qué te pasa, que se te ve\ntan acalorado? Cálmate, muchacho,\nque parece que te va a dar algo...\n\n¿Qué me dices? ¿Que tu pelícaro ha\ndesaparecido? ¿Hablas en serio?\n<pause32>Pues yo juraría que <pling>acabo de <r<verlo>>\nhace un momento...\nLo andaban persiguiendo los pelícaros\nde <b<Malton>> y su pandilla.\n[1]¿Hacia dónde\nlo llevaron?[2]¿Sabes dónde\nestá Malton?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x00\x03Paciencia, la puerta estará arreglada\nen un periquete. Pero ahora no pases\npor aquí, hazme el favor. Si te puedo\nayudar en algo más, soy todo oídos.[1]¿Y Zelda?[2]¿Y el torneo?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x05¿<b<Zelda>>?\n<pause1E>Sí, la he visto ir a la efigie de la Diosa\nhace un rato con el director <b<Gaépora>>.\n\n¿Cómo? <pause1E>¿Que no sabes por dónde cae\nla efigie de la Diosa, gorrión?\nMuy fácil, solo tienes que pulsar (C) y\nechar un vistazo a tu alrededor.\x0E\x01\x11\x02\x6CD\n¡La perspectiva es magnífica!\n<g<Mira a tu alrededor >>con (C) y, si te\ndespistas, <g<vuelve a centrarte  >>con (v).\n¡Es de lo más práctico!\x0E\x01\x11\x02\x6CD\x0E\x01\x11\x02\x9CD")
          			  case 1:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x03Claro, que tú participas en el <r<torneo\nceleste >>de hoy, ¿no? Ay, si yo tuviera\nunos cuantos años menos...\n\nEl vencedor del torneo se gana el\nderecho a pasar al <r<curso superior>> y,\nsi lo aprueba, se convierte en <r<caballero\nceleste>>.\nCaballeros celestes, los protectores de\nla paz de Altárea... ¡Quién pudiera ser\nuno de ellos! Ojalá tú llegues a serlo\nalgún día, gorrión.")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Link! ¡Muy buenos días!\n¿Qué tal hemos dormido esta noche?\n\n\nSeguro que no has podido pegar ojo\npensando en el <r<torneo celeste>>, \n¿verdad, gorrión?\n\n¿Cómo? ¿Que qué estoy haciendo?<pause28>...\nPues estaba intentando arreglar\nesta dichosa puerta.\n\nEstá que da pena verla, y como hoy es\nel día del torneo, me daba no sé qué\ndejarla así... \n\n\x0E\x01\x09\x04\x0C\xC00Ahora que caigo, ¿ya has ido esta\nmañana a <r<rezarle>> a la Diosa?\n¡Conviene hacerlo a menudo!\n\n\x0E\x01\n\x04\x06ÍSi rezas frente a esa <r<estatua >>de ahí,\npodrás <r<guardar >>tu progreso hasta\nel momento.\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍHay estatuas como esa desperdigadas\npor toda Altárea.\n\n\n¡Siempre que veas una, acércate a\nrezar!\n\n\nEs una buena costumbre.\nComo dice el refrán: \x0E\x01\x09\x04\x00\x08«<r<A la Diosa\nrogando y la partida guardando>>».")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x09\x04\xC00\x800Esto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í ¿Podrás llegar a tiempo,\nLink?\n\n\n\x0E\x01\x09\x04\xC00\xE06Si yo no fuera tan poquita cosa\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nnada de esto habría pasado.\nLo siento mucho, de verdad...")
          	  case 1:
/*<104>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD(...)\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf("\x0E\x01\x09\x04\x00\x02¿Es que no has aprendido nada en la\nacademia? ¡Si quieres llegar a ser un\ncaballero de verdad, más vale que te\ncomportes como tal!")
          	  case 1:
/*<187>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡A ver si andamos con más cuidado!\nNo siempre va a haber un caballero\ncerca para salvarte el pellejo.")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf("\x0E\x01\x09\x04\x0F\x1300Ay, mi <b<celestarabajo>> bonito... \n¡Rayos! ¡Ahora que estaba tan cerca\nde atraparlo! Toda una mañana de\nesfuerzos a la porra...\n\x0E\x01\x09\x04\n\x900Pero claro, para cazar insectos hay\nque tener un cazamariposas.\n\n\nOjalá no hubiera tirado a la basura\nel que compré en la <r<tienda de Terry>>... \x0E\x01\x09\x04\x11\x200\nAaay...")
          	  case 1:
/*<110>*/ 		printf("\x0E\x01\x09\x04\x00\x04Para hacer el <g<ataque rodante >>tienes\nque correr con (A).\n\n\nLa clave está en <r<agitar el Nunchuk \nrápidamente >>justo delante del objeto\no lugar que quieras atacar.\n\nSi aciertas de lleno con un <g<ataque\nrodante>>, ¡pam!, puede caerte algo\nbueno de arriba.\nVenga, porfaaa...<pause1E> Inténtalo...")
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
/*<220>*/ 				printf("\x0E\x01\x09\x04\x00\x01No he vuelto a oír la voz aquella\ndel retrete desde hace tiempo...\nMe pregunto quién diantre sería.")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf("\x0E\x01\x09\x04\x00\x01Desde hace unos días, cada vez que\npaso por delante del <r<retrete por la\nnoche >>oigo una voz.\n\n¿Quién diantre será a esas horas? ¡Ya\npodía armar un poco menos de jaleo!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qué raro... hace mucho que no se ve\na Malton por ningún sitio. ¿Dónde\ndiablos se habrá metido ese zascandil?")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Qué tal estás, jovencito? Escúchame\nbien; ahora que estás aquí, aprovecha\ny duerme a pierna suelta en tu <r<cama>>.\n¡Tienes que recuperar fuerzas!")
          				  case 1:
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01No descansarás hasta dar con Zelda...<pause14>\n¿verdad, zagal? Entonces supongo que\nno volverás a comer por aquí en una\nlarga temporada.\n\x0E\x01\x09\x04\n\xC00Bueno, ten mucho cuidado y no hagas\nlocuras, que te conozco.\n\n\n\x0E\x01\x09\x04\x09\x800Y vuelve a visitarnos de vez en cuando,\n¿quieres? Tu cama agradecerá que te\nacuerdes de ella.")
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
/*<217>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Oye, chaval, a ver si nos andamos con\nun poco más de cuidado! Como sigas\nasí, me temo que no vas a llegar al día\nde la graduación...\nRecuerda que a estas horas solo pueden\nvolar jinetes especialmente entrenados\npara realizar vuelos nocturnos, como\nnosotros. ¡Las normas son las normas!")
          	  case 1:
/*<216>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Hay que tener más cuidado, hombre!\nPor la noche está tan oscuro que es\nfácil despistarse y caerse por el sitio\nmenos pensado...\nY recuerda: a estas horas solo pueden\nvolar jinetes especialmente entrenados\npara realizar vuelos nocturnos, como\nnosotros. ¡Las normas son las normas!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906¡Oye, Link, quieto parao!\n\n\n\x0E\x01\x0D\x02\x500\nTienes que echarme una mano con\nuna cosilla, ¿vale? ¡Se supone que los\naprendices de caballero estáis ahí para\nayudar a la gente!\nAnda, echa a <g<correr>> con (A) y haz\nun <g<ataque rodante>> contra este árbol,\ncomo estaba haciendo yo, ¿quieres?\n\nTú simplemente <r<agita el Nunchuk\nrápidamente >>cuando estés frente al\nárbol para <g<echarte a rodar >>y ¡pam!,\nte chocas contra él.\nVenga, colega, <pause1E>no te hagas de rogar...\n¡Pero ten cuidado no te vayas a romper\nalgo del coscorrón, eh! Que tampoco es \nque seas el más cachas del lugar...")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf("\x0E\x01\x09\x04\x00\x01Por suerte ya no oigo voces cuando\nvoy al servicio.\n\n\nPero ahora es Corvy el que llora como\nun bebé en el cuarto de Malton hasta\nquedarse dormido... ¡Entre unos y\notros, me van a volver loca!")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qué raro... hace mucho que no se ve\na Malton por ningún sitio. ¿Dónde\ndiablos se habrá metido ese zascandil?")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Qué tal estás, jovencito? Escúchame\nbien; ahora que estás aquí, aprovecha\ny duerme a pierna suelta en tu <r<cama>>.\n¡Tienes que recuperar fuerzas!")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Qué tranquilidad... A estas horas,\nhasta los rapaces más revoltosos\nestán dormidos como troncos.\n\n\x0E\x01\x09\x04\n\x800Bueno, ¿y a ti cómo te va? \n¿Crees que podrás dar con Zelda?\n¡Ánimo, zagal, seguro que lo logras!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03¡Por aquí no se pasa, hombre ya!\nNo vaya a colarse algún engendro\nde esos que andan merodeando por\nlas noches.\nLa puerta del segundo piso está\nabierta, pero es mejor no andar por\nahí afuera a estas horas.\n\nComprendo que quieras dar con\nZelda a toda costa, a fin de cuentas\nsois amigos desde pequeñitos.\n\nPero si los vecinos de Altárea no\nponen un pie en la calle de noche\nes por algo, caray.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x08¡Toma, vaya porrazo!<pause1E>\n¡Aaaah! ¡Lo has conseguido! Ahí está\nmi <b<celestarabajo>> precioso.\n\n¡Ven aquí! ¡Espera, pequeñín!\n¡¿Adónde vas?!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CD¡Ya está, ya me has\nhartado!\x0E\x01\x0D\x02\x1906\n\n\n\x0E\x01\n\x04\x0FÍ¡Se lo voy a decir al director para que\nte ponga de patitas en la calle, pedazo\nde cernícalo!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CD¡Habrase visto!\x0E\x01\x0D\x02\x1906\n¡Gurriato del demonio!\n\n\n\x0E\x01\n\x04\x0FÍ¡Como sigas así, te voy a dejar sin\nalmuerzo una semana entera!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206¡¿Pero se puede saber qué haces?!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍ¡Te voy a hacer recoger este destrozo\ncon la lengua, sinvergüenza!")
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
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x04La efigie de la Diosa no tiene pérdida,\ndescuida, y además puedes ver el <r<mapa\n>>pulsando \x0E\x02\x04\x02\x3CD. Igual desde allí logras ver\ndónde está tu pelícaro.\x0E\x01\x11\x02\x3CD")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00W¿Ha ocurrido algo?...\nTe veo muy agitado, Link.\n\n\n¿Cómo? ¿Tu pelícaro? Sí, sé cuál es.\nEl que tiene ese plumaje rojo tan\npeculiar. <pause28>Pues no lo he visto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í \x0E\x01\x09\x04\x11\x200No sé\ndónde puede estar.\n\x0E\x01\x09\x04\x09\x204Desde la efigie de la Diosa hay una\nbuena panorámica de toda la isla,\n¿por qué no subes a echar un vistazo\ndesde allí?\nSi no sabes cómo llegar, saca el <r<mapa\n>>pulsando \x0E\x02\x04\x02\x3CD. Así no te perderás.\x0E\x01\x11\x02\x3CD")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209Ah, cómo me gustaría hacer de\nDiosa en el torneo celeste, y que\nun caballero bien guapo me\nacompañara en la ceremonia...")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link, buenos días!\nQué día más precioso, ¿verdad?\nEsta brisa que corre irá de perlas\npara el torneo.\n\x0E\x01\x09\x04\x11\x200Me pregunto quién ganará... A <b<Malton\n>>lo veo muy fuerte este año, ¡igual da\nla campanada!\n\n\x0E\x01\x09\x04\x0C\x200El campeón tiene el honor de rezar\nante la chica que interpreta el papel\nde Diosa. \x0E\x01\x09\x04\x00\x609¡Qué cosa más romántica!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf("\x0E\x01\x09\x04\x09\x802Anda, Link.\nSi le había dicho a <b<Gruyo >>que se\nocupara de esto... Bueno, tanto da.\n\n\x0E\x01\x09\x04\n\xC00Muchas gracias, siento que hayas\nperdido el tiempo con esto justo\nhoy que tienes el torneo.")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\n\x401Anda, Link, ¿así que me\nlo traes tú?\n\n\n\x0E\x01\x09\x04\x10\x802Yo se lo había pedido a <b<Gruyo>>,\npero en fin...\n\n\n\x0E\x01\x09\x04\x09\x400Bueno, trae para acá el <r<barril>> y déjalo\nahí, haz el favor.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

