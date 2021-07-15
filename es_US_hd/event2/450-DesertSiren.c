          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf("¡Todo listo, Link!\n¡Ánimo, puedes hacerlo!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Amo Link, la recolección\nde <y<lágrimas >>ha fracasado.")
/*< 48>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf("\x0E\x01\x12\x04\x00\x01Amo, existen dos tipos de <r<vigías\n>>que alertan a los <r<guardianes >>en cuanto\ndetectan la presencia de intrusos:\nlos <r<aéreos>> y los <r<terrestres>>.\nCada tipo presenta un comportamiento\ndiferente, por lo que se recomienda\nextremar las precauciones.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Esperaré a que el \x0E\x01\x12\x04\x00\x01amo regrese tras\nhaber obtenido todas las <y<lágrimas>>.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("La posición de toda <y<lágrima >>obtenida\ncon anterioridad quedará <r<registrada\nen el mapa>>. Recomiendo explotar esta\nventaja al máximo plantando balizas.\nLas lágrimas no cambiarán nunca su\nubicación, por lo que conocerla con\nantelación supondrá una gran ayuda\npara superar el juicio.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("Aconsejo <r<reservar >>las <y<lágrimas >>más\nsencillas de encontrar para los momentos\nen los que el \x0E\x01\x12\x04\x00\x01amo haya sido descubierto.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("Calculo que la probabilidad de que\nel \x0E\x01\x12\x04\x00\x01amo no sea el elegido de\nla Diosa ha aumentado.\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("Hay que tener mucho cuidado con los\n<r<dos tipos de vigías >>que buscan posibles\nintrusos.\n\nLos <r<vigías aéreos >>no darán problemas\nmientras el \x0E\x01\x12\x04\x00\x02amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, los <r<vigías terrestres>>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<r<extremar las precauciones>>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("La posición de las <y<lágrimas >>ya obtenidas\nquedará <r<marcada en el mapa>>.\n\n\nAl empezar, es recomendable centrar\nlos esfuerzos en localizar su ubicación.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("El espíritu del \x0E\x01\x12\x04\x00\x02amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <r<reservar >>las <y<lágrimas\n>>más sencillas de encontrar para los\nmomentos en los que el \x0E\x01\x12\x04\x00\x02amo haya\nsido descubierto.\nEsperaré en el mundo exterior a\nque el \x0E\x01\x12\x04\x00\x02amo regrese tras conseguir\nlas 15 <y<lágrimas>>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Cuando el \x0E\x01\x12\x04\x00\x02amo complete la <y<orquídea del\nespíritu >>con las 15 <y<lágrimas>>, reforzará su\nespíritu y la Diosa le otorgará un poder.\n\nEsperaré el regreso del \x0E\x01\x12\x04\x00\x02amo en el\nmundo exterior.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf("\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf("Debo abstenerme de acompañar al \x0E\x01\x12\x04\x00\x02amo\nen este viaje, dado que la prueba a la\nque se enfrenta le incumbe solamente\na él.\nSolo el elegido de la Diosa puede\nacceder al mundo sagrado en el que\nse celebran las <b<Hypneas>>.\n\nEn concreto, aquí tendrá lugar la\n<b<Hypnea de Nayru>>, un juicio que\npondrá a prueba la <r<sabiduría >>del \x0E\x01\x12\x04\x00\x02amo.\n\nPara hallar la llama sagrada que\nfortalecerá la espada del \x0E\x01\x12\x04\x00\x02amo,\nes indispensable que su espíritu\nsiga creciendo.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf("Cuando se complete la <y<orquídea\ndel espíritu>>, el \x0E\x01\x12\x04\x00\x02amo recibirá\nun <r<nuevo poder>> procedente\nde la Diosa.\n¿Hay alguna cosa que el \x0E\x01\x12\x04\x00\x02amo\ndesee preguntar?\n[1]Sí[2-]No")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("¿Qué información desea el \x0E\x01\x12\x04\x00\x01amo?\n[1]Orquídea\ndel espíritu[2]Guardianes[3]Fluido\nhypneo[4-]Olvídalo")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x12\x04\x00\x05Procedo con mi explicación, amo.\nRecomiendo prestar máxima atención.\n\n\nPara completar la <y<orquídea del espíritu>>,\nes necesario encontrar las <y<lágrimas\nde Nayru >>que hay esparcidas por\neste mundo.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf("\x0E\x01\x12\x04\x00\x02Amo, aquel objeto brillante de allí...")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf("Es una de las <y<lágrimas de Nayru>>.\nEl \x0E\x01\x12\x04\x00\x01amo deberá reunir las <r<15\n>>para superar el juicio.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("¿Alguna otra pregunta, \x0E\x01\x12\x04\x00\x01amo?\n\n\n[1]Orquídea\ndel espíritu[2]Guardianes[3]Fluido\nhypneo[4-]No, gracias")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x12\x04\x00\x05Muy bien, amo. He aquí la información\nsolicitada.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf("Nada más poner un pie fuera de este\ncírculo, los llamados <r<guardianes\n>>perseguirán al \x0E\x01\x12\x04\x00\x02amo.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Si el \x0E\x01\x12\x04\x00\x02amo recibe un solo golpe de los\n<r<guardianes>>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf("Para completar la <y<orquídea del espíritu>>,\nes necesario recoger todas las <y<lágrimas>>\nsin sufrir ningún daño.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf("\x0E\x01\x12\x04\x00\x05Muy bien, amo. He aquí la información\nsolicitada.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("En este mundo existe una especie\nde líquido llamado <r<fluido hypneo>>.\n\n\nSi el \x0E\x01\x12\x04\x00\x01amo posa un pie sobre él, los\n<r<guardianes detectarán de inmediato\nsu presencia>>.\n\nPor lo tanto, aconsejo caminar con los\nojos bien abiertos.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("Esperaré el regreso del \x0E\x01\x12\x04\x00\x02amo en el mundo\nexterior.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[24 'Lanayru: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 76>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 74>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

