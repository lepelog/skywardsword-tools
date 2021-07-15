          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf("Nada más poner un pie fuera\nde este círculo, los llamados\n<r<guardianes >>irán en pos del \x0E\x01\x12\x04\x00\x02amo.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf("Si el \x0E\x01\x12\x04\x00\x02amo recibe un solo golpe de los\n<r<guardianes>>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf("Para completar la <y<orquídea\ndel espíritu>>, es necesario\nrecoger todas las <y<lágrimas>>\nsin sufrir ningún daño.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf("¿Ha quedado todo claro, \x0E\x01\x12\x04\x00\x02amo?\n¿Es necesario que vuelva\na repetir mi explicación?\n[1]Sí[2-]No")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf("¿Qué información desea saber el \x0E\x01\x12\x04\x00\x01amo?\n[1]Orquídea\ndel espíritu[2]Guardianes[3]Hypnea[4-]Olvídalo")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf("Este lugar es una <b<Hypnea>>, un <r<mundo\n>><r<sagrado >>en el que tan solo el elegido\nde la Diosa puede entrar.\n\nAl viajar a este mundo, el espíritu\ndel \x0E\x01\x12\x04\x00\x01amo se separa de su recipiente\ncarnal.\n\nSometerse al juicio de la <b<Hypnea>> es\nnecesario para que el espíritu del \x0E\x01\x12\x04\x00\x01amo\ncrezca y se fortalezca.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf("\x0E\x01\x12\x04\x00\x05Está bien, amo.\n\n\n\nEsperaré en el mundo exterior.\n\n\n\nQue la Diosa proteja al \x0E\x01\x12\x04\x00\x01amo.")
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
/*< 16>*/ 		printf("¡Todo listo, Link!\n¡Ánimo y a por todas!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x12\x04\x00\x04Amo Link, la recolección\nde <y<lágrimas >>ha fracasado.")
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
/*< 46>*/ 										printf("\x0E\x01\x12\x04\x00\x01Amo, existen dos tipos de <r<vigías>>\nque alertan a los <r<guardianes >>en cuanto\ndetectan la presencia de intrusos:\n<r<los aéreos y los terrestres>>.\nCada tipo presenta un comportamiento\ndiferente, por lo que se recomienda\nextremar las precauciones.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf("Esperaré a que el \x0E\x01\x12\x04\x00\x01amo regrese tras\nhaber obtenido todas las <y<lágrimas>>.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf("La posición de toda <y<lágrima >>obtenida\ncon anterioridad quedará <r<registrada\nen el mapa>>. Recomiendo explotar esta\nventaja al máximo plantando balizas.\nLas lágrimas no cambiarán nunca su\nubicación, por lo que conocerla con\nantelación supondrá una gran ayuda\npara superar el juicio.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf("Aconsejo <r<reservar >>las <y<lágrimas >>más\nsencillas de encontrar para los\nmomentos en los que el \x0E\x01\x12\x04\x00\x01amo sea\ndescubierto.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf("Calculo que la probabilidad de que\nel \x0E\x01\x12\x04\x00\x01amo no sea el elegido de\nla Diosa ha aumentado...\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf("Hay que tener mucho cuidado con\nlos <r<dos tipos de vigías >>que rondan\nen busca de posibles intrusos.\n\n<r<Los vigías aéreos >>no darán problemas\nmientras el \x0E\x01\x12\x04\x00\x02amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, <r<los vigías terrestres>>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<r<extremar las precauciones>>.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf("La posición de las <y<lágrimas\n>>ya obtenidas quedará <r<anotada\nen el mapa>>.\n\nDe partida, es recomendable\ncentrar los esfuerzos en localizar\nsu ubicación.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf("El espíritu del \x0E\x01\x12\x04\x00\x02amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <r<reservar>> las <y<lágrimas>>\nmás sencillas de encontrar para los\nmomentos en los que el \x0E\x01\x12\x04\x00\x02amo sea\ndescubierto.\nEsperaré en el mundo exterior a\nque el \x0E\x01\x12\x04\x00\x02amo regrese tras conseguir\nlas 15 <y<lágrimas>>.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf("\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf("Cuando el \x0E\x01\x12\x04\x00\x02amo complete la\n<y<orquídea del espíritu >>con las 15\n<y<lágrimas>>, reforzará su espíritu\ny la Diosa le otorgará un poder.\nEsperaré el regreso del \x0E\x01\x12\x04\x00\x02amo\nen el mundo exterior.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf("Debo abstenerme de acompañar al \x0E\x01\x12\x04\x00\x02amo\nen este viaje, dado que la prueba a la\nque se enfrenta le incumbe solamente\na él.\nSolo el elegido de la Diosa puede\nacceder al mundo sagrado en el que\nse celebran las <b<Hypneas>>.\n\nEn concreto, aquí tendrá lugar la\n<b<Hypnea de Farore>>, un juicio que\npondrá a prueba el <r<valor >>del \x0E\x01\x12\x04\x00\x01\namo.\nPara hallar la llama sagrada que\nfortalecerá la espada del \x0E\x01\x12\x04\x00\x02amo,\nes indispensable que su espíritu\nsiga creciendo.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf("Esa es la <y<orquídea del espíritu>>.\n\n\n\nCuando la complete, el \x0E\x01\x12\x04\x00\x02amo\nhabrá superado el juicio y\nverá fortalecido su espíritu.\n\nAdemás, la Diosa le concederá\nun <r<nuevo poder>>.")
          			flw_6:
/*<  6>*/ 			printf("Para completar la <y<orquídea del\nespíritu>>, es necesario encontrar\nlas <y<lágrimas de Farore >>que hay\nesparcidas por este mundo.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf("\x0E\x01\x12\x04\x00\x02Amo, aquel objeto brillante de allí...")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf("Es una de las <y<lágrimas de Farore>>.\nEl \x0E\x01\x12\x04\x00\x01amo deberá reunir las <r<15\n>>para superar el juicio.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf("La tarea, sin embargo, no será nada\nsencilla. No es casualidad que estas\npruebas reciban el nombre de <r<juicios>>...")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf("\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 62, 'param3': 6}
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf("El líquido que cubre el área cercana\nse llama <r<fluido hypneo>>.\n\n\nSi el \x0E\x01\x12\x04\x00\x02amo posa un pie sobre él, los\n<r<guardianes detectarán de inmediato\nsu presencia>>.\n\nHay varias zonas de este tipo en los\nalrededores, por lo que aconsejo\ncaminar con los ojos bien abiertos.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

