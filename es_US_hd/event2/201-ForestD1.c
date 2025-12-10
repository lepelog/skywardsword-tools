          void entrypoint_201_51() {
/*<  2>*/ 	start()
/*< 12>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "")
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 0, line: 53 */ "")
          	}
          }

          void entrypoint_201_17() {
/*< 49>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "Detecto que el nuevo aparato con aspecto\nde insecto <sound 4>puede <color red<volar>coloroff>.\n\n\nTras echarlo a volar, el <0x10012:0x00000001>amo puede\n<color red<controlarlo a distancia>coloroff> y golpear\ncon él pequeños objetos.\n\nCuando el <0x10012:0x00000001>amo desee usarlo, deberá\noprimir <icon 41>. Al oprimir <icon 37> obtendrá \ninformación sobre su funcionamiento\ny modo de uso.<0x10011:0x0fcd><0x10011:0x0bcd>")
          }

          void entrypoint_201_52() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "")
          }

          void entrypoint_201_18() {
/*< 72>*/ 	start()
/*<228>*/ 	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
/*< 75>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "He podido detectar la presencia\nde <color yellow<agua sagrada>coloroff> en el interior\nde este templo, pero aquí resulta\n<sound 4><color red<imposible usar el rastreador>coloroff>.\nA juzgar por la fuerza de la señal que\nobtuvimos en el exterior, calculo que\nse halla en la estancia más profunda.")
/*<209>*/ 		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
/*<204>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 30}
/*<205>*/ 		wait_frames(15)
/*<206>*/ 		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
/*<208>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Recomiendo dirigirnos a la zona\nmás remota del templo tomando\ncomo referencia el punto del mapa\nmarcado con (X).")
/*<207>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 78, 'param3': 34}
/*< 78>*/ 		printf(/* textboxtype: 0, unk: 2, line: 13 */ "Detecto la presencia de muchos más seres\nmalignos que la última vez que pasamos\npor aquí. La situación es muy peligrosa.")
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 2, line: 13 */ "Detecto la presencia de muchos más seres\nmalignos que la última vez que pasamos\npor aquí. La situación es muy peligrosa.")
          	}
          }

          void entrypoint_201_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 7, line: 1 */ "Dentro de la sala ubicada en el\ncentro hay un mapa del templo.\nToca las gemas marcadas con (X)\nen el mapa para poder seguir.")
          }

          void entrypoint_201_53() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10012:0x00000004>Amo <heroname>, según lo que\nacabo de traducir, <color blue<Zelda >coloroff>se dirigió\na este lugar para purificarse.\n\nCalculo un 97% de probabilidades\nde que a continuación se encaminara\nhacia el manantial de la <color blue<región de\nEldin>coloroff>.\nSu medio de desplazamiento, en\ncualquier caso, sigue siendo un\ncompleto misterio.")
/*< 87>*/ 	set_camera(1, 0)
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "Sugiero colocar en el pedestal de\n<color blue<Neburia >coloroff>la litografía que el <0x10012:0x00000001>amo\nha encontrado.\n\nPresumo que así surgirá una nueva\n<color red<<color red<<sound 4><color red<columna de luz >coloroff>desde la región en la\nque se halle Zelda.")
/*< 88>*/ 	set_camera(-1, 0)
/*<  9>*/ 	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
          	  case 0:
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "El <0x10012:0x00000001>amo puede regresar de nuevo a\nlos cielos usando la <color blue<estatua >coloroff>que hay\nen el exterior.")
          		flw_79:
/*< 79>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 80>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 81, 'param3': 36}
/*< 81>*/ 		wait_frames(15)
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "El mecanismo necesario para volver\na Neburia se encuentra en el bosque\nque hemos atravesado antes.")
          		goto flw_79
          	}
          }

          void entrypoint_201_19() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Detecto la presencia cercana\nde <color yellow<agua sagrada>coloroff>. Puesto que no\nse detecta ningún aura enemiga,\naquí sí es posible <color red<usar el rastreador>coloroff>.")
          }

          void entrypoint_201_02() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Al héroe caído del cielo:\nEscucha y presta atención\na la voz del dócil siervo\nque te trajo a esta región.")
          }

          void entrypoint_201_54() {
/*< 23>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 47, 'param2': 0, 'next': 167, 'param3': 40}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 330, 'param2': 0, 'next': 168, 'param3': 51}
/*<168>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 169, 'param3': 17}
/*<169>*/ 	set_camera(9, 0)
/*< 26>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 0, line: 65 */ "Existe un 95% de probabilidades de que\nesta agua sea idéntica a la de la marmita\nde la dragona del agua. Sugiero regresar\nante ella.")
/*< 82>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*<264>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 36}
/*< 84>*/ 		set_camera(10, 0)
/*<170>*/ 		wait_frames(15)
          	  case 1:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 66 */ "Esta agua es distinta al agua común,\npues oculta una poderosa energía\nen su interior.\n\nSi entrara en contacto con un cuerpo\nque vibre con una frecuencia similar,\nes probable que su energía aumente\naún más.")
