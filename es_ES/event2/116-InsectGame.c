          void entrypoint_116_01() {
          	start()
/*< 13>*/ 	switch (context_related4(1)) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          		  case 0:
/*< 25>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
          				flw_5:
/*<  5>*/ 				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          				  case 0:
/*< 57>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 115, 'param3': 12}
/*<115>*/ 					check_item_flag(71, 1)
/*<114>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          					  case 0:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 1, line: 4 */ "<0x10009:0x00000001>¿Preparado para cazar insectos?\n¡Seguro que al final te acaban gustando\ntanto como a mí!\n\nEl nivel para principiantes cuesta\n<color red<20 rupias>coloroff>, y el nivel para expertos\ncuesta <color red<50 rupias>coloroff>. ¿Por cuál te decides?\n\n[1-]Principiante[2-]Experto[3]Paso")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00030100>Voy a cronometrarte y, si logras un\ntiempo decente, ¡te daré un premio!\n\n\n<0x10009:0x00000100>En el nivel para principiantes debes\ncazar un ejemplar de cada uno de los\n5 tipos de insectos que se te indiquen.\n¡Ya puedes ir tomando posiciones!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>A ver cómo te lo digo... No tienes\nsuficiente dinero. Y por muy alumno\nque seas de la academia de caballeros,\naquí no se hacen descuentos.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Deberías tomarte el tema de los\ninsectos un poco más en serio, ¿no?\n¿Adónde crees que vas con tan pocos\n<color red<corazones>coloroff>?\n<0x10009:0x00000100>Anda, vuelve por aquí cuando estés\nun poco mejor de salud.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00030100>Voy a cronometrarte y, si logras un\ntiempo decente, ¡te daré un premio!\n\n\n<0x10009:0x00000100>En el nivel para expertos debes cazar\nun total de diez ejemplares de los 8\ntipos de insectos que se te indiquen.\n¡Ya puedes ir tomando posiciones!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>A ver cómo te lo digo... No tienes\nsuficiente dinero. Y por muy alumno\nque seas de la academia de caballeros,\naquí no se hacen descuentos.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>No, si ya decía yo que a ti lo de los\ninsectos ni te va ni te viene.")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>¡¿Pero qué me dices?! ¿No tienes\n<color yellow<cazamariposas>coloroff>? ¡Eso sí que no me\nlo esperaba!\n\n<0x10009:0x00000500>¿Cómo es posible que la caza de\ninsectos, tan en boga últimamente,\nno haya llamado tu atención? Das\nun poco de pena, la verdad.\n<0x10009:0x00030100>En fin, en la <color red<tienda de Terry >coloroff>podrás\ncomprarte un cazamariposas...\n¡Ya estás tardando!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nQué casualidad encontrarte\npor aquí, ¿no?\n\n<0x10009:0x00120600>A mí me envolvió una nube gordísima\ny acabé aterrizando en este lugar...\n\n\n<0x10009:0x00000100>Al principio no sabía qué hacer, ¡pero\nluego llegué a la conclusión de que esta\nisla es el hábitat perfecto para los\ninsectos!\n<0x10009:0x00030104>Por tanto he decidido juntar montones\nde insectos en la isla y dedicarme\na cazarlos, ¿qué te parece?\n\n<0x10009:0x00000100>Así que ya sabes, si en cualquier\nmomento te sientes con ganas de cazar\ninsectos, solo tienes que decírmelo.\n¡Suelto unos cuantos y ya está!")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 1, line: 1 */ "<0x10009:0x00000100>He pensado que lo mejor es tener dos\nniveles: uno para <color red<principiantes>coloroff>, fácil y\ndivertido; y otro para <color red<expertos>coloroff>, para\nauténticos amantes de los insectos.\n<0x10009:0x00030100>A ti veo que no te apasionan los bichos,\nasí que te haré una buena oferta y\npodrás jugar al principiante por <color red<20\nrupias >coloroff>y al experto por <color red<50 rupias>coloroff>.\n[1-]Principiante[2-]Experto[3]Paso")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>¡¿Pero qué me dices?! ¿No tienes\n<color yellow<cazamariposas>coloroff>? ¡Eso sí que no me\nlo esperaba!\n\n<0x10009:0x00000500>¿Cómo es posible que la caza de\ninsectos, tan en boga últimamente,\nno haya llamado tu atención? Das\nun poco de pena, la verdad.\n<0x10009:0x00030100>En fin, en la <color red<tienda de Terry >coloroff>podrás\ncomprarte un cazamariposas...\n¡Ya estás tardando!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000004>Je, je, je. ¿Has venido a recuperar\nel <color blue<escarabero rex>coloroff>?\n[1-]¡Claro![2]Pues no")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Esto es un negocio, al fin y al cabo,\nasí que tienes que darme <color red<10 rupias>coloroff>.\n\n[1-]¡Toma![2]Ni en broma")
/*< 53>*/ 						switch (choice(2)) {
          						  case 0:
/*< 38>*/ 							switch (has_rupees(10)) {
          							  case 0:
/*<105>*/ 								switch (context_related2(0)) {
          								  case 0:
/*<118>*/ 									check_item_flag(71, 1)
/*<117>*/ 									switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          									  case 0:
/*< 40>*/ 										rupees += -10;
/*< 41>*/ 										printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00040100>Las reglas son que debes cazar 10\ninsectos del tipo que yo elija.\n\n\n<0x10009:0x00030100>Voy a cronometrarte, y tendrás que\natrapar esos 10 insectos <color red<en menos\nde 3 minutos>coloroff>.\n\n<0x10009:0x00000100>Si lo consigues, te devolveré\nel <color blue<escarabero rex>coloroff>.\n\n\n¡Ya puedes ir tomando posiciones!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130807>¡Pero bueno! ¿Todavía no tienes un\n<color yellow<cazamariposas>coloroff>? Pues no sé cómo\nquieres jugar sin uno...\n\n<0x10009:0x00040100>¡Vuelve cuando te lo hayas comprado!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Deberías tomarte el tema de los\ninsectos un poco más en serio, ¿no?\n¿Adónde crees que vas con tan pocos\n<color red<corazones>coloroff>?\n<0x10009:0x00000100>Anda, vuelve por aquí cuando estés\nun poco mejor de salud.")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>A ver cómo te lo digo... No tienes\nsuficiente dinero. Y por muy alumno\nque seas de la academia de caballeros,\naquí no se hacen descuentos.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>¿Te has propuesto formar parte\nde mi colección?\n\n\n<0x10009:0x00000100>¡Lo digo porque te veo muy <color red<mosqueado>coloroff>!\nJe, je, je, je...<0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000004>Je, je, je... ¡Muy buenas,\n<heroname>! ¿Cómo te va?\n\n\n<0x10009:0x00000100>¿Cómo? ¿Que tengo una sonrisa de\noreja a oreja? ¡Sí, supongo que sí!\n\n\n¿Y sabes por qué? Pues porque he\nencontrado un insecto supercurioso.\n[1-]¡Cuéntamelo![2-]¿Y a mí qué?")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>¿Entonces te lo cuento? Je, je, je...\n\n\n\nAllá va...<pause 30> <0x10009:0x00130100>¡He encontrado el legendario\n<color blue<escarabero rex>coloroff>!\n\n\n<0x10009:0x00030100>¡Las probabilidades de ver uno de estos\nson tan pequeñas que es un milagro!\n¡No puedo dejar de sonreír! ¡Hasta me\nduele la cara y todo!")
/*< 54>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010800>¡¿Que qué?! ¿Que este insecto es de\nTerry? ¿Terry el de la tienda esa\nque va volando por ahí?\n[1-]Devuélveselo[2-]Pobrecito, ¿no?")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>¿Crees que me vas a engañar con un\ntruco tan sucio? ¡Eres pérfido!\n\n\n<0x10009:0x00130100>¡El insecto es mío, lo he encontrado yo!\n¡No pienso dárselo a nadie!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10006:0xfdcd>(...)<0x10006:0x00cd>\nSupongo que no está bien apropiarse\nde lo que no es mío.\n\n<0x10009:0x00120100>El problema es que no puedo dártelo\ny ya está. No soy capaz, va contra mi\nnaturaleza, qué le vamos a hacer...\n\n<0x10009:0x00000500>¡Pero se me acaba de ocurrir una idea!\n\n\n\n<0x10009:0x00000100>Si consigues un tiempo que a mi\nparecer te convierta en el mejor\ncazador de insectos de la historia,\n¡entonces te daré el insecto!\n<0x10009:0x00030100>¿Trato hecho? ¿Te atreves a aceptar\nel desafío?\n[1-]De acuerdo[2]Ahora no")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00120500>¿Tienes idea de lo que vale\neste insecto?\n\n\n<0x10009:0x00000100>¡Con solo tenerlo, mi prestigio dentro\ndel mundo de la caza de insectos subirá\ncomo la espuma!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00120515>Jamás pensé que me dirías algo\nasí... Eres pérfido como un vulgar\ncomebichos...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>¿No quieres seguir cazando insectos?\nVenga ya, que no estoy para bromas.\n¿Lo dices en serio?\n[1-]Sí[2]No")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00120500>Entonces no estabas de broma...\nSupongo que no aprecias la belleza\nde los insectos como yo. ¡Seguro que\na ti te da por otra cosa!")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "¡Claro que sí! En esta vida no hay\nnada como cazar insectos, ¡es lo\nmás fantástico del mundo!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Mmm... Estamos un poco lentos hoy,\n¿no?\n\n\n<0x10009:0x00000100>Vamos, ¡que se te ha agotado el tiempo\ny ni siquiera has terminado!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00131000>¡Oye, oye! ¿Es que acaso no sabes nada\nsobre los insectos?\n\n\n<0x10009:0x00030100>Aunque pueda parecerlo, muchos no\nson inofensivos. Por eso he parado\nel juego, ¡he visto que te estaban\nponiendo en aprietos!")
/*<100>*/ 		make_actor_do_something(4, 0)
          	}
          }

          void entrypoint_116_02() {
/*<  8>*/ 	start()
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          	  case 0:
          		flw_9:
/*<  9>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 20>*/ 			switch (context_related4(2)) {
          			  case 0:
/*< 44>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 10, 'param3': 44}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>¡Está bien, se acabó! Mmm...\nLos dos sabemos que lo puedes\nhacer muchísimo mejor.\n\n<0x10009:0x00000100>¡Plantéate hacerlo en <color red<menos de 5\nminutos >coloroff>la próxima vez que juegues!\n\n\n<0x10009:0x00030100>Por cierto, por la noche me dedico a\ncomprar insectos en la academia, así\nque ya sabes... ¡Pásate por mi cuarto\ncuando quieras!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00120500>Es una pena que no sepas apreciar\nla belleza y el encanto de los insectos.\n\n\n<0x10009:0x00000100>¡Pero pásate por aquí cuando quieras,\nsiempre serás bienvenido!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Lo siento, pero aquí no se devuelve\nel dinero. <0x10009:0x00000100>¡Mejor suerte la próxima\nvez! ¡Ja, ja, ja, ja!")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004>Ja, ja, ja, ja... ¡Estabas tan acelerado\ncazando insectos que se te ha olvidado\nque tu salud estaba flaqueando!\n\n<0x10009:0x00000500>Pero lo siento, no se devuelve el dinero.\nVuelve por aquí cuando te encuentres\nun poco mejor de salud, ¿vale?")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00120104>¡Se acabó! Bueno, no está mal,\nlo reconozco.\n\n\n<0x10009:0x00000100>Pero si sabes dónde viven los insectos,\nirás más rápido y terminarás antes.\nLa próxima vez intenta hacerlo en\n<color red<menos de 3 minutos>coloroff>, ¿de acuerdo?")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030100>Bah, esto es calderilla. Toma,\n<color red<80 rupias>coloroff>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>¡Se acabó! Supongo que no debería\nsorprenderme que consigas un tiempo\nasí.\n\n<0x10009:0x00000100>Por si no lo sabías, hay insectos que\npueden vivir en distintas zonas, y en\nunas te resultará más difícil atraparlos\nque en otras. ¡Hay que saber buscar!")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>La próxima vez deberías intentar\nhacerlo en <color red<menos de 3 minutos>coloroff>.\nEn todo caso, ahí va mi calderilla:\n<color red<30 rupias>coloroff>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>¡Se acabó! ¡Hala! ¡Has sido muy rápido!\n\n\n\n<0x10009:0x00000100>¡Puede que seas el mejor cazador de\ninsectos mundial! Después de mí, claro.\nPero la próxima vez intenta hacerlo en\n<color red<menos de 2 minutos>coloroff>, ¿vale?\nTe daré como premio una cosa que te\nvuelve loco... ¡<color red<5 insectos>coloroff>, claro que sí!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Cuídalos bien, por lo que más quieras...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00000011>¡Se acabó! ¡Esto se te da de maravilla!\n¡Lo tuyo es talento natural!\n\n\n<0x10009:0x00120500>Aun así, no eres lo bastante bueno\ncomo para que te dé ningún insecto\nde mi querida colección, lo siento.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "La próxima vez intenta hacerlo\nen <color red<menos de 2 minutos>coloroff>, ¿vale?\n\n\nEso sí, ¡esta vez te has ganado\n<color red<50 rupias>coloroff>! ¡Que las disfrutes!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00130811>¡Se acabó! ¡Hala, has logrado un tiempo\nincreíble!\n\n\n<0x10009:0x00000100>No tengo más remedio que reconocer\nque eres un cazador de insectos de\nprimera, sí señor.\n\n<0x10009:0x00040100>Aquí tienes tu premio: ¡<color red<5 insectos>coloroff>!\nSorprendido, ¿eh? ¡Y además son\nde los difíciles de encontrar!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Cuídalos bien, por lo que más quieras...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>¡Se acabó! ¡Impresionante! ¡A esto\nllamo yo una buena caza!\n\n\n<0x10009:0x00120100>Pero no te olvides de que estás\nen el nivel para principiantes.\n\n\n<0x10009:0x00000100>La próxima vez deberías probar el nivel\npara expertos. ¡Si lo haces bien, igual\nconsigues sumar <color red<5>coloroff> de mis <color red<insectos>coloroff>\nfavoritos a tu palmarés!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Cuídalos bien, por lo que más quieras...")
          			}
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          		  case 0:
/*< 63>*/ 			switch (context_related4(0)) {
          			  case 0:
/*< 73>*/ 				switch (context_related3(0)) {
          				  case 0:
          					flw_65:
/*< 65>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 64, 'param3': 44}
          					flw_64:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000013>Qué pena... ¡no lo has logrado!\n\n\n\n<0x10009:0x00120500>Sintiéndolo mucho, no puedo\ndevolverte el <color blue<escarabero rex>coloroff>.\n\n\n<0x10009:0x00000100>Vamos, que o terminas en menos\nde 3 minutos o nada. ¡Venga,\nsorpréndeme!")
/*< 66>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          				  case 1:
          					goto flw_64
          				  case 2:
          					goto flw_64
          				}
          			  case 1:
          				goto flw_65
          			  case 2:
          				flw_72:
/*< 72>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 71, 'param3': 44}
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "¡Listo, ya está! <0x10009:0x00000004>¡Bravo! ¡Bravo!\n¡Ni en mil años habría pensado\nque romperías el récord casi sin\ndespeinarte!")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Lo prometido es deuda... Aquí tienes\nel <color blue<escarabero rex>coloroff>.\n\n\n<0x10009:0x00000100>Asumo con caballerosidad mi derrota.\nLo mejor que puedo hacer es callarme.\nEn boca cerrada no entran <color red<moscas>coloroff>...\n<0x10009:0x00030100>Je, je, je. Si es que tengo un gracejo...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00040500>No te olvides de decirle a Terry que\nsiento haberle causado tantas\nmolestias, ¿de acuerdo?")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

