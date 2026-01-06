          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10008:0x01cd>¡A volar!<0x10005:0x000f0000>")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>La efigie de la Diosa ha desaparecido,\npero eso no significa que la propia\nDiosa nos haya abandonado...\n¿No crees, <heroname>?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000001>Estás madurando deprisa, muchacho...\nEspero que sigas por el buen camino.")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000001>¿Cómo dices?<pause 40> ¿Que si he oído hablar\nalguna vez de Narisha?\n\n\nPues sí, pero no soy lo que se dice una\nautoridad en la materia. Lo siento,\nmuchacho... me temo que no voy a\nresultarte de mucha ayuda.\nTe aconsejo que lo consultes con el\n<color blue<maestro Asteus>coloroff>. A él este tipo de temas\nle apasionan.")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x00000001>Miwi es un primor, ¿verdad que sí?<pause 30>\n¿Cómo? ¿La Trifuerza, dices?...<pause 40>\n¿Y qué tiene que ver eso con Miwi,\nsi puede saberse?")
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00000001>Si empecé a cuidar de Miwi fue solo\nporque me lo pidió el director, sí,\npero...\n\n¡No me digas que no es una monada de\nmascota! Me dan unas ganas tremendas\nde quedármelo...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 153, 'param3': 50}
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 150, 'param3': 49}
/*<150>*/ 	make_actor_do_something(0, 10)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x1000D:0x1906><0x10008:0x01cd>¡Eh, <heroname>!\n¡Aquí! ¡Arriba!")
/*< 57>*/ 	set_camera(11, 0)
/*<244>*/ 	make_actor_do_something(1, 10)
/*<213>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 261, 'param3': 17}
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0a0e0a01>¡Buenos días, <heroname>!\n¡Es una alegría inmensa para mí que\nte hayas decidido a afrontar el reto\ndel <color red<modo Héroe>coloroff>!\nEn fin, hoy se celebra el <color red<torneo celeste>coloroff>.\n¿Cómo estás? ¿Va todo bien?\n\n\nNecesito hablar contigo de una cosa,\nde modo que mantén pulsado (Z) para\nmirar hacia aquí y, seguidamente,\npulsa (A) para hablar conmigo.<0x10011:0x07cd>")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10011:0x07cd><0x10009:0x0a0e0a01>Muy buenas, <heroname>. ¿Qué,\nte ves con fuerzas para el <color red<torneo\nceleste >coloroff>de hoy?\n\nPor cierto, tengo que decirte una cosa.\nMira hacia aquí manteniendo pulsado\n(Z) y después pulsa (A) para hablar\nconmigo.")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 187, 'param3': 13}
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10008:0x01cd>¡Eh, <heroname>!")
/*<188>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x1000A:0x001200cd><0x10009:0x000a0202>Ni siquiera tú puedes subirte a ese\ntejado solo a base de <color green<correr >coloroff>con (A),\n¡está demasiado alto!")
/*<191>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 193, 'param3': 17}
/*<193>*/ 	wait_frames(15)
/*<189>*/ 	set_camera(19, 0)
/*<230>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Ahí al lado hay una caja, ¿no?\nSi la <color green<coges>coloroff> y la <color green<mueves>coloroff> con (A) te puede\nservir como punto de apoyo para\nsubirte. \nPuedes subirte a ella o bien <color green<corriendo\n>coloroff>con (A) o, simplemente, con (StickUp).")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x000b0a03>Bueno, ya veo que controlas a la\nperfección lo de <color green<correr>coloroff> con (A).\n\n\nEso sí, no te emociones demasiado\nporque el <color red<indicador de resistencia >coloroff>se\nirá vaciando y al rato estarás al borde\ndel síncope.\nY bien, ¿no querrás por un casual que\nsiga contándote cosas interesantes?\n[1-]Por favor[2]Ya me lo\nsé todo")
/*<270>*/ 		switch (choice(2)) {
          		  case 0:
/*<271>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "Puedes salvar esa distancia con\nfacilidad. Lo único que tienes que\nhacer es encaminarte hacia el borde\ny saltarás. ¡Para ti será sencillo!\nEs lo que se llama un <color green<salto automático>coloroff>.\nAutomático<0x10006:0xfccd>...<pause 15><0x10006:0x00cd> ¡Mira que me gusta esa\npalabra!")
          		  case 1:
/*<269>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Entonces ven aquí ahora mismo.")
          		}
          	  case 1:
/*<266>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000b0a03>Qué, es útil eso de <color green<correr >coloroff>con (A),\n¿verdad?\n\n\nEso sí, no te emociones demasiado\nporque el <color red<indicador de resistencia >coloroff>se\nirá vaciando y al rato te quedarás\nderrengado y al borde del síncope.\nCuando veas que el indicador anda bajo\nmínimos, lo mejor es que te pares a\ndescansar un poco.\n\nBien, a lo que íbamos.\n\n\n\nUna distancia así puedes <color green<saltarla\nautomáticamente >coloroff>con solo ir andando\nen esa misma dirección.\nMmm, «automáticamente»<0x10006:0xfccd>...<0x10006:0x00cd>\nMe encanta esa palabra.")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00000001>Tranquilo, no empezaremos con el\ntorneo hasta que encuentres a tu\npelícaro. Tienes mi palabra.\n\nPero no pierdas más tiempo y ponte\na buscarlo de una vez.")
          	  case 1:
/*<212>*/ 		printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000001>Al final se ha decidido aplazar el\ntorneo hasta que encuentres a tu\npelícaro. Es una buena noticia, ¿no?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 2, line: 44 */ "<0x10009:0x000b0a52>Escucha, <heroname>...\n¡Te la estás jugando!\n¡Haz el favor de obedecer a tu maestro!\n\nMira hacia aquí manteniendo pulsado\n(Z) y contéstame con (A), he dicho.<0x10011:0x07cd>")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>¡Ah, <heroname>!\n¿Qué tal? ¿Va todo bien?\n\n\nSi necesitas algún consejo, no dudes\nen venir a verme cuando quieras.")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000001>El tirabuzón aéreo también es una\ntécnica muy exigente para el propio\npelícaro. Requiere gran fortaleza y\nprecisión.\nAunque, tratándose de tu pelícaro rojo,\nno creo que tenga mayor problema...")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000005>¿Eh? Oh, <heroname>...\nSon las tantas de la madrugada...\n¿Se puede saber qué quieres?\n\n¡¿Cómo?! ¿El gran Narisha?...\nPor favor, estas no son horas para\nponernos a hablar de eso...\n\nVuelve por la mañana y te contaré todo\nlo que quieras saber, ¿de acuerdo?")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>¿Cómo va, <heroname>?\n¿Crees que podrás dar con Zelda?\n\n\nBueno, por lo que a mí respecta, estoy\nseguro de que al final lograrás traerla\nde vuelta sana y salva.")
          				  case 1:
/*<218>*/ 					printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00000001>Ahora no puedes salir a buscar a Zelda\ny lo sabes... Los pelícaros no vuelan de\nnoche.\n\nLo mejor es que te acuestes, descanses\ny partas mañana cuando haya salido el\nsol.\n\nIncluso en momentos como este es\nimportante saber cuándo pararse a\ndescansar y aclarar un poco las ideas.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x000a0a00><0x10008:0x02cd>¿Qué pasa,\n<heroname>?\n\n\n<0x10008:0x02cd>¡Te estoy esperando!")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000002>¡<heroname>, deja de perder\nel tiempo, hombre! ¿Dónde tienes\ntú la cabeza?\n\n¡Haz el favor de ponerte a buscar a tu\npelícaro! Empieza por preguntar a los\ndemás alumnos, vamos.")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000002>¡<heroname>!\n¿Se puede saber qué haces paseando\ntan campante delante de las narices\ndel maestro?\nVen aquí, que te voy a leer la cartilla,\njovencito.")
          		  case 1:
/*<233>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000002>¡Oye, <heroname>!\n¿Qué es eso de pasar sin saludar\na tu maestro?\n\n¿Pretendes que me crea que no me\nhas visto? Haz el favor de venir aquí\nque te voy a decir un par de cosas,\njovencito.")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 77, 'param3': 31}
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Oh, <heroname>...\nDime, ¿cómo va la búsqueda de Zelda?\n¿Has dado con su paradero?\n\n<0x10009:0x00000005>¿Cómo dices?<pause 40> ¿El gran Narisha?...\nAjá. Te lo ha contado el director,\n¿no es así?\n\nPues verás... En efecto, el gran Narisha\nse encontraba en el interior de aquel\ncúmulo.\n\nPero<0x10006:0xfecd>...<0x10006:0x00cd><pause 25> no era el Narisha que nosotros\nconocemos.\n\n\n<0x10006:0xfecd>No...<pause 40><0x10006:0x01cd> Lo que allí me encontré era un\n<color red<monstruo diabólico>coloroff>.\n\n\n<0x10009:0x0000000f>Su aspecto era el mismo, sin duda...\nPero, al acercarme, se lanzó a por mí\nen toda su inmensidad.\n\nTe aseguro que vi claramente el brillo\nde la maldad en sus ojos.\n\n\nDicen que todos cambiamos con <0x10006:0xfecd>el\ntiempo...<0x10006:0x00cd><pause 25> Pero esto es excesivo.\n<pause 25>Me da la sensación de que hay algo\nmás que no sabemos.")
/*<203>*/ 			wait_frames(40)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000005>¿Cómo?<pause 40> ¿Que quieres hablar con\nNarisha?\n\n\n<0x10006:0xfecd>Me temo que...<0x10006:0x00cd> no va a ser posible.\nNarisha ha enloquecido. \nNo atiende a razones ni comprende\nlo que le decimos.\n<0x10006:0xfecd>Hazme caso...<0x10006:0x00cd> Si se te ocurre acercarte\na él, acabarás hecho pedazos en el\nfondo del mar de nubes.")
/*<204>*/ 			wait_frames(40)
/*<201>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000052>¡¿Cómo?!<pause 40> ¿Piensas ir de todos modos?\n\n\n\n<0x10006:0xfecd>Ya veo...<0x10006:0x00cd> Debes hacerlo para encontrar\na Zelda, claro...\n\n\nEstá bien...<pause 30> No intentaré detenerte;\ndiga lo que diga, me temo que no vas\na escucharme.")
/*<205>*/ 			wait_frames(30)
/*<202>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Muy bien, ¡ven conmigo!\nTengo una idea.\n")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n<pause 30>¿Cómo?... ¿La Trifuerza, dices?\n\n\nPues, la verdad, no sé ni de qué me\nestás hablando. Lo mejor será que\nlo consultes con el director. Quizá\nél pueda ayudarte...")
          			  case 1:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000001>Oh, <heroname>...\n¿Cómo va la búsqueda de Zelda?\n\n\nMe sabe mal que tengas que\nencargarte tú solo de todo...\n¡Aunque estoy seguro de que la\ntraerás de vuelta!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000002>Dentro de aquel nubarrón, me dio\nla sensación de que algo maléfico\nestaba poseyendo a Narisha.\n\nSi logramos extirparle esa especie\nde maldición, tal vez vuelva a ser\nel Narisha de siempre.\n\nPresta mucha atención, voy a confiarte\nuna técnica secreta de equitación\nceleste...\n\n<0x10009:0x00000003>Se trata del <color red<tirabuzón aéreo>coloroff>.")
/*<259>*/ 	set_camera(22, 0)
/*<257>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "El tirabuzón aéreo es un ataque muy\npoderoso que te permitirá acabar con\nel mal que aqueja a Narisha.\n\nAdemás, ejecutarlo es lo más sencillo\ndel mundo; lo único que tienes que\nhacer es pulsar (A).\n\nNo obstante, la aceleración dura más\nque en los <color red<ataques >coloroff>que has usado hasta\nel momento, y por eso mantener un\nrumbo estable es un tanto complicado.\nEste ataque solo está al alcance de los\nalumnos de la academia de caballeros\ncuya técnica de vuelo es excelente.\n\nQuizá sea demasiado pronto para que\ntú la aprendas... <pause 30>¡pero esta es una\nsituación extraordinaria! Quiero saber\nsi eres capaz de dominarla.")
/*<260>*/ 	set_camera(-1, 0)
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000004>En primer lugar, salta de esta\nplataforma...")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x0000000f>Es terrible lo que le ha pasado\na Zelda. Pobre chiquilla...\n\n\nPero no te hagas mala sangre por ello.\nHa sido un accidente, tú no podías\nhacer nada más.")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000001>No te preocupes por el torneo, eso\ndéjanoslo a nosotros. Tú céntrate en\nencontrar al pelícaro cuanto antes.")
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x0000000f>¿Qué hay, <heroname>?\n<pause 30>¿Eh? ¿Que tu pelícaro no acude a tus\nllamadas? ¿Pero cómo...?\n\nNunca había oído semejante cosa...\nEs impensable que un pelícaro no\nacuda cuando su amo lo llama<0x10006:0xfecd>...\n\n¿Se lo has contado al maestro <color blue<Asteus>coloroff>?\nÉl es el responsable del torneo de este\naño. \n\nEntiendo... Bueno, si el director está al\ncorriente de todo, no te preocupes por\nel torneo, él se encargará.\n\n¡Ahora la máxima prioridad es que\nencuentres a tu pelícaro!")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000001>Eres un desastre, ¿sabes? \nSiempre nos confundes al maestro\n<color blue<Asteus>coloroff> y a mí.\n\n<color blue<Buhel>coloroff> soy yo: pelo blanco, maestro de\nprácticas. <color blue<Asteus>coloroff> tiene el pelo oscuro\ne imparte la teoría. ¡A ver si no se te\nvuelve a olvidar!")
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000001>Bueno, <heroname>...\n¡Por fin llegó el día del <color red<torneo celeste>coloroff>!\nLlevamos todo el año esperando este\nmomento...\nAcuérdate bien de toda la teoría que te\nha enseñado el maestro <color blue<Asteus>coloroff>, y de\nlas prácticas que has hecho conmigo.\n\nPor cierto, ¿recuerdas lo de <color red<mirar a tu\nalrededor >coloroff>con (C)? Es lo que suele\nllamarse «vista subjetiva».<0x10011:0x06cd> \n\nCuando quieras echar un vistazo a lo\nque te rodea, <color green<pulsa>coloroff> (C) y ya está.<0x10011:0x06cd>\n\n\nSi ves que el <color red<cursor se desajusta>coloroff>,\napunta con el mando hacia la pantalla\ny <color green<pulsa>coloroff> (v) para corregir su posición.\n¡Así de fácil!<0x10011:0x09cd>")
/*<198>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<123>*/ 	start()
/*<163>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<273>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<275>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000001>Entonces... ¿crees que es cierto lo que\ncuentan sobre las tierras inferiores?\n\n\nSi así fuera, sospecho que se tratará\nde un lugar desolador y yermo... Nada\nque ver con la exuberancia y el colorido\nde Altárea, a buen seguro.")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000001>¿Cómo llevas la búsqueda de Zelda?\nSupongo que estarás agotado...\n\n\nCuando necesites un descanso, tiéndete\nun rato en la cama. ¡Echarse una siesta\nes un método infalible para reponer\ncorazones!")
          			  case 1:
/*<167>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000001>Ten mucho cuidado, ¿entendido?\n¡Ojalá tengas suerte y encuentres\na Zelda!")
          			}
          		}
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 124, 'param3': 31}
/*<124>*/ 		printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00000011><heroname>, he oído que vas\na ir en busca de Zelda bajo el mar\nde nubes.\n\nSegún el director, ahí abajo se\nencuentran las tierras inferiores...\nPero me pregunto si sabes qué clase\nde lugar es ese.")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "Caray, esa espada tuya es espléndida.\nPero el escudo<pause 10>.<pause 10>.<pause 10>.<pause 10> No, perdón, veo\nque también llevas un escudo como\nmandan los cánones. \nEn fin, alumno mío, es hora de\ndespedirse... Te deseo suerte.\nToma, llévate esto, que seguro\nque te resultará útil.")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 173, 'param3': 12}
          			flw_173:
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Si no sabes usar el escudo, pásate\npor el gimnasio y el <color blue<maestro de\nesgrima>coloroff> te enseñará con todo el\nentusiasmo del mundo.")
/*<166>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<214>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<215>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<216>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<247>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<248>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "Caray, llevas una espada espléndida...\nPero me temo que sin escudo no\nllegarás muy lejos. \n\nTe iba a regalar uno, pero vas tan\ncargado que no podrías con el peso.\nAcepta esto, al menos... Seguro que\ntambién te resultará útil.")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "Ah, llevas una señora espada...\nPero me temo que sin escudo no vas\na llegar muy lejos. \n\nAnda, toma, llévate este. \n¡Me da no sé qué verte sin uno!...")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "Este escudo de madera es ligero y\nfácil de usar, aunque también bastante\nfrágil...  Y no resiste el fuego.\n\nPero si se rompe, siempre puedes\ncomprarte otro en el bazar.\n\n\nPara equiparte con el escudo, <color green<mantén\npulsado>coloroff> (-) y selecciónalo <color green<moviendo>coloroff> el\nmando.<0x10011:0x02cd>")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x0000000a>¡Fantástico! Has conseguido destruir\nlas diez dianas dentro del límite de\ntiempo. ¡Eres un hacha, jovencito!\n\n<heroname>, tú y tu pelícaro rojo\ntenéis un don especial para surcar los\ncielos, sin duda.\n\n¡Tienes mi consentimiento para usar\nel tirabuzón aéreo como jinete celeste\nde pleno derecho!")
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "Pero ahora está el problema de cómo\nllegar hasta Narisha...\n\n\nTal vez el <color red<dueño del Calabarza's >coloroff>te\npueda decir algo... Recuerdo que todos\nlos años le hacía una ofrenda de sopa a\nNarisha.\nLo mejor que puedes hacer es ir a\nhablar con él, hazme caso.")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0000000f>Mmm... no has logrado destruir las\n10 dianas en los <color red<120 segundos>coloroff> de rigor.\nAún estás verde, jovencito, no puedo\ndarte el aprobado.\nDespéjate un poco la cabeza y vuelve\na intentarlo cuando creas que estás\nlisto. Te estaré esperando aquí mismo.")
/*<100>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<227>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<228>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<105>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<101>*/ 	start()
/*<103>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>El Calabarza's está al <color red<sudeste >coloroff>de\nAltárea, en un islote largo y estrecho.\nEs el local más de moda de toda\nCeléstea.\nTienen una camarera muy mona,\n<color blue<Calabelle>coloroff>, que además canta que\nda gusto oírla. Lo cierto es que yo...<pause 30>\nsoy<0x10006:0xfecd>...<0x10006:0x00cd> un rendido admirador suyo.\nPero no vayas a ir contándolo por\nahí, ¿eh?")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Y bien, <heroname>...\n¿Listo para enfrentarte al reto\ndel tirabuzón aéreo?\n[1-]Por favor[2]Mejor\nluego")
/*<109>*/ 			switch (choice(2)) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000003>¡Así se habla!\nEmpieza por lanzarte desde aquí.")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<111>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "¿Ah, sí? Bueno, no pasa nada. \nMejor esperar hasta que te sientas\npreparado física y mentalmente.\n\nYo estaré aquí esperándote, ven\ncuando estés listo.")
/*<253>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>¿Qué haces? ¡Lánzate, vamos!\n¿O es que piensas rendirte?\n[1-]¡Eso\nnunca![2]Casi\nque sí")
/*<117>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000003>¡Bien dicho! \nVamos, <heroname>...\n¡Es hora de volar!")
/*<250>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "¿Ah, sí? Bueno, no pasa nada. \nMejor esperar hasta que te sientas\npreparado física y mentalmente.\n\nYo estaré aquí esperándote, ven\ncuando estés listo.")
/*<252>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_108
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<142>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 1, unk: 0, line: 109 */ "Recuerda, <heroname>.\n\n\n\nTu pelícaro está adiestrado para hacer\nun <color green<tirabuzón aéreo >coloroff>si pulsas (A).")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "En los peñascos de por aquí hay\n<color red<diez dianas >coloroff>que debes destruir.\nPara ello pulsa (A) y ejecutarás\nun <color red<tirabuzón aéreo>coloroff>.")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>¡Pero <heroname>!...\n¿Adónde crees que vas?\nEl torneo ya ha empezado...\n¡Haz el favor de lanzarte de una vez!")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Si consigues destruir las diez dianas en\n<color red<120 segundos>coloroff>, habrás demostrado ser\nun verdadero jinete celeste.")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<288>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000016>Pero me pregunto a qué responderá\neste cambio... De repente, ya no se ven\nmonstruos de noche y los lémurys son\ntan apacibles como durante el día.")
          		  case 1:
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000d>¿Has visto, <heroname>? Aunque\nes de noche, ¡Miwi no se ha vuelto\nagresivo, como ocurría siempre!\n\n¡Qué alegría! ¿Verdad que es\nfantástico, <heroname>?")
/*<287>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00000016>En cuanto cae la noche, es mejor\nolvidarse de Miwi.\n\n\nAntes tratábamos de dejarlo dentro de\nla academia, pero se descontrolaba y\narmaba unos jaleos tremendos.\n\nYo que tú me andaría con ojo si sales en\nplena noche...")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000004>Es peligroso salir por la noche, yo que\ntú no pondría un pie en la calle a estas\nhoras.\n\nHasta Miwi, la mascota del director,\nse transforma en un pequeño monstruo\nal ponerse el sol.\n\nLa noche de Altárea ejerce un extraño\ninflujo sobre sus gentes...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 112 */ "¿Listo?... ¡Empecemos!")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000002>¡Eh, <heroname>! \n¿Adónde crees que vas?\n\n\n¡Haz el favor de lanzarte desde aquí\ny llamar a tu pelícaro!")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000002>Oh, <heroname>... \n¿A estas horas y con ganas de escuchar\nmis lecciones?...\n[1-]Por favor[2]Ejem...")
/*<137>*/ 	switch (choice(2)) {
          	  case 0:
/*<139>*/ 		printf(/* textboxtype: 1, unk: 0, line: 92 */ "¡Ah, me emociona ver que aún quedan\njóvenes con ansias de conocimiento!...\n\n\nVeamos, hoy vamos a hablar de la\nhistoria de Altárea.\n\n\nEsta Altárea nuestra es una isla que\nlleva flotando suspendida en el cielo\ndesde hace miles de años.\n\nNuestros ancestros han vivido en esta\nisla y en el resto de islotes que forman\nCeléstea desde la noche de los tiempos.\n\n<0x10009:0x00090a00>Bajo Altárea se extiende un inmenso\nmar de nubes. Nadie que haya caído\nahí ha regresado para contarlo...\n\nNo falta quien dice que bajo el mar\nde nubes solo existe la nada, el vacío\ninfinito.\n\n<0x10009:0x000a0a00>Bueno, y con esto damos por concluida\nla lección de hoy. Vamos, ve a terminar\nde prepararte para el torneo celeste,\njovencito.")
          	  case 1:
/*<138>*/ 		printf(/* textboxtype: 1, unk: 0, line: 91 */ "Bueno... lo cierto es que hoy, por ser\nel día del torneo celeste, no hay clase.\n\n\nDe hecho, creo que más te valdría ir\nyendo para allá si no quieres llegar\ntarde, jovencito.")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Haz caso a tu maestro...\nAprisa, ve a buscar a tu pelícaro.")
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000001>¿Se puede saber qué te ocurre,\n<heroname>? Estás pálido como\nuna sábana...\n\n¡¿Cómo has dicho?!<pause 50>\n\n\n\n¿Que tu pelícaro ha desaparecido?\nQué horror, ¡es terrible!...\n\n\nCrees<0x10006:0xfccd>...<0x10006:0x00cd> ¿crees que podrás encontrarlo\nantes del torneo? ¿Y por qué no te\nhas puesto todavía a buscarlo?<pause 40>\n\nQué cachaza tienes... ¡Así no vas a\nllegar a tiempo! Sin montura no se\npuede competir, jovencito.\n\nSi quieres participar en el torneo,\nmás te vale <color red<encontrar a tu pelícaro>coloroff>\nvolando<0x10006:0xfccd>...<pause 30> <0x10009:0x00000005><0x10006:0x02cd>¡Y no es un chascarrillo!<pause 30>")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "¿Y dices que el director quiere hablar\nconmigo para ver qué pasa con el\ntorneo?\n\nMuy bien, de acuerdo. A fin de cuentas,\nte debo un favor por lo de Miwi...\n\n\nLo dicho, no te preocupes por el\ntorneo... Tú encuentra a tu pelícaro,\n¿me oyes?")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "Todo esto es un castigo por no haber\nescuchado los ruegos de tu maestro,\njovencito...\n\nEn fin, eso ahora ya da igual. ¿Dices\nque el director quiere hablar conmigo\npara ver qué hacemos con el torneo?\n\nAjá, ya entiendo... \nEn fin, tú no te preocupes por nada y\nencuentra a tu pelícaro, ¿me oyes?")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x000a0404>¡Menos mal que hemos encontrado\na Miwi!... Con este pequeño tunante, \nno gana uno para sustos.\n\nLos <color blue<lémurys >coloroff>como él son <0x10009:0x00000a00>una monada\nde animales, pero... de noche son un\nauténtico peligro.\n[1-]¿Por qué?[2-]¿De noche?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "Vaya, ¿no sabes lo que les ocurre\na los lémurys cuando oscurece?\n\n\nBueno, pues te lo cuento. Pero te\nadvierto que da bastante miedo...")
          					flw_13:
/*< 13>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000016>Al caer la noche sobre Altárea, los\nlémurys se vuelven malignos y muy\nagresivos, como si fueran corrompidos\npor las tinieblas.\nDe hecho, al caer el sol salen de sus\nguaridas muchos otros monstruos y\nmerodean por las calles a sus anchas.\n\nPor eso la gente evita siempre salir\nde casa por la noche, a no ser que se\ntrate de alguna emergencia.\n\nBueno, los aprendices de caballero\nsabéis cómo defenderos, no deberíais\ntener mayor problema...\n\n¡Pero más vale que no bajes la guardia,\npor si las moscas!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000f040d>Lo has traído de vuelta sin un rasguño,\n¡muchas gracias!\n<pause 35><0x10009:0x00090400>Sé que hoy andas muy ocupado, siento\nhaberte entretenido con todo esto...\nBueno, Miwi, ahora el maestro <color blue<Asteus\n>coloroff>va a ponerte tu comida. Sé bueno y\ncómetela tranquilito, ¿eh?")
/*<155>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Dile al director que hemos encontrado\na Miwi, ¿quieres? Debe de estar en la\n<color red<plaza que hay delante del santuario>coloroff>.")
/*<241>*/ 				set_camera(21, 0)
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "Me imagino que Zelda estará con él. \nNo es propio de un caballero hacer\nesperar a una dama... Yo que tú iría\npara allá cuanto antes.")
/*<243>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000006>¿Qué ocurre, <heroname>?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "Si vas corriendo hasta esa pared y te\nagarras al saliente, después puedes\n<color green<descolgarte>coloroff>.\n\n¡Pero ten cuidado al desplazarte\nmientras estás colgado, no se te vaya\na agotar el <color red<indicador de resistencia>coloroff>!")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00090400>Dime, ¿vas a traerme a Miwi hasta\naquí? ¿Me harías ese favor?\n\n[1-]Claro[2-]Lo que me\nfaltaba...")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x0009040d>¡Estupendo, muchas gracias!\nY que conste que siento pedirte estas\ncosas hoy, ya sé que estás muy ocupado.")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00090400>Por ahí parece que se puede subir.\nAgarrándote a la cornisa puedes trepar\nhasta el tejado sin mayor dificultad.\n<0x10007:0xff000000>¡Ánimo, sé que puedes hacerlo!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Vaya...\n\n\n\nBueno, pues dile al director que se\nquede tranquilo de todos modos, que\nya he encontrado a Miwi.")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Aprendes rápido, <heroname>. \nY dime, ¿te apetece hacer un poco\nde ejercicio mañanero para ponerte\na tono antes del torneo celeste?\n¿Cómo? <pause 30>¿Una promesa?\n<pause 30>Así que <color blue<Zelda >coloroff>te está esperando...")
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 1 */ "Qué casualidad.\n\n\n\nAl padre de Zelda, el director <color blue<Gaépora>coloroff>,\nse le ha escapado <color red<Miwi>coloroff> otra vez.")
/*<237>*/ 						set_camera(12, 0)
/*<236>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "Mira... <0x1000A:0x001000cd>hasta dónde se ha subido el muy\ntravieso. Si es que no para quieto...\n\n\n<0x1000A:0xffff00cd>El caso es que el director está hasta\narriba con los preparativos del\ntorneo, la ceremonia y todo eso...\n\nAsí que me he ofrecido voluntario\npara buscarlo y traerlo de vuelta.\nPero claro, el dichoso torneo está\na punto de empezar...\nY si ahora me pongo a trepar por\nlos tejados, me voy a poner perdida\nla túnica de gala.\n\n<0x10007:0xff000000>Anda, ¿por qué no me haces el favor\nde ir tú a coger a Miwi?\n[1-]Vale[2-]Ahora no\npuedo")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Vaya...\n\n\n\nBueno, pues dile al director que se\nquede tranquilo de todos modos, que\nya he encontrado a Miwi.")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 2, line: 43 */ "<0x10009:0x000b0a06>¿Se puede saber qué haces?\n¡Haz caso a lo que te dice tu maestro,\njovencito!")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 89, 'param3': 17}
/*< 89>*/ 							set_camera(9, 0)
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x000b0a0d>¡Bien! Pulsa (Z) para <color green<apuntar >coloroff>en esa\ndirección.<0x10011:0x07cd>\n\n\n<0x10009:0x00000c04>Mmm...<pause 15> Me da a mí que esto que te\nestoy contando no te interesa mucho,\npero no te va a venir mal repasar los\nconceptos básicos.\n<0x10009:0x00000a00>En el<color red< modo Héroe>coloroff>...<pause 30><sound 4> sufrirás el doble\nde daños cuando te ataquen; ¡de ahí\nque sea tan importante <color green<fijar el objetivo\n>coloroff>con (Z)!<0x10011:0x07cd>\nEsto de hablar desde aquí es de lo más\nincómodo... ¿Por qué no subes hasta\naquí y hablamos como las personas?")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf(/* textboxtype: 1, unk: 2, line: 38 */ "<0x10009:0x000b0a00>Si vas <color green<corriendo >coloroff>hacia esas cajas de\nmadera, podrás encaramarte hasta\narriba sin problemas.\n\nPara <color green<correr>coloroff>, basta con moverte al\ntiempo que mantienes pulsado (A).\n¡Una altura así la superas casi sin\ndespeinarte, jovencito!\nVenga, haz la prueba. Aquí te espero.")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf(/* textboxtype: 1, unk: 2, line: 41 */ "<0x10009:0x000b0a0d>Eso es, así. Al pulsar(Z) puedes <color green<fijar un\nobjetivo >coloroff>en la dirección en la que estés\nmirando.<0x10011:0x07cd>\n\nSi <color green<fijas el objetivo>coloroff> con (Z) es muy fácil\nhablar luego con la gente pulsando (A).<0x10011:0x07cd>\n\n\nAunque no haya nadie sobre quien <color green<fijar\ntu objetivo>coloroff>, pulsar (Z) siempre viene\nbien porque te deja mirando al frente\nautomáticamente.<0x10011:0x07cd>\nOye, hablar desde tan lejos es un poco\nengorroso... No me apetece gritar.\nMejor sube hasta aquí, anda.")
          								goto flw_58
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_19() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000004>Jovencito, ¡ese es mi sitio!\nTú siéntate ahí, en tu pupitre,\ncomo alumno que eres.")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000002>¿A qué esperas? ¡Aprisa, <color green<corre >coloroff>con (A)\ny <color red<lánzate>coloroff> cielo abajo para montar en\ntu pelícaro!\n\nPara montar, basta con que pulses (v).\n¡Vamos!<0x10011:0x09cd>")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 177, 'param3': 32}
/*<177>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 180, 'param3': 32}
/*<180>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 181, 'param3': 17}
/*<181>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000002>Sin más preámbulos, vamos a dar\ncomienzo a una nueva edición del\n<color red<torneo celeste>coloroff>.\n\nPoco ha faltado para que\n<heroname> se quedara fuera,\npero al final ha llegado felizmente\na tiempo.\nMuy bien, ¡empezaremos por explicar\nlas <color red<reglas >coloroff>que regirán la competición!")
          		flw_16:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "En primer lugar, procederemos a\nsoltar este pelícaro con una estatuilla\nsujeta al cuerpo.\n\nA mi señal, los participantes <color red<correrán\n>coloroff>con (A) desde la línea de salida y\n<color red<saltarán al cielo>coloroff> para subirse a sus\nmonturas.\nCuando os lancéis al vacío, ¡que no se\nos olvide <color green<silbar para llamar al pelícaro>coloroff>!\nLo único que tenéis que hacer es pulsar\n(v); nada más.<0x10011:0x09cd>\nQuien llegue primero hasta el pelícaro\nde la estatuilla y se la arrebate con (A)\nserá el vencedor del torneo.\n\n<0x1000A:0x000200cd>Como veis, son unas reglas de lo más\nsencillas... Bueno, ¿está todo claro?\n[1-]Sí[2?]Repítelo")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003><0x10008:0x01cd>¡Muy bien!\n\n\n\nEl vencedor del torneo pasará al curso\nsiguiente,<pause 20> y además recibirá un <color red<premio\n>coloroff>como reconocimiento a su victoria.\n\nHará entrega de dicho premio la\nelegida para representar el papel\nde <color red<Diosa>coloroff> en la ceremonia de hoy.\n\nPero este año, por ser la 25.ª edición...\n¡la entrega del premio tendrá lugar en\nla palma de la mano de la propia <color red<efigie\nde la Diosa>coloroff>!\nAdemás, por expreso deseo de la\nelegida, el premio es un artículo\n<color red<hecho a mano >coloroff>por ella.<pause 20>\nComo bien sabéis, la <color red<elegida>coloroff> es...")
/*<185>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 178, 'param3': 13}
/*<178>*/ 			set_camera(5, 0)
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x01000009><0x10008:0x01cd>¡la encantadora Zelda!")
/*<194>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 1, line: 31 */ "Ha llegado el momento de recoger los\nfrutos de todo un año de esfuerzo y\nestudio en la academia.\n\nDemostrad lo que habéis aprendido\ny que ante todo haya deportividad.\n¡Nada de arrojarse cosas!")
/*<179>*/ 			set_camera(6, 0)
/*<182>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 183, 'param3': 50}
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 176, 'param3': 13}
/*<176>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10008:0x01cd>¿Entendido, <0x10009:0x04191700>Malton?")
/*< 40>*/ 			set_camera(4, 0)
/*<184>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Muy bien, ¡todos a sus puestos!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000052>¿Eh? De... de acuerdo, repetimos.")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

