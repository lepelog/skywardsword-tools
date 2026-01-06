          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "Muy bien, dejo aquí la sopa.\n\n\n\nAunque este sitio no me gusta nada...\nParece como si algo monstruoso fuera\na aparecer en cualquier momento...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 92, line: 14 */ "Bien, yo ya he cumplido con mi parte.\n¡Adiós!<0x10005:0x00280000>")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 92, line: 11 */ "Vaya, jovencito, has logrado obtener\nla Trifuerza... ¡Impresionante!")
          		flw_35:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Ahora solo falta hacer una cosa, y\nestoy seguro de que sabes qué es.\nElige tu propio camino y síguelo hasta\nel final.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 92, unk: 1, line: 10 */ "Vaya, jovencito, has encontrado el\nlugar donde descansa la Trifuerza...\n¡Impresionante!")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Seguro que sabes lo que tienes que\nhacer ahora. Ese cantar te abrirá\nla puerta del último juicio.\n\nDicha puerta aguarda en algún lugar\ndel <color blue<cielo>coloroff>. Si superas la prueba, el\ncamino que lleva a la <color yellow white<Trifuerza >coloroff>te\nserá revelado.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							wait_frames(20)
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "¡Jo, jo, jo! ¿Cómo va tu aventura\njovencito?\n\n\nVuelve a verme cuando hayas reunido\nlas tres estrofas del Cantar del Héroe\nen poder de los tres dragones.\n\nRecuerda, los tres dragones moran\nen el bosque de Farone, el volcán\nde Eldin y el desierto de Lanayru,\nrespectivamente.\n¡Debes hablar con ellos sin falta!")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf(/* textboxtype: 92, unk: 1, line: 7 */ "Cuando hayas conseguido que los tres\ndragones te enseñen las tres estrofas\ndel Cantar del Héroe, acude a mí.\n\nEntonces entonaré para ti la última\nestrofa, la que completa el cantar.\n\n\n<0x10008:0xffcd>Aunque antes debería practicar un poco,\nhace siglos que no canto...<0x10008:0x00cd>")
          					  case 1:
          						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Dime, muchacho. ¿Eres tú el joven\nque me ha traído mi deliciosa sopa\nde calabaza?\n\nTe pido que me disculpes por mi\ncomportamiento. Cuando me atacó\nese monstruo, perdí completamente\nel control de mí mismo.\nSolo el aroma de mi sopa de calabaza\nfavorita ha logrado hacerme recuperar\nel juicio...\n\nTe lo agradezco mucho, de veras.")
/*<  1>*/ 						printf(/* textboxtype: 92, unk: 1, line: 1 */ "Yo soy <color blue<Narisha>coloroff>, el gran espíritu que\nrige los cielos. Aunque ya no está con\nnosotros, la <color blue<Diosa Hylia >coloroff>me encomendó\nesta tarea.\nMmm...<pause 25> Así que te llamas\n<heroname>, ¿verdad?\nUn nombre bonito, sí... \n\nTus padres demostraron tener muy\nbuen gusto al dártelo.\n\n\n<pause 20>Un momento...\n<pause 20>Esa espada...\n<pause 20>Ese poder que emana de tu ser...\n\nDime, <heroname>, \n¿acaso eres el elegido de la Diosa?\n\n\nYa veo... Has venido ante mí para\npreguntarme acerca de la <color yellow white<Trifuerza>coloroff>,\n¿no es así?\n[1-]En efecto[2-]¿Sabes algo?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Tal como imaginaba...<pause 25> Muy bien,\njovencito, escucha lo que voy\na relatarte.\n\nComo bien sabrás, las hordas malignas\ntrataron una vez de conseguir la\nTrifuerza.\n\nPero la Diosa se encargó por todos los\nmedios de que no lo lograran.\nY para ello la escondió en un lugar de\n<color blue<Neburia>coloroff>, un lugar que nadie conoce.\nDe hecho, ni siquiera yo sé dónde\nyace la Trifuerza.\n\n\nSin embargo, la Diosa me dejó algunos\nindicios para poder encontrarla.\n\n\nEstán recogidos en el <color red<Cantar del\nHéroe>coloroff>, una melodía que se toca\ncon una <color blue<lira >coloroff>similar a la que llevas.")
/*<  5>*/ 							printf(/* textboxtype: 92, unk: 1, line: 4 */ "El Cantar del Héroe es la <color red<llave\n>coloroff>que abre el camino de la Trifuerza.")
/*<  6>*/ 							printf(/* textboxtype: 0, unk: 92, line: 5 */ "La Diosa dividió el cantar en cuatro\nestrofas y nos las dio a mí y a los tres\ndragones que moran en las tierras\ninferiores.\nEs decir, debes presentarte ante ellos\npara escuchar cada una de las <color red<<sound 4>estrofas\ndel Cantar del Héroe>coloroff>.\n\nCuando tengas las tres, ven a verme\ny te enseñaré la estrofa que completa\nel cantar.\n\n¿Entendido? Los tres dragones moran\nen el bosque de Farone, el volcán de\nEldin y el desierto de Lanayru,\nrespectivamente.\n¡Debes encontrarlos a los tres!")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf(/* textboxtype: 0, unk: 92, line: 2 */ "¿Cómo que si sé algo?...\nTe das cuenta de que estás hablando\ncon el señor de los cielos, ¿verdad?\n<pause 20>Bueno, no importa...")
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

