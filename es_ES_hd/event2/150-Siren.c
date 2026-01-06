          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "¡Todo listo, <heroname>!\n¡Ánimo y a por todas!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004>Amo <heroname>, la recolección\nde <color yellow<lágrimas >coloroff>ha fracasado.")
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
/*< 47>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "<0x10012:0x00000001>Amo, existen dos tipos de <color red<vigías>coloroff>\nque alertan a los <color red<guardianes >coloroff>en cuanto\ndetectan la presencia de intrusos:\n<color red<los aéreos y los terrestres>coloroff>.\nCada tipo presenta un comportamiento\ndiferente, por lo que se recomienda\nextremar las precauciones.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Esperaré a que el <0x10012:0x00000001>amo regrese tras\nhaber obtenido todas las <color yellow<lágrimas>coloroff>.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "La posición de toda <color yellow<lágrima >coloroff>obtenida\ncon anterioridad quedará <color red<registrada\nen el mapa>coloroff>. Recomiendo explotar esta\nventaja al máximo plantando balizas.\nLas lágrimas no cambiarán nunca su\nubicación, por lo que conocerla con\nantelación supondrá una gran ayuda\npara superar el juicio.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Aconsejo <color red<reservar >coloroff>las <color yellow<lágrimas >coloroff>más\nsencillas de encontrar para los momentos\nen los que el <0x10012:0x00000001>amo haya sido descubierto.")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "Calculo que la probabilidad de que\nel <0x10012:0x00000001>amo no sea el elegido de\nla Diosa ha aumentado...\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Hay que tener mucho cuidado con los\n<color red<dos tipos de vigías >coloroff>que rondan en busca\nde posibles intrusos.\n\n<color red<Los vigías aéreos >coloroff>no darán problemas\nmientras el <0x10012:0x00000002>amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, <color red<los vigías terrestres>coloroff>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<color red<extremar las precauciones>coloroff>.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "La posición de las <color yellow<lágrimas>coloroff>\nya obtenidas quedará <color red<anotada\nen el mapa>coloroff>.\n\nDe partida, es recomendable centrar\nlos esfuerzos en localizar su ubicación.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "El espíritu del <0x10012:0x00000002>amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <color red<reservar >coloroff>las <color yellow<lágrimas>coloroff>\nmás sencillas de encontrar para los\nmomentos en los que el <0x10012:0x00000002>amo haya\nsido descubierto.\nEsperaré en el mundo exterior\na que el <0x10012:0x00000002>amo regrese tras\nconseguir las 15 <color yellow<lágrimas>coloroff>.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Cuando el <0x10012:0x00000002>amo complete la\n<color yellow<orquídea del espíritu >coloroff>con las 15\n<color yellow<lágrimas>coloroff>, reforzará su espíritu\ny la Diosa le otorgará un poder.\nEsperaré el regreso del <0x10012:0x00000002>amo\nen el mundo exterior.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Este es el último de los juicios\ndel espíritu: la <color blue<Hypnea de la Diosa>coloroff>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Cuando se complete la última <color yellow<orquídea\ndel espíritu>coloroff>, el <0x10012:0x00000002>amo será reconocido como\nel héroe elegido por la Diosa.\n\nEntonces se revelará la puerta que lleva\nhasta la <color yellow white<Trifuerza>coloroff>. Es imprescindible\nsuperar con éxito esta última prueba.\n\n¿Hay alguna cosa que el <0x10012:0x00000002>amo desee\npreguntar?\n[1-]Sí[2]No")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "¿Qué tipo de información desea\nrecibir el <0x10012:0x00000001>amo?\n[1-]Orquídea\ndel espíritu[2-]Guardianes[3-]Fluido\nhypneo[4]Olvídalo")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Procedo con mi explicación, amo.\nRecomiendo prestar máxima\natención.\n\nPara completar la <color yellow<orquídea del\nespíritu>coloroff>, es necesario encontrar\nlas <color yellow<lágrimas sagradas >coloroff>que hay\nesparcidas por este mundo.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "<0x10012:0x00000002>Amo, aquel objeto brillante de allí...")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Es una de las <color yellow<lágrimas sagradas>coloroff>.\nEl <0x10012:0x00000001>amo deberá reunir las <color red<15 >coloroff>para\nsuperar el juicio.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					wait_frames(15)
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "¿Alguna otra pregunta, <0x10012:0x00000001>amo?\n\n\n[1-]Orquídea\ndel espíritu[2-]Guardianes[3-]Fluido\nhypneo[4]No, gracias")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Muy bien, amo. He aquí la información\nsolicitada.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Nada más poner un pie fuera\nde este círculo, los llamados\n<color red<guardianes >coloroff>irán en pos del <0x10012:0x00000002>amo.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Si el <0x10012:0x00000002>amo recibe un solo golpe de los\n<color red<guardianes>coloroff>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "Para completar la <color yellow<orquídea del espíritu>coloroff>,\nes necesario recoger todas las <color yellow<lágrimas>coloroff>\nsin sufrir ningún daño.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Muy bien, amo. He aquí la información\nsolicitada.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 4, line: 14 */ "En este mundo existe una especie\nde líquido llamado <color red<fluido hypneo>coloroff>.\n\n\nSi el <0x10012:0x00000001>amo posa un pie sobre él,\nlos <color red<guardianes detectarán\nde inmediato su presencia>coloroff>.\n\nPor lo tanto, aconsejo caminar\ncon los ojos bien abiertos.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "<0x10012:0x00000005>De acuerdo, amo.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Esperaré el regreso del <0x10012:0x00000002>amo\nen el mundo exterior.")
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

