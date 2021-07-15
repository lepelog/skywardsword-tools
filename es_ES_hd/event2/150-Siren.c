          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf("¡Todo listo, Link!\n¡Ánimo y a por todas!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x12\x04\x00\x04Amo Link, la recolección\nde <y<lágrimas >>ha fracasado.")
/*< 56>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  8>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 11>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 41>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 42>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 43>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 47>*/ 										printf("\x0E\x01\x12\x04\x00\x01Amo, existen dos tipos de <r<vigías>>\nque alertan a los <r<guardianes >>en cuanto\ndetectan la presencia de intrusos:\n<r<los aéreos y los terrestres>>.\nCada tipo presenta un comportamiento\ndiferente, por lo que se recomienda\nextremar las precauciones.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf("Esperaré a que el \x0E\x01\x12\x04\x00\x01amo regrese tras\nhaber obtenido todas las <y<lágrimas>>.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf("La posición de toda <y<lágrima >>obtenida\ncon anterioridad quedará <r<registrada\nen el mapa>>. Recomiendo explotar esta\nventaja al máximo plantando balizas.\nLas lágrimas no cambiarán nunca su\nubicación, por lo que conocerla con\nantelación supondrá una gran ayuda\npara superar el juicio.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf("Aconsejo <r<reservar >>las <y<lágrimas >>más\nsencillas de encontrar para los momentos\nen los que el \x0E\x01\x12\x04\x00\x01amo haya sido descubierto.")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf("Calculo que la probabilidad de que\nel \x0E\x01\x12\x04\x00\x01amo no sea el elegido de\nla Diosa ha aumentado...\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf("Hay que tener mucho cuidado con los\n<r<dos tipos de vigías >>que rondan en busca\nde posibles intrusos.\n\n<r<Los vigías aéreos >>no darán problemas\nmientras el \x0E\x01\x12\x04\x00\x02amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, <r<los vigías terrestres>>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<r<extremar las precauciones>>.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf("La posición de las <y<lágrimas>>\nya obtenidas quedará <r<anotada\nen el mapa>>.\n\nDe partida, es recomendable centrar\nlos esfuerzos en localizar su ubicación.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf("El espíritu del \x0E\x01\x12\x04\x00\x02amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <r<reservar >>las <y<lágrimas>>\nmás sencillas de encontrar para los\nmomentos en los que el \x0E\x01\x12\x04\x00\x02amo haya\nsido descubierto.\nEsperaré en el mundo exterior\na que el \x0E\x01\x12\x04\x00\x02amo regrese tras\nconseguir las 15 <y<lágrimas>>.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf("\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf("Cuando el \x0E\x01\x12\x04\x00\x02amo complete la\n<y<orquídea del espíritu >>con las 15\n<y<lágrimas>>, reforzará su espíritu\ny la Diosa le otorgará un poder.\nEsperaré el regreso del \x0E\x01\x12\x04\x00\x02amo\nen el mundo exterior.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf("Este es el último de los juicios\ndel espíritu: la <b<Hypnea de la Diosa>>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf("Cuando se complete la última <y<orquídea\ndel espíritu>>, el \x0E\x01\x12\x04\x00\x02amo será reconocido como\nel héroe elegido por la Diosa.\n\nEntonces se revelará la puerta que lleva\nhasta la <y+<Trifuerza>>. Es imprescindible\nsuperar con éxito esta última prueba.\n\n¿Hay alguna cosa que el \x0E\x01\x12\x04\x00\x02amo desee\npreguntar?\n[1]Sí[2-]No")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf("¿Qué tipo de información desea\nrecibir el \x0E\x01\x12\x04\x00\x01amo?\n[1]Orquídea\ndel espíritu[2]Guardianes[3]Fluido\nhypneo[4-]Olvídalo")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf("\x0E\x01\x12\x04\x00\x05Procedo con mi explicación, amo.\nRecomiendo prestar máxima\natención.\n\nPara completar la <y<orquídea del\nespíritu>>, es necesario encontrar\nlas <y<lágrimas sagradas >>que hay\nesparcidas por este mundo.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Amo, aquel objeto brillante de allí...")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf("Es una de las <y<lágrimas sagradas>>.\nEl \x0E\x01\x12\x04\x00\x01amo deberá reunir las <r<15 >>para\nsuperar el juicio.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf("¿Alguna otra pregunta, \x0E\x01\x12\x04\x00\x01amo?\n\n\n[1]Orquídea\ndel espíritu[2]Guardianes[3]Fluido\nhypneo[4-]No, gracias")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf("\x0E\x01\x12\x04\x00\x05Muy bien, amo. He aquí la información\nsolicitada.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf("Nada más poner un pie fuera\nde este círculo, los llamados\n<r<guardianes >>irán en pos del \x0E\x01\x12\x04\x00\x02amo.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf("Si el \x0E\x01\x12\x04\x00\x02amo recibe un solo golpe de los\n<r<guardianes>>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf("Para completar la <y<orquídea del espíritu>>,\nes necesario recoger todas las <y<lágrimas>>\nsin sufrir ningún daño.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Muy bien, amo. He aquí la información\nsolicitada.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("En este mundo existe una especie\nde líquido llamado <r<fluido hypneo>>.\n\n\nSi el \x0E\x01\x12\x04\x00\x01amo posa un pie sobre él,\nlos <r<guardianes detectarán\nde inmediato su presencia>>.\n\nPor lo tanto, aconsejo caminar\ncon los ojos bien abiertos.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf("Esperaré el regreso del \x0E\x01\x12\x04\x00\x02amo\nen el mundo exterior.")
/*< 77>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 74, 'param3': 40}
/*< 74>*/ 					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 80>*/ 					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 73>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 72>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_78
          			}
          		}
          	}
          }

