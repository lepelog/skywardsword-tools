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
/*< 76>*/ 		printf("¡Tienes que derrotar al <b<Heraldo>>\nsea como sea!\n\n\n\x0E\x01\x09\x04\x00\x03¡Nuestro destino está en tus manos,\nLink!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\x0E\x20D¡Pufff...! ¡Por los pelos! ¡Un poco más\ny no lo contamos!\n\n\n\x0E\x01\x09\x04\x00\x200¡Si no llega a ser por mi inigualable\nsuperturboacelerón, no sé qué habría\npasado!\n\n\x0E\x01\x09\x04\x00\x200¡Y tranquilo, yo me encargo de <b<Zelda>>!\n¡Tú preocúpate por derrotar a ese\n<b<Heraldo de la Muerte>>!\n\n\x0E\x01\x09\x04\x00\x203¡Nuestro destino está en tus manos,\nLink!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf("¿Está el \x0E\x01\x12\x04\x00\x04amo listo ya para\nenfrentarse al combate final?\n[1]¡Todo\na punto![2-]Aún no")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf("\x0E\x01\x12\x04\x00\x05Muy bien, amo. Partiremos sin\nmás demora.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo. Hay tiempo para\nocuparse de los preparativos.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf("¿Desea el \x0E\x01\x12\x04\x00\x04amo regresar y prepararse\npara el combate final?\n[1]¡Buena idea![2-]Estoy listo")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo. Hay tiempo para\nocuparse de los preparativos.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf("Muy bien... \x0E\x01\x12\x04\x00\x01amo.")
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
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x01Aún no has cumplido con tu destino.\n\n\n\nSi quieres ayudar a la durmiente\n<b<Zelda>>, tendrás que completar la\nmisión para la que fuiste elegido.\nEs algo que solo tú puedes lograr.")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x03El brote emite una poderosa fuerza\nvital. Pronto crecerá y se convertirá\nen un gran árbol cuya belleza\nperdurará milenios.")
          					  case 1:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x00\x0B¡Oh, ya has plantado la semilla!\n\n\n\nEmite una poderosa fuerza vital.\nPronto crecerá y se convertirá\nen un gran árbol cuya belleza\nperdurará milenios.")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x00\x03Un árbol imperecedero...\n¿Dónde podríamos encontrar\nla <r<semilla >>de un árbol así?")
          					  case 1:
/*< 34>*/ 						printf("<pause0F>(.<pause0F>.<pause0F>.) \x0E\x01\x09\x04\x0F\x803¿Mmm?\n\n\n\n[1]¿Qué pasa?[2]Adiós")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x00\x703Mmm... No tiene importancia...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 6}
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 40, 'param3': 6}
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf("¿Ves ese lugar tan soleado de ahí?\n\n\n\nEstoy pensando que sería un lugar\nmagnífico para plantar un gran árbol.\n\n\nTarde o temprano, <b<Zelda >>volverá\na despertar. ¿No crees que se alegraría\nmuchísimo si viera algo así?")
/*< 60>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 61, 'param3': 6}
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf("Lo que necesitaríamos es un árbol\ncapaz de sobrevivir miles de años\nsin secarse y que nunca deje de\ndar frutos.\nPero ¿dónde podríamos encontrar\nla <r<semilla >>de un árbol semejante?")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf("Mmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x00\nNo te preocupes por nada. Yo cuidaré\nde <b<Zelda>>. Puedes partir tranquilo hacia\ntu destino.")
          			  case 1:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x03Vuestros caminos se han separado...\n\n\n\nPero tal y como prometiste a mi señora\n<b<Zelda>>, deberás hallar la <y<Trifuerza>>.\n\n\nTu destino te espera en tu propia\népoca. Adelante.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x03Aquí fue donde la <b<Diosa Hylia >>encerró\nal <b<Heraldo de la Muerte >>hace ya mucho\ntiempo, en una era muy anterior a la\nnuestra.\nTendrás cientos de preguntas... pero\nahora no hay tiempo. ¡Debes atravesar\nla gran puerta del fondo, deprisa!\n\nTras ella espera alguien por cuya\nseguridad lo darías todo.")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bienvenido, Link.\nTe estaba esperando.\n\n\nSupongo que estarás un poco\nperdido, pero antes de nada,\npermite que te explique una cosa.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf("Estamos en el <r<templo de Hylia>>,\nel mismo que, en el futuro, será\nconocido como el <b<templo del presidio>>.\n\nEn tiempos remotos, muchísimo\nantes de que tú nacieras, la Diosa\nencerró al <b<Heraldo de la Muerte>>\nen una prisión eterna.\nEn esta época, aún no ha transcurrido\nlargo tiempo desde que ese territorio\nal que tú llamas Altárea se separó\nde las tierras inferiores...")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf("\x0E\x01\x09\x04\xF0F\x703En efecto. Al usar el <b<Portal del Tiempo>>,\nhas viajado hacia el <r<pasado>>.\n\n\nTendrás cientos de preguntas... pero\nahora no hay tiempo. ¡Debes atravesar\nla gran puerta del fondo, deprisa!")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf("Tras esa puerta espera una persona\npor cuya seguridad lo darías todo.")
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
/*< 25>*/ 		printf("\x0E\x01\x09\x04\x00\x12Ese monstruo ha huido por <r<aquella\npuerta>>... ¡Rápido! ¡Debes detener a\n<b<Grahim >>cuanto antes!")
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x12Agh... ¿Eres tú, Link?\nGrahim me pilló por sorpresa y...\n\n\nPero no te preocupes por mí.\n¡Debes ir tras él, deprisa!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf("Ese monstruo ha huido por <r<aquella\npuerta>>... ¡Date prisa! ¡Aún estás a\ntiempo!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x07\xC04¡No te preocupes! <b<Zelda >>está a salvo.\nSe encuentra plácidamente dormida\nen la sala del fondo.\n\n\x0E\x01\x09\x04\x00\x706Acaba con ese monstruo y salva\nnuestro mundo, Link.")
          	  case 1:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x07\xC0B¡No te preocupes! <b<Zelda >>está a salvo.\nSe encuentra plácidamente dormida\nen la sala del fondo.\n\n\x0E\x01\x09\x04\x0F\x700Jamás pensé que el Heraldo\nde la Muerte volvería a la vida...\n<pause0A>¡Eres nuestra última esperanza!\n\x0E\x01\x09\x04\x00\x706¡Confiamos en ti, Link!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf("Tengo información importante, \x0E\x01\x12\x04\x00\x0Bamo:\nLa probabilidad de que sea imposible\nabandonar el combate sin vencer al\nadversario antes es del 100%.\n¿Está preparado el \x0E\x01\x12\x04\x00\x01amo?[1]¡Adelante![2-]Aún no...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sí, amo Link.<pause0F> Espero\nque el \x0E\x01\x12\x04\x00\x02amo sepa que, pase lo que\npase, siempre estaré a su lado.\n<pause1E>Buena suerte, \x0E\x01\x12\x04\x00\x01amo... ")
          	  case 1:
/*< 66>*/ 		printf("\x0E\x01\x12\x04\x00\x05Está bien, amo. Bastará con regresar\naquí cuando todo esté listo.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CD¡Ma... maldito mocoso!")
          }

