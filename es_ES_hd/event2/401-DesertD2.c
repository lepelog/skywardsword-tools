          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "¡Has conectado el segundo generador!\nAhora ya puedes cruzar la sala de\nmáquinas y llegar hasta aquí...\n¡Date prisa, por lo que más quieras!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "¿Has conectado un generador?\nBien, pero eso significa que aún\nte falta otro para poder pasar a la\nsala de máquinas.\nRápido, ¡conecta el <color red<generador >coloroff>que\nfalta y ven a salvarnos!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Tienes que ayudarme...\nLo primero que debes hacer es\nvolver a conectar los <color red<generadores\nde la sala de máquinas>coloroff>.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090c00>Qué susto... Estoy que no me llegan\nlas tuercas a la carcasa...\n\n\n<0x10009:0x00030900>Oye, ¿qué hace un humano como tú\nen un andurrial como este?")
          				flw_1:
/*<  1>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "(.<pause 5>.<pause 5>.<pause 5>)\n\n\n\n<0x10009:0x00030900>¡Gracias por venir con <color blue<el almirante\n>coloroff>a salvarnos!\n\n\n<0x10009:0x00030900>Pero con estas <color red<barreras eléctricas\n>coloroff>por todos lados, ¡no podemos salir!")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				wait_frames(60)
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "(.<pause 5>.<pause 5>.<pause 5>)\n\n\n\n<0x10009:0x00030900>Escucha... justo bajo este calabozo\nestá la sala de máquinas del barco.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030900>Hay un pasadizo que conecta la sala\nde máquinas con el calabozo.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00030900>Pero para atravesar la sala de\nmáquinas y llegar hasta aquí, <sound 4>antes\nhay que conectar los <color red<generadores >coloroff>de\nla sala de máquinas.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00030900>¿Eh?<pause 5>.<pause 5>.<pause 5>.\nLa maquinaria está funcionando\nde nuevo...\n<0x10009:0x00030900>¿Has conectado los <color red<generadores>coloroff>?\n<0x10009:0x00030900>¡Fantástico! Ahora ya puedes cruzar\npor la sala de máquinas y llegar hasta\ndonde estoy yo. <0x10009:0x00030900>¡Aquí te espero!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>¿Eh?<pause 5>.<pause 5>.<pause 5>.\n¿Has conseguido activar de nuevo la\n<color red<corriente>coloroff>?\n\n<0x10009:0x00030900>Pero solo has conectado un generador.\nEn realidad son <color red<dos >coloroff>los que hay que\nconectar.")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00030900>El <color red<generador>coloroff> que falta está aquí.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00030900>¡Te lo pido por favor!")
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
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00030900>Los <color red<generadores >coloroff>están en estos dos\npuntos.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00030900>¡Te lo pido por favor!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00030900>¿Cómo se las ha arreglado un humano\ncomo tú para llegar hasta aquí?...")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090c00>¡Po... por favor, ayúdanos!\n¡Acaba con los bicharracos estos!")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030900>Nos has salvado... ¡Ay!\nNo sé cómo darte las gracias.")
          		flw_15:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00030900>Así que has venido a este barco en\nbusca de la <color red<Llama de Nayru>coloroff>...\n\n\n<0x10009:0x00030900>Pues primero tendrás que recuperar\nel gobierno del barco.\n\n\n<0x10009:0x00030900>La cabina de mando está al lado de\neste calabozo, protegida por una\ngran puerta cerrada con llave.\n\n<0x10009:0x00030900>Lo mejor será que vayas al <color blue<camarote\ndel almirante>coloroff>. <sound 4>La llave de la cabina\ndebería estar allí.")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030900>Toma, en agradecimiento por habernos\nsalvado, te doy esta <color yellow<llave>coloroff>.\n\n\n<0x10009:0x00030900>Con ella podrás entrar en el <color blue<camarote\ndel almirante>coloroff>.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00030900>Se puede acceder al camarote del\nalmirante por la puerta que hay\nen la parte trasera de la cubierta.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00030900>¡Yo me largo de aquí pero ya!\n\n\n\n<0x10009:0x00030900>El resto lo dejo en tus manos.\nNo te lo tomes a mal, ¿eh?\n")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		wait_frames(30)
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030900>Oye, esa cara me suena<pause 5>.<pause 5>.<pause 5>.\n<0x10009:0x00030900>Ya sé, ¡eres el tipo ese que me dejó\ntirado y abandonado a mi suerte!\n\n<0x10009:0x00030900>¿Cómo has llegado hasta aquí?")
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00030900>(.<pause 5>.<pause 5>.<pause 5>)\n\n\n\n<0x10009:0x00030900>¡Gracias por venir en mi ayuda con el\n<color blue<almirante>coloroff>!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00030900>Pero si eres humano...\n¿Cómo lo has hecho para llegar hasta\naquí?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00030900>¡Bien hecho, grumete!\n")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00030900>¡Espléndido! ¡Mi galeón vuelve a estar\ncomo nuevo!\n\n\n<0x10009:0x00030900>Si no es mucho pedir, me gustaría\nque también les echaras una mano\na los <color blue<muchachos de mi tripulación>coloroff>.\n\n<0x10009:0x00030900>En este barco hay un <color blue<<sound 4>calabozo>coloroff>, \nseguramente los pobrecillos\nestarán encerrados allí.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00030900>Si no te importa, yo te espero en el\nbote, por si las moscas.\n\n\n<0x10009:0x00030900>Esto lo dejo en tus manos, ¡suerte!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	wait_frames(30)
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10012:0x0000000b>Amo, detecto que este <color red<tentáculo\n>coloroff>pertenece a un monstruo de\ndimensiones gigantescas.\n\nLa situación actual no está del todo\nclara, pero parece que está tratando\nde hundir el barco.\n\nDe continuar así, calculo un 80% de\nprobabilidades de que consiga su\npropósito.\n\nSugiero usar el <color red<<sound 4>poder sagrado >coloroff>para\ncercenar el tentáculo y así poder salir\nal exterior a evaluar la situación. ")
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
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10012:0x00000001>Amo, informo de que la sala de\nmáquinas vuelve a funcionar a\npleno rendimiento.\n\nSugiero que nos dispongamos a\ncruzarla cuanto antes para <color green<liberar\n>coloroff>a los marineros encerrados en el\ncalabozo.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "Informo al <0x10012:0x00000001>amo de que la sala de\nmáquinas vuelve a funcionar, tal y\ncomo dijeron los marineros.\n\nSin embargo, para abrir el pasadizo\nal calabozo hace falta conectar un\n<color red<generador >coloroff>más.\n\nSugiero que nos apresuremos hasta\nel lugar donde se halla este segundo\n<color red<generador>coloroff>.")
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
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000001>Amo, vuelvo a detectar vibraciones\nde gran magnitud. \n\n\nLa situación actual no está del todo\nclara, pero sugiero apresurarnos a\nliberar a los <color blue<marineros del calabozo>coloroff>.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10012:0x00000001>Amo, detecto unas vibraciones de gran\nmagnitud.\n\n\nDebido a las operaciones efectuadas,\nhan empezado a moverse algunas\nestructuras dentro del barco.\n\nLa situación actual no está del todo\nclara, pero sugiero apresurarnos a\nliberar a los <color blue<marineros del calabozo>coloroff>.")
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
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000001>Amo, confirmo que se trata de la <sound 4><color yellow<llave\n>coloroff>de la cabina de mando de la que nos\nhabló la tripulación.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "Calculo que la <color blue<puerta de la cabina de\nmando >coloroff>se encuentra justo en el lugar\nindicado por la marca (X).")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Sugiero que nos apresuremos hacia la\n<color blue<cabina de mando>coloroff>.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "Recomiendo al <0x10012:0x00000001>amo que mire con\natención.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Hay una puerta de gran tamaño,\naunque ahora parece que está cerrada.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Deduzco que da a una estancia muy\nimportante.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Tengo información importante para\nel <0x10012:0x0000000b>amo <heroname>...")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "Percibo una presencia maligna tras\nesa puerta.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Hay un 90% de probabilidades de que\nse trate del monstruo al que pertenecen\nestos tentáculos.\n\nRecomiendo hacer acopio de valor y\nsalir a cubierta.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	wait_frames(15)
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10012:0x0000000b>Amo <heroname>, ha aparecido\nun objeto en lo alto del mástil. Calculo\nun 90% de probabilidades de que se\ntrate de un <sound 4><color red<cronolito>coloroff>.\nRecomiendo <color green<golpearlo >coloroff>de cualquier\nmodo. Es posible que esto cause\ncambios importantes en el estado\ndel barco.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "Informe para el <0x10012:0x00000001>amo sobre el autómata\nzombi recién vencido.\n\n\nHay un 90% de probabilidades de que\nse tratara del pirata del que hablaba el\n<color blue<almirante>coloroff>.\n\nConservar tal instinto asesino a lo largo\nde tantos siglos no es algo que se vea\ntodos los días.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf(/* textboxtype: 0, unk: 2, line: 52 */ "Tengo información importante sobre\nel arco que el <0x10012:0x0000000b>amo acaba de conseguir.\n\n\nGracias a la potencia que se acumula\nal tensarlo, el arco puede lanzar sus\nflechas a gran distancia, y esto lo hace\nideal para <color green<alcanzar objetivos lejanos>coloroff>.\nPara consultar su modo de empleo,\nno hay más que pulsar <icon 41> para sacarlo\ny luego usar <icon 19>.<0x10011:0x0fcd><0x10011:0x0bcd>")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "Además, las flechas también pueden\nactivar <color red<ciertos mecanismos >coloroff>al\ngolpearlos.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "Detecto la presencia de uno de esos\n<color red<mecanismos >coloroff>en esta misma <color blue<<sound 4>cubierta>coloroff>.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Sin embargo, considero difícil llegar\nhasta él desde aquí. Sugiero regresar\na cubierta.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 0, unk: 2, line: 55 */ "Sugiero al <0x10012:0x00000001>amo que mire hacia arriba.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "Por el respiradero del techo puede\nverse el cronolito de la cubierta.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

