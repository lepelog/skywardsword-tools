          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("(.<pause05>.<pause05>.)")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf("¡Has conectado el segundo generador!\nAhora ya puedes cruzar la sala de\nmáquinas y llegar hasta aquí...\n¡Date prisa, por lo que más quieras!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf("¿Has conectado un generador?\nBien, pero eso significa que aún\nte falta otro para poder pasar a la\nsala de máquinas.\nRápido, ¡conecta el <r<generador >>que\nfalta y ven a salvarnos!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf("Tienes que ayudarme...\nLo primero que debes hacer es\nvolver a conectar los <r<generadores\nde la sala de máquinas>>.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x09\xC00Qué susto... Estoy que no me llegan\nlas tuercas a la carcasa...\n\n\n\x0E\x01\x09\x04\x03\x900Oye, ¿qué hace un humano como tú\nen un andurrial como este?")
          				flw_1:
/*<  1>*/ 				printf("(.<pause05>.<pause05>.<pause05>)\n\n\n\n\x0E\x01\x09\x04\x03\x900¡Gracias por venir con <b<el almirante\n>>a salvarnos!\n\n\n\x0E\x01\x09\x04\x03\x900Pero con estas <r<barreras eléctricas\n>>por todos lados, ¡no podemos salir!")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 32, 'param3': 6}
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf("(.<pause05>.<pause05>.<pause05>)\n\n\n\n\x0E\x01\x09\x04\x03\x900Escucha... justo bajo este calabozo\nestá la sala de máquinas del barco.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x03\x900Hay un pasadizo que conecta la sala\nde máquinas con el calabozo.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x03\x900Pero para atravesar la sala de\nmáquinas y llegar hasta aquí, <pling>antes\nhay que conectar los <r<generadores >>de\nla sala de máquinas.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x03\x900¿Eh?<pause05>.<pause05>.<pause05>.\nLa maquinaria está funcionando\nde nuevo...\n\x0E\x01\x09\x04\x03\x900¿Has conectado los <r<generadores>>?\n\x0E\x01\x09\x04\x03\x900¡Fantástico! Ahora ya puedes cruzar\npor la sala de máquinas y llegar hasta\ndonde estoy yo. \x0E\x01\x09\x04\x03\x900¡Aquí te espero!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf("\x0E\x01\x09\x04\x03\x900¿Eh?<pause05>.<pause05>.<pause05>.\n¿Has conseguido activar de nuevo la\n<r<corriente>>?\n\n\x0E\x01\x09\x04\x03\x900Pero solo has conectado un generador.\nEn realidad son <r<dos >>los que hay que\nconectar.")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf("\x0E\x01\x09\x04\x03\x900El <r<generador>> que falta está aquí.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf("\x0E\x01\x09\x04\x03\x900¡Te lo pido por favor!")
          							goto flw_19
          						  case 1:
/*<114>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 115, 'param3': 30}
          							goto flw_115
          						}
          					}
          				  case 1:
/*<111>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
          						goto flw_112
          					  case 1:
/*< 20>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 47, 'param3': 30}
/*< 47>*/ 						{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 24, 'param3': 30}
/*< 24>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x03\x900Los <r<generadores >>están en estos dos\npuntos.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x03\x900¡Te lo pido por favor!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x03\x900¿Cómo se las ha arreglado un humano\ncomo tú para llegar hasta aquí?...")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x09\xC00¡Po... por favor, ayúdanos!\n¡Acaba con los bicharracos estos!")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf("(.<pause05>.<pause05>.)")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf("")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf("(.<pause05>.<pause05>.)")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x03\x900Nos has salvado... ¡Ay!\nNo sé cómo darte las gracias.")
          		flw_15:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x03\x900Así que has venido a este barco en\nbusca de la <r<Llama de Nayru>>...\n\n\n\x0E\x01\x09\x04\x03\x900Pues primero tendrás que recuperar\nel gobierno del barco.\n\n\n\x0E\x01\x09\x04\x03\x900La cabina de mando está al lado de\neste calabozo, protegida por una\ngran puerta cerrada con llave.\n\n\x0E\x01\x09\x04\x03\x900Lo mejor será que vayas al <b<camarote\ndel almirante>>. <pling>La llave de la cabina\ndebería estar allí.")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf("\x0E\x01\x09\x04\x03\x900Toma, en agradecimiento por habernos\nsalvado, te doy esta <y<llave>>.\n\n\n\x0E\x01\x09\x04\x03\x900Con ella podrás entrar en el <b<camarote\ndel almirante>>.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf("\x0E\x01\x09\x04\x03\x900Se puede acceder al camarote del\nalmirante por la puerta que hay\nen la parte trasera de la cubierta.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x03\x900¡Yo me largo de aquí pero ya!\n\n\n\n\x0E\x01\x09\x04\x03\x900El resto lo dejo en tus manos.\nNo te lo tomes a mal, ¿eh?\n")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 16, 'param3': 6}
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf("\x0E\x01\x09\x04\x03\x900Oye, esa cara me suena<pause05>.<pause05>.<pause05>.\n\x0E\x01\x09\x04\x03\x900Ya sé, ¡eres el tipo ese que me dejó\ntirado y abandonado a mi suerte!\n\n\x0E\x01\x09\x04\x03\x900¿Cómo has llegado hasta aquí?")
          			flw_125:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x03\x900(.<pause05>.<pause05>.<pause05>)\n\n\n\n\x0E\x01\x09\x04\x03\x900¡Gracias por venir en mi ayuda con el\n<b<almirante>>!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x03\x900Pero si eres humano...\n¿Cómo lo has hecho para llegar hasta\naquí?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x03\x900¡Bien hecho, grumete!\n")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x03\x900¡Espléndido! ¡Mi galeón vuelve a estar\ncomo nuevo!\n\n\n\x0E\x01\x09\x04\x03\x900Si no es mucho pedir, me gustaría\nque también les echaras una mano\na los <b<muchachos de mi tripulación>>.\n\n\x0E\x01\x09\x04\x03\x900En este barco hay un <b<<pling>calabozo>>, \nseguramente los pobrecillos\nestarán encerrados allí.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x03\x900Si no te importa, yo te espero en el\nbote, por si las moscas.\n\n\n\x0E\x01\x09\x04\x03\x900Esto lo dejo en tus manos, ¡suerte!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 54, 'param3': 6}
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo, detecto que este <r<tentáculo\n>>pertenece a un monstruo de\ndimensiones gigantescas.\n\nLa situación actual no está del todo\nclara, pero parece que está tratando\nde hundir el barco.\n\nDe continuar así, calculo un 80% de\nprobabilidades de que consiga su\npropósito.\n\nSugiero usar el <r<<pling>poder sagrado >>para\ncercenar el tentáculo y así poder salir\nal exterior a evaluar la situación. ")
/*< 55>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 36}
/*< 53>*/ 	scene_flags[18 'Lanayru: Sandship'][79 /* 0x8 80 */] = true;
          }

          void entrypoint_401_10() {
/*< 63>*/ 	start()
/*< 64>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 65>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 66>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 70>*/ 				printf("\x0E\x01\x12\x04\x00\x01Amo, informo de que la sala de\nmáquinas vuelve a funcionar a\npleno rendimiento.\n\nSugiero que nos dispongamos a\ncruzarla cuanto antes para <g<liberar\n>>a los marineros encerrados en el\ncalabozo.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf("Informo al \x0E\x01\x12\x04\x00\x01amo de que la sala de\nmáquinas vuelve a funcionar, tal y\ncomo dijeron los marineros.\n\nSin embargo, para abrir el pasadizo\nal calabozo hace falta conectar un\n<r<generador >>más.\n\nSugiero que nos apresuremos hasta\nel lugar donde se halla este segundo\n<r<generador>>.")
          			}
          		  case 1:
/*< 67>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_69
          			  case 1:
          				goto flw_69
          			}
          		}
          	  case 1:
/*< 72>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 73>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x12\x04\x00\x01Amo, vuelvo a detectar vibraciones\nde gran magnitud. \n\n\nLa situación actual no está del todo\nclara, pero sugiero apresurarnos a\nliberar a los <b<marineros del calabozo>>.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf("\x0E\x01\x12\x04\x00\x01Amo, detecto unas vibraciones de gran\nmagnitud.\n\n\nDebido a las operaciones efectuadas,\nhan empezado a moverse algunas\nestructuras dentro del barco.\n\nLa situación actual no está del todo\nclara, pero sugiero apresurarnos a\nliberar a los <b<marineros del calabozo>>.")
          			}
          		  case 1:
/*< 74>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_71
          			  case 1:
          				goto flw_71
          			}
          		}
          	}
          }

          void entrypoint_401_11() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, confirmo que se trata de la <pling><y<llave\n>>de la cabina de mando de la que nos\nhabló la tripulación.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf("Calculo que la <b<puerta de la cabina de\nmando >>se encuentra justo en el lugar\nindicado por la marca \x0E\x02\x04\x02\x19CD.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf("Sugiero que nos apresuremos hacia la\n<b<cabina de mando>>.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("Recomiendo al \x0E\x01\x12\x04\x00\x01amo que mire con\natención.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf("Hay una puerta de gran tamaño,\naunque ahora parece que está cerrada.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf("Deduzco que da a una estancia muy\nimportante.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("Tengo información importante para\nel \x0E\x01\x12\x04\x00\x0Bamo Link...")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf("Percibo una presencia maligna tras\nesa puerta.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf("Hay un 90% de probabilidades de que\nse trate del monstruo al que pertenecen\nestos tentáculos.\n\nRecomiendo hacer acopio de valor y\nsalir a cubierta.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo Link, ha aparecido\nun objeto en lo alto del mástil. Calculo\nun 90% de probabilidades de que se\ntrate de un <pling><r<cronolito>>.\nRecomiendo <g<golpearlo >>de cualquier\nmodo. Es posible que esto cause\ncambios importantes en el estado\ndel barco.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("Informe para el \x0E\x01\x12\x04\x00\x01amo sobre el autómata\nzombi recién vencido.\n\n\nHay un 90% de probabilidades de que\nse tratara del pirata del que hablaba el\n<b<almirante>>.\n\nConservar tal instinto asesino a lo largo\nde tantos siglos no es algo que se vea\ntodos los días.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf("Tengo información importante sobre\nel arco que el \x0E\x01\x12\x04\x00\x0Bamo acaba de conseguir.\n\n\nGracias a la potencia que se acumula\nal tensarlo, el arco puede lanzar sus\nflechas a gran distancia, y esto lo hace\nideal para <g<alcanzar objetivos lejanos>>.\nPara consultar su modo de empleo, no\nhay más que pulsar (2) tras haberlo\nsacado con (B).\x0E\x01\x11\x02\x5CD\x0E\x01\x11\x02\x1CD")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf("Además, las flechas también pueden\nactivar <r<ciertos mecanismos >>al\ngolpearlos.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf("Detecto la presencia de uno de esos\n<r<mecanismos >>en esta misma <b<<pling>cubierta>>.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf("Sin embargo, considero difícil llegar\nhasta él desde aquí. Sugiero regresar\na cubierta.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf("Sugiero al \x0E\x01\x12\x04\x00\x01amo que mire hacia arriba.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf("Por el respiradero del techo puede\nverse el cronolito de la cubierta.\n\n\nCalculo que, a través de esta abertura,\nsería posible hacer impactar contra\nél una flecha o un objeto volador de\npequeño tamaño.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

