          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("Muy bien, dejo aquí la sopa.\n\n\n\nAunque este sitio no me gusta nada...\nParece como si algo monstruoso fuese\na asomar en cualquier momento...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("En fin, yo ya he cumplido con mi parte.\n¡Adiós!\x0E\x01\x05\x04(\x00")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf("Vaya, jovencito, has logrado hacerte\ncon la Trifuerza... ¡Impresionante!")
          		flw_35:
/*< 35>*/ 		printf("Ahora ya solo hay una cosa que te resta\npor hacer, jovencito. ¿Hace falta que\nte diga lo que es?\n\nElige tu propio camino y síguelo hasta\nel final.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf("Vaya, jovencito, has encontrado el\nlugar donde descansa la Trifuerza...\n¡Impresionante!")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf("No creo que haga falta decirte lo que\ndebes hacer ahora, ¿no? Ese cantar\nte abrirá la puerta del último juicio.\n\nDicha puerta aguarda en algún lugar\nde <b<Celéstea>>. Si superas la prueba, el\ncamino que lleva a la <y+<Trifuerza >>te será\nrevelado.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 13, 'param3': 6}
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf("¡Jo, jo, jo! ¿Cómo te va todo,\njovencito?\n\n\nVuelve a verme cuando hayas reunido\nlas tres estrofas del cantar del Héroe\nen poder de los tres espíritus.\n\nRecuerda, los tres espíritus moran\nen el bosque de Farone, el volcán\nde Eldin y el desierto de Lanayru,\nrespectivamente.\n¡Debes dar con ellos sin falta!")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf("Cuando hayas conseguido que los tres\nespíritus te enseñen las tres estrofas\ndel Cantar del Héroe, acude a mí.\n\nEntonces entonaré para ti la última\nestrofa, la que completa el cantar.\n\n\n\x0E\x01\x08\x02\xFFCD(Aunque antes debería practicar un poco,\nhace siglos que no canto.)\x0E\x01\x08\x02Í")
          					  case 1:
          						printf("Oh, ¿tú eres ese joven que me ha traído\nmi deliciosa sopa de calabaza?\n\n\nEstaba completamente ido desde que\nme atacó ese maldito monstruo,\n¿sabes?\n\nSolo el aroma de mi sopa de calabaza\nfavorita ha logrado hacerme recuperar\nel juicio...\n\nTe lo agradezco mucho, de veras.")
/*<  1>*/ 						printf("Yo soy <b<Narisha>>, el gran espíritu que\nrige los cielos tal y como me encomendó\nla ya desaparecida <b<Diosa Hylia>>.\n\nMmm...<pause19> Así que te llamas\nLink, ¿verdad?\nUn nombre bonito, sí... \n\nTus padres demostraron tener muy\nbuen gusto al ponértelo.\n\n\n<pause14>Un momento...\n<pause14>Esa espada...\n<pause14>Ese poder que emana de tu ser...\n\nDime, Link, \n¿acaso eres el elegido de la Diosa?\n\n\nYa veo... Has venido ante mí para\npreguntarme acerca de la <y+<Trifuerza>>,\n¿no es así?\n[1]En efecto[2]¿Sabes algo?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf("Tal como imaginaba...<pause19> Muy bien,\njovencito, escucha pues lo que voy\na relatarte.\n\nComo bien sabrás, las hordas malignas\ntrataron una vez de hacerse con la\nTrifuerza.\n\nPero la Diosa se encargó por todos los\nmedios de que no lo lograran.\nY para ello la escondió en un lugar de\n<b<Altárea>>, un lugar que nadie conoce.\nDe hecho, a día de hoy ni siquiera yo\nsé dónde yace la Trifuerza.\n\n\nPero la Diosa me dejó algunos indicios\npara poder dar con ella.\n\n\nY están recogidos en el <r<Cantar del\nHéroe>>, que se toca con una <b<lira >>como\nesa que llevas.")
/*<  5>*/ 							printf("Puede decirse que el Cantar del Héroe\nes la <r<llave>> que abre el camino de la\nTrifuerza.")
/*<  6>*/ 							printf("La Diosa dividió el cantar en cuatro\nestrofas y nos las dio a mí y a los otros\ntres espíritus que moran en las tierras\ninferiores.\nAsí pues, debes presentarte ante ellos\npara recopilar cada una de las <r<<pling>estrofas\ndel Cantar del Héroe>>.\n\nCuando tengas las tres, ven a verme\ny te enseñaré la estrofa que completa\nel cantar.\n\n¿Entendido? Los tres espíritus moran\nen el bosque de Farone, el volcán de\nEldin y el desierto de Lanayru,\nrespectivamente.\n¡Debes encontrarlos a los tres,\njovencito!")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf("¿Cómo que si sé algo?...\n¡Menudo tono para dirigirse al señor\nde los cielos!\n<pause14>En fin, es igual...")
          							goto flw_4
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_120_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 30>*/ 		scene_flags[21 'The Sky'][37 /* 0x5 20 */] = true;
          	  case 1:
/*< 29>*/ 		scene_flags[21 'The Sky'][36 /* 0x5 10 */] = true;
          	}
          }

