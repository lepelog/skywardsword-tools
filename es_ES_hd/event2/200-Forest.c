          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECD(¡Vamos, vete! ¡Largo!)")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECD(Me haré el muerto, a ver si hay suerte y se va...)")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x12\x04\x00\x01Amo, sugiero comprobar si este espécimen\nse encuentra bien.")
          	  case 1:
/*< 49>*/ 		printf("\x0E\x01\x12\x04\x00\x01Amo, seguir adelante sin hacer nada\nreduciría las opciones de supervivencia\ndel espécimen agazapado al 5%.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf("")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("")
          		flw_220:
/*<220>*/ 		printf("")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf("")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf("")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf("")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf("")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 77, 'param3': 6}
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf("\x0E\x01\x08\x02\x1CD¡Ahí va! ¡Ahora hay uno verde!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x00\x0F¡Kyu, kyuuu! ¡Socorro, socorrooo!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 121, 'param3': 6}
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf("\x0E\x01\x09\x04\x00\x0B¿Eh? Qué paz de repente...")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf("De ahora en adelante, podré facilitarle\nal \x0E\x01\x12\x04\x00\x04amo un análisis detallado de sus\ncombates.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 631, 'param3': 6}
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 634, 'param3': 6}
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf("Una vez <g<fijado el objetivo >>con (Z),\nsolo hay que pulsar (v) y acudiré a\nla llamada con los resultados de\nmi análisis.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 639, 'param3': 6}
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x07¡Oye, muchas gracias por encontrar\na todos mis compañeros!\n\n\n\x0E\x01\x09\x04\x00\x13Siento que tu amiguita no estuviera\ncon ninguno de ellos, pero... ¡seguro\nque pronto la encuentras!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf("\x0E\x01\x09\x04\x00\x07¡Menos mal! Es un alivio saber que\nel jefe se encuentra a salvo. ¡Resulta\nque andaba mucho más cerca de lo que\nyo me imaginaba!\n\x0E\x01\x09\x04\x00\x13Pero es una pena que tu amiga no\nestuviese con él...")
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x00\x04¿Puedes decirle al jefe que estoy bien\ncuando lo veas? ¡Seguro que está con\ntu amiguita!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf("¡Uaaah! ¡Ya está aquí otra vez!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf("\x0E\x01\x08\x02\x2CD¡A cubiertooo!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf("\x0E\x01\x08\x02\xFECD\x0E\x01\x06\x02\xFDCD(...)")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf("Anda, si no me has atacado...\nY antes les has dado su merecido a esos\nmonstruos rojos y todo.")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 403, 'param3': 6}
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x00\x01Me llamo <b<Machi>>, de la tribu de los kyus.\nLa verdad es que tenías mala pinta así,\nde primeras... ¡Pero al final resulta\nque me has ayudado!")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf("\x0E\x01\x09\x04\x00\x05Por cierto, hace un rato pasó por aquí\nuna chica que se parecía a ti.\n[1]¡¿Zelda?![2]¡¿Quién?!")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x04¿Es amiga tuya? Parecía estar\nen peligro...")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x00\nLa perseguían los monstruos rojos,\n<pling>y tuvo que huir con el <b<jefe>>.")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf("\x0E\x01\x09\x04\x00\x04¡No tengo ni idea! Pero parecía estar\nen peligro...")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Detecto una reacción muy fuerte del\nrastreador en esta zona. Recomiendo\nproseguir la búsqueda por aquí.")
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
/*< 31>*/ 		printf("\x0E\x01\x09\x04\x00\x07Muchas gracias por encontrar a todos\nmis compañeros.\n\n\n\x0E\x01\x09\x04\x00\x13Lo malo es que... el bosque sigue\nestando lleno de peligros.")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x07Me alegra saber que el jefe está bien,\npero no pienso moverme de aquí hasta\nque hayan desaparecido esos monstruos.")
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x00\x04Voy a quedarme por aquí un rato.\nSi ves al jefe, dile dónde estoy,\n¿de acuerdo?")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf("¡No me comas! ¡El empacho de kyu\nes mortal, te lo advierto! ¡Déjame\nen paz!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x05¿Cómo dices? ¿Que el jefe está\npreocupado por mí? ¡Eso significa\nque está a salvo!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf("\x0E\x01\x09\x04\x00\x01Yo me llamo <b<Poli>>. Si ves al jefe de la\ntribu, dile que estoy aquí, ¿vale?\n\n\n\x0E\x01\x09\x04\x00\x0FMe da un poco de miedo salir con\ntodos esos monstruos pululando\npor ahí. Hasta que no se vayan,\nno pienso moverme.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf("\x0E\x01\x09\x04\x00\x05La verdad es que no te pareces\ndemasiado a los monstruos...\n\n\n¿Una chica con el pelo rubio?<pause0F>\n\x0E\x01\x09\x04\x00\x13Pues no tengo ni idea. Yo es que\nhe estado todo el rato escondido.")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("No hay rastro de enemigos en los\nalrededores, de modo que el kyu\npuede bajar del árbol sin que su\nseguridad corra peligro alguno.\nSin embargo, está tan asustado que es\nincapaz de moverse por sí mismo, por\nlo que será necesario buscar otro medio\nde rescate.\nRecuerdo al \x0E\x01\x12\x04\x00\x01amo que puede comprobar\nlas acciones disponibles en cualquier\nmomento a través de \x0E\x02\x04\x02\x13CD.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\x07¡No sabes cuánto te agradezco que\nhayas encontrado a todos mis\ncompañeros!\n\n\x0E\x01\x09\x04\x00\x0BPor aquí no hay monstruos, así que\ncreo que estoy a salvo.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\x07¡Qué alivio saber que el jefe también\nestá a salvo!\n\n\n\x0E\x01\x09\x04\x00\x13Pero las piernas no me responden\ntodavía, así que será mejor que me\nquede aquí un ratito más.")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x00\x04Más vale que me quede aquí y descanse\nun rato. Si ves al jefe, ¿te importaría\ndecirle dónde estoy?")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf("\x0E\x01\x09\x04\x00\x11¡Qué castañazo!...<pause1E> Bueno, por lo menos\nya estoy abajo...")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("\x0E\x01\x09\x04\x00\x05¿Cómo dices? ¿Que el jefe está\npreocupado por mí? ¡Eso significa\nque se encuentra a salvo!")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x01Me llamo <b<Menti>>. Si ves al jefe de la\ntribu, dile que estoy aquí, ¿vale?\n\n\n\x0E\x01\x09\x04\x00\x13Rayos... Todavía me tiemblan las\npiernas...")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf("\x0E\x01\x09\x04\x00\x05¿Qué? ¿Una chica? Pues la verdad\nes que no tengo ni idea.\n\n\n\x0E\x01\x09\x04\x00\x04¡Pero seguro que el jefe sabe algo!")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\xFECD(¡Kyuuu!)")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 117, 'param3': 6}
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf("\x0E\x01\x09\x04\x00\x0BHas derrotado a todos los monstruos\nrojos... Eres un...<pause0F> ¡héroe! ¿Verdad\nque sí?\n\n\x0E\x01\x09\x04\x00\x13Yo todavía estoy temblando del miedo\nque tengo en el cuerpo, y no puedo\nni moverme. ¿Me bajas de aquí?")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf("Antes de entrar en el templo del fondo\ndel bosque hacia el que se dirigió Zelda,\naconsejo guardar el progreso actual.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf("El rastreador no detecta auras de otros\nkyus por la zona.\n\n\nSugiero visitar de nuevo a su jefe para\nobtener información adicional.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf("La vista desde este lugar es amplia.\nRecomiendo usar el rastreador aquí\npara buscar a los kyus.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf("El rastreador apenas detecta rastro\ndel aura de Zelda en esta zona. Sugiero\nbuscar en otro lugar.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf("\x0E\x01\x09\x04\x18\x1705¿Mmm? ¿Qué tal, pequeñajo?\n¿Querías hablar sobre algo?\n[1]Cubos[2]Templo[3-]Déjalo")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf("\x0E\x01\x09\x04\x16\x1E04Cuando la luz que emana de tu espada\nentra en contacto con el cubo, este sale\ndisparado hacia el cielo.\n\nSegún los antiguos escritos, hay muchos\ncubos repartidos por todo el mundo.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf("\x0E\x01\x09\x04\x08\xB04En los antiguos escritos se dice que\nel edificio de esta zona es conocido\ncomo el templo de la contemplación.\n\nTambién se afirma que es el lugar al\nque debe dirigirse el héroe caído del\ncielo.")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf("\x0E\x01\x09\x04\x00\x1707Ahora que caigo, en algún lugar\nme pareció ver una antigua litografía.\n\n\n\x0E\x01\x09\x04\x16\xB00No recuerdo bien qué decía...<pause0F> pero\ntengo la corazonada de que explicaba\ncómo acceder al interior del templo.")
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
/*<451>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Estos cubos están hechos de una aleación\nque jamás había visto. Por mucho que\nlos golpees, no puedes hacerles\nni un rasguño.")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf("\x0E\x01\x09\x04\x16\xB07«<r<La luz de la espada divina>>»...\nSeguro que esa frase tiene algún\nsignificado oculto.\n\n\x0E\x01\x09\x04\x00\x1705Tú no sabrás nada al respecto, ¿no?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 481, 'param3': 6}
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 457, 'param3': 6}
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF05Fíjate...<pause0F> Se dice que estos artefactos\nlos dejó aquí la mismísima Diosa para\nguiar al héroe caído del cielo.\n\nCreo que los llamaré...<pause1E> ¡<b<cubos divinos>>!")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf("\x0E\x01\x09\x04\x00\x1E04¿Qué era lo que decían los antiguos\nescritos?...\n\n\n¡Ah, creo que ya lo recuerdo!:<pause1E>\n«Que la luz de la espada celestial<pause1E>\nilumine el camino de su portador».")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf("\x0E\x01\x09\x04\x18\x170BTú llevas una espada... Quizá puedas\nayudarme a descifrar el enigma de\nlos cubos.\n[1]Vale[2]No creo")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf("\x0E\x01\x09\x04\x17\x1908¿De verdad que me vas a ayudar?\n¡Albricias!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf("\x0E\x01\x09\x04\x18\x170C¡Venga, por favor!...\n[1]Bueeeno...[2]Que no")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf("\x0E\x01\x09\x04\x08\x07Vale, vale. Ya veo que quieres algo\na cambio...")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf("\x0E\x01\x09\x04\x17\x1906¡Ahora no puedes negarte!")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf("\x0E\x01\x09\x04\x17\x1908¡Has llegado justo a tiempo!\n\n\n\nAcabo de descubrir una cosa de la que\nse habla en los escritos antiguos.")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hombre, pequeñajo! ¡Corre, ven aquí!")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡Hombre, pequeñajo, volvemos\na encontrarnos!\n\n\nNecesito que me hagas un favor...\n¡Ven por aquí, corre!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf("")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x13¡Nos has encontrado a todos! Está\nclaro que cuando te pones serio, no\nhay quien te pare, ¿verdad?")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf("\x0E\x01\x09\x04\x00\x05¿Cómo me has encontrado? No lo\nentiendo... ¡si me camuflo tan bien\nque casi soy invisible!")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x00\x07¡¿Qué?! ¿También has encontrado\nal jefe? ¡Estás hecho un rastreador\nde aquí te espero!")
          			  case 1:
/*<174>*/ 				printf("\x0E\x01\x09\x04\x00\x14Tu agudeza visual es sorprendente,\npero tengo la impresión de que aún\nno has encontrado al jefe...\n¿Me equivoco?")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf("\x0E\x01\x09\x04\x00\x13No sé cómo me has encontrado.\n¡Mi escondite era perfecto!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf("\x0E\x01\x09\x04\x00\x01Soy <b<Tili>>, y no hay un solo kyu que me\nsupere en lo referente a técnicas de\ncamuflaje. A excepción del jefe,\nclaro está.")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf("")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x02Esa tal Zelda se dirigió hacia el templo\nque hay al fondo del bosque.")
/*<119>*/ 			printf("El <y<tirachinas >>te servirá para abrirte paso\nhasta lo más profundo de la espesura\ny llegar al templo.\n\n\x0E\x01\x09\x04\x00\x06¡Ojalá encuentres pronto a tu amiguita!\n¡Juo, juo!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Utilízame de trampolín para llegar\na tu recompensa!")
          				  case 1:
/*<109>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Venga, ahora! ¡Súbete deprisa sobre\nmi espalda y cógelo!")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x00\n¡Juo, juo, juo! ¿De verdad que están\ntodos a salvo?\n\n\n¡Está claro que tienes un don para\nbuscar cosas! No sé quién eres ni de\ndónde has salido, pero te lo agradezco\nde veras.")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf("\x0E\x01\x09\x04\x00\x08¿Cómo? ¿Que tú también estás\nbuscando a alguien?\n\n\nMmm... Pues ahora que lo mencionas,\nsí que recuerdo haber visto hace poco\na una jovencita con la cocorota\namarilla por aquí.")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf("\x0E\x01\x09\x04\x00\x02Por algún motivo, esa tal Zelda de la\nque hablas buscaba el templo que hay\nal fondo del bosque.\n\nLa advertí de que es un lugar peligroso,\npero no me hizo caso y allá que se fue.")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 396, 'param3': 6}
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 397, 'param3': 6}
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf("\x0E\x01\x09\x04\x00\x03Si continúas por aquella senda,\nllegarás a un templo.<pause0F> Pero está todo\ninfestado de monstruos, así que más\nte vale ir con cuidado.")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 126, 'param3': 6}
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\x1CD¡Ah, lo olvidaba!\n\n\n\nComo recompensa por encontrar a mis\nfieles amigos, quiero darte algo.\n\n\n\x0E\x01\x09\x04\x00\x08A ver... espera un momento...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf("\x0E\x01\x09\x04\x00\x09¡Y, fíjate tú qué casualidad, acabo de\nrecordar hacia dónde se fue aquella\nmuchacha!")
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
/*<381>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 380, 'param3': 6}
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
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
/*<179>*/ 						printf("\x0E\x01\x09\x04\x00\x03¿Dices que Machi, Poli y Menti están\na salvo? ¡Fantástico!\n\n\nPor desgracia, todavía queda <r<un\n>>compañero desaparecido. ¿Podrías\nasegurarte de que se encuentra bien?\n\nSe le da de miedo ocultarse entre los\nhierbajos de la zona, así que yo\nempezaría por ahí.\n\n\x0E\x01\x09\x04\x00\x02Si das con él, seguro que hago memoria\ny recuerdo el paradero de tu amiguita.")
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
/*<501>*/ 							printf("\x0E\x01\x09\x04\x00\x03Ajá... ¡Así que Machi, Poli y Menti\nestán bien! Es una noticia excelente.\n\n\nAunque mientras esos monstruos sigan\ncampando a sus anchas por el bosque,\nno pienso moverme de aquí.")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf("\x0E\x01\x09\x04\x00\x08Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <r<el compañero>> que\nfalta se encuentra bien?\n\nSe le da de miedo ocultarse entre la\nmaleza de la zona, así que yo empezaría\npor ahí.\n\n\x0E\x01\x09\x04\x00\x02Si das con él, seguro que hago memoria\ny recuerdo el paradero de tu amiguita.")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf("\x0E\x01\x09\x04\x00\x08¿Y dices que tú también buscas\na alguien?\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
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
/*<184>*/ 						printf("\x0E\x01\x09\x04\x00\x03¿Cómo? ¿Que Machi, Poli y Tili están\na salvo? ¡Fantástico!\n\n\nPor desgracia, todavía queda <r<un\n>>compañero desaparecido. ¿Podrías\nasegurarte de que se encuentra bien?\n\nSu pasión es trepar lo más alto posible,\nasí que yo empezaría por mirar en las\ncopas de los árboles.\n\n\x0E\x01\x09\x04\x00\x02Si das con él, seguro que hago memoria\ny recuerdo el paradero de tu amiguita.")
          					  case 1:
/*<213>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
/*<508>*/ 							printf("\x0E\x01\x09\x04\x00\x03Ajá... así que Machi, Poli y Tili\nestán a salvo, ¿no? ¡Excelente!\n\n\nPero mientras esos monstruos sigan\nmerodeando por el bosque, no podré\ndescansar tranquilo.")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf("\x0E\x01\x09\x04\x00\x08Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <r<el compañero>> que\nfalta se encuentra bien?\n\nSu pasión es trepar lo más alto posible,\nasí que yo empezaría por mirar en las\ncopas de los árboles.\n\n\x0E\x01\x09\x04\x00\x02Si das con él, seguro que hago memoria\ny recuerdo el paradero de tu amiguita.")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf("\x0E\x01\x09\x04\x00\x08¿Y dices que tú también buscas\na alguien?\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf("\x0E\x01\x09\x04\x00\x03Me alegro de que Machi y Poli estén\nsanos y salvos, pero sigo preocupado\npor los demás.\n\n¿Podrías averiguar si mis otros <r<dos\n>>compañeros se encuentran bien?\n\n\n\x0E\x01\x09\x04\x00\x08Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<214>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
/*<517>*/ 							printf("\x0E\x01\x09\x04\x00\x03Mmm... entendido. Es un alivio saber\nque Machi y Poli están bien.\n\n\nPero mientras esos monstruos sigan\ncampando a sus anchas por el bosque,\nno podré descansar tranquilo...")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf("\x0E\x01\x09\x04\x00\x02Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <r<dos >>compañeros\nque faltan se encuentran bien?\n\nSeguro que en cuanto des con ellos\nrecordaré hacia dónde se fue tu amiga.")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf("\x0E\x01\x09\x04\x00\x08¿Y dices que tú también buscas\na alguien?\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
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
/*<195>*/ 						printf("\x0E\x01\x09\x04\x00\x03¿Cómo dices? ¿Que Machi, Menti y Tili\nse encuentran bien? ¡Fantástico!\n\n\nPor desgracia, todavía queda <r<un\n>>compañero desaparecido. ¿Podrías\nasegurarte de que está a salvo?\n\nEs un maestro del camuflaje. Lo que\nmejor se le da es ocultarse entre los\narbustos, así que yo empezaría a buscar\npor ahí.\n\x0E\x01\x09\x04\x00\x02Si das con él, seguro que hago memoria\ny recuerdo qué fue de tu amiguita...")
          					  case 1:
/*<215>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
/*<526>*/ 							printf("\x0E\x01\x09\x04\x00\x03Ajá... Así que Machi, Menti y Tili\nestán a salvo. ¡No sabes cómo me\nalegro!\n\nAunque mientras esos monstruos sigan\nsueltos por el bosque, no podré dormir\ntranquilo...")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf("\x0E\x01\x09\x04\x00\x08Sé que es mucho pedir, pero ¿podrías\nasegurarte de que <r<el >><r<compañero >>que\nfalta se encuentra bien?\n\nEs un maestro del camuflaje. Lo que\nmejor se le da es ocultarse entre los\narbustos, así que yo empezaría a buscar\npor ahí.\n\x0E\x01\x09\x04\x00\x02En cuanto des con él, seguro que\nrecuerdo qué pasó con la jovencita que\nandas buscando...")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf("\x0E\x01\x09\x04\x00\x08¿Y dices que tú también buscas\na alguien?\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf("\x0E\x01\x09\x04\x00\x03Me alegra saber que Machi y Menti\nse encuentran a salvo, pero sigo muy\npreocupado por los demás.\n\n¿Te importaría buscar a los <r<dos\n>>que faltan?\n\n\n\x0E\x01\x09\x04\x00\x08Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<216>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
/*<535>*/ 							printf("\x0E\x01\x09\x04\x00\x03Mmm... Así que Machi y Menti están\nbien, ¿verdad?\n\n\nExcelentes noticias, pero mientras esos\nmonstruos sigan campando a sus anchas\npor el bosque, no podré descansar\ntranquilo.")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf("\x0E\x01\x09\x04\x00\x02Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <r<dos >>compañeros\nque faltan se encuentran bien?\n\nEn cuanto des con ellos, seguro que\nrecuerdo qué pasó con la jovencita\nque estás buscando...")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf("\x0E\x01\x09\x04\x00\x08¿Y dices que tú también buscas\na alguien?\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
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
/*<194>*/ 						printf("\x0E\x01\x09\x04\x00\x03No sabes cómo me alegro de que Machi\ny Tili estén a salvo, pero sigo muy\npreocupado por los demás.\n\nSi no es mucho pedir, ¿podrías\nbuscar a mis otros <r<dos >>compañeros?\n\n\n\x0E\x01\x09\x04\x00\x08Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
/*<544>*/ 							printf("\x0E\x01\x09\x04\x00\x03Mmm... ajá, así que Machi y Tili están\nbien. No sabes cómo me alegra oírlo.\n\n\nPero mientras esos monstruos sigan\nsueltos por el bosque, no podré dormir\ntranquilo.")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf("\x0E\x01\x09\x04\x00\x02Sé que es mucho pedir, pero ¿podrías\nasegurarte de que los <r<dos >>compañeros\nque faltan se encuentran bien?\n\nEn cuanto des con ellos, seguro que\nrecuerdo qué pasó con la jovencita\nque andas buscando...")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf("\x0E\x01\x09\x04\x00\x08¿Y dices que tú también buscas\na alguien?\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf("\x0E\x01\x09\x04\x00\x03¿Dices que Machi está a salvo? Pero\n¿y los otros? Sigo muy preocupado\npor ellos.\n\nSi no es mucho pedir, ¿podrías buscar\na los <r<tres >>que faltan?\n\n\n\x0E\x01\x09\x04\x00\x08Creo que tu amiguita se fue por allí.\n¿O fue por allá? Si supiera que mis\namigos están bien, me quedaría más\ntranquilo y podría recordarlo mejor.")
          					  case 1:
/*<218>*/ 						printf("\x0E\x01\x09\x04\x00\x06¡Juo, juo, juo!<pause0F> Ya veo que me has\ndescubierto a pesar de mi excelente\ncamuflaje.<pause0F> Está claro que eres alguien\nmuy especial.\nYo soy <b<Salvio>>, jefe de los kyus.\n\n[1]¿Y Zelda?[2]Tengo que\ndecirte algo")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf("\x0E\x01\x09\x04\x00\x08¿Zelda\x0E\x01\x06\x02\xFDCD?...<pause0F>\n\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo?! ¿Que has visto a alguno\nde mis fieles compañeros?")
/*<553>*/ 							printf("\x0E\x01\x09\x04\x00\x03Vaya, así que has visto a Machi y está\na salvo... ¡Estupenda noticia!\n\n\nPero mientras esos monstruos sigan\nmerodeando por el bosque, no podré\ndormir tranquilo.")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf("\x0E\x01\x09\x04\x00\x02Si no es mucha molestia, ¿podrías\nlocalizar a los <r<tres >>compañeros que\nfaltan y asegurarte de que están bien?\n\nEn cuanto me confirmes que están\ntodos sanos y salvos, seguro que consigo\nrecordar qué fue de tu amiguita...")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf("\x0E\x01\x09\x04\x00\x08¿Y dices que tú también buscas\na alguien?\n\n\nAh, ya, te refieres a esa chica de la\ncocorota amarilla, la que se parece\na ti... Sí, estaba conmigo.\n\n\x0E\x01\x09\x04\x00\x0CPero hablaremos de eso más tarde.\nEl bosque se ha llenado de horribles\nmonstruos y todos mis pequeños\nhan huido despavoridos.\nMe preocupa mucho su bienestar,\ny mientras no estén a salvo no me\nveo capaz de hacer memoria...")
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
/*< 53>*/ 	printf("\x0E\x01\x12\x04\x00\x04Amo Link, tengo algunos\ndatos sobre el uso del <y<tirachinas>>.\n\n\n<g<Pulsando brevemente >>\x0E\x02\x04\x02\x29CD, el \x0E\x01\x12\x04\x00\x01amo puede\nvolver a sacarlo cuando lo desee, dado\nque es el último objeto que ha usado.\x0E\x01\x11\x02\xFCD\n\nEn caso de dificultad para acordarse\ndel procedimiento, se recomienda pulsar\n\x0E\x02\x04\x02\x25CD para acceder a <r<Ayuda>>.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf("")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x01Amo, hemos llegado al <b<bosque de Farone>>.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': -1, 'param3': 6}
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf("\x0E\x01\x12\x04\x00\x04Amo Link, hay un 80% de\nprobabilidades de que la llama esté\nen el lago.")
          	  case 1:
/*<587>*/ 		printf("\x0E\x01\x12\x04\x00\x04Amo Link, hay un 80% de\nprobabilidades de que la llama esté\ndetrás de esa puerta.\n\nDeduzco que el kyu ermitaño se refería\nal <r<rayo celestial >>cuando hablaba del\npoder de la Diosa necesario para\ncompletar el dibujo.\nAconsejo situarse frente a la puerta\ne invocar el rayo celestial para <g<trazar\nla parte del dibujo que falta>>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf("\x0E\x01\x05\x04K\x00La gran cantidad de agua que hay en\nla zona favorece el crecimiento de\nla vegetación. Ese inmenso árbol de ahí\nes un buen ejemplo.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf("\x0E\x01\x09\x04\x00\x01¡Hombre, pequeñajo, volvemos\na encontrarnos!")
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
/*<319>*/ 	printf("\x0E\x01\x05\x04K\x00En un entorno natural tan favorable,\nnumerosas especies han encontrado\nsu hábitat.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CD¡Espera, por Goron!\n\n\n\n¿Es que no vas a ayudarme a descifrar\nel enigma de los cubos divinos?")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CD¡Espera, por Goron!\n\n\n\nTengo un favor que pedirte.")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CD¡Espera, por Goron!\n\n\n\n\x0E\x01\x09\x04\x17\x600Sé que me has visto...<pause0F> ¿Y aun así pasas\nde mí? ¿Es que te caigo mal?\n[1]Lo siento[2]Pues sí")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Así que tienes prisa porque estás\nbuscando a una jovencita. Tranquilo,\nque no te entretendré mucho tiempo;\nte lo prometo.")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Ya veo... En fin, es el sino de todos los\ngrandes exploradores. Casi nadie nos\ncomprende.\n\nPero te prometo que no te entretendré\ndemasiado tiempo, tranquilo.")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 404, 'param3': 6}
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 405, 'param3': 6}
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x04Amo Link, acabamos de\nobtener nuevos datos sobre el paradero\nde Zelda. Procedo a analizarlos...\n\nSegún he entendido, fue atacada por\nmonstruos pero consiguió escapar.<pause0F>\nSin embargo, su situación parece ser\naún de grave peligro.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 313, 'param3': 6}
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf("<pling>He registrado la ubicación del kyu\nMachi. Recomiendo consultarla en\nel mapa.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 223, 'param3': 6}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf("Considero que el contacto establecido\nentre estas criaturas y Zelda es la causa\nde la reacción del rastreador ante su\npresencia.\nEl jefe de los kyus huyó con Zelda, por\nlo que calculo que la probabilidad de\nque el rastreador también reaccione\nante él es del 85%.\nRecomiendo seguir utilizando el\nrastreador continuamente para\naveriguar el paradero de Zelda.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 229, 'param3': 6}
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 341, 'param3': 6}
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf("\x0E\x01\x09\x04\x00\x0D¡Buf! Vaya susto... Tienes unos amigos\nbastante raritos, ¿lo sabías?")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf("\x0E\x01\x09\x04\x00\x07Se te ve ansioso por encontrar a tu\namiguita y al <b<jefe>>. Cuando lo hagas,\n<r<dile que estoy >><r<a salvo>>, ¿de acuerdo?\n\n\x0E\x01\x09\x04\x00\x05¡Seguro que están los dos juntos!")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x09\x04\x00\x02Úsalo para abrirte paso hacia el templo\nque hay al fondo del bosque. ¡Ya verás\ncomo te resulta útil!")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf("\x0E\x01\x09\x04\x00\x08Venga, prueba a darle a esa li...<pause0F>\n¡Rayos!\n\n\nPillas las cosas al vuelo, ¿eh?<pause0F> Mejor,\nasí nos ahorramos las explicaciones.")
          		flw_365:
/*<365>*/ 		printf("\x0E\x01\x09\x04\x00\x02Pulsa \x0E\x02\x04\x02\x29CD para preparar el tirachinas.\nDespués, mantenlo pulsado para tensarlo\ny suéltalo para disparar.\x0E\x01\x11\x02\xFCD\n\nSi te quedas sin munición, siempre\npuedes <g<recoger semillas >>de los árboles.")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf("\x0E\x01\x09\x04\x00\x06¡Ojalá encuentres pronto a tu amiguita!\n¡Juo, juo!")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf("\x0E\x01\x09\x04\x00\x06¡Ojalá encuentres pronto a tu amiguita!\n¡Juo, juo!")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf("\x0E\x01\x09\x04\x00\x08Mira, prueba a darle a esa liana\nenrollada de ahí.")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf("\x0E\x01\x05\x04K\x00Infiero que Zelda se encuentra en\nalgún lugar de este bosque.\n\n\n\x0E\x01\x05\x04K\x00Recomiendo usar el rastreador para\nlocalizarla.")
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
/*<490>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CD¡Espera, por Goron!\n\n\n\n¿Es que no vas a ayudarme a descifrar\nel enigma de los cubos divinos?")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CD¡Espera, por Goron!\n\n\n\nTengo un favor que pedirte.")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CD¡Espera, por Goron!\n\n\n\n\x0E\x01\x09\x04\x17\x600Sé que me has visto...<pause0F> ¿Y aun así pasas\nde mí? ¿Es que te caigo mal?\n[1]Lo siento[2]Pues sí")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Así que tienes prisa porque estás\nbuscando a una jovencita. Tranquilo,\nque no te entretendré mucho tiempo;\nte lo prometo.")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Ya veo... En fin, es el sino de todos los\ngrandes exploradores. Casi nadie nos\ncomprende.\n\nPero te prometo que no te entretendré\ndemasiado tiempo, tranquilo.")
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
/*<197>*/ 	printf("Lamentablemente, Zelda ya no está\ncon el jefe.<pause0F> Con todo, es posible que\neste disponga de información útil\npara la misión.\nLa probabilidad de que ayudar al jefe a\nbuscar a los kyus desaparecidos sirva\npara encontrar a Zelda es del 85%.\n\nHe añadido <pling><r<el aura de los kyus >>como\nobjetivo de rastreo.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf("¿Necesita el \x0E\x01\x12\x04\x00\x01amo una explicación sobre\ncómo cambiar el objetivo de rastreo?\n[1]Sí[2-]No")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf("Al pulsar (^), se mostrarán los distintos\nobjetivos de rastreo.\x0E\x01\x11\x02\x8CD\n\n\nElige el que quieras y suelta (^)\npara confirmar tu selección.\x0E\x01\x11\x02\x8CD\n\n\nSi no se desea rastrear ningún objetivo,\nsolo hay que elegir la <g<vista subjetiva >>y\nsoltar (^).\n[1]Otra vez[2-]Entendido")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf("La posición de los kyus que el \x0E\x01\x12\x04\x00\x01amo\nencuentre quedará registrada en el\nmapa y sus auras desaparecerán como\nobjetivos del rastreador.\nConsidero que el \x0E\x01\x12\x04\x00\x01amo ya está listo para\nponerse a buscar a los kyus.")
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
/*<424>*/ 	printf("\x0E\x01\x09\x04\x15\x1908¡Uoooh! ¡El cubo ha salido volando!\n\n\n\n\x0E\x01\x09\x04\x13\x1B00Por lo visto, ha reaccionado a la luz\nde tu espada...\n\n\n\x0E\x01\x09\x04\x00\x1B05¿Adónde crees que habrá ido?\nEl enigma se complica aún más...\n\n\n\x0E\x01\x09\x04\x16\x1E00Según los antiguos escritos, hay cubos\ndesperdigados por todo el mundo.\n\n\n\x0E\x01\x09\x04\x00\x1700Estaría bien que los buscaras en tus\nviajes. Y, si averiguas algo sobre ellos,\n¡no te olvides de venir a contármelo!")
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
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 237, 'param3': 6}
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf("El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 344, 'param3': 6}
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf("\x0E\x01\x09\x04\x00\x14¡Uaaargh! ¡Casi me quedo tieso del susto!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 670, 'param3': 6}
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf("He marcado <pling>la localización del kyu Poli\nen el mapa. Por desgracia, parece que\nZelda no se encuentra con él.")
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
/*<581>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 328, 'param3': 6}
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 331, 'param3': 6}
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf("\x0E\x01\x09\x04\x00\x07¡Hola, soy yo! ¿Has encontrado ya\na tu amiga?\n[1]¿Quién eres?[2]Aún no...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf("\x0E\x01\x09\x04\x00\x13¡Pero bueno! ¿Ya te has olvidado de\nmí, o qué? Soy yo, <b<Machi>>... Snif.")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf("\x0E\x01\x09\x04\x00\x07En fin, ¡no sabes lo contento que estoy\npor haberme reunido de nuevo con todos\nmis compañeros! ¡Y todo gracias a ti!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x05¡Espero que encuentres pronto a tu\namiguita! ¡Cuídate mucho!")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf("\x0E\x01\x09\x04\x00\x13Vaya, pues lo siento... Pero bueno,\nal menos ya sabes hacia dónde fue,\n¿no?")
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
/*<273>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 246, 'param3': 6}
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf("El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 375, 'param3': 6}
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf("\x0E\x01\x09\x04\x00\x0D¡Menudo susto! Creía que era otro\nde esos malditos monstruos...")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 662, 'param3': 6}
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf("He marcado <pling>la localización del kyu\nMenti en el mapa. Por desgracia,\nparece que Zelda no se encuentra\ncon él.")
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
/*<376>*/ 						printf("El rastreador no percibe ninguna señal\nadicional por los alrededores.\n\n\nSugiero volver a visitar al jefe para\npedirle información.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 350, 'param3': 6}
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf("\x0E\x01\x09\x04\x00\x05¿Dices que has visto al jefe? Bien,\nme alegro de que esté a salvo.\n\n\n\x0E\x01\x09\x04\x00\x14Oye, si vuelves a verlo, ¡no te olvides\nde decirle dónde estoy!")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf("\x0E\x01\x09\x04\x00\x04Es un hecho conocido que las técnicas\nde camuflaje del jefe son insuperables.\nTe va a costar un montón encontrarlo,\nque lo sepas.")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf("He marcado <pling>la localización del kyu Tili\nen el mapa. Por desgracia, parece que\nZelda no se encuentra con él.")
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
/*<421>*/ 	printf("Al héroe caído del cielo:\napunta con tino a la estrella\nhacia donde parte al vuelo\nel ave con sus alas abiertas.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf("La vegetación de esta zona es idéntica\na la del bosque de Farone. Deduzco que\nnos encontramos en las profundidades\nde dicho bosque.\nZelda se dirigió hacia el templo, por\nlo que recomiendo que nosotros\ntambién nos encaminemos hacia allí.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf("\x0E\x01\x12\x04\x00\x04Amo Link, percibo el aura\nde <b<Zelda >>en el interior de este edificio.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("Sin embargo, también percibo la\npresencia de un gran número de\nmonstruos. ¿Continuamos?\n[1]¡Vamos![2]Mejor no")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf("El exceso de confianza es peligroso.\nNadie acudirá a este lugar si la\nsituación se tuerce.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf("Cuando el peligro sea evidente, <g<volver\na Celéstea >>y aprovechar para mejorar\nel equipo puede ser una buena idea.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf("En general, siempre es buena idea\nhacerse con un <r<escudo >>para protegerse\ny llevar alguna <r<poción >>con la que\npoder curarse.")
          			flw_606:
/*<606>*/ 			printf("Prosigamos con la búsqueda de Zelda.")
          		  case 1:
/*<604>*/ 			printf("Detecto que el \x0E\x01\x12\x04\x00\x01amo no se ha equipado\ncon un <r<escudo>>. Recomiendo tener uno\na mano en todo momento.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf("El miedo es un mecanismo instintivo\nde defensa muy útil. No hay motivo\npara avergonzarse.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo, tengo información importante.\n<pling><r<El rastreador ha reaccionado>> al\nencontrarnos con el último espécimen.\n[1]¿En serio?[2]¿Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf("\x0E\x01\x12\x04\x00\x05En efecto, amo. Deduzco que dicho\nespécimen pertenece a la pacífica tribu\nde los <b<kyus >>que habita en el bosque.\n\nSon seres inteligentes, capaces de\ncomunicarse con otras especies.<pause0F>\nPor desgracia, no se trataba de Zelda.\n\nDesconozco el motivo por el cual\nel rastreador ha reaccionado ante\nla presencia de ese kyu, pero aconsejo\nseguirle el rastro para averiguarlo.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 6}
          	  case 1:
/*< 17>*/ 		printf("La probabilidad de que se trate de\nZelda es del 5%. Deduzco que el\nespécimen pertenece a la pacífica tribu\nde los <b<kyus >>que habita en el bosque.\nSon seres inteligentes, capaces de\ncomunicarse con otras especies.<pause0F>\n\n\nDesconozco el motivo por el cual\nel rastreador ha reaccionado ante\nla presencia de ese kyu, pero aconsejo\nseguirle el rastro para averiguarlo.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf("Si el \x0E\x01\x12\x04\x00\x04amo necesita información en\nalgún momento, sugiero que pulse\n(v) para llamarme, y acudiré\nde inmediato.\x0E\x01\x11\x02\x9CD\nAl seleccionar <r<Consejos >>y,\na continuación, <r<Pistas>>, facilitaré\ndatos que resultarán de utilidad\npara progresar en la misión.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