/*<166>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          	}
          }

          void entrypoint_201_03() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 7, unk: 0, line: 3 */ "Hay dos puertas a los lados;\nuna arriba y la otra abajo.\nAquel que golpee las gemas,\nlas pasará sin problemas.")
          }

          void entrypoint_201_55() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Mmm...<pause 15> No está mal para tratarse\nde un mocoso como tú.\n\n\nPero no creas que ha sido gracias\na tu habilidad.<pause 15> No serías nada sin\nesa espada.")
          }

          void entrypoint_201_20() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10012:0x00000004>Amo, es muy probable que el siervo al\nque hace referencia la litografía sea\nyo, <color blue<Fay>coloroff>.\n\nCon objeto de ayudar al <0x10012:0x00000002>amo, la Diosa\nme confió todos sus conocimientos\nsobre esta tierra.\n\nSiempre que algo llame la atención\ndel <0x10012:0x00000002>amo, basta con oprimir (v) para\nrequerir mi presencia.<0x10011:0x09cd>\n\nTambién es posible <color green<centrar >coloroff><color green<la vista >coloroff>en\nun objeto con (Z) y después <color red<oprimir >coloroff>(v)\npara obtener información específica\nsobre dicho objeto.<0x10011:0x07cd><0x10011:0x09cd>")
/*< 93>*/ 	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
          }

          void entrypoint_201_04() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 7, line: 4 */ "")
          }

          void entrypoint_201_56() {
/*< 36>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "Me temo que he perdido demasiado\ntiempo jugando contigo. Ya no puedo\ndetectar la presencia de la joven\nen este lugar.<pause 15>\nAsí que debo despedirme, chico de los\ncielos. Por esta vez te permitiré vivir,\npero procura no volver a cruzarte en\nmi camino.")
/*< 85>*/ 	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
          }

          void entrypoint_201_21() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Un guardián producto de la magia.\nTiene por costumbre mirar fijamente\nel extremo de los objetos puntiagudos.")
