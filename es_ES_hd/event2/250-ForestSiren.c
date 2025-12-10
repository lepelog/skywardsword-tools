          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Nada más poner un pie fuera\nde este círculo, los llamados\n<color red<guardianes >coloroff>irán en pos del <0x10012:0x00000002>amo.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf(/* textboxtype: 4, unk: 2, line: 10 */ "Si el <0x10012:0x00000002>amo recibe un solo golpe de los\n<color red<guardianes>coloroff>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 4, line: 11 */ "Para completar la <color yellow<orquídea del espíritu>coloroff>,\nes necesario recoger todas las <color yellow<lágrimas>coloroff>\nsin sufrir ningún daño.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf(/* textboxtype: 4, unk: 2, line: 13 */ "¿Ha quedado todo claro, <0x10012:0x00000002>amo?\n¿Es necesario que vuelva a repetir\nmi explicación?\n[1-]Sí[2]No")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 4, line: 14 */ "¿Qué información desea saber el <0x10012:0x00000001>amo?\n[1-]Orquídea\ndel espíritu[2-]Guardianes[3-]Hypnea[4]Olvídalo")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>De acuerdo, amo.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>De acuerdo, amo.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>De acuerdo, amo.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf(/* textboxtype: 4, unk: 2, line: 16 */ "Este lugar es una <color blue<Hypnea>coloroff>, un <color red<mundo\n>coloroff><color red<sagrado >coloroff>en el que tan solo el elegido\nde la Diosa puede entrar.\n\nAl viajar a este mundo, el espíritu\ndel <0x10012:0x00000001>amo se separa de su recipiente\ncarnal.\n\nSometerse al juicio de la <color blue<Hypnea>coloroff> es\nnecesario para que el espíritu del <0x10012:0x00000001>amo\ncrezca y se fortalezca.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf(/* textboxtype: 2, unk: 2, line: 12 */ "<0x10012:0x00000005>Está bien, amo.\n\n\n\nEsperaré en el mundo exterior.\n\n\n\nQue la Diosa proteja al <0x10012:0x00000001>amo.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 86, 'param3': 40}
/*< 86>*/ 			zone_temp_flags[10 /* 0x0 04 */] = false;
/*< 80>*/ 			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 81>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*< 82>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_83
          	}
          }

          void entrypoint_250_04() {
/*< 96>*/ 	start()
          	goto flw_74
          }

          void entrypoint_250_00() {
          	start()
/*< 23>*/ 	set_camera(8, 0)
/*< 15>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 4, unk: 2, line: 28 */ "¡Todo listo, <heroname>!\n¡Ánimo y a por todas!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 2, unk: 2, line: 18 */ "<0x10012:0x00000004>Amo <heroname>, la recolección\nde <color yellow<lágrimas >coloroff>ha fracasado.")
/*< 55>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 29, 'param3': 40}
/*< 29>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 31>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 34>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 40>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 41>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 42>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 46>*/ 										printf(/* textboxtype: 2, unk: 4, line: 26 */ "<0x10012:0x00000001>Amo, existen dos tipos de <color red<vigías>coloroff>\nque alertan a los <color red<guardianes >coloroff>en cuanto\ndetectan la presencia de intrusos:\n<color red<los aéreos y los terrestres>coloroff>.\nCada tipo presenta un comportamiento\ndiferente, por lo que se recomienda\nextremar las precauciones.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 19 */ "Esperaré a que el <0x10012:0x00000001>amo regrese tras\nhaber obtenido todas las <color yellow<lágrimas>coloroff>.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "La posición de toda <color yellow<lágrima >coloroff>obtenida\ncon anterioridad quedará <color red<registrada\nen el mapa>coloroff>. Recomiendo explotar esta\nventaja al máximo plantando balizas.\nLas lágrimas no cambiarán nunca su\nubicación, por lo que conocerla con\nantelación supondrá una gran ayuda\npara superar el juicio.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf(/* textboxtype: 2, unk: 2, line: 24 */ "Aconsejo <color red<reservar >coloroff>las <color yellow<lágrimas >coloroff>más\nsencillas de encontrar para los\nmomentos en los que el <0x10012:0x00000001>amo sea\ndescubierto.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf(/* textboxtype: 2, unk: 4, line: 23 */ "Calculo que la probabilidad de que\nel <0x10012:0x00000001>amo no sea el elegido de\nla Diosa ha aumentado...\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf(/* textboxtype: 4, unk: 2, line: 22 */ "Hay que tener mucho cuidado con\nlos <color red<dos tipos de vigías >coloroff>que rondan\nen busca de posibles intrusos.\n\n<color red<Los vigías aéreos >coloroff>no darán problemas\nmientras el <0x10012:0x00000002>amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, <color red<los vigías terrestres>coloroff>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<color red<extremar las precauciones>coloroff>.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf(/* textboxtype: 2, unk: 2, line: 21 */ "La posición de las <color yellow<lágrimas\n>coloroff>ya obtenidas quedará <color red<anotada\nen el mapa>coloroff>.\n\nDe partida, es recomendable\ncentrar los esfuerzos en localizar\nsu ubicación.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf(/* textboxtype: 2, unk: 4, line: 20 */ "El espíritu del <0x10012:0x00000002>amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <color red<reservar>coloroff> las <color yellow<lágrimas>coloroff>\nmás sencillas de encontrar para los\nmomentos en los que el <0x10012:0x00000002>amo sea\ndescubierto.\nEsperaré en el mundo exterior a\nque el <0x10012:0x00000002>amo regrese tras conseguir\nlas 15 <color yellow<lágrimas>coloroff>.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "Cuando el <0x10012:0x00000002>amo complete la\n<color yellow<orquídea del espíritu >coloroff>con las 15\n<color yellow<lágrimas>coloroff>, reforzará su espíritu\ny la Diosa le otorgará un poder.\nEsperaré el regreso del <0x10012:0x00000002>amo\nen el mundo exterior.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Debo abstenerme de acompañar al <0x10012:0x00000002>amo\nen este viaje, dado que la prueba a la\nque se enfrenta le incumbe solamente\na él.\nSolo el elegido de la Diosa puede\nacceder al mundo sagrado en el que\nse celebran las <color blue<Hypneas>coloroff>.\n\nEn concreto, aquí tendrá lugar la\n<color blue<Hypnea de Farore>coloroff>, un juicio que\npondrá a prueba el <color red<valor >coloroff>del <0x10012:0x00000001>\namo.\nPara hallar la llama sagrada que\nfortalecerá la espada del <0x10012:0x00000002>amo,\nes indispensable que su espíritu\nsiga creciendo.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf(/* textboxtype: 4, unk: 2, line: 4 */ "Esa es la <color yellow<orquídea del espíritu>coloroff>.\n\n\n\nCuando la complete, el <0x10012:0x00000002>amo habrá\nsuperado el juicio y verá fortalecido\nsu espíritu.\n\nAdemás, la Diosa le concederá\nun <color red<nuevo poder>coloroff>.")
          			flw_6:
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 5 */ "Para completar la <color yellow<orquídea del espíritu>coloroff>,\nes necesario encontrar las <color yellow<lágrimas\nde Farore >coloroff>que hay esparcidas por\neste mundo.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "<0x10012:0x00000002>Amo, aquel objeto brillante de allí...")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf(/* textboxtype: 4, unk: 2, line: 7 */ "Es una de las <color yellow<lágrimas de Farore>coloroff>.\nEl <0x10012:0x00000001>amo deberá reunir las <color red<15\n>coloroff>para superar el juicio.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			wait_frames(15)
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf(/* textboxtype: 2, unk: 4, line: 8 */ "La tarea, sin embargo, no será nada\nsencilla. No es casualidad que estas\npruebas reciban el nombre de <color red<juicios>coloroff>...")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	wait_frames(30)
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf(/* textboxtype: 2, unk: 2, line: 27 */ "El líquido que cubre el área cercana\nse llama <color red<fluido hypneo>coloroff>.\n\n\nSi el <0x10012:0x00000002>amo posa un pie sobre él, los\n<color red<guardianes detectarán de inmediato\nsu presencia>coloroff>.\n\nHay varias zonas de este tipo en los\nalrededores, por lo que aconsejo\ncaminar con los ojos bien abiertos.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

