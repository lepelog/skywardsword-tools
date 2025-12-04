          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "¿Cómo? ¡¿Te acabo de leer el futuro\ny ya estás aquí de vuelta?! ¿Acaso no\nte ha quedado clara mi predicción?\nMenudo caballero estás tú hecho...\n\nEn fin, voy a repetírtela, ¡pero esta vez\npresta más atención!")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "¿Se puede saber qué has estado\nhaciendo, chico?\n\n\n¡Veo que por tu culpa la isla de la Diosa\nha desaparecido!\n\n\nPero sé de sobra que tenías poderosas\nrazones para hacerlo. No ha sido\nla típica travesura de niño grande.\n\nEstá bien, chico... ¡Debes escoger\nel camino que creas conveniente!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf(/* textboxtype: 1, unk: 0, line: 59 */ "¡Ejem! ¡Ujum! Veo que encontrarás lo\nque buscas en la isla de la Diosa.\n\n\nNo obstante, no será una empresa nada\nsencilla... Será mejor que vayas muy\nbien preparado, chico.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf(/* textboxtype: 1, unk: 0, line: 58 */ "De modo que has salido victorioso\nde la última de tus pruebas...\n\n\nNo sé por qué he dicho «última»...\nHabrá sido una corazonada.\n\n\nY ahora, quieres saber lo que tienes \nque hacer con el objeto que\nconseguiste tras la prueba...\n\nEn algún lugar de Altárea hay una\n<color red<estatua con forma de pájaro >coloroff>cuyos\n<color red<ojos>coloroff> eran <color red<dos>coloroff> <color red<gemas>coloroff>... Pero ahora\nsolo tiene una de ellas engarzada. \nCreo que tú mismo la has visto\nalguna vez.\n\n\nSi le colocas en el ojo la gema\nque le falta, se abrirá ante ti\nel camino a seguir.")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ujum! Deberás buscar el siguiente\n<color red<umbral del juicio >coloroff>con la canción que\nte ha enseñado el ser gigantesco.\n\nVeo que la entrada de la siguiente\nprueba se encuentra en <color red<algún lugar\nde Altárea>coloroff>...\n\nUf, si te digo la verdad no tengo ni\nidea de lo que significa todo esto.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf(/* textboxtype: 1, unk: 0, line: 56 */ "¡Oh! Veo que has conseguido hacerte\ncon tres estrofas de la canción...\n¡Pues debes saber que la última la\ncustodia un gigantesco ser!\n¿Y bien? ¿A qué esperas para reunirte\ncon él?")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf(/* textboxtype: 1, unk: 0, line: 37 */ "¡Ejem! ¡Ujum!\nVeo la tarea que tienes por delante,\nchico...\n\nBuscas un lugar para plantar unas\nsemillas, ¿verdad? Pero no son\nunas semillas cualesquiera. ¡Necesitas\nplantarlas en un lugar especial!\n<0x10006:0xfccd>Mmm... Veo una anciana misteriosa...<0x10006:0x00cd>\n¡Hay un lugar perfecto en el interior\ndel templo donde vive esa anciana\ntan misteriosa!")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf(/* textboxtype: 1, unk: 0, line: 55 */ "Muchacho, buscas las cuatro estrofas\nde una canción, ¿verdad?\n\n\nVeo que ahora debes ir a las tres...<pause 10>\ntres... ¡Sí, las tres regiones!\n\n\nPuedes ir en el orden que prefieras, \nporque allá donde vayas habrá\nalguien esperándote.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf(/* textboxtype: 1, unk: 0, line: 54 */ "Parece que por fin has encontrado\na la persona que buscabas. No sabes\ncuánto me alegro...\n\n¡Pero te aguardan aún más pruebas!\nHas de hablar con un gigantesco\nser que surca los cielos. \n\nLo mejor es que vayas a preguntar al\n<color red<director de la academia de caballeros>coloroff>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf(/* textboxtype: 1, unk: 0, line: 52 */ "Una vez más veo la sombra de\nun monstruo enorme...\n\n\nPor mucho que observe tu futuro,\nsiempre hay algo que me sorprende.\nNo sé cómo te las arreglas...\n\nBueno, disculpa, a lo que íbamos...\nChico, ¡solo puedo aconsejarte que\nte lleves un montón de <color red<pociones>coloroff>!")
          													goto flw_126
          												  case 1:
/*<183>*/ 													switch (story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */]) {
          													  case 0:
/*< 90>*/ 														switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          														  case 0:
/*< 92>*/ 															switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          															  case 0:
/*<179>*/ 																switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          																  case 0:
/*<180>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 51 */ "¡Ejem! ¡Ujum! Tienes por delante\nuna tarea de lo más compleja, chico!\n\n\nEn el interior de la montaña de fuego\nhará muchísimo calor, como siempre.\n¡Deberías llevarte un <color red<escudo de hierro>coloroff>!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf(/* textboxtype: 1, unk: 0, line: 50 */ "Te veo en la montaña de fuego\ntransportando la marmita.\n\n\nSi no lo haces, a lo mejor cierta\npersona las va a pasar canutas...")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf(/* textboxtype: 1, unk: 0, line: 49 */ "¡Ejem! ¡Ujum! ¡Problemas con el agua!\nLa falta de líquido elemento va a darte\nquebraderos de cabeza. Veo una gran\ncantidad de agua para llevar en esa...\n¡Pero chico, si ya sabes cuál es\nla marmita que necesitas para\ntransportar el agua!\n\nBueno, ve al bosque. Allí encontrarás\nlo que llevas tanto tiempo buscando.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf(/* textboxtype: 2, unk: 0, line: 65 */ "Hay un 60% de probabilidades de\nencontrar el objeto que buscamos\nen el bosque. Recomiendo explorar\nel lugar a conciencia.\n¿Desea el <0x10012:0x00000001>amo seleccionar la <sound 4><color red<marmita>coloroff>\ncomo objetivo de <color red<rastreo>coloroff>? \n\n[1-]Sí, gracias[2]Ahora no")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf(/* textboxtype: 2, unk: 0, line: 66 */ "<0x10012:0x00000005>Como el amo ordene. Procedo a añadir\nla <color red<marmita >coloroff>como objetivo de <color red<rastreo>coloroff>.\n\n\nLa exploración del lugar puede\ndar comienzo inmediatamente.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf(/* textboxtype: 2, unk: 0, line: 67 */ "<0x10012:0x00000005>Como el amo ordene. Procedo a\ncancelar la configuración\ndel rastreador.\n\nSi el amo desea volver a usar más tarde\nel rastreador, solo tiene que retomar\nsu conversación con esta persona.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Vaya! Has superado la prueba\ndel fuego sin grandes apuros.\nAunque preveo dificultades con\nel agua más adelante...\nLa falta de agua va a causarte\nproblemas. Cuando eso ocurra,\nven a verme.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf(/* textboxtype: 1, unk: 0, line: 47 */ "Chico, ¡¿pero cuántas pruebas de estas\npiensas realizar?!\n\n\nVeo fuego... ¡El <color red<umbral del juicio >coloroff>está\nen una montaña de fuego! ¡Un <color red<escudo\nde madera >coloroff>no te va a servir de nada\nen semejante lugar!")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf(/* textboxtype: 1, unk: 0, line: 44 */ "Veo el camino que has de seguir.\n¡Parece que debes aprender una\n<color red<canción >coloroff>en algún lugar sagrado!\n\n¡Pero se trata de un lugar en\nel que ya has estado antes!\n\n\nEso es lo que veo... Un lugar\nsagrado entre las nubes.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 46 */ "¡Ejem! ¡Ujum! Veo que has conseguido\nsuperar sin mayores contratiempos una\nprueba harto complicada en un lugar\nbañado por las arenas...\nY a continuación veo aún más arena...\nun auténtico <color red<mar>coloroff>...<pause 20> y un <color red<barco>coloroff>...<pause 20> y...\nlo demás está muy borroso... En fin,\nque vayas a un lugar con mucha arena.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 45 */ "¡La bola me dice que el <color red<umbral del\njuicio >coloroff>se halla en un lugar cubierto\nde arena!\n\nEso es lo que veo... Tu próximo destino\nes un lugar con mucha arena, chico.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Veo el camino que has de seguir.\n¡Parece que debes aprender una\n<color red<canción >coloroff>en algún lugar sagrado!\n\n¡Pero se trata de un lugar en\nel que ya has estado antes!\n\n\nEso es lo que veo... Un lugar\nsagrado entre las nubes.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 43 */ "¡Ejem! ¡Ujum! Veo que has conseguido\nsuperar sin mayores contratiempos una\nprueba harto complicada en un bosque\ndominado por la espesura...\nA continuación veo algo grande en\nmitad del bosque... algo muy grande,\nsí... ¡Un árbol! ¡Un <color red<árbol gigantesco>coloroff>!\nY alguien muy importante te espera...\nAdemás veo una estatua grandiosa...<pause 20>\nEn las profundidades de la tierra...<pause 20>\nArriba... abajo... todo es un lío...\nborroso, sí... muy borroso...\nPero vamos, ¡que yo volvía a ese bosque\ncuanto antes, chico!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Veo el camino que has de seguir.\nParece que deberás afrontar una\nprueba en un lugar de tenebrosa\noscuridad.\n¡Se le hiela a uno la sangre!... Pero así\nes el destino, chico. Debes ir al bosque,\nno queda otra. ¡Allí aguarda un juicio\nal que tu espíritu ha de someterse!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 41 */ "Haz que las dos hojas de viento miren\nhacia la gran torre. Después, toca\nuna melodía en lo alto de la torre\npara ver la luz.\n¡Habrás de dirigirte al lugar hacia el\nque apunte esa luz!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf(/* textboxtype: 1, unk: 0, line: 38 */ "¡Ejem! ¡Ujum! Veo que andas buscando\nalgo...\n\n\nUna hélice que ha caído de las alturas\ny yace en alguna parte... ¿verdad?\n¡Sí! ¡El rotor del molino!\n\nMmm... Veo <color red<una montaña de fuego>coloroff>...\n¡<color red<Un poco más abajo del templo>coloroff> que hay\nallí, descendiendo por las faldas de la\nmontaña, hallarás lo que buscas!\n¿Una montaña de fuego?\n¿De verdad existe algo así?...")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf(/* textboxtype: 2, unk: 0, line: 68 */ "")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf(/* textboxtype: 2, unk: 0, line: 69 */ "")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf(/* textboxtype: 2, unk: 0, line: 70 */ "")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 40 */ "¡Ejem! ¡Ujum! En estos momentos\nnecesitas ayuda para arreglar cierto\nobjeto... ¡Veo<0x10006:0xfbcd>...<0x10006:0x00cd> una <color yellow<flor arcana>coloroff>!\n\nUna flor que germinó hace mucho\ntiempo en la <color red<región de las arenas>coloroff>...<pause 20>\n¡Peina las dunas en busca de la flor!")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 39 */ "¡Ejem! ¡Ujum!\nVeo un edificio con una especie\nde hojas gigantescas. Tiene que\nver con el viento, con girar...\n¡¿Al lanzar aire hacia un edificio con\ngrandes hojas de viento haces que\ngire?! No, son dos edificios... Y parece\nque deben girar hacia una torre.")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf(/* textboxtype: 1, unk: 0, line: 64 */ "¡Vaya! Has superado un importante\nobstáculo y se te ve de buen humor.\n\n\nTu siguiente paso es...<pause 30> ¡Oh!\n El <color red<Cántico de la Diosa>coloroff>, nada menos...<pause 30>\n¿Quién podría decirte algo sobre\nese cantar?...\nEn la bola de cristal veo que debes ir\na hablar con el <color red<director de la academia\nde caballeros>coloroff>.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 36 */ "¡Ejem! ¡Ujum!\nYa veo adónde te diriges, chico...\n\n\n¿Algo grande que despierta de su\nletargo? Mmm... <pause 30>Algo grande...<pause 20> Sea lo\nque sea, ¡es enorme! <pause 40>¡Descomunal!\n\nEn la bola de cristal veo que cuantas\nmás <color red<pociones de salud>coloroff> lleves, más\nposibilidades tendrás de salir airoso.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf(/* textboxtype: 1, unk: 0, line: 35 */ "¡Ya veo adónde vas a ir, chico!\n¡¿Arena?! ¿Un cajón de arena?\n¿Un cajón de arena gigante?\n\nSea lo que sea, es un lugar desolado\ndonde tendrás algún problemilla\ncon la electricidad...\n\nEl metal más bien te va a estorbar,\nasí que mejor te olvidas de escudos\nde hierro. Necesitarás un <color red<escudo de\nmadera >coloroff>o algo de mejor calidad...\nTambién vas a tener que usar muchas\nbombas. Necesitarás tener espacio\nsuficiente en tu <color red<saco de bombas>coloroff>.")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 34 */ "Chico, tienes pensado ir a... ¡Lo veo!...\n¡¿Fuego abrasador?! ¡Sí, eso es!\n¡A un lugar muy caluroso!\n\nSería un despropósito llevarse\nun escudo de madera allí...\n¡Hierro! ¡Lo que necesitas para\nprotegerte es un <color red<escudo de hierro>coloroff>!\nMmm... Y tampoco te vendría mal\nllevarte una <color red<poción de salud para\nrecuperar corazones>coloroff>.")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Chico, ¿tienes previsto viajar a un\ndenso bosque? ¿A una zona de gran\nvegetación? ¡Es lo que veo! ¡Árboles!\n¡Muchos árboles!\n<pause 20>Sí... <pause 10>Hay muchos árboles, así que\nyo de ti llevaría un buen <color red<escudo de\nmadera>coloroff> para ir a juego con el entorno.\n\nY como todavía se te ve un poco verde,\ntambién conviene que te lleves una\n<color red<poción de salud>coloroff> o algo por el estilo.")
/*< 83>*/ 																								entrypoint_111_05();
          																							}
          																						}
          																					}
          																				}
          																			}
          																		}
          																	}
          																}
          															}
          														}
          													}
          												}
          											}
          										}
          									}
          								  case 1:
          									goto flw_71
          								}
          							  case 1:
          								goto flw_71
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 31>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 12}
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000003>Veo una intensa luz que guía tus pasos\na través de tu peligroso camino...\nSi lo deseas puedo leerte el futuro.\nSolo te costará <color red<10 rupias >coloroff>de nada. \n¡Ejem! ¡Ujum! ¿Empezamos?\nSon <color red<10 rupias>coloroff>. ¿Qué me dices?\n\n[1-]Adelante[2]No, gracias")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "¡Ejem! ¡Ujum! ¿Qué quieres saber\nsobre tu futuro, chico?\n\n[1-]Adónde ir[2-]Tesoros")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "¡Espléndido! Pues vamos a ello...\n¡Ejem! ¡Ujum! \n¡A ver qué me dice la bola!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							wait_frames(160)
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "¡Ejem! ¡Ujum!\n¡Lo veo! ¡Lo veo todo!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf(/* textboxtype: 1, unk: 0, line: 16 */ "Espléndido...\n¡Voy a contarte lo que veo!")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00090909>¡Pero bueno, chico! ¡Si estás pelado!\n\n\n\nNo pretenderás aprovecharte de estos\nenormes y cristalinos ojos míos para\nque te lean el futuro por tu cara bonita,\n¿verdad?")
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090900>Conque esas tenemos, ¿eh? ¡Pues como\nalgún día necesites de mis poderes\nadivinatorios, ni se te ocurra venir a\npedirme nada! Pche, vaya un listillo...")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>¡Ejem! ¡Ujum!\n¡Veamos qué es lo que te depara\nel futuro, chico!\n\nMi tarifa habitual es de 10 rupias,\npero por ser hoy voy a cobrarte\nsolo <color red<1 rupia>coloroff>.\n\n¿Te interesa saber lo que el destino\nte tiene preparado por <color red<1 rupia>coloroff>?\n\n[1-]¡Vale![2]No, gracias")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>¡Sabía que no me fallarías!\nA decir verdad, eres el primer cliente\nque tengo en mucho tiempo, ¿sabes?\n\nPero<0x10006:0xfdcd>... <0x10006:0x00cd>eso no significa que mis artes\nadivinatorias dejen nada que desear.\n¡Puedes confiar en estos enormes\ny cristalinos ojos míos!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00090909>¡Pero bueno, chico! Que no tienes ni\nuna rupia... Anda, vete de aquí...\n¡La caridad no es lo mío!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000007>¡¿Pero qué me dices?! ¿Cómo tienes\nla desfachatez de responder así a mi\nbondadosa oferta, jovencito?\n\n¿Qué pasa, no te fías de estos enormes\ny cristalinos ojos míos? Mira que igual\nla próxima vez no soy tan generoso...\n\n¡Ejem! ¡Ujum! ¿En serio no quieres que\nte lea el futuro?\n\n[1-]Va, venga[2]¡Que no!")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "Hay que ver lo terco que eres, chico...\n¡Me da a mí que lo que pasa es que no\ncrees en esto de la clarividencia!\n\nSi te va a venir de maravilla...\n¿En serio no quieres saber lo que te\ndepara el futuro, jovencito?\n[1-]Vale, vale[2]¡Pesado!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00090909>¡Ejem! ¡Ujum! De acuerdo...\nEres uno de esos escépticos, ¿no?\n¡Pues luego no vengas todo apurado\na pedirme ayuda!... <0x10008:0xfecd>¡Grrr! ¡Listillo!...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000002>¿Pero... pero esto?...\n¡Uy, uy, uy!...\n\n\nAcabo de recibir una visión del todo\ndesasosegante...\n\n\nTienes ante ti un camino repleto de\npeligros, chico... Créeme, yo sé lo que\nel destino te depara. ¡Que por algo\nsoy vidente!\nHarías bien en prestar oído a lo que\nte digo... ¡Vamos, ven aquí a mi vera!\nConfía en estos <0x10006:0xfccd><color red<enormes y >coloroff><color red<cristalinos\nojos míos>coloroff>...<0x10006:0x00cd> y en mi dulce voz.")
          }

          void entrypoint_111_03() {
/*< 48>*/ 	start()
          	goto flw_160
          }

          void entrypoint_111_04() {
/*< 53>*/ 	start()
          	goto flw_19
          }

          void entrypoint_111_05() {
/*< 82>*/ 	start()
/*<130>*/ 	switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          	  case 0:
/*<131>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Además, si estás buscando una <color red<planta>coloroff>,\nveo un <color red<bosque>coloroff> muy frondoso... <0x10006:0xfbcd>Mmm...\nEso de «bosque»...<0x10006:0x00cd> ¿Qué será?")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 61 */ "¡Ejem! ¡Ujum! Veo que estás buscando\na alguien que sepa cultivar un huerto.\n\n\n¡No vas a encontrar a esa persona\naquí en Altárea!\n\n\n¡Tendrás que ir a las <color red<cuevas >coloroff>donde\nmoran <color red<los expertos en excavaciones>coloroff>!\nAllí darás con la persona idónea para\nel trabajo.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "¡Ejem! ¡Ujum! ¡Oh! ¡Sí, sí, lo veo!\nBuscas algo que se ha perdido, una\ncosa brillante que da vueltas...\n\n¡Veo un <color red<lugar desértico, con arena>coloroff>!\nEncontrarás el objeto en un lugar\nrecóndito y poco accesible.")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000012>¡Ejem! ¡Ujum! Por el momento esto es\ntodo lo que puedo contarte. ¡Si vuelves\na perderte en tu camino, no dudes en\nacudir a mí!")
/*< 41>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>¡Ánimo chico, tú puedes!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "¡Ejem! ¡Ujum! Veo una persona que\nha perdido un insecto muy especial...\n\n\n¡En la bola de cristal veo que este\ninsecto se halla oculto en una isla\ndonde vive <color red<alguien que adora\nlos insectos>coloroff>!")
          						goto flw_33
          					}
          				  case 1:
          					goto flw_33
          				}
          			  case 1:
          				goto flw_170
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
          		goto flw_132
          	}
          }

          void entrypoint_111_06() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "¡Ejem! ¡Ujum! Conque tesoros, ¿eh?\nNo es que sean mi especialidad, pero\nbueno... ¡Vamos a intentarlo, a ver qué\nsacamos a la luz!")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	wait_frames(160)
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "¡Ejem! ¡Ujum!\n¡Lo veo! ¡Lo veo todo!")
/*<156>*/ 	printf(/* textboxtype: 1, unk: 1, line: 19 */ "Mmm, veamos...\nEl bosque... La región de las arenas...\nLa montaña de fuego... Monstruos...\n\n¿Qué tipo de tesoro te interesa?\n\n[1-]Bosque[2-]Arenas[3-]Montaña[4-]Monstruos")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "¡Ejem! ¡Ujum! Bien, ¡el bosque!\nLos tesoros que allí se pueden\nencontrar son la <color yellow<pluma de ave\n>coloroff>y las <color yellow<larvas de abeja>coloroff>.\n¡Para conseguir una <color yellow<pluma de\nave>coloroff>, debes atrapar un pajarito\ncon tu cazamariposas!\n\nY, según puedo ver, para conseguir\nlas <color yellow<larvas de abeja>coloroff> no tienes más\nque derribar uno de sus panales...\n\nEntre las plumas de los pajaritos\nse puede encontrar de cuando\nen cuando la <color red<pluma de ave azul>coloroff>,\nque según dicen da la felicidad.\nSi te topas con una, significa\nque eres un tipo muy afortunado.")
          		flw_155:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Y luego están la <color yellow<alhaja ambarina\n>coloroff>y la <color yellow<alhaja tenebrosa>coloroff>. Estas se\npueden encontrar en todas partes,\npor todas las regiones.\nPero por alguna razón, la <color yellow<alhaja\ntenebrosa >coloroff>solo se encuentra\ndurante los juicios del espíritu.\n\nDe entre todos los tesoros, ¡el más\ndifícil de encontrar es el legendario\n<color yellow<objeto perdido de la Diosa>coloroff>!\n\nChico, quien logre dar con uno de\nesos sí que es un tipo con suerte.")