/*<216>*/ 	set_camera(13, 0)
/*<217>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "Los ojos están conectados entre sí de\nalgún modo por detrás del muro. Esto\nimpide que se los pueda derrotar de\nmanera independiente.")
/*<218>*/ 	wait_frames(15)
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_91() {
/*< 42>*/ 	start()
/*<195>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 196, 'param3': 32}
/*<196>*/ 	make_actor_do_something(3, 16)
/*<197>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 198, 'param3': 16}
/*<198>*/ 	wait_frames(5)
/*<194>*/ 	set_camera(12, 0)
/*<212>*/ 	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
/*<265>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<193>*/ 	make_actor_do_something(4, 16)
/*<255>*/ 	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          	  case 0:
/*<257>*/ 		entrypoint_201_96();
          	  case 1:
/*< 48>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 46, 'param3': 13}
/*< 46>*/ 		printf(/* textboxtype: 0, unk: 2, line: 22 */ "Esto es el colmo... Con lo que me costó\nquitarle la llave a ese monstruo, y\nahora la he perdido...")
/*< 47>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 43, 'param3': 13}
/*< 43>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Por todas las madrigueras...\n¡No recuerdo en qué agujero\nla enterré!")
/*<258>*/ 		switch (scene_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<259>*/ 			entrypoint_201_96();
          		  case 1:
/*< 44>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 			printf(/* textboxtype: 2, unk: 0, line: 24 */ "Pero bueno, tampoco iba a hacerme rico\ncon una simple llave. ¡Este mogma apunta\nmucho más alto! ¡A un gran tesoro!")
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	}
          }

          void entrypoint_201_57() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10005:0x004b0000>Esa espada tuya no está nada mal.<pause 15>\nPero me basta con observar <color red<tus\nmovimientos >coloroff>para poder detenerla\ncon una sola mano.")
          }

          void entrypoint_201_22() {
/*<220>*/ 	start()
/*<221>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10012:0x00000004>Amo <heroname>, confirmo que\nen los alrededores hay algo que puede\nseleccionarse como objetivo.\n\nUna vez fijado el objetivo con (Z),\nbasta con oprimir (v) y acudiré para\nproporcionar cualquier dato que\npueda servir de ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
/*<222>*/ 	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
/*<223>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 224, 'param3': 32}
/*<224>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 225, 'param3': 17}
/*<225>*/ 	wait_frames(15)
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 227, 'param3': 36}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_92() {
/*< 51>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 154, 'param3': 32}
/*<154>*/ 	make_actor_do_something(3, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 161, 'param3': 17}
/*<161>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 57, 'param3': 16}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3342, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Oye, espera, ¿nos conocemos? Tú eres\nel tipo que me encontré en el volcán,\n¿verdad que sí?")
/*< 56>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2065, 'next': 52, 'param3': 13}
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "¿También has venido a buscar tesoros?\n[1-]¡Exacto![2-]No")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 60, 'param3': 13}
/*< 60>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "¡Lo sabía! Se nota que eres un cazador\nde tesoros, muchacho.")
          		flw_61:
/*< 61>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2059, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "Supongo que tú también habrás\nvenido tras escuchar el acertijo\nque va contando el tipo ese que\nparece una roca con patas, ¿no?\n[1-]¿El goron?[2-]¿Acertijo?")
/*< 95>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2050, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Sí, ¿cómo era?... \"En el templo donde\ndanzan las mariposas, <sound 4><color green<haz que suene\nuna melodía>coloroff> maravillosa\".")
/*< 97>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 2057, 'next': 98, 'param3': 13}
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "Pero yo he cantado aquí los mejores temas\nde mi fantástico repertorio y no ha\npasado nada...")
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 100, 'param3': 13}
/*<100>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "Pero bueno, ya que he hecho el esfuerzo\nde venir hasta aquí, no pienso rendirme\ntan fácilmente. ¡No hay tesoro que se me\nresista!")
/*<157>*/ 		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<156>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 53>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 54, 'param3': 13}
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 1, line: 39 */ "¡A mí no me engañas! ¡Se nota\nque eres un cazador de tesoros!")
          		goto flw_61
          	}
          }

          void entrypoint_201_23() {
/*<229>*/ 	start()
/*<230>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000004>Amo <heroname>...\nDebo decir que el agua de esta\nestancia es...<pause 15> <color red<completamente normal>coloroff>.\n\nDeduzco que el <color yellow<agua sagrada >coloroff>de la\nque hablaba la dragona del agua se\nhalla en los confines del templo.")
          }

          void entrypoint_201_93() {
/*< 63>*/ 	start()
/*<199>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 200, 'param3': 32}
/*<200>*/ 	make_actor_do_something(3, 16)
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 202, 'param3': 16}
/*<202>*/ 	wait_frames(5)
/*<160>*/ 	set_camera(11, 0)
/*<213>*/ 	zone_temp_flags[56 /* 0x6 01 */] = true;
/*<203>*/ 	make_actor_do_something(4, 16)
/*< 69>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4364, 'next': 67, 'param3': 13}
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "No puedo creer que haya venido hasta\naquí para, al final, irme con las garras\nvacías. ¡Qué triste!")
/*< 68>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4112, 'next': 64, 'param3': 13}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Por lo visto, alguien se me ha adelantado.\n¡Aquí no hay más que <color yellow<agua>coloroff>!")
/*< 65>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4615, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "¿Y a quién le interesa el agua?\nA mí no, te lo aseguro.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2061, 'next': 71, 'param3': 13}
/*< 71>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "Yo me voy, amigo.\n¡Cuidado con los agujeros!")
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_94() {
/*<101>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 46}
/*<138>*/ 	set_camera(2, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 143, 'param3': 32}
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 139, 'param3': 49}
/*<139>*/ 	make_actor_do_something(4, 16)
/*<137>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 49}
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4096, 'param2': 1, 'next': 113, 'param3': 13}
/*<113>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 136, 'param3': 40}
/*<136>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 106, 'param3': 17}
/*<106>*/ 	wait_frames(45)
/*<107>*/ 	set_camera(3, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 109, 'param3': 15}
/*<109>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 111, 'param3': 17}
/*<111>*/ 	wait_frames(15)
/*<110>*/ 	set_camera(4, 0)
/*<104>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 112, 'param3': 14}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 103, 'param3': 17}
/*<103>*/ 	wait_frames(15)
/*<102>*/ 	entrypoint_201_92();
          }

          void entrypoint_201_95() {
/*<114>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 148, 'param3': 46}
/*<148>*/ 	set_camera(5, 0)
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 149, 'param3': 32}
/*<149>*/ 	make_actor_do_something(4, 17)
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 145, 'param3': 49}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 17, 'next': 144, 'param3': 17}
/*<144>*/ 	wait_frames(15)
/*<162>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': -1, 'next': 115, 'param3': 16}
/*<115>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 117, 'param3': 13}
/*<117>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Oye, oye! No pretenderás buscar\nel tesoro tú solo, ¿no?")
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 119, 'param3': 13}
/*<119>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "A ver, escúchame bien, amigo...<pause 30>\nQue haya aparecido un símbolo\nen esa pared no significa que vayas\na encontrar nada de valor, ¿sabes?")
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 2057, 'next': 121, 'param3': 13}
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Me temo que ese tipo que parece una roca\nte ha engañado...")
/*<122>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2050, 'next': 123, 'param3': 13}
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Si quieres, puedes quedarte aquí\ny descansar. Yo me encargaré de\nbuscarlo por ti.")
/*<124>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<128>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3329, 'next': 126, 'param3': 13}
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Oye, espera, ¿nos conocemos? Tú eres\nel tipo que me encontré en el volcán,\n¿verdad que sí?")
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 125, 'param3': 13}
/*<125>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "¿También has venido a buscar tesoros?\n[1-]¡Exacto![2-]No")
/*<131>*/ 		switch (choice(2)) {
          		  case 0:
/*<132>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 133, 'param3': 13}
/*<133>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "¡Lo sabía! Se nota que eres un cazador\nde tesoros, muchacho.")
          			flw_152:
/*<152>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 153, 'param3': 13}
/*<153>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "Supongo que tú también habrás\nvenido tras escuchar el acertijo\nque va contando el tipo ese que\nparece una roca con patas, ¿no?\n[1-]¿El goron?[2-]¿Acertijo?")
/*<134>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3339, 'next': 135, 'param3': 13}
/*<135>*/ 			printf(/* textboxtype: 0, unk: 1, line: 52 */ "¡No pienso permitir que nadie me quite\nel tesoro!")
/*<159>*/ 			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<158>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4617, 'next': 130, 'param3': 13}
/*<130>*/ 			printf(/* textboxtype: 1, unk: 1, line: 39 */ "¡A mí no me engañas! ¡Se nota\nque eres un cazador de tesoros!")
          			goto flw_152
          		}
          	}
          }

          void entrypoint_201_96() {
/*<172>*/ 	start()
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 261, 'param3': 32}
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 173, 'param3': 16}
/*<173>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<174>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<181>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3345, 'next': 177, 'param3': 13}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "¿Cómo? ¿Que ya la has usado?")
          			flw_182:
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 178, 'param3': 13}
/*<178>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "Aunque, ahora que lo pienso, ¿para qué\nquerría un mogma como yo una llave?\n¡Puedo llegar cavando adonde quiera!")
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 179, 'param3': 13}
/*<179>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "De todas formas, te agradezco mucho\nla información. ¡Y ahora, a seguir\nbuscando tesoros!")
/*<192>*/ 			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
          			flw_256:
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<180>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 176, 'param3': 13}
/*<176>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "¡Ah, la llave! ¿La traes para mí?")
          			goto flw_182
          		}
          	  case 1:
/*<249>*/ 		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          		  case 0:
/*<254>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 251, 'param3': 13}
/*<251>*/ 			printf(/* textboxtype: 2, unk: 0, line: 27 */ "No veo nada por ninguna parte...")
/*<252>*/ 			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
          			flw_189:
