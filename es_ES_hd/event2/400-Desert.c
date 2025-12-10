          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "(...)")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "Hemos llegado a las <color blue<minas de Lanayru>coloroff>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "¿Quieres trabajar aquí?\nPues ya puedes ir quitándote ese gorro\ny poniéndote un casco como es debido.")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "Por esa puerta entran y salen las\nvagonetas; no te quedes ahí parado\no te atropellarán. Vamos, ¡apártate!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "Hemos llegado al <color blue<desierto de Lanayru>coloroff>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "(...)")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<304>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<305>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "(...)")
          		  case 1:
/*<342>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_307:
/*<307>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "(...)")
          			  case 1:
/*<306>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 307, 'param3': 31}
          				goto flw_307
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "Hemos llegado al <color blue<Templo del Tiempo>coloroff>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "Últimamente se ven por aquí unos\nbicharracos con muy mala pinta...\nComo les dé por ponerse violentos,\nnos van a hacer picadillo.")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<309>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "¿Todavía andas por aquí? Te dije que\ntuvieras cuidado, ¡pero no tanto!")
          			  case 1:
/*<310>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "¿Buscas a un dragón?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Si el que te interesa es el <color blue<dragón del\ntrueno>coloroff>, te diré que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Es el único dragón\nque conozco.")
/*<341>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Listo, ahora podrá <color red<coger objetos con\nlas mandíbulas>coloroff>. No está nada mal, ¿eh?\n\n\nBueno, pues adiós y gracias. Y ve con\nmucho cuidado, este lugar está plagado\nde peligros.")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<280>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<274>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x13030000>¡Me has salvado!")
/*<275>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 276, 'param3': 47}
/*<276>*/ 				set_camera(6, 0)
/*<278>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 277, 'param3': 15}
/*<277>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 279, 'param3': 17}
/*<279>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x13030000>Un poco más y me dejan sin batería\npara los restos...\n\n\nPara darte las gracias,<pause 30> voy a hacerle\nunos arreglillos a ese <color yellow<telescarabajo>coloroff>\ntuyo.\n\n<0x10009:0x13030000>A ver, trae para acá...")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "¡So... socorro!\n")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10005:0x005a0000><0x10012:0x0000000b>Amo, aviso importante: hemos llegado\na las <color blue<minas de Lanayru>coloroff>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Enhorabuena, <0x10012:0x00000004>amo <heroname>.")
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 88 */ "El <0x10012:0x00000001>amo ha superado el juicio.\nSu espíritu ha madurado y ahora puede\ndirigirse en pos de la llama que ha de\nfortalecer su espada.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "Las <color yellow<zarpas >coloroff>son una de las reliquias\nlegadas por la Diosa.\n\n\nAl lanzarlas, permiten desplazarse\nvolando hasta <color red<dianas >coloroff>o <color red<muros de\nhiedra>coloroff>.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "Confirmo que la llama está oculta\nen algún rincón de este desierto.\nUn lugar que mi <0x10012:0x00000001>amo no ha pisado\ntodavía.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "(...)")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf(/* textboxtype: 0, unk: 2, line: 106 */ "<0x10009:0x00162007>¡Ahora ya puedo entrar e investigar\nhasta hartarme! <0x10009:0x00002000>Y luego tengo que\npasar sin falta por la tierra del\npresidio.")
          		  case 1:
/*<126>*/ 			printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00151b09>¿Pero qué...? ¿Cómo has conseguido\nentrar?\n\n\n<0x10009:0x00151b00>¡Así que había un pasadizo secreto!\nAcabáramos... Por favor, ¡dime dónde\nestá!\n\n<0x10009:0x00082100>Ya estaba a punto de darme por\nvencido cuando de pronto se oyó\nese ruido... Y ahora veo el camino\nlibre.\n<0x10009:0x00162007>¡En fin, ya puedo entrar e investigar\nhasta hartarme! <0x10009:0x00002000>Y luego tengo que\npasar sin falta por la tierra del\npresidio.")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 2, unk: 0, line: 105 */ "<0x10009:0x00162007>¡Sabe Goron que me muero de ganas\npor echar un vistazo ahí dentro!...\nAy, ¿no habrá ningún otro camino\npor el que entrar?")
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 0, unk: 2, line: 103 */ "<0x10009:0x00000002>¡Otra vez nos encontramos!\nPrecisamente yo no soy quién para\ndecirlo, pero estás en todas las salsas,\nmuchacho.\n<0x10009:0x00172008>Bah, ahora no es momento de hablar\nde eso... ¡He hecho el descubrimiento\ndel siglo!\n\n<0x10009:0x00002000>Este lugar es conocido como el <color blue<Templo\ndel Tiempo>coloroff>, un sitio de lo más sagrado\ny venerado.\n\n<0x10009:0x0000190a>¡Y aquí me he topado con <color red<nativos de\nla legendaria >coloroff><color red<isla de la Diosa>coloroff>, nada\nmenos!\n\n<0x10009:0x00001900>Sus ropas eran idénticas a las que se\ndescriben en los antiguos manuscritos,\ny se parecían un poco a ti.\n\n<0x10009:0x00082105>Eran dos, y los vi pasar por esa misma\npuerta. Traté de seguirlos, pero... \n\n\n<0x10009:0x00151b00>De repente hubo una gran explosión\ny la puerta del templo quedó hecha\npedazos, como puedes ver.\n\n<0x10009:0x00162007>Ahora no hay forma de pasar al otro\nlado... ¡Por Goron, qué rabia!")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "Confirmo que se ha producido un\ncambio en el equilibrio del\nespacio-tiempo en este lugar.\n\nGolpear la roca azul ha provocado\nun retroceso temporal que solo afecta\na la zona circundante, <sound 4>cuyo aspecto\nactual es <color red<el que tenía en el pasado>coloroff>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 2, unk: 0, line: 108 */ "¡Tomemos más medidas para\nevitar accidentes laborales!\n- El capataz")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "Si te interesan los cronolitos, deberías\npasarte algún día por la <color blue<refinería de\nLanayru>coloroff>.")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "Confirmo la presencia de otras <color blue<fuentes\nde alimentación >coloroff>similares en las\ninmediaciones.\n\nEs posible usar el <sound 4><color red<rastreador >coloroff>para\naveriguar su ubicación.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<291>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "(...)")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "(...)")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<311>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<312>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 0, unk: 0, line: 23 */ "(...)")
          		  case 1:
/*<344>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<313>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf(/* textboxtype: 0, unk: 0, line: 77 */ "")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 0, unk: 2, line: 109 */ "Objetivo del mes:\n150 contenedores\n- El capataz")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "El mineral cronolítico es la fuente de\nenergía gracias a la cual funcionamos\nnosotros y todas estas máquinas.")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 2, unk: 0, line: 102 */ "<0x10009:0x2f080709>¡Oooh, <heroname>!\n¡Has entrado en la morada\ndel dragón!<pause 84>\n\n<0x10009:0x2f010805><0x10008:0x02cd>Mmm, qué rabia...<pause 90>\n\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Te me has adelantado...")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf(/* textboxtype: 0, unk: 2, line: 100 */ "He encontrado la senda que lleva a\nla morada del <color red<<0x10009:0x2f080d0a>dragón del trueno>coloroff>.\nPero...<pause 45> <0x10006:0xffcd><0x10009:0x2f0d0800>es demasiado estrecha y no\nquepo en ella.\n<0x10006:0xffcd><0x10009:0x2f080700>Tanto esfuerzo para nada...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<272>*/ 				printf(/* textboxtype: 2, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Vaya por Goron, ¡pero si es\n<heroname>!")
/*<273>*/ 				set_camera(5, 0)
/*<108>*/ 				printf(/* textboxtype: 0, unk: 0, line: 98 */ "Oye, ¿has encontrado ya la <color blue<llama\nsagrada>coloroff> de la que hablamos?\n\n\nLlevo sin quitármelo de la cabeza desde\nque lo mencionaste, ¡así que cuenta!\n\n\n<0x10009:0x2f080407>(.<pause 20>.<pause 20>.<pause 20>) ¡Vaya! Tras tantas aventuras,\n¡por fin has dado con ella!\n\n\nEstá claro que eres alguien\nespecial, <heroname>.")
/*<355>*/ 				printf(/* textboxtype: 2, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>Bueno, va siendo hora de contarte lo\nque he descubierto sobre la leyenda de\nlos tres dragones.<pause 15>\n\n¡Hay muchos secretos escondidos bajo\nlas arenas de este desierto!\n\n\nComo por ejemplo ese <color red<pasadizo tan\nestrecho>coloroff><sound 4> por el que no quepo.\n\n\n<0x10009:0x2f000d00>Sospecho que lleva hasta el lugar donde\nmora el <color red<dragón del trueno>coloroff>.\n\n\n<0x10009:0x2f000800>Estoy seguro de que todo esto guarda\nrelación con esos robots que hay por\naquí.<pause 15>\n\n<0x10009:0x2f010807><0x10006:0xffcd>El <color red<dragón del trueno>coloroff>, robots,\ncronolitos<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>¡Menuda aventura!")
/*<107>*/ 				printf(/* textboxtype: 0, unk: 2, line: 97 */ "<0x10009:0x00080d00>Por cierto, <heroname>, tengo\nnoticias sobre la excavación que me\nfinanciaste.<pause 20>\n\n¡He encontrado todo un yacimiento de\ncronolitos! Ahora <0x10009:0x2f000d01>puedo devolverte tu\ninversión multiplicada por diez.")
/*<106>*/ 				rupees += 100;
          				flw_282:
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
/*<269>*/ 				story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<357>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<358>*/ 				story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<359>*/ 				story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          				goto flw_149
          			  case 1:
/*<270>*/ 				printf(/* textboxtype: 2, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Vaya por Goron, ¡pero si es\n<heroname>!")
/*<271>*/ 				set_camera(5, 0)
/*<211>*/ 				printf(/* textboxtype: 0, unk: 0, line: 98 */ "Oye, ¿has encontrado ya la <color blue<llama\nsagrada>coloroff> de la que hablamos?\n\n\nLlevo sin quitármelo de la cabeza desde\nque lo mencionaste, ¡así que cuenta!\n\n\n<0x10009:0x2f080407>(.<pause 20>.<pause 20>.<pause 20>) ¡Vaya! Tras tantas aventuras,\n¡por fin has dado con ella!\n\n\nEstá claro que eres alguien\nespecial, <heroname>.")
/*<356>*/ 				printf(/* textboxtype: 2, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>Bueno, va siendo hora de contarte lo\nque he descubierto sobre la leyenda de\nlos tres dragones.<pause 15>\n\n¡Hay muchos secretos escondidos bajo\nlas arenas de este desierto!\n\n\nComo por ejemplo ese <color red<pasadizo tan\nestrecho>coloroff><sound 4> por el que no quepo.\n\n\n<0x10009:0x2f000d00>Sospecho que lleva hasta el lugar donde\nmora el <color red<dragón del trueno>coloroff>.\n\n\n<0x10009:0x2f000800>Estoy seguro de que todo esto guarda\nrelación con esos robots que hay por\naquí.<pause 15>\n\n<0x10009:0x2f010807><0x10006:0xffcd>El <color red<dragón del trueno>coloroff>, robots,\ncronolitos<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>¡Menuda aventura!")
          				goto flw_282
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf(/* textboxtype: 0, unk: 1, line: 91 */ "Informe para el <0x10012:0x0000000b>amo...")
/*<295>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 296, 'param3': 30}
/*<296>*/ 	printf(/* textboxtype: 0, unk: 0, line: 92 */ "Detecto que las claves de esta fuente\nde alimentación coinciden con las\nobtenidas en las otras tres que\nhemos activado anteriormente.\nProbablemente guarden alguna\nrelación.")
/*<297>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "(...)")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "(...)")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<314>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<315>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "No se cansa uno de mirar el Templo\ndel Tiempo... ¡Qué prodigio!")
          			  case 1:
/*<316>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "¿Buscas a un dragón?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Si el que te interesa es el <color blue<dragón del\ntrueno>coloroff>, te diré que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Es el único dragón\nque conozco.")
/*<343>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "¡Ay, qué miedo he pasado!\nMenos mal que has venido a salvarme.")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>Este es el <color blue<Templo del Tiempo>coloroff>, el\nlugar donde está el sagrado <color blue<Portal\ndel Tiempo>coloroff>, construido por la Diosa.\n\n<0x10009:0x00030900>Justo hoy me ha tocado turno de\nlimpieza. Si quieres ir al Portal del\nTiempo, está detrás de esa puerta.\n\n<0x10009:0x00030900>¿Cómo?\n¿Que si no hay otro modo de llegar?\n\n\n<0x10009:0x00030900>Bueno... la <color blue<refinería de Lanayru >coloroff>y el\n<color blue<Templo del Tiempo>coloroff> están <color red<conectados\nbajo tierra>coloroff>. ¡Y la refinería está aquí!")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			wait_frames(30)
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			wait_frames(30)
/*< 97>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "¿Uh? Este mapa lo veo un poco raro...\nEspera, que te lo corrijo en un pispás.")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00030900>La refinería de Lanayru está justo\nahí delante. ¡Ve con cuidado!")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "¡Socorro!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10012:0x00000001>Amo, aviso importante: ha dejado de\npercibirse la presencia de <color blue<Zelda>coloroff>.")
/*<284>*/ 	set_camera(7, 0)
/*<285>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "Su rastro se ha perdido por completo al\ndestruirse el portal. Confirmo que en\nestos momentos <sound 4><color red<no es posible rastrear\nsu paradero>coloroff>.")
/*<286>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "La persona que acompañaba a Zelda\ninstaba al <0x10012:0x00000001>amo a ir a la tierra del\npresidio y hablar con la anciana...\n\nSegún mis datos, la anciana sigue\nen el <color blue<templo del presidio>coloroff>, por lo que\nsugiero que nos dirijamos allí.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "Turnos de limpieza en el\nTemplo del Tiempo este mes\n- El capataz")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "No es habitual ver humanos por aquí.\n¿Acaso te dedicas a estudiar los\ncronolitos?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<317>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<318>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "(...)")
          		  case 1:
/*<346>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<319>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 2, unk: 0, line: 111 */ "¡Por un Lanayru más verde,\nplantemos más árboles!\n- El capataz")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "(...)")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<320>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<321>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf(/* textboxtype: 0, unk: 1, line: 34 */ "Esto es la <color blue<refinería de Lanayru>coloroff>, donde\nse procesa el mineral cronolítico.\n\n\n<0x10009:0x13030000>Ah, no se cansa uno de admirar este\nprodigio de la tecnología...")
          					  case 1:
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "¿Has logrado introducir las claves?\nVaya, impresionante.\n\n\n<0x10009:0x13030000>Bueno, pues esto es la <color blue<refinería de\nLanayru>coloroff>, donde se procesa el mineral\ncronolítico.\n\n<0x10009:0x13030000>¡No me canso de admirar esta maravilla\nde la tecnología!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<322>*/ 					printf(/* textboxtype: 0, unk: 0, line: 62 */ "¿Buscas a un dragón?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Si el que te interesa es el <color blue<dragón del\ntrueno>coloroff>, te diré que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Es el único dragón\nque conozco.")
/*<345>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "¿Ya tienes las tres claves?\nPero solo con tenerlas no basta para\nabrir la puerta de la refinería...")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "¿Quién eres?\n\n\n\n<0x10009:0x13030000>Esta es la fuente de alimentación\nde la entrada a la refinería de\nLanayru.\n\n<color red<<0x10009:0x13030000>>coloroff>El mecanismo no se abre si no se \nintroducen antes las <color red<tres claves\nde seguridad>coloroff>.")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10005:0x005a0000>El paso de los siglos las ha convertido\nen un lugar árido y seco.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 66 */ "Calculo que han transcurrido varios\nsiglos desde que este artilugio funcionó\npor última vez. Me resulta imposible\ncomprender lo que está diciendo.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<323>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<324>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "(...)")
          		  case 1:
/*<348>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<325>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10005:0x005a0000>Según mis cálculos, es muy posible\nque <color blue<Zelda >coloroff>se haya adentrado en esta\nárea.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "¡Han atacado a mi compañero hace\nun rato! Me temo lo peor... Lo van a\ndesguazar vivo...")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<288>*/ 	start()
/*<289>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 290, 'param3': 40}
/*<290>*/ 	wait_frames(45)
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "(...)")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<326>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<327>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "¿Has logrado introducir las claves?\nVaya, qué tío...")
          			  case 1:
/*<328>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "¿Buscas a un dragón?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Si el que te interesa es el <color blue<dragón del\ntrueno>coloroff>, te diré que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Es el único dragón\nque conozco.")
/*<347>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "¡Aaah! ¡¿Pero qué haces?!\n\n\n\n<0x10009:0x13030000>Que sepas que las claves por sí solas\nno sirven de nada. Solo con saberlas\nno basta para abrir la puerta a la\nrefinería.")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "¿Estás buscando las claves para entrar\nen la refinería de Lanayru?\n\n\n<0x10009:0x13030000>No me gusta nada la pinta que tienes...\nNo pienso enseñarte las claves, ¡no\nseñor! <0x10009:0x13030000>Y que no te vea yo tocar este\nmecanismo de aquí. \n¡Y mucho menos pincharlo con ese\nespadón que llevas!")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "Tienes una pinta muy rara...\nNo me fío un pelo de ti.\n\n\n<0x10009:0x13030000>Más te vale no tocar este mecanismo\nde aquí. ¡Y mucho menos pincharlo,\nque te veo venir!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<color blue<<0x10005:0x005a0000>>coloroff>Hemos llegado al <color blue<desierto de Lanayru>coloroff>.\nLa topografía del lugar ha sufrido\ngrandes cambios a causa de la\ndesertización.")
          }

          void entrypoint_400_76() {
/*<292>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "Hemos llegado al <color blue<Templo del Tiempo>coloroff>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<294>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "Ni se te ocurra tocar las rocas azuladas.\n¡Y hazte a un lado, que estamos\ntrabajando!\n")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "¿De dónde sales tú? Estamos\ntransportando mineral cronolítico\na la <color blue<refinería de Lanayru>coloroff>.\n\n<0x10009:0x13030000>Será mejor que no toques esa\nroca azulada, ¡es muy peligrosa!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<329>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<330>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "(...)")
          		  case 1:
/*<350>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<331>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<298>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10012:0x0000000b>Amo <heroname>...\nConfirmo que ya hemos obtenido\nlas tres claves que necesitamos.\n\nSugiero que nos dirijamos a la <color red<fuente\nde alimentación >coloroff>que hay a la entrada\nde la <color blue<refinería de Lanayru>coloroff>.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "(...)")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<332>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<333>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "¿Has descubierto las claves?\n¿De verdad? Me dejas de piedra...")
          			  case 1:
/*<334>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "¿Buscas a un dragón?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Si el que te interesa es el <color blue<dragón del\ntrueno>coloroff>, te diré que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Es el único dragón\nque conozco.")
/*<349>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "¡Aaaah! ¡¿Pero qué haces?!\n\n\n\n<0x10009:0x13030000>Que sepas que las claves por sí solas\nno sirven de nada. Solo con saberlas\nno basta para abrir la puerta a la\nrefinería.")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "¿Estás buscando las claves para\nentrar en la refinería de Lanayru?\n\n\n<0x10009:0x13030000>No me gusta nada la pinta que tienes...\nNo pienso enseñarte las claves, ¡no\nseñor! <0x10009:0x13030000>Y que no te vea yo tocar este\nmecanismo de aquí. \n¡Y mucho menos pincharlo con ese\nespadón que llevas!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "Vaya pintas que tienes...\nNo pareces muy de fiar.\n\n\n<0x10009:0x13030000>Ni se te ocurra tocar este mecanismo\nde aquí. ¡Y mucho menos pincharlo!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10005:0x005a0000>Confirmo la presencia de <color red<arenas\nmovedizas >coloroff>en la zona. La probabilidad\nde caer en ellas sin darse cuenta supera\nel 30%.")
          }

          void entrypoint_400_78() {
/*<300>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 0, unk: 2, line: 94 */ "<0x10012:0x0000000b>Amo <heroname>, mi análisis\nindica que, para activar este\n<color red<dispositivo>coloroff>, hará falta algún tipo\nde fuente de energía eléctrica.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<335>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<336>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "(...)")
          		  case 1:
/*<352>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<337>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10005:0x005a0000>Sugiero consultar el mapa con (-)<color red<<sound 4>\npara comprobar el terreno >coloroff>y minimizar\nlos riesgos.<0x10011:0x02cd>")
          }

          void entrypoint_400_79() {
/*<302>*/ 	start()
/*<303>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10012:0x0000000b>Amo <heroname>, dispongo de\ninformación importante...\n\n\nLa topografía de esta zona apenas\ncoincide en un 35% con la de nuestro\nmapa.\n\nConsidero que las correcciones hechas\npor el robot corresponden <color red<al estado\nde la zona en el pasado>coloroff>. La <sound 4>arena se\nlo ha tragado todo.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "Esta vagoneta se usa para transportar\nel mineral cronolítico. Que ni se te pase\npor la cabeza subirte, ¿me oyes?")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<338>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<339>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "¡¿Has descubierto las claves?!\nEsto sí que no me lo esperaba...")
          			  case 1:
/*<340>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "¿Buscas a un dragón?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Si el que te interesa es el <color blue<dragón del\ntrueno>coloroff>, te diré que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Es el único dragón\nque conozco.")
/*<351>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "¡Aaah! ¡¿Pero qué haces?!\n\n\n\n<0x10009:0x13030000>Que sepas que las claves por sí solas\nno sirven de nada. Solo con saberlas\nno basta para abrir la puerta a la\nrefinería.")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf(/* textboxtype: 0, unk: 1, line: 46 */ "¿Estás buscando las claves para\nentrar en la refinería de Lanayru?\n\n\n<0x10009:0x13030000>No me gusta nada la pinta que tienes...\nNo pienso enseñarte las claves,\n¡no señor! <0x10009:0x13030000>Y que no te vea yo tocar\neste mecanismo de aquí. \n¡Y mucho menos pincharlo con ese\nespadón que llevas!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "Vaya pintas que tienes...\nNo pareces muy de fiar.\n\n\n<0x10009:0x13030000>Ni se te ocurra tocar este mecanismo\nde aquí. ¡Y mucho menos pincharlo!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10005:0x005a0000>Según mis cálculos, <color blue<Zelda >coloroff>ha debido de\nabandonar la zona hace poco. Además,\nconfirmo que nos movemos sobre un\nterreno peligroso.\nSugiero ir en su busca cuanto antes\npara averiguar por qué hizo lo que\nhizo en <color blue<<0x10005:0x005a0000>Eldin>coloroff>.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "(...)")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "Informe para el <0x10012:0x0000000b>amo...\n\n\n\nEn el emplazamiento actual <0x10012:0x00000002>ya no nos\nhundimos en las arenas movedizas.\nSugiero confirmar posición en el mapa.\n")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "Detecto que justo por este punto pasa\nuna antigua calzada, pero actualmente\nno se ve al estar oculta por la arena\ndel desierto.\nEs posible avanzar por este camino\nsin miedo a las arenas movedizas.\n\n\nSugiero marcar en el mapa el trazado\nde dicha calzada.")
/*<212>*/ 	printf(/* textboxtype: 0, unk: 0, line: 83 */ "Aconsejo colocar <color blue<bastantes>coloroff> <sound 4>balizas\npara distinguir el camino fácilmente.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "(...)")
          }

          void entrypoint_400_80() {
/*<353>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "Tanto en el desierto de Lanayru como\nen otras zonas es posible encontrar,\nen ocasiones, <color blue<plantas rodadoras>coloroff>.\n\nSe trata de un material muy útil,\ny atraparlo no resultará nada\ncomplicado si se dispone de un\n<color red<cazamariposas>coloroff>.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "¡No tengo ganas de cháchara!\nEste es un trabajo muy duro, haz el\nfavor de no molestar.")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Vaya por Goron, ¡pero\nsi ese que va por ahí es\n<heroname>!\n\n<0x10006:0xffcd><0x10008:0x01cd>Un momento, ¡espera!<pause 15>\nTengo que hablar contigo.<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Sube un momento, por favor.")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

