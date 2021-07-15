          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("¡Qué vista hay desde aquí!")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf("Pero si es el...<pause1E>\n¡Rápido, llévaselo al <b<dragón del trueno>>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Está claro que aquí en la <b<región de\nLanayru >>el terreno no es el mejor\npara plantar nada.\n\n\x0E\x01\x09\x04\x00\x900¡Te lo pido por favor!\n\x0E\x01\x09\x04\x03\x900El <r<fruto del árbol de la vida>> es lo único\nque puede salvar al dragón del trueno.<pause1E>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x03\x900¡¿Pero qué has hecho?!...<pause1E>\n¡Sin el <r<fruto del árbol de la vida\n>>jamás podremos salvar al <b<dragón\ndel trueno>>!\n\x0E\x01\x09\x04\x03\x900¿O es que acaso se te ha ocurrido\nalguna idea brillante para curar\nsu enfermedad?\n[1]Claro\nque sí[2]Claro\nque no")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf("\x0E\x01\x09\x04\x03\x900¿De verdad? ¿Lo dices en serio?\n¡Muchísimas gracias! Muy bien, pues\nbusca un lugar donde las semillas\npuedan crecer mejor.\n\x0E\x01\x09\x04\x03\x900Está visto que aquí en la <r<región de\nLanayru >><pling><r<el terreno no es propicio>>...\nPor favor, ¡cuento contigo!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("\x0E\x01\x09\x04\x03\x900¡Pues ya que estás aquí, podrías\nayudarnos! Hay que encontrar una\ntierra fértil donde la semilla pueda\ngerminar.\n\x0E\x01\x09\x04\x03\x900Está visto que aquí en la <r<región de\nLanayru >><pling><r<el terreno no es propicio>>...\nPor favor, ¡cuento contigo!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf("\x0E\x01\x09\x04\x03\xC00La enfermedad del <b<dragón del trueno>>\nse agrava día tras día...<pause0F> Y además este\nterreno no es idóneo<pause1E> para que crezca\nningún árbol. \x0E\x01\x09\x04\x01\xC00Aaah...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD09Por Goron que tienes alma de\narqueólogo, igual que yo...\nSi averiguas algo sobre los tres\ndragones, ¡házmelo saber!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x2F00\x06¿Querías algo más? Por cierto, si\naveriguas algo sobre los tres dragones,\nte agradecería mucho que vinieras a\ninformarme.")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD0A¡Vaya! Es raro encontrarse con\nalguien por estos lugares...<pause1E>\nYo soy <b<Venturo>>, un estudioso de\nla <r<leyenda de los tres dragones>>.\n\x0E\x01\x09\x04\x2F00\x07Se dice que uno de ellos vivía por aquí,\npero no encuentro ni rastro de él.\nBueno, aún es pronto para sacar\nconclusiones. Queda mucho por ver.\n¿Así que te llamas Link?\nVaya, es un nombre poco habitual.\n\x0E\x01\x09\x04\x2F01\xD00¿Y qué te trae por aquí, si puede\nsaberse?\n.<pause0F>.<pause0F>.<pause0F>\n¿Estás buscando la <b<\x0E\x01\x09\x04\x2F00\x07llama sagrada>>?\nCreo que he oído hablar de ella\nen algún sitio... <pause19>Mmm...\n\x0E\x01\x09\x04\x2F0F\x709¡Sí!<pause19> \x0E\x01\x09\x04\x2F00\xD00¡Ya lo recuerdo! Fue en los viejos\nmanuscritos que describen el <b<mar de\narena de Lanayru>>, que se extiende\npor allí.\n\x0E\x01\x09\x04\x2F08\xD00No recuerdo más detalles, pero si\nsigues por este camino llegarás\nal mar de arena de Lanayru enseguida.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD00Ah, casi se me olvida... Si quieres llegar\nal mar de arena, vas a necesitar esta\nllave. ¡Toma!")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09¡Te deseo suerte, por Goron!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709¿Cómo? Link, ¿estuviste \nen la morada del dragón del trueno?<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CD¡Grrr, por Goron, qué\nenvidia!...<pause5A>\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CD¡Y yo que quería ser el\nprimero en llegar allí!...")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0AHe excavado la ruta que lleva hasta\nla morada del <r<dragón del trueno>>...<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Pero es demasiado estrecha para\nmí. ¡No puedo cruzarla!\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700¡Por Goron, tanto esfuerzo en vano!")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Dime, Link...\n\n\n\n¿Qué ha pasado con la famosa <b<llama\nsagrada>>?\n\n\nVamos, cuéntame... Desde que me\nhablaste de ella, ¡estoy ansioso\npor oír qué ha pasado!\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14>\nAsí que al final has conseguido\nencontrarla. ¡Fantástico!\n\nEres toda una inspiración para los\narqueólogos, Link.")
/*<170>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0A¿Sabes? Tengo novedades sobre la\nleyenda de los tres dragones.<pause0F>\n\n\nResulta que justo aquí delante había\nuna senda oculta de lo más misteriosa.\n\n\nSe trata de un<r< estrecho pasadizo>>,<pling>\npor el que no quepo.\n\n\n\x0E\x01\x09\x04\x2F00\xD00Sospecho que lleva hasta la morada del\n<r<dragón del trueno>>.\n\n\n\x0E\x01\x09\x04\x2F00\x800Seguro que los robots de por aquí\nguardan relación con todo el misterio.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDEl <r<dragón del trueno>>, robots,\ncronolitos<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CD¡Qué aventura!")
/*<146>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Por cierto, Link,\ntengo noticias sobre la excavación\nque me financiaste.<pause14>\n\n¡He encontrado un yacimiento de\ncronolitos!\n\x0E\x01\x09\x04\x2F00\xD01Puedo devolverte tu inversión\nmultiplicada por diez.")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Dime, Link...\n\n\n\n¿Qué ha pasado con la famosa <b<llama\nsagrada>>?\n\n\nVamos, cuéntame... Desde que me\nhablaste de ella, ¡estoy ansioso\npor oír qué ha pasado!\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14>\nAsí que al final has conseguido\nencontrarla. ¡Fantástico!\n\nEres toda una inspiración para los\narqueólogos, Link.")
/*<171>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0A¿Sabes? Tengo novedades sobre la\nleyenda de los tres dragones.<pause0F>\n\n\nResulta que justo aquí delante había\nuna senda oculta de lo más misteriosa.\n\n\nSe trata de un<r< estrecho pasadizo>>,<pling>\npor el que no quepo.\n\n\n\x0E\x01\x09\x04\x2F00\xD00Sospecho que lleva hasta la morada del\n<r<dragón del trueno>>.\n\n\n\x0E\x01\x09\x04\x2F00\x800Seguro que los robots de por aquí\nguardan relación con todo el misterio.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDEl <r<dragón del trueno>>, robots,\ncronolitos<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CD¡Qué aventura!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf("El dragón del trueno vuelve a estar\nsano y fuerte como un roble, ¡y todo\ngracias a ti!")
          		  case 1:
/*<136>*/ 			printf("¿Has venido a ver al dragón del\ntrueno?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf("Comiendo el <r<fruto del árbol de la vida>>,\nel dragón del trueno se curará en un\nabrir y cerrar de ojos...")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x09\x04\x03\xC00En esta tierra no crece otra cosa que\nno sean flores.<pause1E> \x0E\x01\x09\x04\x01\xC00A este paso,\x0E\x01\x06\x02\xFECD el <b<dragón\ndel trueno>>...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x00\x00Estoy muy preocupado por el dragón\ndel trueno... ¡Por favor, tienes que\nencontrar el <r<fruto del árbol de la vida>>!")
          					  case 1:
/*< 37>*/ 						printf("\x0E\x01\x09\x04\x03\x900Con la esperanza de salvar al dragón\ndel trueno he plantado ahí una <r<semilla\ndel árbol de la vida>>, cuyo fruto lo cura\ntodo...")
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Qué horror, qué desgracia...\nEl <b<dragón del trueno>> está muy\nenfermo.<pause0F>\n\n\x0E\x01\x09\x04\x03\xC00Por cierto, para sacar mineral\ncronolítico de aquí necesitas su\npermiso.<pause1E> \x0E\x01\x09\x04\x01\xC00Aunque ahora tiene\notras preocupaciones...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01¡Eh, Link!\nQué sorpresa, ¡eres tú!\nVálgame Goron...\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDPrecisamente ahora estaba<pause0F>\nbuscándote, ¡qué casualidad!<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDVen, acércate un momento.")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf("\x0E\x01\x09\x04\x2F08\x709Eh, Link. He encontrado\nun agujero por el que continuar hacia\nadelante.\n\nPero esta roca es durísima. Vamos a\ntener que esperar mucho antes de\npoder pasar.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("¡Si no te das prisa, al final vas a\nquedarte rezagado!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x03\x900Aquí hay cronolitos a montones,\na cual más grande.<pause1E>\n\x0E\x01\x09\x04\x00\x900¿Tú también vienes enviado por\nel <b<dragón>><b< del trueno>>?\n\x0E\x01\x09\x04\x01\x900Pues justo ahora iba a llevar este\ncronolito a su augusta presencia.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf("\x0E\x01\x05\x04(\x00El camino está infestado de\nmonstruos de lo más feos...<pause0F>\n\x0E\x01\x09\x04\x03\xC00Ve con mucho cuidado.")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf("¡El dragón del trueno está de un\nhumor excelente!")
          		  case 1:
/*<137>*/ 			printf("¡El dragón del trueno está curado!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf("¿Has encontrado el fruto?...<pause2D>\n¡Tienes que llevarle el fruto al <b<dragón\ndel trueno>>!")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x03\xC00La <b<tierra de Lanayru >>no es la más\nadecuada para plantar árboles...<pause1E>\n\x0E\x01\x09\x04\x03\x900Tiene que haber algún lugar con\nun terreno mejor.")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("Más allá del puente hay plantada una\n<r<semilla del árbol de la vida>>.\nDicen que su fruto puede curar todas\nlas enfermedades.<pause1E>\n\x0E\x01\x09\x04\x00\xC00Pero en esta tierra tan árida es difícil\nque crezca ninguna planta...")
          				  case 1:
/*< 16>*/ 					printf("\x0E\x01\x09\x04\x03\x900El dragón del trueno nos ha enviado\naquí para extraer <b<mineral cronolítico>>.\n\n\n<pause1E>\x0E\x01\x09\x04\x03\xC00Pero parece ser que últimamente está\ngravemente enfermo y<pause0F> nos tiene muy\npreocupados.<pause1E> \x0E\x01\x09\x04\x01\xC00A este paso, me temo lo\npeor...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf("<pause14>.<pause14>.<pause14>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<117>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x0B\x901¡Link, te debo la vida!\nNo sé cómo podría agradecértelo,\npequeño... Espera, se me ocurre\nuna cosa.\n\x0E\x01\x09\x04\x00\x900¡Ya verás como te gusta!\nVoy a prepararlo todo. Espero tenerlo\nlisto para la próxima vez que vengas\npor aquí.")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			entrypoint_006_04();
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf("\x0E\x01\x05\x04K\x00He aquí el <b<desfiladero de Lanayru>>.\nSegún las antiguas leyendas, en esta\ntierra habita un dragón servidor de\nla Diosa.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x05\x04Z\x00En esta zona se extrae mineral\ncronolítico de gran calidad. No en\nvano los antiguos construyeron\naquí una explotación minera.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Comprendo tu pasión por la\narqueología. Tranquilo, no pienso\ndesperdiciar ni una sola rupia de\nesta donación.")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD09¿Te gustan las excavaciones?<pause3C>\n¡Pues yo he organizado muchas!\nDe hecho, ahora mismo tengo una\ncasi preparada...<pause3C>\n\x0E\x01\x09\x04\x2F00\xD07El problema es que, aunque el negocio\nsea lucrativo con el tiempo, también\nhay que invertir bastante al principio...<pause1E>\n¿Podrías participar con 10 rupias?\n[1]Bueno[2-]Lo siento")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf("\x0E\x01\x09\x04\x2F02\x208Muchas gracias, te prometo que haré\nbuen uso de este dinero en favor\nde la ciencia y el conocimiento. ")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf("¿No tienes rupias? Vaya...\nCuando ahorres algo, agradecería\nde corazón una ayudita para\nfinanciar la investigación.")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x06\x02\xFFCDQué tristeza...<pause1E>\nNadie valora el trabajo de los\narqueólogos.")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x05\x04Z\x00Por tanto, la zona está repleta de\nvagonetas, raíles y otros vestigios\npropios de la actividad minera.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Aquí empieza el mar de arena\nde Lanayru, un océano de\ndunas con restos antiguos.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Los bokoblins suelen llevar un cuerno\nde monstruo colgado de la cintura.\n\n\nEs posible quitárselo con el <r<látigo>>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Aquí empieza el desierto de\nLanayru. Grandes secretos\ncustodian sus arenas...")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	check_item_flag(198, 1)
/*< 89>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		check_item_flag(497, 1)
/*< 41>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf("¿Dices que puedes encontrar un\nlugar donde la semilla <r<germine\nrápidamente>>?\n\n\x0E\x01\x09\x04\x11\x804Eso me ayudaría muchísimo... cof.\nCon un solo bocado del <r<fruto del\nárbol de la vida>> diría adiós a esta\ntos para siempre.\n\x0E\x01\x09\x04\x08\xA00Pero ten en cuenta que no vale\ncualquier terreno... Has de buscar\nuna <r<tierra especialmente >><r<fértil>>,\ncof, cof.")
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x08\xA03¡Oh, Link!<pause0F> Eso es una\n<r<semilla del árbol de la vida>>, ¿verdad?\n\n\nAunque me temo que ya es demasiado\ntarde para mí...<pause1E> No llegaré a ver cómo\ncrece y da su fruto, \x0E\x01\x09\x04\x08\x110Ccof, cof.\n\nEs una pena... Si no me encontrara en\neste estado tan lamentable, te podría\ncantar lo que tú quisieras... <pause1E>\x0E\x01\x09\x04\x08\x1102 Cof, cof.")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("Por favor, Link,\ntráeme ese <b<fruto del árbol de la vida>>,\ndate prisa...")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("Preocupados por mí, los muchachos\nhan plantado una<r< semilla del árbol de\nla vida>>, cuyo fruto es capaz de curar\ncualquier enfermedad. \nQué simpáticos... <pause14>Cof, cof.\x0E\x01\x09\x04\x08\x110C<pause1E>\n\x0E\x01\x09\x04\x00\x00Pero parece que el árbol se niega\na crecer<pause1E>.\x0E\x01\x09\x04\x08\x110C<pause2D>\n\n\x0E\x01\x09\x04\x11\x804Me temo que es mi fin...<pause14> ")
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x11\x804\x0E\x01\x08\x02\x2CD\x0E\x01\x06\x02\xFFCDCof, cof, cof...<pause1E>\n\n\n\n\x0E\x01\x09\x04\x08\xA03Vaya, vaya...<pause14>\nMira lo que tenemos por aquí.\nEsto sí que no se ve todos los días...\n\n\x0E\x01\x09\x04\x08\xA00Eres un <b<humano>>, ¿no es cierto?\nDime, ¿qué te trae por aquí?\n\n\n<pause0F>.<pause0F>.<pause0F>.\n\n\n\n\x0E\x01\x09\x04\x11\x80CEjem, ejem, ya veo... Te llamas\nLink, \x0E\x01\x06\x02\xFFCDcof, cof,<pause0F> y acabas\nde bajar del <b<cielo>>.\nPor cierto, ¡qué nombre tan raro!\n\x0E\x01\x09\x04\x08\xA00¿No te quedaría mejor algo como\n<r<DL16-Link>>, igual que mis\nmuchachos?\n\n.<pause14>.<pause14>.<pause14>\nYa...<pause0F> No te gusta mucho.<pause0F> \nLástima, \x0E\x01\x09\x04\x08\x802cof, cof, cof.\n\nBueno, no importa. Dime, ¿qué decías\nque habías venido a hacer aquí?\n\n\n\x0E\x01\x09\x04\x08\xA03Ah...<pause1E> cof, cof.\nHas venido a que te enseñe mi parte\ndel cantar, ya veo...")
/*<130>*/ 					printf("\x0E\x01\x09\x04\x08\xA00Dices que has bajado del cielo,\n¿no, Link?\nEntonces, supongo que eres el elegido\nde la Diosa.\nMmm, está claro...\n\n\n\n\x0E\x01\x09\x04\n\xA00Pues lo siento muchísimo, pero ahora\nmismo no puedo enseñarte nada.\n\n\n\x0E\x01\x09\x04\n\xA00Mira cómo tengo la garganta...\nCantar es lo último que quiero hacer, <pause1E>\n\x0E\x01\x09\x04\x00\x0Ccof, cof.\n\n\n\x0E\x01\x09\x04\n\xA00Tú mismo puedes verlo, no pienses que\nte engaño.\n\n\n\x0E\x01\x09\x04\x11\x804Ah, la tarea que te ha encomendado\nla Diosa es pesada en verdad...\nCof, cof.")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("Aquí empiezan las minas de\nLanayru, ricas en mineral\ncronolítico.")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf("...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Prohibido continuar sin\npermiso de <b<Lanayru>>,\naugusto dragón del trueno.")
          }

