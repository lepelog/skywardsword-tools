          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10009:0x00111153>Chico, esto es muy serio.\n¡Te vas a llevar un buen tirón\nde orejas!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10009:0x00000001>Gracias a tu ayuda el dueño ha podido\ncambiar la lámpara que tú mismo\ndestrozaste...\n\n<0x10009:0x00000300>Y yo me pregunto... No estarás\nintentando ganar puntos para\nconquistar a Calabel, ¿eh?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00000001>Al final ha quedado claro que todo\naquello del demonio no era más que\nuna historia para asustar a los niños...\n\n<0x10009:0x00000300>Lo que yo decía: ¡ese abuelito\nnos estaba engañando!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000001>Oye, ¿lo has oído?...\n\n\n\n¡Ese abuelito de ahí dice que ha visto\nun demonio!\n\n\n<0x10009:0x000a0300>Si pretende impresionar a Calabel con\nesas historias, no lo va a conseguir...")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00111104>No serás de esos tipos supersticiosos\nque creen en demonios y tonterías así,\n¿verdad?\n\n<0x10009:0x000a0300>¡Oye, un momento!...\n¿No será que tú también estás\ninteresado en Calabel?")
          				  case 1:
          					goto flw_41
          				}
          			}
          		}
          	  case 1:
          		goto flw_493
          	}
          }

          void entrypoint_117_23() {
/*<292>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070803>Me alegro de que me hayas traído a\neste abuelito tan habilidoso. ¡Va a ser\nuna gran ayuda, estoy segura!\n\nA partir de ahora pienso pedirle que\nhaga un montón de tareas por mí.\n<0x10009:0x00130800>¡Mil <pause 5>gracias, <pause 5>señor <pause 5>caballero<pause 5>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000008>¡Quieto ahí! Deja que los profesionales\nhagan su tarea, chico...")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf(/* textboxtype: 0, unk: 0, line: 179 */ "<0x10009:0x00000004>¿Qué quieres hacer, hijo?\n[1-]Tocar\nla lira[2-]Tomar\nsopa[3]Nada,\ngracias")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "<0x10009:0x000e1000>¡Genial! Tú y Calabel pueden animar\na los clientes.")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf(/* textboxtype: 0, unk: 1, line: 178 */ "<0x10009:0x000c0700>Lo siento, pero mi hija solo actúa\npor la noche. ¡Vuelve más tarde!")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>¡Si un jovencito como tú viene a\nprobar mi sopa, eso es que sabe\napreciar las cosas buenas de la vida!\n\nLa botella cuesta <color red<10 rupias>coloroff>.\n\n[1-]¡Sí![2]Olvídalo")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf(/* textboxtype: 0, unk: 0, line: 83 */ "¡La sopa está mucho mejor caliente!\nEn 5 minutos ya se habrá enfriado...")
          					  case 1:
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>¿No tienes una botella vacía?\n\n\n\n¡Si quieres tomar sopa, vas a necesitar\nuna botella vacía! Tráeme una\ny te daré sopa.")
          					}
          				  case 1:
/*<319>*/ 					printf(/* textboxtype: 0, unk: 2, line: 52 */ "<0x10009:0x000c0700>Parece que te faltan rupias, ¿no?\nMejor vuelve en otra ocasión.")
          				}
          			  case 1:
/*<323>*/ 				printf(/* textboxtype: 0, unk: 0, line: 176 */ "<0x10009:0x000d0a00>¡Vamos, hijo, decídete!")
          			}
          		  case 2:
/*<313>*/ 			printf(/* textboxtype: 0, unk: 1, line: 175 */ "<0x10009:0x00081000>Ya veo... Bueno, en ese caso, busca\nuna silla libre y relájate.\nEstás en tu casa.\n\n<0x10009:0x00000700>¡Ah, y no te olvides de saludar\na mi Calabel cuando la veas!")
          		}
          	  case 1:
/*<309>*/ 		printf(/* textboxtype: 0, unk: 1, line: 172 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nDime, ¿te gusta mi nueva lámpara?\n\n\n<0x10009:0x000b1100>Me ha costado una fortuna,\npara que lo sepas...")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf(/* textboxtype: 0, unk: 0, line: 173 */ "<0x10009:0x000d1006>¿Eh? ¿Dices que no vale lo que me\nhe gastado?\n\n\n<0x10009:0x00080009>¡Serás maleducado...! Te lo perdono\nporque sin tu esfuerzo no habría\npodido comprar una lámpara tan\nbonita...\n<0x10009:0x000c0900>Pero será mejor que no rompas esta\ntambién, ¿entendido?")
/*<311>*/ 		printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00080700>Bueno, hijo, ¿en qué puedo ayudarte?\n¿Quieres volver a trabajar para mí,\ncomo antes?\n\n<0x10009:0x000e0700>Te pagaría bien, por supuesto.\n¡Podrías tocar un rato la lira!\nAunque quizá hayas venido a\ntomarte una deliciosa sopita...\n[1-]Trabajar[2-]¡Sopa![3]Ahora no")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf(/* textboxtype: 0, unk: 0, line: 131 */ "<0x10009:0x00070701>Mira quién está aquí: ¡el caballero\nque me ayuda tan gentilmente con\nel huerto de calabazas!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10009:0x1b090702>Eso no es nada... ¡Yo te dejaría el\nhuerto listo mucho antes que ese\nviejo-topo de ahí fuera!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 0, unk: 0, line: 134 */ "<0x10009:0x00000008>¡Ay, qué bien! ¡Qué maravilla!\n¿Lo dices en serio?...")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x1b070705>¡Ja, ja, ja! Si tú me lo pides, Calabel,\n¡no me importa si tengo que arreglar\nun huerto o apagar un incendio!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x1a000009>Vaya, vaya... ¡Pues en ese caso, te tomo\nla palabra!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf(/* textboxtype: 0, unk: 0, line: 137 */ "¡Qué amables son todos!\n¡Muchas gracias!<0x10009:0x00070703>")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000009>¡Genial! ¡Lo has conseguido!")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010705>Pero...\nEsto no es una persona...\n\n\n<0x10009:0x00070700>A ver si lo entiendo... ¿Se supone\nque este... señor va a arar el huerto\npor mí?")
          }

          void entrypoint_117_25() {
/*<394>*/ 	start()
          	flw_34:
/*< 34>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 90>*/ 		switch (scene_flags[6 /* 0x1 40 */]) {
          		  case 0:
/*<200>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<201>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00070703>¿De verdad me vas a ayudar?\n¡Sabía que podía contar contigo!\n¡Qué bueno eres!\n[1-]Claro[2]Lo siento")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00130809>¡Genial! ¡Estaba segura de que no\nme decepcionarías!<0x10005:0x001e0000>")
          					flw_87:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070700>Si quieres llevarlas todas al mismo\ntiempo, el truco es <color red<caminar despacio>coloroff>.\n\n\nSi las calabazas se inclinan a la\nderecha, ve hacia la derecha. Y si\nse inclinan a la izquierda, ve hacia\nla izquierda. ¡Mantén el equilibrio!\n<0x10009:0x00010700>¡Si te pones nervioso y empiezas\na correr, se te caerán todas!\nY ya está, <pause 20>no tiene ningún truco.\n¡Ánimo!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00011606>¿En serio? ¡Y yo que pensaba que\nestarías encantado de ayudar a una\nseñorita en apuros!...")
          						  case 1:
/*<514>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00011611>¿De verdad? Espero que el resto\nde caballeros de tu promoción no\nsean igual de aburridos...")
          						}
          					  case 1:
/*<  5>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00011606>¿En serio? ¡Se lo voy a decir a mi\npadre, a ver qué opina!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00070808>¡Sería genial poder volver a contar\ncontigo para transportar las calabazas!\n<0x10006:0xfbcd>¡Señor caballero<0x10006:0x00cd> galante!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00010700>¡Llegas en el momento justo!\n¿Tienes ganas de ganarte unas\nrupias con el sudor de tu frente?\n\n<0x10009:0x00070700>Tengo unas cuantas calabazas más para\ntransportar. ¿Me ayudarías?...\n¡Pienso pagarte, por supuesto!\n[1-]Claro[2]Lo siento")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00070703>Entonces, vamos.\n¡Voy a mostrarte adónde tienes\nque transportar las calabazas!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 0, line: 8 */ "¡Que no se te caigan por el camino!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Una vez recogida la cosecha, solo queda\nplantar las nuevas semillas. ¡Pero antes\nhay que arar el huerto a conciencia!\n\n¿Dónde podría encontrar a alguien a\nquien se le dé bien esto de remover\nla tierra?...")
/*<396>*/ 							printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00010700>¡Ah, y otra cosa! Bueno, en realidad\nes un pequeño favor... Verás, no he\npodido con todas las calabazas.\n\n<0x10009:0x00070700>¿Te importaría ayudarme y llevarlas\nal cobertizo? ¡No te pido que lo hagas\ngratis, por supuesto!\n[1-]Claro[2]Lo siento")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>¿Lo has pensado mejor y quieres\nayudarnos con la recogida de\ncalabazas?\n[1-]Sí[2]No")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010701>¡Ah, hola! ¿Has venido a <color red<ayudarme\ncon la recogida de calabazas>coloroff>?\n\n\n<0x10009:0x00070700>Pues llegas en el momento justo.\nNo sabes cuánto pesan...\n\n\n<0x10009:0x00011600>¿Dices que no te va a costar mucho\nesfuerzo llevarlas? ¿En serio?\n\n\n<0x10009:0x00010700>Je, je, je... ¿Pues qué te parece\nsi le damos un poco de emoción\na todo esto? ¡A ver si eres capaz de\nllevar <color red<5 calabazas >coloroff>al mismo tiempo!\n<0x10009:0x00071600>Pero deberías tener cuidado:\nsi no vas despacito, se te caerán.\n¡Vamos, ve por esas calabazas!\n[1-]¡Adelante![2]Ahora no")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00130809>¡Perfecto! ¡Las has llevado todas!\nParece que has nacido para esto\nde trabajar en el campo...\n\n<0x10009:0x00070800>¡Toma, estas 50 rupias son para ti!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00070800>¡Mil <pause 15>gracias,<pause 15> señor<pause 15> caballero!\n¡Vuelve cuando quieras!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00130809>¡Lo sabía! ¡Las has llevado todas!\n\n\n\n<0x10009:0x00010700>Ya no te queda ninguna más, ¿no?\n¡Genial!\n\n\n<0x10009:0x00190800>¡Mil <pause 15>gracias, <pause 15>señor<pause 15> caballero<pause 15> galante!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00011611>¡Oh, no! ¡Se te han caído!\nMira que eres torpe...\n\n\n<0x10009:0x00070700>Bueno, puedes volver a intentarlo\ncuando quieras... ¡Si es que te ves\ncapaz de superar el desafío, claro!")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 37, unk: 1, line: 46 */ "<0x10009:0x00000006>Jo, jo, jo... ¡No hay nada como un duro\ndía de trabajo para poner a punto\nlas articulaciones!\n\n<0x10009:0x000c0d00>Pero si te digo la verdad...\n¡Con mirar a esa chica se me\nolvidan todos los cansancios!\n\n<0x10009:0x00010900>Oye<pause 10>.<pause 10>.<pause 10>.<pause 10>\n¿Tú has visto cómo me mira? ¿Eh?\n\n\n<0x10009:0x000c0d00>Yo creo que le intereso... ¡Seguro!\n\n\n\n<0x10009:0x00090d0b>Ya está, ¡decidido! ¡Mañana pienso\nhacer el doble de trabajo!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0000000a>¡¿Cómo?! ¡¿Insinúas que ahora voy\na tener que pasarme los días de sol\na sol trabajando en el campo?!\n\n¡Ja! ¿Quieres decir que me has traído\nhasta aquí solo para esto? ¿Es una\nbroma, chico?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>¡Si un jovencito como tú viene a\nprobar mi sopa, eso es que sabe\napreciar las cosas buenas de la vida!\n\nLa botella cuesta <color red<10 rupias>coloroff>.\n\n[1-]¡Sí![2]Olvídalo")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf(/* textboxtype: 0, unk: 1, line: 82 */ "¡Aquí tienes una ración de sopa bien\ncalentita! ¡Toma!")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf(/* textboxtype: 0, unk: 0, line: 83 */ "¡La sopa está mucho mejor caliente!\nEn 5 minutos ya se habrá enfriado...")
          				  case 1:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>¿No tienes una botella vacía?\n\n\n\n¡Si quieres tomar sopa, vas a necesitar\nuna botella vacía! Tráeme una\ny te daré sopa.")
          				}
          			  case 1:
/*<114>*/ 				printf(/* textboxtype: 0, unk: 2, line: 52 */ "<0x10009:0x000c0700>Parece que te faltan rupias, ¿no?\nMejor vuelve en otra ocasión.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00100705>Claro, claro, por supuesto.\nAdemás de la sopa, este sitio tiene\nmuchos otros encantos. ¡Como su\nselecta clientela!\nRelájate y disfruta del ambiente.\nSolo tienes que recordar una cosa:\nNo rompas nada ni molestes a nadie\nen mi mesón.\n<0x10009:0x00080700>¡Y me estoy refiriendo a esa lámpara\nde araña artesanal y valiosísima que\ncuelga del techo!\n\n<0x10009:0x00000900>Si te veo colgándote de ella lamentarás\nhaber nacido, ¿me has entendido?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf(/* textboxtype: 2, unk: 0, line: 54 */ "<0x10009:0x00100905>Mira, hijo... Vas a tener que trabajar\npara mí hasta pagarme la lámpara que\nhas roto.\n\n<0x10009:0x00000700>Vuelve por aquí en otro momento y ya\npensaré alguna tarea para darte.")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf(/* textboxtype: 2, unk: 0, line: 54 */ "<0x10009:0x00100905>Mira, hijo... Vas a tener que trabajar\npara mí hasta pagarme la lámpara que\nhas roto.\n\n<0x10009:0x00000700>Vuelve por aquí en otro momento y ya\npensaré alguna tarea para darte.")
          					  case 1:
          						goto flw_437
          					}
          				}
          			}
          		}
          	  case 1:
          		goto flw_434
          	}
          }

          void entrypoint_117_44() {
/*<134>*/ 	start()
/*<136>*/ 	switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          	  case 0:
/*<138>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<140>*/ 			switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>Espero que no me estés diciendo todo\nesto solo para que me sienta mejor...\n\n\n<0x10009:0x00070700>Bueno, vamos a ser optimistas.\n¡Esperaré aquí pacientemente hasta\nque aparezca ese famoso experto\narador!")
          			  case 1:
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Una vez recogida la cosecha, solo queda\nplantar las nuevas semillas. ¡Pero antes\nhay que arar el huerto a conciencia!\n\n¿Dónde podría encontrar a alguien a\nquien se le dé bien esto de remover\nla tierra?...")
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00010701>¿Quieres ayudar con la recogida\nde calabazas?\n\n\n<0x10009:0x00070700>Aunque ya se ha hecho algo tarde para\nempezar a trabajar... Será mejor que\nvuelvas cuando se haga de día.\n¡El huerto no se va a mover de aquí!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>¡Vaya, mira quién está aquí!\n¡Si es el caballero que rompió\nnuestra lámpara de araña!\n¿Qué, ya has saldado tu deuda?\n<0x10009:0x00010700>Ah, sí, es verdad...<pause 30>\nMi padre me ha dicho que tiene más\ntrabajo para ti.\n\n<0x10009:0x00070700>Deberías ir a hablar con él.")
          		  case 1:
/*<424>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>¡Mira quién está aquí!\n¡Pero si es el caballero que rompió\nla lámpara de araña! ¿Ya has saldado\ntu deuda?")
          		}
          	}
          }

          void entrypoint_117_27() {
/*<448>*/ 	start()
/*<456>*/ 	set_camera(30, 0)
/*<450>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 452, 'param3': 32}
/*<452>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 453, 'param3': 15}
/*<453>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 26, 'next': 451, 'param3': 14}
/*<451>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 473, 'param3': 16}
/*<473>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<472>*/ 		printf(/* textboxtype: 0, unk: 0, line: 197 */ "<0x10009:0x1a000001>No te quedes ahí sentado...\n¡Tienes que ir a hablar con mi padre\nahora mismo!\n\n<0x10009:0x1a1a0800>Se va a enojar muchísimo, ya lo verás.")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf(/* textboxtype: 0, unk: 1, line: 196 */ "<0x10009:0x1a000001>¡Bienvenido!\n¡En La Calabaza Flotante servimos\nla mejor <color red<sopa de calabaza >coloroff>que hayas\nprobado en toda tu vida!\n<0x10009:0x1a1a0800>Este es un lugar de lo más acogedor,\nya lo verás. ¡Ponte cómodo y disfruta\nde un momento de merecido descanso!")
          		goto flw_454
          	}
          }

          void entrypoint_117_10() {
/*<  6>*/ 	start()
/*<118>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
/*<214>*/ 		entrypoint_117_11();
          	  case 1:
          		flw_520:
/*<520>*/ 		scene_flags[21 'The Sky'][33 /* 0x5 02 */] = true;
/*< 12>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          			  case 0:
/*<308>*/ 				entrypoint_117_24();
          			  case 1:
/*< 14>*/ 				switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          				  case 0:
/*< 18>*/ 					printf(/* textboxtype: 0, unk: 2, line: 55 */ "<0x10009:0x0000000e>¡Por fin has saldado tu deuda\npor la lámpara de araña!\n¡Lo has hecho muy bien, hijo!\n\nPor un momento pensé que ibas a tirar\nla toalla, ¡pero has aguantado hasta\nel final!\n\n<0x10009:0x00001000>¡La próxima vez que vengas, te recibiré\ncomo a un cliente más!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>Entonces, ¿vas a tocar una vez más\npara mi Calabel?\n\n[1-]¡Claro![2-]Cómo tocar[3]Olvídalo")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0000000e>¡Muy bien! ¡Vamos a empezar!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x000d0002>¡Ya verás como lo haces muy bien!\n¡Calabel!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x1a000008>Sí, papá. ¿Qué quieres?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x000b0b00>Este joven va a ser tu pareja musical.\n¿Por qué no nos deleitas un poco\ncon esa voz tuya de ruiseñor?")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf(/* textboxtype: 0, unk: 0, line: 95 */ "¡Claro! ¡Puede ser divertido!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x0000000e>Bien, voy a explicártelo otra vez, hijo.")
          										flw_265:
/*<265>*/ 										printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000700>Cuando Calabel empiece a cantar,\nlos clientes empezarán a seguir el\nritmo de la canción, y tú puedes\nguiarte por ellos para seguirlo.\n<0x10009:0x000f0700>Los clientes empezarán a balancearse\nde izquierda a derecha. Deberás tocar\nsiguiendo el ritmo de ese balanceo,\n¿entendido?\nNo te preocupes demasiado por\nla dirección, pero intenta no tocar\nni muy lento ni muy rápido. Esa es\nla clave de una buena actuación.\n<0x10009:0x00080700>Por cierto, cuando los clientes se\ndetengan, ¡podrás dar rienda suelta\na tu imaginación y tocar como quieras!\n\nLo más importante es seguir el ritmo.\n¿Entendido, hijo?\n[1-]Todo claro[2]Repítelo\notra vez")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf(/* textboxtype: 1, unk: 0, line: 96 */ "¿No te has enterado de nada?\n¡A ver si prestas más atención!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000004>¡No pasa nada! Tómate tu tiempo\ny avísame cuando estés listo.")
          									}
          								  case 1:
/*<519>*/ 									printf(/* textboxtype: 2, unk: 0, line: 60 */ "<0x10009:0x00000001>¡Tú otra vez!\n<pause 30>Ya sé lo que estás pensando.\nEstás deseando tocar la lira, ¿verdad?\n\nPues lo siento, pero por el día no\ntenemos actuación. Hay que\npreparar el escenario y todo eso. \n¡Mejor ven por la noche!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00000001>¡Has vuelto! A ver, a ver...\n¿Qué tarea puedo encargarte?...\n\n\n<0x10009:0x000d0700>Oye, ese instrumento que llevas\nahí es muy raro, ¿cómo se llama?\n\n\n<0x10009:0x00001100>¿Sabes una cosa? Mi Calabel canta\ncomo los ángeles. ¡No lo parece,\npero es la pura verdad!\n\n<0x10009:0x00000700>Hasta hace muy poco cantaba aquí\nen el mesón para animar a los clientes.\n\n\n<0x10009:0x00080000>Pero tuvo que dejarlo porque su pareja\nmusical se fue y, claro, sin melodía\nque acompañe, cantar es complicado...\n\nPor casualidad, ¿no te gustaría\nacompañar a mi hija con ese\ninstrumento tuyo?\n[1-]Claro\nque sí[2]Claro\nque no")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x0000100e>¡Estupendo! ¡Sabía que eras la persona\nindicada para el trabajo!\n\n\n<0x10009:0x000d0a00>¡Pero escúchame bien! ¡Nada de hacer\ntonterías, que ya no eres ningún niño!\n¡Tómatelo en serio!")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>No sé por qué pierdo el tiempo contigo.\n¡¿Por qué no reflexionas un poco\nsobre tus actos, hijo?!")
          									}
          								  case 1:
/*<518>*/ 									printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000001>¡Has vuelto!\nA ver... ¿Qué trabajo podría \nencargarte?\n\n<0x10009:0x00000700>Hmmm... Y es cierto que tienes ese\ninstrumento tan curioso...\n\n\n<0x10009:0x000b1000>¡Ya está!\n¡Ya sé qué trabajo te puedo encargar!\n\n\n<0x10009:0x00000700>Aunque ahora que lo pienso,\nes un trabajo para el turno\nde noche, más bien...\n\n¿Por qué no vuelves más tarde, hijo?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf(/* textboxtype: 0, unk: 2, line: 58 */ "<0x10009:0x00000006>¡Todavía no sé lo que voy a darte!\n¡Vuelve más tarde!\n\n\n¿O te interesa comprar un poco de sopa\nde calabaza y contribuir a las arcas\nde La Calabaza Flotante?\n[1-]Si\ninsistes...[2]No, gracias")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf(/* textboxtype: 2, unk: 0, line: 57 */ "<0x10009:0x000b100e>¡Muy bien!\n¡Por lo que veo has terminado\ncon las calabazas, hijo!\n\n<0x10009:0x00000700>Pero... ¡me temo que aún no\nhas acabado de saldar tu deuda\npor lo de la lámpara!\n\n<0x10009:0x00080000>Voy a pensar en el próximo trabajo que\npuedo darte. ¡Ven a verme más tarde!")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf(/* textboxtype: 0, unk: 1, line: 85 */ "¡Eh! ¡Haz caso a todo lo que te diga\nCalabel y ayúdale a recoger las\ncalabazas!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf(/* textboxtype: 1, unk: 0, line: 87 */ "Pero ten en cuenta que solo se puede\ntrabajar en el huerto por el día.\n\n\n¡A saber lo que te podría pasar\nsi empiezas a recoger calabazas\nen mitad de la noche!")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf(/* textboxtype: 0, unk: 0, line: 62 */ "¡Has venido, y justo a tiempo!\n¡Tengo otra cosita para ti, hijo!\n\n\nTu siguiente trabajillo es <color red<ayudar\nen la cosecha de calabazas>coloroff>,\n¡y no quiero oír ni una queja!\n[1-]Bueno...[2]¡Ni pensarlo!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00080704>¡Es una tarea bien fácil!\n¿Sabes dónde está el huerto de\ncalabazas del que se ocupa mi hija?\n\n¡Quiero que lleves las calabazas hasta\nel cobertizo! Ve a hablar con <color blue<Calabel\n>coloroff>y ella te lo explicará todo.")
/*<133>*/ 											printf(/* textboxtype: 1, unk: 0, line: 87 */ "Pero ten en cuenta que solo se puede\ntrabajar en el huerto por el día.\n\n\n¡A saber lo que te podría pasar\nsi empiezas a recoger calabazas\nen mitad de la noche!")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>No sé por qué pierdo el tiempo contigo.\n¡¿Por qué no reflexionas un poco\nsobre tus actos, hijo?!")
          										}
          									  case 1:
/*< 20>*/ 										printf(/* textboxtype: 0, unk: 1, line: 61 */ "¡Fantástico! ¡Has conseguido llevarle\nla sopa a tiempo al maestro de esgrima!\n\n\n<0x10009:0x000c0700>Voy a restar tu paga de la factura\nde la lámpara...\n\n\n<0x10009:0x000f0900>¡Pero no te vayas a pensar que con esto\nya has saldado tu deuda!\n\n\nTu siguiente trabajo es <color red<ayudar\nen la recogida de calabazas>coloroff>,\n¡y no quiero oír ni una queja!\n[1-]Bueno...[2]¡Ni pensarlo!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000006>¿Qué es lo que te pasa ahora?\n¡Todavía estoy pensando lo\nque te voy a mandar hacer!\n\nNo va a aparecer una lámpara en el\ntecho por arte de magia, ¿a que no?\nEso cuesta mucho dinero. Espera,\nya sé...\n¿Por qué no te llevas un poco de sopa\nde calabaza y contribuyes a las arcas\nde La Calabaza Flotante?\n[1-]Si\ninsistes...[2]No, gracias")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000b100e>¡Estupendo! ¡Has conseguido llevarle\nla sopa al maestro de esgrima!\n\n\nVoy a restar tu paga de la factura\nde la lámpara...\n\n\n<0x10009:0x00080700>¡Pero esto no se ha acabado, hijo!\nAún tengo que decidir lo que\nvoy a encargarte después.\n\nNecesito tiempo para pensarlo.\nVen a verme un poco más tarde.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000001>¡Como pasen más de <color red<5 minutos >coloroff>la sopa\nse quedará fría! ¡Date prisa y llévasela\nal maestro de esgrima!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000008>¡¿Qué es lo que te dije?!\n¡La sopa no se puede quedar fría!\n¡Nunca, jamás!\n\nQué desastre... Vamos, ven, que te voy\na dar más.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf(/* textboxtype: 0, unk: 1, line: 76 */ "¡Pero me la tienes que pagar, eh!\nSon <color red<10 rupias>coloroff>.")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x0000000d>¿Qué pasa? ¿No tienes ni 10 rupias?\nBueno, por esta vez te la puedo\ndejar gratis...")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "¡Pero si no tienes una botella vacía!\n\n\n\n¡Para llevar sopa necesitas una botella\nvacía, hijo!\n\n\n¡Vamos, consigue una por ahí y después\nven a verme!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000007>¿Qué pasa ahora, hijo?\n¿No te queda sopa?\n\n\n<0x10009:0x000d0a00>¿Es que te la has bebido o qué?\n\n\n\nSupongo que no se puede hacer nada.\n¡Bueno, toma, aquí tienes más!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000007>¿Qué pasa ahora, hijo?\n¿No te queda sopa caliente?\n\n\n<0x10009:0x000d0a00>¿Es que te la has bebido o qué?\nEstá bien, toma un poco más.\n¡Pero no se te ocurra malgastarla!")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "¡Pero si no tienes una botella vacía!\n\n\n\n¡Para llevar sopa necesitas una botella\nvacía, hijo!\n\n\n¡Vamos, consigue una por ahí y después\nven a verme!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>¡Ajá, veo que has traído una botella\nvacía!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf(/* textboxtype: 1, unk: 0, line: 69 */ "¡Así me gusta! ¡Aquí tienes la <color yellow<sopa de\ncalabaza>coloroff>, <color yellow<calentita>coloroff> y recién hecha!\n\n\n<0x10009:0x00000700>Vamos, llévasela cuanto antes al\nmaestro de esgrima.")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00010700>Ah, y otra cosa...\n¡El maestro de esgrima odia tomarse\nsu sopa de calabaza fría!\n\nAsí que más te vale llevársela\nrápidamente.\n\n\nMmm... ¡Calculo que tendrás que\nentregarla en <color red<menos de 5 minutos\n>coloroff>o se enfriará!\n")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "¡Pero si no tienes una botella vacía!\n\n\n\n¡Para llevar sopa necesitas una botella\nvacía, hijo!\n\n\n¡Vamos, consigue una por ahí y después\nven a verme!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf(/* textboxtype: 0, unk: 1, line: 67 */ "¿Qué, estás listo para empezar a\npagarme mi lámpara?\n\n[1-]Por\nsupuesto[2]No...")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf(/* textboxtype: 1, unk: 0, line: 66 */ "¡Eso está mejor! ¡Te tomo la palabra!\n\n\n\n<0x10009:0x00000700>Veamos... Para empezar, quiero\nque le lleves un pedido de sopa al\n<color red<maestro de esgrima>coloroff> de la academia\nde caballeros, en <color red<Neburia>coloroff>.\n<0x10009:0x00080700>Es un cliente habitual, y para\nponerse en marcha cada día necesita\ntomarse un sorbo de mi sopa.\n\n¿Y bien? ¿Preparado para llevarle\nla sopa al maestro?\n[1-]Por\nsupuesto[2]Ahora\nmismo no")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf(/* textboxtype: 1, unk: 0, line: 78 */ "¡Pero si no tienes una botella vacía!\n\n\n\n¡Para llevar sopa necesitas una botella\nvacía, hijo!\n\n\n¡Vamos, consigue una por ahí y después\nven a verme!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x000d0a0d>¡Los hombres de verdad cumplen con su\npalabra, hijo!\n\n\nDebes llevarle esta sopa al maestro\nde esgrima en la academia de\ncaballeros, ¿entendido?\n[1-]Está bien[2]Ahora no")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf(/* textboxtype: 0, unk: 0, line: 71 */ "¡¿Cómo?! ¡¿Tienes el valor de venir\naquí, romper mi lámpara y pretendes\nirte así, sin más?!")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 0, unk: 0, line: 65 */ "¡¿Por qué has hecho eso?!\n\n\n\n¡Has destrozado mi preciosa\nlámpara de araña artesanal!\n\n\n¡Vas a trabajar para mí gratis\nhasta que pagues el importe\nde la lámpara, hijo!...\n\n¡Hasta la última rupia! ¿Entendido?\n[1-]Entendido[2]No")
          										goto flw_75
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*<559>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<557>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000001>¡Hola, hola! ¿Te apetece degustar mi\ndeliciosa <color red<sopa de calabaza>coloroff>?\n[1-]Un sorbito[2]No, gracias")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000001>¡Bienvenido a La Calabaza Flotante,\nel local favorito de nueve de cada diez\njinetes celestes!\n\n¡Te aseguro que nunca probarás un\ncaldo igual a la <color red<sopa de calabaza >coloroff>casera\nque preparamos aquí!\n\n¿Quieres un sorbito? ¡Así verás\nlo que te has estado perdiendo\nhasta ahora!\n[1-]Solo uno[2]No, gracias")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00000001>Esta Calabel... Si necesitaba ayuda,\npodría habérmela pedido a mí...\n¡Soy todo un experto en calabazas!")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x1a000003>Pero es que... eso tampoco está bien...\nNo me parece normal que los clientes\ntrabajen recogiendo calabazas...")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf(/* textboxtype: 0, unk: 1, line: 139 */ "<0x10009:0x00000002>¡No te preocupes! Pienso esforzarme\nel doble que el hombre-topo ese.")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x1a000009>Vaya, vaya... ¡Pues en ese caso, te tomo\nla palabra!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf(/* textboxtype: 0, unk: 0, line: 140 */ "<0x10009:0x00090705>Con tal de ver un destello de su sonrisa,\npodría estar trabajando toda la\neternidad... ¡Ja, ja, ja!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 0, unk: 0, line: 200 */ "<0x10009:0x00000003>¡Si es nuestro trabajador incansable!\n¡Siéntate, que debes estar cansadísimo!\n\n\n¡Aquí ya eres como de la familia!\nLa próxima vez deberías venir como\ncliente y disfrutar de la compañía.\n\nAh, por cierto. Si te interesa, puedes\nvolver a trabajar en el mesón cuando\nte plazca. ¡Te pagaré bien, lo prometo!")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 0, unk: 1, line: 199 */ "<0x10009:0x00000003>¿Te parece el mejor momento para\ntomarte un descanso? ¿Seguro que\nno tienes nada más que hacer?")
          		  case 1:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00000003>¿Te parece bien pasarte el tiempo\nsentado en la barra de un mesón,\na tu edad? Por favor...\n\n<0x10009:0x000d0700>En fin, por otro lado supongo que no\nviene mal relajarse y tomarse las cosas\ncon tranquilidad de vez en cuando...\n\n<0x10009:0x00001000>Bueno, relájate. ¡No te molestaré más!")
          		}
          	}
          }

          void entrypoint_117_11() {
/*<213>*/ 	start()
/*<211>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*<216>*/ 		entrypoint_117_12();
          	  case 1:
/*<208>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*<212>*/ 			printf(/* textboxtype: 0, unk: 1, line: 154 */ "<0x10009:0x00000004>Siempre le llevo la sopa a <color blue<Narisha\n>coloroff>a esa isla del <color red<arcoíris>coloroff>, que está justo\ndentro del nubarrón.<sound 4>\n\n<0x10009:0x00000700>No te preocupes, la verás en cuanto\nllegues; no te puedes perder.\n¡Buena suerte!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x000f090d>Oye, ¿qué diantres ha pasado?\n¡Si hubiera sabido que ibas a cambiar\nde idea, no me habría tomado la\nmolestia de preparar la sopa!\n<0x10009:0x000a0000>¡Ese robot tuyo me la ha traído\nde vuelta!\n[1-]Lo siento[2-]Volvamos a\nintentarlo")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf(/* textboxtype: 0, unk: 1, line: 157 */ "<0x10009:0x000d0900>Bueno, como es para Narisha,\nno me importa preparar otro perol.")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf(/* textboxtype: 0, unk: 0, line: 149 */ "<0x10009:0x00000900>¡Tú espérame por aquí, hijo!\n¡No sabes las ganas que tenía ya\nde empezar a cocinar!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					wait_frames(45)
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					wait_frames(10)
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x000b1009>¡Ya está, aquí la tienes!\n\n\n\n<0x10009:0x000f1100>Aunque he preparado la receta\nmiles de veces, ¡te aseguro que esta\nes la mejor <color yellow<sopa de calabaza>coloroff>\nque he cocinado jamás!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf(/* textboxtype: 0, unk: 1, line: 151 */ "Avisaré al robot, <0x10012:0x00000001>amo.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					wait_frames(10)
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					wait_frames(15)
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf(/* textboxtype: 0, unk: 0, line: 152 */ "<0x10012:0x00000064>¡Hola, Fay, guapísima! ¡Ya estoy aquí!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10012:0x00000064>¡Buf, esto que me mandas cargar pesa\nuna tonelada! Pero no te preocupes.\nSi es por ti, cargaré con cualquier cosa.\n\n¡Ya me dirás adónde quieres que lo\nlleve! Te espero afuera.\n")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf(/* textboxtype: 0, unk: 1, line: 154 */ "<0x10009:0x00000004>Siempre le llevo la sopa a <color blue<Narisha\n>coloroff>a esa isla del <color red<arcoíris>coloroff>, que está justo\ndentro del nubarrón.<sound 4>\n\n<0x10009:0x00000700>No te preocupes, la verás en cuanto\nllegues; no te puedes perder.\n¡Buena suerte!")
/*<210>*/ 					story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = true;
/*<385>*/ 					story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */] = true;
/*<467>*/ 					story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<232>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
          					goto flw_462
          				}
          			  case 1:
/*<521>*/ 				switch (scene_flags[33 /* 0x5 02 */]) {
          				  case 0:
/*<203>*/ 					printf(/* textboxtype: 0, unk: 0, line: 143 */ "<0x10009:0x00000001>¿Qué te pasa? Tienes cara de estar\nmuy preocupado, hijo...\n[1-]Verás...[2]¿En serio?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf(/* textboxtype: 1, unk: 0, line: 147 */ "<0x10009:0x000d0d04>¿<color blue<Narisha>coloroff>?<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n\n<0x10009:0x00000700>Sí, conozco a Narisha, pero que yo sepa\nno le pasa nada raro...\n\n\n<0x10009:0x00080700>Suelo ofrecerle un perol lleno\nde <color red<sopa de calabaza>coloroff>, una vez al año.\nAunque esta vez...\n\n¡Por culpa de ese nubarrón ni he podido\nllegar hasta él! Así que el pobre\nNarisha se ha quedado sin su sopa...\nEs una lástima.")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf(/* textboxtype: 0, unk: 1, line: 148 */ "<0x10009:0x000d0d08>¿Cómo dices?... ¿En serio?\n¿Te ofreces a llevarle la sopa a <color blue<Narisha\n>coloroff>tú mismo?\n\n<0x10009:0x00000700><0x10006:0xfdcd>Hmm...<0x10006:0x00cd> No sé cómo piensas sortear\nel obstáculo que supone ese tremendo\nnubarrón, pero bueno...\n\n<0x10009:0x000b1000>Si crees que puedes hacerlo,\nme pongo ahora mismo a preparar\nla sopa. ¡Narisha se va a chupar\nlas aletas, palabra!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000005>Bueno, quizá me equivoque... \nEn fin, si todo va bien, busca un sitio\ny ponte cómodo.")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf(/* textboxtype: 0, unk: 1, line: 145 */ "<0x10009:0x00000004>Si tú dices que estás bien, yo te creo,\nclaro que sí. Así que... ¿qué tal si\nempiezas a trabajar para pagarme\nla lámpara?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf(/* textboxtype: 1, unk: 0, line: 146 */ "<0x10009:0x00000001>¡Bienvenido a La Calabaza Flotante,\nel local favorito de nueve\nde cada diez jinetes celestes!\n\n¡Y el único lugar del mundo donde\npodrás degustar mi deliciosa sopa\nde calabaza!\n\nHijo, por tu cara, parece que te \npreocupa algo...\n[1-]Lo cierto\nes que...[2]¿Tú crees?")
          					goto flw_204
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_46() {
/*<399>*/ 	start()
/*<403>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<404>*/ 		printf(/* textboxtype: 1, unk: 0, line: 186 */ "No tienes remedio, chico...\nMira lo que has hecho.\n\n\n¿Crees que vale la pena todo este\nlío para hacer caer cuatro simples\nrupias?...")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf(/* textboxtype: 0, unk: 0, line: 185 */ "<color blue<Carpín>coloroff> es un experto en arreglar \ntodo tipo de cosas.\n\n\nSeguro que él podría arreglar el molino\nde Neburia rápidamente.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf(/* textboxtype: 0, unk: 1, line: 184 */ "Hace bastante que no veo a <color blue<Aspir\n>coloroff>por el <color blue<bazar>coloroff>...\n\n\nQué lástima. Era un gran vidente...")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0, line: 183 */ "La pobre <color blue<Calabel>coloroff> casi no da abasto\ncon tanto trabajo.\n\n\n¿Conoces a alguien a quien se le dé\nbien cavar agujeros? Si es así,\nle sería muy útil su ayuda.")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf(/* textboxtype: 0, unk: 0, line: 182 */ "¿Has visto alguna vez la colección\nde plantas de <color blue<Buhel>coloroff>?\n\n\nSeguro que ha descubierto\nunas cuantas especies más\ndesde la última vez que yo la vi.")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf(/* textboxtype: 0, unk: 1, line: 181 */ "¿Has visto últimamente a <color blue<Dodo>coloroff>?\nMe pregunto qué tal le irá...\n\n\nHay que reconocer que se esfuerza\nmucho por construir un lugar donde\nla gente pueda jugar a la ruleta,\neso es verdad.")
          						  case 1:
/*<416>*/ 							printf(/* textboxtype: 1, unk: 0, line: 180 */ "Parece que está de moda lanzarse\nen caída libre a La Calabaza Flotante\ndesde el cielo...\n\nY he oído que se te acercan unas aves\nde colores muy bonitas y muy vistosas. \n\n\nDicen que si empiezan a volar contigo,\nes señal de buena fortuna. ¡No me digas\nque no te gustaría intentarlo!")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_29() {
/*<476>*/ 	start()
/*<486>*/ 	set_camera(31, 0)
/*<477>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 485, 'param3': 15}
/*<485>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 26, 'next': 478, 'param3': 14}
/*<478>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 483, 'param3': 16}
/*<483>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<482>*/ 		printf(/* textboxtype: 0, unk: 0, line: 197 */ "<0x10009:0x1a000001>No te quedes ahí sentado...\n¡Tienes que ir a hablar con mi padre\nahora mismo!\n\n<0x10009:0x1a1a0800>Se va a enojar muchísimo, ya lo verás.")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf(/* textboxtype: 0, unk: 1, line: 196 */ "<0x10009:0x1a000001>¡Bienvenido!\n¡En La Calabaza Flotante servimos\nla mejor <color red<sopa de calabaza >coloroff>que hayas\nprobado en toda tu vida!\n<0x10009:0x1a1a0800>Este es un lugar de lo más acogedor,\nya lo verás. ¡Ponte cómodo y disfruta\nde un momento de merecido descanso!")
          		goto flw_480
          	}
          }

          void entrypoint_117_12() {
/*<215>*/ 	start()
          	goto flw_520
          }

          void entrypoint_117_47() {
/*<405>*/ 	start()
/*<407>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<408>*/ 		printf(/* textboxtype: 0, unk: 0, line: 188 */ "¿Se puede saber qué ha pasado?...")
          	  case 1:
/*<406>*/ 		printf(/* textboxtype: 0, unk: 1, line: 187 */ "¡Estoy aquí todas las noches,\nno falto ni una!")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf(/* textboxtype: 0, unk: 1, line: 127 */ "<0x10009:0x000b0704>¡Qué susto me has dado, chico!\nCreo que acabo de envejecer un año\nentero de repente, por lo menos...\n\n<0x10009:0x000a0700>Bueno, ya no importa.\nA lo que íbamos...")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf(/* textboxtype: 0, unk: 1, line: 130 */ "<0x10009:0x00000004>La lámpara nueva es mucho más\ngrande que la anterior, pero me\nparece que da demasiada luz...\n¡Así no hay quien se concentre!")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10009:0x000b0c04>¡¿Dices que has empujado la lápida?!\n\n\n\n<0x10009:0x000a0f00>Y dime, ¿viste al demonio?\nDa miedo, ¿verdad?\n\n\n¡A mí no me engañas, jovencito!\nSeguro que te llevaste el susto\nde tu vida...")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x00000001>Te ha sorprendido mi historia,\n¿verdad? ¿O es que acaso quieres\nmás detalles?...\n[1-]¿Por la\nnoche?[2-]¿Cementerio?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf(/* textboxtype: 0, unk: 1, line: 121 */ "<0x10009:0x000b0704>Eso es. Si no me crees, deberías ir\ntú mismo a Neburia <color red<de noche >coloroff>y verás\ncómo cambia la ciudad, verás.\n\nTú vuelve allí, <color green<échate a dormir en\nla cama>coloroff>, levántate en plena noche...\n¡y luego me cuentas qué tal!\n\n<0x10009:0x000a0f00>Aunque mejor harías en olvidarte del\nasunto, chico. ¡Vete a saber qué podría\nllegar a pasarle a un jovencito como tú!")
          						  case 1:
/*< 67>*/ 							printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x000b0704>Al <color red<golpear la lápida >coloroff><color red<que está junto\nal árbol >coloroff>en el cementerio... ¡se iluminó\nde repente, yo lo vi!\n\nEntonces el demonio <color red<empujó la lápida\n>coloroff>y la puerta de su guarida se abrió sola.\n\n\n¡Y hecho esto, el demonio se metió\ndentro, tan tranquilamente!\n\n\n<0x10009:0x000a0f00>Si no te lo crees, es problema tuyo.\n¡Pero luego no me culpes cuando\nte trague vivo por la noche!")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 1, line: 118 */ "<0x10009:0x000b0704>¡Hay un monstruo suelto por las calles\nde Neburia y a nadie le importa!\nPero tú sí me crees, ¿verdad, chico?\n\nBueno, en realidad no es un monstruo.\n¡Es un demonio! Nadie que lo haya visto\nha vivido para contarlo.\n\n<0x10009:0x000b0700>Mmm... no tienes idea de lo que\nte estoy hablando, ¿no?...\n\n[1-]Cuéntame[2]No me\nimporta")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x000a0f00>De... de verdad, ¡lo he visto!\n¡Y si sigo vivo es porque reuní todo mi\ninigualable valor y escapé por poco!\n\n<0x10009:0x000b0700>¡Cualquier otro se habría desmayado\nen esa situación, puedes creerme!")
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 0, unk: 1, line: 124 */ "<0x10009:0x000b0700>Digo que vi a un demonio y nadie\npuede convencerme de lo contrario.\n\n\nEstaba paseando <color red<de noche>coloroff>, cerca\nde ese árbol tan grande que hay en\nel cementerio...\n\nFue entonces cuando lo vi.\n¡<color red<Golpeó la lápida más cercana\nal árbol >coloroff>y esta se iluminó!\n\nDespués, <color red<empujó la lápida >coloroff>y la puerta\nde su guarida se abrió sola...\n\n\nEntró en ella y cerró la puerta con\nuna delicadeza exquisita. Eso también\nes cierto.\n\n<0x10009:0x000b0700>¡Fue horrible, lo digo en serio!\n¡Más vale que nadie se acerque\nal <color red<cementerio por la noche>coloroff>!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 0, line: 123 */ "Pero... ¡Qué modales! ¡No puedes\ndejar a un pobre anciano con la\npalabra en la boca!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00000001>Tú me crees, ¿verdad?\n\n[1-]¿Creer qué?[2-]Te creo[3]No te creo")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10009:0x000b0703>¡Un terrible demonio anda suelto\npor las calles de Neburia! \n\n\n¡Faltó muy poco para que me comiera\nvivo el otro día!\n\n\n<0x10009:0x000b0700>Y no creas que por ser aprendiz\nde caballero tú te vas a librar si\nte lo encuentras...")
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x000b0e04>¡Menos mal! ¡Eres un buen chico!")
          				  case 2:
/*< 61>*/ 					printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000a0f03>Ufff.<pause 20>.<pause 20>.<pause 20> Estos jóvenes de hoy en día...")
          				}
          			}
          		  case 1:
          			goto flw_56
          		}
          	  case 1:
          		goto flw_56
          	}
          }

          void entrypoint_117_13() {
/*<285>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000008>Eso es. ¡Le deseo mucha suerte en su\nnuevo trabajo, <pause 10>don <pause 10>hombre-<pause 10>topo!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x00000001>Casi no me creo que Calabel\nhaya vuelto a cantar... ¡Hacía tanto\nque no la escuchaba! ¡Ay! Creo que\nme he enamorado de ella otra vez... ")
          	  case 1:
/*<422>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00000001>¿Sabes qué?\n\n\n\nAntes, <color blue<Calabel>coloroff> solía subirse al\nescenario de vez en cuando y nos\ndeleitaba con algunas canciones.\n\n<0x10009:0x00090700>¡Ojalá hubiera aquí un buen músico\npara acompañarla! Así se animaría\na cantarnos de nuevo, seguro.")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000004>¡No hay voz más bella que la de\nCalabel! Muy distinta a la voz \ntan horrible de mi esposa...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf(/* textboxtype: 0, unk: 1, line: 127 */ "<0x10009:0x000b0704>¡Qué susto me has dado, chico!\nCreo que acabo de envejecer un año\nentero de repente, por lo menos...\n\n<0x10009:0x000a0700>Bueno, ya no importa.\nA lo que íbamos...")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10009:0x00000004>Calabel tiene una voz preciosa.<pause 10>.<pause 10>.<pause 10>\nPero el músico que la acompañaba\nse ha marchado, y desde entonces\nella no ha vuelto a cantar... \n¡Es una pena!")
          			  case 1:
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000004>¡Ni se te ocurra pasear de noche\npor Neburia! ¿No sabes la cantidad\nde cosas horribles que hay de noche?\n\n¡Si quieres hablar conmigo, ven\na verme por la mañana! A mi edad,\nde noche no me quedan fuerzas\npara charlas.")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000005>Bueno... quiero decir... eh...\nBien, de acuerdo... Supongo que\nal menos puedo probar a ver qué tal.")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 37, unk: 1, line: 43 */ "<0x10009:0x00000009>¡¿Qué te parece?!")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000012><0x10008:0x02cd>¡¿Se puede saber qué\nestás haciendo?!\n\n\n<0x10008:0x00cd>¡Baja aquí ahora mismo!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000009>Pero... ¡No puede ser! ¡Eres increíble!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "¡Eh, tú!\n\n\n\nNo pensarás que voy a permitir que\nrompas mi lámpara y hacer como si\nno hubiera pasado nada, ¿verdad?")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 0, unk: 37, line: 44 */ "<0x10009:0x00000006>Jo, jo, jo... ¿Hablas en serio?\n¡Esto es lo más fácil del mundo!\n\n\n¡Para un mogma, remover toda esta\ntierra es pan comido!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "¡Eh, tú!\n\n\n\nNo pensarás que voy a permitir que\nrompas mi lámpara y hacer como si\nno hubiera pasado nada, ¿verdad?")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>¿Por qué no lo haces otra vez?\n¡Por favor! ¡Por favor!")
          }

          void entrypoint_117_01() {
          	start()
/*< 82>*/ 	switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          	  case 0:
/*< 93>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          			  case 0:
/*< 95>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 96>*/ 					switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          						  case 0:
/*<506>*/ 							switch (temp_flags[17 /* 0x3 02 */]) {
          							  case 0:
/*<100>*/ 								printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00130808>¡Es increíble, puede hacer el trabajo\nde cien hombres! ¡Le estoy taaan\nagradecida por toda su ayuda!...")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00130808>Desde que el hombre-topo está aquí,\nel trabajo en el huerto va muy bien.\n¡Ahora podemos plantar incluso\nmás calabazas!")
/*<511>*/ 									zone_temp_flags[7 /* 0x1 80 */] = true;
          									goto flw_388
          								}
          							}
          						  case 1:
/*<607>*/ 							switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          							  case 0:
/*<608>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          							  case 1:
/*<598>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 234, 'param3': 31}
/*<234>*/ 								printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0e0f>Y, por casualidad, ¿no podrías ir a ver\nsi esa persona puede venir un día\nde estos?")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf(/* textboxtype: 0, unk: 0, line: 38 */ "El <sound 4><color red<rastreador>coloroff> no está ajustado para\nir en busca del individuo al que busca\nesta chica.\n\n¿Desea mi <0x10012:0x00000001>amo reajustar el <sound 4><color red<rastreador\n>coloroff>para proceder a la búsqueda de <color red<alguien\ncapaz de trabajar la tierra>coloroff>?\n[1-]Por favor[2]Ahora no")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000005>Entendido, amo.\n\n\n\nEl <sound 4><color red<rastreador>coloroff> ha sido ajustado para\ndetectar la presencia del individuo\nque busca esta chica.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000005>Entendido, amo. Procedo a cancelar\nla orden de reajuste del <sound 4>rastreador.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>Oye, ¡muchas gracias por ayudarme\nel otro día a llevar todas las calabazas!\nAhora hay que plantar semillas nuevas.\n\n<0x10009:0x00010100><pause 30>Pero antes hay que arar el huerto\ny prepararlo bien.\n\n\n<0x10009:0x000b0e00>Es un montón de trabajo para mí sola...\n\n\n\n<0x10009:0x00070700>¿Dónde podría encontrar a alguien\nal que se le dé bien cavar agujeros y\nesas cosas?\n[1-]Conozco a\nalguien...[2]No sé")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070809>¡¿En serio?!\n¡Pues podrías decirle a esa persona\nque venga a ayudarme!\n\n<0x10009:0x00010700>Si la ves un día de estos, haz el favor\nde traerla para acá, ¿me oyes?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf(/* textboxtype: 0, unk: 0, line: 35 */ "Hay un 90% de probabilidades de que\nesta tarea esté relacionada con las\n<color yellow<gemas de gratitud>coloroff>.\n\nProcedo a ajustar el <sound 4><color red<rastreador >coloroff>para\nbuscar a alguien que pueda ayudar\na la chica a labrar el huerto.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\nPor lo tanto, ¿debería configurar\nel rastreador para buscar a <color red<alguien\ncapaz de trabajar la tierra>coloroff>?\n[1-]Por favor[2]Ahora no")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "Entendido, <0x10012:0x00000005>amo. Procedo a ajustar\nel rastreador para buscar un <color red<labriego>coloroff>.")
/*<565>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<566>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<567>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<568>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<569>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<570>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<574>*/ 								open_dowsing_wheel(15)
          								flw_572:
/*<572>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 571, 'param3': 36}
/*<571>*/ 								story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
/*<597>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 573, 'param3': 16}
/*<573>*/ 								printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>Espero que no me estés diciendo todo\nesto solo para que me sienta mejor...\n\n\n<0x10009:0x00070700>Bueno, vamos a ser optimistas.\n¡Esperaré aquí pacientemente hasta\nque aparezca ese famoso experto\narador!")
          							  case 1:
/*<596>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Entendido. Si el <0x10012:0x00000005>amo cambia de\nopinión, solo tiene que volver a\nhablar con esta persona.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00011611>¡¿Me estás diciendo que no te importa\ndejar que una chica frágil y delicada\ncomo yo se ponga a arar la tierra\nella sola?!\n¡Y yo que creía que eras un caballeroso\ncaballero!...")
          						}
          					}
          				  case 1:
          					flw_387:
/*<387>*/ 					entrypoint_117_25();
          				}
          			  case 1:
          				goto flw_387
          			}
          		  case 1:
          			goto flw_387
          		}
          	  case 1:
/*< 84>*/ 		switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          		  case 0:
          			goto flw_34
          		  case 1:
/*<540>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*< 85>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>¡Vaya, mira quién está aquí!\n¡Si es el caballero que rompió\nnuestra lámpara de araña!\n¿Qué, ya has saldado tu deuda?\n<0x10009:0x00010700>Ah, sí, es verdad...<pause 30>\nMi padre me ha dicho que tiene más\ntrabajo para ti.\n\n<0x10009:0x00070700>Deberías ir a hablar con él.")
          			  case 1:
/*<541>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000001>¡Vaya, mira quién está aquí!\n¡Si es el caballero que rompió\nla lámpara de araña! ¿Ya has saldado\ntu deuda ayudando a mi padre?\n<0x10009:0x00010700>Mmm, tu deuda... Eso me recuerda\nque estamos en época de cosecha\nde calabazas...<pause 30>\n\n<0x10009:0x00070700>Y lo cierto es que me cuesta muchísimo\nllevarlas de un sitio a otro, ¿sabes?")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000000c>Si me lo pides así... ¡está hecho!\n¡Adelante!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	wait_frames(45)
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00130809>¡Lo sabía! ¡Las has llevado todas!\n\n\n\n<0x10009:0x00010700>Ya no te queda ninguna más, ¿no?\n¡Genial!\n\n\n<0x10009:0x00190800>¡Mil <pause 15>gracias, <pause 15>señor<pause 15> caballero<pause 15> galante!")
          	  case 1:
/*< 33>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00011611>¡Oh, no! ¡Se te han caído!\nMira que eres torpe...\n\n\n<0x10009:0x00070700>Bueno, puedes volver a intentarlo\ncuando quieras... ¡Si es que te ves\ncapaz de superar el desafío, claro!")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	wait_frames(45)
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00011611>¡Oh, no! ¡Se te han caído!\nMira que eres torpe...\n\n\n<0x10009:0x00070700>Bueno, puedes volver a intentarlo\ncuando quieras... ¡Si es que te ves\ncapaz de superar el desafío, claro!")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00101604>Mira lo que has hecho...\nY eso que te lo advertí, ¿eh?\n\n\n<0x10009:0x001a1600>¡Si mi padre te deja las orejas rojas\nde los tirones, no me eches la culpa!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000001>¡Hola! ¡Bienvenido de nuevo!\n\n\n\nMi padre me ha contado que tienes\nque ganar dinero para pagarle\nla lámpara...\n\n<0x10009:0x001a0800>¡Te va a costar bastante, pero creo\nque lo puedes lograr! ¡Ánimo y suerte!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x001a1000>¡¿Qué?! ¿Le ha pasado algo malo\na Narisha?\n\n\nAhora que lo mencionas, recuerdo\nque mi padre solía ofrendarle sopa\nde calabaza cada año. Seguro que\npuede contarte cosas sobre Narisha.")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00101604>Mira lo que has hecho...\nY eso que te lo advertí, ¿eh?\n\n\n<0x10009:0x001a1600>¡Si mi padre te deja las orejas rojas\nde los tirones, no me eches la culpa!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>¡Hola!\n¡Por tu indumentaria deduzco que\neres un caballero de Neburia!\n\n<0x10009:0x001a0800>Toma asiento y relájate. \n¡En La Calabaza Flotante estás\nen tu casa! \n\n<0x10009:0x000d0700>Oh, una cosa... ¿Te has fijado en\nlas rupias que hay en lo alto\nde la lámpara de araña?\n\n<0x10009:0x00100000>Hagas lo que hagas, no se te ocurra\nintentar bajarlas de ahí.\n\n\nAlgunos dicen que puedes chocarte\ncontra algo para mover la lámpara\ny que caigan al suelo...\n\n<0x10009:0x001a1600>Pero, por lo que más quieras...\n¡Que no se te <0x10006:0xfccd>OCURRA <0x10006:0x00cd>probarlo!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>¡Hola!\n\n\n\n¡Bienvenido a La Calabaza Flotante!\n¡Por favor, ponte cómodo!\n<pause 30>Oye, ¿te encuentras bien?\nSe te ve un poco alterado...")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	wait_frames(45)
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf(/* textboxtype: 1, unk: 0, line: 141 */ "¡Aquí traigo al viejo mogma!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf(/* textboxtype: 0, unk: 0, line: 158 */ "<0x10009:0x00171411>Vaya... al ver lo bonito que es ese\ninstrumento, pensé que sonaría\nun poco mejor...\n\n<0x10009:0x00011600>Y me temo que a los clientes tampoco\nparece haberles entusiasmado mucho.")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf(/* textboxtype: 0, unk: 0, line: 161 */ "<0x10009:0x00171411>Bueno, supongo que no ha estado mal...\n\n\n\n<0x10009:0x00011600>Aunque, sinceramente, creo que\npuedes hacerlo mucho mejor...")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00161309>¡Vaya! ¡Eres mucho mejor\nde lo que imaginaba! Me parece\nque he subestimado tus virtudes\nmusicales...\n<0x10009:0x00070700>¡A ver si volvemos a tocar juntos\nalgún otro día para alegrar un poco\na la clientela!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf(/* textboxtype: 0, unk: 1, line: 160 */ "<0x10009:0x00150d0a>¡Has estado fantástico! Tocas mucho\nmejor de lo que yo canto... ¡Y eso que\nno canto mal, modestia aparte!\n\n<0x10009:0x00070800>Bueno, quiero que sepas que soy tu fan\nnúmero uno desde hoy. ¡Estoy deseando\nvolver a oírte tocar!")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	wait_frames(45)
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 0, unk: 1, line: 142 */ "¡Recuerdos para Fay, amo verdoso!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x000a090d>¡¿Pero qué era eso?! Tu actuación ha\nsido tan lamentable que Calabel\nparecía un gato chillando.\n\n<0x10009:0x000d0000>¡Escúchame bien, hijo!\nSi no mejoras, no vas a volver\na tocar en mi local hasta que los\nneburís críen pelo.")
          		  case 1:
/*<600>*/ 			printf(/* textboxtype: 1, unk: 1, line: 171 */ "<0x10009:0x00000010>Sinceramente, espero que no tengas\npensado ganarte la vida tocando, hijo.\n¡Porque no pienso pagarte ni una sola\nrupia si no lo haces mejor!")
          		  case 2:
/*<333>*/ 			printf(/* textboxtype: 1, unk: 0, line: 168 */ "<0x10009:0x0000000e>No lo has hecho nada mal. Con un poco\nde práctica, puede que hasta logres\nimpresionar a mi hija.\n\n<0x10009:0x000e0700>Aquí tienes una recompensa por\ntu actuación: ¡<color red<20 rupias>coloroff>!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf(/* textboxtype: 0, unk: 1, line: 169 */ "<0x10009:0x000b100c>¡Así se toca, <heroname>!\n¡Impresionante! Aquí tienes,\n<0x10009:0x000c0700>¡te has ganado estas <color red<50 rupias>coloroff>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x000f0a0d>¿Pero qué haces? ¿A eso le llamas tú\ntocar? ¡Si piensas que te voy a dar\nuna rupia por este desastre musical,\nestás loco!\n<0x10009:0x000a0900>¡Y no me mires así! Ha sido una\nactuación penosa... ¡Más te vale\nconcentrarte y hacerlo mejor\nla próxima vez!")
          		  case 1:
/*<601>*/ 			printf(/* textboxtype: 0, unk: 0, line: 170 */ "<0x10009:0x00000010>Mmm... Normalmente estaría pidiendo\nla cabeza del autor de ese desastre\nmusical, pero por ser tu primera vez,\nlo dejaré pasar.")
          			flw_258:
/*<258>*/ 			printf(/* textboxtype: 1, unk: 0, line: 165 */ "<0x10009:0x000b0700>¡Hijo, con esto ya has hecho más\nque suficiente para saldar tu deuda\nconmigo! ¡Felicidades!\n\n<0x10009:0x000e1100>Creo que va siendo hora de comprar\nuna lámpara nueva...\n\n\n<0x10009:0x000d0700>Como has hecho un buen trabajo,\nte mereces una recompensa...\n¡Aquí tienes!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf(/* textboxtype: 0, unk: 1, line: 166 */ "<0x10009:0x00010700>Y espero verte más por aquí, ¿eh?\n¡Como cliente, claro está!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf(/* textboxtype: 0, unk: 1, line: 163 */ "<0x10009:0x0000000e>¡Bueno, no ha estado nada mal!\nEs bastante pasable.")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf(/* textboxtype: 0, unk: 0, line: 164 */ "<0x10009:0x000b100c>Me has sorprendido mucho...\n¡Mira, se me saltan las lágrimas!\nNunca pensé que fueras un músico\ntan extraordinario.")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0003080c>¡Pero...! Mira lo que has hecho,\ncompañero...\n\n\n<0x10009:0x00000100>Como no te largues ahora mismo,\nel tipo de la barra te va a aplastar\ncomo a un insecto de esos que cazo yo.")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf(/* textboxtype: 0, unk: 1, line: 193 */ "<0x10009:0x00000001>Por cierto, <heroname>,\nsi cazas algún insecto por ahí\ny no te interesa quedarte con él,\ndámelo a mí, ¿de acuerdo?\n<0x10009:0x00120000>Aunque lo ideal sería que vinieras por\nla noche a mi cuarto de la academia y\nme trajeras todos los insectos que\nte sobren.")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00120001>Si logras pasar por el agujero,\nsurcarás los cielos a toda velocidad,\ncomo el mismo viento.\n\n<0x10009:0x00030104>Pero tratándose de ti, puede que acabes\nestampándote contra el peñasco... \nJu, ju, en vez de acelerar, vas a frenar\nen seco.")
          				  case 1:
/*<580>*/ 					printf(/* textboxtype: 0, unk: 0, line: 194 */ "<0x10009:0x00000001>Escucha, <heroname>,\nte voy a contar algo que te va a gustar.\n\n\nCuando vas volando, a veces se ven\n<color red<peñascos con agujeros>coloroff>, ¿verdad que sí?\n\n\nPues he oído que tienen un poder\nmisterioso... si logras pasar por\nel agujero, puedes aumentar tu\nvelocidad de vuelo por un <color red<tiempo>coloroff>.\n<0x10009:0x00120000>Es un truco que usan los jinetes más\nveteranos para moverse rápidamente\npor los cielos.")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n\n\n\n<0x10009:0x00120000>No pensé que fuera a encontrarte\npor aquí. Y supongo que te preguntarás\nqué hago yo en un lugar como este...\n[1-]Claro[2-]No...")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf(/* textboxtype: 0, unk: 1, line: 190 */ "<0x10009:0x00030104>Creo que ya te lo he contado alguna\nvez: soy un apasionado de los insectos.\n\n\nPor eso me he venido hasta aquí, a ver\nsi conseguía cazar unos cuantos por\nesta isla.\n\n<0x10009:0x00040100>Si tienes un cazamariposas, tú también\npuedes intentarlo. Es muy divertido,\nya verás.\n\nY si no, ve a la tienda de Terry\ny te compras uno, así de fácil.\nSuele tener cazamariposas\na buen precio.\n<0x10009:0x00120100>Seguro que está volando por Neburia\nahora mismo.")
          				  case 1:
/*<447>*/ 					printf(/* textboxtype: 0, unk: 0, line: 191 */ "<0x10009:0x00040805>Ah, ¿no?...\n\n\n\n<0x10009:0x00040100>Bueno, pues peor para ti...\nYa se ve que no te gustan los insectos,\ncomo a mí...")
          				}
          			}
          		}
          	}
          }

