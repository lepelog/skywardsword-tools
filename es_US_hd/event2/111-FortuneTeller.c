          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf("¿Cómo? ¡¿Te acabo de leer el futuro\ny ya estás aquí de vuelta?! ¿Acaso no\nte ha quedado clara mi predicción?\nSe supone que eres un caballero...\nEn fin, voy a repetírtela, ¡pero esta vez\npresta más atención!")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf("¿Se puede saber qué has estado\nhaciendo, muchacho?\n\n\n¡Veo que por tu culpa la isla de la Diosa\nha desaparecido!\n\n\nPero sé muy bien que tenías poderosas\nrazones para hacerlo. No ha sido\nla típica travesura de niño grande.\n\nEstá bien, muchacho... ¡Debes escoger\nel camino que creas conveniente!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf("¡Ejem! ¡Ujum! Veo que encontrarás lo\nque buscas en la isla de la Diosa.\n\n\nNo obstante, no será una empresa nada\nsencilla... Será mejor que vayas muy\nbien preparado, muchachito.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf("De modo que has salido victorioso\nde la última de tus pruebas...\n\n\nNo sé por qué he dicho \"última\"...\nHabrá sido una corazonada.\n\n\nY ahora, quieres saber lo que tienes \nque hacer con el objeto que\nconseguiste tras la prueba...\n\nEn algún lugar de Neburia hay una\n<r<estatua con forma de pájaro >>cuyos\n<r<ojos>> eran <r<dos>> <r<gemas>>... Pero ahora\nsolo tiene una de ellas engarzada. \nCreo que tú mismo la has visto\nalguna vez.\n\n\nSi le colocas en el ojo la gema\nque le falta, se abrirá ante ti\nel camino a seguir.")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf("¡Ujum! Deberás buscar el siguiente\n<r<umbral del juicio >>con la canción que\nte ha enseñado el ser gigantesco.\n\nVeo que la entrada de la siguiente\nprueba se encuentra en <r<algún lugar\nde Neburia>>...\n\nUf, si te digo la verdad, no tengo\nidea de lo que significa todo esto.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf("¡Oh! Veo que has conseguido obtener\ntres estrofas de la canción...\n¡Pues debes saber que la última la\ncustodia un gigantesco ser!\n¿Y bien? ¿A qué esperas para reunirte\ncon él?")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf("¡Ejem! ¡Ujum!\nVeo la tarea que tienes por delante,\nmuchacho...\n\nBuscas un lugar para plantar unas\nsemillas, ¿verdad? Pero no son\nunas semillas cualesquiera. ¡Necesitas\nplantarlas en un lugar especial!\n\x0E\x01\x06\x02\xFCCDMmm... Veo a una anciana misteriosa...\x0E\x01\x06\x02Í\n¡Hay un lugar perfecto en el interior\ndel templo donde vive esa anciana\ntan misteriosa!")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf("Muchacho, buscas las cuatro estrofas\nde una canción, ¿verdad?\n\n\nVeo que ahora debes ir a las tres...<pause0A>\ntres... ¡Sí, las tres regiones!\n\n\nPuedes ir en el orden que prefieras, \nporque allá donde vayas habrá\nalguien esperándote.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf("Parece que por fin has encontrado\na la persona que buscabas. No sabes\ncuánto me alegro...\n\n¡Pero te aguardan aún más pruebas!\nHas de hablar con un gigantesco\nser que surca los cielos. \n\nLo mejor es que vayas a preguntar al\n<r<director de la academia de caballeros>>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf("Una vez más veo la sombra de\nun monstruo enorme...\n\n\nPor mucho que observe tu futuro,\nsiempre hay algo que me sorprende.\nNo sé cómo lo haces...\n\nBueno, disculpa, a lo que íbamos...\nMuchacho, ¡solo puedo aconsejarte\nque te lleves muchas <r<pociones>>!")
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
/*<180>*/ 																	printf("¡Ejem! ¡Ujum! ¡Tienes por delante\nuna tarea de lo más compleja,\nmuchacho!\n\nEn el interior de la montaña de fuego\nhará muchísimo calor, como siempre.\n¡Deberías llevarte un <r<escudo de hierro>>!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf("Te veo en la montaña de fuego\ntransportando la marmita.\n\n\nSi no lo haces, a lo mejor cierta\npersona va a tener dificultades...")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf("¡Ejem! ¡Ujum! ¡Problemas con el agua!\nLa falta de líquido elemento va a darte\nquebraderos de cabeza. Veo una gran\ncantidad de agua para llevar en esa...\n¡Pero muchacho, si ya sabes cuál es\nla marmita que necesitas para\ntransportar el agua!\n\nBueno, ve al bosque. Allí encontrarás\nlo que llevas tanto tiempo buscando.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf("Hay un 60% de probabilidades de\nencontrar el objeto que buscamos\nen el bosque. Recomiendo explorar\nel lugar a conciencia.\n¿Desea el \x0E\x01\x12\x04\x00\x01amo seleccionar la <pling><r<marmita>>\ncomo objetivo de <r<rastreo>>? \n\n[1]Sí, gracias[2-]Ahora no")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Como el amo ordene. Procedo a añadir\nla <r<marmita >>como objetivo de <r<rastreo>>.\n\n\nLa exploración del lugar puede\ndar comienzo inmediatamente.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Como el amo ordene. Procedo a\ncancelar la configuración\ndel rastreador.\n\nSi el amo desea volver a usar más tarde\nel rastreador, solo tiene que retomar\nsu conversación con esta persona.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf("¡Vaya! Has superado la prueba del fuego\nsin grandes apuros. Aunque preveo\ndificultades con el agua más adelante...\n\nLa falta de agua va a causarte problemas.\nCuando eso ocurra, ven a verme.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf("Pero muchacho, ¡¿cuántas pruebas\nde estas piensas realizar?!\n\n\nVeo fuego... ¡El <r<umbral del juicio >>está\nen una montaña de fuego! ¡Un <r<escudo\nde madera >>no te va a servir de nada\nen semejante lugar!")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf("Veo el camino que has de seguir.\n¡Parece que debes aprender una\n<r<canción >>en algún lugar sagrado!\n\n¡Pero se trata de un lugar en\nel que ya has estado antes!\n\n\nEso es lo que veo... Un lugar\nsagrado entre las nubes.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf("¡Ejem! ¡Ujum! Veo que has conseguido\nsuperar sin mayores contratiempos una\nprueba muy complicada en un lugar\nbañado por las arenas...\nY a continuación veo aún más arena...\nun auténtico <r<mar>>...<pause14> y un <r<barco>>...<pause14> y...\nlo demás está muy borroso... En fin,\ndebes ir a un lugar con mucha arena.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf("¡La bola me dice que el <r<umbral del\njuicio >>se halla en un lugar cubierto\nde arena!\n\nEso es lo que veo... Tu próximo destino\nes un lugar con mucha arena, chico.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf("Veo el camino que has de seguir.\n¡Parece que debes aprender una\n<r<canción >>en algún lugar sagrado!\n\n¡Pero se trata de un lugar en\nel que ya has estado antes!\n\n\nEso es lo que veo... Un lugar\nsagrado entre las nubes.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf("¡Ejem! ¡Ujum! Veo que has conseguido\nsuperar sin mayores contratiempos una\nprueba muy complicada en un bosque\ndominado por la espesura...\nA continuación veo algo grande en\nmitad del bosque... algo muy grande,\nsí... ¡Un árbol! ¡Un <r<árbol gigantesco>>!\nY alguien muy importante te espera...\nAdemás veo una estatua grandiosa...<pause14>\nEn las profundidades de la tierra...<pause14>\nArriba... abajo... es muy confuso...\nborroso, sí... muy borroso...\nBueno, ¡el caso es que deberías volver\na ese bosque cuanto antes, chico!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf("Veo el camino que has de seguir.\nParece que deberás afrontar una\nprueba en un lugar de tenebrosa\noscuridad.\n¡¿No sientes escalofríos?!... Pero así\nes el destino, chico. Debes ir al bosque.\n¡Allí te aguarda un juicio al que tu\nespíritu debe someterse!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf("Haz que las dos hojas de viento miren\nhacia la gran torre. Después, toca\nuna melodía en lo alto de la torre\npara ver la luz.\n¡Tendrás que dirigirte al lugar hacia el\nque apunte esa luz!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf("¡Ejem! ¡Ujum! Veo que andas buscando\nalgo...\n\n\nUna hélice que ha caído de las alturas\ny yace en alguna parte... ¿verdad?\n¡Sí! ¡El rotor del molino!\n\nMmm... Veo <r<una montaña de fuego>>...\n¡<r<Un poco más abajo del templo>> que hay\nallí, descendiendo por las faldas de la\nmontaña, hallarás lo que buscas!\n¿Una montaña de fuego?\n¿De verdad existe algo así?...")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf("")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf("")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf("")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf("¡Ejem! ¡Ujum! En estos momentos\nnecesitas ayuda para arreglar cierto\nobjeto... ¡Veo\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í una <y<flor arcana>>!\n\nUna flor que germinó hace mucho\ntiempo en la <r<región de las arenas>>...<pause14>\n¡Peina las dunas en busca de la flor!")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf("¡Ejem! ¡Ujum!\nVeo un edificio con una especie\nde hojas gigantescas. Tiene que\nver con el viento, con girar...\n¡¿Al lanzar aire hacia un edificio con\ngrandes hojas de viento haces que\ngire?! No, son dos edificios... Y parece\nque deben girar hacia una torre.")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf("¡Vaya! Has superado un importante\nobstáculo y se te ve de buen humor.\n\n\nTu siguiente paso es...<pause1E> ¡Oh!\nEl <r<Cántico de la Diosa>>, nada menos...<pause1E>\n¿Quién podría decirte algo sobre\nese cantar?...\nEn la bola de cristal veo que debes ir\na hablar con el <r<director de la academia\nde caballeros>>.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf("¡Ejem! ¡Ujum!\nYa veo adónde te diriges, muchachito...\n\n\n¿Algo grande que despierta de su\nletargo? Mmm... <pause1E>Algo grande...<pause14> Sea lo\nque sea, ¡es enorme! <pause28>¡Descomunal!\n\nEn la bola de cristal veo que cuantas\nmás <r<pociones de salud>> lleves, más\nposibilidades tendrás de salir airoso.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf("¡Ya veo adónde vas a ir, muchacho!\n¡¿Arena?! ¿Un cajón de arena?\n¿Un cajón de arena gigante?\n\nSea lo que sea, es un lugar desolado\ndonde tendrás algún problemilla\ncon la electricidad...\n\nParece que el metal te va a estorbar,\nasí que mejor te olvidas de los escudos\nde hierro. Necesitarás un <r<escudo de\nmadera >>o algo de mejor calidad...\nTambién vas a tener que usar muchas\nbombas. Necesitarás tener espacio\nsuficiente en tu <r<saco de bombas>>.")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf("Oye, tienes pensado ir a... ¡Lo veo!...\n¡¿Fuego abrasador?! ¡Sí, eso es!\n¡A un lugar muy caluroso!\n\nSería muy poco conveniente llevar\nun escudo de madera allí...\n¡Hierro! ¡Lo que necesitas para\nprotegerte es un <r<escudo de hierro>>!\nMmm... Y tampoco te vendría mal\nllevar una <r<poción de salud para\nrecuperar corazones>>.")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf("Muchacho, ¿tienes previsto viajar a un\ndenso bosque? ¿A una zona de gran\nvegetación? ¡Es lo que veo! ¡Árboles!\n¡Muchos árboles!\n<pause14>Sí... <pause0A>Hay muchos árboles, así que yo\nque tú llevaría un <r<escudo de madera\n>>para combinar con el entorno.\n\nY como todavía estás un poco verde,\ntambién conviene que lleves una\n<r<poción de salud>> o algo por el estilo.")
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
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x03Veo una intensa luz que guía tus pasos\na través de tu peligroso camino...\nSi lo deseas puedo leerte el futuro.\nSolo te costará <r<10 rupias>>. \n¡Ejem! ¡Ujum! ¿Empezamos?\nSon <r<10 rupias>>. ¿Qué me dices?\n\n[1]Adelante[2-]No, gracias")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf("¡Ejem! ¡Ujum! ¿Qué quieres saber\nsobre tu futuro, muchacho?\n\n[1]Adónde ir[2]Tesoros")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf("¡Espléndido! Pues vamos a empezar.\n¡Ejem! ¡Ujum! \n¡A ver qué me dice la bola!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 40, 'param3': 6}
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf("¡Ejem! ¡Ujum!\n¡Lo veo! ¡Lo veo todo!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf("Espléndido...\n¡Voy a contarte lo que veo!")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x09\x909¡Pero, muchacho! ¡Si no tienes dinero!\n\n\n\nNo pretenderás aprovecharte de estos\nenormes y cristalinos ojos míos para\nque te lean el futuro gratis, ¿verdad?")
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x09\x900Conque esas tenemos, ¿eh? ¡Pues como\nalgún día necesites de mis poderes\nadivinatorios, ni se te ocurra venir a\npedirme nada! Bah, qué insolente...")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x03¡Ejem! ¡Ujum!\n¡Veamos qué es lo que te depara\nel futuro, muchacho!\n\nMi tarifa habitual es de 10 rupias,\npero por ser hoy voy a cobrarte\nsolo <r<1 rupia>>.\n\n¿Te interesa saber lo que el destino\nte tiene preparado por <r<1 rupia>>?\n\n[1]¡Claro![2-]No, gracias")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x00\n¡Sabía que no me fallarías!\nA decir verdad, eres el primer cliente\nque tengo en mucho tiempo, ¿sabes?\n\nPero\x0E\x01\x06\x02\xFDCD... \x0E\x01\x06\x02Íeso no significa que mis artes\nadivinatorias no den resultados.\n¡Puedes confiar en estos enormes\ny cristalinos ojos míos!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x09\x909¡Oye, muchacho! No tienes suficientes\nrupias... Anda, vete de aquí...\n¡La caridad no es lo mío!")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x07¡¿Pero qué me dices?! ¿Cómo tienes\nla desfachatez de responder así a mi\nbondadosa oferta, jovencito?\n\n¿Qué pasa, no te fías de estos enormes\ny cristalinos ojos míos? Puede que \nla próxima vez no sea tan generoso...\n\n¡Ejem! ¡Ujum! ¿En serio no quieres\nque te lea el futuro?\n\n[1]Bueeeno[2-]¡Que no!")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf("Eres bastante testarudo, muchacho.\n¡Me parece que lo que pasa es que no\ncrees en esto de la clarividencia!\n\nTe va a ser utilísimo...\n¿En serio no quieres saber lo que te\ndepara el futuro, jovencito?\n[1]Bueno[2-]¡Pesado!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x09\x909¡Ejem! ¡Ujum! De acuerdo...\nEres uno de esos escépticos, ¿no?\n¡Pues luego no vengas todo preocupado\na pedirme ayuda!... \x0E\x01\x08\x02\xFECD¡Grrr!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x02¿Pero... pero qué es esto?...\n¡Uy, uy, uy!...\n\n\nAcabo de recibir una visión muy\ninquietante...\n\n\nTienes ante ti un camino repleto de\npeligros, muchacho... Créeme, yo sé\nlo que el destino te depara. ¡Por algo\nsoy vidente!\nHarías bien en prestar oído a lo que\nte digo... ¡Vamos, ven aquí a mi lado!\nConfía en estos \x0E\x01\x06\x02\xFCCD<r<enormes y >><r<cristalinos\nojos míos>>...\x0E\x01\x06\x02Í y en mi dulce voz.")
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
/*<131>*/ 		printf("Además, si estás buscando una <r<planta>>,\nveo un <r<bosque>> muy frondoso... \x0E\x01\x06\x02\xFBCDMmm...\nEso de \"bosque\"...\x0E\x01\x06\x02Í ¿Qué será?")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf("¡Ejem! ¡Ujum! Veo que estás buscando\na alguien que sepa cultivar un huerto.\n\n\n¡No vas a encontrar a esa persona\naquí, en Neburia!\n\n\n¡Tendrás que ir a las <r<cuevas >>donde\nmoran <r<los expertos en excavaciones>>!\nAllí hallarás a la persona idónea para\nel trabajo.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf("¡Ejem! ¡Ujum! ¡Oh! ¡Sí, sí, lo veo!\nBuscas algo que se ha perdido, una\ncosa brillante que da vueltas...\n\n¡Veo un <r<lugar desértico, con arena>>!\nEncontrarás el objeto en un lugar\nrecóndito y poco accesible.")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf("\x0E\x01\x09\x04\x00\x12¡Ejem! ¡Ujum! Y esto es todo lo que\npuedo contarte por el momento.\n¡Si te pierdes en tu camino, no dudes\nen acudir a mí!")
/*< 41>*/ 						printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0D¡Ánimo muchacho, puedes hacerlo!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf("¡Ejem! ¡Ujum! Veo una persona que\nha perdido un insecto muy especial...\n\n\n¡En la bola de cristal veo que este\ninsecto se halla oculto en una isla\ndonde vive <r<alguien que adora\nlos insectos>>!")
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
/*<144>*/ 	printf("¡Ejem! ¡Ujum! Conque tesoros, ¿eh?\nNo es que sean mi especialidad, pero\nbueno... ¡Vamos a intentarlo, a ver qué\nsacamos a la luz!")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 149, 'param3': 6}
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf("¡Ejem! ¡Ujum!\n¡Lo veo! ¡Lo veo todo!")
/*<156>*/ 	printf("Mmm, veamos...\nEl bosque... La región de las arenas...\nLa montaña de fuego... Monstruos...\n\n¿Qué tipo de tesoro te interesa?\n[1]Bosque[2]Arenas[3]Montaña[4]Monstruos")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf("¡Ejem! ¡Ujum! Bien, ¡el bosque!\nLos tesoros que allí se pueden\nencontrar son la <y<pluma de ave\n>>y las <y<larvas de abeja>>.\n¡Para conseguir una <y<pluma de\nave>>, debes atrapar un pajarito\ncon tu cazamariposas!\n\nY, según puedo ver, para conseguir\nlas <y<larvas de abeja>> no tienes más\nque derribar uno de sus panales...\n\nEntre las plumas de los pajaritos\nse puede encontrar de vez en\ncuando la <r<pluma de ave azul>>,\nque según dicen da la felicidad.\nSi te topas con una, significa\nque eres un tipo muy afortunado.")
          		flw_155:
/*<155>*/ 		printf("También existen la <y<alhaja ambarina\n>>y la <y<alhaja tenebrosa>>. Estas se\npueden encontrar en todas partes,\npor todas las regiones.\nPero por alguna razón, la <y<alhaja\ntenebrosa >>solo se encuentra\ndurante los juicios del espíritu.\n\nDe entre todos los tesoros, ¡el más\ndifícil de encontrar es el legendario\n<y<objeto perdido de la Diosa>>!\n\nMuchacho, si logras encontrar uno de\nesos sí que serás un tipo con suerte.")
/*<157>*/ 		printf("\x0E\x01\x09\x04\x00\x12¡Ejem! ¡Ujum! Y esto es todo lo que\npuedo contarte por el momento.\n¡Si te pierdes en tu camino, no dudes\nen acudir a mí!")
/*<158>*/ 		printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0D¡Ánimo muchacho, puedes hacerlo!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf("¡Ejem! ¡Ujum! Bien, ¡la región\nde las arenas! Los tesoros que\nse pueden encontrar allí son\nla <y<planta rodadora >>y la <y<flor arcana>>.\nPuedes atrapar una <y<planta rodadora\n>>con un cazamariposas cuando\nla veas pasar rodando ante ti.\n\nEn cuanto a la <y<flor arcana>>, como su\nnombre indica, puedes encontrarla\nvolviendo a una época remota.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf("¿Quieres saber lo que puedes hallar\nen la montaña de fuego?\n¡Ejem! ¡Ujum! Veamos...\n\nAllí se puede conseguir el <y<mineral\nde Eldin >>y la <y<cola de lagarto>>.\nAl escarbar en un hoyo, a veces\npuedes hallar un <y<mineral de Eldin>>. \n\nY al derrotar a monstruos con\naspecto reptiliano tal vez puedas\nconseguir una <y<cola de lagarto>>.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf("¿Monstruos? ¡Ejem! ¡Ujum! A ver...\nTras derrotar a un monstruo, puedes\nconseguir tesoros como estos, cada uno\ncon sus características propias. \n<y<Garras de monstruo>>, <y<broches\ncalavéricos>>, <y<ectoplasmas viscosos>>,\n<y<cuernos de monstruo>>, entre otros...\n\nLas <y<garras de monstruo >>suelen\nobtenerse de enemigos voladores.\n\n\nLos <y<broches calavéricos>> suelen\npertenecer a monstruos con\napariencia humanoide.\n\nLos <y<ectoplasmas viscosos >>a menudo\nproceden de monstruos de constitución\nblanda.")
/*<207>*/ 		printf("Además, si ves por ahí algún monstruo\ncon un <y<cuerno >>colgado del cinturón,\nes posible que consigas arrebatárselo\ncon un buen tirón.\nSin olvidar los <y<cristales maléficos\n>>procedentes de monstruos que lanzan\npeligrosas maldiciones...\n\nY por último, ¡los broches calavéricos\nque encuentres a veces podrán ser\n<y<broches calavéricos de oro>>!")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x02¡Ejem! ¡Ujum!\n¡Espera un momento, muchacho!\n\n\nPor el aura que irradias, diría que\neres aficionado a eso de buscar\ntesoros de todo tipo, ¿me equivoco?\n\nPues yo podría ayudarte con mi bola\nde cristal a saber dónde puedes\nencontrar nuevos tesoros...")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\n¡Ejem! ¡Ujum!\n¡Hola! ¡Te estaba esperando!\n\n\nPor la cara que tienes yo diría que\nquieres saber alguna cosa sobre\ntu futuro...")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf("¡Pues para eso estoy aquí, para\nadivinar qué te depara el destino!\nAdemás te dejo la tarifa a la mitad.\n¡Solo por ser tú, muchachito!\nSon <r<5 rupias>>.\n[1]¡Bueno![2-]No, gracias")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x09\x909¡Ejem! ¡Ujum! ¡Qué pena, muchacho!\n¡No tienes suficiente dinero!\n\n\nPuedes suplicarme lo que quieras, pero\nno pienso hacerte más descuentos.\nLo siento, pero yo como de esto...\n¡ahorra un poco y ven otro día!")
          				}
          			  case 1:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x09\x900Conque esas tenemos, ¿eh? ¡Pues como\nalgún día necesites de mis poderes\nadivinatorios, ni se te ocurra venir a\npedirme nada! Bah, qué insolente...")
          			}
          		  case 1:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x00\n¡Oye! Pero si eres...\n¡Tú ya has estado aquí antes!\nEres el muchacho aquel...\n\n¡Gracias a ti, he vuelto a poner en\nmarcha mi negocio! ¡Qué alegría!\n\n\nDime, muchacho...\n¿Quieres que te lea el futuro?\n¡A ti te lo dejo a mitad de precio!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x703¡Muchacho, gracias a ti mi vida está\nrebosante de felicidad! Aunque no sé\nsi a ti te irá tan bien...\n\n¡Si quieres averiguar cosas sobre\ntu vida, ven a verme al bazar cuando\nsea de día!")
          	  case 1:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x01\x701¿Por qué vienes a estas horas?\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\n¡Yo de noche no leo ni el futuro\nni nada! ¡Ve a mi puesto del bazar\ncuando sea de día, por favor!")
          	}
          }

