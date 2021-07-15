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
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01¿Preparado para cazar insectos?\n¡Seguro que te conviertes en un gran\naficionado de los insectos, como yo!\n\nEl nivel para principiantes cuesta\n<r<20 rupias>>, y el nivel para expertos\ncuesta <r<50 rupias>>. ¿Por cuál te decides?\n\n[1]Principiante[2]Experto[3-]Mejor no")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100Voy a cronometrarte y, si logras un\nbuen tiempo, ¡te daré un premio!\n\n\n\x0E\x01\x09\x04\x00\x100En el nivel para principiantes debes\ncazar un ejemplar de cada uno de los\n5 tipos de insectos que se te indiquen.\n¡Ya puedes tomar posiciones!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315Parece que no tienes suficiente dinero.\nY me temo que aunque seas un alumno\nde la academia de caballeros, aquí no\nse hacen descuentos.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Deberías tomarte el tema de los\ninsectos un poco más en serio, ¿no?\n¿Adónde crees que vas con tan pocos\n<r<corazones>>?\n\x0E\x01\x09\x04\x00\x100Vamos, vuelve por aquí cuando estés\nun poco mejor de salud.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100Voy a cronometrarte y, si logras un\nbuen tiempo, ¡te daré un premio!\n\n\n\x0E\x01\x09\x04\x00\x100En el nivel para expertos debes cazar\nun total de diez ejemplares de los 8\ntipos de insectos que se te indiquen.\n¡Ya puedes tomar posiciones!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315Parece que no tienes suficiente dinero.\nY me temo que aunque seas un alumno\nde la academia de caballeros, aquí no\nse hacen descuentos.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Bueno, supongo que nunca te gustaron\ntanto los insectos como a mí.")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80A¡¿Cómo?! ¿Qué dices? ¿No tienes\n<y<cazamariposas>>? ¡Eso sí que no me\nlo esperaba!\n\n\x0E\x01\x09\x04\x00\x500¿Cómo es posible que la caza de\ninsectos, tan de moda últimamente,\nno haya llamado tu atención? \nQué triste...\n\x0E\x01\x09\x04\x03\x100Bueno, en la <r<tienda de Terry >>podrás\ncomprarte un cazamariposas...\n¡Deberías ir ahora mismo!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\nQué casualidad encontrarte\npor aquí, ¿no?\n\n\x0E\x01\x09\x04\x12\x600A mí me envolvió una nube enorme\ny acabé aterrizando en este lugar...\n\n\n\x0E\x01\x09\x04\x00\x100Al principio no sabía qué hacer, ¡pero\nluego llegué a la conclusión de que esta\nisla es el hábitat perfecto para los\ninsectos!\n\x0E\x01\x09\x04\x03\x104Por tanto, he decidido juntar montones\nde insectos en la isla y dedicarme\na cazarlos, ¿qué te parece?\n\n\x0E\x01\x09\x04\x00\x100Así que ya sabes, si en cualquier\nmomento te sientes con ganas de cazar\ninsectos, solo tienes que decírmelo.\n¡Suelto unos cuantos y ya está!")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100He pensado que lo mejor es tener dos\nniveles: uno para <r<principiantes>>, fácil y\ndivertido; y otro para <r<expertos>>, para\nauténticos amantes de los insectos.\n\x0E\x01\x09\x04\x03\x100Como veo que no te apasionan los\ninsectos, te haré una buena oferta y\npodrás jugar al nivel principiante por\n<r<20 rupias >>y al experto por <r<50 rupias>>.\n[1]Principiante[2]Experto[3-]No, gracias")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80A¡¿Cómo?! ¿Qué dices? ¿No tienes\n<y<cazamariposas>>? ¡Eso sí que no me\nlo esperaba!\n\n\x0E\x01\x09\x04\x00\x500¿Cómo es posible que la caza de\ninsectos, tan de moda últimamente,\nno haya llamado tu atención? \nQué triste...\n\x0E\x01\x09\x04\x03\x100Bueno, en la <r<tienda de Terry >>podrás\ncomprarte un cazamariposas...\n¡Deberías ir ahora mismo!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Je, je, je. ¿Has venido a recuperar\nel <b<escarabero rex>>?\n[1]¡Claro![2-]No")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("Esto es un negocio, al fin y al cabo,\nasí que tienes que darme <r<10 rupias>>.\n\n[1]¡Toma![2-]¡No!")
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
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Las reglas son que debes cazar 10\ninsectos del tipo que yo elija.\n\n\n\x0E\x01\x09\x04\x03\x100Voy a cronometrarte, y tendrás que\natrapar esos 10 insectos <r<en menos\nde 3 minutos>>.\n\n\x0E\x01\x09\x04\x00\x100Si lo consigues, te devolveré\nel <b<escarabero rex>>.\n\n\n¡Ya puedes ir tomando posiciones!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807¡Pero, oye! ¿Todavía no tienes un\n<y<cazamariposas>>? Pues no sé cómo\nquieres jugar sin uno...\n\n\x0E\x01\x09\x04\x04\x100¡Vuelve cuando te lo hayas comprado!")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Deberías tomarte el tema de los\ninsectos un poco más en serio, ¿no?\n¿Adónde crees que vas con tan pocos\n<r<corazones>>?\n\x0E\x01\x09\x04\x00\x100Vamos, vuelve por aquí cuando estés\nun poco mejor de salud.")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315Parece que no tienes suficiente dinero.\nY me temo que aunque seas un alumno\nde la academia de caballeros, aquí no\nse hacen descuentos.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305¿Te has propuesto formar parte\nde mi colección?\n\n\n\x0E\x01\x09\x04\x00\x100¡Lo digo porque te veo muy <r<avispado>>!\nJe, je, je, je...\x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Je, je, je... ¡Hola, Link!\n¿Qué tal?\n\n\n\x0E\x01\x09\x04\x00\x100¿Cómo? ¿Que tengo una sonrisa de\noreja a oreja? ¡Sí, supongo que sí!\n\n\n¿Y sabes por qué? Pues porque he\nencontrado un insecto supercurioso.\n[1]¡Cuéntamelo![2]No me\nimporta")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100¿Entonces te lo cuento? Je, je, je...\n\n\n\nVerás...<pause1E> \x0E\x01\x09\x04\x13\x100¡He encontrado el legendario\n<b<escarabero rex>>!\n\n\n\x0E\x01\x09\x04\x03\x100¡Las probabilidades de ver uno de estos\nson tan pequeñas que es un milagro!\n¡No puedo dejar de sonreír! ¡Hasta me\nduele la cara!")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800¡¿Cómo?! ¿Dices que este insecto es de\nTerry? ¿Terry el de la tienda esa\nque va volando por ahí?\n[1]Devuélveselo[2]Pobre, ¿no?")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800¿Crees que me vas a engañar con un\ntruco tan sucio? ¡Eres pérfido!\n\n\n\x0E\x01\x09\x04\x13\x100¡El insecto es mío, lo he encontrado yo!\n¡No pienso dárselo a nadie!")
          							flw_51:
/*< 51>*/ 							printf("\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í\nSupongo que no está bien apropiarse\nde lo que no es mío.\n\n\x0E\x01\x09\x04\x12\x100El problema es que no puedo dártelo,\ny ya está. Lo siento, va en contra de\nmi naturaleza. No, no puedo...\n\n\x0E\x01\x09\x04\x00\x500¡Pero se me acaba de ocurrir una idea!\n\n\n\n\x0E\x01\x09\x04\x00\x100Si consigues un tiempo que, en mi\nopinión, te convierta en el mejor\ncazador de insectos de la historia,\n¡entonces te daré el insecto!\n\x0E\x01\x09\x04\x03\x100¿Trato hecho? ¿Te atreves a aceptar\nel desafío?\n[1]De acuerdo[2-]Ahora no")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500¿Tienes idea de lo que vale\neste insecto?\n\n\n\x0E\x01\x09\x04\x00\x100¡Con solo tenerlo, mi prestigio dentro\ndel mundo de la caza de insectos subirá\ncomo la espuma!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515Jamás pensé que me dirías algo así...\nCompletamente increíble...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05¿No quieres seguir cazando insectos?\nOye, no estoy de humor para bromas.\n¿Lo dices en serio?\n[1]Sí[2-]No")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500Entonces no estabas bromeando...\nSupongo que no aprecias la belleza\nde los insectos como yo. Quizá a ti\nte gusten otras cosas...")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("¡Claro que sí! En esta vida no hay\nnada como cazar insectos, ¡es lo\nmás fantástico del mundo!")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Mmm... Has tardado demasiado, ¿no?\n\n\n\n\x0E\x01\x09\x04\x00\x100¡Se te ha agotado el tiempo y ni\nsiquiera has terminado!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000¡Oye, oye! ¿Es que acaso no sabes nada\nsobre los insectos?\n\n\n\x0E\x01\x09\x04\x03\x100Aunque no lo parezca, muchos son\npeligrosos. Por eso he parado el juego,\n¡he visto que te estaban poniendo\nen aprietos!")
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
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107¡Está bien, se acabó! Mmm...\nLos dos sabemos que lo puedes\nhacer muchísimo mejor.\n\n\x0E\x01\x09\x04\x00\x100¡Plantéate hacerlo en <r<menos de 5\nminutos >>la próxima vez que juegues!\n\n\n\x0E\x01\x09\x04\x03\x100Por cierto, por la noche me dedico a\ncomprar insectos, así que ya sabes...\n¡Ve a mi cuarto cuando quieras!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500Es una pena que no sepas apreciar\nla belleza y el encanto de los insectos.\n\n\n\x0E\x01\x09\x04\x00\x100¡Pero vuelve por aquí cuando quieras,\nsiempre serás bienvenido!")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Lo siento, pero aquí no se devuelve\nel dinero. \x0E\x01\x09\x04\x00\x100¡Que tengas mejor suerte\nla próxima vez! ¡Ja, ja, ja, ja!")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Ja, ja, ja... ¡Estabas tan emocionado\ncazando insectos que se te ha olvidado\nque tu salud estaba flaqueando!\n\n\x0E\x01\x09\x04\x00\x500Pero lo siento, no se devuelve el dinero.\nVuelve por aquí cuando te encuentres\nun poco mejor de salud, ¿de acuerdo?")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104¡Se acabó! Bueno, no está mal,\nlo reconozco.\n\n\n\x0E\x01\x09\x04\x00\x100Pero si sabes dónde viven los insectos,\nirás más rápido y terminarás antes.\nLa próxima vez intenta hacerlo en\n<r<menos de 3 minutos>>, ¿de acuerdo?")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100Bah, te daré algo. Toma, <r<80 rupias>>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04¡Se acabó! Supongo que no debería\nsorprenderme que consigas un tiempo\nasí.\n\n\x0E\x01\x09\x04\x00\x100Por si no lo sabías, hay insectos que\npueden vivir en distintas zonas, y en\nunas te resultará más difícil atraparlos\nque en otras. ¡Hay que saber buscar!")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100La próxima vez deberías intentar\nhacerlo en <r<menos de 3 minutos>>.\nEn todo caso, aquí tienes un regalo:\n<r<30 rupias>>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811¡Se acabó! ¡Vaya! ¡Has sido muy rápido!\n\n\n\n\x0E\x01\x09\x04\x00\x100¡Puede que seas el mejor cazador de\ninsectos mundial! Después de mí, claro.\nPero la próxima vez intenta hacerlo en\n<r<menos de 2 minutos>>, ¿de acuerdo?\nTe daré como premio una cosa que te\nvuelve loco... ¡<r<5 insectos>>, claro que sí!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Cuídalos bien, por lo que más quieras...")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11¡Se acabó! ¡Eres todo un experto!\n¡Lo tuyo es talento natural!\n\n\n\x0E\x01\x09\x04\x12\x500Aun así, no eres lo bastante bueno\ncomo para que te dé ningún insecto\nde mi querida colección. Lo siento.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("La próxima vez intenta hacerlo\nen <r<menos de 2 minutos>>, ¿de acuerdo?\n\n\nBueno, ¡esta vez te has ganado\n<r<50 rupias>>! ¡Que las disfrutes!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811¡Se acabó! ¡Vaya, has logrado un\ntiempo increíble!\n\n\n\x0E\x01\x09\x04\x00\x100No tengo más remedio que reconocer\nque eres un cazador de insectos de\nprimera, sí señor.\n\n\x0E\x01\x09\x04\x04\x100Aquí tienes tu premio: ¡<r<5 insectos>>!\nSorprendido, ¿eh? ¡Y además son\nde los difíciles de encontrar!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Cuídalos bien, por lo que más quieras...")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811¡Se acabó! ¡Impresionante! ¡A esto le\nllamo yo una buena caza!\n\n\n\x0E\x01\x09\x04\x12\x100Pero no te olvides de que estás\nen el nivel para principiantes.\n\n\n\x0E\x01\x09\x04\x00\x100La próxima vez deberías probar el\nnivel para expertos. ¡Toma, ya puedes\nañadir <r<5>> de mis <r<insectos >>favoritos\na tu colección!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Cuídalos bien, por lo que más quieras...")
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
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Qué pena... ¡no lo has logrado!\n\n\n\n\x0E\x01\x09\x04\x12\x500Sintiéndolo mucho, no puedo\ndevolverte el <b<escarabero rex>>.\n\n\n\x0E\x01\x09\x04\x00\x100Es decir, o terminas en menos\nde 3 minutos o nada. ¡Vamos,\nsorpréndeme!")
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
/*< 71>*/ 				printf("¡Listo, ya está! \x0E\x01\x09\x04\x00\x04¡Bravo! ¡Bravo!\n¡Ni en mil años habría pensado\nque romperías el récord casi sin\ndespeinarte!")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500Lo prometido es deuda... Aquí tienes\nel <b<escarabero rex>>.\n\n\n\x0E\x01\x09\x04\x00\x100Asumo con caballerosidad mi derrota.\nLo mejor que puedo hacer es callarme.\nEn boca cerrada no entran <r<moscas>>...\n\x0E\x01\x09\x04\x03\x100Je, je, je. Soy tan gracioso...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500No te olvides de decirle a Terry que\nsiento haberle causado tantas\nmolestias, ¿de acuerdo?")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

