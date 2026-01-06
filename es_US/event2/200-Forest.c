          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 2, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Vamos, vete... Lárgate...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Me haré el muerto, a ver si se va...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 2, unk: 1, line: 115 */ "<0x10012:0x00000001>Amo, sugiero comprobar si este\nespécimen se encuentra bien.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 2, unk: 1, line: 116 */ "<0x10012:0x00000001>Amo, seguir adelante sin hacer nada\nreduciría las opciones de supervivencia\ndel espécimen agazapado al 5%.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<439>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 443, 'param3': 46}
/*<443>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 51}
/*<444>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 1, line: 117 */ "")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 1, line: 118 */ "")
          		flw_222:
/*<222>*/ 		printf(/* textboxtype: 2, unk: 1, line: 120 */ "")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<436>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 1, line: 121 */ "")
/*<438>*/ 			set_camera(32, 0)
/*<437>*/ 			printf(/* textboxtype: 2, unk: 1, line: 122 */ "")
          			flw_441:
/*<441>*/ 			set_camera(34, 0)
/*<442>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<643>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 1, line: 123 */ "")
          			goto flw_441
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 1, line: 119 */ "")
          		goto flw_222
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<300>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		wait_frames(30)
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 17}
/*<202>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>¿Cómo? ¡Ahora hay uno verde!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 2, line: 7 */ "<0x10009:0x0000000f>¡Kyu, kyuuu! ¡Ayuda, ayudaaaa!")
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 124, 'param3': 14}
/*<124>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 135, 'param3': 13}
/*<135>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<122>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<137>*/ 		set_camera(9, 0)
          	  case 1:
/*<299>*/ 		printf(/* textboxtype: 1, unk: 2, line: 5 */ "<0x10009:0x0000000b>¿Eh? Qué paz de repente...")
/*<301>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<658>*/ 	start()
/*<659>*/ 	printf(/* textboxtype: 2, unk: 1, line: 160 */ "De ahora en adelante, podré facilitarle\nal <0x10012:0x00000004>amo un análisis detallado de sus\ncombates.")
/*<664>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<665>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 670, 'param3': 32}
/*<670>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 671, 'param3': 17}
/*<671>*/ 	wait_frames(5)
/*<666>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 667, 'param3': 17}
/*<667>*/ 	wait_frames(10)
/*<669>*/ 	set_camera(39, 0)
/*<668>*/ 	printf(/* textboxtype: 2, unk: 1, line: 161 */ "Una vez <color green<fijado el objetivo >coloroff>con (Z),\nsolo hay que oprimir (v) y acudiré a\nla llamada con los resultados de\nmi análisis.<0x10011:0x07cd><0x10011:0x09cd>")
/*<672>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 673, 'param3': 36}
/*<673>*/ 	wait_frames(15)
/*<674>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 2, line: 23 */ "<0x10009:0x00000007>¡Oye, muchas gracias por encontrar\na todos mis compañeros!\n\n\n<0x10009:0x00000013>Siento que tu amiga no estuviera\ncon ninguno de ellos, pero... ¡espero\nque la encuentres pronto!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 153, 'param3': 13}
/*<153>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<154>*/ 				printf(/* textboxtype: 1, unk: 2, line: 22 */ "<0x10009:0x00000007>¡Menos mal! Es un alivio saber que\nel jefe se encuentra a salvo. ¡Y pensar\nque estaba mucho más cerca de lo que\nme imaginaba!\n<0x10009:0x00000013>Pero es una pena que tu amiga no\nestuviera con él...")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Cuando veas al jefe, ¿puedes decirle \nque estoy bien? ¡Seguro que está con\ntu amiga!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 346, 'param3': 31}
/*<346>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "¡Uaaah! ¡Ya está aquí otra vez!")
/*<362>*/ 		set_camera(18, 0)
/*<429>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<430>*/ 		printf(/* textboxtype: 1, unk: 2, line: 10 */ "<0x10008:0x02cd>¡A cubiertooo!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 2, line: 11 */ "<0x10008:0xfecd><0x10006:0xfdcd>...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 2, line: 12 */ "¿Por qué no me has atacado?\nY ahora que lo pienso, también\nle has dado su merecido a esos\nmonstruos rojos...")
/*<379>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<431>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 2, line: 13 */ "<0x10009:0x00000001>Me llamo <color blue<Machi>coloroff>, de la tribu de los\nkyus. Por tu apariencia, pensé que\neras un mal tipo... ¡Pero al final\nresulta que me has ayudado!")
/*<139>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 138, 'param3': 13}
/*<138>*/ 		printf(/* textboxtype: 1, unk: 2, line: 14 */ "<0x10009:0x00000005>Qué curioso. Hace un rato pasó por\naquí otra criatura que se parecía\na ti, pero esta era una chica.\n[1-]¡¿Zelda?![2-]¡¿Quién?!")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>¿Qué es una Zelda? Parecía estar\nen peligro...")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 1, unk: 2, line: 17 */ "<0x10009:0x0000000a>La perseguían los monstruos rojos,\n<sound 4>y tuvo que huir con el <color blue<jefe>coloroff>.")
/*<360>*/ 			set_camera(20, 0)
/*<361>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 1, unk: 2, line: 16 */ "<0x10009:0x00000004>¡No tengo idea! Pero parecía estar\nen peligro...")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 2, unk: 1, line: 124 */ "Detecto una reacción muy fuerte del\nrastreador en esta zona. Recomiendo\nproseguir la búsqueda por aquí.")
          }

          void entrypoint_200_71() {
/*<678>*/ 	start()
/*<679>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 680, 'param3': 51}
/*<680>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 681, 'param3': 16}
/*<681>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 682, 'param3': 17}
/*<682>*/ 	set_camera(40, 0)
/*<683>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 1, unk: 2, line: 43 */ "<0x10009:0x00000007>Muchas gracias por encontrar a todos\nmis compañeros.\n\n\n<0x10009:0x00000013>Lo malo es que... el bosque sigue\nestando lleno de peligros.")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 163, 'param3': 13}
/*<163>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<164>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Me alegra saber que el jefe está bien,\npero no pienso moverme de aquí\nhasta que hayan desaparecido esos\nmonstruos.")
          			  case 1:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 41 */ "<0x10009:0x00000004>Voy a quedarme por aquí un rato.\nSi ves al jefe, dile dónde estoy,\n¿de acuerdo?")
          			}
          		  case 1:
/*<364>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 1, unk: 2, line: 34 */ "¡No me comas! ¡El empacho de kyu\nes mortal, te lo advierto!")
/*<160>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<597>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 1, unk: 2, line: 37 */ "<0x10009:0x00000005>¿Cómo dices? ¿Que el jefe está\npreocupado por mí? ¡Eso significa\nque está a salvo!")
          				flw_209:
/*<209>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>Yo me llamo <color blue<Poli>coloroff>. Si ves al jefe de la\ntribu, ¿podrías decirle que estoy aquí?\n\n\n<0x10009:0x0000000f>Me da un poco de miedo salir con todos\nesos monstruos pululando por ahí.\nHasta que no se vayan, no pienso\nmoverme.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<365>*/ 				set_camera(16, 0)
/*<366>*/ 				entrypoint_200_62();
          			  case 1:
/*<598>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 1, unk: 2, line: 38 */ "<0x10009:0x00000005>La verdad es que no te pareces\ndemasiado a los monstruos...\n\n\n¿Una chica con el cabello rubio?<pause 15>\n<0x10009:0x00000013>Pues no tengo idea. He estado\nescondido todo el rato.")
          				goto flw_209
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 1, line: 125 */ "No hay rastro de enemigos en los\nalrededores, de modo que el kyu\npuede bajar del árbol sin que su\nseguridad corra peligro alguno.\nSin embargo, está tan asustado que es\nincapaz de moverse por sí mismo, por\nlo que será necesario buscar otro medio\nde rescate.\nRecuerdo al <0x10012:0x00000001>amo que puede comprobar\nlas acciones disponibles en cualquier\nmomento a través de (2).<0x10011:0x05cd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 2, line: 55 */ "<0x10009:0x00000007>¡No sabes cuánto te agradezco que\nhayas encontrado a todos mis\ncompañeros!\n\n<0x10009:0x0000000b>Por aquí no hay monstruos, así que\ncreo que estoy a salvo.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<169>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 171, 'param3': 13}
/*<171>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<172>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>¡Qué alivio saber que el jefe también\nestá a salvo!\n\n\n<0x10009:0x00000013>Pero las piernas no me responden\ntodavía, así que será mejor que me\nquede aquí un ratito más.")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 53 */ "<0x10009:0x00000004>Más vale que me quede aquí y descanse\nun rato. Si ves al jefe, ¿te importaría\ndecirle dónde estoy?")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 207, 'param3': 31}
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>¡Qué golpeee!...<pause 30> Bueno, por lo menos\nya estoy abajo...")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 167, 'param3': 13}
/*<167>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 2, line: 49 */ "<0x10009:0x00000005>¿Cómo dices? ¿Que el jefe está\npreocupado por mí? ¡Eso significa\nque se encuentra a salvo!")
          					flw_212:
/*<212>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 211, 'param3': 13}
/*<211>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001>Me llamo <color blue<Menti>coloroff>. Si ves al jefe de la\ntribu, ¿puedes decirle que estoy aquí?\n\n\n<0x10009:0x00000013>Vaya... Todavía me tiemblan las\npiernas...")
/*<165>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<116>*/ 					set_camera(27, 0)
/*<400>*/ 					entrypoint_200_63();
          				  case 1:
/*<166>*/ 					printf(/* textboxtype: 1, unk: 2, line: 50 */ "<0x10009:0x00000005>¿Qué? ¿Una chica? Pues la verdad\nes que no tengo idea.\n\n\n<0x10009:0x00000004>¡Pero seguro que el jefe sabe algo!")
          					goto flw_212
          				}
          			}
          		  case 1:
/*<130>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 204, 'param3': 13}
/*<204>*/ 			set_camera(4, 0)
/*<129>*/ 			printf(/* textboxtype: 1, unk: 2, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>¡Kyuuu!")
/*<111>*/ 			set_camera(5, 0)
/*<131>*/ 			wait_frames(60)
/*<118>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 117, 'param3': 13}
/*<117>*/ 			printf(/* textboxtype: 1, unk: 1, line: 47 */ "<0x10009:0x0000000b>Has derrotado a todos los monstruos\nrojos... Eres un...<pause 15> ¡héroe! ¿Verdad?\n\n\n<0x10009:0x00000013>Yo todavía estoy temblando del miedo\ny no puedo ni moverme. ¿Te importa\nbajarme de aquí?")
/*<119>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*<133>*/ 			set_camera(6, 0)
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<333>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<332>*/ 		printf(/* textboxtype: 2, unk: 1, line: 128 */ "Antes de entrar en el templo del fondo\ndel bosque hacia el que fue Zelda,\naconsejo guardar el progreso actual.")
          	  case 1:
/*<327>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<328>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<330>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<331>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<325>*/ 						printf(/* textboxtype: 2, unk: 1, line: 127 */ "El rastreador no detecta auras de otros\nkyus por la zona.\n\n\nSugiero visitar de nuevo a su jefe para\nobtener información adicional.")
          					  case 1:
          						flw_326:
/*<326>*/ 						printf(/* textboxtype: 2, unk: 1, line: 129 */ "La vista desde este lugar es amplia.\nRecomiendo usar el rastreador aquí\npara buscar a los kyus.")
          					}
          				  case 1:
          					goto flw_326
          				}
          			  case 1:
          				goto flw_326
          			}
          		  case 1:
/*<596>*/ 			printf(/* textboxtype: 2, unk: 1, line: 126 */ "El rastreador apenas detecta rastro\ndel aura de Zelda en esta zona. Sugiero\nbuscar en otro lugar.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<221>*/ 	start()
/*<334>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 1, line: 177 */ "<0x10009:0x00181705>¿Mmm? ¿Qué tal, amiguito?\n¿Querías hablar sobre algo?\n[1-]Cubos[2-]Templo[3]Déjalo")
/*<476>*/ 		switch (choice(3)) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 178 */ "<0x10009:0x00161e04>Cuando la luz que emana de tu espada\nentra en contacto con el cubo, este sale\ndisparado hacia el cielo.\n\nSegún los antiguos escritos, hay\nmuchos cubos repartidos por todo\nel mundo.")
          			flw_631:
/*<631>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<633>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>En los antiguos escritos se dice que\nel edificio de esta zona es conocido\ncomo el templo de la contemplación.\n\nTambién se afirma que es el lugar al\nque debe dirigirse el héroe caído del\ncielo.")
/*<477>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_631
          			  case 1:
/*<478>*/ 				printf(/* textboxtype: 1, unk: 0, line: 180 */ "<0x10009:0x00001707>Ahora que lo pienso, en algún lugar\nme pareció ver una antigua litografía.\n\n\n<0x10009:0x00160b00>No recuerdo bien qué decía...<pause 15> pero\ntengo la corazonada de que explicaba\ncómo acceder al interior del templo.")
          				goto flw_631
          			}
          		  case 2:
/*<632>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<626>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<480>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<521>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 32}
          				flw_479:
/*<479>*/ 				printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00ffff00>Estos cubos están hechos de una\naleación que jamás había visto.\nPor mucho que los golpees, no\npuedes hacerles ni un rasguño.")
/*<494>*/ 				set_camera(-1, 0)
/*<505>*/ 				printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00160b07>\"<color red<La luz de la espada divina>coloroff>\"...\nSeguro que esa frase tiene algún\nsignificado oculto.\n\n<0x10009:0x00001705>Tú no sabrás nada al respecto, ¿no?")
/*<506>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 507, 'param3': 17}
/*<507>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 508, 'param3': 17}
/*<508>*/ 				wait_frames(30)
/*<509>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<514>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<483>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_499:
/*<499>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 500, 'param3': 32}
/*<500>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 501, 'param3': 17}
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 502, 'param3': 17}
/*<502>*/ 					wait_frames(30)
/*<485>*/ 					set_camera(37, 0)
/*<486>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>Fíjate...<pause 15> Se dice que estos artefactos\nlos dejó aquí la mismísima Diosa para\nguiar al héroe caído del cielo.\n\nCreo que los llamaré...<pause 30> ¡<color blue<cubos divinos>coloroff>!")
/*<487>*/ 					set_camera(-1, 0)
/*<488>*/ 					printf(/* textboxtype: 1, unk: 0, line: 168 */ "<0x10009:0x00001e04>¿Qué era lo que decían los antiguos\nescritos?...\n\n\n¡Ah, creo que ya lo recuerdo!<pause 30>\n\"Que la luz de la espada celestial<pause 30>\nilumine el camino de su portador\".")
/*<503>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 504, 'param3': 17}
/*<504>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 489, 'param3': 17}
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x0018170b>Tú llevas una espada... Quizá puedas\nayudarme a descifrar el enigma de\nlos cubos.\n[1-]Bueno[2-]No creo")
/*<491>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_490:
/*<490>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>¿De verdad que me vas a ayudar?\n¡Qué alegría!")
          						flw_493:
/*<493>*/ 						set_camera(37, 0)
          						goto flw_479
          					  case 1:
/*<492>*/ 						printf(/* textboxtype: 1, unk: 0, line: 171 */ "<0x10009:0x0018170c>¡Por favor!...\n[1-]Bueeeno...[2-]Lo siento")
/*<495>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_490
          						  case 1:
/*<496>*/ 							printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00080007>Bueno, bueno. Ya veo que quieres\nalgo a cambio...")
/*<498>*/ 							give_item(161 0xA1);
/*<497>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>¡Ahora no puedes negarte!")
          							goto flw_493
          						}
          					}
          				  case 1:
/*<484>*/ 					printf(/* textboxtype: 1, unk: 0, line: 166 */ "<0x10009:0x00171908>¡Has llegado justo a tiempo!\n\n\n\nAcabo de descubrir una cosa de la que\nse habla en los escritos antiguos.")
          					goto flw_499
          				}
          			}
          		  case 1:
/*<628>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<629>*/ 				printf(/* textboxtype: 1, unk: 0, line: 165 */ "<0x10009:0x00000001>¡Hola, amiguito! ¡Mira, ven aquí!")
/*<630>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<627>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<624>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>¡Hola amiguito! ¡Volvemos\na encontrarnos!\n\n\nNecesito que me hagas un favor...\n¡Ven aquí un momento!")
/*<625>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 2, unk: 1, line: 130 */ "")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 2, line: 64 */ "<0x10009:0x00000013>¡Nos has encontrado a todos! Está\nclaro que te tomas lo de buscar muy\nen serio. Quizá deberías descansar\nun poco los ojos...")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 2, line: 61 */ "<0x10009:0x00000005>¿Cómo me has encontrado? No lo\nentiendo... ¡si me camuflo tan bien\nque casi soy invisible!")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 177, 'param3': 13}
/*<177>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<178>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>¡Y también has encontrado al jefe!\n¡Eres todo un rastreador profesional!")
          			  case 1:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 62 */ "<0x10009:0x00000014>Tu agudeza visual es sorprendente,\npero tengo la impresión de que aún\nno has encontrado al jefe...\n¿Me equivoco?")
          			}
          		  case 1:
/*<345>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 372, 'param3': 31}
/*<372>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>No sé cómo me has encontrado.\n¡Mi escondite era perfecto!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 210, 'param3': 13}
/*<210>*/ 			printf(/* textboxtype: 1, unk: 2, line: 58 */ "<0x10009:0x00000001>Soy <color blue<Tili>coloroff>, y no hay un solo kyu que me\nsupere en lo referente a técnicas de\ncamuflaje. A excepción del jefe, claro.")
/*<637>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<676>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<373>*/ 			set_camera(38, 0)
/*<374>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<303>*/ 	start()
/*<304>*/ 	printf(/* textboxtype: 7, unk: 0, line: 187 */ "")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 100 */ "<0x10009:0x00000002>Esa tal Zelda se dirigió hacia el templo\nque hay al fondo del bosque.")
/*<120>*/ 			printf(/* textboxtype: 1, unk: 1, line: 101 */ "La <color yellow<resortera >coloroff>te servirá para abrirte\npaso hasta lo más profundo de la\nespesura y llegar al templo.\n\n<0x10009:0x00000006>¡Ojalá encuentres pronto a tu amiga!\n¡Juo, juo!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 1, unk: 2, line: 97 */ "<0x10009:0x00000001>¡Utilízame como trampolín para llegar\na tu recompensa!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>¡Muy bien, ahora! ¡Súbete deprisa\nsobre mi espalda y tómalo!")
          				}
          			  case 1:
          				flw_128:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 1, unk: 1, line: 92 */ "<0x10009:0x0000000a>¡Juo, juo, juo! ¿De verdad que están\ntodos a salvo?\n\n\n¡Está claro que tienes un don para\nbuscar cosas! No sé quién eres ni de\ndónde has salido, pero te lo agradezco\nde veras.")
/*<604>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<605>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>¿Cómo? ¿Que tú también estás\nbuscando a alguien?\n\n\nMmm... Pues ahora que lo mencionas,\nsí que recuerdo haber visto hace poco\na una jovencita con el cabello amarillo\npor aquí.")
          					flw_595:
/*<595>*/ 					set_camera(-1, 0)
/*<420>*/ 					printf(/* textboxtype: 1, unk: 1, line: 98 */ "<0x10009:0x00000002>Por algún motivo, esa tal Zelda de la\nque hablas buscaba el templo que hay\nal fondo del bosque.\n\nLe advertí que era un lugar peligroso,\npero no me escuchó y se fue hacia\nallá.")
/*<421>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 422, 'param3': 32}
/*<422>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 423, 'param3': 17}
/*<423>*/ 					wait_frames(15)
/*<424>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 427, 'param3': 17}
/*<427>*/ 					wait_frames(30)
/*<425>*/ 					set_camera(31, 0)
/*<126>*/ 					set_camera(7, 0)
/*<140>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 141, 'param3': 15}
/*<141>*/ 					make_actor_do_something(3, 0)
/*<125>*/ 					printf(/* textboxtype: 1, unk: 1, line: 94 */ "<0x10009:0x00000003>Si continúas por aquella senda,\nllegarás a un templo.<pause 15> Pero está todo\nlleno de monstruos, así que deberías\nir con mucho cuidado.")
/*<428>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 144, 'param3': 17}
/*<144>*/ 					set_camera(8, 0)
/*<145>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 146, 'param3': 15}
/*<146>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 309, 'param3': 17}
/*<309>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 426, 'param3': 17}
/*<426>*/ 					wait_frames(15)
/*<127>*/ 					printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>¡Ah, lo olvidaba!\n\n\n\nComo recompensa por encontrar a mis\nfieles amigos, quiero darte algo.\n\n\n<0x10009:0x00000008>A ver... espera un momento...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<606>*/ 					printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10009:0x00000009>¡Y, qué casualidad, acabo de recordar\nhacia dónde se fue aquella muchacha!")
          					goto flw_595
          				}
          			}
          		}
          	  case 1:
/*<147>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<148>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<149>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<150>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<409>*/ 						wait_frames(20)
/*<408>*/ 						set_camera(29, 0)
/*<677>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_410:
/*<410>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<526>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_128
          					  case 1:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<592>*/ 						switch (choice(2)) {
          						  case 0:
/*<594>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<590>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_593:
/*<593>*/ 							set_camera(29, 0)
/*<591>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<152>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_410
          						  case 1:
/*<675>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_593
          						}
          					}
          				  case 1:
/*<179>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<181>*/ 						printf(/* textboxtype: 1, unk: 1, line: 72 */ "<0x10009:0x00000003>¿Dices que Machi, Poli y Menti están\na salvo? ¡Fantástico!\n\n\nPor desgracia, todavía queda <color red<un\n>coloroff>compañero desaparecido. ¿Podrías\nasegurarte de que se encuentra bien?\n\nLe gusta mucho ocultarse entre la\nhierba de la zona, así que yo empezaría\npor ahí.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<530>*/ 						switch (choice(2)) {
          						  case 0:
/*<532>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_531:
/*<531>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<529>*/ 							printf(/* textboxtype: 1, unk: 1, line: 71 */ "<0x10009:0x00000003>Ajá... ¡Así que Machi, Poli y Menti\nestán bien! Es una noticia excelente.\n\n\nPero mientras esos monstruos sigan\nandando a sus anchas por el bosque,\nno pienso moverme de aquí.")
/*<533>*/ 							set_camera(-1, 0)
/*<534>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_411:
/*<411>*/ 								printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x00000008>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <color red<el compañero>coloroff> que\nfalta se encuentra bien?\n\nLe gusta mucho ocultarse entre la\nmaleza de la zona, así que yo\nempezaría por ahí.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          								flw_180:
/*<180>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<418>*/ 								set_camera(30, 0)
/*<419>*/ 								entrypoint_200_61();
          							  case 1:
/*<535>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_411
          							}
          						  case 1:
          							goto flw_531
          						}
          					}
          				}
          			  case 1:
/*<182>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<183>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<186>*/ 						printf(/* textboxtype: 1, unk: 1, line: 75 */ "<0x10009:0x00000003>¿Cómo? ¿Dices que Machi, Poli y Tili\nestán a salvo? ¡Fantástico!\n\n\nPor desgracia, todavía queda <color red<un\n>coloroff>compañero desaparecido. ¿Podrías\nasegurarte de que se encuentra bien?\n\nSu pasión es trepar lo más alto posible,\nasí que yo empezaría por mirar en las\ncopas de los árboles.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<539>*/ 						switch (choice(2)) {
          						  case 0:
/*<541>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<537>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_540:
/*<540>*/ 							set_camera(29, 0)
/*<538>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<536>*/ 							printf(/* textboxtype: 1, unk: 1, line: 74 */ "<0x10009:0x00000003>Ah... así que Machi, Poli y Tili\nestán a salvo, ¿no? ¡Excelente!\n\n\nPero mientras esos monstruos sigan\nmerodeando por el bosque, no podré\ndescansar tranquilo.")
/*<542>*/ 							set_camera(-1, 0)
/*<543>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_412:
/*<412>*/ 								printf(/* textboxtype: 1, unk: 1, line: 76 */ "<0x10009:0x00000008>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <color red<el compañero>coloroff> que\nfalta se encuentra bien?\n\nSu pasión es trepar lo más alto posible,\nasí que yo empezaría por mirar en las\ncopas de los árboles.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          								goto flw_180
          							  case 1:
/*<544>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_412
          							}
          						  case 1:
          							goto flw_540
          						}
          					}
          				  case 1:
/*<184>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<185>*/ 						printf(/* textboxtype: 1, unk: 1, line: 78 */ "<0x10009:0x00000003>Me alegro de que Machi y Poli estén\nsanos y salvos, pero sigo preocupado\npor los demás.\n\n¿Podrías averiguar si mis otros <color red<dos\n>coloroff>compañeros se encuentran bien?\n\n\n<0x10009:0x00000008>Creo que tu amiga se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<548>*/ 						switch (choice(2)) {
          						  case 0:
/*<550>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<546>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_549:
/*<549>*/ 							set_camera(29, 0)
/*<547>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<545>*/ 							printf(/* textboxtype: 1, unk: 1, line: 77 */ "<0x10009:0x00000003>Mmm... entendido. Es un alivio saber\nque Machi y Poli están bien.\n\n\nPero mientras esos monstruos sigan\nandando a sus anchas por el bosque,\nno podré descansar tranquilo...")
/*<551>*/ 							set_camera(-1, 0)
/*<552>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_413:
/*<413>*/ 								printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00000002>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <color red<dos >coloroff>compañeros\nque faltan se encuentran bien?\n\nSeguro que en cuanto los encuentres\nrecordaré hacia dónde se fue tu amiga.")
          								goto flw_180
          							  case 1:
/*<553>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_413
          							}
          						  case 1:
          							goto flw_549
          						}
          					}
          				}
          			}
          		  case 1:
/*<187>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<188>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<189>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<197>*/ 						printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10009:0x00000003>¿Cómo? ¿Dices que Machi, Menti y Tili\nse encuentran bien? ¡Fantástico!\n\n\nPor desgracia, todavía queda <color red<un\n>coloroff>compañero desaparecido. ¿Podrías\nasegurarte de que está a salvo?\n\nEs un maestro del camuflaje. Lo que\nmejor hace es ocultarse entre los\narbustos, así que yo empezaría a\nbuscar por ahí.\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de tu\namiga...")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<557>*/ 						switch (choice(2)) {
          						  case 0:
/*<559>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<555>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_558:
/*<558>*/ 							set_camera(29, 0)
/*<556>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<554>*/ 							printf(/* textboxtype: 1, unk: 1, line: 80 */ "<0x10009:0x00000003>Ajá... así que Machi, Menti y Tili están\na salvo. ¡No sabes cómo me alegro!\n\n\nPero mientras esos monstruos sigan\nsueltos por el bosque, no podré dormir\ntranquilo...")
/*<560>*/ 							set_camera(-1, 0)
/*<561>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_414:
/*<414>*/ 								printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00000008>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <color red<el >coloroff><color red<compañero >coloroff>que\nfalta se encuentra bien?\n\nEs un maestro del camuflaje. Lo que\nmejor hace es ocultarse entre los\narbustos, así que yo empezaría a\nbuscar por ahí.\n<0x10009:0x00000002>En cuanto lo encuentres, seguro que\nrecuerdo qué pasó con la jovencita que\nandas buscando...")
          								goto flw_180
          							  case 1:
/*<562>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_414
          							}
          						  case 1:
          							goto flw_558
          						}
          					}
          				  case 1:
/*<190>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<191>*/ 						printf(/* textboxtype: 1, unk: 1, line: 84 */ "<0x10009:0x00000003>Me alegra saber que Machi y Menti\nse encuentran a salvo, pero sigo muy\npreocupado por los demás.\n\n¿Te importaría buscar a los <color red<dos\n>coloroff>que faltan?\n\n\n<0x10009:0x00000008>Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<566>*/ 						switch (choice(2)) {
          						  case 0:
/*<568>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<564>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_567:
/*<567>*/ 							set_camera(29, 0)
/*<565>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<563>*/ 							printf(/* textboxtype: 1, unk: 1, line: 83 */ "<0x10009:0x00000003>Mmm... Así que Machi y Menti están\nbien, ¿verdad?\n\n\nExcelentes noticias, pero mientras esos\nmonstruos sigan andando a sus anchas\npor el bosque, no podré descansar\ntranquilo.")
/*<569>*/ 							set_camera(-1, 0)
/*<570>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_415:
/*<415>*/ 								printf(/* textboxtype: 1, unk: 1, line: 85 */ "<0x10009:0x00000002>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <color red<dos >coloroff>compañeros\nque faltan se encuentran bien?\n\nEn cuanto los encuentres, seguro que\nrecuerdo qué pasó con la jovencita\nque estás buscando...")
          								goto flw_180
          							  case 1:
/*<571>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_415
          							}
          						  case 1:
          							goto flw_567
          						}
          					}
          				}
          			  case 1:
/*<192>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<196>*/ 						printf(/* textboxtype: 1, unk: 1, line: 87 */ "<0x10009:0x00000003>No sabes cómo me alegro de que Machi\ny Tili estén a salvo, pero sigo muy\npreocupado por los demás.\n\nSi no es mucho pedir, ¿podrías\nbuscar a mis otros <color red<dos >coloroff>compañeros?\n\n\n<0x10009:0x00000008>Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<219>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<575>*/ 						switch (choice(2)) {
          						  case 0:
/*<577>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<573>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_576:
/*<576>*/ 							set_camera(29, 0)
/*<574>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<572>*/ 							printf(/* textboxtype: 1, unk: 1, line: 86 */ "<0x10009:0x00000003>Mmm... ajá, así que Machi y Tili están\nbien. No sabes cómo me alegra oírlo.\n\n\nPero mientras esos monstruos sigan\nsueltos por el bosque, no podré dormir\ntranquilo.")
/*<578>*/ 							set_camera(-1, 0)
/*<579>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_416:
/*<416>*/ 								printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000002>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <color red<dos >coloroff>compañeros\nque faltan se encuentran bien?\n\nEn cuanto los encuentres, seguro que\nrecuerdo qué pasó con la jovencita\nque andas buscando...")
          								goto flw_180
          							  case 1:
/*<580>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_416
          							}
          						  case 1:
          							goto flw_576
          						}
          					}
          				  case 1:
/*<194>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf(/* textboxtype: 1, unk: 1, line: 90 */ "<0x10009:0x00000003>¿Dices que Machi está a salvo? Pero\n¿y los otros? Sigo muy preocupado\npor ellos.\n\nSi no es mucho pedir, ¿podrías buscar\na los <color red<tres >coloroff>que faltan?\n\n\n<0x10009:0x00000008>Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<220>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<584>*/ 						switch (choice(2)) {
          						  case 0:
/*<586>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<582>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_585:
/*<585>*/ 							set_camera(29, 0)
/*<583>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<581>*/ 							printf(/* textboxtype: 1, unk: 1, line: 89 */ "<0x10009:0x00000003>Vaya, así que has visto a Machi y está\na salvo... ¡Estupenda noticia!\n\n\nPero mientras esos monstruos sigan\nmerodeando por el bosque, no podré\ndormir tranquilo.")
/*<587>*/ 							set_camera(-1, 0)
/*<588>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_417:
/*<417>*/ 								printf(/* textboxtype: 1, unk: 1, line: 91 */ "<0x10009:0x00000002>Si no es mucha molestia, ¿podrías\nlocalizar a los <color red<tres >coloroff>compañeros que\nfaltan y asegurarte de que están bien?\n\nEn cuanto me confirmes que están\ntodos sanos y salvos, seguro que podré\nrecordar qué fue de tu amiguita...")
          								goto flw_180
          							  case 1:
/*<589>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_417
          							}
          						  case 1:
          							goto flw_585
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 1, line: 131 */ "<0x10012:0x00000004>Amo <heroname>, tengo algunos\ndatos sobre el uso de la <color yellow<resortera>coloroff>.\n\n\n<color green<Oprimiendo brevemente >coloroff>(B), el <0x10012:0x00000001>amo\npuede volver a sacarla cuando lo desee,\nya que es el último objeto que ha usado.<0x10011:0x01cd>\n\nEn caso de dificultad para disparar con\nprecisión, se recomienda apuntar hacia\nel medio de la pantalla y oprimir (v)\npara <color green<centrar el punto de mira>coloroff>.<0x10011:0x09cd>")
          }

          void entrypoint_200_92() {
/*<305>*/ 	start()
/*<306>*/ 	printf(/* textboxtype: 7, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<336>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 2, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Amo, hemos llegado al <color blue<bosque\nde Farone>coloroff>.")
/*<355>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 205, 'param3': 13}
/*<205>*/ 	set_camera(3, 0)
/*<602>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 603, 'param3': 13}
/*<603>*/ 	wait_frames(60)
          }

          void entrypoint_200_59() {
/*<206>*/ 	start()
/*<621>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<623>*/ 		printf(/* textboxtype: 2, unk: 1, line: 133 */ "<0x10012:0x00000004>Amo <heroname>, hay un 80% de\nprobabilidades de que la llama esté\nen el lago.")
          	  case 1:
/*<622>*/ 		printf(/* textboxtype: 2, unk: 1, line: 132 */ "<0x10012:0x00000004>Amo <heroname>, hay un 80% de\nprobabilidades de que la llama \nesté detrás de esa puerta.\n\nDeduzco que el kyu ermitaño se refería\nal <color red<rayo celestial >coloroff>cuando hablaba del\npoder de la Diosa necesario para\ncompletar el dibujo.\nAconsejo situarse frente a la puerta\ne invocar el rayo celestial para <color green<trazar\nla parte del dibujo que falta>coloroff>.")
/*<655>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<338>*/ 	start()
/*<339>*/ 	printf(/* textboxtype: 2, unk: 1, line: 109 */ "<0x10005:0x004b0000>La gran cantidad de agua que hay\nen la zona favorece el crecimiento\nde la vegetación. Ese inmenso árbol\nde ahí es un buen ejemplo.")
          }

          void entrypoint_200_93() {
/*<445>*/ 	start()
/*<446>*/ 	printf(/* textboxtype: 1, unk: 0, line: 163 */ "<0x10009:0x00000001>¡Hola, amiguito! ¡Volvemos\na encontrarnos!")
/*<513>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<132>*/ 	start()
/*<213>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<601>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 660, 'param3': 13}
/*<660>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<662>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<661>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<600>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<340>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 2, unk: 1, line: 110 */ "<0x10005:0x004b0000>En un entorno natural tan favorable,\nnumerosas especies han encontrado\nsu hábitat.")
          }

          void entrypoint_200_94() {
/*<447>*/ 	start()
/*<453>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 455, 'param3': 46}
/*<455>*/ 	set_camera(35, 0)
/*<457>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<516>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 1, unk: 0, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n¿Es que no vas a ayudarme a descifrar\nel enigma de los cubos divinos?")
          			flw_465:
/*<465>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 463, 'param3': 49}
/*<463>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 464, 'param3': 15}
/*<464>*/ 			set_camera(36, 0)
/*<511>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<517>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\nTengo un favor que pedirte.")
          			goto flw_465
          		}
          	  case 1:
/*<462>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<481>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<461>*/ 		printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n<0x10009:0x00170600>Sé que me has visto...<pause 15> ¿Y aun así me\nignoras? ¿Es que te caigo mal?\n[1-]Lo siento[2-]Sí")
/*<459>*/ 		switch (choice(2)) {
          		  case 0:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0, line: 184 */ "<0x10009:0x00161e07>Así que tienes prisa porque estás\nbuscando a una jovencita. Tranquilo,\nque no te entretendré mucho tiempo;\nte lo prometo.")
          			goto flw_465
          		  case 1:
/*<460>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Ya veo... Es el sino de todos los\ngrandes exploradores. Casi nadie nos\ncomprende.\n\nPero te prometo que no te entretendré\ndemasiado tiempo, tranquilo.")
          			goto flw_465
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 227, 'param3': 13}
/*<227>*/ 	wait_frames(27)
/*<432>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 49}
/*<224>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 226, 'param3': 13}
/*<226>*/ 	make_actor_do_something(0, 0)
/*<234>*/ 	wait_frames(24)
/*<433>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 435, 'param3': 50}
/*<435>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 1, line: 134 */ "<0x10012:0x00000004>Amo <heroname>, acabamos de\nobtener nuevos datos sobre el paradero\nde Zelda. Procedo a analizarlos.\n\nSegún he entendido, fue atacada por\nmonstruos pero consiguió escapar.<pause 15>\nSin embargo, su situación parece ser\naún de grave peligro.")
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 358, 'param3': 30}
/*<358>*/ 	wait_frames(15)
/*<335>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<155>*/ 	printf(/* textboxtype: 2, unk: 1, line: 135 */ "<sound 4>He registrado la ubicación del kyu\nMachi. Recomiendo consultarla en\nel mapa.")
/*<159>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 359, 'param3': 34}
/*<359>*/ 	wait_frames(15)
/*<225>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 302, 'param3': 13}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	printf(/* textboxtype: 2, unk: 1, line: 136 */ "Considero que el contacto establecido\nentre estas criaturas y Zelda es la causa\nde la reacción del rastreador ante su\nsu presencia.\nEl jefe de los kyus huyó con Zelda,\npor lo que calculo que la probabilidad\nde que el rastreador también reaccione\nante él es del 85%.\nRecomiendo seguir utilizando el\nrastreador continuamente para\naveriguar el paradero de Zelda.")
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 434, 'param3': 36}
/*<434>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 228, 'param3': 17}
/*<228>*/ 	wait_frames(21)
/*<231>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 277, 'param3': 13}
/*<277>*/ 	wait_frames(30)
/*<363>*/ 	set_camera(19, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 230, 'param3': 17}
/*<230>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 229, 'param3': 13}
/*<229>*/ 	printf(/* textboxtype: 1, unk: 2, line: 20 */ "<0x10009:0x0000000d>¡Buf! Qué susto... Tienes unos amigos\nbastante raros, ¿lo sabías?")
/*<523>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 522, 'param3': 13}
/*<522>*/ 	printf(/* textboxtype: 1, unk: 2, line: 19 */ "<0x10009:0x00000007>Se te ve ansioso por encontrar a tu\namiga y al <color blue<jefe>coloroff>. Cuando lo hagas,\n<color red<dile que estoy >coloroff><color red<a salvo>coloroff>, ¿de acuerdo?\n\n<0x10009:0x00000005>¡Y anímate! Seguro que tu amiga\nestá sana y salva con el jefe.")
/*<618>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<619>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<142>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>Úsala para abrirte paso hacia el templo\nque hay al fondo del bosque. ¡Ya verás\ncomo te resulta útil!")
/*<380>*/ 	set_camera(21, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 382, 'param3': 15}
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 383, 'param3': 32}
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 384, 'param3': 17}
/*<384>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 385, 'param3': 17}
/*<385>*/ 	set_camera(22, 0)
/*<388>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<390>*/ 		printf(/* textboxtype: 1, unk: 1, line: 104 */ "<0x10009:0x00000008>Vamos, intenta darle a esa li...<pause 15>\n¡Eh!\n\n\nAprendes rápido, ¿eh?<pause 15> Mejor,\nasí nos ahorramos las explicaciones.")
          		flw_391:
/*<391>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Oprime (B) para preparar la resortera\ny (A) para disparar.<0x10011:0x01cd>\n\n\nSi te quedas sin munición, siempre\npuedes <color green<recoger semillas >coloroff>de los árboles.")
/*<386>*/ 		set_camera(23, 0)
/*<394>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 393, 'param3': 17}
/*<393>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<387>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 392, 'param3': 17}
/*<392>*/ 			printf(/* textboxtype: 1, unk: 1, line: 106 */ "<0x10009:0x00000006>¡Ojalá encuentres pronto a tu amiga!\n¡Juo, juo!")
/*<398>*/ 			set_camera(25, 0)
/*<399>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<395>*/ 			printf(/* textboxtype: 1, unk: 1, line: 106 */ "<0x10009:0x00000006>¡Ojalá encuentres pronto a tu amiga!\n¡Juo, juo!")
/*<396>*/ 			set_camera(24, 0)
/*<397>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<389>*/ 		printf(/* textboxtype: 1, unk: 1, line: 103 */ "<0x10009:0x00000008>Mira, intenta darle a esa liana\nenroscada de ahí.")
          		goto flw_391
          	}
          }

          void entrypoint_200_43() {
/*<342>*/ 	start()
/*<343>*/ 	printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10005:0x004b0000>Infiero que Zelda se encuentra\nen algún lugar de este bosque.\n\n\n<0x10005:0x004b0000>Recomiendo usar el rastreador para\nlocalizarla.")
/*<644>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<645>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<450>*/ 	start()
/*<454>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 456, 'param3': 46}
/*<456>*/ 	set_camera(35, 0)
/*<466>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<519>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<518>*/ 			printf(/* textboxtype: 1, unk: 0, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n¿Es que no vas a ayudarme a descifrar\nel enigma de los cubos divinos?")
          			flw_474:
/*<474>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 472, 'param3': 49}
/*<472>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 473, 'param3': 15}
/*<473>*/ 			set_camera(36, 0)
/*<512>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<520>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\nTengo un favor que pedirte.")
          			goto flw_474
          		}
          	  case 1:
/*<471>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<482>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<470>*/ 		printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n<0x10009:0x00170600>Sé que me has visto...<pause 15> ¿Y aun así me\nignoras? ¿Es que te caigo mal?\n[1-]Lo siento[2-]Sí")
/*<468>*/ 		switch (choice(2)) {
          		  case 0:
/*<467>*/ 			printf(/* textboxtype: 1, unk: 0, line: 184 */ "<0x10009:0x00161e07>Así que tienes prisa porque estás\nbuscando a una jovencita. Tranquilo,\nque no te entretendré mucho tiempo;\nte lo prometo.")
          			goto flw_474
          		  case 1:
/*<469>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Ya veo... Es el sino de todos los\ngrandes exploradores. Casi nadie nos\ncomprende.\n\nPero te prometo que no te entretendré\ndemasiado tiempo, tranquilo.")
          			goto flw_474
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<651>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<200>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 405, 'param3': 51}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 201, 'param3': 17}
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 199, 'param3': 16}
/*<199>*/ 	printf(/* textboxtype: 2, unk: 1, line: 137 */ "Lamentablemente, Zelda ya no está\ncon el jefe.<pause 15> Aun así, es posible que\neste disponga de información útil\npara la misión.\nLa probabilidad de que ayudar al jefe a\nbuscar a los kyus desaparecidos sirva\npara encontrar a Zelda es del 85%.\n\nHe añadido <sound 4><color red<el aura de los kyus >coloroff>como\nobjetivo de rastreo.")
/*<653>*/ 	open_dowsing_wheel(1)
/*<654>*/ 	printf(/* textboxtype: 2, unk: 1, line: 138 */ "¿Necesita el <0x10012:0x00000001>amo una explicación sobre\ncómo cambiar el objetivo de rastreo?\n[1-]Sí[2]No")
/*<636>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_524:
/*<524>*/ 		printf(/* textboxtype: 2, unk: 1, line: 139 */ "Al oprimir (C), se mostrarán los\ndistintos objetivos de rastreo.<0x10011:0x06cd>\n\n\nPara elegir uno, basta con apuntar\nhacia él con el control y soltar (C)\ncuando el cursor esté encima.<0x10011:0x06cd>\n\nSi no se desea rastrear ningún objetivo,\nsolo hay que elegir la <color green<vista >coloroff><color green<subjetiva >coloroff>y\nsoltar (C).\n[1-]Otra vez[2]Entendido")
/*<525>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_524
          		  case 1:
          			flw_652:
/*<652>*/ 			printf(/* textboxtype: 2, unk: 1, line: 140 */ "La posición de los kyus que el <0x10012:0x00000001>amo\nencuentre quedará registrada en el\nmapa y sus auras desaparecerán como\nobjetivos del rastreador.\nConsidero que el <0x10012:0x00000001>amo ya está listo para\nempezar a buscar a los kyus.")
/*<648>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<649>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 650, 'param3': 36}
/*<650>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_652
          	}
          }

          void entrypoint_200_44() {
/*<356>*/ 	start()
/*<357>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<451>*/ 	start()
/*<452>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>¡Uoooh! ¡El cubo ha salido volando!\n\n\n\n<0x10009:0x00131b00>Por lo visto, ha reaccionado a la luz\nde tu espada...\n\n\n<0x10009:0x00001b05>¿Adónde crees que habrá ido?\nEl enigma se complica aún más...\n\n\n<0x10009:0x00161e00>Según los antiguos escritos, hay cubos\nrepartidos por todo el mundo.\n\n\n<0x10009:0x00001700>Estaría bien que los buscaras en tus\nviajes. Y, si averiguas algo sobre ellos,\n¡no te olvides de venir a contármelo!")
/*<510>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<235>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<236>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<244>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<245>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<246>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<241>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 287, 'param3': 51}
/*<287>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 285, 'param3': 17}
/*<285>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 286, 'param3': 13}
/*<286>*/ 						wait_frames(27)
/*<243>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 240, 'param3': 16}
/*<240>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
/*<242>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          						flw_288:
/*<288>*/ 						wait_frames(21)
/*<368>*/ 						set_camera(17, 0)
/*<367>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 371, 'param3': 17}
/*<371>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 370, 'param3': 17}
/*<370>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 369, 'param3': 13}
/*<369>*/ 						printf(/* textboxtype: 1, unk: 2, line: 40 */ "<0x10009:0x00000014>¡Uaaargh! ¡No me asustes así!")
/*<406>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_238:
/*<238>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 284, 'param3': 51}
/*<284>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 282, 'param3': 17}
/*<282>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 283, 'param3': 13}
/*<283>*/ 						wait_frames(27)
/*<239>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 612, 'param3': 16}
/*<612>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<237>*/ 							printf(/* textboxtype: 2, unk: 1, line: 141 */ "He marcado <sound 4>la localización del kyu Poli\nen el mapa. Sin embargo, el rastreador\ntodavía percibe señales de otros kyus.")
          							flw_308:
/*<308>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 599, 'param3': 17}
/*<599>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          							goto flw_288
          						  case 1:
/*<613>*/ 							printf(/* textboxtype: 2, unk: 1, line: 142 */ "He marcado <sound 4>la localización del kyu Poli\nen el mapa. Por desgracia, parece que\nZelda no se encuentra con él.")
          							goto flw_308
          						}
          					}
          				  case 1:
          					goto flw_238
          				}
          			  case 1:
          				goto flw_238
          			}
          		  case 1:
          			goto flw_238
          		}
          	  case 1:
          		goto flw_238
          	}
          }

          void entrypoint_200_10() {
/*<310>*/ 	start()
/*<607>*/ 	set_camera(-1, 0)
/*<608>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 609, 'param3': 40}
/*<609>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 610, 'param3': 13}
/*<610>*/ 	wait_frames(60)
/*<350>*/ 	set_camera(15, 0)
/*<348>*/ 	wait_frames(75)
/*<353>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 354, 'param3': 24}
/*<354>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 349, 'param3': 13}
/*<349>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 351, 'param3': 14}
/*<351>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 313, 'param3': 13}
/*<313>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "<0x10009:0x00000007>¡Hola, soy yo! ¿Has encontrado ya\na tu amiga?\n[1-]¿Quién eres?[2-]Aún no...")
/*<314>*/ 	switch (choice(2)) {
          	  case 0:
/*<317>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 315, 'param3': 13}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "<0x10009:0x00000013>¿Cómo? ¿Ya te has olvidado de mí?\nSoy yo, <color blue<Machi>coloroff>... Snif.")
          		flw_319:
/*<319>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 320, 'param3': 13}
/*<320>*/ 		printf(/* textboxtype: 1, unk: 2, line: 28 */ "<0x10009:0x00000007>¡No sabes lo contento que estoy por\nhaberme reunido de nuevo con todos\nmis compañeros! ¡Y todo gracias a ti!")
/*<312>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 318, 'param3': 13}
/*<318>*/ 		printf(/* textboxtype: 1, unk: 2, line: 29 */ "<0x10009:0x00000005>¡Espero que encuentres pronto a tu\namiga! ¡Cuídate mucho!")
/*<321>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 322, 'param3': 14}
/*<322>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<344>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<311>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 316, 'param3': 13}
/*<316>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>Vaya, pues lo siento... Pero bueno,\nal menos ya sabes hacia dónde fue...\nAlgo es algo, ¿no?")
          		goto flw_319
          	}
          }

          void entrypoint_200_63() {
/*<247>*/ 	start()
/*<248>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<249>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<258>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<259>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<260>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<255>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 294, 'param3': 35}
/*<294>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 292, 'param3': 17}
/*<292>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 293, 'param3': 13}
/*<293>*/ 						wait_frames(28)
/*<257>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 254, 'param3': 16}
/*<254>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
/*<256>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          						flw_295:
/*<295>*/ 						wait_frames(21)
/*<402>*/ 						set_camera(26, 0)
/*<401>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 298, 'param3': 17}
/*<298>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 						printf(/* textboxtype: 1, unk: 2, line: 52 */ "<0x10009:0x0000000d>Creía que era otro de esos monstruos...\n¡No me asustes así!")
/*<611>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<620>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_251:
/*<251>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 291, 'param3': 35}
/*<291>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 289, 'param3': 17}
/*<289>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 290, 'param3': 13}
/*<290>*/ 						wait_frames(28)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 614, 'param3': 16}
/*<614>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<250>*/ 							printf(/* textboxtype: 2, unk: 1, line: 143 */ "He marcado <sound 4>la localización del kyu\nMenti en el mapa. Sin embargo, el\nrastreador todavía percibe señales\nde otros kyus.")
          							flw_307:
/*<307>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 252, 'param3': 17}
/*<252>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          							goto flw_295
          						  case 1:
/*<615>*/ 							printf(/* textboxtype: 2, unk: 1, line: 144 */ "He marcado <sound 4>la localización del kyu\nMenti en el mapa. Por desgracia,\nparece que Zelda no se encuentra\ncon él.")
          							goto flw_307
          						}
          					}
          				  case 1:
          					goto flw_251
          				}
          			  case 1:
          				goto flw_251
          			}
          		  case 1:
          			goto flw_251
          		}
          	  case 1:
          		goto flw_251
          	}
          }

          void entrypoint_200_64() {
/*<261>*/ 	start()
/*<262>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<263>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<269>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<270>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<271>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<267>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 268, 'param3': 51}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 404, 'param3': 16}
/*<404>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
          						flw_265:
/*<265>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 233, 'param3': 36}
/*<233>*/ 						wait_frames(21)
/*<376>*/ 						set_camera(17, 0)
/*<375>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 378, 'param3': 17}
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 377, 'param3': 17}
/*<377>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 174, 'param3': 13}
/*<174>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<175>*/ 							printf(/* textboxtype: 1, unk: 2, line: 59 */ "<0x10009:0x00000005>¿Dices que has visto al jefe?\nBien, me alegro de que esté a salvo.\n\n\n<0x10009:0x00000014>Oye, si vuelves a verlo, ¡no te olvides\nde decirle dónde estoy!")
          							flw_407:
/*<407>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<173>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>Es un hecho conocido que las técnicas\nde camuflaje del jefe son insuperables.\nTe va a costar mucho encontrarlo,\nya lo verás.")
          							goto flw_407
          						}
          					  case 1:
          						flw_264:
/*<264>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 266, 'param3': 51}
/*<266>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 616, 'param3': 16}
/*<616>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<403>*/ 							printf(/* textboxtype: 2, unk: 1, line: 145 */ "He marcado <sound 4>la localización del kyu Tili\nen el mapa. Sin embargo, el rastreador\ntodavía percibe señales de otros kyus.")
          							goto flw_265
          						  case 1:
/*<617>*/ 							printf(/* textboxtype: 2, unk: 1, line: 146 */ "He marcado <sound 4>la localización del kyu Tili\nen el mapa. Por desgracia, parece que\nZelda no se encuentra con él.")
          							goto flw_265
          						}
          					}
          				  case 1:
          					goto flw_264
          				}
          			  case 1:
          				goto flw_264
          			}
          		  case 1:
          			goto flw_264
          		}
          	  case 1:
          		goto flw_264
          	}
          }

          void entrypoint_200_99() {
/*<448>*/ 	start()
/*<449>*/ 	printf(/* textboxtype: 7, unk: 0, line: 189 */ "Al héroe caído del cielo:\nApunta con tino a la estrella\nhacia donde parte al vuelo\nel ave con sus alas abiertas.")
          }

          void entrypoint_200_65() {
/*<634>*/ 	start()
/*<635>*/ 	printf(/* textboxtype: 2, unk: 1, line: 158 */ "La vegetación de esta zona es idéntica\na la del bosque de Farone. Deduzco que\nnos encontramos en las profundidades\nde dicho bosque.\nZelda se dirigió hacia el templo, por\nlo que recomiendo que nosotros\ntambién nos encaminemos hacia allí.")
/*<646>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<647>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<272>*/ 	start()
/*<323>*/ 	printf(/* textboxtype: 2, unk: 1, line: 150 */ "<0x10012:0x00000004>Amo <heroname>, percibo el aura\nde <color blue<Zelda >coloroff>en el interior de este edificio.")
/*<324>*/ 	set_camera(13, 0)
/*<279>*/ 	set_camera(-1, 0)
/*<273>*/ 	printf(/* textboxtype: 2, unk: 1, line: 151 */ "Sin embargo, también percibo la\npresencia de un gran número de\nmonstruos. ¿Continuamos?\n[1-]¡Vamos![2-]Mejor no")
/*<274>*/ 	switch (choice(2)) {
          	  case 0:
/*<276>*/ 		printf(/* textboxtype: 2, unk: 1, line: 152 */ "El exceso de confianza es peligroso.\nNadie acudirá a este lugar si la\nsituación se complica.")
          		flw_280:
/*<280>*/ 		set_camera(14, 0)
/*<281>*/ 		printf(/* textboxtype: 2, unk: 1, line: 154 */ "Cuando el peligro sea evidente, <color green<volver\nal cielo >coloroff>y aprovechar para mejorar\nel equipo puede ser una buena idea.")
/*<642>*/ 		set_camera(-1, 0)
/*<638>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<640>*/ 			printf(/* textboxtype: 2, unk: 1, line: 156 */ "En general, siempre es buena idea\nobtener un <color red<escudo >coloroff>para protegerse\ny llevar alguna <color red<poción >coloroff>con la que\npoder curarse.")
          			flw_641:
/*<641>*/ 			printf(/* textboxtype: 2, unk: 1, line: 157 */ "Prosigamos con la búsqueda de Zelda.")
          		  case 1:
/*<639>*/ 			printf(/* textboxtype: 2, unk: 1, line: 155 */ "Detecto que el <0x10012:0x00000001>amo no se ha equipado\ncon un <color red<escudo>coloroff>. Recomiendo tener uno\na la mano en todo momento.")
          			goto flw_641
          		}
          	  case 1:
/*<275>*/ 		printf(/* textboxtype: 2, unk: 1, line: 153 */ "El miedo es un mecanismo instintivo\nde defensa muy útil. No hay motivo\npara avergonzarse.")
          		goto flw_280
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 1, line: 112 */ "<0x10012:0x0000000b>Amo, tengo información importante.\n<sound 4><color red<El rastreador ha reaccionado>coloroff> al\nencontrarnos con el último espécimen.\n[1-]¿En serio?[2-]¿Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 1, line: 113 */ "<0x10012:0x00000005>En efecto, amo. Deduzco que dicho\nespécimen pertenece a la pacífica tribu\nde los <color blue<kyus >coloroff>que habita en el bosque.\n\nSon seres inteligentes, capaces de\ncomunicarse con otras especies.<pause 15>\nPor desgracia, no se trataba de Zelda.\n\nDesconozco el motivo por el cual\nel rastreador ha reaccionado ante\nla presencia de ese kyu, pero aconsejo\nseguirle el rastro para averiguarlo.")
          		flw_134:
/*<134>*/ 		set_camera(10, 0)
/*<136>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 2, unk: 1, line: 114 */ "La probabilidad de que se trate de\nZelda es del 5%. Deduzco que el\nespécimen pertenece a la pacífica tribu\nde los <color blue<kyus >coloroff>que habita en el bosque.\nSon seres inteligentes, capaces de\ncomunicarse con otras especies.<pause 15>\n\n\nDesconozco el motivo por el cual\nel rastreador ha reaccionado ante\nla presencia de ese kyu, pero aconsejo\nseguirle el rastro para averiguarlo.")
          		goto flw_134
          	}
          }

          void entrypoint_200_69() {
/*<656>*/ 	start()
/*<657>*/ 	printf(/* textboxtype: 2, unk: 1, line: 159 */ "Si el <0x10012:0x00000004>amo necesita información en\nalgún momento, sugiero que oprima\n(v) para llamarme y acudiré\nde inmediato.<0x10011:0x09cd>\nAl seleccionar <color red<Consejos >coloroff>y,\na continuación, <color red<Pistas>coloroff>, facilitaré\ndatos que resultarán de utilidad\npara progresar en la misión.")
/*<663>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

