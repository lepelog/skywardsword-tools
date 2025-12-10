          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000005>¿Sigues sin poder sentir la presencia\nde tu neburí?\n\n\nSerena tu espíritu y concéntrate.\nEstoy seguro de que pronto\nencontrarás alguna pista de su\nparadero.")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>¡Oh, <heroname>!\n¿Has encontrado ya a tu neburí?\n\n\n<pause 40>¿Cómo? ¿<color blue<Vilán >coloroff>ha hecho qué...?\nMmm, ese granuja siempre está\ncausando algún problema...")
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 71, 'param3': 32}
/*< 71>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 72, 'param3': 16}
/*< 72>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 73, 'param3': 17}
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "Director...\nSi todo esto es obra suya, entonces\nel problema no es tan grave.\nSolo hay que retrasar el torneo.\nAunque tenga que esperar un par\nde horas, no está en situación de\nquejarse. Quien siembra vientos,\nrecoge tempestades... ")
/*< 74>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 75, 'param3': 16}
/*< 75>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Cierto, cierto. Ya lo has oído,\n<heroname>.\n\n\nPuedes ir a buscar a tu neburí\ntranquilamente. No te preocupes\npor nada. ")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<  2>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000005>Yo me encargaré de explicárselo\ntodo al maestro <color blue<Asteus>coloroff>...\n<pause 15><heroname>, ve a decirle que\nvaya a mi despacho.\nMientras hablo con él, deberías\npreguntar a los otros estudiantes\npor tu neburí. Todos deben de estar\nya en la gran plaza.")
          		}
          	}
          }

          void entrypoint_103_02() {
/*< 13>*/ 	start()
/*< 14>*/ 	scene_flags[0 'Skyloft'][5 /* 0x1 20 */] = true;
/*< 15>*/ 	scene_flags[0 'Skyloft'][6 /* 0x1 40 */] = true;
/*< 16>*/ 	scene_flags[0 'Skyloft'][1 /* 0x1 02 */] = true;
/*< 42>*/ 	scene_flags[0 'Skyloft'][67 /* 0x9 08 */] = true;
          }

          void entrypoint_103_03() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000005>Todo lo que está pasando resulta difícil\nde creer... Yo tampoco sé muy bien\nqué pensar.\n\nPero me pregunto qué sucederá si\nhaces lo que ella te sugiere.")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (zone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000004>Estoy convencido de que encontrarás\na Zelda. Eso me preocupa más que\ncualquier explicación que puedas\ndarme sobre estos acontecimientos.\n¡Confío en ti, <heroname>!")
/*< 83>*/ 			zone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00000002>¡<heroname>!\n\n\n\nLa Diosa...<pause 30> ¡La isla y la Diosa\nhan desaparecido!\n[1-]En realidad...[2-]Ejem...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "No es necesario que digas nada,\n<heroname>.\n\n\n<color yellow white<La Diosa deberá hacer frente a un\nsinfín de adversidades, y solo tras\nsuperarlas todas podrá volver a\nalzarse.>coloroff>\nEsas eran las últimas palabras de la\n<color red<leyenda>coloroff>...<pause 20> Ahora, por fin, entiendo\nsu significado.\n\nEs cierto, ¿verdad? El peligro pasó\ny mi hija...<pause 20> mi pequeña Zelda...<pause 10> está\npor fin a salvo, ¿no es así?\n[1-]Lo siento...[2-]No")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "Entiendo... En fin, no tiene sentido\npensar más en este asunto.\n\n\nLo único que te pido es que te esfuerces\nal máximo, muchacho.")
          					goto flw_84
          				  case 1:
          					goto flw_99
          				}
          			  case 1:
          				goto flw_65
          			}
          		}
          	  case 1:
/*< 96>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000004>Es extraño, me ha parecido oír un\nfuerte ruido procedente del exterior...\nPero habrán sido imaginaciones mías,\nsupongo.\nEn fin, eso ahora es lo de menos.\nEl destino de Zelda está en tus manos.\nSé prudente, muchacho.")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (zone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>Recuerdo haber visto esa gema en\nalguna parte... Pero ahora no sé dónde.\n\n\n¿Por qué no le preguntas al vidente?\nSeguro que él te podrá orientar.")
          				  case 1:
/*< 89>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000002>Hola, <heroname>.\n¿Cómo va todo?\n\n\n¿Eh? ¿Dices que tienes que colocar la\n<color red<gema de la ordalía >coloroff>en cierto sitio?\n\n\nCreo haber visto esa gema incrustada\nen algún lugar, pero no recuerdo \ndónde... Hmm...")
/*< 90>*/ 					zone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "¡Fabuloso! ¿No solo has conseguido\naplacar la ira de Narisha, sino que te\nha dado información de la Trifuerza?\n\nMuchacho, eres increíble... \nJamás pensé que pudieras llegar\ntan lejos.\n\nPero aún te queda un largo camino\npor recorrer antes de concluir con\ntu misión. ¡Ánimo! ¡No desfallezcas!")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 61, 'param3': 13}
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "Mmm, pobre Narisha...\nEl tirabuzón aéreo es una técnica\npeligrosa. Úsala con mucho cuidado.")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 31, 'param3': 13}
/*< 31>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "Habla con el maestro <color blue<Buhel>coloroff>, su cuarto\nestá aquí al lado. Él podrá darte más\ndetalles acerca de Narisha.")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000002>Me pregunto si conozco a alguien más\nque pueda decirnos algo sobre la\nTrifuerza.\n\nNo... Dudo mucho que haya alguien \nen Neburia que sepa algo de cosas\ntan antiguas.")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 									{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 13}
/*< 21>*/ 									printf(/* textboxtype: 1, unk: 0, line: 17 */ "Oh, <heroname>. ¿Cómo estás?\nDime, ¿has encontrado alguna\npista sobre el paradero de Zelda?\n\n¿Qué ocurre?<0x10006:0xfecd>...<0x10006:0x00cd>\nSi sabes algo, lo que sea, me gustaría\nque me lo dijeras.")
/*< 69>*/ 									wait_frames(40)
/*< 22>*/ 									printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10006:0xfecd>Oh...<0x10006:0x00cd> ¿Te gustaría decírmelo, pero\nno puedes? Entiendo...\nSeguro que tienes una buena razón<0x10006:0xfecd>...")
/*< 70>*/ 									wait_frames(30)
/*< 37>*/ 									printf(/* textboxtype: 1, unk: 0, line: 19 */ "A decir verdad, he estado pensando\nmucho sobre todo este asunto,\n<heroname>...\n\nTe enfrentas a un terrible destino, \ny lo estás haciendo todo tú solo.\nMe encantaría poder ayudarte.\n\nYa no tengo la fuerza de mi juventud,\npero seguro que puedo hacer algo\npor ti<0x10006:0xfecd>...<0x10006:0x00cd>\n\nMe gustaría poner mis conocimientos\na tu servicio y ayudarte en tu ardua\ntarea.\n\nSi tienes cualquier pregunta acerca\nde Neburia, solo tienes que decírmelo.\n[1-]Pues...[2-]Nada,\ngracias")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf(/* textboxtype: 1, unk: 0, line: 20 */ "¿Cómo? ¿Preguntas si sé algo acerca\nde la <color yellow white<Trifuerza>coloroff><0x10006:0xfecd><0x10006:0x00cd>?...\n\n\n¿Dónde has oído ese nombre?\n\n\n\nMmm, es cierto que la legendaria\nTrifuerza aparece mencionada \ncon frecuencia en manuscritos\nantiguos.\nSin embargo, nadie conoce su paradero\ncon certeza... Es un misterio.")
/*< 26>*/ 										printf(/* textboxtype: 1, unk: 0, line: 22 */ "Lo siento... Aunque me duela, parece\nque mis conocimientos no nos son\nmuy útiles en este caso.")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "Mmm, ¿quieres decir que no necesitas\nlos conocimientos de este pobre viejo?\n\n\nDe acuerdo, pero recuerda que debes\nprestar oídos a la voz de la experiencia.\nEstaré aquí si me necesitas, muchacho.")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 5, 'next': 18, 'param3': 13}
/*< 18>*/ 										printf(/* textboxtype: 1, unk: 0, line: 16 */ "<heroname>, eres la única\nesperanza de Zelda. \n\n\nTe lo suplico, ¡tienes que encontrarla\ny traerla de vuelta a casa sana y salva!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 12, 'param3': 13}
/*< 12>*/ 											printf(/* textboxtype: 1, unk: 0, line: 15 */ "Cuando las grandes hojas de viento\napunten hacia la torre de la luz, se\nabrirá el camino hacia el cantar\nlegendario.\n<heroname>, este cantar ha sido\ntransmitido de una generación a otra\nentre la gente de Neburia desde la\nnoche de los tiempos.\nPor lo tanto, es probable que las\n<color red<dos hojas >coloroff>de las que habla se\nhallen dentro de la misma Neburia.\n\nEs solo una teoría, pero espero que esta\ninformación te haya servido de algo.")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
/*< 55>*/ 												{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 13}
/*< 92>*/ 												printf(/* textboxtype: 1, unk: 0, line: 8 */ "¡Oh, <heroname>, estás de vuelta!\nY veo que sigues en una pieza...\nNo sabes cómo me alegro.\n\nDime, ¿qué tal va todo? ¿Has podido\nencontrar alguna pista fiable sobre\nel paradero de Zelda?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Mmm, entiendo<0x10006:0xfbcd>...<0x10006:0x00cd>\nAh, Zelda, Zelda... pobre hija mía...\n\n\nEjem, disculpa, no me hagas caso.\nSupongo que todo esto tampoco es\nnada fácil para ti...")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf(/* textboxtype: 1, unk: 0, line: 10 */ "¿Cómo dices?<pause 40> ¿Quieres saber la letra\nde la canción que Zelda cantó el día\nde la ceremonia?\n\n¡Ejem! Bueno, no es que yo sea muy\nbuen cantante...\n[1-]Solo\nla letra[2-]Por favor")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf(/* textboxtype: 1, unk: 0, line: 12 */ "¿Quieres solo la letra? Uf, me habías\nasustado. Claro, te la puedo recitar\nsin problema. Veamos, dice así...")
          													flw_8:
/*<  8>*/ 													printf(/* textboxtype: 1, unk: 0, line: 13 */ "<color yellow white<<0x10006:0xfccd><color yellow white<Joven que portas la luz\nque unirá el cielo y la tierra,\ny al que guía la sierva\nelegida por la Diosa...<color yellow white<>coloroff><0x10006:0x00cd>\n\nY continúa así...\n\n\n<color yellow white<<0x10006:0xfccd>Si hacia la torre iluminada\ndos hojas de viento logras orientar,\nse abrirá ante ti la senda\ny encontrarás el cantar.<0x10006:0x00cd>>coloroff>")
/*<  9>*/ 													printf(/* textboxtype: 1, unk: 0, line: 14 */ "Esta es la letra completa...\n\n\n\nLo de la <color red<torre iluminada >coloroff>hace\nreferencia a la torre de la luz\nde la gran plaza. En cuanto a\nlas grandes hojas de viento<0x10006:0xfecd>...\n¿Querrá decir que al apuntar\ncon dos hojas en dirección a la\ntorre de la luz sucederá algo\nespecial<0x10006:0xfecd>?...<0x10006:0x00cd>\nMmm, <color red<dos grandes hojas de viento>coloroff>...<0x10006:0xfecd>")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf(/* textboxtype: 1, unk: 0, line: 11 */ "Muchacho, ya te he dicho que no canto.\nPero si lo que quieres es oír la letra,\nintentaré recitártela. Veamos...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000002>¡Oh, <heroname>! ¿Cómo estás?\n¿Has podido encontrar a Zelda?\n\n\nSiento mucho cargarte con una tarea\ntan pesada... Pero prefiero que nadie\nmás se entere de lo ocurrido. Seguro\nque causaría mucha confusión...\nSí, mejor que no sepan nada.\nLo siento mucho, pero tú eres el único\nen quien puedo confiar.")
          												  case 1:
/*< 53>*/ 													printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>El <color red<maestro de esgrima >coloroff>también está\npreocupado por tu partida. Él te ha\nenseñado a manejar la espada desde\nque eras niño...\n¿Por qué no vas a verlo al gimnasio\nantes de marcharte? Seguro que tiene\nalgún buen consejo para ti.\n\n<heroname>, dejo el destino de\nZelda en tus manos. ¡Suerte!")
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

          void entrypoint_103_07() {
/*< 27>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 28, 'param3': 13}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "¡Espera, <heroname>!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 29, 'param3': 15}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "Acabo de acordarme de algo. Es una\npista que puede serte útil.\n\n\nSupongo que habrás oído hablar de\n<color blue<Narisha>coloroff>, el <color red<gran espíritu de los cielos\n>coloroff>que protege Neburia desde hace\nmucho tiempo.\n<0x1000A:0x000200cd>Dicen que no hay nada que Narisha\nno sepa, su sabiduría es tan vasta\ncomo el mismo cielo.\n\nSi le preguntas sobre la <color yellow white<Trifuerza>coloroff>,\nseguro que podrá guiarte.\n[1-]¿Dónde\nestá?[2-]¿Lo sabe\ntodo?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Sabía que me ibas a preguntar eso...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Seguro que, durante tus viajes, tú\ntambién habrás reparado en ese\n<color red<cúmulo gigantesco >coloroff>que se ve en el\ncielo últimamente.\nSe dice que el mismísimo Narisha se\noculta en su interior.")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "Quería saber si el rumor era cierto\no no, así que encargué al maestro\n<color blue<Buhel>coloroff> que investigara la nube.\n\nPero después de lo que pasó con Zelda,\naún no he tenido tiempo de ver su\ninforme.\n\nLo mejor será que vayas a preguntarle\nsobre Narisha directamente al maestro\n<color blue<Buhel>coloroff>.")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "En efecto, es una enciclopedia\nviviente. Pero hablar con él\npuede ser más complicado de\nlo que piensas...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000017>¿Qué haces? ¡Rápido, lánzate y llama\na tu neburí! ¡Los demás ya han salido!")
          }

