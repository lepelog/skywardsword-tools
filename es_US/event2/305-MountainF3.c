          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x700¿Y bien? ¿Hay algo más de lo que\nquieras hablar, elegido?\n[1]<b<Dragona agua>>[2]<b<Dragón trueno>>[3]Volcán[4-]Olvídalo")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x07\x702Mmm, conque la <b<dragona del agua>>,\n¿eh? Muy bien. Puedo decirte que\nla Diosa le encomendó la misión\nde proteger el bosque.\n\x0E\x01\x09\x04\x00\x700Tiene muchísimo poder, y más carácter\naún... De modo que más te vale ir con\ncuidado o acabarás en su barriga.\n\n\x0E\x01\x09\x04\x00\x703¡Ja, ja, ja, ja!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x07\x702Mmm, conque el <b<dragón del trueno>>,\n¿eh? Muy bien; te diré que recibió\nde la Diosa la misión de proteger el\ndesierto.\nY además custodia el llamado\n<r<escudo legendario>>.\n\n\n\x0E\x01\x09\x04\x00\x700Se dice que pone a prueba a todos\naquellos que aspiran a obtener\nel escudo, para saber si son dignos\nde él.\nMe consta que los somete a pruebas de\nuna dificultad extrema. Pobres... \n¡Qué injusta es la vida!, ¿verdad?\n\n\x0E\x01\x09\x04\x00\x03¡Ja, ja, ja, ja!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x07\x702Mmm... la verdad es que esta montaña\nno fue siempre tan peligrosa como lo es\nhoy en día.\n\n\x0E\x01\x09\x04\x00\x700Hubo una época en la que los habitantes\nde la superficie y los de las\nprofundidades convivían en armonía\nbajo la bendición de la montaña.\n\x0E\x01\x09\x04\x00\x700Sin embargo, ahora ya solo quedan\nvestigios de aquellos tiempos...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x702Mmm, ¿seguro? Bien, la senda\nde tu destino se abre ante ti; solo\ntienes que recorrerla. ¡Adelante!")
          			}
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x701Vaya... ¡mira quién está aquí!\n\n\n\n\x0E\x01\x09\x04\x00\x700Joven elegido, ¿acaso tienes\nalgo que preguntarme?\n[1]<b<Dragona agua>>[2]<b<Dragón trueno>>[3]Volcán[4-]Olvídalo")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf("Me temo que te has visto atrapado\nen la erupción del volcán que se\nprodujo tras el estallido de mi poder.\nTe pido disculpas...\nEn cualquier caso, creo que el cielo\nestará despejado muy pronto.\n\n\nPuedes marcharte cuando lo desees.")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf("Me temo que te has visto atrapado\nen la erupción del volcán que se\nprodujo tras el estallido de mi poder.\nTe pido disculpas...\nEn cualquier caso, creo que el cielo\nestará despejado muy pronto.\n\n\nPuedes marcharte cuando lo desees.")
/*< 28>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 29>*/ 				changeScene(4, 0) // 
          			}
          		  case 1:
          			goto flw_57
          		}
          	}
          }

          void entrypoint_305_02() {
/*<  1>*/ 	start()
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 2, 'param3': 16}
/*<  2>*/ 	printf("\x0E\x01\x09\x04\x00\x10¡Ooh! ¡Héroe al rescate!")
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x0F\xF08¿Qué tal, chico?\n¡Cuánto tiempo sin verte!\n\n\n\x0E\x01\x09\x04\x00\xE00¿Eh? ¿Es que no te acuerdas de mí? \n\n\n\n\x0E\x01\x09\x04\x0E\xE00¡Soy yo, Platín! ¡El del templo\ndel norte! ¡El mogma, acuérdate!\n\n\n\x0E\x01\x09\x04\x0E\xE00Vi que caías inconsciente y que\nte llevaban a algún sitio, así que\ndecidí seguirte.")
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x0D\xE0APor lo que veo, eres un aventurero\nde lo más intrépido... ¿Qué te trae\npor aquí?\n[1]Verás...[2]Búsqueda")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05¿Dra... dragón? ¿Te refieres al dios?\n\n\n\nMmm... He oído rumores de que en\nesta montaña habita un dios, pero...\n\x0E\x01\x09\x04\x0F\x210ATú no serás de los que se creen\nese tipo de historias, ¿no?\n\x0E\x01\x09\x04\x0D\x00¿Cómo? ¿Preguntas qué hago\nen este lugar, entonces?\n\n\n\x0E\x01\x09\x04\x0E\xE0BOí que unos tipos peligrosos se estaban\nreuniendo por aquí, y me imaginé que\nen ese caso tendría que haber algún\ntesoro escondido, je, je.")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x0E\xE09Pero me parece que tu prioridad\ndebería ser resolver tus problemas\nmás inmediatos.\n\n¿O acaso no te has dado cuenta\ntodavía? ¡Vas desarmado!\n\n\n\x0E\x01\x09\x04\x0F\xF0ATe lo quitaron todo mientras estabas\ninconsciente... ¿No crees que deberías\nrecuperar tu equipo antes de seguir?\n\n\x0E\x01\x09\x04\x0E\xE00Aunque no tendrás que buscarlo todo...\nToma; conseguí quitarles esto.")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf("\x0E\x01\x09\x04\x11\x110BBueno, yo me voy a ir adelantando,\n¡que tengo prisa!\n\n\n\x0E\x01\x09\x04\x0F\xE00¡Aaadiós!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0B¡Ja, ja, ja! Ya veo... seguro que tú\ntambién has oído el mismo rumor,\n¿verdad?\n\n\x0E\x01\x09\x04\x0E\xE00Je, je, je... Sí, ese que dice que\nunos monstruos se están reuniendo\nen la montaña... \x0E\x01\x09\x04\x0F\xE00¡Y ya sabes lo\nque dicen!\n¡Donde veas dos bandidos,\nhabrá un tesoro escondido!")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\nSi me lo permites, te voy a dar un\npequeño consejo... ¡No dejes que\nte vean esos monstruos!\n\n\x0E\x01\x09\x04\x0F\xE00¡Si te atrapan, vas a tener\nmuchos problemas!\n\n\n¿Me has oído?\n[1]Síii[2]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf("...\n\n\n\n\x0E\x01\x09\x04\x0F\xE06Ay... ¿Sabes, chico? Me preocupo\npor ti porque soy un buen mogma.\n\n\n\x0E\x01\x09\x04\x0E\xE00¡Así que te voy a enseñar algo increíble!\n¡Vamos, abre el mapa!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x11\x110B¿Estás preparado? No debería, pero\nbueno... ¡Te voy a mostrar el contenido\nde todos los cofres! ¡Tachán!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x0E\xE09Qué mala suerte... ¡Nunca encuentro\nnada de lo que me interesa!\n\n\n\x0E\x01\x09\x04\x0F\xE00Si ves alguna de tus pertenencias,\nasegúrate de recuperarlas, ¿eh?")
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0BMuy bien, ¡yo sigo con mi búsqueda\nde tesoros!\n\n\n¡Hasta pronto, chico!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Chico!")
/*< 18>*/ 		printf("\x0E\x01\x09\x04\x0F\xE00¡¿Qué estás haciendo?!\n¿Cómo se te ocurre venir\nhasta aquí desarmado?\n\n¡¿No te he dicho que esto está lleno\nde monstruos?!\n\n\n\x0E\x01\x09\x04\x0E\xE03¡Vigila bien tus pasos!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf("Ufff...\n\n\n\nDesde hace un rato no dejan de pasar\nmonstruos malvados por aquí. Tiene\nque haber algo, estoy seguro...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf("Ufff... Qué calor...\n\n\n\nQué dura es la vida de un buscador\nde tesoros...")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("Muchas gracias, \x0E\x01\x12\x04\x00\x04amo.\n\n\n\nLamento nuestra momentánea\nseparación. La entrada en erupción\ndel volcán no es excusa; este\ncontratiempo se pudo haber evitado.\nHe aprovechado el tiempo para\nreunir información sobre el entorno.\nPercibo una intensa fuerza procedente\nde aquella estancia de la derecha, \x0E\x01\x12\x04\x00\x02amo.\nCalculo un 60% de probabilidades de\nque se trate del dragón que conoce\nuna de las estrofas del <b<Cantar del\nHéroe>>.\nSugiero recuperar el equipo restante\ny proseguir la búsqueda del dragón.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf("¡Eh, tú! Tengo información fresquita\npara ti. ¿Te interesa?\n[1]Claro que sí[2-]No hace falta")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf("Muy bien. Entonces, ¡buena suerte!")
          		}
          	  case 1:
/*< 65>*/ 		printf("¡Eh! Tengo nuevas visiones para ti.\n¿Quieres verlas?[1]Claro que sí[2-]No hace falta")
/*< 70>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_66
          	}
          }

          void entrypoint_305_07() {
/*< 72>*/ 	start()
/*< 77>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 79>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("¡Eh! Tengo nuevas visiones para ti.\n¿Quieres verlas?[1]Claro que sí[2-]No hace falta")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf("Muy bien. Entonces, ¡buena suerte!")
          			}
          		  case 1:
/*< 80>*/ 			printf("¡Eh! <pause0A>No tengo nada nuevo para ti,\npero puedes ver todo lo que hay\ndisponible hasta el momento.\n\n¿Quieres ver algo?\n[1]Claro que sí[2-]No hace falta")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf("¡Eh! Tengo nuevas visiones para ti.\n¿Quieres verlas?[1]Claro que sí[2-]No hace falta")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