/*<189>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 188, 'param3': 13}
/*<188>*/ 			printf(/* textboxtype: 0, unk: 2, line: 28 */ "Estoy casi seguro de que la enterré,\npero no logro recordar dónde.")
/*<191>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3345, 'next': 190, 'param3': 13}
/*<190>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Hmm, ¿dónde era? Creo que aquí no.\nPor casualidad, no tendrás un mapa,\n¿verdad?")
          			goto flw_256
          		  case 1:
/*<253>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3329, 'next': 250, 'param3': 13}
/*<250>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "¿Necesitas ayuda?\n[1-]Sobre la llave[2-]Sobre tesoros[3]No")
/*<175>*/ 			switch (choice(3)) {
          			  case 0:
          				goto flw_189
          			  case 1:
/*<185>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 184, 'param3': 13}
/*<184>*/ 				printf(/* textboxtype: 0, unk: 0, line: 29 */ "¿Conoces a ese tipo gigantesco que parece\nuna roca con patas? Dice que hay una\n<color yellow<escultura de oro >coloroff>que abre una puerta\nmuy importante.")
/*<187>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3332, 'next': 186, 'param3': 13}
/*<186>*/ 				printf(/* textboxtype: 0, unk: 2, line: 31 */ "Oye, tú sabes algo que no me\nhas contado... ¡Se te nota en la cara!\n¡Vamos, confiesa ya!")
          				goto flw_256
          			  case 2:
          			}
          		}
          	}
          }

          void entrypoint_201_97() {
/*<231>*/ 	start()
/*<241>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 242, 'param3': 32}
/*<242>*/ 	make_actor_do_something(3, 16)
/*<243>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 244, 'param3': 16}
/*<244>*/ 	wait_frames(5)
/*<240>*/ 	set_camera(12, 0)
/*<245>*/ 	zone_temp_flags[55 /* 0x7 80 */] = true;
/*<266>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<248>*/ 	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
/*<239>*/ 	make_actor_do_something(4, 16)
/*<237>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "Esto es el colmo... Con lo que me costó\nquitarle la llave a ese monstruo, y\nahora la he perdido...")
/*<236>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 232, 'param3': 13}
/*<232>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Por todas las madrigueras...\n¡No recuerdo en qué agujero\nla enterré!")
/*<246>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<247>*/ 		entrypoint_201_96();
          	  case 1:
/*<233>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 234, 'param3': 13}
/*<234>*/ 		printf(/* textboxtype: 0, unk: 2, line: 25 */ "Qué ingenuo soy... Pensaba que esa\nllave me abriría las puertas de una vida\nllena de lujos y excesos.<pause 15> Y yo creo que\nla enterré por aquí...")
/*<238>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_201_11() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Tras esta gigantesca puerta percibo\ncon fuerza el aura de <color blue<Zelda>coloroff>.\nLas probabilidades de que se\nencuentre cerca son muy altas.")
/*< 31>*/ 	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
          }

          void entrypoint_201_12() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 7, unk: 0, line: 6 */ "")
          }

          void entrypoint_201_99() {
/*<163>*/ 	start()
/*<164>*/ 	switch (temp_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<165>*/ 		scene_flags[11 'Faron: Skyview Temple'][16 /* 0x3 01 */] = true;
          	  case 1:
          	}
          }

          void entrypoint_201_13() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 2, line: 7 */ "Confirmo que se ha desbloqueado\nel mecanismo de apertura de esta\npuerta.")
