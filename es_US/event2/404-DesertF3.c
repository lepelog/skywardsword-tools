          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "¡Qué vista hay desde aquí!")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "Pero si es el...<pause 30>\n¡Rápido, llévaselo al <color blue<dragón del trueno>coloroff>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030c00>Está claro que aquí en la <color blue<región de\nLanayru >coloroff>el terreno no es el mejor\npara plantar nada.\n\n<0x10009:0x00000900>¡Te lo pido por favor!\n<0x10009:0x00030900>El <color red<fruto del árbol de la vida>coloroff> es lo único\nque puede salvar al dragón del trueno.<pause 30>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00030900>¡¿Pero qué has hecho?!...<pause 30>\n¡Sin el <color red<fruto del árbol de la vida\n>coloroff>jamás podremos salvar al <color blue<dragón\ndel trueno>coloroff>!\n<0x10009:0x00030900>¿O es que acaso se te ha ocurrido\nalguna idea brillante para curar\nsu enfermedad?\n[1-]Claro\nque sí[2-]Claro\nque no")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00030900>¿De verdad? ¿Lo dices en serio?\n¡Muchísimas gracias! Muy bien, pues\nbusca un lugar donde las semillas\npuedan crecer mejor.\n<0x10009:0x00030900>Está visto que aquí en la <color red<región de\nLanayru >coloroff><sound 4><color red<el terreno no es propicio>coloroff>...\nPor favor, ¡cuento contigo!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00030900>¡Pues ya que estás aquí, podrías\nayudarnos! Hay que encontrar una\ntierra fértil donde la semilla pueda\ngerminar.\n<0x10009:0x00030900>Está visto que aquí en la <color red<región de\nLanayru >coloroff><sound 4><color red<el terreno no es propicio>coloroff>...\nPor favor, ¡cuento contigo!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00030c00>La enfermedad del <color blue<dragón del trueno>coloroff>\nse agrava día tras día...<pause 15> Y además este\nterreno no es idóneo<pause 30> para que crezca\nningún árbol. <0x10009:0x00010c00>Aaah...")
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
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x2f080d09>Por Goron que tienes alma de\narqueólogo, igual que yo...\nSi averiguas algo sobre los tres\ndragones, ¡házmelo saber!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x2f000006>¿Querías algo más? Por cierto, si\naveriguas algo sobre los tres dragones,\nte agradecería mucho que vinieras a\ninformarme.")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x2f000d0a>¡Vaya! Es raro encontrarse con\nalguien por estos lugares...<pause 30>\nYo soy <color blue<Venturo>coloroff>, un estudioso de\nla <color red<leyenda de los tres dragones>coloroff>.\n<0x10009:0x2f000007>Se dice que uno de ellos vivía por aquí,\npero no encuentro ni rastro de él.\nBueno, aún es pronto para sacar\nconclusiones. Queda mucho por ver.\n¿Así que te llamas <heroname>?\nVaya, es un nombre poco habitual.\n<0x10009:0x2f010d00>¿Y qué te trae por aquí, si puede\nsaberse?\n.<pause 15>.<pause 15>.<pause 15>\n¿Estás buscando la <color blue<<0x10009:0x2f000007>llama sagrada>coloroff>?\nCreo que he oído hablar de ella\nen algún sitio... <pause 25>Mmm...\n<0x10009:0x2f0f0709>¡Sí!<pause 25> <0x10009:0x2f000d00>¡Ya lo recuerdo! Fue en los viejos\nmanuscritos que describen el <color blue<mar de\narena de Lanayru>coloroff>, que se extiende\npor allí.\n<0x10009:0x2f080d00>No recuerdo más detalles, pero si\nsigues por este camino llegarás\nal mar de arena de Lanayru enseguida.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x2f080d00>Ah, casi se me olvida... Si quieres llegar\nal mar de arena, vas a necesitar esta\nllave. ¡Toma!")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x2f080d09>¡Te deseo suerte, por Goron!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x2f080709>¿Cómo? <heroname>, ¿estuviste \nen la morada del dragón del trueno?<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>¡Grrr, por Goron, qué\nenvidia!...<pause 90>\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>¡Y yo que quería ser el\nprimero en llegar allí!...")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x2f080d0a>He excavado la ruta que lleva hasta\nla morada del <color red<dragón del trueno>coloroff>...<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>Pero es demasiado estrecha para\nmí. ¡No puedo cruzarla!\n<0x10006:0xffcd><0x10009:0x2f080700>¡Por Goron, tanto esfuerzo en vano!")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Dime, <heroname>...\n\n\n\n¿Qué ha pasado con la famosa <color blue<llama\nsagrada>coloroff>?\n\n\nVamos, cuéntame... Desde que me\nhablaste de ella, ¡estoy ansioso\npor oír qué ha pasado!\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>\nAsí que al final has conseguido\nencontrarla. ¡Fantástico!\n\nEres toda una inspiración para los\narqueólogos, <heroname>.")
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>¿Sabes? Tengo novedades sobre la\nleyenda de los tres dragones.<pause 15>\n\n\nResulta que justo aquí delante había\nuna senda oculta de lo más misteriosa.\n\n\nSe trata de un<color red< estrecho pasadizo>coloroff>,<sound 4>\npor el que no quepo.\n\n\n<0x10009:0x2f000d00>Sospecho que lleva hasta la morada del\n<color red<dragón del trueno>coloroff>.\n\n\n<0x10009:0x2f000800>Seguro que los robots de por aquí\nguardan relación con todo el misterio.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>El <color red<dragón del trueno>coloroff>, robots,\ncronolitos<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>¡Qué aventura!")
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080d00>Por cierto, <heroname>,\ntengo noticias sobre la excavación\nque me financiaste.<pause 20>\n\n¡He encontrado un yacimiento de\ncronolitos!\n<0x10009:0x2f000d01>Puedo devolverte tu inversión\nmultiplicada por diez.")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Dime, <heroname>...\n\n\n\n¿Qué ha pasado con la famosa <color blue<llama\nsagrada>coloroff>?\n\n\nVamos, cuéntame... Desde que me\nhablaste de ella, ¡estoy ansioso\npor oír qué ha pasado!\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>\nAsí que al final has conseguido\nencontrarla. ¡Fantástico!\n\nEres toda una inspiración para los\narqueólogos, <heroname>.")
/*<171>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>¿Sabes? Tengo novedades sobre la\nleyenda de los tres dragones.<pause 15>\n\n\nResulta que justo aquí delante había\nuna senda oculta de lo más misteriosa.\n\n\nSe trata de un<color red< estrecho pasadizo>coloroff>,<sound 4>\npor el que no quepo.\n\n\n<0x10009:0x2f000d00>Sospecho que lleva hasta la morada del\n<color red<dragón del trueno>coloroff>.\n\n\n<0x10009:0x2f000800>Seguro que los robots de por aquí\nguardan relación con todo el misterio.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>El <color red<dragón del trueno>coloroff>, robots,\ncronolitos<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>¡Qué aventura!")
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
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "El dragón del trueno vuelve a estar\nsano y fuerte como un roble, ¡y todo\ngracias a ti!")
          		  case 1:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "¿Has venido a ver al dragón del\ntrueno?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "Comiendo el <color red<fruto del árbol de la vida>coloroff>,\nel dragón del trueno se curará en un\nabrir y cerrar de ojos...")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00030c00>En esta tierra no crece otra cosa que\nno sean flores.<pause 30> <0x10009:0x00010c00>A este paso,<0x10006:0xfecd> el <color blue<dragón\ndel trueno>coloroff>...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000000>Estoy muy preocupado por el dragón\ndel trueno... ¡Por favor, tienes que\nencontrar el <color red<fruto del árbol de la vida>coloroff>!")
          					  case 1:
/*< 37>*/ 						printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00030900>Con la esperanza de salvar al dragón\ndel trueno he plantado ahí una <color red<semilla\ndel árbol de la vida>coloroff>, cuyo fruto lo cura\ntodo...")
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030c00>Qué horror, qué desgracia...\nEl <color blue<dragón del trueno>coloroff> está muy\nenfermo.<pause 15>\n\n<0x10009:0x00030c00>Por cierto, para sacar mineral\ncronolítico de aquí necesitas su\npermiso.<pause 30> <0x10009:0x00010c00>Aunque ahora tiene\notras preocupaciones...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>¡Eh, <heroname>!\nQué sorpresa, ¡eres tú!\nVálgame Goron...\n\n<0x10006:0xffcd><0x10008:0x01cd>Precisamente ahora estaba<pause 15>\nbuscándote, ¡qué casualidad!<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Ven, acércate un momento.")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x2f080709>Eh, <heroname>. He encontrado\nun agujero por el que continuar hacia\nadelante.\n\nPero esta roca es durísima. Vamos a\ntener que esperar mucho antes de\npoder pasar.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "¡Si no te das prisa, al final vas a\nquedarte rezagado!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00030900>Aquí hay cronolitos a montones,\na cual más grande.<pause 30>\n<0x10009:0x00000900>¿Tú también vienes enviado por\nel <color blue<dragón>coloroff><color blue< del trueno>coloroff>?\n<0x10009:0x00010900>Pues justo ahora iba a llevar este\ncronolito a su augusta presencia.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10005:0x00280000>El camino está infestado de\nmonstruos de lo más feos...<pause 15>\n<0x10009:0x00030c00>Ve con mucho cuidado.")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "¡El dragón del trueno está de un\nhumor excelente!")
          		  case 1:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "¡El dragón del trueno está curado!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "¿Has encontrado el fruto?...<pause 45>\n¡Tienes que llevarle el fruto al <color blue<dragón\ndel trueno>coloroff>!")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00030c00>La <color blue<tierra de Lanayru >coloroff>no es la más\nadecuada para plantar árboles...<pause 30>\n<0x10009:0x00030900>Tiene que haber algún lugar con\nun terreno mejor.")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "Más allá del puente hay plantada una\n<color red<semilla del árbol de la vida>coloroff>.\nDicen que su fruto puede curar todas\nlas enfermedades.<pause 30>\n<0x10009:0x00000c00>Pero en esta tierra tan árida es difícil\nque crezca ninguna planta...")
          				  case 1:
/*< 16>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00030900>El dragón del trueno nos ha enviado\naquí para extraer <color blue<mineral cronolítico>coloroff>.\n\n\n<pause 30><0x10009:0x00030c00>Pero parece ser que últimamente está\ngravemente enfermo y<pause 15> nos tiene muy\npreocupados.<pause 30> <0x10009:0x00010c00>A este paso, me temo lo\npeor...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000b0901>¡<heroname>, te debo la vida!\nNo sé cómo podría agradecértelo,\npequeño... Espera, se me ocurre\nuna cosa.\n<0x10009:0x00000900>¡Ya verás como te gusta!\nVoy a prepararlo todo. Espero tenerlo\nlisto para la próxima vez que vengas\npor aquí.")
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
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10005:0x004b0000>He aquí el <color blue<desfiladero de Lanayru>coloroff>.\nSegún las antiguas leyendas, en esta\ntierra habita un dragón servidor de\nla Diosa.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10005:0x005a0000>En esta zona se extrae mineral\ncronolítico de gran calidad. No en\nvano los antiguos construyeron\naquí una explotación minera.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x2f080d09>Comprendo tu pasión por la\narqueología. Tranquilo, no pienso\ndesperdiciar ni una sola rupia de\nesta donación.")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x2f000d09>¿Te gustan las excavaciones?<pause 60>\n¡Pues yo he organizado muchas!\nDe hecho, ahora mismo tengo una\ncasi preparada...<pause 60>\n<0x10009:0x2f000d07>El problema es que, aunque el negocio\nsea lucrativo con el tiempo, también\nhay que invertir bastante al principio...<pause 30>\n¿Podrías participar con 10 rupias?\n[1-]Bueno[2]Lo siento")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x2f020208>Muchas gracias, te prometo que haré\nbuen uso de este dinero en favor\nde la ciencia y el conocimiento. ")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "¿No tienes rupias? Vaya...\nCuando ahorres algo, agradecería\nde corazón una ayudita para\nfinanciar la investigación.")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x2f010805><0x10006:0xffcd>Qué tristeza...<pause 30>\nNadie valora el trabajo de los\narqueólogos.")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10005:0x005a0000>Por tanto, la zona está repleta de\nvagonetas, raíles y otros vestigios\npropios de la actividad minera.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 8, unk: 0, line: 65 */ "Aquí empieza el mar de arena\nde Lanayru, un océano de\ndunas con restos antiguos.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "Los bokoblins suelen llevar un cuerno\nde monstruo colgado de la cintura.\n\n\nEs posible quitárselo con el <color red<látigo>coloroff>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 8, unk: 0, line: 66 */ "Aquí empieza el desierto de\nLanayru. Grandes secretos\ncustodian sus arenas...")
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
/*<105>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "¿Dices que puedes encontrar un\nlugar donde la semilla <color red<germine\nrápidamente>coloroff>?\n\n<0x10009:0x00110804>Eso me ayudaría muchísimo... cof.\nCon un solo bocado del <color red<fruto del\nárbol de la vida>coloroff> diría adiós a esta\ntos para siempre.\n<0x10009:0x00080a00>Pero ten en cuenta que no vale\ncualquier terreno... Has de buscar\nuna <color red<tierra especialmente >coloroff><color red<fértil>coloroff>,\ncof, cof.")
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00080a03>¡Oh, <heroname>!<pause 15> Eso es una\n<color red<semilla del árbol de la vida>coloroff>, ¿verdad?\n\n\nAunque me temo que ya es demasiado\ntarde para mí...<pause 30> No llegaré a ver cómo\ncrece y da su fruto, <0x10009:0x0008110c>cof, cof.\n\nEs una pena... Si no me encontrara en\neste estado tan lamentable, te podría\ncantar lo que tú quisieras... <pause 30><0x10009:0x00081102> Cof, cof.")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "Por favor, <heroname>,\ntráeme ese <color blue<fruto del árbol de la vida>coloroff>,\ndate prisa...")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "Preocupados por mí, los muchachos\nhan plantado una<color red< semilla del árbol de\nla vida>coloroff>, cuyo fruto es capaz de curar\ncualquier enfermedad. \nQué simpáticos... <pause 20>Cof, cof.<0x10009:0x0008110c><pause 30>\n<0x10009:0x00000000>Pero parece que el árbol se niega\na crecer<pause 30>.<0x10009:0x0008110c><pause 45>\n\n<0x10009:0x00110804>Me temo que es mi fin...<pause 20> ")
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00110804><0x10008:0x02cd><0x10006:0xffcd>Cof, cof, cof...<pause 30>\n\n\n\n<0x10009:0x00080a03>Vaya, vaya...<pause 20>\nMira lo que tenemos por aquí.\nEsto sí que no se ve todos los días...\n\n<0x10009:0x00080a00>Eres un <color blue<humano>coloroff>, ¿no es cierto?\nDime, ¿qué te trae por aquí?\n\n\n<pause 15>.<pause 15>.<pause 15>.\n\n\n\n<0x10009:0x0011080c>Ejem, ejem, ya veo... Te llamas\n<heroname>, <0x10006:0xffcd>cof, cof,<pause 15> y acabas\nde bajar del <color blue<cielo>coloroff>.\nPor cierto, ¡qué nombre tan raro!\n<0x10009:0x00080a00>¿No te quedaría mejor algo como\n<color red<DL16-<heroname>>coloroff>, igual que mis\nmuchachos?\n\n.<pause 20>.<pause 20>.<pause 20>\nYa...<pause 15> No te gusta mucho.<pause 15> \nLástima, <0x10009:0x00080802>cof, cof, cof.\n\nBueno, no importa. Dime, ¿qué decías\nque habías venido a hacer aquí?\n\n\n<0x10009:0x00080a03>Ah...<pause 30> cof, cof.\nHas venido a que te enseñe mi parte\ndel cantar, ya veo...")
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a00>Dices que has bajado del cielo,\n¿no, <heroname>?\nEntonces, supongo que eres el elegido\nde la Diosa.\nMmm, está claro...\n\n\n\n<0x10009:0x000a0a00>Pues lo siento muchísimo, pero ahora\nmismo no puedo enseñarte nada.\n\n\n<0x10009:0x000a0a00>Mira cómo tengo la garganta...\nCantar es lo último que quiero hacer, <pause 30>\n<0x10009:0x0000000c>cof, cof.\n\n\n<0x10009:0x000a0a00>Tú mismo puedes verlo, no pienses que\nte engaño.\n\n\n<0x10009:0x00110804>Ah, la tarea que te ha encomendado\nla Diosa es pesada en verdad...\nCof, cof.")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 8, unk: 0, line: 67 */ "Aquí empiezan las minas de\nLanayru, ricas en mineral\ncronolítico.")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 7, unk: 0, line: 68 */ "Prohibido continuar sin\npermiso de <color blue<Lanayru>coloroff>,\naugusto dragón del trueno.")
          }

