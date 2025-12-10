          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 1, line: 7 */ "<0x10009:0x00000700>¿Y bien? ¿Algo más de lo que\nquieras hablar, elegido?\n[1-]<color blue<Dragona agua>coloroff>[2-]<color blue<Dragón trueno>coloroff>[3-]Volcán[4]Olvídalo")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x00070702>Mmm, conque la <color blue<dragona del agua>coloroff>,\n¿eh? Muy bien; te diré que recibió\nde la Diosa la misión de proteger\nel bosque.\n<0x10009:0x00000700>Tiene muchísimo poder, y más carácter\naún... De modo que más te vale ir con\ncuidado o acabarás en su barriga.\n\n<0x10009:0x00000703>¡Ja, ja, ja, ja!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf(/* textboxtype: 1, unk: 1, line: 4 */ "<0x10009:0x00070702>Mmm, conque el <color blue<dragón del trueno>coloroff>,\n¿eh? Muy bien; te diré que recibió\nde la Diosa la misión de proteger el\ndesierto.\nY además custodia el llamado\n<color red<escudo legendario>coloroff>.\n\n\n<0x10009:0x00000700>Se dice que pone a prueba a todos\naquellos que aspiran a hacerse con\nel escudo, para saber si son dignos\nde él.\nMe consta que los somete a pruebas de\nuna dificultad extrema. Pobrecillos... \n¡Qué injusta es la vida!, ¿verdad?\n\n<0x10009:0x00000003>¡Ja, ja, ja, ja!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 1, line: 5 */ "<0x10009:0x00070702>Mmm... la verdad es que esta montaña\nno fue siempre tan peligrosa como lo es\nhoy en día.\n\n<0x10009:0x00000700>Hubo una época en la que los habitantes\nde la superficie y los de las\nprofundidades convivían en armonía\nbajo la bendición de la montaña.\n<0x10009:0x00000700>Sin embargo, ahora ya solo quedan\nvestigios de aquellos tiempos...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00000702>Mmm, ¿seguro? Bien, la senda\nde tu destino se abre ante ti; solo\ntienes que recorrerla. ¡Adelante!")
          			}
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 1, line: 2 */ "<0x10009:0x00000701>Vaya... ¡mira quién está aquí!\n\n\n\n<0x10009:0x00000700>Joven elegido, ¿acaso tienes\nalgo que preguntarme?\n[1-]<color blue<Dragona agua>coloroff>[2-]<color blue<Dragón trueno>coloroff>[3-]Volcán[4]Olvídalo")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "Me temo que te has visto atrapado\nen la erupción del volcán que se\nprodujo tras el estallido de mi poder.\nTe pido disculpas...\nEn cualquier caso, creo que el cielo\nestará despejado muy pronto.\n\n\nPuedes marcharte cuando lo desees.")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "Me temo que te has visto atrapado\nen la erupción del volcán que se\nprodujo tras el estallido de mi poder.\nTe pido disculpas...\nEn cualquier caso, creo que el cielo\nestará despejado muy pronto.\n\n\nPuedes marcharte cuando lo desees.")
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
/*<  2>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000010>¡Yepa! ¡Héroe al rescate!")
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000f0f08>¿Qué tal, chaval? ¡Cuánto tiempo!\n\n\n\n<0x10009:0x00000e00>¿Eh? ¿Es que no te acuerdas de mí? \n\n\n\n<0x10009:0x000e0e00>¡Soy yo, Platín! ¡El del templo\ndel norte! ¡El moguma, hombre!\n\n\n<0x10009:0x000e0e00>Vi que caías inconsciente y que\nte llevaban a algún sitio, así que\ndecidí seguirte.")
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000d0e0a>Por lo que veo, eres un aventurero\nde lo más intrépido... ¿Qué te trae\npor aquí?\n[1-]Verás...[2-]Búsqueda")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000e0e05>¿Dra... dragón? ¿Te refieres al dios?\n\n\n\nMmm... He oído rumores de que en\nesta montaña habita un dios, pero...\n<0x10009:0x000f210a>Tú no serás de los que se creen\nese tipo de historias, ¿no?\n<0x10009:0x000d0000>¿Cómo? ¿Que qué hago\nen este lugar, entonces?\n\n\n<0x10009:0x000e0e0b>Oí que unos tipos peligrosos se estaban\nreuniendo por aquí, y me imaginé que\nen ese caso tendría que haber algún\ntesoro escondido, je, je.")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000e0e09>Pero me parece que tu prioridad\ndebería ser resolver tus problemas\nmás inmediatos.\n\n¿O acaso no te has dado cuenta\ntodavía? ¡Vas desarmado!\n\n\n<0x10009:0x000f0f0a>Te desplumaron mientras estabas\ninconsciente... ¿No crees que deberías\nrecuperar tu equipo antes de seguir?\n\n<0x10009:0x000e0e00>Aunque no tendrás que buscarlo todo...\nToma; conseguí quitarles esto.")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x0011110b>Pues nada, yo me voy a ir adelantando,\n¡que tengo prisa!\n\n\n<0x10009:0x000f0e00>¡Aaadiós!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000f0f0b>¡Ja, ja, ja! Ya veo... seguro que\ntú también habías oído el mismo\nrumor, ¿verdad?\n\n<0x10009:0x000e0e00>Je, je, je... Sí, lo de que unos\nmonstruos se están reuniendo\nen la montaña... <0x10009:0x000f0e00>¡Y ya sabes lo\nque dicen!\n¡Donde veas dos bandidos,\nhabrá un tesoro escondido!")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0000000a>Si me lo permites, te voy a dar un\npequeño consejo... ¡No dejes que\nte vean esos bichos!\n\n<0x10009:0x000f0e00>¡Como te cojan, las vas a pasar canutas!\n\n\n\n¿Me has oído?\n[1-]Que síii[2-](...)")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "(...)\n\n\n\n<0x10009:0x000f0e06>Ay... ¿Sabes, chaval? Me preocupo\npor ti porque soy un buen moguma.\n\n\n<0x10009:0x000e0e00>¡Así que te voy a enseñar algo increíble!\n¡Venga, abre el mapa!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x0011110b>¿Estás preparado? No debería, pero\nbueno... ¡Te voy a mostrar el contenido\nde todos los cofres! ¡Tachán!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e09>Qué mala suerte... ¡Nunca encuentro\nnada de lo que me interesa!\n\n\n<0x10009:0x000f0e00>Si ves alguna de tus pertenencias,\nasegúrate de recuperarlas, ¿vale?")
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000e0e0b>Pues nada, ¡yo sigo con mi búsqueda\nde tesoros!\n\n\n¡Hasta pronto, chaval!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000001>¡Chaval!")
/*< 18>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000f0e00>¡¿Qué estás haciendo?!\n¿Cómo se te ocurre venir\nhasta aquí desarmado?\n\n¡¿No te he dicho que esto está plagado\nde monstruos?!\n\n\n<0x10009:0x000e0e03>¡Vigila bien tus pasos!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Ufff...\n\n\n\nDesde hace un rato no dejan de pasar\nbichos malvados por aquí. Tiene que\nhaber algo, estoy seguro...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "Ufff... Menudo calor...\n\n\n\nQué dura es la vida de un buscador\nde tesoros...")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0, line: 28 */ "Muchas gracias, <0x10012:0x00000004>amo.\n\n\n\nLamento nuestra momentánea\nseparación. La entrada en erupción\ndel volcán no es excusa; este\ncontratiempo se pudo haber evitado.\nHe aprovechado el tiempo para\nrecabar información sobre el entorno.\nPercibo una intensa fuerza procedente\nde aquella estancia de la derecha, <0x10012:0x00000002>amo.\nCalculo un 60% de probabilidades de\nque se trate del dragón que conoce\nuna de las estrofas del <color blue<Cantar del\nHéroe>coloroff>.\nSugiero recuperar el equipo restante\ny proseguir la búsqueda del dragón.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "¡Eh, tú! Tengo información fresquita\nrecién salida del hoyo, ¿te interesa?\n[1-]Claro que sí[2]No hace falta")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "Vale, pues nada... ¡Buena suerte!")
          		}
          	  case 1:
/*< 65>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "¡Eh! Tengo un consejo especial para ti.\n¿Quieres verlo?[1-]Claro que sí[2]No hace falta")
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
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "¡Eh! Tengo un consejo especial para ti.\n¿Quieres verlo?[1-]Claro que sí[2]No hace falta")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "Vale, pues nada... ¡Buena suerte!")
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "¡Eh! <pause 10>No tengo nada nuevo para ti,\npero puedes ver todo lo que hay\ndisponible hasta el momento.\n\n¿Quieres ver algo?\n[1-]Claro que sí[2]No hace falta")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "¡Eh! Tengo un consejo especial para ti.\n¿Quieres verlo?[1-]Claro que sí[2]No hace falta")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

