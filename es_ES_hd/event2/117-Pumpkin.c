          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf("\x0E\x01\x09\x04\x11\x1153Anda que... Chaval, la has liado parda.\n¡Te vas a llevar un buen tirón de orejas!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf("\x0E\x01\x09\x04\x00\x01Gracias a tu ayuda el dueño ha podido\ncambiar la lámpara que tú mismo\ndestrozaste...\n\n\x0E\x01\x09\x04\x00\x300Y yo me pregunto... No estarás\nintentando ganar puntos para\nconquistar a Calabelle, ¿eh?\n¡Que no me entere yo!")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf("\x0E\x01\x09\x04\x00\x01Al final ha quedado claro que todo\naquello del demonio no era más que\nuna historia para asustar a los niños...\n\n\x0E\x01\x09\x04\x00\x300Lo que yo decía: ¡ese abuelete\nes un trolero de cuidado!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oye, ¿lo has oído?...\n\n\n\n¡Ese abuelete de ahí dice que ha visto\nun demonio!\n\n\n\x0E\x01\x09\x04\n\x300Si pretende impresionar a Calabelle\ncon esas historias, lo lleva claro...")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x11\x1104No serás de esos tipos supersticiosos\nque creen en demonios y tonterías\npor el estilo, ¿verdad?\n\n\x0E\x01\x09\x04\n\x300¡Oye, un momento!...\n¿No será que tú también pretendes\ntirarle los tejos a Calabelle?")
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
/*<176>*/ 	printf("\x0E\x01\x09\x04\x07\x803Me alegro de que me hayas traído a\neste abuelete tan apañado. ¡Va a ser\nuna gran ayuda, estoy segura!\n\nA partir de ahora pienso pedirle que\nhaga un montón de tareas por mí.\n\x0E\x01\x09\x04\x13\x800¡Mil <pause05>gracias, <pause05>don <pause05>caballerete<pause05>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x09\x04\x00\x08¡Quieto ahí! Deja a los profesionales\nque hagan su tarea, chaval...")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf("\x0E\x01\x09\x04\x00\x04¿Qué te apetece, hijo?\n[1]Tocar\nla lira[2]Tomar\nsopa[3-]Nada,\ngracias")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf("\x0E\x01\x09\x04\x0E\x1000¡Genial! Tú y Calabelle entretendréis\na los clientes.")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Lo siento, pero mi chiquilla solo actúa\npor la noche. ¡Vuelve más tarde!")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf("\x0E\x01\x09\x04\x08\x1004¡Si un jovenzuelo como tú viene a\nprobar mi sopa, eso es que sabe\napreciar las cosas buenas de la vida!\n\nLa botella son <r<10 rupias>> del ala.\n\n[1]¡Venga![2-]Olvídalo")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf("¡La sopa está mucho más rica caliente!\nEn 5 minutos ya se habrá enfriado...")
          					  case 1:
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x700¿No tienes una botella vacía?\n\n\n\n¡Si quieres tomar sopa, vas a necesitar\nuna botella vacía! Tráeme una\ny te daré sopa.")
          					}
          				  case 1:
/*<319>*/ 					printf("\x0E\x01\x09\x04\x0C\x700Andas un poco corto de rupias, ¿no?\nMejor pásate por aquí en otra ocasión.")
          				}
          			  case 1:
/*<323>*/ 				printf("\x0E\x01\x09\x04\x0D\xA00¡Venga, hijo, decídete!")
          			}
          		  case 2:
/*<313>*/ 			printf("\x0E\x01\x09\x04\x08\x1000Ya veo... Bueno, en ese caso, busca\nuna silla libre y relájate.\nTú a tu aire, estás en tu casa.\n\n\x0E\x01\x09\x04\x00\x700¡Ah, y no te olvides de saludar\na mi Calabelle cuando la veas!")
          		}
          	  case 1:
/*<309>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\nQué, ¿te gusta mi nueva lámpara?\n\n\n\x0E\x01\x09\x04\x0B\x1100Me ha costado un riñón, que lo sepas...")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf("\x0E\x01\x09\x04\x0D\x1006(...)\n¿Que crees que no vale lo que me\nhe gastado?\n\n\x0E\x01\x09\x04\x08\x09¡Anda ya! Te lo perdono porque sin\ntu esfuerzo no habría podido comprar\nuna lámpara tan estupenda...\n\n\x0E\x01\x09\x04\x0C\x900Pero procura no cargarte esta también,\n¿entendido?")
/*<311>*/ 		printf("\x0E\x01\x09\x04\x08\x700Bueno, hijo, ¿en qué puedo ayudarte?\n¿Quieres volver a trabajar para mí,\ncomo antes?\n\n\x0E\x01\x09\x04\x0E\x700Te pagaría bien, por supuesto.\n¡Podrías tocar un rato la lira!\nAunque quizá hayas venido a\ntomarte una deliciosa sopita...\n[1]Trabajar[2]¡Sopa![3-]Estoy liado")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x701Mira quién está aquí: ¡el caballerete\nque me ayuda tan gentilmente con el\nhuerto de calabazas!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf("\x0E\x01\x09\x04\x1B09\x702Bah, eso no es nada... Aquí el menda \nte podría dejar el huerto listo mucho\nantes que ese viejo-topo de ahí fuera.")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("\x0E\x01\x09\x04\x00\x08¿En seriooo? ¡Ay, qué maravilla!...\nNo lo estarás diciendo por decir, ¿no?")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf("\x0E\x01\x09\x04\x1B07\x705¡Ja, ja, ja! ¡Si tú me lo pides, Calabelle,\nme da lo mismo que haya que arreglar\nun huerto o apagar un incendio!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Vaya, vaya... ¡Pues en ese caso, te tomo\nla palabra encantada de la vida!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf("¡Qué majos sois todos! ¡Os quiero\nun montón, chicos!\x0E\x01\x09\x04\x07\x703")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf("\x0E\x01\x09\x04\x00\x09¡Genial! ¡Lo has conseguido!")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x01\x705Pero...\nEsto no es una persona...\n\n\n\x0E\x01\x09\x04\x07\x700A ver si lo entiendo... ¿Se supone que\neste... señor va a roturar el huerto\npor mí?")
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
/*<201>*/ 				printf("\x0E\x01\x09\x04\x07\x703¿De verdad me vas a ayudar?\n¡Estaba segura de que se podía\ncontar contigo! ¡Qué majo eres!\n[1]A mandar[2-]Ni hablar")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf("\x0E\x01\x09\x04\x13\x809¡Genial! ¡Ya sabía yo que no me\ndecepcionarías!\x0E\x01\x05\x04\x1E\x00")
          					flw_87:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x07\x700Si quieres llevarlas todas al mismo\ntiempo, el truco es <r<caminar despacio>>.\n\n\nSi las calabazas se escoran a la derecha,\nve hacia la derecha. Y si se te van a la\nizquierda, ve hacia la izquierda. ¡Hay\nque mantener el equilibrio, nada más!\n\x0E\x01\x09\x04\x01\x700¡Como te pongas nervioso y empieces\na correr, se te van a caer todas!\nY ya está, <pause14>tampoco tiene más misterio.\n¡Ánimo, caballerete!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf("\x0E\x01\x09\x04\x01\x1606¿En serio? ¡Y yo que pensaba que\nestarías encantado de echarle una\nmano a una señorita en apuros!...")
          						  case 1:
