          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf("\x0E\x01\x09\x04\n\xA12¿Mmm?... Qué cosa más rara, no se ve\na la Diosa...\n\n\nBueno, ahora no es momento de pensar\nen eso.")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf("\x0E\x01\x09\x04\x00\x09¿Qué? ¿De verdad? \n¿Has encontrado a Cuqui?\n\n\n\x0E\x01\x09\x04\x00\xE00Impresionante, ¡estás hecho un tío!\nDesde luego tienes madera de\ncaballero, ¡sí señor!\n\n\x0E\x01\x09\x04\x00\x400Ve a darle la noticia a su madre,\ncorre. Su casa es la que está frente\na la laguna.")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x01¿Se puede saber qué te ocurre,\nLink? Tienes la cara\ntotalmente desencajada...\n[1]¡Es terrible![2-]¿Tú crees?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x506¿Cómo? ¿Que Cuqui ha desaparecido?\n\n\n\n\x0E\x01\x09\x04\x00\x500¿Que se la ha llevado un monstruo?\n\n\n\n\x0E\x01\x09\x04\x0B\x400Ahora que lo dices, siempre se ha\ndicho que en algún rincón de Altárea\nmerodea un ser fantasmal.\n\n\x0E\x01\x09\x04\n\x500Dicen que sale por las noches a dar\nsustos a la gente y a raptar niños para\ncomérselos en su guarida.\n\n\x0E\x01\x09\x04\x00\x400Siempre he pensado que no era más\nque un cuento de viejas, pero lo cierto\nes que ahora me preocupa un poco...")
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x00\x04Bueno, igual he exagerado un poco...\nSi dices que no te pasa nada, será que\nno te pasa nada.")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf("\x0E\x01\x09\x04\x00\x06La madre de Cuqui andaba llamándola\na voz en grito hace un momento...\n¿Qué le habrá pasado?")
          				  case 1:
/*< 51>*/ 					printf("\x0E\x01\x09\x04\x0B\xE01¡Enhorabuena por la victoria en el\ntorneo celeste!\n\n\n\x0E\x01\x09\x04\x00\xA00Oye, vaya cara que traes...\n¿Te ha pasado algo?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf("\x0E\x01\x09\x04\n\xC12¿Qué habrá sido ese ruido? Parecía\nun temblor de tierra...")
          			goto flw_55
          		  case 1:
          			goto flw_55
          		}
          	}
          }

          void entrypoint_118_22() {
/*<152>*/ 	start()
/*<148>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<170>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 156, 'param3': 13}
/*<156>*/ 		printf("\x0E\x01\x09\x04\x00\n¡Ah, qué maravilla!\n\n\n\nNuestro mundo está lleno de sorpresas\nvegetales por descubrir.\n\n\n¡Mi alma de botánico hierve de la\nemoción!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf("No sabes la gratitud que siento en\nestos momentos, Link...\nNo te preocupes, cuidaré bien de esta\npequeña planta.\nSi encuentras algún otro vegetal raro,\n¡no dudes en traerme una muestra!")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00S¡Oooh! ¡Qué... qué maravilla!\nSe trata de una especie completamente\ndesconocida... \n¡Es justo lo que estaba buscando!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf("A ver, déjame ver... Fascinante, parece\nuna especie de cruce entre animal y\nvegetal.\n\nMmm... ¡Posiblemente estemos ante\nel mayor descubrimiento del siglo!")
/*<147>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_118_06() {
/*<  3>*/ 	start()
/*<373>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
          		flw_57:
/*< 57>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x257Oye.<pause0A>.<pause0A>.\n¿Has conseguido encontrar a la niña\nque se había perdido?\n\nAsí que al final no se la había comido\nningún monstruo...\n\n\n\x0E\x01\x09\x04\x00\x609Caso resuelto, ¡menos mal!\nSuerte que había un caballero cerca\npara rescatar a la damisela, ji, ji. ")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf("\x0E\x01\x09\x04\x00\x1557El monstruo aparece si <g<golpeas>>\nla <r<lápida que está más cerca del\nárbol>> y después la <g<mueves>>, ¿no?\nO eso dice el vejete.\n\x0E\x01\x09\x04\x00\x1513En fin, no sé... Lo que tengo claro es\nque no pienso acercarme al cementerio\npor la noche.")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Has hablado con el vejete\ndel Calabarza's?\n\n\n¿Ah, sí? ¿Y dice que puedes encontrar\nal monstruo si <g<golpeas >>la <r<lápida que\nestá más cerca del árbol>> y luego\nla <g<mueves>>?\n\x0E\x01\x09\x04\x00\x1513¿En serio\x0E\x01\x06\x02\xFBCD?... \x0E\x01\x06\x02ÍMmm, no sé yo...\nDe todos modos, lo más sensato\nes no salir a zascandilear por ahí\nde noche.")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x11\x200¿Que dónde para el vejete?\nSupongo que donde siempre...\n\n\n\x0E\x01\x09\x04\x00\x200Empinando el codo en el <r<Calabarza's>>,\nel bar ese que está al este de aquí.\n\n\n\x0E\x01\x09\x04\x12\x200Para llegar hay que ir volando en\npelícaro, claro.")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x00\x1513Dicen que ha desaparecido una niña\nque estaba jugando en el cementerio.\n\n\n\x0E\x01\x09\x04\x12\x1500Qué horror... pensar que algo así pueda\nsuceder en un lugar como este...\n[1]¡Y que lo\ndigas![2-]No será\ntanto...")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x01\xC06¿En serio piensas que puede haber sido\ncosa de un monstruo que rapta niños?\n\n\n\x0E\x01\x09\x04\x00\xC00¡No digas bobadas, cómo va a existir un\nengendro así! <pause1E>Anda que tú también<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\n\x0E\x01\x09\x04\x09\x200Espera, un <r<<pling>vejete>> que vive aquí al lado\nsiempre cuenta historias sobre\nmonstruos que pululan por Altárea.\n\n\x0E\x01\x09\x04\x12\x200Pero como el hombre también es\naficionado a darle al frasco, nadie \nse las termina de creer.")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x12\x1557Al menos podrías fingir que te da un\npoco de lástima... Uno de nuestros\nconvecinos ha desaparecido, ¿sabes?")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf("\x0E\x01\x09\x04\x00\x1504No te olvides de que hay una niña\ndesaparecida y seguimos sin tener\nninguna pista sobre su paradero.")
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x00\x501¡Vaya! Veo que al vencer en el torneo\nte han pasado de curso, ¿eh?\n\n\n\x0E\x01\x09\x04\x0C\x200Por eso vas vestido con el uniforme\nde rigor. ¡Hay que ver lo bien que\nte sienta!\n\n\x0E\x01\x09\x04\x0C\x500Ya solo te falta un paso para ser un\ncaballero de pleno derecho.")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf("\x0E\x01\x09\x04\x09\x1501¡Qué susto, madre mía!\n¡La tierra se puso a temblar de repente\ny la isla de la Diosa desapareció así,\nsin más!\n\x0E\x01\x09\x04\x12\x200Ah, por cierto...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf("\x0E\x01\x09\x04\x00\x13¡Rayos, menudo terremoto!\n¿Qué demonios habrá ocurrido\npara provocar un temblor así?\n\n\x0E\x01\x09\x04\x12\x200Hum... Ahora que lo pienso, creo\nque ya sé qué ha podido pasar.")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x00\x02¡Oye, Link!")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf("Parece que ese molino te tiene\nbastante intrigado, ¿eh?\n\n\nAl parecer, fue diseñado para ponerlo\nen la dirección en la que el viento sople\ny así maximizar el rendimiento.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf("Dicen que el molino tenía un pequeño\n<r<rotor >>para poder girar, pero se soltó\ny desapareció entre las nubes.\n\nBueno, es una historia del año de la\npera... A saber si será verdad. ")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf("La cosa es que lleva así, sin funcionar,\ndesde entonces.\n")
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 181, 'param3': 6}
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 75, 'param3': 6}
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf("Sugiero bajar a las tierras inferiores\nen busca del <r<rotor >>que permite hacer\ngirar el molino.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 198, 'param3': 6}
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\x0C\x800¿Que si se podría arreglar si\nencontráramos la pieza que le\nfalta? \n\nHombre, teniendo el rotor, supongo\nque algo podría hacerse... ")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf("Pero ya me contarás cómo piensas\nencontrar el rotor de marras. \n\n\nSi es verdad eso de que se cayó mar\nde nubes abajo, ya puedes olvidarte...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf("\x0E\x01\x06\x02\xFCCDEspera...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\xC13 Ahora que caigo...\n<b<Dorcon>>, el tipo de la chatarrería,\nsiempre anda contando una historia\nde sus tatarabuelos.\nEs sobre una especie de <r<robot volador\n>>que usaban para recoger la chatarra\nque encontraban bajo el mar de nubes.\n\nPero claro, estamos hablando de hace\nun montón de años...\n")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡La... la Diosa se ha esfumado!\nAaaaaay, ¡¿qué está pasando?!\n\n\nCon lo buen sitio que era para cazar\ninsectos... Aaaaaah...")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Voy a pasarme por la tienda de\nTerry para comprarme yo también\nun cazamariposas!\n\n¡Y cuando lo tenga iré a la chatarrería\npara que lo hagan más grande!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\n\n\n\n¿Has estado en la tienda de Terry?\n¿En serio? Mira que no avisarme...\n¡Eres un mal amigo!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf("\x0E\x01\x09\x04\x00\x01Quiero un cazamariposas... ¡ya!\nPero para eso tengo que ingeniármelas\npara llegar a la tienda de Terry...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x01He oído que has encontrado a Cuqui,\n¡qué bien!\n\n\n\x0E\x01\x09\x04\x0F\x1300Anda que... ya le vale, menudo susto\nnos ha dado.")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\n\n\n\n¿Has estado en la tienda de Terry?\n¿En serio? Mira que no avisarme...\n¡Eres un mal amigo!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x00\x06¿Cuqui?\n\n\n\n\x0E\x01\x09\x04\x12\x900Pues... ayer estuvimos jugando juntos\nen el <r<cementerio>>.\n\n\n\x0E\x01\x09\x04\n\x900Pero la pesada de mi madre se puso a\nllamarme y me tuve que marchar.\n\n\n\x0E\x01\x09\x04\x01\x900¿A qué viene tanto interés?\n¿Es que le ha pasado algo?")
          					  case 1:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x10\x1301Ay, si pudiera llegar a la tienda de\nTerry, me compraría uno de esos\ncazamariposas tan chulos que tiene...\n[1]¿Has visto\na Cuqui?[2]¿La tienda\nde Terry?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf("\x0E\x01\x09\x04\x00\x04Voy a explicarte cómo llegar a la\ntienda de Terry.\n\n\n\x0E\x01\x09\x04\x12\x900Parece que la tienda se para si haces\nsonar la campana que lleva colgando...\n\n\n\x0E\x01\x09\x04\x10\x1300Pero con lo alta que está...<pling> vas a tener\nque utilizar un <r<proyectil>>.\n\n\n¡Si miras a tu alrededor y no alcanzas\na verlo, echa un vistazo en el <g<mapa>>!")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\n\n\n\n¿Has estado en la tienda de Terry?\n¿En serio? Mira que no avisarme...\n¡Eres un mal amigo!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Mira, mira! ¡Allí arriba! ¡Es la <b<tienda\nde Terry>>, por fin ha venido!\n\n\n\x0E\x01\x09\x04\n\x1300Me muero de ganas por conseguir un\n<r<cazamariposas>> nuevo, y solo lo venden\nallí.\n\n\x0E\x01\x09\x04\x12\x900Pero para poder entrar en la tienda,\nprimero hay que tocar la campana...\n\n\n\x0E\x01\x09\x04\x10\x1300Y a ver quién es el guapo que tiene un\n<r<proyectil>> para darle desde aquí...")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf("\x0E\x01\x09\x04\x00\x04El profesor dice que, como tengo esta\npinta tan rara, si entra cualquiera y\nme ve, se puede llevar un susto\nmorrocotudo.\n\x0E\x01\x09\x04\x00\x12Y por eso me hace estar aquí quieto\ntodo el rato...\n\n\n\x0E\x01\x09\x04\x09\x13Bueno, tampoco es que esto sea muy\n distinto a la vida que llevaba antes...")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf("\x0E\x01\x09\x04\x00\xD0FLink, ¿has visto a\nmi marido?\n\n\n¡Este hombre no tiene arreglo! Fue ver\nque caía la noche y que no aparecían\nmás monstruos y va y sale tan pancho\na comprobar qué pasa. Como vuelvan...")
          			  case 1:
/*<476>*/ 				printf("\x0E\x01\x09\x04\x0C\xE08Link, no sabes lo contenta\nque estoy de que Cuqui haya dejado\nde escaparse de casa... Desde que la\nencontraste se ha vuelto un angelito.\nOjalá pudiera decir lo mismo de su\npadre, pero en cuanto anochece ya\nno le veo más el pelo. No sé adónde irá\nni qué se traerá entre manos...")
          			}
          		  case 1:
/*< 66>*/ 			printf("\x0E\x01\x09\x04\x0C\xE08Muchísimas gracias por encontrar\na mi Cuqui, de verdad,\nLink...\n\nY si vuelves a ver al señor ese que\nha cuidado de ella, dale un millón\nde gracias de mi parte también,\n¿quieres?")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x0C\xE14Oh, ¡Link!\n\n\n\n\x0E\x01\x09\x04\x00\x800No sé cómo darte las gracias por haber\nencontrado a Cuqui...\n\n\n\x0E\x01\x09\x04\x09\x800Al fin puedo volver a dormir tranquila\npor las noches. ¡Muchísimas gracias!")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x0C\xE13¡Ay! ¿Has encontrado a Cuqui?\n\n\n\n\x0E\x01\x09\x04\x0F\xE00¿Eh? ¿Que un señor muy majo ha\nestado cuidando de ella?\nBueno, me quedo más tranquila,\n¡pero quiero ver a mi niña!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Ay... la isla de la Diosa se ha hundido\ny mi Cuqui sigue sin aparecer.\nLas desgracias nunca vienen solas...\n\n¡Por favor te lo pido, Link! \n¡Tienes que dar con ella como sea,\nte lo suplico!\n\n\x0E\x01\x09\x04\x09\xD00¿No me digas que no vas a ayudarme\na encontrar a mi niña?")
          				  case 1:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Ay, qué disgusto...<pause0A> Mi Cuqui...<pause0A>\nTienes que encontrarla, ¡por favor!\n\n\nSeguro que se la ha llevado alguien...\n¡Ahora la pobre estará llorando a moco\ntendido!")
          				}
          			  case 1:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			}
          		}
          	}
          }

          void entrypoint_118_25() {
/*<343>*/ 	start()
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 276, 'param3': 32}
/*<276>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<277>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00¡Qué horror! ¡La isla de la Diosa se ha\nhundido! Si hace nada que he estado\nbuscando a Cuqui por allí...\n¡Ay, mi Cuqui, es verdad!\nDime, ¿la has visto por alguna parte?\n[1]Pues no[2]¿Cuqui?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x150D\xD12¿Ah, no?...")
          			flw_21:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x150F\xD00Por favor, Link, ayúdame\na buscarla, ¿quieres? Hace un buen\nrato que no la veo por ningún sitio...\n\n\x0E\x01\x09\x04\x1509\xD00He preguntado a todo el mundo,\ny parece ser que la han visto con\nun tipo de aspecto siniestro.\n\n\x0E\x01\x09\x04\x150B\xD00¡Hasta hay quien dice que la ha raptado\nun monstruo! ¡Ay! Ya no sé qué hacer...\n\n\n\x0E\x01\x09\x04\x150E\xD00¿Y si me han secuestrado a la niña?...\nClaro, con lo rica que es, habrá pasado\ncualquiera y se la habrá llevado...")
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x1509\xD00¡Tienes que salvar a Cuqui, te lo\nsuplico! ¡La pobre tiene que estar\nmuerta de miedo!\n\n\x0E\x01\x09\x04\x150F\xD00Por favor, Link...\n[1]¡Descuida![2-]Ya lo\nsiento...")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x150C\xE14¡Ay, muchas gracias! \nNo esperaba menos de un alumno de\nla academia de caballeros.\n\n\x0E\x01\x09\x04\x1500\x800¡Tráeme a Cuqui de vuelta, por favor\nte lo pido!")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x1509\xD12¿Y tú te llamas alumno de la academia\nde caballeros?\n\n\n¡El deber de todo caballero es, ante\ntodo, garantizar la seguridad en las\ncalles de Altárea!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x1509\xD12Es mi hija, una niña pequeña,\nde cinco añitos.")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00¡Justo a tiempo!\n¿Has visto a mi Cuqui por alguna\nparte?\n[1]Pues no[2]¿Cuqui?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf("\x0E\x01\x0D\x02\x1900¡¡¡Aaaah!!!")
/*< 94>*/ 	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_26() {
/*<348>*/ 	start()
/*<351>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 352, 'param3': 32}
/*<352>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 355, 'param3': 13}
/*<355>*/ 	set_camera(15, 0)
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 350, 'param3': 16}
/*<350>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11¡Cuqui! ¡Cuqui!, ¿dónde estás?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf("Ay, mi Cuqui, mi chiquitina...\n¿Dónde puede estar?...\n\n\n¿Y si se la ha llevado alguien?\n¿Qué voy a hacer?")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11¡Ay, Link!")
/*<362>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 361, 'param3': 47}
/*<361>*/ 	set_camera(16, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 356, 'next': 359, 'param3': 15}
/*<359>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 363, 'param3': 13}
/*<363>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 368, 'param3': 48}
/*<368>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 100, 'next': 358, 'param3': 14}
/*<358>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_27() {
/*<427>*/ 	start()
/*<439>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
/*<442>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x07\xC08Cambiando de tema, ¿has visto lo de la\nisla de la Diosa? Cómo habrá podido\ndesaparecer así como así...\n\nY la pobre Zelda también sigue en\nparadero desconocido, igual que\nMalton... No entiendo nada de lo\nque está pasando...")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf("\x0E\x01\x09\x04\x00\x05Estoy entrenando por las noches para\nponerme hecho un toro como tú.")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf("\x0E\x01\x09\x04\x07\xA0B¡Ey, Link!\n¡No sabes cómo me estoy poniendo\ncon el <y<resistone>> este que me diste!\n\n\x0E\x01\x09\x04ÿ\xFF00Pero aun así, debo asumir de una\nvez por todas que nunca seré tan\nfuerte como tú... Es de tontos intentar\nnegar la realidad.\n\nOye, si esta noche no andas muy liado,\n¿por qué no vienes a verme y charlamos\nun rato del tema?")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link! ¿Hay alguna\nnovedad sobre el paradero de Zelda?\n\n\nY, cambiando de tema... sé que esto\nya te lo he comentado, pero creo que\nhe llegado a un punto muerto en mi\nentrenamiento y no avanzo nada.\n¿Por qué crees que será? Si tienes\ntiempo, te agradecería que te pasaras\nuna <r<noche >>por mi habitación para\ndarme algún consejo práctico.")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Buenas, Link!\nCon el <y<resistone >>ese que me diste\nel otro día, tengo fuerzas para \nentrenar cada <r<noche>>.\n\x0E\x01\x09\x04\x10\x1B00Lo malo es que, poco a poco, noto que\nlas energías se me van acabando...\n\n\nLa verdad, creo nunca llegaré a ser tan\nfuerte como tú, Link.\n\n\n\x0E\x01\x09\x04ÿ\xFF00¡Pero qué pesimista soy! Lo único que\nno puedo hacer es rendirme... Oye,\n¿tú podrías pasarte una <r<noche >>por mi\nhabitación para darme algún consejo?")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf("\x0E\x01\x09\x04\x07\xA0B¡Oye, Link!\n¡Gracias por el <y<resistone>>!\n\n\n¡Desde que me lo tomé no he dejado\nde hacer flexiones como loco!\n¡No hay quien me pare!\n\n\x0E\x01\x09\x04ÿ\xFF00¡Ya verás, Link!\n¡Dentro de nada voy a estar hecho\nun tigre como tú!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf("\x0E\x01\x09\x04\x00\x01Esto... hola. Pensaba que a esas horas\nde la noche no me iba a ver nadie...\n¡Menuda pillada!\n\nOjalá fuera un tipo fuerte y duro como\ntú... No te creas, me está costando más\ntrabajo de lo que pensaba, pero no\npienso tirar la toalla así como así.")
          						goto flw_440
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_10() {
/*< 25>*/ 	start()
/*<428>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 429, 'param3': 31}
/*<429>*/ 		entrypoint_118_27();
          	  case 1:
/*< 40>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*< 69>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 70>*/ 				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          				  case 0:
/*<306>*/ 					switch (zone_temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<418>*/ 						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          						  case 0:
/*<419>*/ 							printf("\x0E\x01\x09\x04\x00\x05Estoy entrenando por las noches para\nponerme hecho un toro como tú.")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf("\x0E\x01\x09\x04\x07\xC08Cambiando de tema, ¿has visto lo de la\nisla de la Diosa? Cómo habrá podido\ndesaparecer así como así...\n\nY la pobre Zelda también sigue en\nparadero desconocido, igual que\nMalton... No entiendo nada de lo\nque está pasando...")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf("\x0E\x01\x09\x04\x00\x01Si sigue la buena racha, seguro que\ntambién encuentras a Zelda en un\nperiquete.")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf("\x0E\x01\x09\x04\x00\x12¡Link, Cuqui no aparece\nni a la de tres! Ya no sé dónde buscar... \n\n\n\x0E\x01\x09\x04\x00\xE10¿Seguro que tú también la estás\nbuscando? \n\n\n\x0E\x01\x09\x04\x00\xC00¡¿Cómo?! ¿Que ya la has encontrado?\n\n\n\n\x0E\x01\x09\x04\x07\xA0B¡Ay, qué alegría! ¡Por fin!\n¡Gracias, Link!\nMenos mal que has dado con ella... \n\nYa sabía yo que podía confiar en ti para\nencontrarla.\n")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf("\x0E\x01\x09\x04\x00\nVete a decírselo a su madre, ¡deprisa!\nEstará en casa hecha un manojo de\nnervios... Su casa está junto a la\nlaguna, creo.")
          					  case 1:
/*<309>*/ 						printf("\x0E\x01\x09\x04\x00\x12¡Link, Cuqui no aparece\nni a la de tres! Ya no sé dónde buscar... \n\n\n\x0E\x01\x09\x04\x00\xE10¿Seguro que tú también la estás\nbuscando? \n\n\n\x0E\x01\x09\x04\x00\xC00¡¿Cómo?! ¿Que ya la has encontrado?\n\n\n\n\x0E\x01\x09\x04\x07\xA0B¡Ay, qué alegría! ¡Por fin!\n¡Gracias, Link!\nMenos mal que has dado con ella... \n\nYa sabía yo que podía confiar en ti para\nencontrarla.\n")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf("\x0E\x01\x09\x04\x07\x801Oh, Link... ¿Lo has visto?\n¡Es terrible! ¡La isla de la Diosa ha\ndesaparecido! \n\n\x0E\x01\x09\x04\x00\x800Y Cuqui sigue perdida y nadie sabe\ndónde puede estar...\n\n\n\x0E\x01\x09\x04\x00\xE00Y Zelda ha desaparecido, y Malton se\nha ido... No entiendo nada de lo que\nestá pasando. \n\n\x0E\x01\x09\x04\x07\x800Solo sé que tenemos que encontrarlos\ncomo sea. ¡Voy a ayudar a buscarlos,\nLink!")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf("\x0E\x01\x09\x04\x00\x12Ah, Link...\nCuqui no aparece por ningún lado.\n\n\n\x0E\x01\x09\x04\x00\xE10No te habrás olvidado de buscar a la\npobre niña, ¿no?\n\n\n\x0E\x01\x09\x04\x07\x200Venga, no debemos rendirnos.\nYo también la estoy buscando por todas\npartes...")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf("\x0E\x01\x09\x04\x00\x1701Yo también voy a buscarla.\n¡Tú ponte a mirar por la plaza,\nLink!\n\n\x0E\x01\x09\x04\x08\x1700Seguro que te encuentras a algún\nniño que haya estado jugando con\nella o algo.")
          						  case 1:
/*< 26>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oh, Link... ¿Y bien?\n¿Has encontrado ya a Zelda?\n\n\n(<pause0A>.<pause0A>.<pause0A>.)<pause0A>\nYa veo... Pues nada, ¡ánimo!\n\n\n\x0E\x01\x09\x04\x07\x200Por cierto, acabo de ver a la madre de\nCuqui yendo hacia el santuario...\n\n\n\x0E\x01\x09\x04\x08\x1700¿Le habrá pasado algo?")
/*< 30>*/ 							printf("\x0E\x01\x09\x04 \x508¿Qué? ¿Que Cuqui ha desaparecido?\n¡No me digas!\n\n\n\x0E\x01\x09\x04\x07\x800¡Qué horror! ¡Pobrecilla! ¡Tenemos que\nencontrarla! Vamos, a preguntar a todo\nel mundo, Link.")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf("\x0E\x01\x09\x04\x07\x801Oh, Link... ¿Lo has visto?\n¡Es terrible! ¡La isla de la Diosa ha\ndesaparecido! \n\n\x0E\x01\x09\x04\x00\x800Y Cuqui sigue perdida y nadie sabe\ndónde puede estar...\n\n\n\x0E\x01\x09\x04\x00\xE00Y Zelda ha desaparecido, y Malton se\nha ido... No entiendo nada de lo que\nestá pasando. \n\n\x0E\x01\x09\x04\x07\x800Solo sé que tenemos que encontrarlos\ncomo sea. ¡Voy a ayudar a buscarlos,\nLink!")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh, Link... ¿Y bien?\n¿Has encontrado ya a Zelda?\n\n\n(<pause0A>.<pause0A>.<pause0A>.<pause0A>)\nYa veo... ¡Pues nada, mucho ánimo!\nTodos confiamos en ti.\n\nPor cierto, la madre de Cuqui estaba\nhace un rato plantada junto a la puerta\ndel santuario...\n[1]¿Quién?[2]Lo sé")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x00\x05Es esa señora que vive con su marido\ny su niña pequeña en la casa que está\nfrente a la laguna...\n\n\x0E\x01\x09\x04\x07\x800Me da la sensación de que ha debido\nde ocurrirle algo.")
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x07\x806¿En serio?...\n¡Jo, no me tomes el pelo!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_28() {
/*<450>*/ 	start()
/*<464>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
          		flw_460:
/*<460>*/ 		switch (random(2)) {
          		  case 0:
/*<459>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link! Oye, tú\nno sabrás nada de Malton, ¿no?\nEs que hace siglos que no lo veo...\n\n¡Espero que no hayan acabado\nexpulsándolo de la academia\npor mal comportamiento!")
          		  case 1:
/*<461>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link!\n¿Sabías que Vestro me ha estado\nenseñando algunas <r<técnicas para\ncazar insectos>>?\nPor ejemplo, dice que es mejor mover\nel cazamariposas horizontalmente,\nen lugar de dar bandazos con él como\nsi fuera una espada.\nTambién recomienda acercarse a los\ninsectos despacio y con mucho cuidado.\nLuego solo es cuestión de hacer un\nbarrido con el cazamariposas.")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link!\n\n\n\n¿Cómo? ¿La tri... qué? ¿<b<Trifulca>>?\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause14>¿De qué trifulca me hablas?")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Eh, Link, fíjate en\nla torre de la luz!\n\n\nDe repente, una especie de rayo\nha surgido de ella... ¿A que es\nincreíble?")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oye, Link, ¿sabes si es\ncierto eso de que el <r<cazamariposas>>\nsirve para atrapar otras cosas, además\nde insectos?\n\nDicen que el de la chatarrería ha\npescado algunas cosas alucinantes\ncon eso...")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf("\x0E\x01\x09\x04\x00\x01¡Vaya, si es Link!\n\n\n\n¿Cómo? ¿Que quieres que alguien\nte <r<recite >>la letra de la canción que\ntanto le gusta a Zelda?\n\nPues lo siento, pero yo no soy médico,\nasí que no te puedo «<r<recitar>>» nada...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf("\x0E\x01\x09\x04\x00\x01¡Voy a pasarme por la tienda de\nTerry para comprarme yo también\nun cazamariposas!\n\n¡Y cuando lo tenga iré a la chatarrería\npara que lo hagan más grande!")
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_11() {
/*< 53>*/ 	start()
/*<162>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x00\x01Qué va a ser malo este señor, ¡si es más\nbueno que el pan!\n\n\nMe salvó cuando estuve a punto de\ncaerme por el barranco.\n\n\nGracias a él he aprendido lo peligroso\nque es andar sola de noche.\n\n\nDile a mi mamá que volveré mañana\npor la mañana, ¿vale?")
          	  case 1:
/*<163>*/ 		printf("\x0E\x01\x09\x04\x00\x06Oye, ¿qué te pasa?\n¿Por qué pones esa cara?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf("\x0E\x01\x09\x04\x00\x01Mi objetivo es ponerme como tú de\nfuerte, por eso por las noches entreno\nen mi cuarto sin que nadie se entere...\n\nPero acabo destrozado, no te creas.\n¿Tú cómo lo haces, que parece que\nni te cuesta trabajo ni nada?")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf("\x0E\x01\x09\x04\x00\x01Buenas, Link.\n¿Tienes alguna novedad sobre el\nparadero de Zelda?\n\nGuárdame el secreto, ¿eh?... El caso\nes que llevo un tiempo entrenando <r<por\nlas noches >>para ponerme tan fuerte\ncomo tú...\nPero<pause05>.<pause05>.<pause05>.<pause0A> \x0E\x01\x09\x04\x00\xA06paso de que la gente me vea\nen plena acción, así que no entres\nen <r<mi cuarto>> por la noche, ¿me oyes?")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf("\x0E\x01\x09\x04\x00\x01¿Qué tal, Link?\n¿Sabes algo ya sobre el paradero de\nZelda? ¡Ojalá la encuentres pronto!")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf("\x0E\x01\x09\x04\x00\x811¿Has visto, Link?\n¡La torre de la luz emite una... luz,\nvalga la redundancia! ¡Nunca había\nvisto algo parecido!")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf("\x0E\x01\x09\x04\x07\xA0B¡Buenas, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF05¿<r<Dos grandes hojas>>, dices? Pues... en\nAltárea siempre sopla un viento muy\nfuerte, y hay dispositivos ideados para\naprovecharlo. Si no se refiere a eso...")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf("\x0E\x01\x09\x04\x07\xA0B¡Hola, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF08¿Perdona? ¿El <r<Cántico de la Diosa>>,\ndices?...<pause1E> Ah, sí, aquello que estaba\nsiempre cantando Zelda.\n\nPues no me sé la letra, pero seguro que\nel director te puede ayudar.")
          						  case 1:
/*<314>*/ 							printf("\x0E\x01\x09\x04\x00\x0BLa madre de Cuqui tiene que estar\ncomo loca de contenta, ¿no? ¡Qué bien!")
/*<499>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_12() {
/*< 67>*/ 	start()
/*<473>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<474>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\n<pause1E>¡¿Quéee?! ¿Dices que mi amigo\nse ha convertido en un humano?...\n\n\x0E\x01\x06\x02\xFBCDPues vaya...\x0E\x01\x06\x02Í ¡Con lo que me gustaban\na mí esas alas tan chulas que tenía!")
          	  case 1:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Eres tú, Link!\n\n\n\n¿Sabes qué? Mi amigo, el señor del\notro día, colecciona gratitud de la\ngente. ¡Yo no sabía que eso se podía\ncoleccionar como si fueran cromos!")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf("")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf("")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf("Sí, \x0E\x01\x12\x04\x00\x05amo. Se ha cancelado el ajuste del\n<pling>rastreador. ")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x00\x13¡Rayos, pero si era el cachivache\nde Dorcon! ¡Menuda sorpresa!...")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf("Espera...\n\n\n\n<pause14>¡No puede ser!<pause28>\n\n\n\n\x0E\x01\x09\x04\x0C\xC00Si este es el <r<rotor del molino >>que se\ncreía perdido bajo las nubes, ¡entonces\nlos tatarabuelos de Dorcon decían la\nverdad!\nNo sé cómo lo habrás hecho, pero el\ncaso es que ya tenemos la pieza para\narreglar el molino.")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf("A ver... Esto por aquí... Esto por allá...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 190, 'param3': 6}
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 89, 'param3': 6}
/*< 89>*/ 		printf("\x0E\x01\x09\x04\n\x10E¡Uf!")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf("\x0E\x01\x09\x04\x0C\xC00¡Ya está, gorrión, otra vez como nuevo!\nSi quieres girar el molino entero, solo\ntienes que arreglártelas para mover\nel rotor.")
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x100\x0E\x01\x08\x02\xFFCD¡Cariño!\n¡Cariñooo!")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x05\x714¡Ahí va, mi parienta!\nSe me había olvidado que tenía que\narreglar la alacena de casa...\n\nEn mala hora se lo prometí. ¡La muy\ntirana siempre está endilgándole\ntareas a todo el mundo!")
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Bueno, Link, hasta otra...\n¡Nos vemos!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf("\x0E\x01\x09\x04\x05\x714Anda, ahora que caigo...\n¡Si se supone que estábamos buscando\na nuestra Cuqui!")
/*<296>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Bueno, Link, te dejo.\nPor cierto, si tienes tiempo, echa un\nvistazo a ver si encuentras a Cuqui\npor algún lado, ¿quieres?")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x05Si te digo la verdad, yo no me creo\nnada... ¿Recoger cosas de debajo\nde las nubes? Sí, y qué más...\nPero <b<Dorcon>> sí que se lo cree.\nEl tío guarda como oro en paño lo que\ndice que son los restos del cachivache\nese.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oye, Link, muchas\ngracias por encontrar a Cuqui,\nde verdad.\n\nAh, qué día más espléndido hace hoy,\n¿no te parece?\n\n\nDan ganas de pasarse por el\nCalabarza's y echar la tarde\ncon una buena sopa.\n\nPero mi parienta me ha mandado\narreglar la alacena... A ver cómo\nme escaqueo yo ahora.\n\nAy, con la tarde tan buena que hace...")
          			  case 1:
/*<292>*/ 				printf("\x0E\x01\x09\x04\x00\x0EHombre, Link.\nNo sé dónde se habrá metido Cuqui,\nno aparece por ningún lado...\n¡Vaya con la niña!\nEstoy empezando a preocuparme...\n\n\n\nMira a ver si la encuentras tú también,\n¿quieres?")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf("¡Fay es un primor! Si ella me lo pide,\nno puedo negarme...\n")
          	  case 1:
/*< 81>*/ 		printf("(.<pause05>.<pause05>.)")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Una extraña presencia emana\ndel interior.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x701Cuando quieras que te adivine algo,\nsolo tienes que pasarte por mi puesto\nen el bazar, muchacho.\n\n¡Te haré un precio especial, por ser tú!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x10\x70D¡Ooooh!\n\n\n\n¡Qué maravilla! ¡Si es igualita a mi\nantigua bola de cristal!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x700¡Ejem! ¡Ujum!\n¡Noto cómo vuelve a fluir la energía\npor todo mi cuerpo!\n\n¡Albricias! ¡Con esta bola podré volver\na contemplar el futuro y sus entresijos\nhasta que me aburra!\n\nCuando quieras que te adivine algo,\nsolo tienes que acudir a mí, muchacho.\n\n\n¡Te haré un precio especial, por ser tú!")
/*<106>*/ 			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
/*<298>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<376>*/ 			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*<377>*/ 			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*<141>*/ 			give_gratitude_crystals();
          		  case 1:
/*< 99>*/ 			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          			  case 0:
/*<425>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 212, 'param3': 31}
/*<212>*/ 				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          				  case 0:
/*<161>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 103, 'param3': 13}
/*<103>*/ 					printf("Oye, oye... ¿Qué estás haciendo?\n¿Qué hay de la bola de cristal nueva\nque me prometiste?")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf("Oye, oye... ¿Qué estás haciendo?\n¿Qué hay de la bola de cristal nueva\nque me prometiste?")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf("La <r<bola de cristal >>no está configurada\ncomo objetivo del <pling><r<rastreador>>.\n\n\n¿Quiere el \x0E\x01\x12\x04\x00\x01amo añadirla como objetivo\ndel <pling><r<rastreador>>?\n[1]Sí[2-]No")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf("Entendido, \x0E\x01\x12\x04\x00\x05amo.\n\n\n\nHe ajustado el <pling><r<rastreador >>para que\ndetecte la presencia de la <r<bola de\ncristal >>que busca este individuo.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf("Sí, \x0E\x01\x12\x04\x00\x05amo. Se ha cancelado el ajuste del\n<pling>rastreador. ")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf("\x0E\x01\x09\x04\x0C\x100FDéjame, ¿quieres? Déjame en paz...\nAquí no hay nada que ver, nunca mejor\ndicho...\n\nSin mi bola de cristal, no tengo manera\nde ver el futuro, ¡ay!\n\n\nMe he quedado sin futuro, igual que\nme he quedado sin bola... \x0E\x01\x06\x02\xFCCDMis ojos\x0E\x01\x06\x02Í no\ntienen cristal en el que posarse...\n\n<pause1E>Ay, qué desgracia más grande...\nSi al menos pudiera conseguir una\nbola de cristal nueva...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("Oye, ahora que caigo... Me han dicho\nque encontraste una pieza del molino\nen las tierras inferiores. ¿Es verdad?\n\nPues mira, resulta que esta bola\ntambién procede de allá abajo.\nLa encontraron los tatarabuelos\nde Dorcon hace ya mucho tiempo.\n¿Y si hay otras como esta en algún\nlugar bajo las nubes? ¡Búscame una\nnueva, por favor!\n[1]Vale[2-]Ni hablar")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("¡Ay, no sabes cuánto te lo agradezco!\n\n\n\nSegún me dijeron en la chatarrería,\nencontraron mi vieja bola de cristal en\nun <r<edificio en lo alto de una montaña>>. ")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf("Puedo añadir la <r<bola de cristal >>que\ndesea buscar este individuo a la lista\nde objetivos del <pling><r<rastreador>>.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\n¿Debería por tanto configurar el\n<r<rastreador >>para que detecte la\npresencia de la <r<bola de cristal>>?\n[1]Sí, por favor[2-]Todavía no")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf("Entendido, \x0E\x01\x12\x04\x00\x05amo. He añadido la bola de\ncristal como objetivo del rastreador.")
/*<381>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<388>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<387>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<385>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<386>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<389>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<394>*/ 						open_dowsing_wheel(14)
          						flw_391:
/*<391>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 390, 'param3': 36}
/*<390>*/ 						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
/*<393>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 392, 'param3': 16}
/*<392>*/ 						printf("\x0E\x01\x09\x04\x01\x70BTe lo pido por favor...\nCon una bola de cristal rota no puedo\nver el futuro ni adivinar nada.\n\nAsí no hay manera de saber qué te\ntiene reservado el destino, muchacho.\n\n\n¡Vamos, no te hagas el interesante\ny tráeme una bola nueva!")
          					  case 1:
/*<467>*/ 						printf("Entendido. Si el \x0E\x01\x12\x04\x00\x05amo cambia de\nopinión, solo tiene que hablar de nuevo\ncon este individuo.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf("\x0E\x01\x06\x02\xFCCDOh...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\x1009 Vaya mundo este...\x0E\x01\x06\x02\xFCCD\nNo sé adónde vamos a llegar...\x0E\x01\x06\x02Í")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_17() {
/*<109>*/ 	start()
/*<114>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<478>*/ 		switch (zone_temp_flags[14 /* 0x0 40 */]) {
          		  case 0:
/*<479>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<481>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 480, 'param3': 13}
/*<480>*/ 				printf("En fin... perdona que me emocione.\nSupongo que la desaparición de la\nefigie de la Diosa me ha afectado más\nde lo que esperaba.\nPero sé que es por una buena causa.\nSegún dice el director, era necesario\npara poder salvar a Zelda. ¡Espero\nque la encuentres pronto!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf("¡Link...!\nMe maravilla comprobar que aún\nexisten en el mundo especies que\ndesconocemos.")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x0E\x50AEs una auténtica maravilla...\nCuanto más a fondo lo observo,\n¡más me cautiva!\n\n\x0E\x01\x09\x04\x00\x500Resulta difícil determinar hasta qué\npunto es vegetal y hasta qué punto\nanimal...")
/*<477>*/ 				zone_temp_flags[14 /* 0x0 40 */] = true;
          			}
          		  case 1:
          			goto flw_173
          		}
          	  case 1:
/*<113>*/ 		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
          		  case 0:
/*<158>*/ 			entrypoint_118_21();
          		  case 1:
/*<112>*/ 			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
          			  case 0:
/*<426>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 274, 'param3': 31}
/*<274>*/ 				switch (zone_temp_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<275>*/ 					printf("\x0E\x01\x09\x04\x00\x09Jo, jo, jo, ya sabía yo que se podía\ncontar contigo para cualquier cosa,\nLink.\n\n¡Espero esas plantas con ansia!")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 230, 'param3': 6}
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf("La <r<planta >>no está configurada como\nobjetivo del <pling><r<rastreador>>.\n\n\n¿Quiere el \x0E\x01\x12\x04\x00\x01amo añadirla como objetivo\ndel <pling><r<rastreador>>?\n[1]Sí[2-]No")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf("Entendido, \x0E\x01\x12\x04\x00\x05amo.\n\n\n\nHe ajustado el <pling><r<rastreador >>para que\ndetecte la presencia de la <r<planta>>\nque busca esta persona.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf("Sí, \x0E\x01\x12\x04\x00\x05amo. Se ha cancelado el ajuste del\n<pling>rastreador. ")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Qué tal va la cosa?\n¿Has encontrado alguna nueva especie\nvegetal?\n")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Oh, Link!\n¿De verdad estás dispuesto a echarme\nuna mano?\n\n¡Qué bien! Clasificar plantas raras es\nmi pasión.")
          						flw_118:
/*<118>*/ 						printf("\x0E\x01\x09\x04\x00\x00Dicho esto... pensar que mi colección\nde plantas ya está completa me deja un\npoco así...\n\nMe pregunto si no quedarán especies\nnuevas por descubrir en algún lugar.\n\n\n\x0E\x01\x09\x04\x09\xA0F¿Qué dices? ¿Me ayudas a encontrar\nplantas nunca vistas que asombren al\nmundo?\n[1]Suena\nbien[2-]Imposible")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf("\x0E\x01\x09\x04\n\xA03Jo, jo, jo, ya sabía yo que te ofrecerías\ngustoso a echarme una mano,\nLink.\n\nEspero ansioso que traigas vegetales\nextraños a montones, especies que\nnadie haya visto jamás.")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 134, 'param3': 6}
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf("Puedo añadir la <r<planta >>que busca esta\npersona a la lista de objetivos del\n<pling><r<rastreador>>.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\n¿Debería por tanto configurar el\n<r<rastreador >>para que detecte la\npresencia de la <r<planta>>?\n[1]Sí, por favor[2-]Todavía no")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf("Entendido, \x0E\x01\x12\x04\x00\x05amo. He añadido la planta\ncomo objetivo del rastreador.")
/*<223>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<224>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<225>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<226>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<227>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<228>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<397>*/ 								open_dowsing_wheel(16)
          								flw_136:
/*<136>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 119, 'param3': 36}
/*<119>*/ 								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
/*<273>*/ 								zone_temp_flags[14 /* 0x0 40 */] = true;
          							  case 1:
/*<470>*/ 								printf("Entendido. Si el \x0E\x01\x12\x04\x00\x05amo cambia de\nopinión, solo tiene que hablar de nuevo\ncon este individuo.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf("\x0E\x01\x09\x04\n\xA09¡Jo, jo, jo! Cierto, cierto, tú ya tienes\nbastante con tu misión. ¡Perdón!\n\n\nPero... ¿no crees que es aburridísimo\nestar todo el día buscando una misma\ncosa?\n\nEs bueno variar un poco de vez en\ncuando, hazme caso.")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf("En fin... perdona que me emocione.\nSupongo que la desaparición de la\nefigie de la Diosa me ha afectado más\nde lo que esperaba.\nPero sé que es por una buena causa.\nSegún dice el director, era necesario\npara poder salvar a Zelda. ¡Espero\nque la encuentres pronto!")
          							flw_116:
/*<116>*/ 							printf("\x0E\x01\x09\x04\x00\x13Ejem, por cierto...\nHay algo que quisiera pedirte.\n\n\nComo bien sabes, soy amante de la\nbotánica y tengo la mayor colección\nde plantas de toda Altárea.\n\nAunque esté mal que yo lo diga...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ah, Link. \n¿Has podido hablar con Narisha?\n\n\n¿Ah, sí? Jo, jo, jo, ¡impresionante!\nEres de lo que no hay.\n\n\nA ti y a tu pelícaro rojo no\nhay nada que se os resista.\n\n\nTenéis un arduo camino por delante,\npero estoy seguro de que podréis con\ntodo. ¡Ánimo y suerte!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oye, Link...\n¿Te importaría echarme una mano\ncon cierto asunto?\n[1]Bueno[2-]Y qué más")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf("Bueno, tampoco hace falta que sea\nahora mismo... Es que la madre de\nCuqui me ha pedido que la ayude a\nbuscar a su hija.\nY quería pedirte a ti también que\nechases un vistazo si tienes tiempo.")
          						  case 1:
/*<130>*/ 							printf("\x0E\x01\x09\x04\x00\x09Y yo que te tenía por un buen chico\nque se preocupa por los problemas\nde los demás...")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf("En fin... perdona que me emocione.\nSupongo que la desaparición de la\nefigie de la Diosa me ha afectado más\nde lo que esperaba.\nPero sé que es por una buena causa.\nSegún dice el director, era necesario\npara poder salvar a Zelda. ¡Espero\nque la encuentres pronto!")
          						  case 1:
/*<316>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ah, Link. \n¿Has podido hablar con Narisha?\n\n\n¿Ah, sí? Jo, jo, jo, ¡impresionante!\nEres de lo que no hay.\n\n\nA ti y a tu pelícaro rojo no\nhay nada que se os resista.\n\n\nTenéis un arduo camino por delante,\npero estoy seguro de que podréis con\ntodo. ¡Ánimo y suerte!")
/*<317>*/ 							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_18() {
/*<137>*/ 	start()
/*<164>*/ 	printf("¡Aquí os dejo el <r<rotor>>!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf("Si se ofrece cualquier otra cosa,\n¡ya sabéis dónde estoy!\n\n\nPor Fay iría hasta el fin del mundo...")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x09\x04\x09\x11Por el amor de kyu... Me da no sé qué\nque me mire tan fijamente...\n")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf("¡Aquí traigo la bola de cristal esta\nque brilla tanto!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf("Si se ofrece cualquier otra cosa,\n¡ya sabéis dónde estoy!\n\n\nPor Fay iría hasta el fin del mundo...")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11¡Cuqui! ¡Cuqui!, ¿dónde estás?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Ay, mi Cuqui, mi chiquitina...\n¿Dónde puede estar?...\n\n\n¿Y si se la ha llevado alguien?\n¿Qué voy a hacer?")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11¡Ay, Link!")
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 344, 'param3': 47}
/*<344>*/ 	set_camera(14, 0)
/*<342>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 356, 'next': 341, 'param3': 15}
/*<341>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 365, 'param3': 17}
/*<365>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 346, 'param3': 13}
/*<346>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 370, 'param3': 48}
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 100, 'next': 340, 'param3': 14}
/*<340>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_21() {
/*<151>*/ 	start()
/*<166>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<150>*/ 		printf("Si se te ofrece algo más, ya sabes...\nDile a Fay que me dé un toque y listos.")
          	  case 1:
/*<149>*/ 		printf("Aquí lo traigo: un kyu de lo más raro\nrecién pescado del bosque.")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