/*<157>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000012>¡Ejem! ¡Ujum! Por el momento esto es\ntodo lo que puedo contarte. ¡Si vuelves\na perderte en tu camino, no dudes en\nacudir a mí!")
/*<158>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>¡Ánimo chico, tú puedes!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "¡Ejem! ¡Ujum! Bien, ¡la región\nde las arenas! Los tesoros que\nallí se pueden encontrar son\nla <color yellow<planta rodadora >coloroff>y la <color yellow<flor arcana>coloroff>.\nPuedes atrapar una <color yellow<planta rodadora\n>coloroff>con un cazamariposas cuando\nla veas pasar rodando ante ti.\n\nEn cuanto a la <color yellow<flor arcana>coloroff>, como su\nnombre indica, puedes encontrarla\nvolviendo a una época remota.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "¿Quieres saber lo que puedes hallar\nen la montaña de fuego?\n¡Ejem! ¡Ujum! Veamos...\n\nAllí se puede conseguir el <color yellow<mineral\nde Eldin >coloroff>y la <color yellow<cola de lagarto>coloroff>.\nAl escarbar en un hoyo, a veces\npuedes dar con un <color yellow<mineral de Eldin>coloroff>. \n\nY al derrotar a monstruos con\naspecto reptiliano tal vez puedas\nconseguir una <color yellow<cola de lagarto>coloroff>.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "¿Monstruos? ¡Ejem! ¡Ujum! A ver...\nTras derrotar a un monstruo, puedes\nconseguir tesoros como estos, cada uno\ncon sus características propias. \n<color yellow<Garras de monstruo>coloroff>, <color yellow<broches\ncalavéricos>coloroff>, <color yellow<ectoplasmas viscosos>coloroff>,\n<color yellow<cuernos de monstruo>coloroff>, entre otros...\n\nLas <color yellow<garras de monstruo >coloroff>suelen\nobtenerse de engendros voladores.\n\n\nLos <color yellow<broches calavéricos>coloroff> suelen\npertenecer a monstruos con\napariencia humanoide.\n\nLos <color yellow<ectoplasmas viscosos >coloroff>a menudo\nproceden de monstruos de constitución\nmás bien blandita.")
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Además, si ves por ahí algún monstruo\ncon un <color yellow<cuerno >coloroff>colgado del cinturón,\nprueba a darle un buen tirón y lo\nmismo consigues arrebatárselo.\nSin olvidar los <color yellow<cristales maléficos\n>coloroff>procedentes de monstruos que lanzan\npeligrosas maldiciones.\n\nY por último, ¡los broches calavéricos\nque encuentres a veces podrán ser\n<color yellow<broches calavéricos de oro>coloroff>!")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000002>¡Ejem! ¡Ujum!\n¡Espera un momento, chico!\n\n\nPor el aura que irradias, diría que\neres aficionado a eso de buscar\ntesoros de todo tipo, ¿me equivoco?\n\nPues yo podría ayudarte con mi bola\nde cristal a saber dónde puedes\nencontrar nuevos tesoros...")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>¡Ejem! ¡Ujum!\n¡Hola! ¡Te estaba esperando!\n\n\nPor la cara que tienes yo diría que\nquieres saber alguna cosa sobre\ntu futuro...")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "¡Pues para eso estoy aquí, para\nadivinar qué te depara el destino!\nAdemás la tarifa te la dejo a la mitad.\n¡Solo por ser tú, chico!\nBueno, ¿te leo el futuro?\nSon <color red<5 rupias>coloroff>.\n\n[1-]¡Vale![2]No, gracias")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090909>¡Ejem! ¡Ujum! ¡Pero bueno, chico!\n¡Me parece que estás sin blanca!\n\n\nPuedes suplicarme lo que quieras, pero\nno pienso hacerte más descuentos.\nLo siento, pero yo como de esto...\n¡ahorra un poco y ven otro día!")
          				}
          			  case 1:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090900>Conque esas tenemos, ¿eh? ¡Pues como\nalgún día necesites de mis poderes\nadivinatorios, ni se te ocurra venir a\npedirme nada! Pche, vaya un listillo...")
          			}
          		  case 1:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>¡Anda! Pero si eres...\n¡Tú ya has estado antes aquí!\nEres el muchacho aquel...\n\n¡Gracias a ti, he vuelto a poner en\nmarcha mi negocio! ¡Albricias!\n\n\nDime, chico...\n¿Quieres que te lea el futuro?\n¡A ti te lo dejo a mitad de precio!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00010703>¡Chico, gracias a ti mi vida está\nrebosante de felicidad! Aunque no sé\nsi a ti te irá tan bien...\n\n¡Si quieres averiguar cosas sobre\ntu vida, ven a verme al bazar cuando\nsea de día!")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010701>¡¿Qué horas son estas de venir?!<0x10006:0xfccd>...<0x10006:0x00cd>\n¡Yo de noche no leo ni el futuro\nni nada! ¡Ven a mi puesto del bazar \ncuando sea de día, haz el favor!")
          	}
          }

