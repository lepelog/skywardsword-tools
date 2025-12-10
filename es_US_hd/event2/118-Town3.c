          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x000a0a12>¿Mmm?... Qué raro... No se ve\na la Diosa...\n\n\nBueno, ahora no es momento de pensar\nen eso.")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000009>¿Qué? ¿De verdad? \n¿Has encontrado a Picalia?\n\n\n<0x10009:0x00000e00>Impresionante, ¡eres de lo mejor!\nDesde luego, tienes madera de\ncaballero, ¡sí señor!\n\n<0x10009:0x00000400>Ve a darle la noticia a su madre,\ncorre. Su casa es la que está frente\na la laguna.")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000001>¿Se puede saber qué te ocurre,\n<heroname>? Pareces estar muy \npreocupado...\n[1-]¡Es terrible![2]¿Tú crees?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000506>¿Cómo? ¿Dices que Picalia\nha desaparecido?\n\n\n<0x10009:0x00000500>¿Crees que se la ha llevado un\nmonstruo?\n\n\n<0x10009:0x000b0400>Ahora que lo dices, siempre se ha\ndicho que en algún rincón de Neburia\nhabita un ser fantasmal.\n\n<0x10009:0x000a0500>Dicen que sale por las noches a asustar\na la gente y a raptar niños para\ncomérselos en su guarida.\n\n<0x10009:0x00000400>Siempre he pensado que no era más\nque un cuento, pero lo cierto es que\nahora me preocupa un poco...")
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000004>Bueno, quizá he exagerado un poco...\nSi dices que no te pasa nada, será que\nno te pasa nada.")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000006>La madre de Picalia estaba llamándola\na gritos hace un momento...\n¿Qué le habrá pasado?")
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000b0e01>¡Te felicito por la victoria en el\ntorneo celeste!\n\n\n<0x10009:0x00000a00>Oye, pareces preocupado...\n¿Te ha pasado algo?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x000a0c12>¿Qué habrá sido ese ruido? Parecía\nun temblor de tierra...")
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
/*<156>*/ 		printf(/* textboxtype: 2, unk: 31, line: 146 */ "<0x10009:0x0000000a>¡Ah, qué maravilla!\n\n\n\nNuestro mundo está lleno de sorpresas\nvegetales por descubrir.\n\n\n¡Mi alma de botánico hierve de la\nemoción!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 147 */ "No sabes la gratitud que siento en\nestos momentos, <heroname>...\nNo te preocupes, cuidaré bien de esta\npequeña planta.\nSi encuentras algún otro vegetal raro,\n¡no dudes en traerme una muestra!")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000053>¡Oooh! ¡Qué... qué maravilla!\nSe trata de una especie completamente\ndesconocida... \n¡Es justo lo que estaba buscando!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf(/* textboxtype: 0, unk: 1, line: 145 */ "A ver, déjame ver... Fascinante, parece\nuna especie de cruce entre animal y\nvegetal.\n\nMmm... ¡Posiblemente estemos ante\nel mayor descubrimiento del siglo!")
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
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00090257>Oye.<pause 10>.<pause 10>.\n¿Has conseguido encontrar a la niña\nque se había perdido?\n\nAsí que al final no se la había comido\nningún monstruo...\n\n\n<0x10009:0x00000609>Caso resuelto, ¡menos mal!\nSuerte que había un caballero cerca\npara rescatar a la damisela, ji, ji. ")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x00001557>El monstruo aparece si <color green<golpeas>coloroff>\nla <color red<lápida que está más cerca del\nárbol>coloroff> y después la <color green<mueves>coloroff>, ¿no?\nAl menos, eso dice el viejito.\n<0x10009:0x00001513>En fin, no sé... Lo que tengo claro es\nque no pienso acercarme al cementerio\npor la noche.")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000001>¿Has hablado con el viejito de\nLa Calabaza Flotante?\n\n\n¿Ah, sí? ¿Y dice que puedes encontrar\nal monstruo si <color green<golpeas >coloroff>la <color red<lápida que\nestá más cerca del árbol>coloroff> y luego\nla <color green<mueves>coloroff>?\n<0x10009:0x00001513>¿En serio<0x10006:0xfbcd>?... <0x10006:0x00cd>Mmm, no sé...\nDe todos modos, lo más sensato\nes no andar por ahí de noche...")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00110200>¿Quieres saber dónde está el viejito?\nSupongo que donde siempre...\n\n\n<0x10009:0x00000200>En <color red<La Calabaza Flotante>coloroff>, ese mesón\nque está al este de aquí.\n\n\n<0x10009:0x00120200>Para llegar hay que ir volando en\nneburí, claro.")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00001513>Dicen que ha desaparecido una niña\nque estaba jugando en el cementerio.\n\n\n<0x10009:0x00121500>Qué horror... Pensar que algo así haya\nsucedido en un lugar como este...\n[1-]Tienes\nrazón[2]No será\ntanto...")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00010c06>¿En serio piensas que puede haber sido\ncosa de un monstruo que rapta niños?\n\n\n<0x10009:0x00000c00>No digas tonterías, ¿cómo va a existir\nun monstruo así? <pause 30>Qué cosas dices<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\n<0x10009:0x00090200>Espera, un <color red<<sound 4>viejito>coloroff> que vive aquí al lado\nsiempre cuenta historias sobre\nmonstruos que pululan por Neburia.\n\n<0x10009:0x00120200>Pero como el hombre también es\naficionado a exagerar mucho, nadie \nle cree del todo.")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00121557>Al menos podrías fingir que te da un\npoco de lástima... Una de nuestras\nvecinas ha desaparecido, ¿sabes?")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00001504>No te olvides de que hay una niña\ndesaparecida y seguimos sin tener\nninguna pista sobre su paradero.")
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00000501>¡Vaya! Veo que al vencer en el torneo\nhas avanzado al siguiente curso, ¿eh?\n\n\n<0x10009:0x000c0200>Por eso vas vestido con el uniforme.\n¡Te sienta muy bien!\n\n\n<0x10009:0x000c0500>Ya solo te falta un paso para ser un\ncaballero de pleno derecho.")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00091501>¡Qué susto, de verdad!\n¡La tierra se puso a temblar de repente\ny la isla de la Diosa desapareció así,\nsin más!\n<0x10009:0x00120200>Ah, por cierto...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00000013>¡Un terremoto! ¿Qué puede haber\npasado para provocar un temblor así?\n\n\n<0x10009:0x00120200>Hum... Ahora que lo pienso, creo que\nya sé lo que ha podido ocurrir...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>¡Oye, <heroname>!")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "Parece que ese molino te tiene\nbastante intrigado, ¿eh?\n\n\nAl parecer, fue diseñado para ponerlo\nen la dirección en la que el viento sople\ny así maximizar el rendimiento.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "Dicen que el molino tenía un pequeño\n<color red<rotor >coloroff>para poder girar, pero se soltó\ny desapareció entre las nubes.\n\nBueno, es una historia de hace mucho\ntiempo... No sé si será verdad.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Lo que importa es que lleva así,\nsin funcionar, desde entonces.\n")
/*<179>*/ 	wait_frames(15)
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	wait_frames(15)
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "Sugiero bajar a las tierras inferiores\nen busca del <color red<rotor >coloroff>que permite hacer\ngirar el molino.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	wait_frames(15)
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x000c0800>¿Preguntas si se podría arreglar si\nencontráramos la pieza que le\nfalta? \n\nBueno, teniendo el rotor, supongo\nque podríamos hacer algo... ")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "Pero ya me dirás cómo piensas\nencontrar ese rotor. \n\n\nSi es verdad eso de que se cayó \nbajo el mar de nubes, ya puedes\nolvidarte...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10006:0xfccd>Espera...<0x10006:0x00cd><0x10009:0x000c0c13> Ahora que lo dices...\n<color blue<Gondo>coloroff>, el tipo de la chatarrería,\nsiempre anda contando una historia\nde sus tatarabuelos.\nEs sobre una especie de <color red<robot volador\n>coloroff>que usaban para recoger la chatarra\nque encontraban bajo el mar de nubes.\n\nPero claro, eso ocurrió hace muchos\naños...")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00000001>¡La... la Diosa se ha esfumado!\nAaaaaay, ¡¿qué está pasando?!\n\n\nCon lo buen sitio que era para cazar\ninsectos... Aaaaaah...")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000001>¡Yo también voy a ir a la tienda\nde Terry para comprarme un\ncazamariposas!\n\n¡Y cuando lo tenga iré a la chatarrería\npara que lo hagan más grande!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n\n\n\n¿Has estado en la tienda de Terry?\n¿En serio? Y no me has avisado...\n¡Eres un mal amigo!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000001>Quiero un cazamariposas... ¡ya!\nPero para eso tengo que ingeniármelas\npara llegar a la tienda de Terry...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000001>He oído que has encontrado a Picalia,\n¡qué bien!\n\n\n<0x10009:0x000f1300>¡Qué susto nos ha dado!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n\n\n\n¿Has estado en la tienda de Terry?\n¿En serio? Y no me has avisado...\n¡Eres un mal amigo!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000006>¿Picalia?\n\n\n\n<0x10009:0x00120900>Pues... ayer estuvimos jugando juntos\nen el <color red<cementerio>coloroff>.\n\n\n<0x10009:0x000a0900>Pero la pesada de mi madre me llamó\ny me tuve que marchar.\n\n\n<0x10009:0x00010900>¿Por qué tienes tanto interés?\n¿Es que le ha pasado algo?")
          					  case 1:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00101301>Ay, si pudiera llegar a la tienda de\nTerry, me compraría uno de esos\ncazamariposas que tiene...\n[1-]¿Has visto\na Picalia?[2-]¿La tienda\nde Terry?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000004>Voy a explicarte cómo llegar a la\ntienda de Terry.\n\n\n<0x10009:0x00120900>Parece que la tienda se para si haces\nsonar la campana que lleva colgando...\n\n\n<0x10009:0x00101300>Pero con lo alta que está...<sound 4> vas a tener\nque utilizar un <color red<proyectil>coloroff>.\n\n\n¡Si miras a tu alrededor y no la ves,\nbúscala en el <color green<mapa>coloroff>!")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n\n\n\n¿Has estado en la tienda de Terry?\n¿En serio? Y no me has avisado...\n¡Eres un mal amigo!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000001>¡Mira, mira! ¡Allí arriba! ¡Es la <color blue<tienda\nde Terry>coloroff>, por fin ha venido!\n\n\n<0x10009:0x000a1300>Me muero de ganas por conseguir un\n<color red<cazamariposas>coloroff> nuevo, y solo lo venden\nallí.\n\n<0x10009:0x00120900>Pero para poder entrar en la tienda,\nprimero hay que tocar la campana...\n\n\n<0x10009:0x00101300>Y a ver quién tiene un <color red<proyectil\n>coloroff>para darle desde aquí...")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf(/* textboxtype: 0, unk: 0, line: 152 */ "<0x10009:0x00000004>El profesor dice que, como tengo este\naspecto tan raro, si entra cualquiera y\nme ve, se puede llevar un susto enorme.\n\n<0x10009:0x00000012>Y por eso quiere que me quede aquí\nquieto todo el día...\n\n\n<0x10009:0x00090013>Bueno, tampoco es que esto sea muy\ndistinto a la vida que llevaba antes...")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000d0f><heroname>, ¿has visto a\nmi esposo?\n\n\n¡No sé qué hacer con él! En cuanto vio\nque caía la noche y que no aparecían\nmás monstruos, salió tan tranquilo\na comprobar qué pasa. ¿Y si vuelven?")
          			  case 1:
/*<476>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000c0e08><heroname>, no sabes lo contenta\nque estoy de que Picalia haya dejado\nde escaparse de casa... Desde que la\nencontraste se ha vuelto un angelito.\nOjalá pudiera decir lo mismo de su\npadre, pero desaparece en cuanto cae\nla noche. No sé adónde irá ni qué se\ntraerá entre manos...")
          			}
          		  case 1:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000c0e08>Muchísimas gracias por encontrar\na mi Picalia, <heroname>...\n\n\nSi vuelves a ver a ese señor que\nha cuidado de ella, dale un millón\nde gracias de mi parte, ¿quieres?")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000c0e14>Oh, ¡<heroname>!\n\n\n\n<0x10009:0x00000800>No sé cómo darte las gracias por haber\nencontrado a Picalia...\n\n\n<0x10009:0x00090800>Al fin puedo volver a dormir tranquila\npor las noches. ¡Muchísimas gracias!")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000c0e13>¡Ay! ¿Has encontrado a Picalia?\n\n\n\n<0x10009:0x000f0e00>¿Dices que un señor muy agradable\nha estado cuidando de ella?\nBueno, me quedo más tranquila,\n¡pero quiero ver a mi niña!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x000b0d12>Ay... la isla de la Diosa se ha hundido\ny mi Picalia sigue sin aparecer.\nLas desgracias nunca vienen solas...\n\n¡Por favor, <heroname>! \n¡Tienes que encontrarla como sea,\nte lo suplico!\n\n<0x10009:0x00090d00>¿No me digas que no vas a ayudarme\na encontrar a mi niña?")
          				  case 1:
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000b0d12>Ay, qué angustia...<pause 10> Mi Picalia...<pause 10>\nTienes que encontrarla, ¡por favor!\n\n\nSeguro que le ha pasado algo...\n¡Ahora debe estar asustada y llorando!")
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
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x15090d00>¡Qué horror! ¡La isla de la Diosa se ha\nhundido! Y pensar que hace poco\nestaba buscando a Picalia por allí...\n¡Ay, mi Picalia, es verdad!\nDime, ¿la has visto por alguna parte?\n[1-]No[2-]¿Picalia?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x150d0d12>¿Ah, no?...")
          			flw_21:
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x150f0d00>Por favor, <heroname>, ayúdame\na buscarla, ¿quieres? Hace un buen\nrato que no la veo por ningún sitio...\n\n<0x10009:0x15090d00>He preguntado a todo el mundo,\ny parece ser que la han visto con\nun tipo de aspecto siniestro.\n\n<0x10009:0x150b0d00>¡Hasta hay quien dice que la ha raptado\nun monstruo! ¡Ay! Ya no sé qué hacer...\n\n\n<0x10009:0x150e0d00>¿Y si la han secuestrado?...\nCon lo amigable que es, habrá pasado\nalguien y se la habrá llevado... ¡Ay! ")
          			flw_22:
/*< 22>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x15090d00>¡Tienes que salvar a Picalia, por favor!\n¡Seguro que está asustadísima!\n\n\n<0x10009:0x150f0d00>Por favor, <heroname>...\n[1-]¡Descuida![2]Lo siento...")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x150c0e14>¡Ay, muchas gracias! \nNo esperaba menos de un alumno de\nla academia de caballeros.\n\n<0x10009:0x15000800>¡Tráeme a Picalia de vuelta, por favor!")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x15090d12>¿Y tú te llamas alumno de la academia\nde caballeros?\n\n\n¡El deber de todo caballero es, ante\ntodo, garantizar la seguridad en las\ncalles de Neburia!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x15090d12>Es mi hija, una niña pequeña,\nde cinco añitos.")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x15090d00>¡Justo a tiempo!\n¿Has visto a mi Picalia por alguna\nparte?\n[1-]Pues no[2-]¿Picalia?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x1000D:0x1900>¡¡¡Aaah!!!")
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
/*<350>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>¡Picalia! ¡Picalia!, ¿dónde estás?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Ay, mi Picalia, mi pequeña...\n¿Dónde puede estar?...\n\n\n¿Y si se la ha llevado alguien?\n¿Qué voy a hacer?")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x150e0d11>¡Ay, <heroname>!")
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
/*<441>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070c08>Cambiando de tema, ¿has visto lo de la\nisla de la Diosa? ¿Cómo habrá podido\ndesaparecer así como así?...\n\nY la pobre Zelda también sigue en\nparadero desconocido, igual que\nVilán... No entiendo nada de lo\nque está pasando...")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>Estoy entrenando por las noches\npara ser tan fuerte como tú.")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070a0b>¡Ey, <heroname>!\n¡No sabes lo fuerte que me estoy\nponiendo con la <color yellow<poción de resistencia\n>coloroff>que me diste!\n<0x10009:0x00ffff00>Pero aun así, debo asumir de una\nvez por todas que nunca seré tan\nfuerte como tú... Es absurdo intentar\nnegar la realidad.\n\nOye, si esta noche no estás muy\nocupado, ¿por qué no vienes a verme\npara charlar un rato del tema?")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00000001>¡Hola, <heroname>! ¿Hay alguna\nnovedad sobre el paradero de Zelda?\n\n\nY, cambiando de tema... Sé que ya\nhemos hablado de esto, pero es que\ncreo que he llegado a un punto muerto\nen mi entrenamiento y no avanzo.\n¿Por qué crees que será? Si tienes\ntiempo, te agradecería que me\nvisitaras una <color red<noche>coloroff> en mi habitación\npara darme algún consejo práctico.")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nCon la <color yellow<poción de resistencia>coloroff> que me\ndiste el otro día, tengo fuerzas para \nentrenar cada <color red<noche>coloroff>.\n<0x10009:0x00101b00>Lo malo es que, poco a poco, noto que\nlas energías se me van acabando...\n\n\nLa verdad, creo que nunca llegaré a ser\ntan fuerte como tú, <heroname>.\n\n\n<0x10009:0x00ffff00>¡Pero qué pesimista soy! Lo único que\nno puedo hacer es rendirme... Oye,\n¿podrías visitarme una <color red<noche >coloroff>en mi\nhabitación para darme algún consejo?")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00070a0b>¡Oye, <heroname>!\n¡Gracias por la <color yellow<poción de resistencia>coloroff>!\n\n\n¡Desde que me la tomé no he dejado\nde hacer flexiones como loco!\n¡No hay quien me pare!\n\n<0x10009:0x00ffff00>¡Ya verás, <heroname>!\n¡Dentro de poco voy a ser tan fuerte\ncomo tú!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000001>Este... hola. Pensaba que a esas horas\nde la noche no me iba a ver nadie...\n¡Qué vergüenza!\n\nOjalá fuera un tipo fuerte como tú...\nLo cierto es que me está costando más\ntrabajo de lo que pensaba, pero no\npienso tirar la toalla así como así.")
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
/*<419>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>Estoy entrenando por las noches\npara ser tan fuerte como tú.")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070c08>Cambiando de tema, ¿has visto lo de la\nisla de la Diosa? ¿Cómo habrá podido\ndesaparecer así como así?...\n\nY la pobre Zelda también sigue en\nparadero desconocido, igual que\nVilán... No entiendo nada de lo\nque está pasando...")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000001>Si seguimos teniendo buena suerte,\nseguro que también encuentras a Zelda\nenseguida.")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012>¡<heroname>, Picalia no está por\nninguna parte! Ya no sé dónde\nbuscar... \n\n<0x10009:0x00000e10>¿Seguro que tú también la estás\nbuscando? \n\n\n<0x10009:0x00000c00>¡¿Cómo?! ¿Dices que ya la\nhas encontrado?\n\n\n<0x10009:0x00070a0b>¡Ay, qué alegría! ¡Por fin!\n¡Gracias, <heroname>!\nMenos mal... \n\nSabía que podía confiar en ti para\nencontrarla.\n")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0000000a>Ve a decírselo a su madre, ¡deprisa!\nEstará nerviosísima... Su casa está\njunto a la laguna, creo.")
          					  case 1:
/*<309>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012>¡<heroname>, Picalia no está por\nninguna parte! Ya no sé dónde\nbuscar... \n\n<0x10009:0x00000e10>¿Seguro que tú también la estás\nbuscando? \n\n\n<0x10009:0x00000c00>¡¿Cómo?! ¿Dices que ya la\nhas encontrado?\n\n\n<0x10009:0x00070a0b>¡Ay, qué alegría! ¡Por fin!\n¡Gracias, <heroname>!\nMenos mal... \n\nSabía que podía confiar en ti para\nencontrarla.\n")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070801>Oh, <heroname>... ¿Lo has visto?\n¡Es terrible! ¡La isla de la Diosa ha\ndesaparecido! \n\n<0x10009:0x00000800>Y Picalia sigue perdida sin que nadie\nsepa dónde puede estar...\n\n\n<0x10009:0x00000e00>Y Zelda ha desaparecido, y Vilán se\nha ido... No entiendo nada de lo que\nestá pasando. \n\n<0x10009:0x00070800>Solo sé que tenemos que encontrarlos\ncomo sea. ¡Voy a ayudar a buscarlos,\n<heroname>!")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000012>Ah, <heroname>...\nPicalia no aparece por ningún lado.\n\n\n<0x10009:0x00000e10>No te habrás olvidado de buscar a la\npobre niña, ¿no?\n\n\n<0x10009:0x00070200>Vamos, no debemos rendirnos.\nYo también la estoy buscando por todas\npartes...")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00001701>Yo también voy a buscarla.\n¡Tú ve a mirar por la plaza,\n<heroname>!\n\n<0x10009:0x00081700>Seguro que encuentras a algún\nniño que haya estado jugando con\nella o algo así.")
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000001>Oh, <heroname>... ¿Y bien?\n¿Ya has encontrado a Zelda?\n\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10>\nYa veo... Bueno, ¡ánimo!\n\n\n<0x10009:0x00070200>Por cierto, acabo de ver a la madre de\nPicalia yendo hacia el santuario...\n\n\n<0x10009:0x00081700>¿Le habrá pasado algo?")
/*< 30>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00200508>¿Qué? ¿Dices que Picalia ha\ndesaparecido? ¡Eso es terrible!\n\n\n<0x10009:0x00070800>¡Qué horror! ¡Pobre! ¡Tenemos que\nencontrarla! Vamos a preguntar\na todo el mundo, <heroname>.")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070801>Oh, <heroname>... ¿Lo has visto?\n¡Es terrible! ¡La isla de la Diosa ha\ndesaparecido! \n\n<0x10009:0x00000800>Y Picalia sigue perdida sin que nadie\nsepa dónde puede estar...\n\n\n<0x10009:0x00000e00>Y Zelda ha desaparecido, y Vilán se\nha ido... No entiendo nada de lo que\nestá pasando. \n\n<0x10009:0x00070800>Solo sé que tenemos que encontrarlos\ncomo sea. ¡Voy a ayudar a buscarlos,\n<heroname>!")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Oh, <heroname>... ¿Y bien?\n¿Ya has encontrado a Zelda?\n\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10>\nYa veo... ¡Bueno, ánimo!\nTodos confiamos en ti.\n\nPor cierto, hace un rato he visto a la\nmadre de Picalia junto a la puerta\ndel santuario...\n[1-]¿Quién?[2-]Lo sé")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000005>Es esa señora que vive con su esposo\ny su niña pequeña en la casa que está\nfrente a la laguna...\n\n<0x10009:0x00070800>Tengo la sensación de que ha debido\nde ocurrirle algo.")
          				  case 1:
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070806>¿En serio?...\n¡Oye, no me intentes engañar!")
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
/*<459>*/ 			printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nOye, ¿sabes algo de Vilán?\nEs que hace siglos que no lo veo...\n\n¡Espero que no hayan acabado\nexpulsándolo de la academia\npor mal comportamiento!")
          		  case 1:
/*<461>*/ 			printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n¿Sabías que Vestro me ha estado\nenseñando algunas <color red<técnicas para\ncazar insectos>coloroff>?\nPor ejemplo, dice que es mejor mover\nel cazamariposas horizontalmente,\nen lugar de moverlo de manera\nvertical como si fuera una espada.\nTambién recomienda acercarse a los\ninsectos despacio y con mucho cuidado.\nLuego solo hay que mover el control\nhacia el lado.")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000001>¡Hombre, <heroname>!\n\n\n\n¿Cómo? ¿La tri... qué? ¿<color blue<Trifulca>coloroff>?<0x10006:0xfbcd>...<0x10006:0x00cd>\n<pause 20>¿De qué trifulca me hablas?")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>¡Eh, <heroname>, fíjate en\nla torre de la luz!\n\n\nDe repente, una especie de rayo\nha surgido de ella... ¿A que es\nincreíble?")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>¡Oye, <heroname>!\n¿Sabes si es cierto eso de que el\n<color red<cazamariposas >coloroff>sirve para atrapar\notras cosas, además de insectos?\nDicen que el de la chatarrería ha\npescado algunas cosas increíbles\ncon eso...")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000001>¡Vaya, si es <heroname>!\n\n\n\n¿Cómo? ¿Que quieres que alguien\nte <color red<recite >coloroff>la letra de la canción que\ntanto le gusta a Zelda?\n\nPues lo siento, pero yo no soy médico,\nasí que no te puedo \"<color red<recitar>coloroff>\" nada...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000001>¡Yo también voy a ir a la tienda\nde Terry para comprarme un\ncazamariposas!\n\n¡Y cuando lo tenga iré a la chatarrería\npara que lo hagan más grande!")
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
/*< 54>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000001>Este señor no es malo... ¡claro que no!\n¡Si es más bueno que el pan!\n\n\nMe salvó cuando estuve a punto de\ncaerme por el barranco.\n\n\nGracias a él he aprendido lo peligroso\nque es andar sola de noche.\n\n\n¿Puedes decirle a mi mamá que volveré\nmañana por la mañana?")
          	  case 1:
/*<163>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000006>Oye, ¿qué te pasa?\n¿Por qué tienes esa cara?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000001>Mi objetivo es llegar a ser tan fuerte\ncomo tú, por eso por las noches entreno\nen mi cuarto sin que nadie se entere...\n\nPero acabo cansadísimo...\n¿Cómo lo haces? Parece que\nno te cuesta ningún trabajo...")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000001>Hola, <heroname>.\n¿Tienes alguna novedad sobre el\nparadero de Zelda?\n\nGuárdame el secreto, ¿eh?... El caso\nes que llevo un tiempo entrenando <color red<por\nlas noches >coloroff>para ponerme tan fuerte\ncomo tú...\nPero<pause 5>.<pause 5>.<pause 5>.<pause 10> <0x10009:0x00000a06>no me gusta que la gente me vea\nen plena acción, así que no entres en\n<color red<mi cuarto>coloroff> por la noche, por favor.")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000001>¿Cómo estás, <heroname>?\n¿Ya sabes algo el paradero de Zelda?\n¡Ojalá la encuentres pronto!")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000811>¿Has visto, <heroname>?\n¡La torre de la luz emite una... luz,\nvalga la redundancia! ¡Nunca había\nvisto nada parecido!")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00070a0b>¡Buenas, <heroname>!\n\n\n\n<0x10009:0x0000ff05>¿<color red<Dos grandes hojas>coloroff>, dices? Pues... en\nNeburia siempre sopla un viento muy\nfuerte, y hay dispositivos ideados para\naprovecharlo. Si no se refiere a eso...")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00070a0b>¡Hola, <heroname>!\n\n\n\n<0x10009:0x0000ff08>¿Cómo? ¿El <color red<Cántico de la Diosa>coloroff>?...<pause 30>\nAh, sí, ese que siempre cantaba Zelda.\n\n\nPues me temo que no sé la letra, pero \nseguro que el director te puede ayudar.")
          						  case 1:
/*<314>*/ 							printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x0000000b>La madre de Picalia debe estar\ncontentísima, ¿no? ¡Qué bien!")
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
/*<474>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n<pause 30>¡¿Quééé?! ¿Dices que mi amigo\nse ha convertido en un humano?...\n\n<0x10006:0xfbcd>Qué rabia...<0x10006:0x00cd> ¡Me encantaban esas alas\ntan grandes que tenía!")
          	  case 1:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>¡Eres tú, <heroname>!\n\n\n\n¿Sabes qué? Mi amigo, el señor que\nconociste, colecciona la gratitud de la\ngente. ¡Yo no sabía que eso se podía\ncoleccionar!")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf(/* textboxtype: 0, unk: 1, line: 112 */ "")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf(/* textboxtype: 0, unk: 1, line: 115 */ "")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf(/* textboxtype: 0, unk: 0, line: 116 */ "Sí, <0x10012:0x00000005>amo. Se ha cancelado el ajuste del\n<sound 4>rastreador. ")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x00000013>¡Rayos, pero si era el robot\nde Gondo! ¡Qué sorpresa!...")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf(/* textboxtype: 1, unk: 0, line: 93 */ "Espera...\n\n\n\n<pause 20>¡No puede ser!<pause 40>\n\n\n\n<0x10009:0x000c0c00>Si este es el <color red<rotor del molino >coloroff>que se\ncreía perdido bajo las nubes, ¡entonces\nlos tatarabuelos de Gondo decían la\nverdad!\nNo sé cómo lo habrás hecho, pero el\ncaso es que ya tenemos la pieza para\narreglar el molino.")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf(/* textboxtype: 0, unk: 1, line: 94 */ "A ver... Esto por aquí... Esto por allá...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		wait_frames(15)
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		wait_frames(30)
/*< 89>*/ 		printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x000a010e>¡Uf!")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x000c0c00>Listo, otra vez como nuevo.\nSi quieres girar el molino entero, solo\ntienes que conseguir mover el rotor.")
/*<210>*/ 		printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000100><0x10008:0xffcd>¡Amor!\n¡Amooor!")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00050714>¡Si es mi esposa!\nSe me había olvidado que tenía que\narreglar la alacena de casa...\n\nNo debía habérselo prometido...\n¡Siempre está dando cosas que hacer\na todo el mundo!")
/*< 91>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x000c0c00>Bueno, <heroname>...\n¡Nos vemos!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00050714>Ahora que lo pienso...\n¡Se supone que estábamos buscando\na nuestra Picalia!")
/*<296>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x000c0c00>Bueno, <heroname>, nos vemos.\nPor cierto, si tienes tiempo, ayúdanos\na buscar a Picalia, ¿quieres?")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000005>Si te digo la verdad, yo no me creo\nnada... ¿Recoger cosas de debajo\nde las nubes?... Sería imposible.\nPero <color blue<Gondo >coloroff>sí se lo cree.\nY dicen que guarda lo que cree que son\nlos restos de ese robot como si fuera\nun tesoro.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Oye, <heroname>, te agradezco\nmucho que hayas encontrado a Picalia,\nde verdad.\n\nAh, qué día más espléndido hace hoy,\n¿no te parece?\n\n\nDan ganas de ir a La Calabaza Flotante\ny pasar la tarde tomando un buen plato\nde sopa.\n\nPero mi esposa me ha dicho que\narregle la alacena... A ver cómo\nme escapo ahora.\n\nAy, si hace una tarde buenísima...")
          			  case 1:
/*<292>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x0000000e>Hola, <heroname>.\nNo sé dónde se habrá metido Picalia,\nno aparece por ningún lado...\n¡Esa niña!\nEstoy empezando a preocuparme...\n\n\n\nMira a ver si la encuentras tú también,\n¿quieres?")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 117 */ "¡Fay es un encanto! Si ella me lo pide,\nno puedo negarme...\n")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 0, unk: 1, line: 118 */ ".<pause 5>.<pause 5>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 153 */ "Una extraña presencia emana\ndel interior.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00010701>Cuando quieras que te adivine algo,\nsolo tienes que visitar mi puesto\nen el bazar, muchacho.\n\n¡Te haré un precio especial, por ser tú!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 0, unk: 1, line: 130 */ "<0x10009:0x0010070d>¡Ooooh!\n\n\n\n¡Qué maravilla! ¡Si es igual que mi\nantigua bola de cristal!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf(/* textboxtype: 0, unk: 0, line: 131 */ "<0x10009:0x00000700>¡Ejem! ¡Ujum!\n¡Noto cómo vuelve a fluir la energía\npor todo mi cuerpo!\n\n¡Fantástico! ¡Con esta bola podré\nvolver a contemplar el futuro y\nsus entresijos hasta que me aburra!\n\nCuando quieras que te adivine algo,\nsolo tienes que acudir a mí, muchacho.\n\n\n¡Te haré un precio especial, por ser tú!")
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
/*<103>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Oye, oye... ¿Qué estás haciendo?\n¿Dónde está la bola de cristal nueva\nque me prometiste?")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Oye, oye... ¿Qué estás haciendo?\n¿Dónde está la bola de cristal nueva\nque me prometiste?")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf(/* textboxtype: 0, unk: 0, line: 110 */ "La <color red<bola de cristal >coloroff>no está configurada\ncomo objetivo del <sound 4><color red<rastreador>coloroff>.\n\n\n¿Quiere el <0x10012:0x00000001>amo añadirla como objetivo\ndel <sound 4><color red<rastreador>coloroff>?\n[1-]Sí[2]No")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf(/* textboxtype: 0, unk: 0, line: 113 */ "Entendido, <0x10012:0x00000005>amo.\n\n\n\nHe ajustado el <sound 4><color red<rastreador >coloroff>para que\ndetecte la presencia de la <color red<bola de\ncristal >coloroff>que busca este individuo.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 0, unk: 0, line: 116 */ "Sí, <0x10012:0x00000005>amo. Se ha cancelado el ajuste del\n<sound 4>rastreador. ")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf(/* textboxtype: 0, unk: 1, line: 124 */ "<0x10009:0x000c100f>Vete, ¿quieres? Déjame tranquilo...\nAquí no hay nada que ver, nunca mejor\ndicho...\n\nSin mi bola de cristal, no tengo manera\nde ver el futuro, ¡ay!\n\n\nMe he quedado sin futuro, igual que\nme he quedado sin bola... <0x10006:0xfccd>Mis ojos<0x10006:0x00cd> no\ntienen cristal en el que posarse...\n\n<pause 30>Ay, qué desgracia más grande...\nSi al menos pudiera conseguir una\nbola de cristal nueva...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 0, unk: 0, line: 125 */ "Oye, ahora que caigo... Me han dicho\nque encontraste una pieza del molino\nen las tierras inferiores. ¿Es verdad?\n\nVerás, resulta que esta bola también\nprocede de allá abajo. La encontraron\nlos tatarabuelos de Gondo hace ya\nmucho tiempo.\n¿Y si hay otras como esta en algún\nlugar de ahí abajo? ¡Búscame una\nnueva, por favor!\n[1-]Claro[2]Lo siento")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 126 */ "¡Ay, no sabes cuánto te lo agradezco!\n\n\n\nSegún me dijeron en la chatarrería,\nencontraron mi vieja bola de cristal en\nun <color red<edificio en lo alto de una montaña>coloroff>. ")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf(/* textboxtype: 1, unk: 0, line: 105 */ "Puedo añadir la <color red<bola de cristal >coloroff>que\ndesea buscar este individuo a la lista\nde objetivos del <sound 4><color red<rastreador>coloroff>.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\n¿Debería por tanto configurar el\n<color red<rastreador >coloroff>para que detecte la\npresencia de la <color red<bola de cristal>coloroff>?\n[1-]Sí, por favor[2]Todavía no")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf(/* textboxtype: 0, unk: 1, line: 106 */ "Entendido, <0x10012:0x00000005>amo. He añadido la bola de\ncristal como objetivo del rastreador.")
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
/*<392>*/ 						printf(/* textboxtype: 0, unk: 1, line: 127 */ "<0x10009:0x0001070b>Te lo pido por favor...\nCon una bola de cristal rota no puedo\nver el futuro ni adivinar nada.\n\nAsí no hay manera de saber qué te\ntiene reservado el destino, muchacho.\n\n\n¡Vamos, sé un buen chico y tráeme\nuna bola nueva!")
          					  case 1:
/*<467>*/ 						printf(/* textboxtype: 0, unk: 0, line: 107 */ "Entendido. Si el <0x10012:0x00000005>amo cambia de\nopinión, solo tiene que hablar de nuevo\ncon este individuo.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10006:0xfccd>Oh...<0x10006:0x00cd><0x10009:0x000c1009> Qué mundo este...<0x10006:0xfccd>\nEsto es horrible...<0x10006:0x00cd>")
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
/*<480>*/ 				printf(/* textboxtype: 1, unk: 0, line: 150 */ "En fin... perdona que me emocione.\nSupongo que la desaparición de la\nefigie de la Diosa me ha afectado más\nde lo que esperaba.\nPero sé que es por una buena causa.\nSegún dice el director, era necesario\npara poder salvar a Zelda. ¡Espero\nque la encuentres pronto!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf(/* textboxtype: 0, unk: 1, line: 148 */ "¡<heroname>...!\nMe maravilla comprobar que aún\nexisten en el mundo especies que\ndesconocemos.")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf(/* textboxtype: 0, unk: 0, line: 149 */ "<0x10009:0x000e050a>Es una auténtica maravilla...\nCuanto más a fondo lo observo,\n¡más me cautiva!\n\n<0x10009:0x00000500>Resulta difícil determinar hasta qué\npunto es vegetal y hasta qué punto\nanimal...")
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
/*<275>*/ 					printf(/* textboxtype: 0, unk: 0, line: 143 */ "<0x10009:0x00000009>Jo, jo, jo, ya sabía yo que se podía\ncontar contigo para cualquier cosa,\n<heroname>.\n\n¡Espero esas plantas con ansia!")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						wait_frames(15)
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf(/* textboxtype: 1, unk: 0, line: 111 */ "La <color red<planta >coloroff>no está configurada como\nobjetivo del <sound 4><color red<rastreador>coloroff>.\n\n\n¿Quiere el <0x10012:0x00000001>amo añadirla como objetivo\ndel <sound 4><color red<rastreador>coloroff>?\n[1-]Sí[2]No")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf(/* textboxtype: 1, unk: 0, line: 114 */ "Entendido, <0x10012:0x00000005>amo.\n\n\n\nHe ajustado el <sound 4><color red<rastreador >coloroff>para que\ndetecte la presencia de la <color red<planta>coloroff>\nque busca esta persona.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf(/* textboxtype: 0, unk: 0, line: 116 */ "Sí, <0x10012:0x00000005>amo. Se ha cancelado el ajuste del\n<sound 4>rastreador. ")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 0, unk: 1, line: 142 */ "<0x10009:0x00000001>¿Qué tal? ¿Has encontrado alguna\nnueva especie vegetal?\n")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf(/* textboxtype: 0, unk: 0, line: 140 */ "<0x10009:0x00000001>¡Oh, <heroname>!\n¿De verdad estás dispuesto\na ayudarme?\n\n¡Qué bien! Clasificar plantas raras es\nmi pasión.")
          						flw_118:
/*<118>*/ 						printf(/* textboxtype: 0, unk: 1, line: 139 */ "<0x10009:0x00000000>Dicho esto... pensar que mi colección\nde plantas ya está completa me deja un\npoco triste...\n\nMe pregunto si no quedarán especies\nnuevas por descubrir en algún lugar.\n\n\n<0x10009:0x00090a0f>¿Qué dices? ¿Me ayudas a encontrar\nplantas nunca vistas que asombren al\nmundo?\n[1-]Suena\nbien[2]Imposible")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000a0a03>Jo, jo, jo, ya sabía yo que te ofrecerías\na ayudarme, <heroname>.\n\n\nEspero ansioso que traigas vegetales\nextraños a montones, especies que\nnadie haya visto jamás.")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							wait_frames(15)
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf(/* textboxtype: 1, unk: 0, line: 108 */ "Puedo añadir la <color red<planta >coloroff>que busca esta\npersona a la lista de objetivos del\n<sound 4><color red<rastreador>coloroff>.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\n¿Debería por tanto configurar el\n<color red<rastreador >coloroff>para que detecte la\npresencia de la <color red<planta>coloroff>?\n[1-]Sí, por favor[2]Todavía no")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 0, unk: 1, line: 109 */ "Entendido, <0x10012:0x00000005>amo. He añadido la planta\ncomo objetivo del rastreador.")
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
/*<470>*/ 								printf(/* textboxtype: 0, unk: 0, line: 107 */ "Entendido. Si el <0x10012:0x00000005>amo cambia de\nopinión, solo tiene que hablar de nuevo\ncon este individuo.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x000a0a09>¡Jo, jo, jo! Cierto, cierto, tú ya tienes\nbastante con tu misión. ¡Perdón!\n\n\nPero... ¿no crees que es aburridísimo\nestar todo el día buscando una misma\ncosa?\n\nEs bueno variar un poco de vez en\ncuando, hazme caso.")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "En fin... perdona que me emocione.\nSupongo que la desaparición de la\nefigie de la Diosa me ha afectado más\nde lo que esperaba.\nPero sé que es por una buena causa.\nSegún dice el director, era necesario\npara poder salvar a Zelda. ¡Espero\nque la encuentres pronto!")
          							flw_116:
/*<116>*/ 							printf(/* textboxtype: 0, unk: 0, line: 137 */ "<0x10009:0x00000013>Ejem, por cierto...\nHay algo que quisiera pedirte.\n\n\nComo bien sabes, soy amante de la\nbotánica y tengo la mayor colección\nde plantas de toda Neburia.\n\nAunque esté mal que yo lo diga...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x00000001>Ah, <heroname>. \n¿Has podido hablar con Narisha?\n\n\n¿Ah, sí? Jo, jo, jo, ¡impresionante!\nEres increíble, de verdad.\n\n\nNo hay nada que pueda contigo\ny con tu neburí rojo.\n\n\nTienen un arduo camino por delante,\npero estoy seguro de que podrán con\ntodo. ¡Ánimo y suerte!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10009:0x00000001>Oye, <heroname>...\n¿Te importaría ayudarme con\ncierto asunto?\n[1-]Bueno[2]Lo siento")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf(/* textboxtype: 1, unk: 0, line: 135 */ "Bueno, no hace falta que sea ahora\nmismo... Resulta que la madre de\nPicalia me ha pedido que la ayude\na buscar a su hija.\nY quería pedirte a ti también que\nla buscaras por ahí si tienes tiempo.")
          						  case 1:
/*<130>*/ 							printf(/* textboxtype: 2, unk: 0, line: 134 */ "<0x10009:0x00000009>Yo pensaba que eras un buen chico\nque se preocupa por los problemas\nde los demás...")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "En fin... perdona que me emocione.\nSupongo que la desaparición de la\nefigie de la Diosa me ha afectado más\nde lo que esperaba.\nPero sé que es por una buena causa.\nSegún dice el director, era necesario\npara poder salvar a Zelda. ¡Espero\nque la encuentres pronto!")
          						  case 1:
/*<316>*/ 							printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x00000001>Ah, <heroname>. \n¿Has podido hablar con Narisha?\n\n\n¿Ah, sí? Jo, jo, jo, ¡impresionante!\nEres increíble, de verdad.\n\n\nNo hay nada que pueda contigo\ny con tu neburí rojo.\n\n\nTienen un arduo camino por delante,\npero estoy seguro de que podrán con\ntodo. ¡Ánimo y suerte!")
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
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "¡Aquí les dejo el <color red<rotor>coloroff>!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 1, line: 121 */ "Si se les ofrece cualquier otra cosa,\n¡ya saben dónde estoy!\n\n\nPor Fay iría hasta el fin del mundo...")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 151 */ "<0x10009:0x00090011>Por favor... Me parece rarísimo\nque me mire tan fijamente...\n")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "¡Aquí traigo esta bola de cristal\nque brilla tanto!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf(/* textboxtype: 0, unk: 1, line: 121 */ "Si se les ofrece cualquier otra cosa,\n¡ya saben dónde estoy!\n\n\nPor Fay iría hasta el fin del mundo...")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>¡Picalia! ¡Picalia!, ¿dónde estás?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Ay, mi Picalia, mi pequeña...\n¿Dónde puede estar?...\n\n\n¿Y si se la ha llevado alguien?\n¿Qué voy a hacer?")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x150e0d11>¡Ay, <heroname>!")
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
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 123 */ "Si se te ofrece algo más, ya sabes...\nSolo tienes que decirle a Fay que\nme llame.")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 0, unk: 0, line: 122 */ "Aquí lo traigo: un kyu de lo más raro\nrecién pescado del bosque.")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