/*< 32>*/ 	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
          }

          void entrypoint_201_14() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "Tengo malas noticias, <0x10012:0x0000000b>amo.\nEl interior de este templo rezuma\nmaldad, y detecto las auras de un\nsinfín de monstruos.\nPor este motivo, me resulta imposible\naislar el aura de Zelda<0x10006:0xfecd>,<pause 15> de modo<0x10006:0x00cd><sound 4> que\n<color red<rastrearla no servirá de nada>coloroff>.\n\nAconsejo al <0x10012:0x00000001>amo que <color green<observe su\nentorno >coloroff>con atención para tratar\nde localizarla por sí mismo.")
/*< 94>*/ 	temp_flags[50 /* 0x7 04 */] = true;
/*<262>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<263>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_15() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000004>Amo <heroname>, tengo\ninformación sobre los mecanismos\nde apertura de las puertas.\n\nCon el objetivo de facilitar la tarea,\ndichos mecanismos suelen estar\ncolocados cerca de las puertas que\nabren.\nSi se <color green<inspecciona >coloroff>detenidamente\nla zona, calculo un 80% de\nprobabilidades de encontrarlos.")
          }

          void entrypoint_201_16() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 2, line: 10 */ "Parece que algún secuaz de Grahim\nha vuelto a cerrar la puerta. Va a ser\nnecesario buscar de nuevo la llave.")
/*< 41>*/ 	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
          }

