          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf("\x0E\x01\x09\x04\x00\x04¡Eh, Link! ¿Has visto los\nraíles que he instalado ahí fuera?\n\n\n\x0E\x01\x09\x04\x00\xB00¿Preguntas para qué sirven? Je, je...\n¡Pronto lo descubrirás!")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          		  case 1:
          			flw_347:
/*<347>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 453, 'param3': 32}
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf("¡Este árbol es impresionante! Ahora\nentiendo por qué lo llaman \"el árbol\nde la vida\".")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf("¿No te parece que este lugar es un\npoco deprimente? ¡No hay nada de\nnada! Y pensar que la anciana lleva\naquí tanto tiempo...\n¡¿Cómo no se le habrá ocurrido plantar\nun árbol, por lo menos?!")
          				  case 1:
/*<458>*/ 					printf("Cuando miro a la anciana, no puedo\npensar en dejarla abandonarla\na su suerte.\n\n\x0E\x01\x09\x04\x00\xA00¡Así que he decidido quedarme a cuidar\nde ella! Pero no les digas nada a los de\nmi pandilla, ¿entendido?")
          				}
          			}
          		}
          	  case 1:
/*<383>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          			  case 0:
          				goto flw_347
          			  case 1:
/*<385>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
          					flw_384:
/*<384>*/ 					switch (scene_flags[37 /* 0x5 20 */]) {
          					  case 0:
/*<388>*/ 						set_camera(64, 0)
/*<390>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					  case 1:
/*<387>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					}
          				  case 1:
          					goto flw_347
          				}
          			}
          		  case 1:
          			goto flw_384
          		}
          	}
          }

          void entrypoint_501_08() {
/*<170>*/ 	start()
/*<171>*/ 	switch (scene_flags[81 /* 0xB 02 */]) {
          	  case 0:
/*<175>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 174, 'param3': 32}
/*<174>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': -1, 'next': 176, 'param3': 16}
/*<176>*/ 		set_camera(21, 0)
/*<172>*/ 		printf("\x0E\x01\x09\x04\xE00\n¡Espera, Link!\n¡No es el momento de usar el poder\ndel <r<rayo celestial>>!\n\n¡Así solo conseguirás que la bestia\ndespierte antes!\n\n\n¡Lo primero que debes hacer es\nvolver a <r<encerrarla en el sello>>!\n¡Date prisa!")
/*<173>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<332>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 153, 'param3': 32}
/*<153>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 155, 'param3': 32}
/*<155>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<459>*/ 		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<460>*/ 		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<477>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1010, 'next': 156, 'param3': 24}
/*<156>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 157, 'param3': 6}
/*<157>*/ 		set_camera(20, 0)
/*<158>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1034, 'param2': 12800, 'next': 159, 'param3': 13}
/*<159>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': -256, 'next': 275, 'param3': 13}
/*<275>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 160, 'param3': 50}
/*<160>*/ 		printf("\x0E\x01\x09\x04\x40A\x321F\x0E\x01\x08\x02\x1CD¡Uaaah!\x0E\x01\x05\x04\x1E\x00")
/*<288>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': -256, 'next': 287, 'param3': 13}
/*<287>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 284, 'param3': 50}
/*<284>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 161, 'param3': 6}
/*<161>*/ 		set_camera(21, 0)
/*<162>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 285, 'param3': 15}
/*<285>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 286, 'param3': 6}
/*<286>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 293, 'param3': 6}
/*<293>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1085, 'param2': 12800, 'next': 292, 'param3': 13}
/*<292>*/ 		{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 0, 'next': 163, 'param3': 40}
/*<163>*/ 		printf("\x0E\x01\x09\x04\xE00\nMe temo que el <r<sello ha vuelto\na romperse>>...\n\n\nY el <r<monstruo >>ha comenzado\na despertarse.\n\n\nTal vez haya reaccionado ante la\n<r<energía >>que irradia tu espada.\n\n\n\x0E\x01\x09\x04\xE01\xB00Por desgracia, no tenemos otra\nopción que usarla para abrir el\nPortal del Tiempo.")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf("\x0E\x01\x09\x04\xE10\x1600¡Link, debes volver\na encerrar a la bestia!")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf("\x0E\x01\x09\x04\x400\x30D¡Muy bien! ¡Estoy preparado!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf("\x0E\x01\x09\x04\x40F\x2F0F¡Ha llegado la hora de poner a prueba\nmi gran invento! ¡Vamos a hacer \npedazos a ese monstruo, ya lo verás!\n\n\x0E\x01\x09\x04\x40B\x3101¿Qué estás esperando? ¡Vamos,\ntenemos que salir a enfrentarnos\ncon él!")
/*<291>*/ 		set_camera(22, 0)
/*<294>*/ 		{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 516, 'next': 295, 'param3': 14}
/*<295>*/ 		set_camera(51, 0)
/*<296>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 179, 'param3': 6}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 466, 'param3': 24}
/*<466>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 177, 'param3': 6}
/*<177>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<169>*/ 		scene_flags[10 'Sealed Grounds'][81 /* 0xB 02 */] = true;
/*<451>*/ 		story_flags[795 /* us: 805A9B2F 0x08, jp: 805ACDAF 0x08 */] = false;
/*<178>*/ 		story_flags[144 /* us: 805A9AEE 0x04, jp: 805ACD6E 0x04 */] = true;
/*<468>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<168>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_501_25() {
/*<346>*/ 	start()
/*<381>*/ 	set_camera(63, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 372, 'param3': 32}
/*<372>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<380>*/ 		printf("\x0E\x01\x06\x02\xFFCDEse muchacho pelirrojo es mucho\nmás mañoso de lo que creía.\n\n\nAlgunas zonas del templo necesitan\nun arreglo. Quizás pueda ayudarme...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf("\x0E\x01\x06\x02\xFFCDEste templo siempre ha sido un lugar\nde lo más apacible, pero últimamente\nlas cosas se han complicado bastante.\n\nDe todas formas, no es momento\nde pensar en estas cosas...\nNo cuando mis peores augurios\nse están haciendo realidad...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf("\x0E\x01\x06\x02\xFFCDEspero que todavía estés a tiempo de\nsalvar a Zelda...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf("\x0E\x01\x06\x02\xFFCDEspero que todavía estés a tiempo de\nsalvar a Zelda...")
          				  case 1:
/*<376>*/ 					printf("\x0E\x01\x06\x02\xFECD.<pause0A>.<pause0A>.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_501_09() {
/*<  4>*/ 	start()
/*<216>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<474>*/ 		switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x05Así que buscas a los tres dragones,\n¿no? Creo que el del trueno vivía en\nel desierto...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf("\x0E\x01\x09\x04\x00\n¡Link!\n¡Colabora con <b<Vilán >>y encierra\nde nuevo a esa bestia!")
          				  case 1:
/*<481>*/ 					printf("\x0E\x01\x09\x04\x00\n¡<r<El monstruo >>ha vuelto a despertar!\nAl parecer, el sello de <b<Zelda >>está casi\nal límite de su poder.\n\nAdelante, <b<Link>>. Tú y\n<b<Vilán >>deben colaborar y hacer todo\nlo que puedan para encerrar de nuevo\na esa bestia.\n¡Nuestro destino depende de ustedes!")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf("\x0E\x01\x09\x04\x00\x05¿Vas a buscar a los tres dragones?\nCuando completes el Cantar del Héroe,\npodrás por fin localizar la Trifuerza.\n¡Te deseo suerte!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf("La clave para encontrar la Trifuerza\nse encuentra sin duda en <b<Neburia>>.\n\n\n\x0E\x01\x09\x04\xE00\x07Ya sabes lo que tienes que hacer.")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf("\x0E\x01\x09\x04\xE00\x04¡Espera, Link!\nLa alteración no se produjo en\nesa dirección.")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf("¡No hay tiempo que perder! Sal por\nla puerta del otro lado e investiga\nlo que está sucediendo.")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf("¿O acaso necesitas prepararte\nmejor? Si es así, no te lo impediré,\n¡pero debes darte prisa!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_501_27() {
/*<440>*/ 	start()
/*<444>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 476, 'param3': 32}
/*<476>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 446, 'param3': 17}
/*<446>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 447, 'param3': 6}
/*<447>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 441, 'param3': 40}
/*<441>*/ 	set_camera(3, 0)
/*<442>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 448, 'param3': 24}
/*<448>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': -1, 'param3': 6}
          }

          void entrypoint_501_10() {
/*< 59>*/ 	start()
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 60, 'param3': 32}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 405, 'param3': 32}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 404, 'param3': 50}
          	flw_404:
/*<404>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Has conseguido encerrar a la bestia\nuna vez más.")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 401, 'param3': 6}
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 403, 'param3': 6}
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 63, 'param3': 6}
/*< 63>*/ 	printf("Gracias, Link...")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf("Y a ti también, <b<Vilán>>.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf("No sé qué habría pasado si no\nhubieran estado aquí.")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x400\x0DBueno, ya es suficiente. ¡Je, je!\nVas a hacer que me sonroje.\n\n\nAdemás, fuiste tú la que logró que\ndejara de lamentarme y pensara\nen qué podía hacer para ayudar.")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf("\x0E\x01\x09\x04\xE08\xB0BLo hice porque sabía que, dentro de\nti, la llama del valor arde con fuerza.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 74, 'param3': 6}
/*< 74>*/ 	printf("\x0E\x01\x09\x04\xE00\x07Bien, Link. Es hora de que\nhablemos sobre la verdadera\nnaturaleza de esa bestia.\n\nPues no es otra que la propia esencia\ndel mal. Cuando atravieses el Portal\ndel Tiempo, hallarás las respuestas\nque buscas.\n\x0E\x01\x09\x04\xE01\xB00Por mucho que intentemos retenerlo,\nese diabólico ser despertará una y\notra vez.\n\nPor eso no queda más remedio que\neliminar el origen del mal de raíz.\n\n\n\x0E\x01\x09\x04\xE10\xB00Date prisa, Link. Desata\nel poder del rayo celestial.")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x40D\x206¡Concentra el poder del rayo celestial\nen tu espada y <g<lánzalo >>sobre el Portal\ndel Tiempo!")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf("¿Está bien así, anciana?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xE01\x07Sí... ¡Adelante, Link!")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf("Desaconsejo plantar esa semilla aquí.\nHarían falta largos años para que\ncreciese y se convirtiese en un árbol.")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf("\x0E\x01\x09\x04\x00\x03<b<Vilán >>está preparándolo todo para\nque puedas llegar al bosque.\n\n\nLink, puede que le haya\nsucedido algo a la <r<dragona del agua\nque vive en el bosque>>. ¡Cuento contigo\npara averiguarlo!")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x00\nHa llegado la hora, Link.\n\n\n\n¡Regresa a Neburia para obtener\nla Trifuerza!")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x00\nCuando consigas superar el último\njuicio, estarás preparado para recibir\nla Trifuerza.\n\n¡Regresa cuanto antes a Neburia y\nenfréntate al último desafío!")
          					  case 1:
/*<488>*/ 						printf("\x0E\x01\x09\x04\x00\x14¡Fabuloso, Link!\nLos tres dragones te han enseñado\nlas estrofas de la canción. ¡No hay\ntiempo que perder!\n¡Tienes que volver sin demora\na los cielos para completar el\nCantar del Héroe!")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf("\x0E\x01\x09\x04\x00\x03Por lo visto, <b<Vilán >>te está esperando.\nEstá <r<junto a esa máquina lanzarrocas>>.\nSerá mejor que vayas a verlo.")
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\x03Ah, llegas en el momento justo,\nLink.\n\n\n<b<Vilán >>te está esperando.\n\n\n\nLo encontrarás <r<junto a la catapulta>>\nesa que ha construido. Será mejor\nque vayas a verlo.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf("\x0E\x01\x09\x04\x00\x07Es increíble que sucediera algo así en\nel bosque. Pero, por fortuna, todo ha\nvuelto a la normalidad.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x00\x03Por cierto, Link, <b<Vilán\n>>te está esperando.\n\n\nEstá <r<junto a la catapulta >>esa que\nha construido. Será mejor que vayas\na verlo.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\nTienes que conseguir cuanto antes\ntodas las estrofas del <r<Cantar del\nHéroe>>. ¡No nos queda mucho tiempo!")
          		  case 1:
/*<221>*/ 			printf("\x0E\x01\x09\x04\x00\x07Es increíble que sucediera algo así en\nel bosque. Pero, por fortuna, todo ha\nvuelto a la normalidad.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x0B\x04\x00\x06¡Muy bien! Veo que aprendes rápido.\n\n\n\nPasemos a la siguiente lección.")
/*<271>*/ 	printf("Ahora intenta seguir el ritmo del\ncírculo de luz.\n\n\nYo cantaré mientras tocas.\n\n\n\nEste canto te resultará útil en\ntu misión.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf("\x0E\x01\x09\x04\x0D\xF0A¡Sí, señor! ¿No es el árbol más\nmajestuoso que has contemplado\njamás? ¡Queda perfecto como\nsímbolo de este templo!\n\x0E\x01\x09\x04\x03\x200¡Solo con verlo me siento un poco\nmás vivo!")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf("\x0E\x01\x09\x04\x0D\x22EBueno, al menos ya hemos plantado\nla semilla, pero hasta que crezca y\nse convierta en un gran árbol...\n<pause14>Vamos a tener que esperar mucho.")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf("\x0E\x01\x09\x04\x0D\x204¡Hola, Link! Oye, esa\nsemilla que llevas ahí es fantástica...\n¿Dónde la has encontrado?\n\n\x0E\x01\x09\x04\x00\xE0E¡Si la plantamos aquí, podría\nconvertirse en un enorme árbol!\n\n\n\x0E\x01\x09\x04\x03\x200Aunque...<pause0A> nos iba a llevar mucho,\nmucho tiempo...")
          					  case 1:
/*<255>*/ 						printf("\x0E\x01\x09\x04\x00\x02¡Recuerda que cuento contigo para\nayudar a <b<Zelda>>, Link!\n\n\nPor cierto, en cuanto a mi idea de\n<r<plantar >>un gran árbol por aquí...\n¿Tú no tendrás alguna semilla que\npueda valerme?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf("\x0E\x01\x09\x04\x0C\x206Al otro lado te espera <b<Zelda>>...\n\n\n\n¡Date prisa, Link!")
          		}
          	  case 1:
/*<465>*/ 		printf("\x0E\x01\x09\x04\x0C\x20D¡Tienes que concentrar el poder del\nrayo celestial en tu espada y <g<lanzarlo>>\nsobre el Portal del Tiempo!\n\nAl otro lado te espera <b<Zelda>>...\n\n\n\n¡Date prisa, Link!")
          	}
          }

          void entrypoint_501_15() {
/*< 51>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 52, 'param3': 32}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 55, 'param3': 32}
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 53, 'param3': 17}
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 274, 'param3': 17}
/*<274>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 57, 'param3': 50}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 321, 'param3': 13}
/*<321>*/ 	set_camera(54, 0)
/*<322>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 361, 'param3': 6}
/*<361>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1009, 'next': 56, 'param3': 24}
/*< 56>*/ 	printf("\x0E\x01\x09\x04\x400=¡¿Pero qué dices, anciana?!")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 12, 'param3': 6}
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x400\x02No sabes de qué estás hablando.\n¡Atrévete a repetirlo!")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf("\x0E\x01\x09\x04\xE00\nSolo digo la verdad. Lo siento, pero no\nserás tú quien salve a la sacerdotisa,\n<b<Zelda>>.\n\nLas antiguas profecías dicen que\nesa misión le corresponde a otro.\nA aquel que salvará el mundo.")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CD¡Tonterías!\n\n\n\nEs obvio que no me conoces bien.\nSi me conocieras, ¡sabrías que si \nalguien puede salvar a <b<Zelda >>es\nel gran <b<Vilán>>!\nPor eso estoy aquí. Si no me encargara\nyo, ¡nadie lo haría! ¡Solo yo estaría\ndispuesto a hacer el papel de héroe!")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 24, 'param3': 6}
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x400\x1E¿Eh?")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 79, 'param3': 6}
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 21, 'param3': 6}
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x400\x3218Oh... Ahora lo entiendo.\n\n\n\n\x0E\x01\x09\x04\x40D\xA00Link, esta anciana está\nintentando decirme que tú\nvas a ser quien salve a <b<Zelda>>.")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 393, 'param3': 6}
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\x400<¡Qué gracioso! No me creo toda esa\nhistoria del destino. ¡Son un montón\nde tonterías sin sentido!\n\n\x0E\x01\x09\x04\x40B\xA00¡Te conozco, y tú no eres ningún\nhéroe! ¡Solo un debilucho!")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x4008\x0E\x01\x08\x02\x1CD¡Grrrrrr!\x0E\x01\x05\x04-\x00")
/*< 39>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 462, 'param3': 6}
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 281, 'param3': 6}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 40, 'param3': 6}
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Link, ¿finalmente pudiste\nver a <b<Zelda>>?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF05Ya veo. Así que también te encontraste\ncon ella.\n\n\nLa mujer que viste junto a Zelda\nse llama <b<Impa>>.\n\n\nEs su servidora, enviada por la\nmismísima <b<Diosa>>.")
/*< 50>*/ 	printf("Impa y Zelda se dirigen al lugar\ndesignado por la Diosa para cumplir\nsu destino.\n\nSin embargo, dado que Impa destruyó\nla puerta que usaron en su último viaje,\nsolo queda un modo de seguirles\nla pista.")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF00Debes usar el poder de la <b<lira >>que\nZelda te entregó.")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Dime, Link...\n¿Sabes ya tocar la <b<lira>>?\n\n\nPuedo percibir que todavía no estás\nfamiliarizado con ella.\n\n\nMuy bien, te enseñaré cómo tocarla.\nEscucha bien y haz lo que te diga.\n\n\nEn primer lugar, oprime (^) para sacar\nla lira. Después mantén oprimido (A)\npara comenzar a tañer las cuerdas.\x0E\x01\x11\x02\x8CD")
/*< 48>*/ 	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 45, 'param3': 42}
/*< 45>*/ 	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
          }

          void entrypoint_501_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 68, 'param3': 32}
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 298, 'param3': 32}
/*<298>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 404, 'param3': 50}
          	goto flw_404
          }

          void entrypoint_501_17() {
/*<144>*/ 	start()
          	flw_134:
/*<134>*/ 	printf("\x0E\x01\x09\x04\x10\x160F¡Oh, mira tu espada!\n\n\n\n\x0E\x01\x09\x04\x00\xB00No hay duda. Las tres llamas sagradas\nhan purificado la hoja y ahora alberga\nun tremendo poder. Parece que lo has\nlogrado, Link.")
/*<135>*/ 	printf("\x0E\x01\x09\x04\x01\xFF07Lo que sientes es... la <r<fuerza>>.\n\n\n\n\x0E\x01\x09\x04\x00\xB00Un poder sagrado que los dioses\nantiguos concedieron a nuestro\nmundo, tal y como dice el Cántico\nde la Diosa.\nSolo hay que mirarte para ver ese\nmismo poder rezumando de ti y de\ntu espada.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf("\x0E\x01\x09\x04\x00\x1603¡Vamos, Link!\n¡Ha llegado la hora de abrir\nel Portal del Tiempo!")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 398, 'param3': 6}
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf("El <r<poder >>del <r<rayo celestial >>debería ser\nsuficiente para activarlo.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf("¡Deprisa, súbete a ese pedestal\ny <g<descarga el poder de la espada>>\nsobre el Portal del Tiempo!")
/*<142>*/ 	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
/*<370>*/ 	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<139>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_18() {
/*< 81>*/ 	start()
/*< 82>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 310, 'param3': 32}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 437, 'param3': 50}
/*<437>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 428, 'param3': 6}
/*<428>*/ 	set_camera(2, 0)
/*< 85>*/ 	printf("\x0E\x01\x09\x04\xE01\x103Has regresado, Link...")
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 429, 'param3': 17}
/*<429>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 430, 'param3': 47}
/*<430>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 356, 'next': 431, 'param3': 15}
/*<431>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 432, 'param3': 6}
/*<432>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 433, 'param3': 17}
/*<433>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 435, 'param3': 17}
/*<435>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 434, 'param3': 6}
/*<434>*/ 	set_camera(32, 0)
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 86, 'param3': 48}
/*< 86>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 461, 'param3': 6}
/*<461>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1015, 'next': 87, 'param3': 24}
/*< 87>*/ 	printf("Comprendo. Ahora ya lo sabes todo.")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf("Correcto. Tras esa puerta, <b<Zelda>>\npermanece sumida en un profundo\nsueño.\n\nNo debes preocuparte, pues sigue\ncon vida.")
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 313, 'param3': 6}
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf("Según la leyenda, la Diosa ocultó\nen Neburia la <y+<Trifuerza>>, el único\npoder capaz de acabar con el Heraldo\nde la Muerte.\n\x0E\x01\x09\x04\xE01\xB00Sin embargo, nadie conoce el lugar\nexacto...<pause0F> porque jamás ha sido\nrevelado.")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf("\x0E\x01\x09\x04\xE14\xB00 Link... Seguro que tú has\nllegado a la misma conclusión,\npero la repetiré de todos modos.\n\nLa clave para encontrar la Trifuerza\nse encuentra sin duda en <b<Neburia>>.")
/*<315>*/ 	printf("\x0E\x01\x09\x04\xE08\xB07¡Vamos, ve en busca de la Trifuerza!")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf("\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CD¡Oye, espera un momento!")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x403\xFF00¡Tengo que preguntarte una cosa,\nLink!")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 89, 'param3': 6}
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 88, 'param3': 6}
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x403\xFF02Este... <b<Zelda>>... ¿Se encuentra bien?\n[1]Muy bien[2]Verás...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("¿En serio? Me alegro mucho.\n\n\n\n\x0E\x01\x09\x04\x403\x200Pero parece que sigue metida en todo\nesto hasta el final, ¿verdad?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x40E\xD09Link... Estoy decidido.\nNo voy a regresar a Neburia.\n\n\n\x0E\x01\x09\x04\x400\x200Me quedaré aquí a vivir con la\nanciana.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x400\xFF0DJe, je, je... ¡No me mires así!\nLo he pensado mucho y es lo que\nquiero hacer.\n\n\x0E\x01\x09\x04\x400\x200Es que... tengo la impresión de que\nen este lugar soy útil de verdad.\nY además, así puedo vigilar a la\nbestia... \x0E\x01\x09\x04\x400\x211y cuidar de la anciana.\nNo es mucho comparado con tu\nmisión, pero quizás es mi destino.\n¿Me entiendes?\n")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x403\xD08Además, me gusta este sitio.\n\n\n\nPor supuesto que extrañaré Neburia,\npero me encanta disfrutar del olor\nde la tierra. ¿Te parece raro?")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf("\x0E\x01\x09\x04\x40D\x209¡Mira!")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf("\x0E\x01\x09\x04\x404\x208Gracias a Zelda y a la anciana, esta\ntierra vuelve a estar rebosante de\nvida.\n\n<r<Si plantamos una semilla >>aquí, estoy\nseguro de que se convertirá en el\nárbol más grande y frondoso que\njamás hayamos visto.\nAdemás, seguro que al verlo mucha\ngente se animaría a venirse a vivir\naquí.\n\n\x0E\x01\x09\x04\x40D\x211Ya sé que pasan muchos años hasta\nque un árbol crece y se hace grande,\npero hay que ser paciente, ¿no?\n\n\x0E\x01\x09\x04\x400\x12Ahora mismo es lo que más me\napetece hacer, de verdad.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf("\x0E\x01\x09\x04\x40D\x22EY bueno, yo... Pues...\nCuando vuelvas a Neburia, saluda\na todos de mi parte, ¿de acuerdo?\n\n\x0E\x01\x09\x04\x400\xE00Supongo que los de mi pandilla se\npondrán muy tristes, pero diles que\naquí todo me va muy bien.\n\n\x0E\x01\x09\x04\x400\x209Gracias, Link.")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x400\x1400Eso es terrible. Debe ser muy difícil\npara ella.\n\n\n\x0E\x01\x09\x04\x403\x200Pero tú te encargarás de resolver\ntodo este lío, ¿verdad?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x00\nYa habrá tiempo de hablar más\nadelante. ¡Ahora debes marcharte!")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x03Seguro que ya has visto el valle del\nexterior en forma de espiral.\nEn el fondo hay un sello que\noculta algo.\nPor el momento no hace falta que\nsepas nada más, pero tarde o\ntemprano lo descubrirás.")
          		}
          	  case 1:
/*<  2>*/ 		printf("\x0E\x01\x09\x04\x00\x1303La puerta que da al <r<bosque de Farone\n>>está abierta. Atraviésala y sigue\nadelante para llegar a la entrada.\n\nUn día, la verdad te será revelada,\nLink... Sé fuerte y no\ntengas miedo.")
          	}
          }

          void entrypoint_501_19() {
/*<210>*/ 	start()
/*<326>*/ 	set_camera(55, 0)
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 6}
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 1, 'next': 327, 'param3': 40}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 328, 'param3': 14}
/*<328>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 329, 'param3': 6}
/*<329>*/ 	set_camera(59, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 335, 'param3': 6}
/*<335>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDAh...<pause0F> El joven llegado del cielo\na través del inmenso mar de nubes.\nTe doy la bienvenida, joven elegido.\n")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 340, 'param3': 6}
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 337, 'param3': 6}
/*<337>*/ 	printf("\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECD¿Cómo debo llamarte?\n\n\n\n...<pause28> ¿Link?\nEstá bien. Bienvenido pues,\nLink.\n\nVeo que ya dominas el poder sagrado\nque imbuye tu espada cuando la <g<alzas\nhacia el cielo>>, el<pling> <r<rayo celestial>>.\n¿No es así?\n\x0E\x01\x09\x04\x00\x0BEso demuestra que eres digno de\nla <b<espada divina>> que te ha sido\nencomendada.\n\n\x0E\x01\x06\x02\xFFCDDebes saber que llevo esperando tu\nllegada desde hace mucho, mucho\ntiempo. Yo seré quien te guíe.")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf("Este lugar se conoce como el <b<templo\ndel presidio>>, y lo erigió la Diosa en\nuna época remota.\n\nTu llegada se predijo hace mucho\ntiempo, casi una eternidad.\n\n\nEn cuanto a la joven sacerdotisa que\nestás buscando, ha descendido\nhasta estas tierras guiada por un\nrayo de luz. Todo estaba escrito...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 185, 'param3': 6}
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00\nSin embargo, la llegada de la\nsacerdotisa ha sido diferente a como\nse describía en las profecías.\n\nEs obvio que una poderosa fuerza\nmaligna trata de imponer su voluntad\npara cambiar el destino.")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF08Link...<pause1E> Estás preocupado\npor el futuro de la sacerdotisa,\n¿me equivoco?\n\nSin embargo, ahora mismo debes mirar\nhacia delante. Al igual que ella, tú\ntambién tienes una importante misión\nque cumplir.\nLa sacerdotisa ha ido al <b<bosque de\nFarone >>para descubrir su destino.\nPartirás en su búsqueda.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF00Observa tu mapa...")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 363, 'param3': 6}
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf("El punto señalado con \x0E\x02\x04\x02\x19CD marca\nla senda hacia el <b<bosque de Farone>>.\n\n\nSin embargo, recorrer esta tierra\ndesconocida y llena de monstruos\ncon la única ayuda de un mapa\nresultaría demasiado peligroso.\nPor tanto, a partir de ahora te\nconferiré el poder para plantar\n<r<balizas>>.\n\nCuando plantes una <r<baliza >>en el mapa,\nsurgirá una columna de luz hacia el\ncielo que te servirá de guía para llegar\nal lugar elegido.\nAdelante, mira el mapa y pon una\nbaliza sobre \x0E\x02\x04\x02\x19CD. Tanto para colocarlas\ncomo para recogerlas, solo tienes que\noprimir (C).\x0E\x01\x11\x02\x6CD")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf("\x0E\x01\x09\x04\x00\x03Desde aquí es imposible verla, pero te\naseguro que la baliza está plantada.\nSal afuera y compruébalo con tus\npropios ojos.\nCuando ya no la necesites, abre el mapa\ny oprime (C) sobre ella para eliminarla.\x0E\x01\x11\x02\x6CD\n\n\n¡Ahora puedes continuar tu viaje sin\nmiedo a perderte! ")
/*<194>*/ 		printf("\x0E\x01\x09\x04\x0E\xFF03Vamos, no pierdas más tiempo y\ndirígete al bosque de Farone para\nseguir el rastro de <b<Zelda>>.\n\nLlévate lo que encuentres en el <r<cofre\ndel tesoro >>que hay en esta sala.\nTe será útil para tu misión.")
/*<195>*/ 		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
/*<198>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 6}
/*<196>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 197, 'param3': 32}
/*<197>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 199, 'param3': 17}
/*<199>*/ 		set_camera(40, 0)
/*<358>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 279, 'param3': 13}
/*<279>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 200, 'param3': 17}
/*<200>*/ 		make_actor_do_something(0, 0)
/*<201>*/ 		set_camera(41, 0)
/*<202>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 203, 'param3': 6}
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 205, 'param3': 24}
/*<205>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 204, 'param3': 6}
/*<204>*/ 		set_camera(42, 0)
/*<206>*/ 		printf("Sal por esa puerta trasera y continúa\nderecho hacia el bosque. Ten mucho\ncuidado.")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 278, 'param3': 6}
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x1303Con el tiempo, todas tus preguntas \nserán respondidas. Por ahora, sé\nfuerte y ten valor, Link.")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf("\x0E\x01\x09\x04\x00\x06No percibo que haya ninguna baliza\nsobre el lugar que está marcado en el\nmapa con \x0E\x02\x04\x02\x19CD.\n\nCuando ya no necesites una baliza,\nabre el mapa y oprime (C) sobre la\nque desees eliminar.\x0E\x01\x11\x02\x6CD\n\nY si quieres colocar la baliza con mayor\nprecisión, siempre puedes agrandar\nel mapa oprimiendo (A). ¡Es muy útil!")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 367, 'param3': 6}
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf("Adelante, apunta al lugar marcado\nen el mapa con \x0E\x02\x04\x02\x19CD y oprime (C) para\ncolocar y retirar la baliza.\x0E\x01\x11\x02\x6CD")
/*<366>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          		goto flw_191
          	}
          }

          void entrypoint_501_02() {
/*<  5>*/ 	start()
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 6, 'param3': 32}
/*<  6>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 9, 'param3': 32}
/*<  9>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 7, 'param3': 17}
/*<  7>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 273, 'param3': 17}
/*<273>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 34, 'param3': 50}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 360, 'param3': 13}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1008, 'next': 10, 'param3': 24}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x400=¡¿Pero qué dices, anciana?!")
/*<392>*/ 	set_camera(17, 0)
/*< 11>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 27, 'param3': 17}
          	goto flw_27
          }

          void entrypoint_501_20() {
/*<112>*/ 	start()
/*<114>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 113, 'param3': 32}
/*<113>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 115, 'param3': 32}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 413, 'param3': 50}
          	flw_413:
/*<413>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Has logrado encerrar a la bestia por\ntercera vez.")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 416, 'param3': 6}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 418, 'param3': 6}
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 412, 'param3': 6}
/*<412>*/ 	printf("Link, tú y Vilán han hecho\nun gran trabajo.\n\n\nSin embargo, el monstruo tarda cada\nvez menos tiempo en romper de nuevo\nel sello... ¡Tienes que apresurarte,\nLink!\nDime, ¿has hallado alguna pista sobre\nel lugar donde está la Trifuerza?\n[1]Así es[2]Verás...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf("Hmm...<pause19> Ya veo.\n\n\n\nAsí que, para localizar la Trifuerza,\ndebes encontrar a los tres dragones\ny completar el Cantar del Héroe.\n\nEl dragón que está más cerca se\nencuentra en el <b<bosque de Farone>>.\n\n\n\x0E\x01\x09\x04\xE00\nSin embargo, he de advertirte que la\nsituación en el bosque dista de ser\nla más propicia.\n\n\x0E\x01\x09\x04\xE01\xB00No sé qué es lo que ha podido ocurrir,\npero, hace poco, el camino que lleva\nal bosque quedó totalmente sumergido\nbajo el agua.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf("Así que no he tenido otra opción que\nbloquear la <r<puerta que da al bosque\n>>para evitar que pase el agua.\n\nDebo mantenerla así, o de lo contrario\nesto se inundará. El problema es que\nno sé cómo podrías hacer para entrar\nde otra forma en el bosque...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf("\x0E\x01\x09\x04\x400\x0DJe, je, je. ¿Eso es todo?\n¡Yo tengo la solución!\n\n\nMientras combatíamos, se me ocurrió\nun nuevo uso para mi <r<supercatapulta>>.\n\n\n¡Si te subes encima, puedo mandarte\ndesde aquí hasta el bosque en un abrir\ny cerrar de ojos!")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf("\x0E\x01\x09\x04\x40C\x202¡Iré preparándolo todo! ¡No tardes\ndemasiado, Link!")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf("\x0E\x01\x09\x04\xE00\x0BCuánta energía...\n\n\n\nEl muchacho tiene un gran potencial,\npero tiende a hacer planes para otras\npersonas sin consultarles antes.")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf("\x0E\x01\x09\x04\xE08\xFF00Adelante, Link... Y ten\nmucho cuidado, ¿entendido?")
/*<423>*/ 	set_camera(1, 0)
/*<324>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_03() {
/*<264>*/ 	start()
/*<267>*/ 	give_item(186 0xBA);
/*<268>*/ 	story_flags[343 /* us: 805A9AFE 0x20, jp: 805ACD7E 0x20 */] = true;
/*<348>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_501_21() {
/*<120>*/ 	start()
/*<122>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 121, 'param3': 32}
/*<121>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 123, 'param3': 32}
/*<123>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 413, 'param3': 50}
          	goto flw_413
          }

          void entrypoint_501_22() {
/*<240>*/ 	start()
/*<245>*/ 	switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          	  case 0:
/*<246>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<470>*/ 			switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          			  case 0:
/*<473>*/ 				switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          				  case 0:
/*<471>*/ 					printf("\x0E\x01\x09\x04\x00\n¡Eres nuestra única esperanza,\nLink! El destino de este\nmundo está en tus manos. ¡No nos\ndefraudes!")
          				  case 1:
/*<472>*/ 					printf("\x0E\x01\x09\x04\x00\x14<b<Vilán >>salió del templo hace\nun momento.\n\n\nSeguro que estará junto a esa <r<catapulta\n>>que ha construido.")
          				}
          			  case 1:
/*<249>*/ 				printf("\x0E\x01\x09\x04\x00\n¡Eres nuestra única esperanza,\nLink! El destino de este\nmundo está en tus manos. ¡No nos\ndefraudes!")
          			}
          		  case 1:
/*<247>*/ 			printf("\x0E\x01\x09\x04\x00\x09¡¿Cómo?! ¿¡Dices que el Heraldo\nde la Muerte ha resucitado!? Si no\nlo detenemos, todo estará perdido...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf("\x0E\x01\x09\x04\x00\n¡Eres nuestra única esperanza,\nLink! El destino de este\nmundo está en tus manos. ¡No nos\ndefraudes!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x0D¡Link, debes regresar al\npasado y evitar por todos los medios\nla resurrección del Heraldo de la\nMuerte!\n¡Rápido, entra en el Portal del Tiempo!")
          		  case 1:
/*<241>*/ 			printf("\x0E\x01\x09\x04\x00\x09¡No es posible! ¡No! ¡Ha elegido el peor\nmomento para arrebatarnos a <b<Zelda>>!\n\n\n¡Link, debes regresar al\npasado y evitar por todos los medios\nla resurrección del Heraldo de la\nMuerte!\n¡Rápido, entra en el Portal del Tiempo!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf("Deduzco que la canción que Zelda\ninterpretó el día del torneo celeste\nes en realidad el <b<Cántico de la Diosa>>.\n\nCalculo un 85% de probabilidades\nde que alguien de la academia\nde caballeros posea información\nsobre la letra de la canción.")
/*<486>*/ 	story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          }

          void entrypoint_501_06() {
/*<148>*/ 	start()
/*<146>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<149>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*<150>*/ 				switch (scene_flags[81 /* 0xB 02 */]) {
          				  case 0:
/*<151>*/ 					switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          					  case 0:
/*<213>*/ 						switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          						  case 0:
/*<214>*/ 							printf("\x0E\x01\x09\x04\x10\x1606¡¿Qué haces, Link?!\n¿Encontraste a Zelda al otro lado\ndel portal?\n\n\x0E\x01\x09\x04\x14\xB00¡Si no es así, debes darte prisa\ny atravesarlo!")
          						  case 1:
/*<152>*/ 							printf("\x0E\x01\x09\x04\x10\x03¡Vamos, Link!\n¡Debes activar el Portal del Tiempo\ny adentrarte en él!")
          						}
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\nEl monstruo despierta...\n\n\n\n¡Link, debes volver\na encerrar a la bestia!")
          					}
          				  case 1:
/*<143>*/ 					printf("\x0E\x01\x09\x04\x00\x07El <r<poder >>del <r<rayo celestial >>debería ser\nsuficiente para activar el Portal\ndel Tiempo.\n\n¡Deprisa, súbete a ese pedestal\ny <g<descarga el poder de la espada>>\nsobre el Portal del Tiempo!")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf("\x0E\x01\x09\x04\x00\nTarde o temprano, esa bestia volverá\na romper el sello...\n\n\nVilán también está planeando algo\npara detenerla. Ahora mismo, toda\nayuda es poca.\n\nLink...\n¡Debes hallar las tres llamas sagradas\ne imbuir tu espada con su poder cuanto\nantes!")
          		}
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\x00\x03Para abrir el Portal del Tiempo,\ndebes imbuir tu espada con la\nenergía de las tres llamas sagradas.\n\nEl <r<Cántico de la Diosa>>, preservado\nen tu tierra natal, Neburia, es la\nclave para encontrar las llamas.\n¡Regresa allí cuanto antes!")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf("\x0E\x01\x09\x04\x00\x00¡Vamos, ve por el monstruo,\nLink! ¡Tienes que salvar\na <b<Zelda>>!")
          }

