          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf("¡Esto está mucho más animado\ndesde que volvió el vidente!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf("Así que el vidente estaba encerrado\nen su casa lloriqueando, como yo\ndecía...\n\nEs posible que se anime a volver\nsi alguien le encuentra una nueva bola\nde cristal...")
          				  case 1:
/*<128>*/ 					printf("Si no me equivoco, la casa del vidente\nquedaba <r<muy >><r<<r<hacia <r<el este>>...\n\n\nLa verdad es que esto está muy callado\nsin él. ¿Te importaría ir a ver si está\nbien?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf("Vaya... hace mucho que no se topa uno\ncon el <b<vidente >>por aquí...\n\n\nSe le había roto la bola de cristal,\nasí que quizás esté en su casa,\nlloriqueando por su mala suerte.")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf("Ajá...")
/*<194>*/ 					printf("Así que el vidente estaba encerrado\nen su casa lloriqueando, como yo\ndecía...\n\nEs posible que se anime a volver\nsi alguien le encuentra una nueva bola\nde cristal...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf("¿Podrías ir a ver qué tal se encuentra?\n\n\n\nCreo que su casa estaba en el <r<extremo\neste >>de Neburia.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf("¿Has dado alguna vez un paseo\npor Neburia cuando oscurece?<pause19>\n¡No te imaginas cuánto cambia!\n\nPor ejemplo, tengo entendido que,\nde noche, el dueño de la tienda de\nutensilios se dedica a la compra de\ntesoros en su propia casa.\nNo es muy aconsejable andar por ahí\na esas horas, pero tratándose de un\nfuturo caballero como tú, no creo\nque pase nada.\n¡Para levantarte de noche, lo único que\nhay que hacer es <g<acostarse en una cama\n>>cuando sea de día!<pause19> ¡Nada más!")
          			  case 1:
/*<  3>*/ 				printf("La mejor receta contra la fatiga\nes descansar.<pause19> ¡Y <g<para dormir solo\nhace falta encontrar una cama>>, estés\ndonde estés!\nDe noche, Neburia se transforma\nen una ciudad distinta de la que\nse puede ver a plena luz del día,\n¿sabes, chico?\nSi te <g<echas a dormir en la cama>>,\ncuando despiertes podrás disfrutar\nde otra cara de la ciudad, según sea\nde día o de noche.")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf("Espejito lindo, tú que tanto sabes...\n¿Quién es la más bella?")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf("\x0E\x01\x09\x04\x2200\x02¿A que es justo lo que estabas\npensando, Link?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf("No sé si será verdad o no, pero corre\nel rumor de que por las <r<noches>> se oyen\nlamentos de una voz de mujer por los\npasillos de la <r<academia de caballeros>>... \nAy, esas historias me quitan el sueño...\nNo puedo evitarlo... \n")
/*<170>*/ 				printf("¡¿Qué dices?! ¿Una mano espectral\nque sale por la puerta y...?\n\n\nBu...<pause14> bueno, quizá se trate de\nuna persona un poco vergonzosa,\nnada más. No pensemos mal...")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("No sé si será verdad o no, pero corre\nel rumor de que por las <r<noches>> se oyen\nlamentos de una voz de mujer por los\npasillos de la <r<academia de caballeros>>... \nAy, esas historias me quitan el sueño...\nNo puedo evitarlo... \n")
/*<167>*/ 					printf("¡Cómo! ¿Que alguien pide papel...<pause14>\ndesde el retrete?\n\n\nBueno, todos hemos tenido ese\nproblema alguna vez... ¡Es un pequeño\ndrama cotidiano!")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf("No sé si será verdad o no, pero corre\nel rumor de que por las <r<noches>> se oyen\nlamentos de una voz de mujer por los\npasillos de la <r<academia de caballeros>>... \nAy, esas historias me quitan el sueño...\nNo puedo evitarlo... \n")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf("¡Recuerda lo que te enseñé! Oprime (2)\ncuando quieras ver la ayuda.\x0E\x01\x11\x02\x5CD")
          			  case 1:
/*<  5>*/ 				printf("¿Ya estás en el último curso de\naprendiz de caballero? ¡Felicidades!\n\n\nPero seguro que te quedan cosas\nque aprender. Si hay algo que no\nentiendas, oprime (2) para ver una\npequeña ayuda.\x0E\x01\x11\x02\x5CD\n¡Que no te dé vergüenza!")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x00\x01Vaya, eres tú, Link.\nHoy es el gran día, ¿verdad?\n¡Me refiero al torneo celeste!\n\nSi ganas, por fin pasarás al curso\nsuperior en la academia.")
/*<  8>*/ 	printf("¡En Neburia, uno demuestra su valía\ncomo persona cuando aprende\na montar en neburí!\n\n\x0E\x01\x09\x04\n\x404Y si pretendes convertirte en caballero\nalgún día, con más razón deberás\ndemostrar tu habilidad en el aire.\n\n¡Todos pasamos más o menos por\nlo mismo durante nuestra formación\ncomo jinetes celestes!")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x02¿Es que nadie te ha dicho que es\nde mala educación entrar en las casas\najenas sin invitación?\n\nTrabajo en el bazar por las mañanas,\npero hoy he cerrado por lo del torneo\nceleste.\n\n\x0E\x01\x09\x04\x00\x15Ay, siempre estoy deseando tener\nun día libre, y cuando por fin\nlo consigo, me aburro muchísimo...")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf("\x0E\x01\x09\x04\x1211\x16No...<pause0F> ¡No te arrepentirás!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf("\x0E\x01\x09\x04\x1408\x913Pues claro que no, no seas bobo.\n\n\n\n¡Supongo que habrá que contárselo\na tu mamá lo antes posible!\nNi siquiera la conozco todavía...\n\nSeguro que es igual que tú.\nHonesta, seria y trabajadora,\n¿verdad?")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf("\x0E\x01\x09\x04\x1209\xC18Este... Quizá es un poco pronto para\npresentaciones...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf("\x0E\x01\x09\x04\x1400\x05¡Qué tontería! Cuanto antes zanjemos\nestas cosas, mejor que mejor.\n\n\n\x0E\x01\x09\x04\x1408\x913Así que ya puedes invitarme a tu casa\npronto, ¿entendido?")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\n¿Qué haces levantado tan tarde?\n\n\n\x0E\x01\x09\x04\x11\x1300Mi mamá sigue preparando la cena...\n¿Estará lista ya? ¡Espero que se dé\nprisa, tengo mucha hambre!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x0E\x812¿Pero qué ha pasado?...\n¡La Diosa ha desaparecido!\n\n\n\x0E\x01\x09\x04\x0F\xD00Están sucediendo cosas muy raras\nen Neburia...")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf("Y mi Picalia sigue sin aparecer...\nYa me empieza a preocupar.\n\n\n\x0E\x01\x09\x04\x00\x800Oye, Link...\n¿Podrías ir a buscarla?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hola, muchacho. ¿Te está ayudando\nel robot?\n\n\nPuede que sea un poco bocazas...\n¡pero en el fondo tiene buen corazón,\nya verás!\n\n¡Prométeme que tratarás de llevarte\nbien con él!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x03¡Eh, chico! ¿Qué haces levantado\ntan tarde? Si no tienes cuidado,\n¡te acabará comiendo un lémury!\n\nEn Neburia nadie sale en plena noche\na la calle salvo que sea absolutamente\nnecesario.")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("El jefe se pasa el día jugando con su\nchatarra. Parece su única afición...\n\n\nPero yo sé el verdadero motivo.\n¡Quiere fabricar una lavadora\nautomática para su mamá!\n\n¡Qué considerado!... En realidad\nes muy buena persona, ¿verdad?\n\n\nNo es como alguien que tú y yo\nconocemos, que lleva a la pobre\nFay de aquí para allá todo el día...")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x09\x04\x00VTe lo pido por favor... Ve a hablar\ncon ese hijo tan bobo que tengo.")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf("Y yo que pensaba que cuando arreglara\nel robot se olvidaría por fin de todos\nesos cacharros... \n\n¡Pero no! Como decía mi abuela:\n¡el que nace con cabeza dura\nni en la tumba se cura!")
          	  case 1:
/*< 22>*/ 		printf("Se pasa las noches en vela tratando\nde arreglar el robot ese que heredó\ndel abuelo...\n\n¿Qué cree que va a conseguir\ntrasteando con ese montón\nde chatarra?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00VLo único que hace es mancharlo todo...\n\n\n\nPor mucho que se dedique a arreglar\nmáquinas, ¡estoy harta de tener que\nquitar tanta grasa de su ropa!\n[1]¿Tu hijo?[2]Qué\nfastidio")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf("¡Pues claro! ¡El tonto de mi hijo,\nel que lleva la chatarrería! De quién\niba a estar hablando si no...")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf("Es que acaba con mi paciencia...\n¡Estoy muy harta!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\x1101¿No tendrías que estar buscando\na tu neburí?")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Parece que por allí están discutiendo...\n¿Qué habrá pasado? Parece algo\nbastante serio...")
          		}
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x00\x05Me encanta estar aquí sentado...\n\n\n\n¡Así me puedo pasar las horas\npensando en ella tranquilamente!\n\n\n\x0E\x01\x09\x04\n\xC00Estoy hablando de <b<Calabel>>, la chica\nde La Calabaza Flotante. Aaaah...\n¡Si vieras lo linda que es!...")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hola, Link. No habrás\nvisto por ahí a Picalia, ¿verdad?\n\n\n¡No se está quieta! Nunca sé dónde\nse ha metido. Siempre me tiene\npreocupadísima, de verdad...")
          	  case 1:
/*< 24>*/ 		printf("\x0E\x01\x09\x04\x00\n¿Qué tal, Link? \nOye, no habrás visto por ahí\na mi Picalia, ¿verdad?\n\nSiempre anda de un lado para otro...\nSale corriendo a jugar a la calle\ny no hay quien la detenga.\n\nEsa niña me tiene siempre preocupada,\npreguntándome si no le habrá pasado\nalgo...\n")
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
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x04¡Oh, eres tú! ¿Sabes que la Diosa\nha desaparecido?\n\n\n\x0E\x01\x09\x04\x00\x11Quizá se ha enfadado porque antes\nhe desobedecido a papá y mamá...")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link! Esta de aquí\nes mi casa. ¿Verdad que es la más\nbonita de todo el barrio?\n\nHoy pienso ir a jugar otra vez con ese\nseñor tan agradable. ¡Me encanta\njugar a todas horas!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf("\x0E\x01\x09\x04\x09\x30A¡AAAH!\n\n\n\n\x0E\x01\x09\x04ÿ\xFF04Oh, bueno...<pause14>\nSupongo que no pasa nada por que\nte sientes ahí un rato.\n\n\x0E\x01\x09\x04ÿ\x3FF¡Pero procura no manchar el sofá,\nque vale una fortuna!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x00\x11Zzz... zzz... zzz...\n¡Hola, señor demonio!\nZzz... zzz... zzz...")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf("Si tienes hambre, llegas un poco\ntarde... ¡la cocina está cerrada!\nTendrás que esperar a la hora\ndel almuerzo.")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\n¡Qué cambio ha dado todo!\n\n\nDesde que esos horribles monstruos\nhan desaparecido, se respira paz\npor todos los rincones de Neburia...\n\nNo te imaginas cómo añoraba poder\npasear plácidamente y disfrutar de\nla suave brisa nocturna, gorrión...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Qué alegría que hayas encontrado\na nuestra Picalia sana y salva!\n\n\n\x0E\x01\x09\x04\x00\x09¡Muchísimas gracias, gorrión!\nMírala, con lo que nos ha hecho pasar\ny aquí está, durmiendo tan feliz... \n")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf("\x0E\x01\x09\x04\x00\x0E¡¿Estás seguro?! ¿De verdad que has\nencontrado a Picalia?\n\n\n¡Ya te lo dije! En Neburia no hay ni\nuna sola manzana podrida. ¡Quién iba a\nsecuestrar a una niñita tan pequeña!...")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x00\x04¿Dónde se habrá metido Picalia?\nSiempre está jugando por ahí...\n\n\nSu madre no deja de decir que\nla han secuestrado, pero tengo\nla sensación de que no es eso.\n\n\x0E\x01\x09\x04\x0E\xD00¡A nadie en Neburia se le ocurriría\nhacer algo semejante!\n\n\n\x0E\x01\x09\x04\x00\xD0FYa verás cómo vuelve a casa en\nel momento menos pensado...\n\n\nBueno, si la ves jugando por ahí,\n¡dile que vuelva a casa de una vez!")
          				  case 1:
/*< 30>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link! Mira cómo\nduerme Picalia... ¿No es linda? \nParece un gorrioncito...\n\nCada vez que la veo, me doy cuenta\nde que si tuviera que trabajar el doble\nde horas por ella, lo haría encantado.\n\n¿Pero quién será ese demonio del\nque siempre habla?")
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
/*< 60>*/ 		printf("\x0E\x01\x09\x04\x00\x12Ay, Picalia sigue sin aparecer...\n\n\n\n¡Por favor, encuéntrala y tráemela\nde vuelta a casa!")
          	  case 1:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x00\x01Buenas noches, Link.\nNo es normal verte por aquí a estas\nhoras... ¿Ha pasado algo?")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf("Si tienes hambre, llegas un poco\ntarde... ¡la cocina está cerrada!\nTendrás que esperar a la hora\ndel almuerzo.")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Hola, Link!\n¡Picalia ha vuelto a casa por fin!\n\n\n¡Y pensar que tuviste que ser tú\nel que la encontrara, gorrión!...\n\n\n\x0E\x01\x09\x04\x10\xD09No sabes cómo te lo agradezco. \n¡Mi esposa está contentísima!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x0F\xD12Ah, hola, Link...\nNuestra Picalia ha desaparecido,\nquizá ya te habías enterado...\n\n\x0E\x01\x09\x04ÿ\xFF00Mi esposa incluso cree que la han\nsecuestrado... Está histérica... Pobre.\n\n\n\x0E\x01\x09\x04\x10\xD03Pero yo sé que no es así.<pause0A>\nLa conozco, seguro que está jugando\ny divirtiéndose en algún sitio.")
