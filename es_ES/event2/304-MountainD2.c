          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x0C\xE09La profecía de los mogumas,\ncazadores de tesoros, dice así:\n\n\n«<r<Dos estatuas contrapuestas,\nque sostienen sus miradas>>,\ncustodian el gran tesoro\ndel rey de una era pasada.\nDemostrará ser valiente,\ny se abrirá ante él la senda,\nquien salte sin componendas<r<\nsobre la boca durmiente>>».\n\x0E\x01\x09\x04\x09\x908En realidad, no sé qué parte de verdad\nhay en todo esto, pero pienso\naveriguarlo sea como sea.")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf("\x0E\x01\x0B\x04\x00\x3F4\x0E\x01\x09\x04ÿ\xFF02Ju, ju, ju... La salida, por fin...")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf("(...)\x0E\x01\x08\x02\x2CD\x0E\x01\x09\x04\n\x5304 ¡Uaaargh...!\n\n\n\n\x0E\x01\x08\x02Í\x0E\x01\x09\x04\x09\x9FF¡Diablos, no me des esos sustos!\n¡Creía que eras un monstruo!\n\n\n(...)\x0E\x01\x09\x04\x0B\xC07 Anda...\n\n\n\nPor lo que veo, llevas unos <y<guantes\nde cavar>>, ¿no?\n\n\n\x0E\x01\x09\x04ÿ\xFF0A¿Quién eres? ¿Y qué estás\nhaciendo aquí?\n[1]Buscar[2]Verás...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x0C\xD05Ajá... comprendo.\n\n\n\n\x0E\x01\x09\x04\x0C\xD07¿Cómo? ¿Que quién soy yo?\n\n\n\n\x0E\x01\x09\x04\x09\x90APues yo soy <b<Aurelio>>, gran jefe moguma.\n\n\n\nY, ya puestos, ¡genial inventor de\nesos maravillosos guantes de cavar\nque tienes ahí!\n\n\x0E\x01\x09\x04\x09\x90B¡Juo, juo, juo!")
/*< 61>*/ 			printf("(...)\x0E\x01\x09\x04\x0C\x409 No sé; te veo un poco perdido.\n\n\n\n\x0E\x01\x09\x04\x09\xE08¿No has oído el rumor?\n\n\n\nEn estas ruinas se oculta un tesoro\nde un valor incalculable.\n\n\nPero de todos los que han intentado\nencontrarlo, ninguno ha regresado\njamás.\n\n¡Y no son pocos los que han probado\nfortuna!\n\n\n\x0E\x01\x09\x04\x0C\x409Como colega buscador de tesoros,\nme veo en la obligación de aconsejarte\nque desistas en tu empeño.\n\n\x0E\x01\x09\x04ÿ\xFF08¿Piensas continuar igualmente?\n[1]Así es[2](...)")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf("\x0E\x01\x09\x04\x09\x905Está bien, entendido... Entonces\nte contaré la profecía de los mogumas,\ncazadores de tesoros.\n\n\x0E\x01\x09\x04ÿ\xFF0BEs muy famosa... al menos entre\nlos de nuestra especie, claro está.\n\n\n\x0E\x01\x09\x04\x0C\xD0A¿Estás listo?\n\n\n\n«<r<Dos estatuas contrapuestas,\nque sostienen sus miradas>>,\ncustodian el gran tesoro\ndel rey de una era pasada.\nDemostrará ser valiente,\ny se abrirá ante él la senda,\nquien salte sin componendas<r<\nsobre la boca durmiente>>».\n\x0E\x01\x09\x04ÿ\x509Te recomiendo que recuerdes bien\nestas palabras.\n[1]Gracias[2]Otra vez")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf("\x0E\x01\x09\x04\x09\x905La verdad es que mis fieles seguidores\ntambién andan por aquí en busca\ndel tesoro.\n\nSi te pierdes, pídeles que te orienten,\n¿de acuerdo?")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf("\x0E\x01\x09\x04ÿ\x07Je, je, je... ¡Veo que he despertado\ntu interés!\n\n\n¿Estás listo?\n\n\n\n\x0E\x01\x09\x04\x0C\xD0A«<r<Dos estatuas contrapuestas,\nque sostienen sus miradas>>,\ncustodian el gran tesoro\ndel rey de una era pasada.\nDemostrará ser valiente,\ny se abrirá ante él la senda,\nquien salte sin componendas<r<\nsobre la boca durmiente>>».\n\x0E\x01\x09\x04\x09\x109¿Te la has aprendido ya?\n[1]Sí[2]Otra vez")
          					goto flw_78
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
          			goto flw_62
          		}
          	}
          }

          void entrypoint_304_15() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Da luz a los seres alados,\nprimero a los menos dotados.\nAsí en orden tu plegaria alzarás\ny el tesoro del rey recibirás.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x1B\xA02Chaval, los guantes que te di son\nde lo mejorcito de mi colección,\n¡así que cuídalos bien!")
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01¡Hombre, chaval! ¿Qué tal te va con\nlos guantes que te regalé?\n\n\nNo olvides que si pulsas (Z) mientras\nexcavas, podrás observar la situación\nde la superficie.\x0E\x01\x11\x02\x7CD\n\n¡De ese modo sabrás siempre\nlo que se cuece ahí arriba!")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf("\x0E\x01\x09\x04\x1B\xA0DAy... ¿Por qué nunca me sale\nnada bien?")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x1B\xA0E¿Has descubierto la ubicación\ndel tesoro en el mapa?")
          		  case 1:
/*< 88>*/ 			printf("\x0E\x01\x09\x04\x1B\xB12¡¿Qué estás diciendo?! ¡¿Y para qué\nte he dado yo ese mapa entonces?!\n\n\n\x0E\x01\x09\x04\x1B\xA0DMenudo aventurero de pacotilla\nestás tú hecho...")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x09\x04\x0F\xF09Hasta que se vayan todos\nlos monstruos, no deberíamos\nponer un pie ahí.")
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0B¡Eh, oye, chaval! ¿Cómo te va?\nPor lo que veo sigues entero, ¿no?\n\n\n¿Viste a todos esos monstruos\nen la zona de la que te hablé?\n\n\n\x0E\x01\x09\x04\x0E\xE0ANo cabe duda de que buscan algo...")
/*< 93>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_304_01() {
/*< 14>*/ 	start()
/*< 10>*/ 	switch (scene_flags[100 /* 0xD 10 */]) {
          	  case 0:
/*<101>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<105>*/ 			switch (scene_flags[108 /* 0xC 10 */]) {
          			  case 0:
/*<103>*/ 				printf("\x0E\x01\x09\x04\x3311\x120F¡Oye, chaval!\n\n\n\nYa que has hecho que descienda\nel nivel de lava tú solito...\n\n\n\x0E\x01\x09\x04\x3311\x1213¿por qué no haces la gracia completa\ny me liberas de esta cadena?")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf("\x0E\x01\x09\x04\x3311\x1208¡Oooye!\n\n\n\n¡Qué poderío, chaval! ¡Te has ventilado\na esos monstruos sin pestañear!\n\n\n\x0E\x01\x09\x04\x3311\x1213Y ya puestos, ¿por qué no me rescatas?")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x13\x1317¡Ay, madre, qué solano!\n\n\n\n¡Oye, tú, que no soy una atracción\nde feria! ¡Fuera de aquí ahora mismo!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x3313\x1917¡Qué calorcitooo! ¡Dicen que esto es\nlo mejor para las articulaciones!")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf("\x0E\x01\x09\x04\x3316\x1614¡¿Pero qué...?! ¡¿Otro vigilante?!\n\n\n\n¡Eh!\n\n\n\nSiento chafarte, pero me he visto\nen situaciones como esta muchas\nveces ya... ¡Así que no me vas\na hacer hablar!\n\x0E\x01\x09\x04\x3313\x1913¡Y no soy ninguna atracción de feria,\nconque fuera de aquí! ¡Deprisa!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf("\x0E\x01\x06\x02\xFDCDNecio... Yo soy Grahim, ¡Señor\nde los demonios!")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x331B\xA05¡Hala, aquí tienes!\n\n\n\nHan estado guardados un montón\nde tiempo en un cofre, así que\nestán limpísimos.\n\nCuídalos bien, ¿eh? ¡Son muy valiosos!")
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x331B\x502Pues nada, chaval, yo me voy a ir\nlargando. ¡Hasta más ver!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x330B\x208¡Yujuuu! ¡Me has salvado!\n\n\n\n\x0E\x01\x09\x04\x08\xAFFNo sé quién eres ni de dónde vienes,\n¡pero gracias!\n\n\nSupongo que habrás venido en busca\ndel tesoro, ¿no?\n[1]Claro[2]¿Tesoro?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x08\x509¡Ja, ja, ja!\n¿Qué es lo que te han contado?")
          			flw_17:
/*< 17>*/ 			printf("¡La famosa leyenda de la <r<estatua\ndurmiente>>! ¿Verdad que sí?\n\n\nOye, esos <y<guantes>> que llevas están un\npoco raídos, diría yo... ¿De dónde los\nhas sacado?\n\n\x0E\x01\x09\x04\x3308\x90BMira, vas a tener suerte; me has pillado\ngeneroso hoy... Te voy a dar unos de mi\ncolección. ¡Espérame aquí!")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x08\x509¡Ni te molestes en disimular!\n¡Solo puede haber una razón\npor la que estés aquí, chaval!")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf("Por muy maravillosa que sea esa\nespada, no eres más que un simple\nmocoso...<pause14> ¡Y aun así osas desafiarme!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf("\x0E\x01\x09\x04\x3311\x1208¡Oooye!\n\n\n\n¡Qué poderío, chaval! ¡Te has ventilado\na esos monstruos sin pestañear!\n\n\n\x0E\x01\x09\x04\x3311\x1213Y ya puestos, ¿por qué no me rescatas?")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf("Insignificante insecto...\n¡Has provocado mi cólera!\nAlgún día te enviaré al infierno,\nme cueste lo que me cueste...")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf("")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("¡Oooye, chaval!\n\n\n\n¿Cómo están los guantes que te regalé?\n\n\n\nPor cierto, si alguna vez quieres\nobservar la situación en la <r<superficie>>,\n¡pulsa (Z)!\x0E\x01\x11\x02\x7CD\n\n¿Me has oído? ¡(Z) para la <r<superficie>>!\n¡Procura no olvidarlo!\x0E\x01\x11\x02\x7CD")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf("")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Voy a seguir echando un vistazo\npor aquí, ¿vale?\n\n\nAdemás, tengo que ir a darle el parte\nal jefe, porque mi colega ha salido\npor patas.")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x1B\x1A15Como para pelearse contigo, chaval...\n¡Has reventado el muro!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf("\x0E\x01\x09\x04\x1B\xA02En esta sala hay una <r<estancia oculta>>.\n\n\n\nDicen que, detrás de cierta pared,\nhay una habitación escondida.\n\n\n\x0E\x01\x09\x04\x1B\x1E0APero las cuevas cercanas están tan\nllenas de bichos que no hay quien\nse acerque.\n\n<pling>Aunque es posible que haya\nalgún tipo de <r<pasaje secreto>>...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Eso te lo ha dado mi colega, ¿no?\nTranquilo, no pretendo quitártelo.\n\n\n\x0E\x01\x09\x04\x1B\xA02Por cierto, estoy seguro de que\nla información de ese cofre\nte resultará útil.")
          				  case 1:
/*<126>*/ 					printf("(...)")
/*<129>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09¡Hola de nuevo, chaval! Me echabas\nde menos, ¿eh?\n\n\nJe, je, je... me vas a perdonar,\npero he oído toda la conversación.\n\n\nMi colega es un poco bruto, y lamento\nque te haya estado molestando...\n\n\n\x0E\x01\x09\x04\x1B\xC02Sin embargo, todo lo que te contó\nes cierto.\n\n\nNo sé de dónde viene, pero percibo\nuna corriente de aire en esta sala.\n\n\n\x0E\x01\x09\x04\x331B\xA0BSeguro que la información de ese cofre\nte resulta útil.")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf("El puente de la determinación.\nElige tu propia senda\ny avanza con valentía.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Gran santuario\nantiguo")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf("Calculo un 80% de probabilidades\nde que la información de ese moguma\nresulte útil para el \x0E\x01\x12\x04\x00\x01amo.\n\nRecomiendo encarecidamente\nrescatarlo para obtener dicha\ninformación.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf("\x0E\x01\x09\x04\x11\x1213¡Oye, oye! ¡Te lo ruego, chaval!\n¡Tienes que liberarme como sea!\n\n\n\x0E\x01\x09\x04\x16\x1614¡Te aseguro que tengo información\nmuy útil! ¡En serio!")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x11\x1213¡Ajá! ¡Llegas en el momento\njusto, chaval!\n\n\n\x0E\x01\x09\x04\x16\x1614¡No sé quién eres ni de dónde vienes,\npero tienes que liberarme de esta\ncadena enseguida!\n[1]Luego[2](...)")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("\x0E\x01\x09\x04\x11\x130F¡Te recompensaré! ¡Si me liberas,\nte enseñaré el <r<gran secreto >>de esta sala!\n\n\n¡Esto está tan plagado de tesoros que\nhasta da miedo! ¡Mi información es\nmuy valiosa!")
/*< 38>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
          		  case 1:
          			goto flw_43
          		}
          	}
          }

          void entrypoint_304_10() {
/*< 50>*/ 	start()
/*< 49>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 53>*/ 		printf("\x0E\x01\x09\x04\x331B\x2203¡Mira, aquí está! ¡Todito para ti!\n\n\n\n¡No veas la panzada de investigar\nque me pegué para conseguir\ntoda esta información de alto\nsecreto!\nPero esta vez mis pesquisas han dado\nsus frutos, estoy totalmente seguro...\n\n\n¿Estás preparado? En esta sala hay...\n\n\n\n\x0E\x01\x09\x04\x331A\x2008\x0E\x01\x08\x02\x2CD¡Una <r<habitación secreta>>!\n\n\n\n(...)\n\n\n\n\x0E\x01\x09\x04\x331B\x50ABueno, pues ya lo sabes. Lo único\nque espero a cambio es que no\nle cuentes a nadie que me atraparon,\n¿vale?\n[1]Vale[2](...)")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Pues nada, a buscar la puerta...\nPero acuérdate de lo que hemos\nacordado, ¿entendido?")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x3300\x100D¡Desagradecido!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Pues nada, a buscar la puerta...\nPero acuérdate de lo que hemos\nacordado, ¿entendido?\n\nHala, venga, chao...")
          				flw_131:
/*<131>*/ 				printf("\x0E\x01\x08\x02\x2CDOh, oh...")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x3300\x100D¡Pero serás desagradecido! Y yo\nque pensaba que eras de fiar...")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf("\x0E\x01\x09\x04\x330B\xA08¡Síii! ¡Por fin soy liiibre!\n\n\n\n\x0E\x01\x09\x04\x3308\xA09Je, je. Y pensar que te has esforzado\ntanto por rescatarme... ¡Pero qué bobo\neres, chaval!\n\n¿Creías que te iba a dar la información\nsobre el tesoro así como así?\n\n\n\x0E\x01\x09\x04\x3325\x1A06\x0E\x01\x08\x02\x2CD¡Oye, espera un momento!\n\n\n\n\x0E\x01\x09\x04\x08\xA00¡Esos son los guantes favoritos\nde mi colega! ¿Es que sois\namigos, o qué?\n\n[1]Así es[2]Lo salvé")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x3325\x1A00¡E... espera! ¡Tengo algo para ti!\n¡No te vayas!\n\n\n\x0E\x01\x09\x04\x00\x500Vuelvo en un segundo;\n¡no te muevas de ahí!")
/*< 52>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
          		  case 1:
          			goto flw_51
          		}
          	}
          }

          void entrypoint_304_11() {
/*<150>*/ 	start()
/*< 45>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 46>*/ 		printf("\x0E\x01\x09\x04\x11\x1312¡Oooye, chaval! ¡Espera, no te vayas!\n\n\n\n¡Tengo información muy valiosa!\n¡Tienes que librarme de esta cadena!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("\x0E\x01\x09\x04\x11\x1312¡Oooye! ¡No te vayas! ¡No me dejes\naquí, espera!\n\n\n¿Te parece bonito abandonar\nsin compasión a un pobre moguma\ndesvalido como yo? ¡No me ignores!\n\n¡Tengo información muy valiosa\npara ti! ¡Pero antes tienes que\nlibrarme de esta cadena!")
          		goto flw_44
          	}
          }

          void entrypoint_304_12() {
/*<  9>*/ 	start()
/*< 18>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 23>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x3308\x802¡Aaah! ¡¿Otra vez tú?!\n\n\n\n\x0E\x01\x09\x04\x330B\x901¡¿Por qué no te separas de mí?!\n¡No me sigas!")
          		  case 1:
/*< 20>*/ 			printf("¡Uaaah! ¡Un bicho verde horrible!\n\n\n\n\x0E\x01\x09\x04\x332A\x9FF(Ay, ay... ¿cómo habrá conseguido\nseguirme hasta aquí?...)\n\n\n(Ahora tendré que despistarlo...)\n\n\n\n\x0E\x01\x09\x04\x330B\x901Esto... ¡Hola! Je, je... ¿Qué quieres\nde este pobre moguma enterrado?\n\n\nEscaparé sin problema <r<mientras\nno me bloquees>> el paso. ¡No podrás\natraparme, leche!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x331A\x1A0B¡Hay tantos tesoros por encontrar\nque no doy abasto! Verás como\nme vuelvo a pasar la noche entera\nbuscando...")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf("¡Aquí tienes!\n\n\n\n\x0E\x01\x09\x04\x330E\xEFFPor cierto, al fondo de ese precipicio\nhay un montón de monstruos que\nparecen estar buscando algo...\n\n¿Tú también vas para allá?\n¡Pues ten mucho cuidado, chaval!\n\n\n\x0E\x01\x09\x04\x330F\xF0BYo regresaré para informar al jefe\nde la situación. Y ya de paso te abriré\nla puerta, ¿vale? ¡Hala, hasta luego!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x3321\x1601¡Rayos, no hay manera! ¡Está bien,\nme rindo! ¡Puedes cocerme o asarme,\nya me da igual todo!...\n\n\x0E\x01\x09\x04\x331C\x1D05¡Un momento! Esos guantes...\n\n\n\n¿No son esos los guantes favoritos\nde mi colega?\n[1]Me los dio[2]Pues sí")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("\x0E\x01\x09\x04\x331D\x0B¡¿Qué me estás contando?!\n¿De verdad que conoces\na mi colega?\n\nEs que tú me dirás, así enterito\nde verde... ¡cualquiera te habría\ntomado por un monstruo!\n\n(...)\n\n\n\n\x0E\x01\x09\x04\x3324\x2109Venga, hombre, ¡no te me pongas así!\n¡Que era broma!\n\n\nPara compensarte te regalaré algo\nmuy chulo, ¿vale? ¡Espérame aquí\nun segundo!")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

