          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "¡Todo listo, <heroname>!\n¡Ánimo, puedes hacerlo!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004>Amo <heroname>, la recolección\nde <color yellow<lágrimas >coloroff>ha fracasado.")
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
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "<0x10012:0x00000001>Amo, existen dos tipos de <color red<vigías\n>coloroff>que alertan a los <color red<guardianes >coloroff>en cuanto\ndetectan la presencia de intrusos:\nlos <color red<aéreos>coloroff> y los <color red<terrestres>coloroff>.\nCada tipo presenta un comportamiento\ndiferente, por lo que se recomienda\nextremar las precauciones.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Esperaré a que el <0x10012:0x00000001>amo regrese tras\nhaber obtenido todas las <color yellow<lágrimas>coloroff>.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "La posición de toda <color yellow<lágrima >coloroff>obtenida\ncon anterioridad quedará <color red<registrada\nen el mapa>coloroff>. Recomiendo explotar esta\nventaja al máximo plantando balizas.\nLas lágrimas no cambiarán nunca su\nubicación, por lo que conocerla con\nantelación supondrá una gran ayuda\npara superar el juicio.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Aconsejo <color red<reservar >coloroff>las <color yellow<lágrimas\n>coloroff>más sencillas de encontrar para\nlos momentos en los que el <0x10012:0x00000001>amo\nhaya sido descubierto.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "Calculo que la probabilidad de que\nel <0x10012:0x00000001>amo no sea el elegido de\nla Diosa ha aumentado.\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Hay que tener mucho cuidado con los\n<color red<dos tipos de vigías >coloroff>que buscan posibles\nintrusos.\n\nLos <color red<vigías aéreos >coloroff>no darán problemas\nmientras el <0x10012:0x00000002>amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, los <color red<vigías terrestres>coloroff>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<color red<extremar las precauciones>coloroff>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "La posición de las <color yellow<lágrimas>coloroff>\nya obtenidas quedará <color red<anotada\nen el mapa>coloroff>.\n\nAl empezar, es recomendable centrar\nlos esfuerzos en localizar su ubicación.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "El espíritu del <0x10012:0x00000002>amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <color red<reservar >coloroff>las <color yellow<lágrimas\n>coloroff>más sencillas de encontrar para los\nmomentos en los que el <0x10012:0x00000002>amo sea\ndescubierto.\nEsperaré en el mundo exterior a que\nel <0x10012:0x00000002>amo regrese tras conseguir las\n15 <color yellow<lágrimas>coloroff>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Cuando el <0x10012:0x00000002>amo complete la\n<color yellow<orquídea del espíritu >coloroff>con las 15\n<color yellow<lágrimas>coloroff>, reforzará su espíritu\ny la Diosa le otorgará un poder.\nEsperaré el regreso del <0x10012:0x00000002>amo en\nel mundo exterior.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Amo <heroname>.")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Esta es la <color blue<Hypnea de Din>coloroff>, el tercer\njuicio, que pondrá a prueba el <color red<poder>coloroff>\ndel <0x10012:0x00000002>amo.\n\nPara hallar la última llama sagrada\nque fortalecerá la espada del <0x10012:0x00000002>amo,\nes indispensable superar este último\njuicio.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Cuando se complete la <color yellow<orquídea del\nespíritu>coloroff>, el <0x10012:0x00000002>amo recibirá un <color red<nuevo\npoder >coloroff>procedente de la Diosa.\n\n¿Hay alguna cosa que el <0x10012:0x00000002>amo desee\npreguntar?\n[1-]Sí[2]No")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "¿Qué tipo de información\ndesea recibir el <0x10012:0x00000001>amo?\n[1-]Orquídea\ndel espíritu[2-]Guardianes[3-]Fluido\nhypneo[4]Olvídalo")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Procedo con mi explicación, amo.\nRecomiendo prestar máxima\natención.\n\nPara completar la <color yellow<orquídea del\nespíritu>coloroff>, es necesario encontrar\nlas <color yellow<lágrimas de Din >coloroff>que hay\nrepartidas por este mundo.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "Aquel objeto brillante de allí...")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Es una de las <color yellow<lágrimas de Din>coloroff>. El <0x10012:0x00000001>amo\ndeberá reunir las <color red<15 >coloroff>para superar\nel juicio.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "¿Alguna otra pregunta, <0x10012:0x00000001>amo?\n\n\n[1-]Orquídea\ndel espíritu[2-]Guardianes[3-]Fluido\nhypneo[4]No, gracias")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Muy bien, amo. He aquí la información\nsolicitada.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Nada más poner un pie fuera de este\ncírculo, los llamados <color red<guardianes>coloroff>\nperseguirán al <0x10012:0x00000002>amo.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Si el <0x10012:0x00000002>amo recibe un solo golpe de los\n<color red<guardianes>coloroff>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "Para completar la <color yellow<orquídea del espíritu>coloroff>,\nes necesario recoger todas las <color yellow<lágrimas>coloroff>\nsin sufrir ningún daño.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Muy bien, amo. He aquí la información\nsolicitada.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 4, line: 14 */ "En este mundo existe una especie\nde líquido llamado <color red<fluido hypneo>coloroff>.\n\n\nSi el <0x10012:0x00000001>amo posa un pie sobre él, los\n<color red<guardianes detectarán de inmediato\nsu presencia>coloroff>.\n\nPor lo tanto, aconsejo caminar con los\nojos bien abiertos.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "<0x10012:0x00000005>De acuerdo, amo.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Esperaré el regreso del <0x10012:0x00000002>amo en el mundo\nexterior.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

