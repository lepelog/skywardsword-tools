          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x000c0e09>La profecía de los mogmas,\ncazadores de tesoros, dice así:\n\n\n\"<color red<Dos estatuas contrapuestas,\nque sostienen sus miradas>coloroff>,\ncustodian el gran tesoro\ndel rey de una era pasada.\nDemostrará ser valiente,\ny se abrirá ante él la senda,\nquien salte sin temor<color red<\nsobre la boca durmiente>coloroff>\".\n<0x10009:0x00090908>En realidad, no sé qué parte de verdad\nhay en todo esto, pero pienso\naveriguarlo sea como sea.")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<sound 1012><0x10009:0x00ffff02>Ju, ju, ju... La salida, por fin...")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "...<0x10008:0x02cd><0x10009:0x000a5304>¡Uaaargh...!\n\n\n\n<0x10008:0x00cd><0x10009:0x000909ff>¡¿Pero qué...?! ¡No me asustes así!\n¡Creía que eras un monstruo!\n\n\n...<0x10009:0x000b0c07>Pero...\n\n\n\nPor lo que veo, llevas unos <color yellow<guantes\npara cavar>coloroff>, ¿no?\n\n\n<0x10009:0x00ffff0a>¿Quién eres? ¿Y qué estás\nhaciendo aquí?\n[1-]Buscar[2-]Verás...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000c0d05>Ajá... comprendo.\n\n\n\n<0x10009:0x000c0d07>¿Cómo? ¿Preguntas quién soy yo?\n\n\n\n<0x10009:0x0009090a>Pues yo soy <color blue<Aurelio>coloroff>, gran jefe mogma.\n\n\n\nY, además, ¡soy el genial inventor de\nesos maravillosos guantes de cavar\nque tienes ahí!\n\n<0x10009:0x0009090b>¡Juo, juo, juo!")
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "No sé...<0x10009:0x000c0409> Pareces un poco perdido.\n\n\n\n<0x10009:0x00090e08>¿No has oído el rumor?\n\n\n\nEn estas ruinas se oculta un tesoro\nde un valor incalculable.\n\n\nPero de todos los que han querido\nencontrarlo, ninguno ha regresado\njamás.\n\n¡Y no son pocos los que lo\nhan intentado!\n\n\n<0x10009:0x000c0409>Como compañero buscador de tesoros,\nme veo en la obligación de aconsejarte\nque abandones tu búsqueda.\n\n<0x10009:0x00ffff08>¿Piensas continuar igualmente?\n[1-]Así es[2-]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090905>Está bien, entendido... Entonces\nte contaré la profecía de los mogmas,\ncazadores de tesoros.\n\n<0x10009:0x00ffff0b>Es muy famosa... al menos entre\nlos de nuestra especie, claro.\n\n\n<0x10009:0x000c0d0a>¿Estás listo?\n\n\n\n\"<color red<Dos estatuas contrapuestas,\nque sostienen sus miradas>coloroff>,\ncustodian el gran tesoro\ndel rey de una era pasada.\nDemostrará ser valiente,\ny se abrirá ante él la senda,\nquien salte sin temor<color red<\nsobre la boca durmiente>coloroff>\".\n<0x10009:0x00ff0509>Te recomiendo que recuerdes bien\nestas palabras.\n[1-]Gracias[2-]Otra vez")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00090905>La verdad es que mis fieles seguidores\ntambién andan por aquí en busca\ndel tesoro.\n\nSi te pierdes, pídeles que te orienten,\n¿de acuerdo?")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00ff0007>Je, je, je... ¡Veo que he despertado\ntu interés!\n\n\n¿Estás listo?\n\n\n\n<0x10009:0x000c0d0a>\"<color red<Dos estatuas contrapuestas,\nque sostienen sus miradas>coloroff>,\ncustodian el gran tesoro\ndel rey de una era pasada.\nDemostrará ser valiente,\ny se abrirá ante él la senda,\nquien salte sin temor<color red<\nsobre la boca durmiente>coloroff>\".\n<0x10009:0x00090109>¿Te la has aprendido ya?\n[1-]Sí[2-]Otra vez")
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
/*< 66>*/ 	printf(/* textboxtype: 7, unk: 0, line: 63 */ "Da luz a los seres alados,\nprimero a los menos dotados.\nAsí en orden tu plegaria alzarás\ny el tesoro del rey recibirás.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x001b0a02>Chico, los guantes que te di son\nde lo mejorcito de mi colección,\n¡así que cuídalos bien!")
          	  case 1:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x001b0a01>¡Hola, chico! ¿Te están siendo útiles\nlos guantes que te regalé?\n\n\nNo olvides que si oprimes (Z) mientras\nexcavas, podrás observar la situación\nde la superficie.<0x10011:0x07cd>\n\n¡De ese modo sabrás siempre\nlo que está pasando ahí arriba!")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x001b0a0d>Ay... ¿Por qué nunca me sale\nnada bien?")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x001b0a0e>¿Has descubierto la ubicación\ndel tesoro en el mapa?")
          		  case 1:
/*< 88>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x001b0b12>¡¿Qué estás diciendo?! ¡¿Y para qué\nte he dado yo ese mapa entonces?!\n\n\n<0x10009:0x001b0a0d>Todavía estás bastante verde\ncomo aventurero...")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000f0f09>Hasta que se vayan todos\nlos monstruos, no deberíamos\nponer un pie ahí.")
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000f0f0b>¡Eh, oye, chico! ¿Cómo estás?\nPor lo que veo sigues entero, ¿no?\n\n\n¿Viste a todos esos monstruos\nen la zona de la que te hablé?\n\n\n<0x10009:0x000e0e0a>No cabe duda de que buscan algo...")
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
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x3311120f>¡Oye, chico!\n\n\n\nYa que has hecho que descienda\nel nivel de lava tú solito...\n\n\n<0x10009:0x33111213>¿por qué no sigues con los buenos actos\ny me liberas de esta cadena?")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>¡Oooye!\n\n\n\n¡Qué habilidad, chico! ¡Has destruido\na esos monstruos sin pestañear!\n\n\n<0x10009:0x33111213>Y para seguir con los actos heroicos,\n¿por qué no me rescatas?")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00131317>¡Ay, qué calor! ¡Me voy a derretir!\n\n\n\n¡Oye, tú, no soy una atracción de feria!\n¡Fuera de aquí ahora mismo!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x33131917>¡Qué calorcitooo! ¡Dicen que esto es\nlo mejor para las articulaciones!")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x33161614>¡¿Pero qué...?! ¡¿Otro vigilante?!\n\n\n\n¡Eh!\n\n\n\nSiento estropearte la fiesta, pero\nme he visto en situaciones como esta\nmuchas veces... ¡Así que no me vas\na hacer hablar!\n<0x10009:0x33131913>¡Y no soy ninguna atracción de feria,\nconque fuera de aquí! ¡Deprisa!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10006:0xfdcd>Necio... Yo soy Grahim, ¡Señor\nde los demonios!")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x331b0a05>¡Bien, aquí tienes!\n\n\n\nHan estado guardados un montón\nde tiempo en un cofre, así que\nestán limpísimos.\n\nCuídalos bien, ¿eh? ¡Son muy valiosos!")
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x331b0502>Bueno, chico, yo me largo. ¡Adiós!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x330b0208>¡Yujuuu! ¡Me has salvado!\n\n\n\n<0x10009:0x00080aff>No sé quién eres ni de dónde vienes,\n¡pero gracias!\n\n\nSupongo que habrás venido en busca\ndel tesoro, ¿no?\n[1-]Claro[2-]¿Tesoro?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00080509>¡Ja, ja! ¡Te han engañado, amigo!")
          			flw_17:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "¡La famosa leyenda de la <color red<estatua\ndurmiente>coloroff>! ¿Verdad?\n\n\nOye, esos <color yellow<guantes>coloroff> que llevas\nestán bastante usados, ¿no?\n¿De dónde los has sacado?\n\n<0x10009:0x3308090b>Mira, hoy me siento generoso.\nTe voy a dar unos de mi colección.\n¡Espérame aquí!")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00080509>¡No te molestes en disimular!\n¡Solo puede haber una razón\npor la que estés aquí, chico!")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Por muy maravillosa que sea esa\nespada, no eres más que un simple\nmocoso...<pause 20> ¡Y aun así osas desafiarme!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>¡Oooye!\n\n\n\n¡Qué habilidad, chico! ¡Has destruido\na esos monstruos sin pestañear!\n\n\n<0x10009:0x33111213>Y para seguir con los actos heroicos,\n¿por qué no me rescatas?")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "Insignificante insecto...\n¡Has provocado mi cólera!\nAlgún día te enviaré al infierno,\nme cueste lo que me cueste...")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "¡Oooye, chico!\n\n\n\n¿Cómo están los guantes que te regalé?\n\n\n\nPor cierto, si alguna vez quieres\nobservar la situación en la <color red<superficie>coloroff>,\n¡oprime (Z)!<0x10011:0x07cd>\n\n¿Me has oído? ¡Usa (Z) para ver\nla <color red<superficie>coloroff>! ¡No lo olvides!<0x10011:0x07cd>")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x001b0a01>Voy a seguir investigando por aquí,\n¿de acuerdo?\n\n\nAdemás, tengo que ir a contárselo todo\nal jefe, porque mi amigo ha salido\ncorriendo.")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x001b1a15>Eres de armas tomar, chico...\n¡Has reventado el muro!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x001b0a02>En esta sala hay una <color red<estancia oculta>coloroff>.\n\n\n\nDicen que, detrás de cierta pared,\nhay una habitación escondida.\n\n\n<0x10009:0x001b1e0a>Pero las cuevas cercanas están tan\nllenas de monstruos que no hay quien\nse acerque.\n\n<sound 4>Aunque es posible que haya\nalgún tipo de <color red<pasaje secreto>coloroff>...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x001b0a09>Eso te lo ha dado mi amigo, ¿no?\nTranquilo, no pretendo quitártelo.\n\n\n<0x10009:0x001b0a02>Por cierto, estoy seguro de que\nla información de ese cofre\nte resultará útil.")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "...")
/*<129>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x001b0a09>¡Hola de nuevo! Me extrañabas, ¿no?\n\n\n\nJe, je, je... me vas a perdonar,\npero he oído toda la conversación.\n\n\nMi amigo es un poco bruto, y lamento\nque te haya estado molestando...\n\n\n<0x10009:0x001b0c02>Sin embargo, todo lo que te contó\nes cierto.\n\n\nNo sé de dónde viene, pero percibo\nuna corriente de aire en esta sala.\n\n\n<0x10009:0x331b0a0b>Seguro que la información de ese cofre\nte resulta útil.")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf(/* textboxtype: 7, unk: 0, line: 64 */ "El puente de la determinación.\nElige tu propia senda\ny avanza con valentía.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 20, unk: 0, line: 62 */ "Gran santuario\nantiguo")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 2, unk: 0, line: 4 */ "Calculo un 80% de probabilidades\nde que la información de ese mogma\nresulte útil para el <0x10012:0x00000001>amo.\n\nRecomiendo encarecidamente\nrescatarlo para obtener dicha\ninformación.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00111213>¡Oye, oye! ¡Te lo ruego, chico!\n¡Tienes que liberarme como sea!\n\n\n<0x10009:0x00161614>¡Te aseguro que tengo información\nmuy útil! ¡En serio!")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00111213>¡Ajá! ¡Llegas en el momento\njusto, chico!\n\n\n<0x10009:0x00161614>¡No sé quién eres ni de dónde vienes,\npero tienes que liberarme de esta\ncadena enseguida!\n[1-]Después[2-]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x0011130f>¡Te recompensaré! ¡Si me liberas,\nte diré el <color red<gran secreto >coloroff>de esta sala!\n\n\n¡Esto está llenísimo de tesoros!\n¡Mi información es muy valiosa!")
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
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x331b2203>¡Mira, aquí está! ¡Es todo tuyo!\n\n\n\n¡No sabes cuánto tuve que investigar\npara conseguir toda esta información\nde alto secreto!\n\nPero esta vez mis esfuerzos han dado\nsus frutos, estoy totalmente seguro...\n\n\n¿Estás preparado? En esta sala hay...\n\n\n\n<0x10009:0x331a2008><0x10008:0x02cd>¡Una <color red<habitación secreta>coloroff>!\n\n\n\n...\n\n\n\n<0x10009:0x331b050a>Bueno, pues ya lo sabes. Lo único\nque espero a cambio es que no\nle cuentes a nadie que me atraparon,\n¿de acuerdo?\n[1-]Sí[2-]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x331b2200>Ya sabes, a buscar la puerta...\nPero acuérdate de lo que hemos\nacordado, ¿entendido?")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x3300100d>¡Desagradecido!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x331b2200>Ya sabes, a buscar la puerta...\nPero acuérdate de lo que hemos\nacordado, ¿entendido?\n\nBueno, adiós, hasta luego...")
          				flw_131:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10008:0x02cd>Oh, oh...")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x3300100d>¡Serás desagradecido...!\nYo pensaba que eras de fiar...")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x330b0a08>¡Síii! ¡Por fin soy liiibre!\n\n\n\n<0x10009:0x33080a09>Je, je. Y pensar que te has esforzado\ntanto por rescatarme... ¡Qué ingenuo\neres, chico!\n\n¿Creías que te iba a dar la información\nsobre el tesoro así como así?\n\n\n<0x10009:0x33251a06><0x10008:0x02cd>¡Oye, espera un momento!\n\n\n\n<0x10009:0x00080a00>¡Esos son los guantes favoritos de\nmi amigo! ¿Es que lo conoces, o qué?\n[1-]Así es[2-]Lo salvé")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x33251a00>¡E... espera! ¡Tengo algo para ti!\n¡No te vayas!\n\n\n<0x10009:0x00000500>Vuelvo en un segundo;\n¡no te muevas de ahí!")
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
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00111312>¡Oooye, chico! ¡Espera, no te vayas!\n\n\n\n¡Tengo información muy valiosa!\n¡Tienes que librarme de esta cadena!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00111312>¡Oooye! ¡No te vayas! ¡No me dejes\naquí, espera!\n\n\n¿Te parece bien abandonar sin\ncompasión a un pobre mogma\ndesvalido como yo? ¡No me ignores!\n\n¡Tengo información muy valiosa\npara ti! ¡Pero antes tienes que\nlibrarme de esta cadena!")
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
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x33080802>¡Aaah! ¡¿Otra vez tú?!\n\n\n\n<0x10009:0x330b0901>¡¿Por qué no te separas de mí?!\n¡No me sigas!")
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "¡Uaaah! ¡Un monstruo verde horrible!\n\n\n\n<0x10009:0x332a09ff>Ay, ay... ¿cómo habrá conseguido\nseguirme hasta aquí?...\n\n\nAhora tendré que despistarlo...\n\n\n\n<0x10009:0x330b0901>Este... ¡Hola! Je, je... ¿Qué quieres\nde este pobre mogma enterrado?\n\n\nEscaparé sin problema <color red<mientras\nno me bloquees>coloroff> el paso. ¡No podrás\natraparme!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x331a1a0b>¡Hay tantos tesoros por encontrar\nque no doy abasto! Verás como\nme vuelvo a pasar la noche entera\nbuscando...")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "¡Aquí tienes!\n\n\n\n<0x10009:0x330e0eff>Por cierto, al fondo de ese precipicio\nhay un montón de monstruos que\nparecen estar buscando algo...\n\n¿Tú también vas para allá?\n¡Pues ten mucho cuidado, chico!\n\n\n<0x10009:0x330f0f0b>Yo regresaré para informar al jefe\nde la situación. Y ya de paso te abriré\nla puerta, ¿de acuerdo? Bueno, ¡adiós!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x33211601>¡Diantres, no hay manera! ¡Está bien,\nme rindo! ¡Puedes cocerme o asarme,\nya no me importa nada!...\n\n<0x10009:0x331c1d05>¡Un momento! Esos guantes...\n\n\n\n¿No son esos los guantes favoritos\nde mi amigo?\n[1-]Me los dio[2-]Claro")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x331d000b>¡¿Qué estás diciendo?!\n¿De verdad que conoces a mi amigo?\n\n\nEs que viéndote así, todo de verde...\n¡cualquiera te habría tomado por\nun monstruo!\n\n...\n\n\n\n<0x10009:0x33242109>Vamos, no te ofendas. ¡Era broma!\n\n\n\nPara compensarte te regalaré algo\nbuenísimo, ¿de acuerdo? ¡Espérame\naquí un segundo!")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