/*<120>*/ 			printf("\x0E\x01\x09\x04\x0F\xD00De todos modos, avísame si te la\nencuentras por ahí, ¿eh?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf("\x0E\x01\x09\x04\x00\x02Hola, Link. ¿Qué tal?\nEsta que ves aquí es la <r<torre de la luz>>.\n\n\nA ti que se te da bien eso de trepar\na los sitios, ¿por qué no subes hasta\narriba?")
          			  case 1:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x02Hola, Link.\n\n\n\nEsta es la <r<torre de la luz>>. Por lo que se\ndice, su función desde tiempos remotos\nes señalar la posición de Neburia.\n\n\x0E\x01\x09\x04\x0F\xD00¿Pero por qué la llamarán así?\nYo nunca he visto ninguna luz...\nY tampoco se sabe quién la construyó,\nlleva aquí desde hace mucho tiempo.\n\x0E\x01\x09\x04\x10\xD00¡Oye, gorrión, podrías intentar subir\nhasta arriba! Desde allí seguro que\nse ve a la Diosa mucho mejor.")
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x0F\xD05¿Preguntas por qué no subo yo?...\n\n\n\n\x0E\x01\x09\x04\x00\x800¿Estás loco? ¡Las alturas me dan\npánico!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf("\x0E\x01\x12\x04\x00d¡Oooh, la entrada del volcán!<pause1E>\n¡Tengo que llegar antes\nque el amo verdoso!")
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
/*<173>*/ 		printf("\x0E\x01\x09\x04\x2507\x707¿Lo han oído? Parece que a uno de los\nestudiantes que vuelan hoy en el torneo\nle ha desaparecido su neburí...\n¡Qué pena!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf("\x0E\x01\x09\x04\x2607\x701Y que lo digas... es el peor momento\npara perder a su pájaro...")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Si te digo la verdad, no me gustan \ndemasiado los pájaros... ¿Han visto\nlas garras tan afiladas que tienen?")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Con este tiempo tan bueno y yo\naquí, tan ocupada que no puedo \nni disfrutarlo...")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x2607\x701¡No eres la única! Ese desastre de hijo\nque tengo me ha dejado una montaña\nde ropa sucia. ¡No acabo nunca!")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Detesto limpiar... ¡Ojalá alguien\nlo pudiera hacer por mí!")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 183, 'param3': 6}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf("\x0E\x01\x09\x04\x70A\xC12Mmm, no puede ser...\n\x0E\x01\x08\x02\xFECD¿Dónde diantres se habrá metido?...")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf("Deberías volver más por aquí y\nhacerle compañía a este pobre viejo.")
          	  case 1:
/*<141>*/ 		printf("Estarás cansado de andar todo el día\ncorriendo de acá para allá... \n¡Así me gusta, que tengas energía!\n\nEspérate, que te invito a un refresco...\n¿quieres?\n\n[1]Claro[2-]No, gracias")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x01\x700¡Así se habla! Aquí tienes, tómatelo\na mi salud. ")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 149, 'param3': 6}
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf("\x0E\x01\x09\x04\x07\x700¡Oooh, te lo has bebido de un trago!\nMe gusta tu estilo, sí señor...")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf("¿Quieres saber una cosa, muchacho?\n\n\n\nSeguro que al ir volando por ahí habrás\nvisto alguna vez suspendidos en mitad\ndel cielo esos <r<peñascos con agujeros>>...\n\n\x0E\x01\x09\x04\x01\x700Resulta que en los agujeros esos\nse concentra una especie de energía\ndesconocida.\n\nAl atravesarlos en pleno vuelo, le dan\nal neburí un impulso extraordinario.\n¡Deberías probarlo!\n\n\x0E\x01\x09\x04\x07\x700Es un truco muy usado por los jinetes\ncelestes veteranos para cubrir grandes\ndistancias en poco tiempo.")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf("¿Quieres que te diga algo, muchacho?\n\n\n\n\x0E\x01\x09\x04\x01\x700Como es bien sabido, todo el cielo está\nsalpicado de islotes flotantes, como \nnuestra propia Neburia.\n\nPero lo que nadie sabe es desde cuándo\nestán ahí, ni cómo es posible que\nse mantengan en el aire...\n\n\x0E\x01\x09\x04\x07\x700Pero yo creo que si podemos vivir aquí,\nsin problemas, es gracias a que la Diosa\nvela por nosotros. Esa es la razón.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf("¿Quieres saber una cosa, muchacho?\n\n\n\nDe tu academia salen los mejores\njinetes de neburís de todas las islas\nflotantes. Como lo oyes.\n\nY cuando llegues a ser caballero,\npodrás convertirte en uno de los\nprotectores de Neburia y surcar\nlos cielos.\nSeguro que ya lo sabes, pero si te caes\nal vacío, la patrulla de rescate acudirá\nen tu ayuda.\n\n\x0E\x01\x09\x04\x01\x700Solo los mejores estudiantes\nde la academia pueden llegar\na formar parte de esa patrulla.\n¡Son la flor y nata de Neburia!\n\x0E\x01\x09\x04\x07\x700Está mal que yo lo diga, pero\nmi nieto es uno de ellos...\n¡Es el orgullo de la familia! <pause05>Jo,<pause05> jo...\n")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf("¿Quieres saber una cosa, muchacho?\n\n\n\nEn la tienda de pociones venden\nun brebaje fabuloso, que se llama\n<y<poción de resistencia>>.\n\n\x0E\x01\x09\x04\x01\x700¡Deberías probarlo! Cuando se te agote\nel indicador de resistencia, toma un\npoco de esa poción y ¡zas! ¡Como nuevo!\n\nY no creas que solo sirve cuando tiene\nuno que correr, no...\n\n\n\x0E\x01\x09\x04\x07\x700También viene bien para no cansarse\ncuando estás peleando contra enemigos\nfuertotes y abusas del ataque giratorio.\nAsí acabas con ellos rápidamente.")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf("Qué lastima, esta juventud...\nNo sabes divertirte, muchacho.")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\nHasta ahora casi nadie se atrevía\na salir de noche por la ciudad...\n\n¡Pero desde que han desaparecido\nesos horribles monstruos, da gusto\npoder disfrutar de un agradable\npaseo nocturno!")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("¿No tienes hambre? ¡Aquí la comida\nestá buenísima!\n\n\nEso sí, el servicio es lentísimo...")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04\x00\x01Muy bien, ahora solo falta una pizca\nde pimienta y...\n\n\n\x0E\x01\x09\x04\x00\x04¡Ya está! Este potaje va a quedar\nrico, rico...")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x09\x04\x00\x04Se te ve algo cansado,\n¿no, Link?\n\n\nYo soy la reina del cansancio.\n¡A mis años, todo son problemas!\n\n\n\x0E\x01\x09\x04\x01\xD00Si necesitas descansar un poco,\naquí eres bienvenido.")
          }

