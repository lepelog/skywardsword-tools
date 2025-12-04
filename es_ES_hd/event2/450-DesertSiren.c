          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "¡Todo listo, <heroname>!\n¡Ánimo y a por todas!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
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
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Aconsejo <color red<reservar >coloroff>las <color yellow<lágrimas >coloroff>más\nsencillas de encontrar para los momentos\nen los que el <0x10012:0x00000001>amo haya sido descubierto.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "Calculo que la probabilidad de que\nel <0x10012:0x00000001>amo no sea el elegido de\nla Diosa ha aumentado...\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "Hay que tener mucho cuidado con los\n<color red<dos tipos de vigías >coloroff>que rondan en busca\nde posibles intrusos.\n\nLos <color red<vigías aéreos >coloroff>no darán problemas\nmientras el <0x10012:0x00000002>amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, los <color red<vigías terrestres>coloroff>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<color red<extremar las precauciones>coloroff>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "La posición de las <color yellow<lágrimas >coloroff>ya obtenidas\nquedará <color red<marcada en el mapa>coloroff>.\n\n\nDe partida, es recomendable centrar\nlos esfuerzos en localizar su ubicación.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "El espíritu del <0x10012:0x00000002>amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <color red<reservar >coloroff>las <color yellow<lágrimas\n>coloroff>más sencillas de encontrar para los\nmomentos en los que el <0x10012:0x00000002>amo haya\nsido descubierto.\nEsperaré en el mundo exterior a\nque el <0x10012:0x00000002>amo regrese tras conseguir\nlas 15 <color yellow<lágrimas>coloroff>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Cuando el <0x10012:0x00000002>amo complete la <color yellow<orquídea\ndel espíritu >coloroff>con las 15 <color yellow<lágrimas>coloroff>, reforzará\nsu espíritu y la Diosa le otorgará\nun poder.\nEsperaré el regreso del <0x10012:0x00000002>amo en el mundo\nexterior.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Amo <heroname>.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Debo abstenerme de acompañar al <0x10012:0x00000002>amo\nen este viaje, dado que la prueba a la\nque se enfrenta le incumbe solamente\na él.\nSolo el elegido de la Diosa puede\nacceder al mundo sagrado en el que\nse celebran las <color blue<Hypneas>coloroff>.\n\nEn concreto, aquí tendrá lugar la\n<color blue<Hypnea de Nayru>coloroff>, un juicio que\npondrá a prueba la <color red<sabiduría >coloroff>del <0x10012:0x00000002>amo.\n\nPara hallar la llama sagrada que\nfortalecerá la espada del <0x10012:0x00000002>amo,\nes indispensable que su espíritu\nsiga creciendo.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Cuando se complete la <color yellow<orquídea\ndel espíritu>coloroff>, el <0x10012:0x00000002>amo recibirá\nun <color red<nuevo poder>coloroff> procedente\nde la Diosa.\n¿Hay alguna cosa que el <0x10012:0x00000002>amo\ndesee preguntar?\n[1-]Sí[2]No")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "¿Qué información desea el <0x10012:0x00000001>amo?\n[1-]Orquídea\ndel espíritu[2-]Guardianes[3-]Fluido\nhypneo[4]Olvídalo")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Procedo con mi explicación, amo.\nRecomiendo prestar máxima atención.\n\n\nPara completar la <color yellow<orquídea del espíritu>coloroff>,\nes necesario encontrar las <color yellow<lágrimas\nde Nayru >coloroff>que hay esparcidas por\neste mundo.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "<0x10012:0x00000002>Amo, aquel objeto brillante de allí...")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Es una de las <color yellow<lágrimas de Nayru>coloroff>.\nEl <0x10012:0x00000001>amo deberá reunir las <color red<15\n>coloroff>para superar el juicio.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "¿Alguna otra pregunta, <0x10012:0x00000001>amo?\n\n\n[1-]Orquídea\ndel espíritu[2-]Guardianes[3-]Fluido\nhypneo[4]No, gracias")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Muy bien, amo. He aquí la información\nsolicitada.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Nada más poner un pie fuera de\neste círculo, los llamados <color red<guardianes\n>coloroff>irán en pos del <0x10012:0x00000002>amo.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Si el <0x10012:0x00000002>amo recibe un solo golpe de los\n<color red<guardianes>coloroff>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf(/* textboxtype: 0, unk: 4, line: 14 */ "Para completar la <color yellow<orquídea del espíritu>coloroff>,\nes necesario recoger todas las <color yellow<lágrimas>coloroff>\nsin sufrir ningún daño.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Muy bien, amo. He aquí la información\nsolicitada.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "En este mundo existe una especie\nde líquido llamado <color red<fluido hypneo>coloroff>.\n\n\nSi el <0x10012:0x00000001>amo posa un pie sobre él, los\n<color red<guardianes detectarán de inmediato\nsu presencia>coloroff>.\n\nPor lo tanto, aconsejo caminar con los\nojos bien abiertos.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "<0x10012:0x00000005>De acuerdo, amo.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Esperaré el regreso del <0x10012:0x00000002>amo en el mundo\nexterior.")
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

