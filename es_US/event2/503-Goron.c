          void entrypoint_503_57() {
/*< 38>*/ 	start()
/*<560>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00171909>¡MIRA! ¡Es una de las <color red<estatuas\nparlantes >coloroff>de los escritos!")
/*<561>*/ 	scene_flags[10 'Sealed Grounds'][73 /* 0x8 02 */] = true;
/*<614>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_503_74() {
/*<259>*/ 	start()
/*<116>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<117>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<118>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<422>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 66>*/ 	switch (scene_flags[64 /* 0x9 01 */]) {
          	  case 0:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<bombas>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		flw_67:
/*< 67>*/ 		switch (choice(2)) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00161e07>El <color red<círculo cerrado>coloroff>...<pause 30> Aquel que persiga\nel poder de la destrucción, tendrá que\ndibujar esta forma.")
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          			flw_137:
/*<137>*/ 			temp_flags[9 /* 0x0 02 */] = true;
/*<216>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<509>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 70>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          			goto flw_137
          		}
          	  case 1:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00161e07>El <color red<círculo cerrado>coloroff>...<pause 30> Aquel que persiga\nel poder de la destrucción, tendrá que\ndibujar esta forma.")
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		goto flw_137
          	}
          }

          void entrypoint_503_58() {
/*<146>*/ 	start()
          	flw_55:
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>El <color red<hexágono brillante>coloroff>...<pause 30> Aquel que\npersiga grandes riquezas, tendrá\nque dibujar esta forma.")
/*<109>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		flw_135:
/*<135>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<221>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<507>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          		goto flw_135
          	}
          }

          void entrypoint_503_75() {
/*<260>*/ 	start()
/*<119>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<120>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<121>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<423>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 72>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<flechas>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		flw_73:
/*< 73>*/ 		switch (choice(2)) {
          		  case 0:
/*< 75>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00161e07>La <color red<flecha acostada>coloroff>...<pause 30> Aquel que desee\nalcanzar lo lejano, tendrá que dibujar\nesta forma.")
/*<103>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          			flw_138:
/*<138>*/ 			temp_flags[10 /* 0x0 04 */] = true;
/*<217>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<510>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 76>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          			goto flw_138
          		}
          	  case 1:
/*< 77>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00161e07>La <color red<flecha acostada>coloroff>...<pause 30> Aquel que desee\nalcanzar lo lejano, tendrá que dibujar\nesta forma.")
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		goto flw_138
          	}
          }

          void entrypoint_503_59() {
/*<147>*/ 	start()
          	flw_61:
/*< 61>*/ 	switch (choice(2)) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00161e07>El <color red<órgano vital rojo>coloroff>...<pause 30> Aquel que\npersiga la fuente de la vida tendrá\nque dibujar su forma.\n\nY así, como si de lluvia se tratara,\ncaerá del cielo sobre él.")
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		flw_136:
/*<136>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<222>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<508>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 64>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          		goto flw_136
          	}
          }

          void entrypoint_503_07() {
/*<166>*/ 	start()
/*<367>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 364, 'param3': 32}
/*<364>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 368, 'param3': 15}
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 575, 'param3': 13}
/*<575>*/ 	wait_frames(10)
/*<365>*/ 	set_camera(3, 0)
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 328, 'param3': 16}
/*<328>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<329>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_171:
/*<171>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<172>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>¡Muchacho, si fueses un goron,\nte abrazaría! ¡Muchísimas gracias!\n¡Eres el mejor!")
          				flw_195:
/*<195>*/ 				entrypoint_503_17();
          			  case 1:
/*<173>*/ 				printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer! \n\n\n\n¡Así que a esto es a lo que se refería\nel manuscrito con lo de grandes\nriquezas!")
/*<174>*/ 				scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
          				goto flw_195
          			}
          		  case 1:
/*<582>*/ 			scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
/*<562>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer! \n\n\n\n¡Así que a esto es a lo que se refería\nel manuscrito con lo de grandes\nriquezas!")
/*<486>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_171
          	}
          }

          void entrypoint_503_76() {
/*<441>*/ 	start()
/*<435>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<436>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<437>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<442>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<427>*/ 	switch (scene_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<429>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<hadas>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		flw_428:
/*<428>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000007>Tres... ángulos... La tri... rza...")
/*<434>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00171700>El resto del documento está tan\ndeteriorado que no hay forma\nde saber qué dice.\n\n¡Por Goron! ¿No darías cualquier\ncosa por averiguarlo?")
          			flw_438:
/*<438>*/ 			temp_flags[12 /* 0x0 10 */] = true;
/*<440>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<506>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*<431>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          			goto flw_438
          		}
          	  case 1:
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000007>Tres... ángulos... La tri... rza...")
/*<433>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00171700>El resto del documento está tan\ndeteriorado que no hay forma\nde saber qué dice.\n\n¡Por Goron! ¿No darías cualquier\ncosa por averiguarlo?")
          		goto flw_438
          	}
          }

          void entrypoint_503_08() {
/*<167>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 369, 'param3': 32}
/*<369>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 373, 'param3': 15}
/*<373>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 576, 'param3': 13}
/*<576>*/ 	wait_frames(10)
/*<370>*/ 	set_camera(3, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 330, 'param3': 16}
/*<330>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<331>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_183:
/*<183>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<175>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>¡Muchacho, si fueses un goron,\nte abrazaría! ¡Muchísimas gracias!\n¡Eres el mejor!")
          				flw_194:
/*<194>*/ 				entrypoint_503_17();
          			  case 1:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer!\n\n\n\n¡Así que a esto es a lo que se refería\nel manuscrito con lo del órgano vital\nrojo!")
/*<184>*/ 				scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
          				goto flw_194
          			}
          		  case 1:
/*<583>*/ 			scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
/*<563>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer!\n\n\n\n¡Así que a esto es a lo que se refería\nel manuscrito con lo del órgano vital\nrojo!")
/*<498>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_183
          	}
          }

          void entrypoint_503_77() {
/*<460>*/ 	start()
/*<461>*/ 	switch (random(4)) {
          	  case 0:
/*<469>*/ 		entrypoint_503_76();
          	  case 1:
/*<462>*/ 		switch (random(4)) {
          		  case 0:
/*<465>*/ 			entrypoint_503_72();
          		  case 1:
/*<466>*/ 			entrypoint_503_73();
          		  case 2:
/*<467>*/ 			entrypoint_503_74();
          		  case 3:
/*<468>*/ 			entrypoint_503_75();
          		}
          	  case 2:
/*<463>*/ 		switch (random(4)) {
          		  case 0:
/*<470>*/ 			entrypoint_503_72();
          		  case 1:
/*<471>*/ 			entrypoint_503_73();
          		  case 2:
/*<472>*/ 			entrypoint_503_74();
          		  case 3:
/*<473>*/ 			entrypoint_503_75();
          		}
          	  case 3:
/*<464>*/ 		switch (random(4)) {
          		  case 0:
/*<474>*/ 			entrypoint_503_72();
          		  case 1:
/*<475>*/ 			entrypoint_503_73();
          		  case 2:
/*<476>*/ 			entrypoint_503_74();
          		  case 3:
/*<477>*/ 			entrypoint_503_75();
          		}
          	}
          }

          void entrypoint_503_60() {
/*<148>*/ 	start()
          	goto flw_67
          }

          void entrypoint_503_09() {
/*<168>*/ 	start()
          	flw_377:
/*<377>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 374, 'param3': 32}
/*<374>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 378, 'param3': 15}
/*<378>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 577, 'param3': 13}
/*<577>*/ 	wait_frames(10)
/*<375>*/ 	set_camera(3, 0)
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 185, 'param3': 16}
/*<185>*/ 	switch (scene_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<177>*/ 		printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>¡Muchacho, si fueses un goron,\nte abrazaría! ¡Muchísimas gracias!\n¡Eres el mejor!")
/*<196>*/ 		entrypoint_503_17();
          	  case 1:
/*<178>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x18171908>¡Increíble!\n\n\n\n¡No hay duda de que era a esto a lo que\nse refería el fragmento perdido del\nmanuscrito! ¡Gracias por mostrármelo!")
/*<559>*/ 		set_camera(6, 0)
/*<186>*/ 		scene_flags[10 'Sealed Grounds'][63 /* 0x6 80 */] = true;
/*<515>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = true;
/*<419>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x18080b02>¡Con esto ya hemos conseguido\nresolver todos los enigmas del\nmanuscrito!\n\nAcepta este regalo especial como\nrecompensa por tu inestimable\nayuda.")
/*<418>*/ 		give_item(33 0x21);
/*<615>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 556, 'param3': 12}
/*<556>*/ 		set_camera(5, 0)
/*<588>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_394:
/*<394>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<599>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 589, 'param3': 32}
/*<589>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 394, 'param3': 15}
          			goto flw_394
          		}
          	}
          }

          void entrypoint_503_78() {
/*<571>*/ 	start()
          	flw_517:
/*<517>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181701>El fragmento ilegible de las\nescrituras... <pause 30>¿Qué será lo que dice?\n\n\nEl enigma se complica más y más...\n\n\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          	flw_459:
/*<459>*/ 	entrypoint_503_65();
          }

          void entrypoint_503_61() {
/*<149>*/ 	start()
          	goto flw_73
          }

          void entrypoint_503_62() {
/*<163>*/ 	start()
          	flw_79:
/*< 79>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>El <color red<hexágono brillante>coloroff>...<pause 30> Aquel que\npersiga grandes riquezas, tendrá\nque dibujar esta forma.")
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		flw_139:
/*<139>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<218>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<511>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 82>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          		goto flw_139
          	}
          }

          void entrypoint_503_10() {
/*<169>*/ 	start()
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 379, 'param3': 32}
/*<379>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 383, 'param3': 15}
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 579, 'param3': 13}
/*<579>*/ 	wait_frames(10)
/*<380>*/ 	set_camera(3, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 332, 'param3': 16}
/*<332>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<333>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_187:
/*<187>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>¡Muchacho, si fueses un goron,\nte abrazaría! ¡Muchísimas gracias!\n¡Eres el mejor!")
          				flw_192:
/*<192>*/ 				entrypoint_503_17();
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer!\n\n\n\n¡Así que el poder de la destrucción\nal que se refería el manuscrito\neran las bombas!")
/*<188>*/ 				scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
          				goto flw_192
          			}
          		  case 1:
/*<584>*/ 			scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
/*<564>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer!\n\n\n\n¡Así que el poder de la destrucción\nal que se refería el manuscrito\neran las bombas!")
/*<499>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_187
          	}
          }

          void entrypoint_503_63() {
/*<164>*/ 	start()
          	flw_85:
/*< 85>*/ 	switch (choice(2)) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00161e07>El <color red<órgano vital rojo>coloroff>...<pause 30> Aquel que\npersiga la fuente de la vida tendrá\nque dibujar su forma.\n\nY así, como si de lluvia se tratara,\ncaerá del cielo sobre él.")
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		flw_140:
/*<140>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<219>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<512>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          		goto flw_140
          	}
          }

          void entrypoint_503_64() {
/*<165>*/ 	start()
          	flw_91:
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00161e07>El <color red<círculo cerrado>coloroff>...<pause 30> Aquel que persiga\nel poder de la destrucción, tendrá que\ndibujar esta forma.")
/*< 97>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		flw_141:
/*<141>*/ 		temp_flags[9 /* 0x0 02 */] = true;
/*<220>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<513>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 94>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00081e0a>¿En serio? <pause 30>Entonces, ¡adelante!")
          		goto flw_141
          	}
          }

          void entrypoint_503_65() {
/*<439>*/ 	start()
          	goto flw_428
          }

          void entrypoint_503_66() {
/*<544>*/ 	start()
          	flw_51:
/*< 51>*/ 	switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          	  case 0:
/*<586>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<223>*/ 			printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00261301>El poder del muro divino <color red<se >coloroff><color red<regenera\n>coloroff>con el tiempo; solo hay que esperar.\n\n\n<0x10009:0x000e1700>¡Cuando eso ocurra, espero que\nvuelvas aquí para ayudarme\ncon mi investigación!")
          		  case 1:
/*<587>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x18080b01>El poder del muro divino <color red<se >coloroff><color red<regenera\n>coloroff>con el tiempo; solo hay que esperar.\n\n\n<0x10009:0x00181700>¡Cuando eso ocurra, me gustaría\nque volvieras para ayudarme con\nmi investigación!")
          		}
          	  case 1:
/*< 41>*/ 		check_item_flag(19, 1)
/*< 40>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*< 52>*/ 			switch (scene_flags[67 /* 0x9 08 */]) {
          			  case 0:
/*<443>*/ 				switch (scene_flags[68 /* 0x9 10 */]) {
          				  case 0:
/*<569>*/ 					switch (scene_flags[63 /* 0x6 80 */]) {
          					  case 0:
/*<134>*/ 						switch (temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<142>*/ 							printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00211701>¡Me gustaría ver muchas <color red<rupias>coloroff>!\n¡Un verdadero montón!\n\n\n<0x10009:0x00080b00>¿Quieres que repasemos lo que dice\nen el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
/*<150>*/ 							entrypoint_503_58();
          						  case 1:
/*<133>*/ 							switch (temp_flags[8 /* 0x0 01 */]) {
          							  case 0:
/*<143>*/ 								printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00211701>¡Deseo ver muchos <color red<corazones>coloroff>!\n\n\n\n<0x10009:0x00080b00>¿Quieres que repasemos lo que dice\nen el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
/*<151>*/ 								entrypoint_503_59();
          							  case 1:
/*<132>*/ 								switch (temp_flags[9 /* 0x0 02 */]) {
          								  case 0:
/*<144>*/ 									printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00181701>¡Me encantaría ver salir <color red<bombas\n>coloroff>de esta pared! Espero que estés\npreparado para recogerlas...\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
/*<152>*/ 									entrypoint_503_60();
          								  case 1:
/*<131>*/ 									switch (temp_flags[10 /* 0x0 04 */]) {
          									  case 0:
/*<145>*/ 										printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00211701>¡Me encantaría ver salir <color red<flechas\n>coloroff>de esta pared!\n\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
/*<153>*/ 										entrypoint_503_61();
          									  case 1:
/*<457>*/ 										switch (temp_flags[12 /* 0x0 10 */]) {
          										  case 0:
/*<516>*/ 											switch (scene_flags[63 /* 0x6 80 */]) {
          											  case 0:
/*<458>*/ 												printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00211701>¡Estoy deseando ver salir más <color red<hadas\n>coloroff>de esta pared!\n\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          												goto flw_459
          											  case 1:
          												goto flw_517
          											}
          										  case 1:
/*<570>*/ 											entrypoint_503_77();
          										}
          									}
          								}
          							}
          						}
          					  case 1:
/*<607>*/ 						temp_flags[3 /* 0x1 08 */] = true;
/*<608>*/ 						temp_flags[4 /* 0x1 10 */] = true;
/*<609>*/ 						temp_flags[5 /* 0x1 20 */] = true;
/*<610>*/ 						temp_flags[6 /* 0x1 40 */] = true;
/*<568>*/ 						entrypoint_503_78();
          					}
          				  case 1:
/*<447>*/ 					switch (temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<518>*/ 						switch (scene_flags[61 /* 0x6 20 */]) {
          						  case 0:
/*<448>*/ 							printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00211701>¡Me gustaría ver muchas <color red<rupias>coloroff>!\n¡Un verdadero montón!\n\n\n<0x10009:0x00080b00>¿Quieres que repasemos lo que dice\nen el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
          							flw_452:
/*<452>*/ 							entrypoint_503_58();
          						  case 1:
/*<522>*/ 							printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00001b05>¿Crees que será posible de verdad\nobtener grandes riquezas?\n\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
          							goto flw_452
          						}
          					  case 1:
/*<446>*/ 						switch (temp_flags[8 /* 0x0 01 */]) {
          						  case 0:
/*<519>*/ 							switch (scene_flags[62 /* 0x6 40 */]) {
          							  case 0:
/*<449>*/ 								printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00211701>¡Deseo ver muchos <color red<corazones>coloroff>!\n\n\n\n<0x10009:0x00080b00>¿Quieres que repasemos lo que dice\nen el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
          								flw_453:
/*<453>*/ 								entrypoint_503_59();
          							  case 1:
/*<523>*/ 								printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00160b04>\"Como si de lluvia se tratara,\ncaerá del cielo sobre él\"...\n\n\n<0x10009:0x00000b05>Si fuera cierto, ¡resultaría muy útil\npara enfrentarse a los peligros\nde cualquier aventura!\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          								goto flw_453
          							}
          						  case 1:
/*<445>*/ 							switch (temp_flags[9 /* 0x0 02 */]) {
          							  case 0:
/*<520>*/ 								switch (scene_flags[64 /* 0x9 01 */]) {
          								  case 0:
/*<450>*/ 									printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00181701>¡Me encantaría ver salir <color red<bombas\n>coloroff>de esta pared! Espero que estés\npreparado para recogerlas...\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          									flw_454:
/*<454>*/ 									entrypoint_503_60();
          								  case 1:
/*<524>*/ 									printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00211705>¿A qué se referirá con lo del\n\"círculo cerrado\"?\n\n\n<0x10009:0x00161e04>Es posible... ¡pues claro!\n<pause 10>¡Seguro que hay que dibujar\nun simple círculo!\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          									goto flw_454
          								}
          							  case 1:
/*<444>*/ 								switch (temp_flags[10 /* 0x0 04 */]) {
          								  case 0:
/*<521>*/ 									switch (scene_flags[65 /* 0x9 02 */]) {
          									  case 0:
/*<451>*/ 										printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00211701>¡Me encantaría ver salir <color red<flechas\n>coloroff>de esta pared!\n\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          										flw_455:
/*<455>*/ 										entrypoint_503_61();
          									  case 1:
/*<525>*/ 										printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00162005>\"Alcanzar lo lejano\"... ¿Estás\npensando lo mismo que yo?\n\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          										goto flw_455
          									}
          								  case 1:
/*<456>*/ 									entrypoint_503_71();
          								}
          							}
          						}
          					}
          				}
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00181701>¡He descubierto un nuevo manuscrito\ndurante mi investigación! ¿Quieres\nsaber lo que dice?\n[1-]Claro[2]No, gracias")
/*< 43>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00161e07>La <color red<flecha acostada>coloroff>...<pause 30> Aquel que desee\nalcanzar lo lejano, tendrá que dibujar\nesta forma.")
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
/*< 46>*/ 					scene_flags[10 'Sealed Grounds'][67 /* 0x9 08 */] = true;
/*<336>*/ 					temp_flags[3 /* 0x1 08 */] = true;
/*<337>*/ 					temp_flags[4 /* 0x1 10 */] = true;
/*<338>*/ 					temp_flags[5 /* 0x1 20 */] = true;
/*<339>*/ 					temp_flags[10 /* 0x0 04 */] = true;
/*<553>*/ 					temp_flags[11 /* 0x0 08 */] = true;
/*<340>*/ 					story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<514>*/ 					story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
/*<625>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<626>*/ 						switch (scene_flags[62 /* 0x6 40 */]) {
          						  case 0:
/*<627>*/ 							switch (scene_flags[64 /* 0x9 01 */]) {
          							  case 0:
/*<628>*/ 								scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
          							  case 1:
          							}
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00080b07>¡Vamos, no seas tímido! Tienes\ncara de estar deseando saberlo.\nNo te preocupes, yo te lo explico todo.")
          					goto flw_53
          				}
          			}
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x181f1908>Esta marca... ¡No hay duda!\n¡Seguro que es uno de los <color red<muros\ndivinos >coloroff>que la Diosa dejó para el\nelegido!")
/*<156>*/ 			switch (temp_flags[7 /* 0x1 80 */]) {
          			  case 0:
/*<527>*/ 				switch (scene_flags[61 /* 0x6 20 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00211701>¡Me gustaría ver muchas <color red<rupias>coloroff>!\n¡Un verdadero montón!\n\n\n<0x10009:0x00080b00>¿Quieres que repasemos lo que dice\nen el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
          					flw_160:
/*<160>*/ 					entrypoint_503_62();
          				  case 1:
/*<529>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00001b05>¿Crees que será posible de verdad\nobtener grandes riquezas?\n\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
          					goto flw_160
          				}
          			  case 1:
/*<155>*/ 				switch (temp_flags[8 /* 0x0 01 */]) {
          				  case 0:
/*<526>*/ 					switch (scene_flags[62 /* 0x6 40 */]) {
          					  case 0:
/*<158>*/ 						printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00211701>¡Deseo ver muchos <color red<corazones>coloroff>!\n\n\n\n<0x10009:0x00080b00>¿Quieres que repasemos lo que dice\nen el manuscrito?\n\n\n[1-]Claro[2]No, gracias")
          						flw_161:
/*<161>*/ 						entrypoint_503_63();
          					  case 1:
/*<530>*/ 						printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00160b04>\"Como si de lluvia se tratara,\ncaerá del cielo sobre él\"...\n\n\n<0x10009:0x00000b05>Si fuera cierto, ¡resultaría muy útil\npara enfrentarse a los peligros\nde cualquier aventura!\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          						goto flw_161
          					}
          				  case 1:
/*<154>*/ 					switch (temp_flags[9 /* 0x0 02 */]) {
          					  case 0:
/*<528>*/ 						switch (scene_flags[64 /* 0x9 01 */]) {
          						  case 0:
/*<159>*/ 							printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00181701>¡Me encantaría ver salir <color red<bombas\n>coloroff>de esta pared! Espero que estés\npreparado para recogerlas...\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          							flw_162:
/*<162>*/ 							entrypoint_503_64();
          						  case 1:
/*<531>*/ 							printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00211705>¿A qué se referirá con lo del\n\"círculo cerrado\"?\n\n\n<0x10009:0x00161e04>Es posible... ¡pues claro!\n<pause 10>¡Seguro que hay que dibujar\nun simple círculo!\n\n<0x10009:0x00080b00>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          							goto flw_162
          						}
          					  case 1:
/*<252>*/ 						entrypoint_503_67();
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_15() {
/*<170>*/ 	start()
/*<387>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 384, 'param3': 32}
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 388, 'param3': 15}
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 580, 'param3': 13}
/*<580>*/ 	wait_frames(10)
/*<385>*/ 	set_camera(3, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 334, 'param3': 16}
/*<334>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<335>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_189:
/*<189>*/ 			switch (scene_flags[65 /* 0x9 02 */]) {
          			  case 0:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>¡Muchacho, si fueses un goron,\nte abrazaría! ¡Muchísimas gracias!\n¡Eres el mejor!")
          				flw_193:
/*<193>*/ 				entrypoint_503_17();
          			  case 1:
/*<182>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer!\n\n\n\n¡Así que era eso a lo que se refería\nel manuscrito cuando hablaba de\nalcanzar lo lejano!")
/*<190>*/ 				scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
          				goto flw_193
          			}
          		  case 1:
/*<585>*/ 			scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
/*<565>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x18171908>¡Válgame Goron! ¡Ver para creer!\n\n\n\n¡Así que era eso a lo que se refería\nel manuscrito cuando hablaba de\nalcanzar lo lejano!")
/*<500>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_189
          	}
          }

          void entrypoint_503_67() {
/*<251>*/ 	start()
/*<224>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*<227>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<230>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<234>*/ 				switch (random(3)) {
          				  case 0:
/*<239>*/ 					entrypoint_503_68();
          				  case 1:
/*<240>*/ 					entrypoint_503_69();
          				  case 2:
/*<241>*/ 					entrypoint_503_70();
          				}
          			  case 1:
/*<232>*/ 				entrypoint_503_70();
          			}
          		  case 1:
/*<229>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<233>*/ 				entrypoint_503_69();
          			  case 1:
/*<235>*/ 				switch (random(2)) {
          				  case 0:
/*<242>*/ 					entrypoint_503_70();
          				  case 1:
/*<243>*/ 					entrypoint_503_69();
          				}
          			}
          		}
          	  case 1:
/*<225>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<228>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<231>*/ 				entrypoint_503_68();
          			  case 1:
/*<237>*/ 				switch (random(2)) {
          				  case 0:
/*<244>*/ 					entrypoint_503_68();
          				  case 1:
/*<245>*/ 					entrypoint_503_70();
          				}
          			}
          		  case 1:
/*<226>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<236>*/ 				switch (random(2)) {
          				  case 0:
/*<246>*/ 					entrypoint_503_68();
          				  case 1:
/*<247>*/ 					entrypoint_503_69();
          				}
          			  case 1:
/*<238>*/ 				switch (random(3)) {
          				  case 0:
/*<248>*/ 					entrypoint_503_68();
          				  case 1:
/*<249>*/ 					entrypoint_503_69();
          				  case 2:
/*<250>*/ 					entrypoint_503_70();
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_68() {
/*<253>*/ 	start()
/*<128>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<129>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<130>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<424>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 78>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<rupias>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		goto flw_79
          	  case 1:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>El <color red<hexágono brillante>coloroff>...<pause 30> Aquel que\npersiga grandes riquezas, tendrá\nque dibujar esta forma.")
/*<100>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		goto flw_139
          	}
          }

          void entrypoint_503_51() {
          	start()
/*<351>*/ 	switch (scene_flags[110 /* 0xC 40 */]) {
          	  case 0:
          		flw_13:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00251356>Ya sé que, dicho así, no parece gran\ncosa... ¡Pero es que acabo de empezar\na investigar!\n\n<0x10009:0x000e1300>Vuelve más adelante y hablaremos\nlargo y tendido, muchacho.\n\n\n<0x10009:0x00001300>Mientras, seguiré con mi delicada\nlabor.")
          	  case 1:
/*<352>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 5, 'param3': 31}
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>¡Vaya, volvemos a encontrarnos!\nPor lo que veo sigues tan ocupado\ncomo de costumbre, ¿no?\n\n<0x10009:0x001b1300>Yo tampoco he dejado de recorrer este\nmundo e investigar sus misterios desde\nla última vez que nos vimos.\n\n<0x10009:0x000e1300>¿Quieres que te exponga los frutos\nde mi arduo trabajo?\n[1-]¡Claro![2]Déjalo")
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10007:0x000e1908>¡Estupendo! ¡Ya sabía que esto te iba\na interesar, muchacho! Durante mi\ninvestigación, descubrí algo realmente\nasombroso.\n¡Puedo confirmar la existencia de\n<color red<paredes >coloroff>y <color red<estatuas >coloroff>que reaccionan\nante simples <0x10007:0x00001300><color red<sonidos melodiosos>coloroff>!\n\n<0x10007:0x000e1300>¿Quieres que hablemos más de\neste tema?\n[1-]¡Sí![2]Déjalo")
/*< 12>*/ 			switch (choice(2)) {
          			  case 0:
/*<353>*/ 				scene_flags[10 'Sealed Grounds'][110 /* 0xC 40 */] = true;
          				goto flw_13
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00250e05>Bueno, supongo que no te puedo\nobligar, ¿verdad? Pero si cambias\nde opinión, ya sabes dónde estoy.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	}
          }

          void entrypoint_503_17() {
/*<191>*/ 	start()
/*<557>*/ 	set_camera(6, 0)
/*<631>*/ 	switch (scene_flags[113 /* 0xF 02 */]) {
          	  case 0:
/*<197>*/ 		switch (random(4)) {
          		  case 0:
/*<198>*/ 			switch (random(4)) {
          			  case 0:
/*<409>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<400>*/ 				give_item(62 0x3E);
          				flw_554:
/*<554>*/ 				set_camera(5, 0)
/*<596>*/ 				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          				  case 0:
          					flw_501:
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<598>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 597, 'param3': 32}
/*<597>*/ 					{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 501, 'param3': 15}
          					goto flw_501
          				}
          			  case 1:
/*<410>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<401>*/ 				give_item(4 0x04);
/*<616>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<212>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<213>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<214>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<215>*/ 				give_item(62 0x3E);
          				goto flw_554
          			}
          		  case 1:
/*<199>*/ 			switch (random(4)) {
          			  case 0:
/*<411>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<402>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<412>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<403>*/ 				give_item(4 0x04);
/*<617>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<204>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<205>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<206>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<207>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 2:
/*<200>*/ 			switch (random(4)) {
          			  case 0:
/*<413>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<404>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<414>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<405>*/ 				give_item(4 0x04);
/*<618>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<208>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<209>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 3:
/*<210>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<211>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 3:
/*<201>*/ 			switch (random(4)) {
          			  case 0:
/*<415>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<406>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 1:
/*<416>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<407>*/ 				give_item(4 0x04);
/*<619>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<202>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<203>*/ 				give_item(32 0x20);
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 3:
/*<417>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<408>*/ 				give_item(32 0x20);
/*<620>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			}
          		}
          	  case 1:
/*<633>*/ 		scene_flags[10 'Sealed Grounds'][113 /* 0xF 02 */] = true;
/*<632>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x18080b02>¡Acepta esto como muestra de gratitud\npor tu ayuda en la investigación!")
/*<630>*/ 		give_item(94 0x5E);
/*<638>*/ 		set_camera(3, 0)
/*<640>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 639, 'param3': 32}
/*<639>*/ 		printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x18081301>El poder de los muros <color red<se regenera\n>coloroff>con el tiempo; ¿por qué no vienes\nmás tarde y me ayudas con mi\ninvestigación?")
/*<635>*/ 		set_camera(5, 0)
/*<636>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_634:
/*<634>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<637>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 634, 'param3': 15}
          			goto flw_634
          		}
          	}
          }

          void entrypoint_503_69() {
/*<254>*/ 	start()
/*<125>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<126>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<127>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<425>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 84>*/ 	switch (scene_flags[62 /* 0x6 40 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<corazones>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		goto flw_85
          	  case 1:
/*< 89>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00161e07>El <color red<órgano vital rojo>coloroff>...<pause 30> Aquel que\npersiga la fuente de la vida tendrá\nque dibujar su forma.\n\nY así, como si de lluvia se tratara,\ncaerá del cielo sobre él.")
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		goto flw_140
          	}
          }

          void entrypoint_503_52() {
/*<  1>*/ 	start()
/*<346>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<396>*/ 		printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x001d1353>¡¿Pe... pero qué...?!\n<pause 30>¡Jamás había sentido algo así!")
          	  case 1:
/*<354>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
          			flw_22:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000a1304>He leído en documentos antiguos\nque las sacraliposas suelen reunirse\ncerca de estas paredes y estatuas\nde las que te hablaba.\nPor lo visto, esa especie posee una\nnaturaleza especialmente perceptiva.\n¿Quieres que te cuente más cosas?\n[1-]¡Claro![2]Mejor no")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*<502>*/ 				scene_flags[10 'Sealed Grounds'][111 /* 0xC 80 */] = true;
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x000e1300>¿De qué quieres que te hable?\n[1-]Paredes[2-]Estatuas")
/*< 25>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000001>Según los antiguos manuscritos,\n¡fue la propia Diosa la que erigió\nesos muros para el elegido!\n\nY se dice que tienen el poder de\nconceder cualquier cosa que el\nelegido desee... ¡Por algo los\nllaman <color red<muros divinos>coloroff>!\n¿Qué me dices? ¿Quieres saber más?\n[1-]¡Adelante![2]Mejor no")
/*< 28>*/ 					switch (choice(2)) {
          					  case 0:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00251b56>¡Por todos los goron reunidos!\n¡Eres insaciable! Pero la verdad\nes que mi investigación no va\nmás allá.\n<0x10009:0x000a1300>¡En cuanto descubra algo nuevo, lo\ncompartiré contigo, no te preocupes!")
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000004>Pues es una pena, porque ahora mismo\nestoy centrando toda mi investigación\nen los <color red<muros divinos>coloroff>.")
          					}
          				  case 1:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Según los manuscritos antiguos,\naparecen haciendo un sonido peculiar\ny pronunciando palabras misteriosas.\n\nExacto, ¡<color red<estatuas parlantes>coloroff>!\n¿Quieres que te cuente aún más\ncosas sobre ellas?\n[1-]¡Adelante![2]Déjalo")
/*<503>*/ 					switch (choice(2)) {
          					  case 0:
/*<504>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00251b56>¡Por todos los goron reunidos!\n¡Eres insaciable! Pero la verdad\nes que mi investigación no va\nmás allá.\n<0x10009:0x000a1300>¡En cuanto descubra algo nuevo, lo\ncompartiré contigo, no te preocupes!")
          					  case 1:
/*<505>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000004>Pues es una pena, porque ahora mismo\nestoy centrando toda mi investigación\nen las <color red<estatuas parlantes>coloroff>.")
          					}
          				}
          			  case 1:
          				flw_16:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00250e05>Bueno, supongo que no te puedo\nobligar, ¿verdad? Pero si cambias\nde opinión, ya sabes dónde estoy.")
          			}
          		  case 1:
/*<355>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 6, 'param3': 31}
/*<  6>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>¡Vaya, volvemos a encontrarnos!\nPor lo que veo sigues tan ocupado\ncomo de costumbre, ¿no?\n\n<0x10009:0x001b1300>Yo tampoco he dejado de recorrer este\nmundo e investigar sus misterios desde\nla última vez que nos vimos.\n\n<0x10009:0x000e1300>¿Quieres que te exponga los frutos\nde mi arduo trabajo?\n[1-]¡Claro![2]Déjalo")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10007:0x000e1908>¡Estupendo! ¡Ya sabía que esto te iba\na interesar, muchacho! Durante mi\ninvestigación, descubrí algo realmente\nasombroso.\n¡Puedo confirmar la existencia de\n<color red<paredes >coloroff>y <color red<estatuas >coloroff>que reaccionan\nante simples <0x10007:0x00001300><color red<sonidos melodiosos>coloroff>!\n\n<0x10007:0x000e1300>¿Quieres que hablemos más de\neste tema?\n[1-]¡Sí![2]Déjalo")
/*< 17>*/ 				switch (choice(2)) {
          				  case 0:
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x000e1904>¡Por mil rocas de lava! No esperaba\nque compartieras mi entusiasmo\nhasta tal punto...\n\n<0x10009:0x00001900>Pero antes de que hablemos sobre\n<color red<paredes >coloroff>y <color red<estatuas>coloroff>, hay algo que\nme gustaría preguntarte.\n\n<0x10009:0x000e0b00>¿Sabes lo que son las <color blue<sacraliposas>coloroff>?\n[1-]Sí[2]No...")
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "Mejor, así ahorro un poco de saliva,\nque tengo la boca como si hubiera\nestado tragando rocas toda la noche.")
          						goto flw_22
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000e1300>No te preocupes, yo te lo explico.\nLas <color blue<sacraliposas>coloroff> son unas preciosas\nmariposas azules.\n\n<0x10009:0x001b1300>Su fuerza vital es tan grande que\npueden sobrevivir en cualquier\nentorno.\n\n<0x10009:0x000e1300>¡Puedes encontrarlas incluso en esta\nmisma región, si buscas bien!")
          						goto flw_22
          					}
          				  case 1:
          					goto flw_16
          				}
          			  case 1:
          				goto flw_16
          			}
          		}
          	}
          }

          void entrypoint_503_18() {
/*<341>*/ 	start()
/*<611>*/ 	switch (story_flags[424 /* us: 805A9B06 0x02, jp: 805ACD86 0x02 */]) {
          	  case 0:
/*<613>*/ 		entrypoint_503_21();
          	  case 1:
/*<392>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 389, 'param3': 32}
/*<389>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 393, 'param3': 15}
/*<393>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 581, 'param3': 13}
/*<581>*/ 		wait_frames(10)
/*<390>*/ 		set_camera(3, 0)
/*<391>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 399, 'param3': 16}
/*<399>*/ 		switch (temp_flags[8 /* 0x0 01 */]) {
          		  case 0:
/*<552>*/ 			switch (story_flags[421 /* us: 805A9B07 0x40, jp: 805ACD87 0x40 */]) {
          			  case 0:
/*<343>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x18171908>¡Por Goron, es asombroso!\n\n\n\n<0x10009:0x18161e00>¿Tres corazones? Vaya, jamás\nhabría imaginado que el manuscrito\nse refería a esto con lo de los órganos\nvitales...\nEstá claro que mis investigaciones\nno iban por buen camino, ¡así que\ntendré que seguir trabajando!")
/*<342>*/ 				printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x18080b01>El poder del muro divino <color red<se >coloroff><color red<regenera\n>coloroff>con el tiempo; solo hay que esperar.\n\n\n<0x10009:0x00181700>¡Cuando eso ocurra, me gustaría\nque volvieras para ayudarme con\nmi investigación!")
          				flw_532:
/*<532>*/ 				set_camera(4, 0)
/*<590>*/ 				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          				  case 0:
          					flw_395:
/*<395>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<591>*/ 					{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 395, 'param3': 15}
          					goto flw_395
          				}
          			  case 1:
          				flw_398:
/*<398>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x18171908>¡Por Goron, qué rabia!\n\n\n\n<0x10009:0x18161e00>Esto no es precisamente lo que\npensaba que íbamos a descubrir,\n¡así que debo seguir investigando!")
/*<397>*/ 				printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x18080b01>El poder del muro divino <color red<se >coloroff><color red<regenera\n>coloroff>con el tiempo; solo hay que esperar.\n\n\n<0x10009:0x00181700>¡Cuando eso ocurra, me gustaría\nque volvieras para ayudarme con\nmi investigación!")
          				goto flw_532
          			}
          		  case 1:
          			goto flw_398
          		}
          	}
          }

          void entrypoint_503_53() {
/*<  2>*/ 	start()
/*< 34>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x0000000a>¡Es tal y como lo describían los viejos\nmanuscritos! Aparecen haciendo ese\nsonido tan peculiar y diciendo cosas\nraras...\n<0x10009:0x00161e0b>¡Esto es un auténtico paso de gigante\nen mi estudio de las <color red<estatuas parlantes>coloroff>!\n\n\n<0x10009:0x001e0b00>¡Ahora es el turno de los <color red<muros divinos>coloroff>!\nSeguro que cerca de aquí hay alguno.\n¡Y tarde o temprano lo encontraré!")
          	  case 1:
/*< 36>*/ 		switch (scene_flags[66 /* 0x9 04 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0016200b>Por desgracia, mi sentido musical\nestá poco menos que atrofiado.\n\n\n<0x10009:0x00002000>No sé cómo voy a hacer para tocar algo\nque suene mínimamente melodioso...")
          		  case 1:
/*<624>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 600, 'param3': 32}
/*<600>*/ 			printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00080b08>¡¡Mira!! ¡Por fin lo he encontrado!")
/*<622>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 623, 'param3': 17}
/*<623>*/ 			wait_frames(10)
/*<621>*/ 			set_camera(7, 0)
/*< 31>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x0017190a>Fíjate en todas estas sacraliposas...\n\n\n\n<0x10009:0x00001900>No hay duda, seguro que este\nes el lugar.")
/*< 32>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001e00>Mmm...")
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0016200b>Por desgracia, mi sentido musical\nestá poco menos que atrofiado.\n\n\n<0x10009:0x00002000>No sé cómo voy a hacer para tocar algo\nque suene mínimamente melodioso...")
          		}
          	}
          }

          void entrypoint_503_70() {
/*<255>*/ 	start()
/*<122>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<123>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<124>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<426>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 90>*/ 	switch (scene_flags[64 /* 0x9 01 */]) {
          	  case 0:
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<bombas>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		goto flw_91
          	  case 1:
/*< 95>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00161e07>El <color red<círculo cerrado>coloroff>...<pause 30> Aquel que persiga\nel poder de la destrucción, tendrá que\ndibujar esta forma.")
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		goto flw_141
          	}
          }

          void entrypoint_503_19() {
/*<478>*/ 	start()
/*<573>*/ 	switch (scene_flags[68 /* 0x9 10 */]) {
          	  case 0:
          		goto flw_377
          	  case 1:
          		flw_482:
/*<482>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 479, 'param3': 32}
/*<479>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 483, 'param3': 15}
/*<483>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 578, 'param3': 13}
/*<578>*/ 		wait_frames(10)
/*<480>*/ 		set_camera(3, 0)
/*<481>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 484, 'param3': 16}
/*<484>*/ 		printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x18131b01>¡Diantres! ¿Cómo has hecho eso?\n\n\n\n<0x10009:0x18171908>¡Jamás había visto algo así!\n¡Y ha salido de detrás de la\npared!\n\n<0x10009:0x18161e00><0x10006:0xffcd>Hmm...\n<0x10006:0x00cd> Por casualidad no será...\n<0x10009:0x18080b00>Bah, olvídalo. ¡No tiene importancia!")
/*<533>*/ 		set_camera(4, 0)
/*<592>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_485:
/*<485>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<593>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 485, 'param3': 15}
          			goto flw_485
          		}
          	}
          }

          void entrypoint_503_54() {
/*<  3>*/ 	start()
/*<356>*/ 	switch (scene_flags[68 /* 0x9 10 */]) {
          	  case 0:
          		flw_39:
/*< 39>*/ 		switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          		  case 0:
          			goto flw_51
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00080b02>¡Tú otra vez! ¡Hola!\n\n\n\n<0x10009:0x00160b00>¿Sabes que he visto <color blue<sacraliposas\n>coloroff>revoloteando cerca de aquí?\n\n\n<0x10009:0x00001e0b>Pero con mi sentido musical, de poco\nme sirve...\n\n\nLo más melodioso que sé hacer\nes rascarme la espalda contra\nlas rocas...")
          		}
          	  case 1:
/*<357>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
          		goto flw_39
          	}
          }

          void entrypoint_503_71() {
/*<256>*/ 	start()
/*<261>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*<262>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<264>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<268>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<282>*/ 					switch (random(4)) {
          					  case 0:
/*<288>*/ 						entrypoint_503_72();
          					  case 1:
/*<289>*/ 						entrypoint_503_73();
          					  case 2:
/*<290>*/ 						entrypoint_503_74();
          					  case 3:
/*<291>*/ 						entrypoint_503_75();
          					}
          				  case 1:
/*<324>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<292>*/ 					entrypoint_503_75();
          				}
          			  case 1:
/*<269>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<327>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<293>*/ 					entrypoint_503_74();
          				  case 1:
/*<283>*/ 					switch (random(2)) {
          					  case 0:
/*<294>*/ 						entrypoint_503_75();
          					  case 1:
/*<295>*/ 						entrypoint_503_74();
          					}
          				}
          			}
          		  case 1:
/*<265>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<325>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<296>*/ 					entrypoint_503_73();
          				  case 1:
/*<284>*/ 					switch (random(2)) {
          					  case 0:
/*<297>*/ 						entrypoint_503_73();
          					  case 1:
/*<298>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<271>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<285>*/ 					switch (random(2)) {
          					  case 0:
/*<299>*/ 						entrypoint_503_73();
          					  case 1:
/*<300>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<286>*/ 					switch (random(3)) {
          					  case 0:
/*<301>*/ 						entrypoint_503_73();
          					  case 1:
/*<302>*/ 						entrypoint_503_74();
          					  case 2:
/*<303>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		}
          	  case 1:
/*<263>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<266>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<272>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<326>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<304>*/ 					entrypoint_503_72();
          				  case 1:
/*<287>*/ 					switch (random(2)) {
          					  case 0:
/*<305>*/ 						entrypoint_503_72();
          					  case 1:
/*<306>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<273>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<281>*/ 					switch (random(2)) {
          					  case 0:
/*<307>*/ 						entrypoint_503_72();
          					  case 1:
/*<308>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<280>*/ 					switch (random(3)) {
          					  case 0:
/*<309>*/ 						entrypoint_503_72();
          					  case 1:
/*<310>*/ 						entrypoint_503_74();
          					  case 2:
/*<311>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		  case 1:
/*<267>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<274>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<279>*/ 					switch (random(2)) {
          					  case 0:
/*<312>*/ 						entrypoint_503_72();
          					  case 1:
/*<313>*/ 						entrypoint_503_73();
          					}
          				  case 1:
/*<278>*/ 					switch (random(3)) {
          					  case 0:
/*<314>*/ 						entrypoint_503_72();
          					  case 1:
/*<315>*/ 						entrypoint_503_73();
          					  case 2:
/*<316>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<275>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<277>*/ 					switch (random(3)) {
          					  case 0:
/*<317>*/ 						entrypoint_503_72();
          					  case 1:
/*<318>*/ 						entrypoint_503_73();
          					  case 2:
/*<319>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<276>*/ 					switch (random(4)) {
          					  case 0:
/*<320>*/ 						entrypoint_503_72();
          					  case 1:
/*<321>*/ 						entrypoint_503_73();
          					  case 2:
/*<322>*/ 						entrypoint_503_74();
          					  case 3:
/*<323>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_55() {
/*<  4>*/ 	start()
/*<344>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<538>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<345>*/ 			printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x001b1053>¡¿Otra vez?!<pause 30> ¡¿Qué está pasando?!\n\n\n\n<0x10009:0x00251600>¡No pienso detenerme por nada\nen el mundo! He de continuar con\nmi investigación a toda costa.")
          			flw_545:
/*<545>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<536>*/ 				entrypoint_503_66();
          			  case 1:
/*<546>*/ 				printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00130b04>¿Sabes? He visto <color blue<sacraliposas>coloroff>\nrevoloteando por aquí cerca.\n\n\n<0x10009:0x00161e0b>Pero con mi sentido musical, de poco\nme sirve...\n\n\nLo más melodioso que sé hacer\nes rascarme la espalda contra las\nrocas...")
          			}
          		  case 1:
/*<539>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00131953>¡¿Otra vez?! <pause 30>¡¿Qué está pasando?!\n\n\n\n<0x10009:0x00161e00>¡No pienso detenerme por nada\nen el mundo! He de continuar con\nmi investigación a toda costa.")
          			goto flw_545
          		}
          	  case 1:
/*<534>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
          			goto flw_545
          		  case 1:
/*<535>*/ 			switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          			  case 0:
/*<540>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x0000140a>Mmm...<pause 30> Oye...<pause 30> <0x10009:0x000e1300>Tu espada ha cambiado\nbastante desde la última vez que la vi.\n\n\n¡Seguro que ahora podrías librarte\nde ellos aún más fácilmente que\nla última vez!")
          					flw_601:
/*<601>*/ 					switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          					  case 0:
/*<604>*/ 						switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          						  case 0:
/*<606>*/ 							printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000005>Bueno, pase lo que pase, yo no pienso\ndescuidar mi investigación.")
          							flw_603:
/*<603>*/ 							entrypoint_503_66();
          						  case 1:
/*<605>*/ 							printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000005>Bueno, pase lo que pase, yo no pienso\ndescuidar mi investigación.")
          							goto flw_603
          						}
          					  case 1:
/*<602>*/ 						printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00130b04>¿Sabes? He visto <color blue<sacraliposas>coloroff>\nrevoloteando por aquí cerca.\n\n\n<0x10009:0x00161e0b>Pero con mi sentido musical, de poco\nme sirve...\n\n\nLo más melodioso que sé hacer\nes rascarme la espalda contra las\nrocas...")
          					}
          				  case 1:
/*<541>*/ 					printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000b0a>Mmm...<pause 30> Oye...<pause 30> <0x10009:0x00080b00>Tu espada ha cambiado\nbastante desde la última vez que la vi.\n\n\n¡Seguro que ahora podrías librarte\nde ellos aún más fácilmente que\nla última vez!")
          					goto flw_601
          				}
          			  case 1:
/*<542>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<543>*/ 					printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x000e1301>¡¿Otra vez tú?!<pause 30> ¡Ahí abajo hay\nun montón de extrañas criaturas!\n\n\n<0x10009:0x00000002>¿No podrías deshacerte de ellas,\ncomo la última vez?")
          					goto flw_601
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00080b01>¡¿Otra vez tú?! <pause 30>¡Ahí abajo hay\nun montón de extrañas criaturas!\n\n\n<0x10009:0x00181802>¿No podrías deshacerte de ellas,\ncomo la última vez?")
          					goto flw_601
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_03() {
/*< 47>*/ 	start()
/*<362>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 358, 'param3': 32}
/*<358>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 363, 'param3': 15}
/*<363>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 574, 'param3': 13}
/*<574>*/ 	wait_frames(10)
/*<359>*/ 	set_camera(3, 0)
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x18171b09>¡Por Goron, esto es un milagro!\n\n\n\n<0x10009:0x18001900>¡Al fin lo he descubierto! ¡Tiene que\nser el hallazgo más importante de\ntoda la historia!")
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x181f1908>Esta marca... ¡No hay duda!\n¡Seguro que es uno de los <color red<muros\ndivinos >coloroff>que la Diosa dejó para el\nelegido!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][93 /* 0xA 20 */] = true;
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_503_72() {
/*<257>*/ 	start()
/*<110>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<111>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<112>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<420>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 54>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<rupias>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		goto flw_55
          	  case 1:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>El <color red<hexágono brillante>coloroff>...<pause 30> Aquel que\npersiga grandes riquezas, tendrá\nque dibujar esta forma.")
/*<108>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		goto flw_135
          	}
          }

          void entrypoint_503_20() {
/*<497>*/ 	start()
/*<487>*/ 	scene_flags[10 'Sealed Grounds'][68 /* 0x9 10 */] = true;
/*<558>*/ 	set_camera(6, 0)
/*<488>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x18080b02>¡Toma esto como regalo por haberme\nayudado tanto en mi investigación!\n¡Te lo mereces!")
/*<490>*/ 	give_item(168 0xA8);
/*<567>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 566, 'param3': 32}
/*<566>*/ 	set_camera(3, 0)
/*<489>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x18160b01>Entonces, ¡ya está! ¡He resuelto todos\nlos enigmas del manuscrito!\n\n\nEs lo que te gustaría oír, ¿verdad?\nPero me temo que aún nos quedan\nunos pocos misterios por investigar.\n¿Quieres que prosigamos?\n[1-]¡Por supuesto![2]No, gracias")
/*<494>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_492:
/*<492>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x18000007>Tri... ¿ángulos?\nTri... algo...")
/*<493>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x18171700>El resto del documento está tan\ndeteriorado que no hay forma\nde saber qué dice.\n\n¡Por Goron! ¿No darías cualquier\ncosa por averiguarlo?")
/*<495>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x18081300>El poder del muro divino <color red<se >coloroff><color red<regenera\n>coloroff>con el tiempo; solo hay que esperar.\n\n\n<0x10009:0x18181700>¡Cuando eso ocurra, te pediré que\nvuelvas a dibujar otra cosa para\ntratar de resolver el misterio de\nuna vez por todas!")
/*<572>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = false;
/*<555>*/ 		set_camera(5, 0)
/*<594>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_491:
/*<491>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<595>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 491, 'param3': 15}
          			goto flw_491
          		}
          	  case 1:
/*<496>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x18080b00>¡No seas testarudo y escúchame!\n¿No ves que este pobre goron\nestá ansioso por contártelo?")
          		goto flw_492
          	}
          }

          void entrypoint_503_73() {
/*<258>*/ 	start()
/*<113>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<114>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<115>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<421>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 60>*/ 	switch (scene_flags[62 /* 0x6 40 */]) {
          	  case 0:
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00181704>¡Para mi investigación de hoy, necesito\nver <color red<corazones>coloroff>!\n\n\n<pause 30>Por cierto, ¿quieres que repasemos\nlo que dice el manuscrito?\n[1-]Claro[2]No, gracias")
          		goto flw_61
          	  case 1:
/*< 65>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00161e07>El <color red<órgano vital rojo>coloroff>...<pause 30> Aquel que\npersiga la fuente de la vida tendrá\nque dibujar su forma.\n\nY así, como si de lluvia se tratara,\ncaerá del cielo sobre él.")
/*<106>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00181700>¡Eso es todo lo que dice! ¿Se te ocurre\nqué puede significar?")
          		goto flw_136
          	}
          }

          void entrypoint_503_56() {
/*<347>*/ 	start()
/*<348>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<547>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<349>*/ 			printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x001b1053>¡¿Otra vez?!<pause 30> ¡¿Qué está pasando?!\n\n\n\n<0x10009:0x00251600>¡No pienso detenerme por nada\nen el mundo! He de continuar con\nmi investigación a toda costa.")
          			flw_550:
/*<550>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<549>*/ 				entrypoint_503_66();
          			  case 1:
/*<551>*/ 				printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00130b04>¿Sabes? He visto <color blue<sacraliposas>coloroff>\nrevoloteando por aquí cerca.\n\n\n<0x10009:0x00161e0b>Pero con mi sentido musical, de poco\nme sirve...\n\n\nLo más melodioso que sé hacer\nes rascarme la espalda contra las\nrocas...")
          			}
          		  case 1:
/*<548>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00131953>¡¿Otra vez?! <pause 30>¡¿Qué está pasando?!\n\n\n\n<0x10009:0x00161e00>¡No pienso detenerme por nada\nen el mundo! He de continuar con\nmi investigación a toda costa.")
          			goto flw_550
          		}
          	  case 1:
          		goto flw_550
          	}
          }

          void entrypoint_503_21() {
/*<612>*/ 	start()
          	goto flw_482
          }

