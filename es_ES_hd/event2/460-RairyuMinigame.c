          void entrypoint_460_00() {
/*<  1>*/ 	start()
/*< 38>*/ 	story_flags[351 /* us: 805A9B01 0x20, jp: 805ACD81 0x20 */] = false;
/*< 39>*/ 	story_flags[352 /* us: 805A9B01 0x40, jp: 805ACD81 0x40 */] = false;
/*< 33>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = false;
/*< 34>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = false;
/*< 35>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = false;
/*< 36>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = false;
/*< 37>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = false;
          	switch (context_related4(0)) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00070c01>¡Hombre, <heroname>, campeón!\nDime, ¿quieres librar un <color red<combate>coloroff> épico\no enfrentarte al juicio de <color red<Hypnea>coloroff>?\n[1-]Combate[2-]Hypnea[3]Nada")
/*< 16>*/ 				switch (choice(3)) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          					  case 0:
          						flw_17:
/*< 17>*/ 						switch (context_related2(1)) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00070c06>¡Ja! ¡Palabra de guerrero!\nA ver, ¿por dónde empezamos?...")
/*< 40>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = false;
/*< 41>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = false;
/*< 42>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = false;
/*< 43>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = false;
/*< 44>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = false;
/*< 45>*/ 							scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = false;
/*< 46>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = false;
/*< 47>*/ 							scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = false;
/*< 48>*/ 							scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = false;
/*< 49>*/ 							scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = false;
/*< 50>*/ 							scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = false;
/*< 51>*/ 							scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = false;
/*<1010>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
          								flw_13:
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000c00>Piensa en un enemigo al que te hayas\nenfrentado en algún momento de tu\nperiplo y con el que te apetezca volver\na medirte.\n[1-]Uno del\nprincipio[2-]Uno de\nla mitad[3-]Uno del\nfinal[4]Olvídalo")
/*< 14>*/ 								switch (choice(4)) {
          								  case 0:
          									flw_236:
/*<236>*/ 									entrypoint_460_41();
          								  case 1:
          									flw_237:
/*<237>*/ 									entrypoint_460_42();
          								  case 2:
/*<262>*/ 									switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          									  case 0:
/*<238>*/ 										entrypoint_460_43();
          									  case 1:
/*<263>*/ 										switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          										  case 0:
/*<265>*/ 											entrypoint_460_44();
          										  case 1:
/*<264>*/ 											switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          											  case 0:
/*<266>*/ 												entrypoint_460_45();
          											  case 1:
/*<267>*/ 												entrypoint_460_46();
          											}
          										}
          									}
          								  case 3:
          									flw_15:
/*< 15>*/ 									printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
          								}
          							  case 1:
/*<194>*/ 								switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          								  case 0:
          									goto flw_13
          								  case 1:
/*<195>*/ 									printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00070c00>Piensa en un enemigo con el que hayas\nluchado en algún momento de tu\nperiplo y con el que te apetezca\nvolver a medirte.[1-]Uno del\nprincipio[2-]Uno\nreciente[3]Olvídalo")
/*<196>*/ 									switch (choice(3)) {
          									  case 0:
          										goto flw_236
          									  case 1:
          										goto flw_237
          									  case 2:
          										goto flw_15
          									}
          								}
          							}
          						  case 1:
/*< 20>*/ 							printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00100c0b><pause 15>Oye, campeón, ¿va todo bien?\nTe han dado una buena paliza...\n¿Te ves con fuerzas para seguir?\n[1-]Sí[2]No")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_52
          							  case 1:
/*< 22>*/ 								printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00070c09>¿Estás seguro, muchacho?<pause 15>\nBueno, es tu vida la que está en juego,\ntú decides... Tampoco puedo obligarte\na seguir si no quieres.\n<0x10009:0x00000c00>En fin, de acuerdo. ¡Dicen que es mejor\nuna retirada a tiempo que quedarse\ncriando malvas en el campo de batalla!\nSi quieres volver a intentarlo, ya sabes.")
          							}
          						}
          					  case 1:
/*< 10>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000b0c0d>¡Pues que sea un <color red<combate>coloroff>, entonces!\n¡Ja! ¡Sí señor, me gusta tu actitud!\n\n\nEn estos <color red<combates>coloroff> deberás enfrentarte\na algunos de los rivales más duros de\nlos que te has encontrado hasta ahora.\n¡Tú eliges, quien más rabia te dé!\n<0x10009:0x00000c00>Y yo usaré mi poder para recrear\nel momento de vuestra batalla.\nSe trata de volver a luchar...<pause 15>\n¡y vencer!\nSi superas el reto con éxito, tengo un\npremio reservado para ti. ¡Espero que\nte tomes el asunto en serio!\n\n<0x10009:0x000d0c00>Pero... <pause 10>aunque se trate de un juego,\nmás te vale emplearte a fondo. Esto es\nun combate real: <color red<si el enemigo acaba\ncontigo, adiós muy buenas>coloroff>...\n¡Volverás a casa en una caja de pino!\n<0x10009:0x00000c0a>Bueno, ¿qué dices?... ¿Te atreves?\n\n[1-]¡Claro![2]Ni hablar")
/*< 11>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_17
          						  case 1:
/*< 12>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
          						}
          					}
          				  case 1:
          					flw_81:
/*< 81>*/ 					switch (story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */]) {
          					  case 0:
          						flw_75:
/*< 75>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 77>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_464:
/*<464>*/ 								entrypoint_460_72();
          							  case 1:
/*<1015>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_464
          								  case 1:
/*<465>*/ 									entrypoint_460_74();
          								}
          							}
          						  case 1:
/*< 76>*/ 							printf(/* textboxtype: 0, unk: 0, line: 71 */ "<pause 15><0x10009:0x00000005>¿Qué te piensas que es esto?...\nNo merece la pena arriesgar la vida\nhasta esos extremos, campeón... \n\nAnda, déjalo por hoy. Una retirada a\ntiempo es una victoria, ¿no lo sabías?\n\n\nVuelve cuando hayas recuperado un\npoco el resuello, por lo menos.")
          						}
          					  case 1:
/*< 72>*/ 						printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000006>¿Quieres probar suerte en <color red<Hypnea>coloroff>?\n¡Ja! ¡Me encanta ver que no le haces\nascos a un desafío como los de antes!\n\n<0x10009:0x00070c00>Verás, los retos de <color red<Hypnea>coloroff> se basan en\nlos juicios que has superado hasta\nahora, recreados especialmente por mí.\n\nPero como hacértelos sin más no es que\nme parezca muy divertido, pues te voy\na cronometrar.\n\nSi logras un buen tiempo, te llevas un\nbuen premio. Pero...<pause 20> si te alcanza un\nguardián, uno solo, el juicio de Hypnea\nhabrá acabado.\nSi fracasas, volverás con <color red<la salud muy\nmermada>coloroff>, ¡avisado estás!\n<0x10009:0x00070c0a>¿Qué? ¿Seguro que quieres probar?\n[1-]¡Claro![2]Mejor no")
/*< 73>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_75
          						  case 1:
/*< 74>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
          						}
          					}
          				  case 2:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
          				}
          			  case 1:
/*<118>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00070c01>¡Hombre, <heroname>, campeón!\n¡Puedo ver en tus ojos que vienes\ndispuesto a pasártelo en grande!\n\n<0x10009:0x00000c00>¿Te ves con arrestos para enfrentarte\nde nuevo a tus aventuras pasadas?\n\n[1-]Claro que sí[2]No sé yo...")
          				flw_5:
/*<  5>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					scene_flags[9 'Lanayru Gorge'][113 /* 0xF 02 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000b06>¡Ja! ¡Así habla un héroe de verdad!\nNo esperaba menos de ti, muchacho.\n\n\n<0x10009:0x000b0c00>Ahora, con tu permiso, voy a echar un\nvistazo a tus experiencias pasadas.\n\n\n<0x10006:0xfbcd>(...)\n\n\n\n<0x10009:0x00000c08>Vaya, vaya, vaya.\n¡Por lo que veo, has vivido aventuras\ncomo para llenar un libro entero!\n\nHas librado <color red<combates>coloroff> contra temibles\nmonstruos... E incluso has salido bien\nparado de tu paso por <color red<Hypnea>coloroff>. Estás\nhecho un campeón, ¿sabes?\n<0x10009:0x000d0c00>Muy bien, ¡decidido!\nTe propongo dos desafíos diferentes.\n\n\n<0x10009:0x00000c00>Elige el que prefieras.\n¿Por cuál te decantas?\n\n[1-]Combate[2-]Hypnea[3]Ninguno")
/*<  9>*/ 					switch (choice(3)) {
          					  case 0:
          						goto flw_80
          					  case 1:
          						goto flw_81
          					  case 2:
/*< 18>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
          					}
          				  case 1:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
          				}
          			}
          		  case 1:
/*< 28>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 2, 'param3': 31}
/*<  2>*/ 			story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */] = true;
/*<111>*/ 			switch (temp_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x000b0c08>Ya veo que la paciencia te la has dejado\nen casa, ¿eh, <heroname>?\n\n\n<0x10009:0x00000000>¡Pues nada, como tú quieras!\n¡En seguida nos ponemos al lío!\n\n\n<0x10009:0x00000c00>¿O quizá un espléndido guerrero como\ntú no tiene tiempo ni ganas para andar\nentreteniéndose con jueguecitos?\n\n<0x10009:0x000d0c00>No te me hagas el interesante, anda...\nTe propongo una cosa: aprovechar tus\nexperiencias pasadas para echarnos\nun buen rato.\n<0x10009:0x00070c00>¡Debes mirar al pasado para entender\nel futuro! Aprender de la experiencia,\npor así decirlo. Llámalo como quieras, \npero es un buen ejercicio. \nSe trata de enfrentarte de nuevo a las\ndificultades que ya has superado.\n<0x10009:0x00000c0a>¿Qué me dices, <heroname>?\n[1-]¡Genial![2]No sé yo...")
          				goto flw_5
          			  case 1:
/*<  3>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x000b0c01>¡<heroname>!\nMe alegro de verte, hombre.\n¡Has hecho bien en venir!\n\n<0x10009:0x00000000>¡Bueno, bueno, bueno!...\n¿Qué te parece si nos divertimos\nun poco, campeón?\n\n<0x10009:0x00000c00>¿O quizá un espléndido guerrero como\ntú no tiene tiempo ni ganas para andar\nentreteniéndose con jueguecitos?\n\n<0x10009:0x000d0c00>No te me hagas el interesante, anda...\nTe propongo una cosa: aprovechar tus\nexperiencias pasadas para echarnos\nun buen rato.\n<0x10009:0x00070c00>¡Debes mirar al pasado para entender\nel futuro! Aprender de la experiencia,\npor así decirlo. Llámalo como quieras, \npero es un buen ejercicio. \nSe trata de enfrentarte de nuevo a las\ndificultades que ya has superado.\n<0x10009:0x00000c0a>¿Qué me dices, <heroname>?\n[1-]¡Genial![2]No sé yo...")
          				goto flw_5
          			}
          		}
          	  case 1:
/*<507>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 116, 'param3': 44}
/*<116>*/ 		story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = false;
/*<689>*/ 		entrypoint_460_13();
          	  case 2:
/*<509>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 115, 'param3': 44}
/*<115>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*< 90>*/ 		switch (story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */]) {
          		  case 0:
/*< 92>*/ 			printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000007>¡Buen trabajo, campeón!\n¡Has logrado volver de una pieza!")
          			flw_94:
/*< 94>*/ 			printf(/* textboxtype: 0, unk: 1, line: 82 */ "Has tardado en completar el juicio\n<numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2> en total.")
/*<103>*/ 			switch (context_related4(5)) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000007>¡Increíble! Casi fundes el cronómetro...\n¡Has estado genial, <heroname>!\n\n\nPor haber sido tan rápido, te mereces\nalgo especial... ¡Toma! <0x10009:0x000c0b06>")
/*<109>*/ 				give_item(64 0x40);
          				flw_470:
/*<470>*/ 				switch (context_related2(6)) {
          				  case 0:
          					flw_91:
/*< 91>*/ 					switch (context_related3(3)) {
          					  case 0:
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000c05>Esta ha sido la primera vez que superas\neste juicio de <color red<Hypnea>coloroff> para mi solaz.\n¡Hay que darte la enhorabuena!<0x10009:0x000c0b06>")
          						flw_638:
/*<638>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 639, 'param3': 12}
/*<639>*/ 						rupees += 50;
/*<637>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ahí te van, 50 rupias! Que sí, que son\ntodas para ti, campeón...")
          						flw_641:
/*<641>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 510, 'param3': 12}
/*<510>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 98, 'param3': 45}
/*< 98>*/ 						printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x0000000a>¿Qué me dices, <heroname>?\n¿Te hace otro juicio de <color red<Hypnea>coloroff>?\n[1-]¡Sí![2]No")
/*< 99>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_467:
/*<467>*/ 								entrypoint_460_72();
          							  case 1:
/*<1017>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_467
          								  case 1:
/*<468>*/ 									entrypoint_460_74();
          								}
          							}
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000005>Pche... ¡Aguafiestas!<pause 20>\nBueno, si cambias de opinión ya sabes\ndónde estoy.")
/*<652>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          						}
          					  case 1:
/*< 96>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x000b0c09>¡Bien, has conseguido un nuevo récord!\nEsto hay que celebrarlo, campeón.\n<0x10009:0x000c0b00>Toma, aquí tienes tu premio. ¡Cógelo!")
          						goto flw_638
          					  case 2:
          						goto flw_641
          					}
          				  case 1:
/*<469>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "Para tu información, si quieres llevarte\nel premio gordo, vas a tener que\nmejorar este tiempo: <color red<<color red<<numeric arg3 0><color red<:>coloroff><color red<<numeric arg4 2>>coloroff>.\n\n¡Ja! ¡Más te vale darlo todo en la arena\nde batalla si quieres tener alguna\nposibilidad, campeón!")
          					goto flw_91
          				}
          			  case 1:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00000007>Has hecho un tiempo de escándalo.\nToma, este premio es para ti. <0x10009:0x000c0b06>")
/*<635>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 636, 'param3': 12}
/*<636>*/ 				rupees += 100;
/*<634>*/ 				printf(/* textboxtype: 0, unk: 1, line: 58 */ "¡Toma, 100 rupias! ¡Ja! Ya puedes\ncomprarte algo bonito a mi salud.")
          				goto flw_470
          			  case 2:
/*<106>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000b>Mmm... No es para tirar cohetes...<pause 20>\npero al menos te has esforzado. Toma.<0x10009:0x000c0b06>")
/*<632>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 633, 'param3': 12}
/*<633>*/ 				rupees += 20;
/*<631>*/ 				printf(/* textboxtype: 0, unk: 0, line: 56 */ "Aquí tienes 20 rupias. ¡No te las gastes\ntodas de golpe, campeón!")
          				goto flw_470
          			  case 3:
/*<105>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x0000000b>¡Ja! Venga ya, ¿me tomas el pelo?...<pause 20>\n¡Ponle un poquito de ganas, campeón!\n\n\nLa próxima vez, que parezca que\nte esfuerzas... ¡Si no, no te vas a llevar\nmás que esto!<0x10009:0x000c0b06>")
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 630, 'param3': 12}
/*<630>*/ 				rupees += 5;
/*<628>*/ 				printf(/* textboxtype: 0, unk: 1, line: 55 */ "Toma, 5 rupias. ¡Oye, no me mires así!")
          				goto flw_470
          			}
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000007>¡Ja, <heroname>!\n¡Has conseguido hasta la última\nlágrima! ¡Eres un héroe de tomo\ny lomo!")
/*< 97>*/ 			story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */] = true;
          			goto flw_94
          		}
          	  case 3:
/*<114>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x0000000b>¡¿Pero qué ha pasado?!\n¡Vaya manera de liarla, campeón!...\n\n\nEl fracaso tiene un precio, ya lo sabes.\nNo te quedan muchos corazones...\nEs mejor que los recuperes antes de\nvolver por aquí.")
          	}
          }

          void entrypoint_460_52() {
/*<162>*/ 	start()
/*<128>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<129>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<130>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<131>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<133>*/ 	make_actor_do_something(1, 0)
/*<663>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 132, 'param3': 52}
/*<132>*/ 	changeScene(2, 0) // {'name': 'B200', 'room': 10, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_35() {
/*<417>*/ 	start()
/*<796>*/ 	switch (random(3)) {
          	  case 0:
/*<378>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<380>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<382>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<385>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<386>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<387>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<388>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<389>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<390>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<391>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<392>*/ 												switch (scene_flags[125 /* 0xE 20 */]) {
          												  case 0:
/*<400>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<407>*/ 													entrypoint_460_62();
          												  case 1:
/*<399>*/ 													scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<408>*/ 													entrypoint_460_61();
          												}
          											  case 1:
/*<398>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<405>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<397>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<406>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<396>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<411>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<395>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<412>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<394>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<409>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<393>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<410>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<384>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<403>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<383>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<404>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<381>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<401>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<379>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<402>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<933>*/ 		switch (scene_flags[125 /* 0xE 20 */]) {
          		  case 0:
/*<921>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<931>*/ 				switch (scene_flags[123 /* 0xE 08 */]) {
          				  case 0:
/*<926>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<919>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<932>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*<927>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<930>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<928>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<929>*/ 											switch (scene_flags[121 /* 0xE 02 */]) {
          											  case 0:
/*<923>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<941>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<948>*/ 													entrypoint_460_62();
          												  case 1:
/*<924>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<945>*/ 													entrypoint_460_53();
          												}
          											  case 1:
/*<936>*/ 												scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<953>*/ 												entrypoint_460_57();
          											}
          										  case 1:
/*<935>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<950>*/ 											entrypoint_460_56();
          										}
          									  case 1:
/*<937>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<952>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<934>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<951>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<939>*/ 								scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<946>*/ 								entrypoint_460_60();
          							}
          						  case 1:
/*<920>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<943>*/ 							entrypoint_460_51();
          						}
          					  case 1:
/*<925>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<944>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<938>*/ 					scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<947>*/ 					entrypoint_460_59();
          				}
          			  case 1:
/*<922>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<942>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<940>*/ 			scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<949>*/ 			entrypoint_460_61();
          		}
          	  case 2:
/*<966>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<963>*/ 			switch (scene_flags[120 /* 0xE 01 */]) {
          			  case 0:
/*<964>*/ 				switch (scene_flags[121 /* 0xE 02 */]) {
          				  case 0:
/*<968>*/ 					switch (scene_flags[125 /* 0xE 20 */]) {
          					  case 0:
/*<954>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<965>*/ 							switch (scene_flags[122 /* 0xE 04 */]) {
          							  case 0:
/*<962>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<956>*/ 									switch (scene_flags[116 /* 0xF 10 */]) {
          									  case 0:
/*<961>*/ 										switch (scene_flags[118 /* 0xF 40 */]) {
          										  case 0:
/*<967>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<958>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<976>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<983>*/ 													entrypoint_460_62();
          												  case 1:
/*<959>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<980>*/ 													entrypoint_460_53();
          												}
          											  case 1:
/*<974>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<981>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<960>*/ 											scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<979>*/ 											entrypoint_460_54();
          										}
          									  case 1:
/*<957>*/ 										scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<977>*/ 										entrypoint_460_52();
          									}
          								  case 1:
/*<969>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<986>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<972>*/ 								scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<987>*/ 								entrypoint_460_58();
          							}
          						  case 1:
/*<955>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<978>*/ 							entrypoint_460_51();
          						}
          					  case 1:
/*<975>*/ 						scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<984>*/ 						entrypoint_460_61();
          					}
          				  case 1:
/*<971>*/ 					scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<988>*/ 					entrypoint_460_57();
          				}
          			  case 1:
/*<970>*/ 				scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<985>*/ 				entrypoint_460_56();
          			}
          		  case 1:
/*<973>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<982>*/ 			entrypoint_460_59();
          		}
          	}
          }

          void entrypoint_460_53() {
/*<163>*/ 	start()
/*<134>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<135>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<136>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<138>*/ 	make_actor_do_something(2, 0)
/*<662>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 137, 'param3': 52}
/*<137>*/ 	changeScene(8, 0) // {'name': 'B300', 'room': 0, 'layer': 2, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_01() {
/*<235>*/ 	start()
/*< 23>*/ 	switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          	  case 0:
          		flw_25:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000c00>Perfecto, pues si ya tienes todo lo que \nnecesitas... ¿empezamos?\n[1-]¡Vale![2]Mejor no")
/*< 26>*/ 		switch (choice(2)) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070c0d>¡Valor, muchacho!")
/*< 78>*/ 			story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */] = true;
/*<112>*/ 			story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 30>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<174>*/ 				entrypoint_460_51();
          			  case 1:
/*< 31>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
/*<173>*/ 					entrypoint_460_52();
          				  case 1:
/*< 32>*/ 					switch (scene_flags[117 /* 0xF 20 */]) {
          					  case 0:
/*<177>*/ 						entrypoint_460_53();
          					  case 1:
/*<178>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<176>*/ 							entrypoint_460_54();
          						  case 1:
/*<182>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<191>*/ 								entrypoint_460_55();
          							  case 1:
/*<179>*/ 								switch (scene_flags[120 /* 0xE 01 */]) {
          								  case 0:
/*<190>*/ 									entrypoint_460_56();
          								  case 1:
/*<180>*/ 									switch (scene_flags[121 /* 0xE 02 */]) {
          									  case 0:
/*<193>*/ 										entrypoint_460_57();
          									  case 1:
/*<181>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<192>*/ 											entrypoint_460_58();
          										  case 1:
/*<183>*/ 											switch (scene_flags[123 /* 0xE 08 */]) {
          											  case 0:
/*<187>*/ 												entrypoint_460_59();
          											  case 1:
/*<184>*/ 												switch (scene_flags[124 /* 0xE 10 */]) {
          												  case 0:
/*<186>*/ 													entrypoint_460_60();
          												  case 1:
/*<185>*/ 													switch (scene_flags[125 /* 0xE 20 */]) {
          													  case 0:
/*<189>*/ 														entrypoint_460_61();
          													  case 1:
/*<188>*/ 														entrypoint_460_62();
          													}
          												}
          											}
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000c05>¡Ja! ¿Se te ha acabado el ardor\nguerrero, campeón?...<pause 20> Qué lástima.\nEn fin, por mí no hay problema. Si te\nves con ganas de más gresca, ya sabes.\n<0x10009:0x00070c00>Y si querías cambiar de escudo,\nequípate con el que te venga en\ngana y vuelve a hablar conmigo.")
          		}
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000d0c00>¡Epa! <pause 15>¡Se me había pasado comentarte\nuna cosa! Qué cabeza la mía...\n\n\nPara el combate solo dispondrás de\nlos objetos <color red<que tenías en el momento\ndel combate original>coloroff>. Los mismos; \nni uno más, ni uno menos.\n<0x10009:0x00070c00><color red<¡Y tampoco puedes echar mano de\nnada de la alforja!>coloroff> No sería justo...\nPor muy duro que sea tu enemigo,\nsigue siendo el mismo de antes.\n<0x10009:0x00000c00>Así nadie parte con ventaja. Aunque,\nbueno... Si insistes, te dejo usar <color red<el\nescudo que más te guste>coloroff>.")
          		goto flw_25
          	}
          }

          void entrypoint_460_54() {
/*<164>*/ 	start()
/*<175>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<139>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<140>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<142>*/ 	make_actor_do_something(3, 0)
/*<661>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 665, 'param3': 52}
/*<665>*/ 	story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = true;
/*<668>*/ 	story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = false;
/*<669>*/ 	story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = false;
/*<670>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<993>*/ 	story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = false;
/*<1005>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = false;
/*<1008>*/ 	story_flags[149 /* us: 805A9AEE 0x80, jp: 805ACD6E 0x80 */] = false;
/*<141>*/ 	changeScene(9, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_71() {
/*<463>*/ 	start()
/*<102>*/ 	switch (context_related2(4)) {
          	  case 0:
/*<992>*/ 		make_actor_do_something(21, 0)
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "Veamos, tu mejor tiempo para esta\nárea es de <numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2> en total.")
          		flw_82:
/*< 82>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000b0c0d>¡Pues vamos allá!\n¡Cierra los ojos y concéntrate!")
/*< 79>*/ 		story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */] = true;
/*<113>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = true;
/*< 83>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 85>*/ 			make_actor_do_something(12, 0)
          		  case 1:
/*< 84>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 86>*/ 				make_actor_do_something(13, 0)
          			  case 1:
/*< 87>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 88>*/ 					make_actor_do_something(14, 0)
          				  case 1:
/*< 89>*/ 					make_actor_do_something(15, 0)
          				}
          			}
          		}
          	  case 1:
          		goto flw_82
          	}
          }

          void entrypoint_460_02() {
/*<472>*/ 	start()
/*< 54>*/ 	switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          	  case 0:
/*< 55>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>¡Qué bueno! Bien hecho, campeón.\n¡Has dado todo un espectáculo!")
          		flw_57:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Has tardado <numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2>\nen despachar a <color blue<<string arg0>>coloroff>.")
/*< 53>*/ 		switch (context_related3(3)) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Y ahora que lo pienso, campeón...\nPor ser la primera vez que vences a\neste bicharraco en este juego mío,\nte mereces un premio.<0x10009:0x000c0b06>")
          			flw_545:
/*<545>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 546, 'param3': 12}
/*<546>*/ 			rupees += 50;
/*<544>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ahí te van, 50 rupias! Que sí, que son\ntodas para ti, campeón...")
          			flw_640:
/*<640>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 508, 'param3': 12}
/*<508>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 61, 'param3': 45}
/*< 61>*/ 			switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          			  case 0:
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 1, line: 51 */ "Si te plantas ahora, te llevas...\n<color red<<string arg1>>coloroff>.\nPero si sigues, puedes llevarte...\n¡<color red<<string arg2>>coloroff>!\n<0x10009:0x0000000a>¿Qué dices? ¿Quieres continuar?\n[1-]Vale[2]Me voy")
/*< 65>*/ 				switch (choice(2)) {
          				  case 0:
/*< 70>*/ 					switch (scene_flags[114 /* 0xF 04 */]) {
          					  case 0:
/*< 68>*/ 						printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00000008>¡Así me gusta, campeón! El próximo\ncombate será el número <numeric arg3 0>. \nDebes ganar <numeric arg4 0> más para\nsuperar el reto.\nBueno, basta de cháchara y vamos a\nmeternos en harina... ¡Sus y a ellos!")
          						flw_117:
/*<117>*/ 						story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 71>*/ 						switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          						  case 0:
/*<421>*/ 							entrypoint_460_35();
          						  case 1:
/*<418>*/ 							switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          							  case 0:
/*<422>*/ 								entrypoint_460_34();
          							  case 1:
/*<419>*/ 								switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          								  case 0:
/*<423>*/ 									entrypoint_460_33();
          								  case 1:
/*<420>*/ 									switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          									  case 0:
/*<424>*/ 										entrypoint_460_32();
          									  case 1:
/*<425>*/ 										entrypoint_460_31();
          									}
          								}
          							}
          						}
          					  case 1:
/*< 67>*/ 						printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000008>¡Ese es mi muchacho! Ahora bien, tengo\nque decirte una cosa, campeón.\n\n\n<0x10009:0x00070900>Cuando libras varios combates seguidos\nsoy yo quien elige qué adversario va a\nvenir después.\n\nAsí tú no te tienes que preocupar de\ndecidir, ¡y la sorpresa lo hace todo aún\nmás divertido! Bueno, ya me callo... \n¡que te queda mucha pelea por delante!")
/*< 69>*/ 						scene_flags[9 'Lanayru Gorge'][114 /* 0xF 04 */] = true;
          						goto flw_117
          					}
          				  case 1:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000005>Lo entiendo, muchacho, lo entiendo...<pause 15>\nTampoco tienes que hacer imposibles.\nAdemás, si la palmas en medio del\ncombate, muerto te quedas...\n<0x10009:0x000c0b06>Pero bueno, ¡lo has hecho muy bien!\nLo prometido es deuda, esto es para ti.")
/*<499>*/ 					switch (context_related3(12)) {
          					  case 0:
/*<500>*/ 						switch (context_related4(13)) {
          						  case 0:
/*<512>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 513, 'param3': 12}
/*<513>*/ 							rupees += 20;
/*<511>*/ 							printf(/* textboxtype: 0, unk: 0, line: 56 */ "Aquí tienes 20 rupias. ¡No te las gastes\ntodas de golpe, campeón!")
          							flw_648:
/*<648>*/ 							temp_flags[5 /* 0x1 20 */] = true;
/*<471>*/ 							make_actor_do_something(20, 0)
/*<995>*/ 							printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00010c09>Vuelve por aquí a echar unos combates\ncuando quieras. ¡Hasta otra, campeón!")
          						  case 1:
/*<503>*/ 							give_item(61 0x3D);
          							goto flw_648
          						  case 2:
/*<515>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 516, 'param3': 12}
/*<516>*/ 							rupees += 100;
/*<514>*/ 							printf(/* textboxtype: 0, unk: 1, line: 58 */ "¡Toma, 100 rupias! ¡Ja! Ya puedes\ncomprarte algo bonito a mi salud.")
          							goto flw_648
          						  case 3:
/*<990>*/ 							switch (story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */]) {
          							  case 0:
/*<518>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 519, 'param3': 12}
/*<519>*/ 								rupees += 200;
/*<517>*/ 								printf(/* textboxtype: 0, unk: 0, line: 59 */ "Estas 200 rupias son para ti, campeón.\n¡Es un premio más que merecido!")
          								goto flw_648
          							  case 1:
/*<989>*/ 								give_item(94 0x5E);
/*<991>*/ 								story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */] = true;
          								goto flw_648
          							}
          						}
          					  case 1:
/*<501>*/ 						switch (context_related4(14)) {
          						  case 0:
/*<521>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 522, 'param3': 12}
/*<522>*/ 							rupees += 300;
/*<520>*/ 							printf(/* textboxtype: 1, unk: 0, line: 60 */ "Ahí tienes, 300 rupias... ¡todas para ti!\n¡No te las gastes a lo tonto, eh!")
          							goto flw_648
          						  case 1:
/*<504>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<524>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 525, 'param3': 12}
/*<525>*/ 							rupees += 500;
/*<523>*/ 							printf(/* textboxtype: 0, unk: 1, line: 61 */ "¡Aquí tienes 500 rupias! ¡¿A que nunca\nhabías visto tanto dinero junto?!")
          							goto flw_648
          						  case 3:
/*<526>*/ 							switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          							  case 0:
/*<529>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 530, 'param3': 12}
/*<530>*/ 								rupees += 1000;
/*<528>*/ 								printf(/* textboxtype: 0, unk: 0, line: 62 */ "¡Bestial! ¡1000 rupias! Te ha tocado\nel gordo, muchacho... ¡Estas cantidades\nson mareantes!")
          								goto flw_648
          							  case 1:
/*<1007>*/ 								switch (is_adventure_pouch_full()) {
          								  case 0:
/*<997>*/ 									switch (is_item_check_full()) {
          									  case 0:
/*<1003>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1014, 'param3': 12}
/*<1014>*/ 										printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000b0c09>¿Qué pasa aquí? Llevas la alforja llena\ny en la consigna tampoco te cabe nada\nmás, campeón. Así que lo siento pero\nno puedes llevarte este escudo.")
/*<1004>*/ 										rupees += 1000;
/*<1002>*/ 										printf(/* textboxtype: 0, unk: 1, line: 49 */ "¡Qué se le va a hacer! En fin, siempre\npuedes intentarlo de nuevo la próxima\nvez. <0x10009:0x000c0b06>Anda, toma estas 1000 rupias al\nmenos, que no te vendrán mal...")
          										goto flw_648
          									  case 1:
          										flw_505:
/*<505>*/ 										give_item(125 0x7D);
/*<527>*/ 										story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          										goto flw_648
          									}
          								  case 1:
          									goto flw_505
          								}
          							}
          						}
          					  case 2:
/*<502>*/ 						switch (context_related4(15)) {
          						  case 0:
/*<532>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 533, 'param3': 12}
/*<533>*/ 							rupees += 2000;
/*<531>*/ 							printf(/* textboxtype: 1, unk: 0, line: 63 */ "¡2000 rupias del ala para el caballero!\n¡Menudo botín!")
          							goto flw_648
          						  case 1:
/*<506>*/ 							give_item(64 0x40);
/*<536>*/ 							printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x000c0b00>¡Esto va de propina!")
/*<534>*/ 							give_item(64 0x40);
/*<537>*/ 							printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000c0b00>¡Toma esto, te lo has ganado!")
/*<535>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<539>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 540, 'param3': 12}
/*<540>*/ 							rupees += 3000;
/*<538>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "¡Qué barbaridad! ¡3000 rupias!\n¡¿Qué vas a hacer con tanto dinero?!")
          							goto flw_648
          						  case 3:
/*<542>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 543, 'param3': 12}
/*<543>*/ 							rupees += 9900;
/*<541>*/ 							printf(/* textboxtype: 0, unk: 0, line: 68 */ "¡Válgame...! ¡Has ganado 9900 rupias!\nMenudo sablazo, campeón... ¡Me has\ndejado las arcas temblando!")
          							goto flw_648
          						}
          					}
          				}
          			  case 1:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00100c00>Por cierto... <pause 15><heroname>,\n¿Te ves con arrestos de librar otro\ncombate ahora mismo?\n\n<0x10009:0x000b0c09>¡No te pido que luches por la cara, eh!\nCada vez que logres una victoria y\ndecidas continuar, la recompensa se\nincrementa. ¡Vale la pena resistir!\n¡Uno de los premios en liza es un <color red<escudo\nde lo más resistente>coloroff>! ¿Qué? Vuelve a\nbullirte el ardor guerrero en las venas,\n¿eh, campeón?\n<0x10009:0x000d0c00>No obstante...<pause 20>\nYa sé que lo sabes, pero te recuerdo\nque, si pierdes, adiós muy buenas.\n¡Sé consciente del riesgo que corres!\nY no olvides que el <color red<indicador del escudo\ny el número de corazones >coloroff>se conservan\nde un combate a otro. ¡Ja! ¡No me digas\nque no es un reto fascinante!")
/*< 63>*/ 				story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */] = true;
          				goto flw_64
          			}
          		  case 1:
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>¡Increíble! ¡Has batido tu récord!\nNo puedo dejar que te vayas con las\nmanos vacías. ¡Toma, esto es para ti!<0x10009:0x000c0b06>")
          			goto flw_545
          		  case 2:
/*< 60>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "Pero muchacho... ¡Si no has podido ni\nbatir tu propio récord! La próxima vez\na ver si le echamos un poco más de\nardor guerrero, ¿eh?")
          			goto flw_640
          		}
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x000b0c07>¡Oooh, <heroname>!\n¡Ha sido impresionante, muchacho!\n¡Eres un guerrero excelente!")
          		goto flw_57
          	}
          }

          void entrypoint_460_55() {
/*<165>*/ 	start()
/*<143>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<144>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<146>*/ 	make_actor_do_something(4, 0)
/*<660>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 145, 'param3': 52}
/*<145>*/ 	changeScene(10, 0) // {'name': 'B101', 'room': 0, 'layer': 2, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_72() {
/*<452>*/ 	start()
/*<444>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000006>¡Ja! ¡Tus palabras son música para mis\noídos, señor héroe! Ea, elige el juicio\nque más rabia te dé.\n[1-]El de Farore[2-]El de Din[3-]El de Nayru[4-]Otro")
          	flw_445:
/*<445>*/ 	switch (choice(4)) {
          	  case 0:
/*<448>*/ 		make_actor_do_something(16, 0)
/*<446>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_460:
/*<460>*/ 		entrypoint_460_71();
          	  case 1:
/*<449>*/ 		make_actor_do_something(17, 0)
/*<447>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_460
          	  case 2:
/*<451>*/ 		make_actor_do_something(18, 0)
/*<450>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_460
          	  case 3:
/*<457>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>¿Otro juicio? ¿Cuál?\n\n[1-]El de\nAltárea[2-]Los otros[3]Ninguno")
/*<455>*/ 		switch (choice(3)) {
          		  case 0:
/*<456>*/ 			make_actor_do_something(19, 0)
          			goto flw_460
          		  case 1:
/*<458>*/ 			printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x0000000a>¡Decídete de una vez, campeón!\n¿Adónde quieres ir a batirte el cobre?\n\n[1-]Farone[2-]Eldin[3-]Lanayru[4-]Otro sitio")
          			goto flw_445
          		  case 2:
/*<459>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
/*<650>*/ 			temp_flags[5 /* 0x1 20 */] = true;
          		}
          	}
          }

          void entrypoint_460_03() {
/*<488>*/ 	start()
/*<489>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x000b0c09>¡Ya van ocho victorias seguidas!\n¡Qué fiera! ¡Enhorabuena!")
/*<549>*/ 	switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          	  case 0:
/*<552>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 553, 'param3': 12}
/*<553>*/ 		rupees += 1000;
/*<551>*/ 		printf(/* textboxtype: 0, unk: 0, line: 62 */ "¡Bestial! ¡1000 rupias! Te ha tocado\nel gordo, muchacho... ¡Estas cantidades\nson mareantes!")
          		flw_647:
/*<647>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 649, 'param3': 12}
/*<649>*/ 		temp_flags[5 /* 0x1 20 */] = true;
/*<492>*/ 		make_actor_do_something(20, 0)
/*<996>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00010c09>Vuelve por aquí a echar unos combates\ncuando quieras. ¡Hasta otra, campeón!")
          	  case 1:
/*<1006>*/ 		switch (is_adventure_pouch_full()) {
          		  case 0:
/*<998>*/ 			switch (is_item_check_full()) {
          			  case 0:
/*<1000>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1016, 'param3': 12}
/*<1016>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000b0c09>¿Qué pasa aquí? Llevas la alforja llena\ny en la consigna tampoco te cabe nada\nmás, campeón. Así que lo siento pero\nno puedes llevarte este escudo.")
/*<1001>*/ 				rupees += 1000;
/*<999>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "¡Qué se le va a hacer! En fin, siempre\npuedes intentarlo de nuevo la próxima\nvez. <0x10009:0x000c0b06>Anda, toma estas 1000 rupias al\nmenos, que no te vendrán mal...")
          				goto flw_647
          			  case 1:
          				flw_547:
/*<547>*/ 				give_item(125 0x7D);
/*<550>*/ 				story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          				goto flw_647
          			}
          		  case 1:
          			goto flw_547
          		}
          	}
          }

          void entrypoint_460_56() {
/*<166>*/ 	start()
/*<148>*/ 	make_actor_do_something(5, 0)
/*<659>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 147, 'param3': 52}
/*<147>*/ 	changeScene(11, 0) // {'name': 'B301', 'room': 0, 'layer': 2, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_73() {
/*<453>*/ 	start()
/*<427>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "")
/*<428>*/ 	switch (choice(4)) {
          	  case 0:
/*<433>*/ 		make_actor_do_something(16, 0)
/*<430>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_461:
/*<461>*/ 		entrypoint_460_71();
          	  case 1:
/*<434>*/ 		make_actor_do_something(17, 0)
/*<432>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_461
          	  case 2:
/*<437>*/ 		make_actor_do_something(18, 0)
/*<436>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_461
          	  case 3:
/*<435>*/ 		make_actor_do_something(19, 0)
          		goto flw_461
          	}
          }

          void entrypoint_460_04() {
/*<490>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x000b0c09>¡Impresionante, campeón!\n¡Has logrado nueve victorias seguidas!\nEsto sí que no me lo esperaba... ¡Estás\nhecho una máquina de matar!")
/*<555>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 556, 'param3': 12}
/*<556>*/ 	rupees += 2000;
/*<554>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "¡2000 rupias del ala para el caballero!\n¡Menudo botín!")
          	goto flw_647
          }

          void entrypoint_460_57() {
/*<167>*/ 	start()
/*<150>*/ 	make_actor_do_something(6, 0)
/*<658>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 149, 'param3': 52}
/*<149>*/ 	changeScene(12, 0) // {'name': 'B201', 'room': 0, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_74() {
/*<454>*/ 	start()
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000006>¡Ja! ¡Tus palabras son música para mis\noídos, señor héroe! Ea, elige el juicio\nque más rabia te dé.\n[1-]El de Farore[2-]El de Din[3-]El de Nayru[4]Ninguno")
/*<429>*/ 	switch (choice(4)) {
          	  case 0:
/*<440>*/ 		make_actor_do_something(16, 0)
/*<438>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_462:
/*<462>*/ 		entrypoint_460_71();
          	  case 1:
/*<441>*/ 		make_actor_do_something(17, 0)
/*<439>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_462
          	  case 2:
/*<443>*/ 		make_actor_do_something(18, 0)
/*<442>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_462
          	  case 3:
/*<431>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>¿Qué dices? ¿Cómo que no quieres?\n¡Así se te pasa el muermo, hombre!\nUf, menudo héroe estás tú hecho...\n\n<0x10009:0x00070c00>Bueno, da igual. Si cambias de idea,\npuedes pasarte por aquí cuando\nquieras. ¡Te estaré esperando!")
/*<651>*/ 		temp_flags[5 /* 0x1 20 */] = true;
          	}
          }

          void entrypoint_460_05() {
/*<493>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x000b0c09>¡¿Diez victorias seguidas?!\n¡Lo tuyo no es ni medio normal!\n¡Qué escabechina!...")
/*<557>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x000c0b06>Toma, esto es para ti.")
/*<548>*/ 	give_item(64 0x40);
/*<560>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x000c0b00>¡Esto va de propina!")
/*<558>*/ 	give_item(64 0x40);
/*<561>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000c0b00>¡Toma esto, te lo has ganado!")
/*<559>*/ 	give_item(64 0x40);
          	goto flw_647
          }

          void entrypoint_460_58() {
/*<168>*/ 	start()
/*<152>*/ 	make_actor_do_something(7, 0)
/*<657>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 666, 'param3': 52}
/*<666>*/ 	story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = true;
/*<671>*/ 	story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = false;
/*<672>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<151>*/ 	changeScene(13, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_06() {
/*<495>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x000b0c09>Me estoy quedando sin palabras,\ncampeón. Once victorias seguidas...\n¡Esto no lo había visto en mi vida!\n¡Eres una espada con piernas!")
/*<563>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 564, 'param3': 12}
/*<564>*/ 	rupees += 3000;
/*<562>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "¡Qué barbaridad! ¡3000 rupias!\n¡¿Qué vas a hacer con tanto dinero?!")
          	goto flw_647
          }

          void entrypoint_460_59() {
/*<169>*/ 	start()
/*<154>*/ 	make_actor_do_something(8, 0)
/*<656>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 667, 'param3': 52}
/*<667>*/ 	story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = true;
/*<674>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<1011>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<1012>*/ 		story_flags[495 /* us: 805A9B13 0x20, jp: 805ACD93 0x20 */] = true;
          		flw_673:
/*<673>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = false;
/*<153>*/ 		changeScene(14, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<1013>*/ 		story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
          		goto flw_673
          	}
          }

          void entrypoint_460_41() {
/*<231>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00000009>Mmm, en tus inicios luchaste contra...<pause 20>\nAh, sí, ya lo tengo.\n¿Qué me dices de estos bicharracos?\n[1-]Grahim[2-]Malócula[3-]Morgrad[4-]El Durmiente")
/*<198>*/ 	switch (choice(4)) {
          	  case 0:
/*<199>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<Grahim>coloroff> es el elegido!\nEs el tipo ese tan grimoso contra\nel que luchaste en el <color blue<templo de la\ncontemplación>coloroff>.")
/*<203>*/ 		scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
          		flw_228:
/*<228>*/ 		entrypoint_460_01();
          	  case 1:
/*<201>*/ 		printf(/* textboxtype: 1, unk: 1, line: 18 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<Malócula>coloroff> es la elegida!\nEs el engendro con forma de bola de\nfuego con el que luchaste en el <color blue<templo\nterrenal>coloroff>.")
/*<204>*/ 		scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
          		goto flw_228
          	  case 2:
/*<202>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x000b0c0d>¡Genial, el <color blue<Morgrad >coloroff>es el elegido!\nEs aquel escorpión enorme con el que\nluchaste en la <color blue<refinería de Lanayru>coloroff>.")
/*<205>*/ 		scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
          		goto flw_228
          	  case 3:
/*<200>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<El Durmiente >coloroff>es el elegido!\nEs aquel bichejo enorme con el que\nluchaste en la <color blue<tierra del presidio>coloroff>.")
/*<206>*/ 		scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
          		goto flw_228
          	}
          }

          void entrypoint_460_07() {
/*<497>*/ 	start()
/*<498>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x000b0c09>¡Doce combates, doce victorias! ¡Pleno!\n¡Va a ser que eres el mejor, campeón!...\n¡Eres un héroe de verdad!")
/*<566>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 567, 'param3': 12}
/*<567>*/ 	rupees += 9900;
/*<565>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "¡Válgame...! ¡Has ganado 9900 rupias!\nMenudo sablazo, campeón... ¡Me has\ndejado las arcas temblando!")
          	goto flw_647
          }

          void entrypoint_460_42() {
/*<232>*/ 	start()
/*<234>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<227>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000009>Si nos fijamos en la parte central\nde tu aventura... Veamos... <pause 20>¡Ya está!\n¿Qué me dices de estas bellezas?\n[1-]Iruoma[2-]Daidagos[3-]Grahim[4-]El Durmiente")
          		flw_207:
/*<207>*/ 		switch (choice(4)) {
          		  case 0:
/*<208>*/ 			printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x000b0c09>¡Genial, <color blue<Iruoma >coloroff>es el elegido!\nEs el monstruo espadachín de seis\nbrazos con el que luchaste en la <color blue<gran\ncaverna ancestral>coloroff>.")
/*<212>*/ 			scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
          			flw_229:
/*<229>*/ 			entrypoint_460_01();
          		  case 1:
/*<210>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<Daidagos>coloroff> es el elegido!\nEs aquel mostrenco tan raro de un solo\nojo con el que luchaste en el <color blue<galeón de\nlas arenas>coloroff>.")
/*<213>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
          			goto flw_229
          		  case 2:
/*<211>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<Grahim>coloroff> es el elegido!\nEs el tipo ese tan grimoso contra el que\nluchaste por segunda vez en el <color blue<gran\nsantuario antiguo>coloroff>.")
/*<214>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
          			goto flw_229
          		  case 3:
/*<209>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<El Durmiente>coloroff> es el elegido!\nEs aquel bichejo enorme con el que\nluchaste por segunda vez en la <color blue<tierra\ndel presidio>coloroff>.")
/*<215>*/ 			scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
          			goto flw_229
          		}
          	  case 1:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00000009>¡Ja! Veo que prefieres un combate más\nreciente...<pause 20> ¿Qué me dices de estos?\n[1-]Iruoma[2-]Daidagos[3-]Grahim[4-]El Durmiente")
          		goto flw_207
          	}
          }

          void entrypoint_460_08() {
/*<578>*/ 	start()
/*<569>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>¡Qué bueno! Bien hecho, campeón.\n¡Has dado todo un espectáculo!")
/*<570>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Has tardado <numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2>\nen despachar a <color blue<<string arg0>>coloroff>.")
/*<568>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<571>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Y ahora que lo pienso, campeón...\nPor ser la primera vez que vences a\neste bicharraco en este juego mío,\nte mereces un premio.<0x10009:0x000c0b06>")
          		flw_576:
/*<576>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 577, 'param3': 12}
/*<577>*/ 		rupees += 50;
/*<575>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ahí te van, 50 rupias! Que sí, que son\ntodas para ti, campeón...")
          		flw_642:
/*<642>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 574, 'param3': 12}
/*<574>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 623, 'param3': 45}
/*<623>*/ 		entrypoint_460_03();
          	  case 1:
/*<572>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>¡Increíble! ¡Has batido tu récord!\nNo puedo dejar que te vayas con las\nmanos vacías. ¡Toma, esto es para ti!<0x10009:0x000c0b06>")
          		goto flw_576
          	  case 2:
/*<573>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Ay, muchacho... ¡Si no has podido ni \nbatir tu propio récord! Pero reconozco\nque has despachado a todos los rivales,\ny eso también tiene su mérito.")
          		goto flw_642
          	}
          }

          void entrypoint_460_60() {
/*<170>*/ 	start()
/*<156>*/ 	make_actor_do_something(9, 0)
/*<655>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 1009, 'param3': 52}
/*<1009>*/ 	story_flags[347 /* us: 805A9B01 0x02, jp: 805ACD81 0x02 */] = true;
/*<155>*/ 	changeScene(15, 0) // {'name': 'F403', 'room': 1, 'layer': 0, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_43() {
/*<233>*/ 	start()
/*<216>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>Si prefieres un combate más reciente...<pause 20>\n¿Qué me dices de estos?\n[1-]El Durmiente[2-]La Horda[3-]Grahim[4-]Heraldo")
/*<217>*/ 	switch (choice(4)) {
          	  case 0:
/*<218>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<El Durmiente>coloroff> es el elegido!\nEs aquel bichejo enorme con el que\nluchaste por tercera vez en la <color blue<tierra\ndel presidio>coloroff>.")
/*<222>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_230:
/*<230>*/ 		entrypoint_460_01();
          	  case 1:
/*<220>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000b0c0d>¡Genial, eliges enfrentarte a <color blue<La Horda>coloroff>!\nSe trata de un batallón de monstruos\ninvocados por el amigo <color blue<Grahim>coloroff> en la\n<color blue<tierra del presidio>coloroff>.")
/*<223>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_230
          	  case 2:
/*<221>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<Grahim>coloroff> es el elegido!\nEs el tipo ese tan grimoso con el que\nluchaste por tercera vez en la <color blue<tierra\ndel presidio>coloroff>.")
/*<224>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_230
          	  case 3:
/*<219>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000b0c0d>¡Oh, eliges al <color blue<Heraldo de la Muerte>coloroff>!\n¡Pues sí que has luchado con enemigos\ntemibles, campeón! ¡Este verraco da\nescalofríos!")
/*<225>*/ 		scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
          		goto flw_230
          	}
          }

          void entrypoint_460_09() {
/*<589>*/ 	start()
/*<580>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>¡Qué bueno! Bien hecho, campeón.\n¡Has dado todo un espectáculo!")
/*<581>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Has tardado <numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2>\nen despachar a <color blue<<string arg0>>coloroff>.")
/*<579>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<582>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Y ahora que lo pienso, campeón...\nPor ser la primera vez que vences a\neste bicharraco en este juego mío,\nte mereces un premio.<0x10009:0x000c0b06>")
          		flw_587:
/*<587>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 588, 'param3': 12}
/*<588>*/ 		rupees += 50;
/*<586>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ahí te van, 50 rupias! Que sí, que son\ntodas para ti, campeón...")
          		flw_643:
/*<643>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 585, 'param3': 12}
/*<585>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 624, 'param3': 45}
/*<624>*/ 		entrypoint_460_04();
          	  case 1:
/*<583>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>¡Increíble! ¡Has batido tu récord!\nNo puedo dejar que te vayas con las\nmanos vacías. ¡Toma, esto es para ti!<0x10009:0x000c0b06>")
          		goto flw_587
          	  case 2:
/*<584>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Ay, muchacho... ¡Si no has podido ni \nbatir tu propio récord! Pero reconozco\nque has despachado a todos los rivales,\ny eso también tiene su mérito.")
          		goto flw_643
          	}
          }

          void entrypoint_460_61() {
/*<171>*/ 	start()
/*<158>*/ 	make_actor_do_something(10, 0)
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 691, 'param3': 52}
/*<691>*/ 	story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = true;
/*<157>*/ 	changeScene(16, 0) // {'name': 'F403', 'room': 1, 'layer': 4, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_44() {
/*<248>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000009>Si prefieres un combate más reciente...<pause 20>\n¿Qué me dices de estos?\n[1-]El Durmiente[2-]La Horda[3-]Grahim")
/*<240>*/ 	switch (choice(3)) {
          	  case 0:
/*<241>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<El Durmiente>coloroff> es el elegido!\nEs aquel bichejo enorme con el que\nluchaste por tercera vez en la <color blue<tierra\ndel presidio>coloroff>.")
/*<244>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_247:
/*<247>*/ 		entrypoint_460_01();
          	  case 1:
/*<242>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000b0c0d>¡Genial, eliges enfrentarte a <color blue<La Horda>coloroff>!\nSe trata de un batallón de monstruos\ninvocados por el amigo <color blue<Grahim>coloroff> en la\n<color blue<tierra del presidio>coloroff>.")
/*<245>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_247
          	  case 2:
/*<243>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<Grahim>coloroff> es el elegido!\nEs el tipo ese tan grimoso con el que\nluchaste por tercera vez en la <color blue<tierra\ndel presidio>coloroff>.")
/*<246>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_247
          	}
          }

          void entrypoint_460_62() {
/*<172>*/ 	start()
/*<160>*/ 	make_actor_do_something(11, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 159, 'param3': 52}
/*<159>*/ 	changeScene(17, 0) // {'name': 'B400', 'room': 0, 'layer': 1, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_45() {
/*<256>*/ 	start()
/*<249>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000009>Veamos tus combates más recientes...<pause 20>\n¿Qué te parecen estos dos desafíos?\n[1-]El Durmiente[2-]La Horda")
/*<250>*/ 	switch (choice(2)) {
          	  case 0:
/*<251>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<El Durmiente>coloroff> es el elegido!\nEs aquel bichejo enorme con el que\nluchaste por tercera vez en la <color blue<tierra\ndel presidio>coloroff>.")
/*<253>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_255:
/*<255>*/ 		entrypoint_460_01();
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000b0c0d>¡Genial, eliges enfrentarte a <color blue<La Horda>coloroff>!\nSe trata de un batallón de monstruos\ninvocados por el amigo <color blue<Grahim>coloroff> en la\n<color blue<tierra del presidio>coloroff>.")
/*<254>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_255
          	}
          }

          void entrypoint_460_10() {
/*<600>*/ 	start()
/*<591>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>¡Qué bueno! Bien hecho, campeón.\n¡Has dado todo un espectáculo!")
/*<592>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Has tardado <numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2>\nen despachar a <color blue<<string arg0>>coloroff>.")
/*<590>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Y ahora que lo pienso, campeón...\nPor ser la primera vez que vences a\neste bicharraco en este juego mío,\nte mereces un premio.<0x10009:0x000c0b06>")
          		flw_598:
/*<598>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 599, 'param3': 12}
/*<599>*/ 		rupees += 50;
/*<597>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ahí te van, 50 rupias! Que sí, que son\ntodas para ti, campeón...")
          		flw_644:
/*<644>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 596, 'param3': 12}
/*<596>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 625, 'param3': 45}
/*<625>*/ 		entrypoint_460_05();
          	  case 1:
/*<594>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>¡Increíble! ¡Has batido tu récord!\nNo puedo dejar que te vayas con las\nmanos vacías. ¡Toma, esto es para ti!<0x10009:0x000c0b06>")
          		goto flw_598
          	  case 2:
/*<595>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Ay, muchacho... ¡Si no has podido ni \nbatir tu propio récord! Pero reconozco\nque has despachado a todos los rivales,\ny eso también tiene su mérito.")
          		goto flw_644
          	}
          }

          void entrypoint_460_46() {
/*<261>*/ 	start()
/*<257>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000009>Veamos tus combates más recientes...<pause 20>\nPor lo visto, el único que puede ser un\nbuen desafío es <color blue<El Durmiente>coloroff>.")
/*<258>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>¡Genial, <color blue<El Durmiente>coloroff> es el elegido!\nEs aquel bichejo enorme con el que\nluchaste por tercera vez en la <color blue<tierra\ndel presidio>coloroff>.")
/*<259>*/ 	scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<260>*/ 	entrypoint_460_01();
          }

          void entrypoint_460_11() {
/*<611>*/ 	start()
/*<602>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>¡Qué bueno! Bien hecho, campeón.\n¡Has dado todo un espectáculo!")
/*<603>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Has tardado <numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2>\nen despachar a <color blue<<string arg0>>coloroff>.")
/*<601>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<604>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Y ahora que lo pienso, campeón...\nPor ser la primera vez que vences a\neste bicharraco en este juego mío,\nte mereces un premio.<0x10009:0x000c0b06>")
          		flw_609:
/*<609>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 610, 'param3': 12}
/*<610>*/ 		rupees += 50;
/*<608>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ahí te van, 50 rupias! Que sí, que son\ntodas para ti, campeón...")
          		flw_645:
/*<645>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 607, 'param3': 12}
/*<607>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 626, 'param3': 45}
/*<626>*/ 		entrypoint_460_06();
          	  case 1:
/*<605>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>¡Increíble! ¡Has batido tu récord!\nNo puedo dejar que te vayas con las\nmanos vacías. ¡Toma, esto es para ti!<0x10009:0x000c0b06>")
          		goto flw_609
          	  case 2:
/*<606>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Ay, muchacho... ¡Si no has podido ni \nbatir tu propio récord! Pero reconozco\nque has despachado a todos los rivales,\ny eso también tiene su mérito.")
          		goto flw_645
          	}
          }

          void entrypoint_460_12() {
/*<622>*/ 	start()
/*<613>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>¡Qué bueno! Bien hecho, campeón.\n¡Has dado todo un espectáculo!")
/*<614>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Has tardado <numeric arg0 0>:<numeric arg1 2>,<numeric arg2 2>\nen despachar a <color blue<<string arg0>>coloroff>.")
/*<612>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Y ahora que lo pienso, campeón...\nPor ser la primera vez que vences a\neste bicharraco en este juego mío,\nte mereces un premio.<0x10009:0x000c0b06>")
          		flw_620:
/*<620>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 621, 'param3': 12}
/*<621>*/ 		rupees += 50;
/*<619>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "¡Ahí te van, 50 rupias! Que sí, que son\ntodas para ti, campeón...")
          		flw_646:
/*<646>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 618, 'param3': 12}
/*<618>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 627, 'param3': 45}
/*<627>*/ 		entrypoint_460_07();
          	  case 1:
/*<616>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>¡Increíble! ¡Has batido tu récord!\nNo puedo dejar que te vayas con las\nmanos vacías. ¡Toma, esto es para ti!<0x10009:0x000c0b06>")
          		goto flw_620
          	  case 2:
/*<617>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Ay, muchacho... ¡Si no has podido ni \nbatir tu propio récord! Pero reconozco\nque has despachado a todos los rivales,\ny eso también tiene su mérito.")
          		goto flw_646
          	}
          }

          void entrypoint_460_13() {
/*<687>*/ 	start()
/*<675>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<680>*/ 		story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = false;
/*<686>*/ 		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          		flw_690:
/*<690>*/ 		entrypoint_460_14();
          	  case 1:
/*<676>*/ 		switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          		  case 0:
/*<679>*/ 			story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = false;
/*<684>*/ 			story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
/*<685>*/ 			story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          			goto flw_690
          		  case 1:
/*<677>*/ 			switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          			  case 0:
/*<678>*/ 				story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = false;
/*<681>*/ 				story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<682>*/ 				story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<683>*/ 				story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
/*<994>*/ 				story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = true;
          				goto flw_690
          			  case 1:
/*<692>*/ 				switch (story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */]) {
          				  case 0:
/*<693>*/ 					story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = false;
          					goto flw_690
          				  case 1:
          					goto flw_690
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_31() {
/*<413>*/ 	start()
/*<694>*/ 	switch (random(3)) {
          	  case 0:
/*<268>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<270>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<272>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<275>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<276>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<277>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<278>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<282>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<289>*/ 									entrypoint_460_58();
          								  case 1:
/*<281>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<290>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<280>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<287>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<279>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<288>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<274>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<285>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<273>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<286>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<271>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<283>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<269>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<284>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<704>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<702>*/ 			switch (scene_flags[118 /* 0xF 40 */]) {
          			  case 0:
/*<699>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<703>*/ 					switch (scene_flags[119 /* 0xF 80 */]) {
          					  case 0:
/*<705>*/ 						switch (scene_flags[121 /* 0xE 02 */]) {
          						  case 0:
/*<695>*/ 							switch (scene_flags[115 /* 0xF 08 */]) {
          							  case 0:
/*<697>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<709>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<716>*/ 									entrypoint_460_58();
          								  case 1:
/*<698>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<710>*/ 									entrypoint_460_52();
          								}
          							  case 1:
/*<696>*/ 								scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<711>*/ 								entrypoint_460_51();
          							}
          						  case 1:
/*<708>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<717>*/ 							entrypoint_460_57();
          						}
          					  case 1:
/*<706>*/ 						scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<715>*/ 						entrypoint_460_55();
          					}
          				  case 1:
/*<700>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<713>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<701>*/ 				scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<712>*/ 				entrypoint_460_54();
          			}
          		  case 1:
/*<707>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<714>*/ 			entrypoint_460_56();
          		}
          	  case 2:
/*<725>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<726>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<718>*/ 				switch (scene_flags[115 /* 0xF 08 */]) {
          				  case 0:
/*<728>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<720>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<727>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<722>*/ 								switch (scene_flags[117 /* 0xF 20 */]) {
          								  case 0:
/*<732>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<739>*/ 									entrypoint_460_58();
          								  case 1:
/*<723>*/ 									scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<736>*/ 									entrypoint_460_53();
          								}
          							  case 1:
/*<730>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<737>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<721>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<733>*/ 							entrypoint_460_52();
          						}
          					  case 1:
/*<731>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<740>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<719>*/ 					scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<734>*/ 					entrypoint_460_51();
          				}
          			  case 1:
/*<729>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<738>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<724>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<735>*/ 			entrypoint_460_54();
          		}
          	}
          }

          void entrypoint_460_14() {
/*<688>*/ 	start()
/*<473>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<477>*/ 		switch (context_related2(7)) {
          		  case 0:
/*<487>*/ 			entrypoint_460_12();
          		  case 1:
          			flw_482:
/*<482>*/ 			entrypoint_460_02();
          		}
          	  case 1:
/*<474>*/ 		switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (context_related2(8)) {
          			  case 0:
/*<486>*/ 				entrypoint_460_11();
          			  case 1:
          				goto flw_482
          			}
          		  case 1:
/*<475>*/ 			switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          			  case 0:
/*<479>*/ 				switch (context_related2(9)) {
          				  case 0:
/*<485>*/ 					entrypoint_460_10();
          				  case 1:
          					goto flw_482
          				}
          			  case 1:
/*<476>*/ 				switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          				  case 0:
/*<480>*/ 					switch (context_related2(10)) {
          					  case 0:
/*<484>*/ 						entrypoint_460_09();
          					  case 1:
          						goto flw_482
          					}
          				  case 1:
/*<481>*/ 					switch (context_related2(11)) {
          					  case 0:
/*<483>*/ 						entrypoint_460_08();
          					  case 1:
          						goto flw_482
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_32() {
/*<414>*/ 	start()
/*<741>*/ 	switch (random(3)) {
          	  case 0:
/*<291>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<293>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<295>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<298>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<299>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<300>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<301>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<302>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<307>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<312>*/ 										entrypoint_460_59();
          									  case 1:
/*<306>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<315>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<305>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<316>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<304>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<313>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<303>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<314>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<297>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<310>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<296>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<311>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<294>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<308>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<292>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<309>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<752>*/ 		switch (scene_flags[121 /* 0xE 02 */]) {
          		  case 0:
/*<753>*/ 			switch (scene_flags[122 /* 0xE 04 */]) {
          			  case 0:
/*<751>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<742>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<746>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<749>*/ 							switch (scene_flags[118 /* 0xF 40 */]) {
          							  case 0:
/*<744>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<750>*/ 									switch (scene_flags[119 /* 0xF 80 */]) {
          									  case 0:
/*<758>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<763>*/ 										entrypoint_460_59();
          									  case 1:
/*<754>*/ 										scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<765>*/ 										entrypoint_460_55();
          									}
          								  case 1:
/*<745>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<759>*/ 									entrypoint_460_52();
          								}
          							  case 1:
/*<748>*/ 								scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<761>*/ 								entrypoint_460_54();
          							}
          						  case 1:
/*<747>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<762>*/ 							entrypoint_460_53();
          						}
          					  case 1:
/*<743>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<760>*/ 						entrypoint_460_51();
          					}
          				  case 1:
/*<755>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<764>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<757>*/ 				scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<766>*/ 				entrypoint_460_58();
          			}
          		  case 1:
/*<756>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<767>*/ 			entrypoint_460_57();
          		}
          	  case 2:
/*<775>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<770>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<777>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<778>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<772>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<776>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<779>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<768>*/ 									switch (scene_flags[115 /* 0xF 08 */]) {
          									  case 0:
/*<784>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<789>*/ 										entrypoint_460_59();
          									  case 1:
/*<769>*/ 										scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<786>*/ 										entrypoint_460_51();
          									}
          								  case 1:
/*<783>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<792>*/ 									entrypoint_460_58();
          								}
          							  case 1:
/*<780>*/ 								scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<791>*/ 								entrypoint_460_55();
          							}
          						  case 1:
/*<773>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<788>*/ 							entrypoint_460_53();
          						}
          					  case 1:
/*<782>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<793>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<781>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<790>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<771>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<785>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<774>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<787>*/ 			entrypoint_460_54();
          		}
          	}
          }

          void entrypoint_460_33() {
/*<415>*/ 	start()
/*<794>*/ 	switch (random(3)) {
          	  case 0:
/*<317>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<319>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<321>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<324>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<325>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<326>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<327>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<328>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<329>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<335>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<340>*/ 											entrypoint_460_60();
          										  case 1:
/*<334>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<341>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<333>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<344>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<332>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<345>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<331>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<342>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<330>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<343>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<323>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<338>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<322>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<339>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<320>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<336>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<318>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<337>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<809>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<799>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<801>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<797>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<804>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<807>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<805>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<808>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<806>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<815>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<820>*/ 											entrypoint_460_60();
          										  case 1:
/*<811>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<822>*/ 											entrypoint_460_56();
          										}
          									  case 1:
/*<813>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<824>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<810>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<823>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<812>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<825>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<803>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<818>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<798>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<817>*/ 						entrypoint_460_51();
          					}
          				  case 1:
/*<802>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<819>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<800>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<816>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<814>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<821>*/ 			entrypoint_460_59();
          		}
          	  case 2:
/*<835>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<826>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<830>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<838>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<828>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<836>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<834>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<833>*/ 									switch (scene_flags[118 /* 0xF 40 */]) {
          									  case 0:
/*<837>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<844>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<849>*/ 											entrypoint_460_60();
          										  case 1:
/*<842>*/ 											scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<853>*/ 											entrypoint_460_58();
          										}
          									  case 1:
/*<832>*/ 										scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<847>*/ 										entrypoint_460_54();
          									}
          								  case 1:
/*<839>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<852>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<841>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<854>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<829>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<845>*/ 							entrypoint_460_52();
          						}
          					  case 1:
/*<843>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<850>*/ 						entrypoint_460_59();
          					}
          				  case 1:
/*<831>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<848>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<827>*/ 				scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<846>*/ 				entrypoint_460_51();
          			}
          		  case 1:
/*<840>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<851>*/ 			entrypoint_460_56();
          		}
          	}
          }

          void entrypoint_460_51() {
/*<161>*/ 	start()
/*<121>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = true;
/*<122>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<123>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<124>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<125>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<127>*/ 	make_actor_do_something(0, 0)
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 126, 'param3': 52}
/*<126>*/ 	changeScene(7, 0) // {'name': 'B100', 'room': 0, 'layer': 5, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_34() {
/*<416>*/ 	start()
/*<795>*/ 	switch (random(3)) {
          	  case 0:
/*<346>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<348>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<350>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<353>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<354>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<355>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<356>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<357>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<358>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<359>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<366>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<373>*/ 												entrypoint_460_61();
          											  case 1:
/*<365>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<371>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<364>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<372>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<363>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<376>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<362>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<377>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<361>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<374>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<360>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<375>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<352>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<369>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<351>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<370>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<349>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<367>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<347>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<368>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<857>*/ 		switch (scene_flags[116 /* 0xF 10 */]) {
          		  case 0:
/*<863>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<864>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<867>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<862>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<865>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<866>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<868>*/ 									switch (scene_flags[124 /* 0xE 10 */]) {
          									  case 0:
/*<855>*/ 										switch (scene_flags[115 /* 0xF 08 */]) {
          										  case 0:
/*<859>*/ 											switch (scene_flags[117 /* 0xF 20 */]) {
          											  case 0:
/*<875>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<882>*/ 												entrypoint_460_61();
          											  case 1:
/*<860>*/ 												scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<879>*/ 												entrypoint_460_53();
          											}
          										  case 1:
/*<856>*/ 											scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<877>*/ 											entrypoint_460_51();
          										}
          									  case 1:
/*<874>*/ 										scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<880>*/ 										entrypoint_460_60();
          									}
          								  case 1:
/*<872>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<885>*/ 									entrypoint_460_58();
          								}
          							  case 1:
/*<871>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<886>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<861>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<878>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<873>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<881>*/ 						entrypoint_460_59();
          					}
          				  case 1:
/*<870>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<883>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<869>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<884>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<858>*/ 			scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<876>*/ 			entrypoint_460_52();
          		}
          	  case 2:
/*<887>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<895>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<896>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<897>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<894>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<891>*/ 							switch (scene_flags[117 /* 0xF 20 */]) {
          							  case 0:
/*<900>*/ 								switch (scene_flags[124 /* 0xE 10 */]) {
          								  case 0:
/*<899>*/ 									switch (scene_flags[123 /* 0xE 08 */]) {
          									  case 0:
/*<889>*/ 										switch (scene_flags[116 /* 0xF 10 */]) {
          										  case 0:
/*<898>*/ 											switch (scene_flags[122 /* 0xE 04 */]) {
          											  case 0:
/*<907>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<914>*/ 												entrypoint_460_61();
          											  case 1:
/*<904>*/ 												scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<917>*/ 												entrypoint_460_58();
          											}
          										  case 1:
/*<890>*/ 											scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<908>*/ 											entrypoint_460_52();
          										}
          									  case 1:
/*<905>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<913>*/ 										entrypoint_460_59();
          									}
          								  case 1:
/*<906>*/ 									scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<912>*/ 									entrypoint_460_60();
          								}
          							  case 1:
/*<892>*/ 								scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<911>*/ 								entrypoint_460_53();
          							}
          						  case 1:
/*<893>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<910>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<903>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<918>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<902>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<915>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<901>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<916>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<888>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<909>*/ 			entrypoint_460_51();
          		}
          	}
          }

