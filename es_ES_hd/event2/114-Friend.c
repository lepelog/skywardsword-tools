          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00070002>Ah, <heroname>...\n¿Qué tal? ¿Has encontrado alguna\npista sobre el paradero de Zelda?\n\n¡Tienes que traerla de vuelta! \n¡Ánimo, <heroname>!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000009>¡Prométeme que volverás con Zelda \nsana y salva, <heroname>!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00070811>No puedo creer que Zelda se haya caído\ndel pelícaro...\n\n\nCon lo buena jinete que es...\n\n\n\n<0x10009:0x00000e00>Yo, que soy un inútil redomado\nmontando en pelícaro, solo puedo\nrezar por que esté bien...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000811>Vaya problema lo del pelícaro,\n¿no, <heroname>?<pause 25>\nOjalá lo encuentres pronto<0x10006:0xfbcd>...<0x10006:0x00cd>")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00010708>¿Qué te pasa que estás tan acalorado,\n<heroname>?\n\n\n<0x10009:0x00070c00>¡¿Cómo?! ¿Que no encuentras a tu\npelícaro por ningún sitio?...<pause 25>\n\n\nY dices que tampoco acude a tu\nllamada<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n<0x10009:0x00010800>Mmm<0x10006:0xfbcd>...<0x10006:0x00cd> No, si ya...<pause 25>\n<0x10008:0xffcd>Al final lo han hecho...\n\n\n<0x10009:0x00080807>¿Eh?<pause 25> No... no, nada.<pause 25>\nCosas mías, <pause 20>nada importante.")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Me tengo que quedar en la academia,\npero te deseo mucha suerte en el <color red<torneo\nceleste>coloroff>.\n\n¡Te estaré animando desde aquí,\n<heroname>!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000809>Yo no soy como tú, <heroname>...\nA mí no se me da bien hacer nada...\n\n\nAl menos, gracias a trabajillos como\neste puedo mejorar un poco mi técnica\nde <color green<levantamiento >coloroff>de jarrones y barriles\ncon (A)...\n<0x10009:0x00070e00>Y de paso me gano unas rupias, que\nnunca vienen mal.")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000002>Buenos días, <heroname>.\n\n\n\nHoy es el gran día, ¡el <color red<torneo celeste>coloroff>!\n\n\n\n<0x10009:0x00010800>Ay, cómo me gustaría participar<0x10006:0xfbcd>...<0x10006:0x00cd>\nPero este año he cateado unas cuantas\ny me tengo que quedar en la academia\na recuperar.\n<0x10009:0x00070800>Y encima ahora tengo que llevar estos\n<color red<barriles >coloroff>hasta el comedor...\n\n\n<0x10009:0x00010800>Yo que soñaba con ver cómo dejabas\na todos atrás en el torneo...\n\n\n<0x10009:0x00070a00>En fin, qué le vamos a hacer...<pause 20>\nTú ve a por todas, ¿eh?\n¡Te deseo mucha suerte!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000002>Qué... ¿te ves con fuerzas para otra\nronda? ¡Son solo<color red< 20 rupias>coloroff>!\n[1-]¡Vale![2-]¿Cómo iba?[3]Mejor no")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00070a0a>¡Pues vamos allá!\n¡Ánimo, <heroname>!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010811>Andas corto de dinero... Se ve que tú\ntambién pasas tus estrecheces,\n¿eh, <heroname>?...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070200>Muy bien, voy a lanzarte calabazas\ndurante <color red<90 segundos>coloroff>, ¿estamos?\nCada acierto cuenta 10 puntos...\n\n<0x10009:0x00000a00>Los aciertos consecutivos suman más\npuntos, ¿de acuerdo?\n¡Trata de encadenar el mayor número\nde dianas que puedas!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070200>Bueno, por la molestia de lanzar las\ncalabazas igual te pido que me des la\nvoluntad... ¿Qué tal 20 rupias?\n\n<0x10009:0x00080a00>Gratis no tendría tanta gracia... \n¡Así te lo tomas más en serio!\n\n\nQué, ¿te hace una sesión de tiro por\n<color red<20 rupias>coloroff>?\n[1-]Mmm, sí[2]Mmm, no")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Vaya, supongo que estarás muy\nocupado...\n\n\nTu objetivo ahora mismo es rescatar a\nZelda y nada más, ¿verdad?...\n<pause 10>Lo siento.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Hombre, <heroname>.\n¿Cómo te ves hoy de forma?\n\n\n¿Te hace una sesión de Tiro a la\ncalabaza?... ¡Solo pido <color red<20 rupias>coloroff>!\n\n[1-]¡Vale![2-]¿Cómo iba?[3]Mejor no")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070202>¡Oye, <heroname>!\nHe estado pensando...\n\n\n¿Qué ejercicio me podría venir bien\npara mantener la forma?...\nLo de hacer flexiones y esas cosas ya\nno tiene secretos para mí...\n<0x10009:0x00000207>Anda, <pause 30>¡qué arco más chulo llevas!\nApuesto a que eres un tirador de\nprimera, ¿eh?\n[1-]Pues claro[2-]No tanto")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00070aff>¡Eres un crack, <heroname>!\n\n\n\n<0x10009:0x00010200>Aunque me hiciera tres mil flexiones\nal día, no te llegaría ni a la suela de\nlos zapatos.")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00070a00>Ya sé, ¿por qué no me enseñas cómo\nmanejas el arco?\n\n\nMira, voy a lanzar al aire unas cuantas\ncalabazas.\n\n\n<0x10009:0x00000200>¡Trata de acertarles con un buen\nflechazo antes de que caigan!\n\n\n<0x10009:0x00070a00>A mí también me vendrá bien lanzarte\nlas calabazas para hacer un poco de\nmúsculo.\n\n¿Qué te parece la idea?\n\n[1-]Brillante[2]Mala")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Vaya, supongo que estarás muy\nocupado...\n\n\nTu objetivo ahora mismo es rescatar a\nZelda y nada más, ¿verdad?...\n<pause 10>Lo siento.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000a09>¡No seas modesto!\nTe lo digo en serio...")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000501>¡<heroname>!\nEs tremendo, la isla de la Diosa ha\ndesaparecido, ¿lo has visto?\n\nNo entiendo nada de nada...\n\n\n\n(<pause 10>.<pause 10>.<pause 10>.)<pause 10>\n<0x10009:0x00000800>Pero<0x10006:0xfbcd>...<0x10006:0x00cd> tú ya estás al corriente de todo,\n¿no, <heroname>?\n\n<0x10009:0x00000200>Todo esto es necesario para poder\nencontrar a Zelda, ¿no es así?\n\n\nEntendido. Pase lo que pase, prometo\nque no me asustaré. ¡Hay que\nencontrar a Zelda a toda costa!")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 78, 'param3': 44}
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 28, 'param2': 9472, 'next': 79, 'param3': 13}
/*< 79>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000012>La puntuación total es <numeric arg0 0>...\n\n\n\nSe ve que hoy tienes un mal día,\n<heroname>...\nLo siento, pero esta vez te quedas\nsin premio. \n<0x10009:0x00070200>El truco está en seguir la trayectoria\nde la calabaza y anticiparse un poco\ncon el cursor al apuntar.\n\nYo creo que podrías llegar a los\n<color red<150 puntos >coloroff>fácilmente...\n\n\n<0x10009:0x00010a00>Oh, perdón... Ya sé que no te hace falta\nningún consejo... Tú tienes un talento\nnatural para estas cosas, no como yo.")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070a00>¡Ven a verme siempre que te apetezca\nponer a prueba tu técnica!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x0000000b>¡La puntuación total es <numeric arg0 0>!\n¡Eres un hacha, <heroname>!\n\n\nUna técnica como la tuya no se ve todos\nlos días... ¡Qué barbaridad!\n\n\nMuy bien, para la próxima trata de\nllegar a los <color red<400 puntos>coloroff>.\n\n\n<0x10009:0x00070a00>Ah, y como recompensa...\nToma, 50 rupias que he ahorrado\nhaciendo trabajillos para la señora\ndel comedor.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0000000b>¡La puntuación total es <numeric arg0 0>!\n¡Qué machada, <heroname>!\nDonde pones el ojo, pones la flecha.\n\nEres increíble, <heroname>...\nSiempre superas cualquier reto que te\npongan por delante.\n\n<0x10009:0x00070a00>Te mereces un buen premio. \n¡Toma, aquí tienes!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070a00>A ver si la próxima vez consigues\nbatir la marca de <color red<600 puntos>coloroff>.\nEso es un reto hasta para ti, ¿eh?")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0000000b>¡¡La puntuación total es <numeric arg0 0>!!\n¡Increíble! ¡Has pulverizado todos\nlos registros, <heroname>!\n\n<0x10009:0x00070a00>Al nacer rompiste el molde...\nEres el orgullo de nuestra academia,\n<heroname>. \nToma, ¡te lo has ganado!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0000000b>¡¡La puntuación total es <numeric arg0 0>!!\n¡Esto es el acabose!\n¡Eres una auténtica máquina,\n<heroname>!\nMe siento orgulloso de pertenecer\na la misma academia que un genio\ncomo tú.\n\n<0x10009:0x00070a00>Toma, acepta esto como <color red<prueba de\nnuestra amistad>coloroff>.")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001><0x10008:0x01cd>¡<heroname>!<0x1000D:0x1906>")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00010800><0x10008:0xffcd>Esto...<pause 20> Verás...\n\n\n\n<0x10009:0x00070800>Bueno, nada...<pause 20>\nDéjalo, no te preocupes.")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00070a0b>Gracias, <heroname>, te debo una.\n\n\n\n<0x10009:0x00000209>La paga por este trabajo la dividiremos\na partes iguales. Es lo justo... No es\nmucho, pero aquí tienes.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Me tengo que quedar en la academia,\npero te deseo mucha suerte en el <color red<torneo\nceleste>coloroff>.\n\n¡Te estaré animando desde aquí,\n<heroname>!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Ah, <heroname>... ¿Me ayudas?\n\n\n\nTan amable como siempre. ¡Qué alegría\nque te ofrezcas para echarme una mano!\n\n\n<0x10009:0x00070203>Si me haces el favor, quisiera que le\nllevaras un <color red<barril >coloroff>a la señora del\ncomedor.\n\nPuedes coger el barril con (A) y, si\npulsas (A) otra vez, lo <color green<dejas >coloroff>en el\nsuelo; así de fácil.\n\n<0x10009:0x00010200>También puedes <color green<lanzar>coloroff> objetos si los\nlevantas por encima de la cabeza. En el\ncaso de objetos pequeños, como un jarrón,\npuedes lanzarlos <color green<rodando >coloroff>por el suelo.\n<0x10009:0x0c070200>Pero es mejor que ni lo intentes,\nporque ese tipo de cosas se rompen\ncon facilidad...")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Si se te olvidan los controles, puedes\nvolver a consultarlos siempre que\nquieras <color green<pulsando>coloroff> <color green<<icon 19>>coloroff>.<0x10011:0x0bcd>\n\nAsí verás una lista de las acciones y los\ncontroles posibles en cada momento.\n¡Verás lo práctico que es!")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "")
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Ah, <heroname>... ¿Me ayudas?\n\n\n\nTan amable como siempre. ¡Qué alegría\nque te ofrezcas para echarme una mano!\n\n\n<0x10009:0x00070203>Si me haces el favor, quisiera que le\nllevaras un <color red<barril >coloroff>a la señora del\ncomedor.\n\nPuedes coger el barril con (A) y, si\npulsas (A) otra vez, lo <color green<dejas >coloroff>en el\nsuelo; así de fácil.\n\n<0x10009:0x00010200>También puedes <color green<lanzar>coloroff> objetos si los\nlevantas por encima de la cabeza. En el\ncaso de objetos pequeños, como un jarrón,\npuedes lanzarlos <color green<rodando >coloroff>por el suelo.\n<0x10009:0x0c070200>Pero es mejor que ni lo intentes,\nporque ese tipo de cosas se rompen\ncon facilidad...")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Si se te olvidan los controles, puedes\nvolver a consultarlos siempre que\nquieras <color green<pulsando>coloroff> <color green<<icon 19>>coloroff>.<0x10011:0x0bcd>\n\nAsí verás una lista de las acciones y los\ncontroles posibles en cada momento.\n¡Verás lo práctico que es!")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00070201>¡<heroname>!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00071800>¡Ese uniforme verde es una pasada!\nPareces un caballero hecho y derecho.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000b0200>Me lo ha comentado el director... \nVas a salir en busca de Zelda, ¿no\nes así?\n\n<0x10009:0x00001700>Eres increíble... No como yo, que soy\nun sinsangre y no sirvo para nada.\n\n\n<0x1000A:0x000500cd>En fin, toma. La he hecho para ti.\nNo es gran cosa, pero me ha costado\nlo mío... Me haría mucha ilusión que\nla usaras.")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	wait_frames(20)
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Es una <color red<alforja de aventurero>coloroff>, tiene\ncapacidad para llevar hasta <color red<cuatro\n>coloroff>objetos.\n\nEn el bazar venden artículos de todo\ntipo que pueden serte útiles en tu viaje.\nYo que tú iría a echar un vistazo...\n\n<0x10009:0x00070a09>Sobre todo, nunca salgas de casa sin\nun <color yellow<escudo >coloroff>y alguna que otra <color yellow<poción>coloroff>.")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "¡<heroname>! \n<0x10009:0x00010c00>Tienes que encontrar a Zelda,\n¿prometido?")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "")
          }

