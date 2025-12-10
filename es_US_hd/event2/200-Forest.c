          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Vamos, vete... Lárgate...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Me haré el muerto, a ver si se va...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10012:0x00000001>Amo, sugiero comprobar si este espécimen\nse encuentra bien.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10012:0x00000001>Amo, seguir adelante sin hacer nada\nreduciría las opciones de supervivencia\ndel espécimen agazapado al 5%.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 1, line: 117 */ "")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 0, unk: 1, line: 118 */ "")
          		flw_220:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 1, line: 120 */ "")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf(/* textboxtype: 0, unk: 1, line: 121 */ "")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf(/* textboxtype: 1, unk: 0, line: 122 */ "")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 1, line: 123 */ "")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 1, unk: 0, line: 119 */ "")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		wait_frames(30)
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>¿Cómo? ¡Ahora hay uno verde!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>¡Kyu, kyuuu! ¡Ayuda, ayudaaaa!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10009:0x0000000b>¿Eh? Qué paz de repente...")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf(/* textboxtype: 0, unk: 1, line: 160 */ "De ahora en adelante, podré facilitarle\nal <0x10012:0x00000004>amo un análisis detallado de sus\ncombates.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	wait_frames(5)
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	wait_frames(10)
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf(/* textboxtype: 0, unk: 0, line: 161 */ "Una vez <color green<fijado el objetivo >coloroff>con (Z),\nsolo hay que oprimir (v) y acudiré a\nla llamada con los resultados de\nmi análisis.<0x10011:0x07cd><0x10011:0x09cd>")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	wait_frames(15)
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf(/* textboxtype: 2, unk: 0, line: 23 */ "<0x10009:0x00000007>¡Oye, muchas gracias por encontrar\na todos mis compañeros!\n\n\n<0x10009:0x00000013>Siento que tu amiga no estuviera\ncon ninguno de ellos, pero... ¡espero\nque la encuentres pronto!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000007>¡Menos mal! Es un alivio saber que\nel jefe se encuentra a salvo. ¡Y pensar\nque estaba mucho más cerca de lo que\nme imaginaba!\n<0x10009:0x00000013>Pero es una pena que tu amiga no\nestuviera con él...")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Cuando veas al jefe, ¿puedes decirle \nque estoy bien? ¡Seguro que está con\ntu amiga!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "¡Uaaah! ¡Ya está aquí otra vez!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10008:0x02cd>¡A esconderseee!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10008:0xfecd><0x10006:0xfdcd>...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "¿Por qué no me has atacado? Y ahora\nque lo pienso, también le has dado su\nmerecido a esos monstruos rojos...")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000001>Me llamo <color blue<Machi>coloroff>, de la tribu de los kyus.\nPor tu apariencia, pensé que eras un\nmal tipo... ¡Pero al final resulta que\nme has ayudado!")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10009:0x00000005>Qué curioso. Hace un rato pasó por\naquí otra criatura que se parecía\na ti, pero esta era una chica.\n[1-]¡¿Zelda?![2-]¡¿Quién?!")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>¿Qué es una Zelda? Parecía estar\nen peligro...")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10009:0x0000000a>La perseguían los monstruos rojos,\n<sound 4>y tuvo que huir con el <color blue<jefe>coloroff>.")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000004>¡No tengo idea! Pero parecía estar\nen peligro...")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 0, unk: 1, line: 124 */ "Detecto una reacción muy fuerte del\nrastreador en esta zona. Recomiendo\nproseguir la búsqueda por aquí.")
          }

          void entrypoint_200_71() {
/*<643>*/ 	start()
/*<644>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 645, 'param3': 51}
/*<645>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 646, 'param3': 16}
/*<646>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 647, 'param3': 17}
/*<647>*/ 	set_camera(40, 0)
/*<648>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000007>Muchas gracias por encontrar a todos\nmis compañeros.\n\n\n<0x10009:0x00000013>Lo malo es que... el bosque sigue\nestando lleno de peligros.")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Me alegra saber que el jefe está bien,\npero no pienso moverme de aquí hasta\nque hayan desaparecido esos monstruos.")
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10009:0x00000004>Voy a quedarme por aquí un rato.\nSi ves al jefe, dile dónde estoy,\n¿de acuerdo?")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "¡No me comas! ¡El sabor de kyu\nes mortal, te lo advierto!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>¿Cómo dices? ¿Que el jefe está\npreocupado por mí? ¡Eso significa\nque está a salvo!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>Yo me llamo <color blue<Poli>coloroff>. Si ves al jefe de la\ntribu, ¿podrías decirle que estoy aquí?\n\n\n<0x10009:0x0000000f>Me da un poco de miedo salir con todos\nesos monstruos pululando por ahí.\nHasta que no se vayan, no pienso\nmoverme.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10009:0x00000005>La verdad es que no te pareces\ndemasiado a los monstruos...\n\n\n¿Una chica con el cabello rubio?<pause 15>\n<0x10009:0x00000013>Pues no tengo idea. He estado\nescondido todo el rato.")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0, line: 125 */ "No hay rastro de enemigos en los\nalrededores, de modo que el kyu\npuede bajar del árbol sin que su\nseguridad corra peligro alguno.\nSin embargo, está tan asustado que es\nincapaz de moverse por sí mismo, por\nlo que será necesario buscar otro medio\nde rescate.\nRecuerdo al <0x10012:0x00000001>amo que puede comprobar\nlas acciones disponibles en cualquier\nmomento a través de <icon 19>.<0x10011:0x0bcd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000007>¡No sabes cuánto te agradezco que\nhayas encontrado a todos mis\ncompañeros!\n\n<0x10009:0x0000000b>Por aquí no hay monstruos, así que\ncreo que estoy a salvo.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>¡Qué alivio saber que el jefe también\nestá a salvo!\n\n\n<0x10009:0x00000013>Pero las piernas no me responden\ntodavía, así que será mejor que me\nquede aquí un ratito más.")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10009:0x00000004>Más vale que me quede aquí y descanse\nun rato. Si ves al jefe, ¿te importaría\ndecirle dónde estoy?")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>¡Qué golpeee!...<pause 30> Bueno, por lo menos\nya estoy abajo...")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000005>¿Cómo dices? ¿Que el jefe está\npreocupado por mí? ¡Eso significa\nque se encuentra a salvo!")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001>Me llamo <color blue<Menti>coloroff>. Si ves al jefe de la\ntribu, ¿puedes decirle que estoy aquí?\n\n\n<0x10009:0x00000013>Vaya... Todavía me tiemblan las\npiernas...")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000005>¿Qué? ¿Una chica? Pues la verdad\nes que no tengo idea.\n\n\n<0x10009:0x00000004>¡Pero seguro que el jefe sabe algo!")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>¡Kyuuu!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			wait_frames(60)
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 47 */ "<0x10009:0x0000000b>Has derrotado a todos los monstruos\nrojos... Eres un...<pause 15> ¡héroe! ¿Verdad?\n\n\n<0x10009:0x00000013>Yo todavía estoy temblando del miedo\ny no puedo ni moverme. ¿Te importa\nbajarme de aquí?")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 128 */ "Antes de entrar en el templo del fondo\ndel bosque hacia el que fue Zelda,\naconsejo guardar el progreso actual.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf(/* textboxtype: 0, unk: 1, line: 127 */ "El rastreador no detecta auras de otros\nkyus por la zona.\n\n\nSugiero visitar de nuevo a su jefe para\nobtener información adicional.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf(/* textboxtype: 1, unk: 1, line: 129 */ "La vista desde este lugar es amplia.\nRecomiendo usar el rastreador aquí\npara buscar a los kyus.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf(/* textboxtype: 1, unk: 1, line: 126 */ "El rastreador apenas detecta rastro\ndel aura de Zelda en esta zona. Sugiero\nbuscar en otro lugar.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf(/* textboxtype: 2, unk: 1, line: 177 */ "<0x10009:0x00181705>¿Mmm? ¿Qué tal, amiguito?\n¿Querías hablar sobre algo?\n[1-]Cubos[2-]Templo[3]Déjalo")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf(/* textboxtype: 0, unk: 2, line: 178 */ "<0x10009:0x00161e04>Cuando la luz que emana de tu espada\nentra en contacto con el cubo, este sale\ndisparado hacia el cielo.\n\nSegún los antiguos escritos, hay\nmuchos cubos repartidos por todo\nel mundo.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>En los antiguos escritos se dice que\nel edificio de esta zona es conocido\ncomo el templo de la contemplación.\n\nTambién se afirma que es el lugar al\nque debe dirigirse el héroe caído del\ncielo.")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf(/* textboxtype: 2, unk: 1, line: 180 */ "<0x10009:0x00001707>Ahora que lo pienso, en algún lugar\nme pareció ver una antigua litografía.\n\n\n<0x10009:0x00160b00>No recuerdo bien qué decía...<pause 15> pero\ntengo la corazonada de que explicaba\ncómo acceder al interior del templo.")
          				goto flw_596
          			}
          		  case 2:
/*<597>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<591>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<452>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 451, 'param3': 32}
          				flw_451:
/*<451>*/ 				printf(/* textboxtype: 2, unk: 1, line: 174 */ "<0x10009:0x00ffff00>Estos cubos están hechos de una aleación\nque jamás había visto. Por mucho que los\ngolpees, no puedes hacerles ni un rasguño.")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf(/* textboxtype: 0, unk: 2, line: 175 */ "<0x10009:0x00160b07>\"<color red<La luz de la espada divina>coloroff>\"...\nSeguro que esa frase tiene algún\nsignificado oculto.\n\n<0x10009:0x00001705>Tú no sabrás nada al respecto, ¿no?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				wait_frames(30)
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					wait_frames(30)
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>Fíjate...<pause 15> Se dice que estos artefactos\nlos dejó aquí la mismísima Diosa para\nguiar al héroe caído del cielo.\n\nCreo que los llamaré...<pause 30> ¡<color blue<cubos divinos>coloroff>!")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf(/* textboxtype: 2, unk: 1, line: 168 */ "<0x10009:0x00001e04>¿Qué era lo que decían los antiguos\nescritos?...\n\n\n¡Ah, creo que ya lo recuerdo!<pause 30>\n\"Que la luz de la espada celestial<pause 30>\nilumine el camino de su portador\".")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf(/* textboxtype: 0, unk: 2, line: 169 */ "<0x10009:0x0018170b>Tú llevas una espada... Quizá puedas\nayudarme a descifrar el enigma de\nlos cubos.\n[1-]Bueno[2-]No creo")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>¿De verdad que me vas a ayudar?\n¡Qué alegría!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf(/* textboxtype: 2, unk: 1, line: 171 */ "<0x10009:0x0018170c>¡Por favor!...\n[1-]Bueeeno...[2-]Lo siento")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf(/* textboxtype: 0, unk: 2, line: 172 */ "<0x10009:0x00080007>Bueno, bueno. Ya veo que quieres algo\na cambio...")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>¡Ahora no puedes negarte!")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf(/* textboxtype: 0, unk: 2, line: 166 */ "<0x10009:0x00171908>¡Has llegado justo a tiempo!\n\n\n\nAcabo de descubrir una cosa de la que\nse habla en los escritos antiguos.")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf(/* textboxtype: 2, unk: 1, line: 165 */ "<0x10009:0x00000001>¡Hola, amiguito! ¡Mira, ven aquí!")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>¡Hola amiguito! ¡Volvemos\na encontrarnos!\n\n\nNecesito que me hagas un favor...\n¡Ven aquí un momento!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 130 */ "")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000013>¡Nos has encontrado a todos! Está\nclaro que te tomas lo de buscar muy\nen serio. Quizá deberías descansar\nun poco los ojos...")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000005>¿Cómo me has encontrado? No lo\nentiendo... ¡si me camuflo tan bien\nque casi soy invisible!")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>¡Y también has encontrado al jefe!\n¡Eres todo un rastreador profesional!")
          			  case 1:
/*<174>*/ 				printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10009:0x00000014>Tu agudeza visual es sorprendente,\npero tengo la impresión de que aún\nno has encontrado al jefe...\n¿Me equivoco?")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>No sé cómo me has encontrado.\n¡Mi escondite era perfecto!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000001>Soy <color blue<Tili>coloroff>, y no hay un solo kyu que me\nsupere en lo referente a técnicas de\ncamuflaje. A excepción del jefe, claro.")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000002>Esa tal Zelda se dirigió hacia el templo\nque hay al fondo del bosque.")
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "La <color yellow<resortera >coloroff>te servirá para abrirte paso\nhasta lo más profundo de la espesura y\nllegar al templo.\n\n<0x10009:0x00000006>¡Ojalá encuentres pronto a tu amiga!\n¡Juo, juo!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>¡Utilízame como trampolín para llegar\na tu recompensa!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>¡Muy bien, ahora! ¡Súbete deprisa\nsobre mi espalda y tómalo!")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x0000000a>¡Juo, juo, juo! ¿De verdad que están\ntodos a salvo?\n\n\n¡Está claro que tienes un don para\nbuscar cosas! No sé quién eres ni de\ndónde has salido, pero te lo agradezco\nde veras.")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>¿Cómo? ¿Que tú también estás\nbuscando a alguien?\n\n\nMmm... Pues ahora que lo mencionas,\nsí que recuerdo haber visto hace poco\na una jovencita con el cabello amarillo\npor aquí.")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002>Por algún motivo, esa tal Zelda de la\nque hablas buscaba el templo que hay\nal fondo del bosque.\n\nLe advertí que era un lugar peligroso,\npero no me escuchó y se fue hacia\nallá.")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					wait_frames(15)
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					wait_frames(30)
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000003>Si continúas por aquella senda,\nllegarás a un templo.<pause 15> Pero está todo\nlleno de monstruos, así que deberías\nir con mucho cuidado.")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					wait_frames(15)
/*<126>*/ 					printf(/* textboxtype: 2, unk: 0, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>¡Ah, lo olvidaba!\n\n\n\nComo recompensa por encontrar a mis\nfieles amigos, quiero darte algo.\n\n\n<0x10009:0x00000008>A ver... espera un momento...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000009>¡Y, qué casualidad, acabo de recordar\nhacia dónde se fue aquella muchacha!")
          					goto flw_567
          				}
          			}
          		}
          	  case 1:
/*<145>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<146>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<147>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<148>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<381>*/ 						wait_frames(20)
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<150>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<196>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_382
          						  case 1:
/*<640>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_565
          						}
          					}
          				  case 1:
/*<177>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<179>*/ 						printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x00000003>¿Dices que Machi, Poli y Menti están\na salvo? ¡Fantástico!\n\n\nPor desgracia, todavía queda <color red<un\n>coloroff>compañero desaparecido. ¿Podrías\nasegurarte de que se encuentra bien?\n\nLe gusta mucho ocultarse entre la\nhierba de la zona, así que yo empezaría\npor ahí.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<501>*/ 							printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00000003>Ajá... ¡Así que Machi, Poli y Menti\nestán bien! Es una noticia excelente.\n\n\nPero mientras esos monstruos sigan\nandando a sus anchas por el bosque,\nno pienso moverme de aquí.")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000008>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <color red<el compañero>coloroff> que\nfalta se encuentra bien?\n\nLe gusta mucho ocultarse entre la\nmaleza de la zona, así que yo\nempezaría por ahí.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_383
          							}
          						  case 1:
          							goto flw_503
          						}
          					}
          				}
          			  case 1:
/*<180>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<181>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<184>*/ 						printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10009:0x00000003>¿Cómo? ¿Dices que Machi, Poli y Tili\nestán a salvo? ¡Fantástico!\n\n\nPor desgracia, todavía queda <color red<un\n>coloroff>compañero desaparecido. ¿Podrías\nasegurarte de que se encuentra bien?\n\nSu pasión es trepar lo más alto posible,\nasí que yo empezaría por mirar en las\ncopas de los árboles.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          					  case 1:
/*<213>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<508>*/ 							printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10009:0x00000003>Ah... así que Machi, Poli y Tili\nestán a salvo, ¿no? ¡Excelente!\n\n\nPero mientras esos monstruos sigan\nmerodeando por el bosque, no podré\ndescansar tranquilo.")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00000008>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <color red<el compañero>coloroff> que\nfalta se encuentra bien?\n\nSu pasión es trepar lo más alto posible,\nasí que yo empezaría por mirar en las\ncopas de los árboles.\n\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de\ntu amiga.")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf(/* textboxtype: 1, unk: 2, line: 78 */ "<0x10009:0x00000003>Me alegro de que Machi y Poli estén\nsanos y salvos, pero sigo preocupado\npor los demás.\n\n¿Podrías averiguar si mis otros <color red<dos\n>coloroff>compañeros se encuentran bien?\n\n\n<0x10009:0x00000008>Creo que tu amiga se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<517>*/ 							printf(/* textboxtype: 2, unk: 0, line: 77 */ "<0x10009:0x00000003>Mmm... entendido. Es un alivio saber\nque Machi y Poli están bien.\n\n\nPero mientras esos monstruos sigan\nandando a sus anchas por el bosque,\nno podré descansar tranquilo...")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000002>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <color red<dos >coloroff>compañeros\nque faltan se encuentran bien?\n\nSeguro que en cuanto los encuentres\nrecordaré hacia dónde se fue tu amiga.")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_385
          							}
          						  case 1:
          							goto flw_521
          						}
          					}
          				}
          			}
          		  case 1:
/*<185>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<186>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<187>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf(/* textboxtype: 1, unk: 2, line: 81 */ "<0x10009:0x00000003>¿Cómo? ¿Dices que Machi, Menti y Tili\nse encuentran bien? ¡Fantástico!\n\n\nPor desgracia, todavía queda <color red<un\n>coloroff>compañero desaparecido. ¿Podrías\nasegurarte de que está a salvo?\n\nEs un maestro del camuflaje. Lo que\nmejor hace es ocultarse entre los\narbustos, así que yo empezaría a\nbuscar por ahí.\n<0x10009:0x00000002>Si lo encuentras, seguro que me sentiré\nmejor y recordaré el paradero de tu\namiga...")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<526>*/ 							printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10009:0x00000003>Ajá... así que Machi, Menti y Tili están\na salvo. ¡No sabes cómo me alegro!\n\n\nPero mientras esos monstruos sigan\nsueltos por el bosque, no podré dormir\ntranquilo...")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000008>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <color red<el >coloroff><color red<compañero >coloroff>que\nfalta se encuentra bien?\n\nEs un maestro del camuflaje. Lo que\nmejor hace es ocultarse entre los\narbustos, así que yo empezaría a\nbuscar por ahí.\n<0x10009:0x00000002>En cuanto lo encuentres, seguro que\nrecuerdo qué pasó con la jovencita que\nandas buscando...")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000003>Me alegra saber que Machi y Menti\nse encuentran a salvo, pero sigo muy\npreocupado por los demás.\n\n¿Te importaría buscar a los <color red<dos\n>coloroff>que faltan?\n\n\n<0x10009:0x00000008>Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<535>*/ 							printf(/* textboxtype: 2, unk: 0, line: 83 */ "<0x10009:0x00000003>Mmm... Así que Machi y Menti están\nbien, ¿verdad?\n\n\nExcelentes noticias, pero mientras esos\nmonstruos sigan andando a sus anchas\npor el bosque, no podré descansar\ntranquilo.")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <color red<dos >coloroff>compañeros\nque faltan se encuentran bien?\n\nEn cuanto los encuentres, seguro que\nrecuerdo qué pasó con la jovencita\nque estás buscando...")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_387
          							}
          						  case 1:
          							goto flw_539
          						}
          					}
          				}
          			  case 1:
/*<190>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<191>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<194>*/ 						printf(/* textboxtype: 1, unk: 2, line: 87 */ "<0x10009:0x00000003>No sabes cómo me alegro de que Machi\ny Tili estén a salvo, pero sigo muy\npreocupado por los demás.\n\nSi no es mucho pedir, ¿podrías\nbuscar a mis otros <color red<dos >coloroff>compañeros?\n\n\n<0x10009:0x00000008>Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<544>*/ 							printf(/* textboxtype: 2, unk: 0, line: 86 */ "<0x10009:0x00000003>Mmm... ajá, así que Machi y Tili están\nbien. No sabes cómo me alegra oírlo.\n\n\nPero mientras esos monstruos sigan\nsueltos por el bosque, no podré dormir\ntranquilo.")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000002>Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <color red<dos >coloroff>compañeros\nque faltan se encuentran bien?\n\nEn cuanto los encuentres, seguro que\nrecuerdo qué pasó con la jovencita\nque andas buscando...")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00000003>¿Dices que Machi está a salvo? Pero\n¿y los otros? Sigo muy preocupado\npor ellos.\n\nSi no es mucho pedir, ¿podrías buscar\na los <color red<tres >coloroff>que faltan?\n\n\n<0x10009:0x00000008>Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>¡Juo, juo, juo!<pause 15> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause 15> Está claro que eres alguien\nmuy especial.\nYo soy <color blue<Salvio>coloroff>, jefe de los kyus.\n\n[1-]¿Y Zelda?[2-]Tengo que\ndecirte algo")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>¿Zelda<0x10006:0xfdcd>?...<pause 15>\n\n\n\nAh, sí, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>¡¿Cómo?! ¿Dices que has visto a alguno\nde mis fieles compañeros?")
/*<553>*/ 							printf(/* textboxtype: 2, unk: 0, line: 89 */ "<0x10009:0x00000003>Vaya, así que has visto a Machi y está\na salvo... ¡Estupenda noticia!\n\n\nPero mientras esos monstruos sigan\nmerodeando por el bosque, no podré\ndormir tranquilo.")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000002>Si no es mucha molestia, ¿podrías\nlocalizar a los <color red<tres >coloroff>compañeros que\nfaltan y asegurarte de que están bien?\n\nEn cuanto me confirmes que están\ntodos sanos y salvos, seguro que podré\nrecordar qué fue de tu amiguita...")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>¿Y dices que tú también buscas\na alguien?\n\n\nAh, claro, te refieres a esa chica del\ncabello amarillo, la que se parece\na ti... Sí, estaba conmigo.\n\n<0x10009:0x0000000c>Pero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny estando así no sé si podré acordarme\nde mucho...")
          								goto flw_389
          							}
          						  case 1:
          							goto flw_557
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10012:0x00000004>Amo <heroname>, tengo algunos\ndatos sobre el uso de la <color yellow<resortera>coloroff>.\n\n\n<color green<Oprimiendo brevemente >coloroff><icon 41>, el <0x10012:0x00000001>amo\npuede volver a sacarla cuando lo desee,\nya que es el último objeto que ha usado.<0x10011:0x0fcd>\n\nEn caso de dificultad para acordarse del\nprocedimiento, se recomienda oprimir\n<icon 37> para acceder a <color red<Ayuda>coloroff>.<0x10011:0x0bcd>")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Amo, hemos llegado al <color blue<bosque de Farone>coloroff>.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	wait_frames(60)
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10012:0x00000004>Amo <heroname>, hay un 80% de\nprobabilidades de que la llama esté\nen el lago.")
          	  case 1:
/*<587>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10012:0x00000004>Amo <heroname>, hay un 80% de\nprobabilidades de que la llama \nesté detrás de esa puerta.\n\nDeduzco que el kyu ermitaño se refería\nal <color red<rayo celestial >coloroff>cuando hablaba del\npoder de la Diosa necesario para\ncompletar el dibujo.\nAconsejo situarse frente a la puerta\ne invocar el rayo celestial para <color green<trazar\nla parte del dibujo que falta>coloroff>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x004b0000>La gran cantidad de agua que hay en\nla zona favorece el crecimiento de la\nvegetación. Ese inmenso árbol de ahí\nes un buen ejemplo.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf(/* textboxtype: 0, unk: 2, line: 163 */ "<0x10009:0x00000001>¡Hola, amiguito! ¡Volvemos\na encontrarnos!")
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<131>*/ 	start()
/*<211>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<572>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 625, 'param3': 13}
/*<625>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<627>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<626>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<571>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<318>*/ 	start()
/*<319>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10005:0x004b0000>En un entorno natural tan favorable,\nnumerosas especies han encontrado\nsu hábitat.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n¿Es que no vas a ayudarme a descifrar\nel enigma de los cubos divinos?")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\nTengo un favor que pedirte.")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n<0x10009:0x00170600>Sé que me has visto...<pause 15> ¿Y aun así me\nignoras? ¿Es que te caigo mal?\n[1-]Lo siento[2-]Sí")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Así que tienes prisa porque estás\nbuscando a una jovencita. Tranquilo,\nque no te entretendré mucho tiempo;\nte lo prometo.")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Ya veo... Es el sino de todos los\ngrandes exploradores. Casi nadie nos\ncomprende.\n\nPero te prometo que no te entretendré\ndemasiado tiempo, tranquilo.")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	wait_frames(27)
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	wait_frames(24)
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10012:0x00000004>Amo <heroname>, acabamos de\nobtener nuevos datos sobre el paradero\nde Zelda. Procedo a analizarlos.\n\nSegún he entendido, fue atacada por\nmonstruos pero consiguió escapar.<pause 15>\nSin embargo, su situación parece ser\naún de grave peligro.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	wait_frames(15)
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf(/* textboxtype: 1, unk: 1, line: 135 */ "<sound 4>He registrado la ubicación del kyu\nMachi. Recomiendo consultarla en\nel mapa.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	wait_frames(15)
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf(/* textboxtype: 0, unk: 1, line: 136 */ "Considero que el contacto establecido\nentre estas criaturas y Zelda es la causa\nde la reacción del rastreador ante su\nsu presencia.\nEl jefe de los kyus huyó con Zelda,\npor lo que calculo que la probabilidad\nde que el rastreador también reaccione\nante él es del 85%.\nRecomiendo seguir utilizando el\nrastreador continuamente para\naveriguar el paradero de Zelda.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	wait_frames(21)
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	wait_frames(30)
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "<0x10009:0x0000000d>¡Buf! Qué susto... Tienes unos amigos\nbastante raros, ¿lo sabías?")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000007>Pareces ansioso por encontrar a tu\namiga y al <color blue<jefe>coloroff>. Cuando lo hagas,\n<color red<dile que estoy a salvo>coloroff>, ¿de acuerdo?\n\n<0x10009:0x00000005>¡Y anímate! Seguro que tu amiga\nestá sana y salva con el jefe.")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>Úsala para abrirte paso hacia el templo\nque hay al fondo del bosque. ¡Ya verás\ncomo te resulta útil!")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000008>Vamos, intenta darle a esa li...<pause 15>\n¡Eh!\n\n\nAprendes rápido, ¿eh?<pause 15> Mejor,\nasí nos ahorramos las explicaciones.")
          		flw_365:
/*<365>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Oprime <icon 41> para preparar la resortera\ny suéltalo para disparar.<0x10011:0x0fcd>\n\n\nSi te quedas sin munición, siempre\npuedes <color green<recoger semillas >coloroff>de los árboles.")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>¡Ojalá encuentres pronto a tu amiga!\n¡Juo, juo!")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>¡Ojalá encuentres pronto a tu amiga!\n¡Juo, juo!")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000008>Mira, intenta darle a esa liana\nenroscada de ahí.")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10005:0x004b0000>Infiero que Zelda se encuentra\nen algún lugar de este bosque.\n\n\n<0x10005:0x004b0000>Recomiendo usar el rastreador para\nlocalizarla.")
/*<609>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<610>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<422>*/ 	start()
/*<426>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 428, 'param3': 46}
/*<428>*/ 	set_camera(35, 0)
/*<438>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<491>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<490>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n¿Es que no vas a ayudarme a descifrar\nel enigma de los cubos divinos?")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\nTengo un favor que pedirte.")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>¡Espera, por Goron!\n\n\n\n<0x10009:0x00170600>Sé que me has visto...<pause 15> ¿Y aun así me\nignoras? ¿Es que te caigo mal?\n[1-]Lo siento[2-]Sí")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Así que tienes prisa porque estás\nbuscando a una jovencita. Tranquilo,\nque no te entretendré mucho tiempo;\nte lo prometo.")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Ya veo... Es el sino de todos los\ngrandes exploradores. Casi nadie nos\ncomprende.\n\nPero te prometo que no te entretendré\ndemasiado tiempo, tranquilo.")
          			goto flw_446
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<616>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 377, 'param3': 51}
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 199, 'param3': 17}
/*<199>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 197, 'param3': 16}
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Lamentablemente, Zelda ya no está\ncon el jefe.<pause 15> Aun así, es posible que\neste disponga de información útil\npara la misión.\nLa probabilidad de que ayudar al jefe a\nbuscar a los kyus desaparecidos sirva\npara encontrar a Zelda es del 85%.\n\nHe añadido <sound 4><color red<el aura de los kyus >coloroff>como\nobjetivo de rastreo.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf(/* textboxtype: 1, unk: 1, line: 138 */ "¿Necesita el <0x10012:0x00000001>amo una explicación sobre\ncómo cambiar el objetivo de rastreo?\n[1-]Sí[2]No")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "Al oprimir (^), se mostrarán los distintos\nobjetivos de rastreo.<0x10011:0x08cd>\n\n\nElige el que quieras y suelta (^)\npara confirmar tu selección.<0x10011:0x08cd>\n\n\nSi no se desea rastrear ningún objetivo,\nsolo hay que elegir la <color green<vista subjetiva >coloroff>y\nsoltar (^).\n[1-]Otra vez[2]Entendido")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "La posición de los kyus que el <0x10012:0x00000001>amo\nencuentre quedará registrada en el\nmapa y sus auras desaparecerán como\nobjetivos del rastreador.\nConsidero que el <0x10012:0x00000001>amo ya está listo para\nempezar a buscar a los kyus.")
/*<613>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<614>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 615, 'param3': 36}
/*<615>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_617
          	}
          }

          void entrypoint_200_44() {
/*<334>*/ 	start()
/*<335>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<423>*/ 	start()
/*<424>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>¡Uoooh! ¡El cubo ha salido volando!\n\n\n\n<0x10009:0x00131b00>Por lo visto, ha reaccionado a la luz\nde tu espada...\n\n\n<0x10009:0x00001b05>¿Adónde crees que habrá ido?\nEl enigma se complica aún más...\n\n\n<0x10009:0x00161e00>Según los antiguos escritos, hay cubos\nrepartidos por todo el mundo.\n\n\n<0x10009:0x00001700>Estaría bien que los buscaras en tus\nviajes. Y, si averiguas algo sobre ellos,\n¡no te olvides de venir a contármelo!")
/*<482>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<233>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<238>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<239>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<240>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<677>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<651>*/ 						set_camera(16, 0)
/*<235>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 268, 'param3': 17}
/*<268>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 269, 'param3': 13}
/*<269>*/ 						wait_frames(27)
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						wait_frames(21)
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000014>¡Uaaargh! ¡No me asustes así!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						wait_frames(27)
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf(/* textboxtype: 0, unk: 1, line: 142 */ "He marcado <sound 4>la localización del kyu Poli\nen el mapa. Por desgracia, parece que\nZelda no se encuentra con él.")
/*<674>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 675, 'param3': 17}
/*<675>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						goto flw_271
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_10() {
/*<288>*/ 	start()
/*<578>*/ 	set_camera(-1, 0)
/*<579>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 580, 'param3': 40}
/*<580>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 581, 'param3': 13}
/*<581>*/ 	wait_frames(60)
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	wait_frames(75)
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000007>¡Hola, soy yo! ¿Has encontrado ya\na tu amiga?\n[1-]¿Quién eres?[2-]Aún no...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10009:0x00000013>¿Cómo? ¿Ya te has olvidado de mí?\nSoy yo, <color blue<Machi>coloroff>... Snif.")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000007>¡No sabes lo contento que estoy por\nhaberme reunido de nuevo con todos\nmis compañeros! ¡Y todo gracias a ti!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10009:0x00000005>¡Espero que encuentres pronto a tu\namiga! ¡Cuídate mucho!")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>Vaya, pues lo siento... Pero bueno,\nal menos ya sabes hacia dónde fue...\nAlgo es algo, ¿no?")
          		goto flw_297
          	}
          }

          void entrypoint_200_63() {
/*<241>*/ 	start()
/*<242>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<247>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<249>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<668>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<655>*/ 						set_camera(27, 0)
/*<244>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 274, 'param3': 35}
/*<274>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 272, 'param3': 17}
/*<272>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 273, 'param3': 13}
/*<273>*/ 						wait_frames(28)
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						wait_frames(21)
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0000000d>Creía que era otro de esos monstruos...\n¡Qué susto me llevé!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						wait_frames(28)
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf(/* textboxtype: 1, unk: 2, line: 144 */ "He marcado <sound 4>la localización del kyu\nMenti en el mapa. Por desgracia,\nparece que Zelda no se encuentra\ncon él.")
/*<666>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 661, 'param3': 17}
/*<661>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						goto flw_275
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_64() {
/*<250>*/ 	start()
/*<251>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<255>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<256>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<257>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<659>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<652>*/ 						set_camera(38, 0)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 254, 'param3': 51}
/*<254>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 376, 'param3': 16}
/*<376>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						wait_frames(21)
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf(/* textboxtype: 2, unk: 0, line: 59 */ "<0x10009:0x00000005>¿Dices que has visto al jefe?\nBien, me alegro de que esté a salvo.\n\n\n<0x10009:0x00000014>Oye, si vuelves a verlo, ¡no te olvides\nde decirle dónde estoy!")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>Es un hecho conocido que las técnicas\nde camuflaje del jefe son insuperables.\nTe va a costar mucho encontrarlo,\nya lo verás.")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf(/* textboxtype: 2, unk: 0, line: 146 */ "He marcado <sound 4>la localización del kyu Tili\nen el mapa. Por desgracia, parece que\nZelda no se encuentra con él.")
          						goto flw_252
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_99() {
/*<420>*/ 	start()
/*<421>*/ 	printf(/* textboxtype: 2, unk: 1, line: 189 */ "Al héroe caído del cielo:\nApunta con tino a la estrella\nhacia donde parte al vuelo\nel ave con sus alas abiertas.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf(/* textboxtype: 1, unk: 0, line: 158 */ "La vegetación de esta zona es idéntica\na la del bosque de Farone. Deduzco que\nnos encontramos en las profundidades\nde dicho bosque.\nZelda se dirigió hacia el templo, por\nlo que recomiendo que nosotros\ntambién nos encaminemos hacia allí.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 1, line: 150 */ "<0x10012:0x00000004>Amo <heroname>, percibo el aura\nde <color blue<Zelda >coloroff>en el interior de este edificio.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 0, unk: 1, line: 151 */ "Sin embargo, también percibo la\npresencia de un gran número de\nmonstruos. ¿Continuamos?\n[1-]¡Vamos![2-]Mejor no")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "El exceso de confianza es peligroso.\nNadie acudirá a este lugar si la\nsituación se complica.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 154 */ "Cuando el peligro sea evidente, <color green<volver\nal cielo >coloroff>y aprovechar para mejorar\nel equipo puede ser una buena idea.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf(/* textboxtype: 1, unk: 1, line: 156 */ "En general, siempre es buena idea\nobtener un <color red<escudo >coloroff>para protegerse\ny llevar alguna <color red<poción >coloroff>con la que\npoder curarse.")
          			flw_606:
/*<606>*/ 			printf(/* textboxtype: 0, unk: 1, line: 157 */ "Prosigamos con la búsqueda de Zelda.")
          		  case 1:
/*<604>*/ 			printf(/* textboxtype: 1, unk: 0, line: 155 */ "Detecto que el <0x10012:0x00000001>amo no ha equipado\nun <color red<escudo>coloroff>. Recomiendo tener uno\na la mano en todo momento.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 1, unk: 1, line: 153 */ "El miedo es un mecanismo instintivo\nde defensa muy útil. No hay motivo\npara avergonzarse.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10012:0x0000000b>Amo, tengo información importante.\n<sound 4><color red<El rastreador ha reaccionado>coloroff> al\nencontrarnos con el último espécimen.\n[1-]¿En serio?[2-]¿Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10012:0x00000005>En efecto, amo. Deduzco que dicho\nespécimen pertenece a la pacífica tribu\nde los <color blue<kyus >coloroff>que habita en el bosque.\n\nSon seres inteligentes, capaces de\ncomunicarse con otras especies.<pause 15>\nPor desgracia, no se trataba de Zelda.\n\nDesconozco el motivo por el cual\nel rastreador ha reaccionado ante\nla presencia de ese kyu, pero aconsejo\nseguirle el rastro para averiguarlo.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 114 */ "La probabilidad de que se trate de\nZelda es del 5%. Deduzco que el\nespécimen pertenece a la pacífica tribu\nde los <color blue<kyus >coloroff>que habita en el bosque.\nSon seres inteligentes, capaces de\ncomunicarse con otras especies.<pause 15>\n\n\nDesconozco el motivo por el cual\nel rastreador ha reaccionado ante\nla presencia de ese kyu, pero aconsejo\nseguirle el rastro para averiguarlo.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf(/* textboxtype: 1, unk: 1, line: 159 */ "Si el <0x10012:0x00000004>amo necesita información en\nalgún momento, sugiero que oprima\n(v) para llamarme y acudiré\nde inmediato.<0x10011:0x09cd>\nAl seleccionar <color red<Consejos >coloroff>y,\na continuación, <color red<Pistas>coloroff>, facilitaré\ndatos que resultarán de utilidad\npara progresar en la misión.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

