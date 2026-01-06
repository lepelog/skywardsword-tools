          void entrypoint_502_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	switch (story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */]) {
          	  case 0:
/*< 71>*/ 		story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */] = true;
          		flw_73:
/*< 73>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 72>*/ 		story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */] = true;
          		goto flw_73
          	}
          }

          void entrypoint_502_07() {
/*< 74>*/ 	start()
/*< 77>*/ 	switch (story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "¡Tienes que derrotar al <color blue<Heraldo>coloroff>\nsea como sea!\n\n\n<0x10009:0x00000003>¡Nuestro destino está en tus manos,\n<heroname>!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e020d>¡Pufff...! Eso estuvo cerca.\n¡Casi no lo contamos!\n\n\n<0x10009:0x00000200>¡Si no llega a ser por mi inigualable\nsupercarrera, no sé qué habría pasado!\n\n\n<0x10009:0x00000200>¡Y tranquilo, yo me encargo de <color blue<Zelda>coloroff>!\n¡Tú preocúpate por derrotar a ese\n<color blue<Heraldo de la Muerte>coloroff>!\n\n<0x10009:0x00000203>¡Nuestro destino está en tus manos,\n<heroname>!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "¿Está el <0x10012:0x00000004>amo listo ya para\nenfrentarse al combate final?\n[1-]Estoy\nlisto[2]Aún no")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000005>Muy bien, amo. Partiremos sin\nmás demora.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10012:0x00000005>De acuerdo, amo. Hay tiempo para\nocuparse de los preparativos.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "¿Desea el <0x10012:0x00000004>amo regresar y prepararse\npara el combate final?\n[1-]¡Buena idea![2]Estoy listo")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10012:0x00000005>De acuerdo, amo. Hay tiempo para\nocuparse de los preparativos.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "Muy bien... <0x10012:0x00000001>amo.")
          	}
          }

          void entrypoint_502_01() {
          	start()
/*<  3>*/ 	switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          	  case 0:
/*< 27>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000001>Aún no has cumplido con tu destino.\n\n\n\nSi quieres ayudar a la durmiente <color blue<Zelda>coloroff>,\ntendrás que completar la misión para la\nque fuiste elegido. Es algo que solo tú\npuedes lograr.")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000003>El brote emite una poderosa fuerza vital.\nPronto crecerá y se convertirá en un gran\nárbol cuya belleza perdurará milenios.")
          					  case 1:
/*< 47>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000b>¡Oh, ya has plantado la semilla!\n\n\n\nEmite una poderosa fuerza vital. Pronto\ncrecerá y se convertirá en un gran árbol\ncuya belleza perdurará milenios.")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000003>Un árbol imperecedero...\n¿Dónde podríamos encontrar\nla <color red<semilla >coloroff>de un árbol así?")
          					  case 1:
/*< 34>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<pause 15>.<pause 15>.<pause 15>.<0x10009:0x000f0803>Hmmm.\n\n\n\n[1-]¿Qué pasa?[2-]Adiós")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00000703>Oh, no tiene importancia...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							wait_frames(1)
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							wait_frames(30)
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "¿Ves ese lugar tan soleado de ahí?\n\n\n\nEstoy pensando que sería un lugar\nmagnífico para plantar un gran árbol.\n\n\nTarde o temprano, <color blue<Zelda >coloroff>volverá\na despertar. ¿No crees que se alegraría\nmuchísimo si viera algo así?")
/*< 60>*/ 							wait_frames(30)
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf(/* textboxtype: 0, unk: 0, line: 11 */ "Lo que necesitaríamos es un árbol capaz\nde sobrevivir miles de años sin secarse y\nque nunca deje de dar frutos.\n\nPero ¿dónde podríamos encontrar\nla <color red<semilla >coloroff>de un árbol semejante?")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Mmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0000000a>No te preocupes por nada. Yo cuidaré\nde <color blue<Zelda>coloroff>. Puedes partir tranquilo hacia\ntu destino.")
          			  case 1:
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000003>Veo que sus caminos se han separado.\n\n\n\nPero tal y como prometiste a mi señora\n<color blue<Zelda>coloroff>, deberás hallar la <color yellow<Trifuerza>coloroff>.\n\n\nVuelve a tu propia época.\nTu destino te espera allí.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000003>Estás en el pasado, mucho antes de tu\npropia época. En este tiempo remoto,\nla Diosa acaba de encerrar al <color blue<Heraldo\nde la Muerte >coloroff>en una prisión eterna...\nAhora no hay tiempo para preguntas.\nDebes atravesar la gran puerta del\nfondo, ¡deprisa!\n\nTras ella espera alguien por cuya\nseguridad has arriesgado tu vida.")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Por fin has llegado, <heroname>.\nTe estaba esperando.\n\n\nSupongo que estarás un poco confundido,\npero antes de nada, permite que te\nexplique una cosa.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "Estamos en el <color red<templo de Hylia>coloroff>, aquel\nque en el futuro se conocerá como el\n<color blue<templo del presidio>coloroff>.\n\nEstás en el pasado, mucho antes de tu\npropia época. En este tiempo remoto,\nla Diosa acaba de encerrar al <color blue<Heraldo\nde la Muerte >coloroff>en una prisión eterna.\nY ha pasado poco tiempo desde que\nese territorio al que tú llamas Neburia\nse separara de las tierras inferiores.")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x0f0f0703>En efecto. Al usar el <color blue<Portal del Tiempo>coloroff>,\nhas viajado hacia el <color red<pasado>coloroff>.\n\n\nEstoy segura de que tienes muchas \npreguntas, pero ahora no hay tiempo. \nDebes atravesar la gran puerta del\nfondo.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Tras esa puerta espera una persona\npor cuya seguridad has arriesgado\ntu vida.")
/*<  7>*/ 			story_flags[349 /* us: 805A9B01 0x08, jp: 805ACD81 0x08 */] = true;
/*<  8>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<  9>*/ 				story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          				flw_17:
/*< 17>*/ 				scene_flags[10 'Sealed Grounds'][82 /* 0xB 04 */] = true;
/*< 16>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				goto flw_17
          			}
          		}
          	}
          }

          void entrypoint_502_02() {
/*<  1>*/ 	start()
/*< 21>*/ 	switch (scene_flags[85 /* 0xB 20 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000012>Ese monstruo ha huido por <color red<aquella\npuerta>coloroff>... ¡Rápido! ¡Debes detener a\n<color blue<Grahim >coloroff>cuanto antes!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000012>Agh... ¿Eres tú, <heroname>?\nGrahim me agarró por sorpresa y...\n\n\nPero no te preocupes por mí.\n¡Debes ir tras él, deprisa!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Ese monstruo ha huido por <color red<aquella\npuerta>coloroff>... ¡Date prisa! ¡Aún estás a\ntiempo!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00070c04>¡No te preocupes! <color blue<Zelda >coloroff>está a salvo.\nSe encuentra plácidamente dormida\nen la sala del fondo.\n\n<0x10009:0x00000706>Acaba con ese monstruo y salva\nnuestro mundo, <heroname>.")
          	  case 1:
/*< 54>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00070c0b>¡No te preocupes! <color blue<Zelda >coloroff>está a salvo.\nSe encuentra plácidamente dormida\nen la sala del fondo.\n\n<0x10009:0x000f0700>Jamás pensé que el <color blue<Heraldo>coloroff>\nde la Muerte volvería a la vida...\n<pause 10>¡Eres nuestra última esperanza!\n<0x10009:0x00000706>¡Confiamos en ti, <heroname>!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Tengo información importante, <0x10012:0x0000000b>amo:\nLa probabilidad de que sea posible\nabandonar el combate sin vencer al\nadversario antes es del 0%.\n¿Está preparado el <0x10012:0x00000001>amo?[1-]¡Adelante![2]Aún no...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10012:0x00000005>Sí, amo <heroname>.<pause 15> Espero\nque el <0x10012:0x00000002>amo sepa que, pase lo que\npase, siempre estaré a su lado.\n<pause 30>Buena suerte, <0x10012:0x00000001>amo... ")
          	  case 1:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000005>Está bien, amo. Bastará con regresar\naquí cuando todo esté listo.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10005:0x002d0000><0x10008:0x02cd>¡Despreciable mocoso!")
          }

