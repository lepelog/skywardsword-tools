          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "¡Esto está mucho más animado\ndesde que volvió el vidente!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "Conque, como yo decía, el vidente\nestaba encerrado en su casa\nlloriqueando...\n\nEs posible que se anime a volver\nsi alguien le encuentra una nueva bola\nde cristal...")
          				  case 1:
/*<128>*/ 					printf(/* textboxtype: 1, unk: 0, line: 4 */ "Si no me equivoco, la casa del vidente\nquedaba <color red<muy >coloroff><color red<<color red<hacia <color red<el este>coloroff>...\n\n\nLa verdad es que se le echa de menos.\n¿Te importaría pasarte a ver si el buen\nhombre está bien?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "Vaya... hace mucho que no se topa uno\ncon el <color blue<vidente >coloroff>por aquí...\n\n\nSe le había roto la bola de cristal,\nasí que quizás esté en su casa,\nlloriqueando por su mala suerte.")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Ajá...")
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "Conque, como yo decía, el vidente\nestaba encerrado en su casa\nlloriqueando...\n\nEs posible que se anime a volver\nsi alguien le encuentra una nueva bola\nde cristal...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "¿Me harías el favor de ir a ver qué tal \nse encuentra?\n\n\nCreo que su casa estaba tirando hacia\nel <color red<extremo este >coloroff>de Altárea.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "¿Has dado alguna vez un paseo\npor Altárea cuando oscurece?<pause 25>\n¡No te imaginas cuánto cambia!\n\nPor ejemplo, tengo entendido que,\nde noche, el dueño de la tienda de\nutensilios se dedica a la compra de\ntesoros en su propia casa.\nNo es muy aconsejable andar por ahí\na esas horas, pero tratándose de\nun futuro caballero como tú, no creo\nque pase nada.\n¡Para levantarte de noche, no tienes\nmás que <color green<acostarte en una cama>coloroff>!<pause 25>\n¡Eso es todo!")
          			  case 1:
/*<  3>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "La mejor receta contra la fatiga\nes descansar.<pause 25> ¡Y <color green<para dormir\nsolo hace falta encontrar\nuna cama>coloroff>, estés donde estés!\nDe noche, Altárea se transforma\nen una ciudad distinta de la que\nse puede ver a plena luz del día,\n¿sabes, rapaz?\nSi <color green<echas una cabezada en la cama>coloroff>,\ncuando despiertes podrás disfrutar\nde otra cara de la ciudad, según sea\nde día o de noche.")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "Espejito lindo, tú que tanto sabes...\n¿Quién es la más bella que hay\npor estos lares?")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x22000002>¿A que es justo lo que estabas\npensando, <heroname>?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "No sé si será verdad o no, pero corre\nel rumor de que por las <color red<noches>coloroff> se oyen\nlamentos de una voz de mujer por los\npasillos de la <color red<academia de caballeros>coloroff>... \nAy, esas historias me ponen la carne\nde gallina, es superior a mí... \n")
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "¡¿Qué dices?! ¿Una mano espectral\nque sale del retrete y...?\n\n\nBu...<pause 20> bueno, lo mismo se trata de\nuna persona un poco vergonzosa,\nnada más. No pensemos mal...")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "No sé si será verdad o no, pero corre\nel rumor de que por las <color red<noches>coloroff> se oyen\nlamentos de una voz de mujer por los\npasillos de la <color red<academia de caballeros>coloroff>... \nAy, esas historias me ponen la carne\nde gallina, es superior a mí... \n")
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "¡Cómo! ¿Que alguien pide papel...<pause 20>\ndesde el retrete?\n\n\nBueno, quien más quien menos, todos\nhemos tenido ese problema alguna vez.\n¡Es un pequeño drama cotidiano!")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "No sé si será verdad o no, pero corre\nel rumor de que por las <color red<noches>coloroff> se oyen\nlamentos de una voz de mujer por los\npasillos de la <color red<academia de caballeros>coloroff>... \nAy, esas historias me ponen la carne\nde gallina, es superior a mí... \n")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "¡Recuerda lo que te enseñé! Pulsa (2)\ncuando quieras ver la ayuda.<0x10011:0x05cd>")
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "¿Ya estás en último curso de aprendiz\nde caballero? ¡Enhorabuena!\n\n\nPero que no se te suba a la cabeza, ¿eh?\nSi hay alguna cosa que no entiendas,\npulsa (2) para ver una pequeña ayuda.<0x10011:0x05cd>\n\n¡Que no te dé vergüenza!")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000001>Hombre, eres tú, <heroname>.\nHoy es el gran día, ¿verdad?\n¡Me refiero al torneo celeste!\n\nSi ganas, por fin pasarás al curso\nsuperior en la academia.")
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "¡En Altárea, uno demuestra su valía\ncomo persona cuando aprende\na montar en pelícaro!\n\n<0x10009:0x000a0404>Y si pretendes convertirte en caballero\nalgún día, con más razón deberás\ndemostrar tu habilidad en el aire.\n\n¡Todos pasamos más o menos por\nlo mismo durante nuestra formación\ncomo jinetes celestes!")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000002>¿Es que nadie te ha dicho que es\nde mala educación entrar en casa\najena sin invitación?\n\nYo trabajo en el bazar por las mañanas,\npero hoy he cerrado por lo del torneo\nceleste.\n\n<0x10009:0x00000015>Ay, siempre estoy deseando tener\nun día libre, y cuando por fin\nlo consigo, me aburro como\nuna ostra...")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x12110016>No...<pause 15> ¡No te arrepentirás!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x14080913>Pues claro que no, no seas tonto.\n\n\n\n¡Supongo que habrá que contárselo\na tu madre lo antes posible!\nNi siquiera la conozco todavía...\n\nSeguro que es igual que tú.\nHonesta, seria y trabajadora,\n¿verdad?")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x12090c18>Esto... igual es un poco pronto para\npresentaciones...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x14000005>¡Qué tontería! Cuanto antes zanjemos\nestas cosas, mejor que mejor.\n\n\n<0x10009:0x14080913>Así que ya puedes invitarme a tu casa\npronto, ¿entendido?")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000001>¡Hombre, <heroname>!\n¿Qué haces levantado tan tarde?\n\n\n<0x10009:0x00111300>Mi madre sigue preparando la cena...\n¿Estará lista ya? ¡Ya podía darse prisa,\ntengo un hambre que me caigo!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000e0812>¿Pero qué ha pasado?...\n¡La Diosa ha desaparecido!\n\n\n<0x10009:0x000f0d00>Están sucediendo cosas muy raras\nen Altárea...")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 67 */ "Y mi Cuqui sigue sin aparecer...\nYa me empieza a preocupar.\n\n\n<0x10009:0x00000800>Oye, <heroname>...\n¿Podrías ir a buscarla?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000001>Hombre, chaval. ¿Qué tal te está yendo\ncon el robot?\n\n\nPuede que sea un poco bocazas...\n¡pero en el fondo tiene buen corazón,\nte lo digo yo!\n\n¡Prométeme que tratarás de llevarte\nbien con él!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000003>¡Eh, chaval! ¿Qué haces levantado\ntan tarde? Como te descuides,\n¡te acabará comiendo un lémury!\n\nEn Altárea nadie sale en plena noche\na la calle salvo que sea absolutamente\nimperativo.")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 68 */ "El jefe se pasa el día trasteando con sus\ncacharros. Parece su única afición...\n\n\nPero yo sé el verdadero motivo.\n¡Quiere fabricar una lavadora\nautomática para su madre!\n\n¡Qué majo el jefe!... En realidad\nes un pedazo de pan, ¿verdad?\n\n\nLo contrario a cierta persona que tú\ny yo sabemos, que lleva a la pobre\nFay de aquí para allá todo el día...")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000056>Por lo que más quieras, hazme el favor\nde ir a hablar con el imbécil de mi hijo.")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Y yo que pensaba que cuando arreglase\nel robot se olvidaría por fin de todos\nesos cacharros...\n\n¡Pero no! Como decía mi abuela:\n¡el que nace ya tarumba no se\ncura ni en la tumba!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Se pasa las noches en vela tratando\nde arreglar el robot ese que heredó\ndel abuelo...\n\n¿Qué cree que va a conseguir\ntrasteando con ese montón\nde chatarra?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000056>Hay que ver la de mugre que sale\nde la ropa de mi hijo...\n\n\nMe da igual que se dedique a arreglar\nmáquinas. ¡Estoy harta de que la\ncolada se me pringue entera de grasa!\n[1-]¿Tu hijo?[2-]Vaya\nfaena")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "¡Pues claro! ¡El idiota de mi hijo,\nel que lleva la chatarrería! De quién\niba a estar hablando si no...")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Es que acaba con mi paciencia...\n¡Es de lo que no hay!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00001101>¿No tendrías que estar buscando\na tu pelícaro?")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00001104>Veo que por allí andaban discutiendo.\n¿Qué rayos habrá pasado?\nLa cosa parecía bastante peliaguda...")
          		}
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000005>Me encanta estar aquí sentado...\n\n\n\n¡Así me puedo pasar las horas muertas\npensando en ella tan ricamente!\n\n\n<0x10009:0x000a0c00>Estoy hablando de <color blue<Calabelle>coloroff>, la chica\ndel Calabarza's. Aaaah...\n¡Si vieras lo mona que es!...")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000001>Hola, <heroname>. No habrás\nvisto por ahí a Cuqui, ¿verdad?\n\n\n¡Es que no para quieta! ¡Nunca sabe\nuna por dónde se ha metido!\nMe tiene frita, de verdad...")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0000000a>¿Qué tal, <heroname>? \nOye, no habrás visto por ahí\na mi Cuqui, ¿verdad?\n\nSiempre anda de un lado para otro...\nSale disparada a jugar a la calle\ny no hay quien la pille.\n\nChico, me tiene todo el día atacadita\nde los nervios, preguntándome si no\nle habrá pasado algo...\n")
          	}
          }

          void entrypoint_122_26() {
/*< 96>*/ 	start()
/*< 97>*/ 	set_camera(4, 0)
/*< 98>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_27() {
/*<101>*/ 	start()
/*<195>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<197>*/ 		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
          		  case 0:
/*<198>*/ 			entrypoint_118_12();
          		  case 1:
          			flw_102:
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000004>¡Oh, eres tú! ¿Sabes que la Diosa\nha desaparecido?\n\n\n<0x10009:0x00000011>Igual se ha enfadado porque antes\nhe desobedecido a papá y mamá...")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000001>¡Hola, <heroname>! Esta de aquí\nes mi casa. ¿A que es la más chula\nde todo el barrio? ¿A que sí?\n\nHoy pienso ir a jugar otra vez con ese\nseñor tan majo. ¡Es que me encanta\njugar a todas horas!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x0009030a>¡Eeeeh, tú!\n\n\n\n<0x10009:0x00ffff04>Oh, bueno...<pause 20>\nSupongo que no pasa nada por que\nte sientes ahí un rato.\n\n<0x10009:0x00ff03ff>¡Pero procura no mancharme el sofá,\nque vale un potosí!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000011>Zzz... zzz... zzz...\n¡Hola, señor demonio!\nZzz... zzz... zzz...")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 74 */ "Si tienes hambre, llegas un poco\ntarde... ¡la cocina está cerrada!\nTendrás que esperar a la hora\ndel almuerzo.")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000001>¡Hombre, <heroname>!\n¿Te has fijado qué cambio?\n\n\nDesde que esos horribles monstruos\nhan desaparecido, se respira paz\npor todos los rincones de Altárea...\n\nNo te imaginas cómo echaba de menos\npasear plácidamente y disfrutar de\nla suave brisa nocturna, gorrión...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000001>¡Qué alegría que hayas encontrado\na nuestra Cuqui sana y salva!\n\n\n<0x10009:0x00000009>¡Muchísimas gracias, gorrión!\nMírala, con lo que nos ha hecho pasar\ny aquí está, roncando tan feliz... \n")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x0000000e>¡¿Estás seguro?! ¿De verdad que has\nencontrado a Cuqui?\n\n\n¡Ya te lo dije! En Altárea no hay ni una\nsola manzana podrida. ¡Quién iba a\nsecuestrar a una niñita tan pequeña!...")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>¿Dónde se habrá metido Cuqui?\nMenuda gorriona está hecha...\n\n\nSu madre no para de decir que\nla han secuestrado, pero tengo\nla sensación de que no es eso.\n\n<0x10009:0x000e0d00>¡A nadie en Altárea se le ocurriría\nhacer algo semejante!\n\n\n<0x10009:0x00000d0f>Ya verás cómo vuelve a casa en\nel momento menos pensado...\n\n\nBueno, si la ves zascandileando por ahí,\n¡dile que vuelva a casa de una vez!")
          				  case 1:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>¡Buenas, <heroname>! Mira cómo\nduerme Cuqui... ¿No es una monada? \nParece un gorrioncillo...\n\nCada vez que la veo, me doy cuenta\nde que si tuviera que currar el doble\nde horas por ella, lo haría encantado.\n\n¿Pero quién rayos será ese demonio\ndel que habla?")
          				}
          			}
          		}
          	}
          }

          void entrypoint_122_13() {
/*< 31>*/ 	start()
/*< 61>*/ 	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          	  case 0:
/*<188>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 60, 'param3': 31}
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000012>Ay, Cuqui sigue sin aparecer...\n\n\n\n¡Por favor, encuéntrala y tráemela\nde vuelta a casa!")
          	  case 1:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000001>Buenas noches, <heroname>.\n¿Ha pasado algo? Chico, es que como\napareces por aquí a estas horas...")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 74 */ "Si tienes hambre, llegas un poco\ntarde... ¡la cocina está cerrada!\nTendrás que esperar a la hora\ndel almuerzo.")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000002>¡Buenas, <heroname>!\n¡Cuqui ha vuelto a casa por fin!\n\n\n¡Y pensar que tuviste que ser tú\nel que la encontrara, gorrión!...\n\n\n<0x10009:0x00100d09>No sabes cómo te lo agradezco. \n¡Mi parienta se puso como loca\nde contenta!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000f0d12>Ah, hola, <heroname>...\nNuestra Cuqui ha desaparecido,\nigual ya te habías enterado...\n\n<0x10009:0x00ffff00>Mi parienta hasta cree que la han\nsecuestrado... Está histérica, la pobre.\n\n\n<0x10009:0x00100d03>Pero yo sé que no es así.<pause 10>\nLa conozco; seguro que está jugando y\npasándoselo bomba vete a saber dónde.")
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x000f0d00>De todos modos, avísame si te la\nencuentras por ahí, ¿eh?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000002>Hombre, <heroname>, muy\nbuenas. Esta que ves aquí es\nla <color red<torre de la luz>coloroff>.\n\nA ti que se te da bien eso de trepar a\nlos sitios, ¿por qué no pruebas a subir\nhasta arriba del todo? Tiene que ser\nun subidón, nunca mejor dicho...")
          			  case 1:
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000002>Hola, <heroname>.\n\n\n\nEsta es la <color red<torre de la luz>coloroff>. Por lo que se\ndice, su función desde tiempos remotos\nes señalar la posición de Altárea.\n\n<0x10009:0x000f0d00>¿Pero por qué la llamarán así?\nYo nunca he visto ninguna luz...\nY tampoco se sabe quién la construyó,\nlleva aquí desde ni se sabe cuándo.\n<0x10009:0x00100d00>¡Oye, gorrión, podrías intentar subirte\narriba del todo! Desde allí seguro que\nse ve a la Diosa mucho mejor.")
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x000f0d05>¿Que por qué no subo yo?...\n\n\n\n<0x10009:0x00000800>¿Estás loco? ¡Me dan pavor las alturas!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10012:0x00000064>¡Ahí va, la entrada del volcán!<pause 30>\n¡Tengo que llegar antes\nque el amo verdoso!")
          }

          void entrypoint_122_15() {
/*< 36>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 37, 'next': 45, 'param3': 32}
/*< 45>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 38, 'next': 46, 'param3': 32}
/*< 46>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 39, 'next': 62, 'param3': 32}
/*< 62>*/ 	set_camera(1, 0)
/*<179>*/ 	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
          	  case 0:
/*<176>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 173, 'param3': 16}
/*<173>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x25070707>¿Lo habéis oído, chicas? Parece ser que\na uno de los chavales que vuelan hoy\nen el torneo celeste le ha desaparecido\nel pelícaro... ¡Vaya faena!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x26070701>Y que lo digas... menudo momento para\nquedarse sin montura. Su jinete debe\nde estar mordiéndose hasta los codos\nde los nervios, el pobrecillo...")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x27070702>Pues a mí los pelícaros me dan algo de\ncosa, qué quieres que te diga. Con esas\ngarras que tienen, que da hasta miedo\nverlos... Oigh, quita, quita.")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x25070707>Con este tiempo tan bueno y yo aquí, \ntan liada que no puedo ni disfrutarlo...")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x26070701>¡No eres la única! Ese desastre de hijo\nque tengo me ha dejado una montaña\nde ropa sucia. ¡No acabo nunca!")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x27070702>Con la lata que es esto de limpiar...\nNo entiendo cómo podéis soportarlo.\n¡Ojalá alguien hiciera la colada por mí!")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	wait_frames(20)
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x070a0c12>Mmm, esta mujer...\n<0x10008:0xfecd>(¿Dónde demonios se habrá metido?...)")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Deberías pasarte más por aquí y\nhacerle compañía a este pobre viejo.")
          	  case 1:
/*<141>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "Estarás cansado de andar todo el día\ntrotando de acá para allá... \n¡Así me gusta, rapaz, que tengas brío!\n\n\nEspérate, que te invito a un trago...\n¿te hace?\n\n[1-]Vale[2]No, gracias")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00010700>¡Así se habla! Hala, aquí tienes, \ntómatelo a mi salud.")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			wait_frames(60)
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00070700>¡Oooh, te lo has ventilado de un trago!\nMe gusta tu estilo, sí señor...")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf(/* textboxtype: 1, unk: 0, line: 55 */ "¿Quieres saber una cosa, rapaz?\n\n\n\nSeguro que al ir volando por ahí habrás\nvisto alguna vez suspendidos en mitad\ndel cielo esos <color red<peñascos con agujeros>coloroff>...\n\n<0x10009:0x00010700>Pues se ve que en los agujeros esos\nse concentra una especie de energía\ndesconocida.\n\nAl atravesarlos en pleno vuelo, le dan\nal pelícaro un impulso extraordinario.\n¡Deberías probarlo!\n\n<0x10009:0x00070700>Es un truco muy usado por los jinetes\ncelestes veteranos para cubrir grandes\ndistancias en poco tiempo.")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf(/* textboxtype: 1, unk: 0, line: 56 */ "¿Quieres que te diga algo, rapaz?\n\n\n\n<0x10009:0x00010700>Como es bien sabido, todo Celéstea está\nsalpicado de islotes flotantes, como \nnuestra propia Altárea.\n\nPero lo que nadie sabe es desde cuándo\nestán ahí, ni cómo es posible que\nse mantengan en el aire...\n\n<0x10009:0x00070700>Pero yo creo que si podemos vivir aquí\ntan ricamente es gracias a que la Diosa\nvela por nosotros. Esa es la razón.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "¿Quieres saber una cosa, rapaz?\n\n\n\nDe esa academia a la que vas salen\nlos mejores jinetes de pelícaros\nde todo Celéstea. Como lo oyes.\n\nY cuando llegues a caballero, podrás\nconvertirte en uno de los protectores\nde Altárea y surcar los cielos.\n\nSeguro que ya lo sabes, pero si te caes\nal vacío, la patrulla de rescate acudirá\nen tu ayuda.\n\n<0x10009:0x00010700>Solo los mejores estudiantes\nde la academia pueden llegar\na formar parte de esa patrulla.\n¡Son la flor y nata de Altárea!\n<0x10009:0x00070700>Está mal que yo lo diga, pero\nmi nieto es uno de ellos...\n¡Es el orgullo de la familia! <pause 5>Jo,<pause 5> jo...\n")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "¿Quieres saber una cosa, rapaz?\n\n\n\nEn la tienda de pociones venden\nun brebaje que viene de fábula,\nse llama <color yellow<resistone 500>coloroff>.\n\n<0x10009:0x00010700>¡Deberías probarlo! Cuando se te agote\nel indicador de resistencia, un trago\nde resistone 500 y ¡zas! ¡Como nuevo!\n\nY no creas que solo sirve cuando tiene\nuno que correr, no...\n\n\n<0x10009:0x00070700>También viene bien para no cansarse\ncuando estás peleando contra enemigos\nfuertotes y abusas del ataque circular.\nAsí les das para el pelo en un pispás.")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "Qué lastima, vaya juventud...\nNo sabes divertirte, rapaz.")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>¡Hombre, <heroname>!\nHasta ahora casi nadie se atrevía\na salir de noche por la ciudad...\n\n¡Pero desde que han desaparecido\nesos horribles monstruos, da gusto\npoder disfrutar de un agradable\npaseo nocturno!")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "¿No tienes hambre? ¡Aquí la comida\nestá buenísima!\n\n\nEso sí, el servicio es lento a más\nno poder...")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Muy bien, ahora solo falta una pizca\nde pimienta y...\n\n\n<0x10009:0x00000004>¡Ya está! Este potaje va a quedar\nrico, rico...")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000004>Se te ve algo cansado,\n¿no, <heroname>?\n\n\nQué me vas a contar... ¡A mis años todo\nson problemas y achaques!\n\n\n<0x10009:0x00010d00>Si necesitas descansar un poco,\naquí eres bienvenido.")
          }