/*<514>*/ 							printf("\x0E\x01\x09\x04\x01\x1611¿De verdad? Espero que el resto\nde caballeros de tu promoción no\nsean igual de sosos...")
          						}
          					  case 1:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x1606¿En serio? ¡Se lo voy a comentar\na mi padre, a ver qué opina!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf("\x0E\x01\x09\x04\x07\x808¡Sería genial poder volver a contar\ncontigo para transportar las calabazas!\n\x0E\x01\x06\x02\xFBCD¡Don caballerete\x0E\x01\x06\x02Í galante!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf("\x0E\x01\x09\x04\x01\x700¡Me vienes de maravilla! ¿Te ves con\nfuerzas para ganarte unas rupias\ncon el sudor de tu frente?\n\n\x0E\x01\x09\x04\x07\x700Tengo unas cuantas calabazas más para\ntransportar. ¿Me ayudarías?...\n¡Pienso pagarte, por supuesto!\n[1]Claro[2-]Ni hablar")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf("\x0E\x01\x09\x04\x07\x703Pues venga, andando.\n¡Voy a mostrarte adónde tienes que\ntransportar las calabazas, caballerete!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf("¡Que no se te caigan por el camino!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf("\x0E\x01\x09\x04\x00\x0FUna vez recogida la cosecha, solo queda\nplantar las nuevas semillas. ¡Pero antes\nhay que roturar el huerto a conciencia!\n\n¿Dónde podría encontrar a alguien a\nquien se le dé bien esto de remover\nla tierra?...")
/*<396>*/ 							printf("\x0E\x01\x09\x04\x01\x700¡Ah, y otra cosa! Bueno, en realidad\nes un favorcillo de nada... Verás, es que\nno he podido con todas las calabazas.\n\n\x0E\x01\x09\x04\x07\x700¿Te importaría echarme una mano\ny llevarlas al cobertizo? ¡No te pido\nque lo hagas gratis, por supuesto!\n[1]Claro[2-]Ni hablar")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x01¿Te lo has pensado mejor y quieres\nayudarnos con la recogida\nde calabazas?\n[1]Pues sí[2-]Pues no")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x01\x701¡Ah, hola! ¿Has venido a <r<ayudarme\ncon la recogida de calabazas>>?\n\n\n\x0E\x01\x09\x04\x07\x700Pues me viene de perlas, la verdad.\nNo sabes lo que pesan las condenadas...\n\n\n\x0E\x01\x09\x04\x01\x1600¿Dices que no te va a costar mucho\nesfuerzo llevarlas? ¿En serio?\n\n\n\x0E\x01\x09\x04\x01\x700Je, je, je... ¿Pues qué te parece\nsi le damos un poco de emoción\na la cosa? ¡A ver si eres capaz de\nllevar <r<5 calabazas >>al mismo tiempo!\n\x0E\x01\x09\x04\x07\x1600Pero más te vale tener cuidado:\no vas despacito o se te caerán.\n¡Venga, a por esas calabazas!\n[1]¡A por\nellas![2-]Ahora no")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf("\x0E\x01\x09\x04\x13\x809¡Perfecto! ¡Qué pasada, las has llevado\ntodas! Parece que has nacido para esto\nde trabajar en el campo...\n\n\x0E\x01\x09\x04\x07\x800¡Toma, estas 50 rupias son para ti!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf("\x0E\x01\x09\x04\x07\x800¡Mil <pause0F>gracias,<pause0F> don<pause0F> caballerete!\n¡Vuelve cuando quieras!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x09\x04\x13\x809¡Lo sabía! ¡Las has llevado todas!\n\n\n\n\x0E\x01\x09\x04\x01\x700Ya no te queda ninguna más, ¿no?\n¡Genial!\n\n\n\x0E\x01\x09\x04\x19\x800¡Mil <pause0F>gracias, <pause0F>don<pause0F> caballerete<pause0F>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x01\x1611¡Oh, no! ¡Se te han caído!\nMira que eres torpe...\n\n\n\x0E\x01\x09\x04\x07\x700En fin, puedes volver a intentarlo\ncuando quieras... ¡Si es que te ves\ncapaz de superar el desafío, claro!")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x09\x04\x00\x06Jo, jo, jo... ¡No hay nada como un duro\ndía de trabajo para poner a punto\nlas articulaciones!\n\n\x0E\x01\x09\x04\x0C\xD00Pero si te digo la verdad...\n¡Con mirar a esa chica se me\nolvidan todos los cansancios!\n\n\x0E\x01\x09\x04\x01\x900Oye<pause0A>.<pause0A>.<pause0A>.<pause0A>\n¿Tú has visto cómo me mira\nla chavala?...\n\n\x0E\x01\x09\x04\x0C\xD00Yo creo que le hago tilín, ¡te lo digo yo!\n\n\n\n\x0E\x01\x09\x04\x09\xD0BNada, nada, ¡decidido! ¡Mañana pienso\ndespachar el doble de faena!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf("\x0E\x01\x09\x04\x00\n¡¿Cómo?! ¡¿Insinúas que ahora voy\na tener que pasarme los días de sol\na sol trabajando en el campo?!\n\n¡Ja! ¿Quieres decir que me has traído\nhasta aquí solo para esto? ¿Me tomas\nel pelo, chaval?...")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x08\x1004¡Si un jovenzuelo como tú viene a\nprobar mi sopa, eso es que sabe\napreciar las cosas buenas de la vida!\n\nLa botella son <r<10 rupias>> del ala.\n\n[1]¡Venga![2-]Olvídalo")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf("¡Aquí te va una ración de sopa bien\ncalentita! ¡Anda, toma!")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf("¡La sopa está mucho más rica caliente!\nEn 5 minutos ya se habrá enfriado...")
          				  case 1:
/*<116>*/ 					printf("\x0E\x01\x09\x04\x00\x700¿No tienes una botella vacía?\n\n\n\n¡Si quieres tomar sopa, vas a necesitar\nuna botella vacía! Tráeme una\ny te daré sopa.")
          				}
          			  case 1:
/*<114>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Andas un poco corto de rupias, ¿no?\nMejor pásate por aquí en otra ocasión.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf("\x0E\x01\x09\x04\x10\x705Claro, claro, por supuesto.\nEl Calabarza's tiene más encantos\naparte de la sopa... ¡Como alternar con\nuna clientela de lo más selecta!\nRelájate y disfruta del ambiente.\nSolo tienes que recordar una cosa:\nNO rompas nada ni montes líos\nen mi bar.\n\x0E\x01\x09\x04\x08\x700¡Y me estoy refiriendo a esa lámpara\nde araña artesanal y valiosísima que\ncuelga del techo!\n\n\x0E\x01\x09\x04\x00\x900Como te vea colgándote de ella\nlamentarás haber nacido,\n¿me has entendido?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf("\x0E\x01\x09\x04\x10\x905Mira, hijo... Vas a tener que trabajar\npara mí hasta pagarme la lámpara que\nte has cargado.\n\n\x0E\x01\x09\x04\x00\x700Pásate por aquí en otro momento y ya\npensaré alguna tarea para darte.")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf("\x0E\x01\x09\x04\x10\x905Mira, hijo... Vas a tener que trabajar\npara mí hasta pagarme la lámpara que\nte has cargado.\n\n\x0E\x01\x09\x04\x00\x700Pásate por aquí en otro momento y ya\npensaré alguna tarea para darte.")
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
/*<141>*/ 				printf("\x0E\x01\x09\x04\x01\x70FEspero que no me estés diciendo todo\nesto solo para que me sienta mejor...\n\n\n\x0E\x01\x09\x04\x07\x700Bueno, vamos a ser optimistas.\n¡Esperaré aquí pacientemente hasta\nque aparezca ese famoso experto\nen roturaciones!")
          			  case 1:
/*<139>*/ 				printf("\x0E\x01\x09\x04\x00\x0FUna vez recogida la cosecha, solo queda\nplantar las nuevas semillas. ¡Pero antes\nhay que roturar el huerto a conciencia!\n\n¿Dónde podría encontrar a alguien a\nquien se le dé bien esto de remover\nla tierra?...")
          			}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\x01\x701¿Quieres echar una mano\ncon la recogida de calabazas?\n\n\n\x0E\x01\x09\x04\x07\x700Aunque ya se ha hecho algo tarde para\nponerse a trabajar... Anda, mejor\nvente cuando se haga de día.\n¡El huerto no se va a mover de aquí!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hombre, mira quién está aquí!\n¡Si es el caballerete que se cargó\nnuestra lámpara de araña!\n¿Qué, has saldado ya tu deuda?\n\x0E\x01\x09\x04\x01\x700Ah, sí, es verdad...<pause1E>\nMi padre me ha dicho que tiene más\ntrabajo para ti.\n\n\x0E\x01\x09\x04\x07\x700Deberías ir a hablar con él.")
          		  case 1:
/*<424>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Mira quién está aquí!\n¡Pero si es el caballerete que se cargó\nla lámpara de araña! ¿Has saldado\nya tu deuda?")
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
/*<472>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01No te quedes ahí sentado...\n¡Tienes que ir a hablar con mi padre\na la voz de ya!\n\n\x0E\x01\x09\x04\x1A1A\x800Se va a poner hecho un basilisco, verás.")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01¡Bienvenido!\n¡En el Calabarza's servimos la mejor\n<r<sopa de calabaza >>que hayas probado\nen toda tu vida!\n\x0E\x01\x09\x04\x1A1A\x800Este es un lugar de lo más acogedor,\nya lo verás. ¡Ponte cómodo y disfruta\nde un momento de merecido descanso!")
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
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x00\x0E¡Por fin has saldado tu deuda\npor lo de la lámpara de araña!\n¡Lo has hecho muy bien, hijo!\n\nPor un momento pensé que ibas a tirar\nla toalla, ¡pero has aguantado hasta\nel final!\n\n\x0E\x01\x09\x04\x00\x1000¡La próxima vez que vengas, te recibiré\ncomo a un cliente más!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf("\x0E\x01\x09\x04\x00\x01Entonces, ¿vas a tocar una vez más\npara mi Calabelle?\n\n[1]¡Venga![2]Cómo tocar[3-]Olvídalo")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf("\x0E\x01\x09\x04\x00\x0E¡Estupendo! ¡Vamos a empezar!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf("\x0E\x01\x09\x04\x0D\x02¡Ya verás como lo haces muy bien!\n¡Calabelle!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf("\x0E\x01\x09\x04\x1A00\x08Sí, papá. ¿Qué quieres?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf("\x0E\x01\x09\x04\x0B\xB00Este caballerete va a ser tu pareja\nmusical. ¿Por qué no nos deleitas un\npoco con esa voz tuya de ruiseñor?")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf("¡Vale! ¡Puede ser divertido!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf("\x0E\x01\x09\x04\x00\x0EBien, voy a explicártelo otra vez, hijo.")
          										flw_265:
/*<265>*/ 										printf("\x0E\x01\x09\x04\x00\x700Cuando Calabelle se ponga a cantar,\nlos clientes empezarán a seguir el ritmo\nde la canción. Debes tocar siguiendo\nsu ritmo.\n\x0E\x01\x09\x04\x0F\x700Los clientes empezarán a balancearse\nde izquierda a derecha. Deberás tocar\nsiguiendo el ritmo de ese balanceo,\n¿estamos?\nNo te preocupes demasiado por\nla dirección, pero procura no tocar\nni muy lento ni muy rápido. Esa es\nla clave de una buena actuación.\n\x0E\x01\x09\x04\x08\x700Por cierto, cuando los clientes se\ndetengan, ¡podrás dar rienda suelta\na tu imaginación y tocar como te dé\nla gana!\nEso sí, lo más importante es seguir\nsiempre el ritmo. ¿Entendido, hijo?\n[1]Todo claro[2-]Repítelo\notra vez")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf("¿No te has enterado de nada?\n¡A ver si prestamos más atención!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf("\x0E\x01\x09\x04\x00\x04¡No pasa nada! Tómate tu tiempo\ny avísame cuando estés listo.")
          									}
          								  case 1:
/*<519>*/ 									printf("\x0E\x01\x09\x04\x00\x01¡Tú otra vez!\n<pause1E>Ya sé lo que estás pensando.\n¡Estás deseando ponerte a\ntocar la lira! ¿A que sí?\nPues ya lo siento, pero por el día no\nhacemos actuación. Tenemos que\npreparar el escenario y todo eso.\n¡Mejor ven por la noche!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf("\x0E\x01\x09\x04\x00\x01¡Has vuelto! A ver, a ver...\n¿Qué tarea puedo encargarte\npara que hagas?...\n\n\x0E\x01\x09\x04\x0D\x700Oye, ese instrumento que llevas\nahí es muy raro, ¿cómo se llama?\n\n\n\x0E\x01\x09\x04\x00\x1100¿Sabes una cosa? Mi Calabelle canta\ncomo los ángeles. ¡No lo parece, pero\nes la pura verdad!\n\n\x0E\x01\x09\x04\x00\x700Hasta hace bien poco cantaba aquí\nen el bar para amenizar las veladas.\n\n\n\x0E\x01\x09\x04\x08\x00Pero tuvo que dejarlo porque su pareja\nmusical se largó y, claro, sin melodía\nque acompañe, cantar es complicado...\n\n¿No te apetecería por un casual\nacompañar a mi chiquilla con ese\ninstrumento tuyo?\n[1]Claro\nque sí[2-]Claro\nque no")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x100E¡Estupendo! ¡Sabía que eras la persona\nindicada para el trabajo!\n\n\n\x0E\x01\x09\x04\x0D\xA00Pero escúchame bien: ¡nada de hacer\nel imbécil, que ya no eres ningún crío!\n¡Tómatelo en serio!")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf("\x0E\x01\x09\x04\x00\x11¡Menudo personaje estás hecho!\n¡¿Por qué no reflexionas\nun poco sobre tus actos, hijo?!")
          									}
          								  case 1:
/*<518>*/ 									printf("\x0E\x01\x09\x04\x00\x01¡Has vuelto!\nA ver... ¿Qué trabajo podría \nencargarte?\n\n\x0E\x01\x09\x04\x00\x700Oye, ese instrumento que llevas ahí\nes muy curioso, ¿cómo se llama?\n\n\n\x0E\x01\x09\x04\x0B\x1000¡Ya está!\n¡Ya sé qué trabajo te puedo encargar!\n\n\n\x0E\x01\x09\x04\x00\x700Aunque ahora que lo pienso,\nes un trabajo para el turno\nde noche, más bien...\n\n¿Por qué no vuelves más tarde, hijo?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x06¡Todavía no sé lo que voy a darte!\n¡Vuelve más tarde!\n\n\n¿O te interesa comprar un poco de sopa\nde calabaza y contribuir a las arcas\ndel Calabarza's?\n[1]Si\ninsistes...[2-]No, gracias")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf("\x0E\x01\x09\x04\x0B\x100E¡Muy bien!\n¡Por lo que veo has terminado con\nlas calabazas, hijo!\n\n\x0E\x01\x09\x04\x00\x700Pero... ¡me temo que aún no\nhas acabado de saldar tu deuda\npor lo de la lámpara!\n\n\x0E\x01\x09\x04\x08\x00Voy a pensar en el próximo trabajo que\npuedo darte. ¡Ven a verme más tarde!")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf("¡Eo! ¡Haz caso a todo lo que te diga\nCalabelle y échale una mano con\nlas calabazas!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf("Pero ten en cuenta que solo se puede\ntrabajar en el huerto por el día.\n\n\n¡A saber lo que te podría pasar\nsi te pones a recoger calabazas\nen mitad de la noche!")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf("¡Has venido, y justo a tiempo!\n¡Tengo otra cosita para ti, hijo!\n\n\nTu siguiente trabajillo es <r<ayudar\nen la cosecha de calabazas>>,\n¡y no quiero oír ni una queja!\n[1]Vale...[2-]¡Ni hablar!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf("\x0E\x01\x09\x04\x08\x704¡Es una tarea bien fácil!\n¿Sabes dónde está el huerto\nde calabazas del que se ocupa\nmi chiquilla?\n¡Quiero que lleves las calabazas hasta\nel cobertizo! Ve a hablar con <b<Calabelle\n>>y ella te lo explicará todo.")
/*<133>*/ 											printf("Pero ten en cuenta que solo se puede\ntrabajar en el huerto por el día.\n\n\n¡A saber lo que te podría pasar\nsi te pones a recoger calabazas\nen mitad de la noche!")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf("\x0E\x01\x09\x04\x00\x11¡Menudo personaje estás hecho!\n¡¿Por qué no reflexionas\nun poco sobre tus actos, hijo?!")
          										}
          									  case 1:
/*< 20>*/ 										printf("¡Estupendo! ¡Has conseguido llevarle\nla sopa a tiempo al maestro de esgrima!\n\n\n\x0E\x01\x09\x04\x0C\x700Voy a restar tu paga de la factura\nde la lámpara...\n\n\n\x0E\x01\x09\x04\x0F\x900¡Pero no te vayas a pensar que con esto\nya has saldado tu deuda!\n\n\nTu siguiente trabajito es <r<ayudar\nen la recogida de calabazas>>,\n¡y no quiero oír ni una queja!\n[1]Vale...[2-]¡Ni hablar!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf("\x0E\x01\x09\x04\x00\x06¿Qué es lo que te pica ahora?\n¡Todavía estoy pensando lo\nque te voy a mandar hacer!\n\nNo va a aparecer una lámpara\nen el techo por arte de magia,\n¿a que no? Eso cuesta su buen\ndinero. Espera, ya sé...\n¿Por qué no te llevas un poco de sopa\nde calabaza y contribuyes a las arcas\ndel Calabarza's?\n[1]Si\ninsistes...[2-]No, gracias")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf("\x0E\x01\x09\x04\x0B\x100E¡Estupendo! ¡Has conseguido llevarle\nla sopa al maestro de esgrima!\n\n\nVoy a restar tu paga de la factura\nde la lámpara...\n\n\n\x0E\x01\x09\x04\x08\x700¡Pero esto no se ha acabado, hijo!\nAún tengo que decidir lo que\nvoy a encargarte después.\n\nNecesito tiempo para pensármelo.\nVen a verme un poco más tarde.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf("\x0E\x01\x09\x04\x00\x01¡Como pasen más de <r<5 minutos >>la sopa\nse quedará fría! ¡Date prisa y llévasela\nal maestro de esgrima!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf("\x0E\x01\x09\x04\x00\x08¡¿Qué es lo que te dije?!\n¡La sopa no se puede quedar fría!\n¡Nunca, jamás!\n\nQué desastre... Anda, ven, que te voy\na dar más.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf("¡Pero me la tienes que pagar, eh!\nSon <r<10 rupias>>.")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf("\x0E\x01\x09\x04\x00\x0D¿Qué pasa? ¿No tienes ni 10 rupias?\nBueno, por esta vez te la puedo\ndejar gratis...")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf("¡¿Pero qué...?! ¡Si no tienes ninguna\nbotella vacía!\n\n\n¿Cómo pretendes llevar sopa sin una\nbotella vacía? Estos jóvenes de hoy...\n\n\n¡Anda, consigue una por ahí y vuelve\na verme después!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf("\x0E\x01\x09\x04\x00\x07¿Qué pasa ahora, hijo?\n¿No te queda sopa?\n\n\n\x0E\x01\x09\x04\x0D\xA00¿Es que te la has bebido o qué?\n\n\n\nMira que eres liante, chico...\n¡Anda, toma, aquí tienes más!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf("\x0E\x01\x09\x04\x00\x07¿Qué pasa ahora, hijo?\n¿No te queda sopa caliente?\n\n\n\x0E\x01\x09\x04\x0D\xA00¿Es que te la has bebido o qué?\nSi es que... Anda, toma un poco más.\n¡Pero no se te ocurra malgastarla!")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf("¡¿Pero qué...?! ¡Si no tienes ninguna\nbotella vacía!\n\n\n¿Cómo pretendes llevar sopa sin una\nbotella vacía? Estos jóvenes de hoy...\n\n\n¡Anda, consigue una por ahí y vuelve\na verme después!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf("\x0E\x01\x09\x04\x00\x01¡Ajá, veo que has traído una botella\nvacía!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf("¡Así me gusta! ¡Aquí tienes la <y<sopa de\ncalabaza>>, <y<calentita>> y recién hecha!\n\n\n\x0E\x01\x09\x04\x00\x700Llévasela al maestro de esgrima, anda.")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf("\x0E\x01\x09\x04\x01\x700Ah, y otra cosa...\n¡El maestro de esgrima odia tomarse\nsu sopa de calabaza fría!\n\nAsí que más te vale llevársela rapidito.\n\n\n\nMmm... ¡Calculo que tendrás que\nentregarla en <r<menos de 5 minutos\n>>o si no se enfriará!\n")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf("¡¿Pero qué...?! ¡Si no tienes ninguna\nbotella vacía!\n\n\n¿Cómo pretendes llevar sopa sin una\nbotella vacía? Estos jóvenes de hoy...\n\n\n¡Anda, consigue una por ahí y vuelve\na verme después!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf("¿Qué, tienes lo que hay que tener para\npagarme mi lámpara?\n\n[1]La duda\nofende[2-]Casi que\nno")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf("¡Eso está mejor! ¡Te tomo la palabra!\n\n\n\n\x0E\x01\x09\x04\x00\x700Veamos... Para empezar, quiero\nque le lleves un pedido de sopa al\n<r<maestro de esgrima>> de la academia\nde caballeros, en <r<Altárea>>.\n\x0E\x01\x09\x04\x08\x700El hombre es un cliente habitual,\ny para ponerse en marcha cada día\nnecesita tomarse un sorbo de mi sopa.\n\n¿Y bien? ¿Preparado para llevarle\nla sopa al maestro?\n[1]Por\nsupuesto[2-]Ahora\nmismo no")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf("¡¿Pero qué...?! ¡Si no tienes ninguna\nbotella vacía!\n\n\n¿Cómo pretendes llevar sopa sin una\nbotella vacía? Estos jóvenes de hoy...\n\n\n¡Anda, consigue una por ahí y vuelve\na verme después!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf("\x0E\x01\x09\x04\x0D\xA0D¡Los hombres de verdad cumplen con su\npalabra, hijo!... ¡No trates de escurrir\nel bulto ahora!\n\nDebes llevarle esta sopa al maestro\nde esgrima en la academia de\ncaballeros, ¿entendido?\n[1]Está bien[2-]Ahora no")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf("¡¿Que qué?! ¡¿Tienes el valor de venir\naquí, cargarte mi lámpara y encima\npretendes irte de rositas?!")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("Esto es una broma, ¿no?\n¡¿Qué es lo que has hecho?!\n\n\n¡Te has cargado mi preciosa\nlámpara de araña artesanal!\n\n\n¡Vas a trabajar para mí gratis\nhasta que pagues el importe\nde la lámpara, hijo!...\n\n¡Hasta la última rupia! ¿Entendido?\n[1]Entendido[2-]Ni hablar")
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
/*<557>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Pasa, pasa! ¿Te apetece degustar mi\ndeliciosa <r<sopa de calabaza>>?\n¡Entra de miedo!\n[1]Un sorbito[2-]No, gracias")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Bienvenido al Calabarza's,\nel local favorito de nueve\nde cada diez jinetes celestes!\n\n¡Te aseguro que nunca probarás\ncaldo igual a la <r<sopa de calabaza\n>>casera que preparamos aquí!\n\n¿Quieres un sorbito, para que veas\nlo que te has estado perdiendo\nhasta ahora?\n[1]Solo uno[2-]No, gracias")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Esta Calabelle... Si necesitaba ayuda,\npodría habérmela pedido a mí...\n¡Soy un fenómeno con las calabazas!")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf("\x0E\x01\x09\x04\x1A00\x03Pero es que... eso tampoco está bien...\nNo me parece normal que los clientes\nse pongan a trabajar recogiendo\ncalabazas...")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf("\x0E\x01\x09\x04\x00\x02¡No pasa nada! Pienso esforzarme\nel doble que el hombre-topo ese.")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Vaya, vaya... ¡Pues en ese caso, te tomo\nla palabra encantada de la vida!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf("\x0E\x01\x09\x04\x09\x705Solo por ver un destello de esa sonrisa,\npodría tirarme trabajando toda\nla eternidad... ¡Ja, ja, ja!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf("\x0E\x01\x09\x04\x00\x03¡Hombre, nuestro trabajador\nincansable! ¡Siéntate, que tienes\nque estar reventado!\n\n¡Aquí ya eres como de la familia!\n¿Qué, te pongo algo?\n\n\nAh, por cierto. Si te interesa, puedes\nvolver a trabajar en el bar cuando te\nplazca. ¡Te pagaré bien, lo prometo!")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x03¿Te parece el mejor momento para\ntomarte un descansito? ¿Seguro que\nno tienes nada más que hacer?")
          		  case 1:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x00\x03¿Te parece bonito pasarte el tiempo\nsentado en la barra de un bar, a tu\nedad? Desde luego...\n\n\x0E\x01\x09\x04\x0D\x700En fin, por otro lado supongo que no\nviene mal relajarse y tomarse las cosas\ncon tranquilidad de vez en cuando...\n\n\x0E\x01\x09\x04\x00\x1000¡Pues nada, nada, tú a tu aire!\n¡No te molesto!")
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
/*<212>*/ 			printf("\x0E\x01\x09\x04\x00\x04Siempre le llevo la sopa a <b<Narisha\n>>a esa isla del <r<arcoíris>>, que pilla justo\ndentro del nubarrón.<pling>\n\n\x0E\x01\x09\x04\x00\x700No te preocupes, la verás en cuanto\nllegues; no tiene pérdida.\n¡Buena suerte!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf("\x0E\x01\x09\x04\x0F\x90DOye, ¿qué demonios ha pasado?\n¡Si llego a saber que te ibas a echar\natrás, no me habría tomado la molestia\nde preparar la sopa!\n\x0E\x01\x09\x04\n\x00¡Ese robot tuyo me la ha traído\nde vuelta!\n\n[1]Lo siento[2]Vamos allá\notra vez")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf("\x0E\x01\x09\x04\x0D\x900Bueno, como es para Narisha,\nno me importa preparar otro perol...")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf("\x0E\x01\x09\x04\x00\x900¡Tú espérame por aquí, hijo!\n¡No sabes las ganas que tenía ya\nde ponerme a cocinar!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 224, 'param3': 6}
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 548, 'param3': 6}
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf("\x0E\x01\x09\x04\x0B\x1009¡Ya está, aquí la tienes!\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Mira que habré preparado la receta\nmiles de veces... ¡pero te aseguro\nque esta es la mejor <y<sopa de calabaza>>\nque he cocinado jamás!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf("Avisaré al robot, \x0E\x01\x12\x04\x00\x01amo.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 337, 'param3': 6}
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 341, 'param3': 6}
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf("\x0E\x01\x12\x04\x00d¡Hola, Fay, guapísima! ¡Ya estoy aquí!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf("\x0E\x01\x12\x04\x00d¡Buf, esto que me mandas cargar pesa\nun quintal! Pero tú tranquila, reina;\nsi es por ti yo cargo con cualquier cosa.\n\n¡Tú dirás adónde quieres que te lo\nlleve! Te espero fuera.\n")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x04Siempre le llevo la sopa a <b<Narisha\n>>a esa isla del <r<arcoíris>>, que pilla justo\ndentro del nubarrón.<pling>\n\n\x0E\x01\x09\x04\x00\x700No te preocupes, la verás en cuanto\nllegues; no tiene pérdida.\n¡Buena suerte!")
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
/*<203>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Qué te pasa? Tienes cara de estar\nmuy preocupado, hijo...\n[1]Verás...[2-]¿En serio?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf("\x0E\x01\x09\x04\x0D\xD04¿<b<Narisha>>?\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\n\x0E\x01\x09\x04\x00\x700Sí, conozco a Narisha, pero que yo sepa\nno le pasa nada raro...\n\n\n\x0E\x01\x09\x04\x08\x700Suelo ofrecerle un perol lleno hasta\nlos topes de <r<sopa de calabaza>>, una vez\nal año. Aunque esta vez...\n\n¡Por culpa de ese nubarrón ni he podido\nllegar hasta él! Así que el pobre\nNarisha se ha quedado sin su sopa...\nEs una lástima.")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf("\x0E\x01\x09\x04\x0D\xD08¿Cómo dices?... ¿En serio?\n¿Te ofreces a llevarle la sopa a <b<Narisha\n>>tú mismo?\n\n\x0E\x01\x09\x04\x00\x700\x0E\x01\x06\x02\xFDCD(...)\x0E\x01\x06\x02Í No sé cómo piensas sortear\nel obstáculo que supone ese tremendo\nnubarrón, pero en fin...\n\n\x0E\x01\x09\x04\x0B\x1000Si crees que puedes hacerlo,\nme pongo ahora mismo a preparar\nla sopa. ¡Narisha se va a chupar\nlas aletas, palabra!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf("\x0E\x01\x09\x04\x00\x05Bueno, quizá me equivoque... En fin,\nsi todo va bien, busca sitio y\nponte cómodo, anda.")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf("\x0E\x01\x09\x04\x00\x04Si tú dices que estás bien, yo te creo,\nfaltaría más. Así que... ¿qué tal si\nte pones a trabajar para pagarme\nlo de la lámpara?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Bienvenido al Calabarza's,\nel local favorito de nueve\nde cada diez jinetes celestes!\n\n¡Y el único lugar del mundo donde\npodrás degustar mi deliciosa sopa\nde calabaza!\n\nHijo, por tu cara, deduzco que te ronda\nalgo por la cabeza...\n\n[1]Lo cierto\nes que...[2-]¿Tú crees?")
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
/*<404>*/ 		printf("Desde luego, chaval... te la acabas\nde cargar con todo el equipo.\n\n\n¿Crees que merece la pena todo este\nestropicio para hacer caer cuatro\nmíseras rupias?...")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf("A <b<Carpín>> se le da de lujo arreglar\ntodo tipo de cosas.\n\n\nSeguro que él podría arreglar el molino\nde Altárea en un periquete.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf("Hace bastante que no veo a <b<Gorronte\n>>por el <b<bazar>>...\n\n\nQué lástima. Era un gran vidente...")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf("La pobre <b<Calabelle>> casi no da abasto\ncon tanto trabajo.\n\n\n¿Conoces a alguien a quien se le dé\nbien cavar hoyos? Si es así,\nle vendría de perlas su ayuda.")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf("¿Has visto alguna vez la colección\nde plantas de <b<Buhel>>?\n\n\nSeguro que ha descubierto\nunas cuantas especies más\ndesde la última vez que yo la vi.")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf("¿Has visto últimamente a <b<Dodo>>?\nMe pregunto qué tal le irá...\n\n\nAl tipo hay que reconocerle\nsus desvelos por construir\nun lugar donde la gente pueda\njugar a la ruleta, eso es verdad.")
          						  case 1:
/*<416>*/ 							printf("Parece que está de moda lanzarse\nen caída libre al Calabarza's desde\nel cielo...\n\nY he oído que a veces en pleno descenso\nse te acercan unas aves de colores muy\nbonitas, de lo más vistosas.\n\nDicen que si se ponen a volar contigo,\nes señal de buena fortuna. ¡Dan ganas\nde probar, no me digas que no!")
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
/*<482>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01No te quedes ahí sentado...\n¡Tienes que ir a hablar con mi padre\na la voz de ya!\n\n\x0E\x01\x09\x04\x1A1A\x800Se va a poner hecho un basilisco, verás.")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01¡Bienvenido!\n¡En el Calabarza's servimos la mejor\n<r<sopa de calabaza >>que hayas probado\nen toda tu vida!\n\x0E\x01\x09\x04\x1A1A\x800Este es un lugar de lo más acogedor,\nya lo verás. ¡Ponte cómodo y disfruta\nde un momento de merecido descanso!")
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
/*<408>*/ 		printf("¿Se puede saber qué ha pasado?...")
          	  case 1:
/*<406>*/ 		printf("¡Aquí estoy todas las noches, rapaz,\ncomo un clavo!")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf("\x0E\x01\x09\x04\x0B\x704¡Bonito susto me has dado, rapaz!\nCreo que acabo de envejecer un año\nentero de golpe, por lo menos...\n\n\x0E\x01\x09\x04\n\x700Bueno, ya da igual. A lo que íbamos...")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf("\x0E\x01\x09\x04\x00\x04La lámpara nueva es mucho más\ngrande que la anterior, pero me\nparece a mí que da demasiada luz...\n¡Así no hay quien se concentre!")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x0B\xC04¡¿Que has empujado la lápida?!\n\n\n\n\x0E\x01\x09\x04\n\xF00Y qué, ¿viste al demonio?\n¿A que da miedo?\n\n\n¡A mí no me engañas, malandrín!\nSeguro que te llevaste el susto\ndel siglo...")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf("\x0E\x01\x09\x04\x00\x01Qué, te has quedado de piedra con mi\nhistoria, ¿verdad? ¿O es que acaso\nquieres más detalles?...\n[1]¿Por la\nnoche?[2]¿Cementerio?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Eso es. Si no me crees, date tú mismo\nuna vuelta por Altárea <r<de noche >>y verás\ncómo cambia la ciudad, verás.\n\nTú vuelve allí, échate una <g<cabezada en\nla cama>>, levántate en plena noche...\n¡y luego me cuentas qué tal!\n\n\x0E\x01\x09\x04\n\xF00Aunque mejor harías en olvidarte del\nasunto, rapaz. ¡Vete a saber qué podría\nllegar a pasarle a un pimpollo como tú!")
          						  case 1:
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Al <r<golpear la lápida >><r<que está junto\nal árbol >>en el cementerio... ¡se iluminó\nde repente, yo lo vi!\n\nEntonces el demonio <r<empujó la lápida\n>>y la puerta de su guarida se abrió sola.\n\n\n¡Y hecho esto, el demonio se metió\ndentro tan ricamente!\n\n\n\x0E\x01\x09\x04\n\xF00Si no te lo crees, es problema tuyo.\n¡Pero luego no me vengas con\nmonsergas cuando se te coma\npor la noche!")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x0B\x704¡Hay un monstruo suelto por las calles\nde Altárea y a nadie le importa!\nPero tú sí me crees, ¿verdad, rapaz?\n\nBueno, en realidad no es un monstruo...\n¡Es un demonio! Nadie que lo haya visto\nha vivido para contarlo.\n\n\x0E\x01\x09\x04\x0B\x700Mmm... no tienes ni idea de lo que\nte estoy hablando, ¿no?...\n\n[1]Cuéntame[2-]Me da igual")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf("\x0E\x01\x09\x04\n\xF00De... de verdad, ¡lo he visto!\n¡Y si sigo vivo es porque reuní todo mi\ninigualable valor y escapé por los pelos!\n\n\x0E\x01\x09\x04\x0B\x700¡Cualquier otro se habría venido abajo\nen esa situación, puedes creerme!")
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x0B\x700Pues eso, que vi a un demonio y nadie\npuede convencerme de lo contrario.\n\n\nEstaba yo paseando <r<de noche>>, cerca\ndel árbol ese tan grande que hay en\nel cementerio...\n\nFue entonces cuando lo vi.\n¡<r<Golpeó la lápida más cercana \nal árbol >>y esta se iluminó!\n\nDespués, <r<empujó la lápida >>y la puerta\nde su guarida se abrió sola...\n\n\nEntró en ella y cerró la puerta con\nuna delicadeza exquisita, eso también\nhay que decirlo.\n\n\x0E\x01\x09\x04\x0B\x700¡Fue horrible, lo digo en serio!\n¡Más vale que nadie se acerque\nal <r<cementerio por la noche>>!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf("¡Hay que ver, vaya modales! Mira que\nquerer dejar a un pobre anciano con\nla palabra en la boca...")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tú me crees, ¿verdad?\n\n[1]¿Creer qué?[2]Te creo[3-]No te creo")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x0B\x703¡Un terrible demonio anda suelto por\nlas calles de Altárea! \n\n\n¡Faltó esto para que se me comiese\nvivo el otro día!\n\n\n\x0E\x01\x09\x04\x0B\x700Y no creas que por ser aprendiz\nde caballero tú te vas a librar si\nte lo encuentras...")
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x0B\xE04¡Vaya, hombre, menos mal!\n¡Tú sí que eres un mozo apañado!")
          				  case 2:
/*< 61>*/ 					printf("\x0E\x01\x09\x04\n\xF03Pche.<pause14>.<pause14>.<pause14> Esta juventud...\nNo sé adónde vamos a ir a parar.")
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
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\x08Eso es. ¡Le deseo mucha suerte en su\nnuevo trabajo, <pause0A>don <pause0A>hombre-<pause0A>topo!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf("\x0E\x01\x09\x04\x00\x01Casi no me creo que Calabelle\nhaya vuelto a cantar... ¡Hacía tanto\nque no la escuchaba! ¡Ay! Creo que\nme he enamorado de ella otra vez...")
          	  case 1:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x01¿Sabes qué?\n\n\n\nAntes, <b<Calabelle>> solía subirse\nal escenario de cuando en cuando\ny nos deleitaba con algunas canciones.\n\n\x0E\x01\x09\x04\x09\x700¡Ojalá hubiera aquí un buen músico\npara acompañarla! Así se animaría\na cantarnos de nuevo, seguro.")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf("\x0E\x01\x09\x04\x00\x04¡No hay voz más bella que la de\nCalabelle! Nada que ver con los\nberridos que pega mi mujer...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf("\x0E\x01\x09\x04\x0B\x704¡Bonito susto me has dado, rapaz!\nCreo que acabo de envejecer un año\nentero de golpe, por lo menos...\n\n\x0E\x01\x09\x04\n\x700Bueno, ya da igual. A lo que íbamos...")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf("\x0E\x01\x09\x04\x00\x04Calabelle tiene una voz preciosa.<pause0A>.<pause0A>.<pause0A>\nPero el músico que la acompañaba\nlo ha dejado, y desde entonces\nno ha vuelto a cantar... \n¡Es una pena!")
          			  case 1:
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x04¡Ni se te ocurra pasearte de noche por\nAltárea! ¿Me has oído? No te imaginas\nla de cosas horribles que merodean por\nahí a estas horas...\n¡Si quieres hablar conmigo, hazlo por\nla mañana! A mi edad, de noche no me\nqueda cuerda para andar de cháchara.")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf("\x0E\x01\x09\x04\x00\x05Bueno... quiero decir... eh...\nVale, de acuerdo... Supongo que\nal menos puedo probar a ver qué tal.")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x09¡¿Qué te parece?!")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x00\x12\x0E\x01\x08\x02\x2CD¡¿Se puede saber qué\nestás haciendo?!\n\n\n\x0E\x01\x08\x02Í¡Baja aquí ahora mismo, cernícalo!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\x09¡Madre mía! ¡Qué barbaridad!\n¡Eres increíble!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf("¡Eh, tú!\n\n\n\nNo te pensarás que voy a permitir que\nte cargues mi lámpara y hacer como si\nno hubiera pasado nada, ¿verdad?")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf("\x0E\x01\x09\x04\x00\x06Jo, jo, jo... ¡Venga ya! ¡Si esto es\nuna cosilla de nada!\n\n\n¡Para un moguma remover toda esta\ntierra es pan comido!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf("¡Eh, tú!\n\n\n\nNo te pensarás que voy a permitir que\nte cargues mi lámpara y hacer como si\nno hubiera pasado nada, ¿verdad?")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x00\n¿Por qué no lo haces otra vez?\n¡Porfa! ¡Porfa! ¡Porfa!")
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
/*<100>*/ 								printf("\x0E\x01\x09\x04\x13\x808¡Es una máquina, puede hacer la faena\nde cien hombres! ¡Le estoy taaan\nagradecida por todo lo que me ayuda!...")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf("\x0E\x01\x09\x04\x13\x808Desde que el hombre-topo está aquí,\nel trabajo en el huerto va como la seda.\n¡Ahora podemos plantar incluso\nmás calabazas!")
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
/*<234>*/ 								printf("\x0E\x01\x09\x04\x0B\xE0FY, por un casual, tú no podrías ir a ver\nsi esa persona puede pasarse por aquí\nun día de estos, ¿verdad?")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf("El <pling><r<rastreador>> no está ajustado para\nir en pos del individuo al que busca\nesta chica.\n\n¿Desea mi \x0E\x01\x12\x04\x00\x01amo reajustar el <pling><r<rastreador\n>>para proceder a la búsqueda de <r<alguien\ncapaz de trabajar la tierra>>?\n[1]Por favor[2-]Ahora no")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf("\x0E\x01\x12\x04\x00\x05Entendido, amo.\n\n\n\nEl <pling><r<rastreador>> ha sido ajustado para\ndetectar la presencia del individuo\nque busca esta chica.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf("\x0E\x01\x12\x04\x00\x05Entendido, amo. Procedo a cancelar\nla orden de reajuste del <pling>rastreador.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oye, ¡muchas gracias por ayudarme\nel otro día a llevar todas las calabazas!\nAhora toca plantar semillas nuevas.\n\n\x0E\x01\x09\x04\x01\x100<pause1E>Pero antes hay que roturar el huerto\ny prepararlo bien.\n\n\n\x0E\x01\x09\x04\x0B\xE00Es un montón de trabajo para mí sola...\n\n\n\n\x0E\x01\x09\x04\x07\x700¿Dónde podría encontrar a alguien\nal que se le dé bien cavar hoyos y\nesas cosas?\n[1]Me sé de\nalguien...[2-]Ni idea")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf("\x0E\x01\x09\x04\x07\x809¡¿En serio?!\n¡Pues ya podrías decirle a esa\npersona que venga a ayudarme!\n\n\x0E\x01\x09\x04\x01\x700Si la ves un día de estos, haz el favor\nde traerla para acá, ¿me oyes?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf("Hay un 90% de probabilidades de que\nesta tarea esté relacionada con las\n<y<gemas de gratitud>>.\n\nProcedo a ajustar el <pling><r<rastreador >>para\nbuscar a alguien que pueda ayudar a\nla chica a labrar el huerto.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\n¿Debería por tanto configurar el\nrastreador para buscar a <r<alguien\ncapaz de trabajar la tierra>>?\n[1]Por favor[2-]Ahora no")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf("Entendido, \x0E\x01\x12\x04\x00\x05amo. Procedo a ajustar\nel rastreador para buscar un <r<labriego>>.")
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
/*<573>*/ 								printf("\x0E\x01\x09\x04\x01\x70FEspero que no me estés diciendo todo\nesto solo para que me sienta mejor...\n\n\n\x0E\x01\x09\x04\x07\x700Bueno, vamos a ser optimistas.\n¡Esperaré aquí pacientemente hasta\nque aparezca ese famoso experto\nen roturaciones!")
          							  case 1:
/*<596>*/ 								printf("Entendido. Si el \x0E\x01\x12\x04\x00\x05amo cambia de\nparecer, solo tiene que volver a\nhablar con esta persona.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x01\x1611¡¿Me estás diciendo que no te importa\ndejar que una chica frágil y delicada\ncomo yo se ponga a arar la tierra\nella sola?!\n¡Y yo que creía que eras un caballeroso\ncaballero!...")
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
/*< 85>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hombre, mira quién está aquí!\n¡Si es el caballerete que se cargó\nnuestra lámpara de araña!\n¿Qué, has saldado ya tu deuda?\n\x0E\x01\x09\x04\x01\x700Ah, sí, es verdad...<pause1E>\nMi padre me ha dicho que tiene más\ntrabajo para ti.\n\n\x0E\x01\x09\x04\x07\x700Deberías ir a hablar con él.")
          			  case 1:
/*<541>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hombre, mira quién está aquí! ¡Si es\nel caballerete que se cargó la lámpara\nde araña! ¿Has saldado ya la deuda\nhaciendo trabajillos para mi padre?\n\x0E\x01\x09\x04\x01\x700Mmm, tu deuda... Eso me recuerda\nque estamos en época de cosecha\nde calabazas...<pause1E>\n\n\x0E\x01\x09\x04\x07\x700Y lo cierto es que me cuesta un triunfo\nllevarlas de un sitio a otro, ¿sabes?")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf("\x0E\x01\x09\x04\x00\x0CSi me lo pides así... ¡ea! ¡¡Allá voy!!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 361, 'param3': 6}
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf("\x0E\x01\x09\x04\x13\x809¡Lo sabía! ¡Las has llevado todas!\n\n\n\n\x0E\x01\x09\x04\x01\x700Ya no te queda ninguna más, ¿no?\n¡Genial!\n\n\n\x0E\x01\x09\x04\x19\x800¡Mil <pause0F>gracias, <pause0F>don<pause0F> caballerete<pause0F>!")
          	  case 1:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x01\x1611¡Oh, no! ¡Se te han caído!\nMira que eres torpe...\n\n\n\x0E\x01\x09\x04\x07\x700En fin, puedes volver a intentarlo\ncuando quieras... ¡Si es que te ves\ncapaz de superar el desafío, claro!")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 368, 'param3': 6}
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x01\x1611¡Oh, no! ¡Se te han caído!\nMira que eres torpe...\n\n\n\x0E\x01\x09\x04\x07\x700En fin, puedes volver a intentarlo\ncuando quieras... ¡Si es que te ves\ncapaz de superar el desafío, claro!")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x10\x1604¡Mira la que has armado!\nY eso que te lo advertí, ¿eh?\n\n\n\x0E\x01\x09\x04\x1A\x1600¡Si mi padre te deja las orejas rojas\nde los tirones, no me eches la culpa!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hola! ¡Bienvenido de nuevo!\n\n\n\nMi padre me ha contado que tienes que\nhacer dinero para pagarle la lámpara...\n\n\n\x0E\x01\x09\x04\x1A\x800¡Te va a costar lo suyo, pero creo\nque lo puedes lograr! ¡Ánimo y suerte!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x1A\x1000¡¿Qué?! ¿Le ha pasado algo malo\na Narisha?\n\n\nAhora que lo mencionas, recuerdo\nque mi padre solía ofrendarle sopa\nde calabaza cada año. Seguro que\npuede contarte cosas sobre Narisha.")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x10\x1604¡Mira la que has armado!\nY eso que te lo advertí, ¿eh?\n\n\n\x0E\x01\x09\x04\x1A\x1600¡Si mi padre te deja las orejas rojas\nde los tirones, no me eches la culpa!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hola!\n¡Por tu indumentaria deduzco que\neres un caballero de Altárea!\n\n\x0E\x01\x09\x04\x1A\x800Toma asiento y relájate. ¡Aquí en el\nCalabarza's estás en tu casa!\n\n\n\x0E\x01\x09\x04\x0D\x700Oh, una cosa... ¿Te has fijado en\nlas rupias que hay en lo alto\nde la lámpara de araña?\n\n\x0E\x01\x09\x04\x10\x00Hagas lo que hagas, ni se te ocurra\nintentar bajarlas de ahí.\n\n\nAlgunos dicen que puedes chocarte\ncontra algo para mover la lámpara\ny que caigan al suelo...\n\n\x0E\x01\x09\x04\x1A\x1600Pero, por lo que más quieras...\n¡Ni se te \x0E\x01\x06\x02\xFCCDOCURRA \x0E\x01\x06\x02Íprobarlo!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hola!\n\n\n\n¡Bienvenido al Calabarza's!\n¡Por favor, ponte cómodo!\n<pause1E>Oye, ¿va todo bien? Se te ve un poco\nalterado, la verdad...")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 374, 'param3': 6}
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf("¡Aquí traigo al viejo moguma!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Vaya... con lo bonito que es ese\ninstrumento, pensé que sonaría\nun poco mejor...\n\n\x0E\x01\x09\x04\x01\x1600A los clientes tampoco parece haberles\nentusiasmado mucho, me temo.")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Bueno, supongo que no ha estado\ndel todo mal...\n\n\n\x0E\x01\x09\x04\x01\x1600Aunque, sinceramente, creo que\npuedes hacerlo mucho mejor...")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf("\x0E\x01\x09\x04\x16\x1309¡Caray! ¡Eres mucho mejor\nde lo que imaginaba! Me parece\nque he subestimado tus virtudes\nmusicales...\n\x0E\x01\x09\x04\x07\x700¡A ver si volvemos a tocar juntos\nalgún otro día para alegrar un poco\na la concurrencia!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf("\x0E\x01\x09\x04\x15\xD0A¡Has estado fantástico! Tocas mucho\nmejor de lo que canto yo... ¡Y eso que\ntengo una voz preciosa,\nmodestia aparte!\n\x0E\x01\x09\x04\x07\x800Bueno, que sepas que soy tu fan\nnúmero uno desde ya. ¡Estoy deseando\nvolver a oírte tocar!")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 381, 'param3': 6}
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf("¡Recuerdos para Fay, amo verdoso!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf("\x0E\x01\x09\x04\n\x90D¡¿Pero qué era eso?! Tu actuación ha\nsido tan lamentable que Calabelle\nparecía un gato chillando.\n\n\x0E\x01\x09\x04\x0D\x00¡Escúchame bien, hijo!\nComo no espabiles, no vas a volver\na tocar en mi local hasta que los\npelícaros críen pelo.")
          		  case 1:
/*<600>*/ 			printf("\x0E\x01\x09\x04\x00\x10Madre mía... Espero que no tengas\npensado ganarte la vida tocando, hijo.\n¡Porque no pienso pagarte ni una sola\nrupia como no lo hagas mejor!")
          		  case 2:
/*<333>*/ 			printf("\x0E\x01\x09\x04\x00\x0ENo lo has hecho nada mal. Con un poco\nde práctica, puede que hasta logres\nimpresionar a mi chiquilla.\n\n\x0E\x01\x09\x04\x0E\x700Aquí tienes una recompensa por\ntu actuación: ¡<r<20 rupias>>!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf("\x0E\x01\x09\x04\x0B\x100C¡Así se toca, Link!\n¡Impresionante! Aquí tienes,\n\x0E\x01\x09\x04\x0C\x700¡te has ganado estas <r<50 rupias>>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf("\x0E\x01\x09\x04\x0F\xA0D¿Pero qué haces? ¿A eso lo llamas tú\ntocar? ¡Si piensas que te voy a dar\nuna rupia por este atentado musical,\nvas listo!\n\x0E\x01\x09\x04\n\x900¡Y no me mires así! Ha sido una\nactuación penosa... ¡Más te vale\nconcentrarte y hacerlo algo mejor\nla próxima vez!")
          		  case 1:
/*<601>*/ 			printf("\x0E\x01\x09\x04\x00\x10Mmm... Normalmente ya estaría\npidiendo la cabeza del autor de\nsemejante barbarie musical, pero por\nser tu primera vez, la doy por buena.")
          			flw_258:
/*<258>*/ 			printf("\x0E\x01\x09\x04\x0B\x700¡Hijo, con esto ya has hecho más\nque suficiente para saldar tu deuda\nconmigo! ¡Felicidades!\n\n\x0E\x01\x09\x04\x0E\x1100Creo que va siendo hora de comprar\nuna lámpara nueva...\n\n\n\x0E\x01\x09\x04\x0D\x700Como has hecho un buen trabajo,\nte mereces una recompensa...\n¡Aquí tienes!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf("\x0E\x01\x09\x04\x01\x700Y espero verte más por aquí, ¿eh?\n¡Como cliente, claro está!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf("\x0E\x01\x09\x04\x00\x0E¡Bueno, no ha estado nada mal!\nCreo que te doy un aprobado.")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CMe has dejado alucinado...\n¡Mira, se me saltan las lágrimas!\nNunca pensé que fueras un músico\ntan extraordinario.")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf("\x0E\x01\x09\x04\x03\x80C¡Pero...! Vaya cómo la acabas de liar,\ncompañero.\n\n\n\x0E\x01\x09\x04\x00\x100Como no te largues pitando, el tipo\nde la barra te va a aplastar como a\nun insecto de esos que cazo yo.")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf("\x0E\x01\x09\x04\x00\x01Por cierto, Link,\nsi cazas algún insecto por ahí\ny no te apetece quedarte con él,\ndámelo a mí, ¿vale?\n\x0E\x01\x09\x04\x12\x00Aunque lo ideal sería que vinieras por\nla noche a mi cuarto de la academia y\nme trajeses todos los insectos que\nte sobren.")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf("\x0E\x01\x09\x04\x12\x01Si logras pasar por el agujero,\nsurcarás los cielos a toda velocidad,\ncomo el mismo viento.\n\n\x0E\x01\x09\x04\x03\x104Pero tratándose de ti, lo mismo acabas\nestampándote contra el peñasco... \nJu, ju, en vez de acelerar, vas a frenar\nen seco.")
          				  case 1:
/*<580>*/ 					printf("\x0E\x01\x09\x04\x00\x01Escucha, Link,\nte voy a contar algo que te va a gustar.\n\n\nCuando vas volando, a veces se ven\n<r<peñascos con agujeros>>, ¿verdad que sí?\n\n\nPues resulta que tienen un poder\nmisterioso... si logras pasar por\nel agujero, puedes aumentar tu\nvelocidad de vuelo por un <r<tiempo>>.\n\x0E\x01\x09\x04\x12\x00Es un truco que usan los jinetes más\nveteranos para moverse rápidamente\npor los cielos.")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link!\n\n\n\n\x0E\x01\x09\x04\x12\x00No pensé que fuera a encontrarte\npor aquí. Y supongo que te preguntarás\nqué hago yo en un lugar como este...\n[1]Pues sí[2]Pues no")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf("\x0E\x01\x09\x04\x03\x104Creo que ya te lo he contado alguna\nvez: soy un apasionado de los insectos.\n\n\nPor eso me he venido hasta aquí, a ver\nsi conseguía cazar unos cuantos por\nesta isla.\n\n\x0E\x01\x09\x04\x04\x100Si tienes un cazamariposas, tú también\npuedes intentarlo. Es muy divertido,\nya verás.\n\nY si no, ve a la tienda de Terry\ny te compras uno, así de fácil.\nSuele tener cazamariposas\na buen precio.\n\x0E\x01\x09\x04\x12\x100Seguro que está de ronda por Altárea\nahora mismo.")
          				  case 1:
/*<447>*/ 					printf("\x0E\x01\x09\x04\x04\x805Ah, ¿no?...\n\n\n\n\x0E\x01\x09\x04\x04\x100Bueno, pues peor para ti... Yo sigo a\nlo mío. Ya se ve que a ti los insectos ni\nte van ni te vienen...")
          				}
          			}
          		}
          	}
          }

