          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("Busca las <r<piedras brillantes >>tras\ncada una de las estatuas. Si las\ngolpeas en orden desde abajo,\nabrirás la puerta sin trabajo.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf("Ruego a mi \x0E\x01\x12\x04\x00\x01amo que observe atentamente.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf("Ese emblema de ahí es el <r<símbolo\nde Farore>>.\n\n\nPercibo cómo el poder sagrado de la\n<y+<Trifuerza >>emana de él.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf("Recomiendo atravesar esa puerta para\nllegar hasta el símbolo.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf("Ruego a mi \x0E\x01\x12\x04\x00\x01amo que observe atentamente.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf("Ese emblema de ahí es el <r<símbolo\nde Nayru>>.\n\n\nPercibo cómo el poder sagrado de la\n<y+<Trifuerza >>emana de él.\n\n\nPero parece que el camino que\nlleva hasta allí está actualmente\nbloqueado.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf("Si el \x0E\x01\x12\x04\x00\x01amo observa con atención, verá\nallí un <y<orbe cronolítico>>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf("Recomiendo manipular ese <y<orbe\ncronolítico >>para abrir el camino\nque lleva hasta el <r<símbolo>>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf("Ruego a mi \x0E\x01\x12\x04\x00\x01amo que observe atentamente.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf("Ese emblema de ahí es el <r<símbolo de\nDin>>.\n\n\nPercibo cómo el poder sagrado de la\n<y+<Trifuerza >>emana de él.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf("Pero estimo que desde nuestra posición\nactual es imposible llegar hasta él.\n\n\nSugiero buscar una vía de acceso\nalternativa para entrar en esta sala.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf("Aviso para el \x0E\x01\x12\x04\x00\x0Bamo: ya hemos visitado\nesta estancia. Se trata de la misma\nque albergaba el <r<símbolo de Din>>.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf("Calculo un 60% de probabilidades\nde que la fuente de la que emana el\npoder sagrado se encuentre más allá\nde esta lava.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf("Sugiero hacer acopio de valor y seguir\navanzando.")
          	  case 1:
/*< 35>*/ 		printf("Aviso para mi \x0E\x01\x12\x04\x00\x0Bamo: siento en algún\nlugar de esta estancia la presencia\ndel poder sagrado.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf("Aviso importante: hemos llegado hasta\nel símbolo.\n\n\nRuego a mi \x0E\x01\x12\x04\x00\x0Bamo que consagre su\nespada ante él para que le indique\nel camino hacia la <y+<Trifuerza>>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf("Aviso importante: hemos llegado hasta\nel símbolo.\n\n\nRuego a mi \x0E\x01\x12\x04\x00\x0Bamo que consagre su\nespada ante él para que le indique\nel camino hacia la <y+<Trifuerza>>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf("Aviso importante: hemos llegado hasta\nel símbolo.\n\n\nRuego a mi \x0E\x01\x12\x04\x00\x0Bamo que consagre su\nespada ante él para que le indique\nel camino hacia la <y+<Trifuerza>>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 1, 'param3': 6}
/*<  1>*/ 	printf("Aviso importante, \x0E\x01\x12\x04\x00\x0Bamo...\n\n\n\nPercibo la presencia de tres fuentes de\nenergía sagrada en el interior de este\nedificio. Confirmo que se trata de la\n<y+<<pling>Trifuerza>>.\nHe registrado en el mapa los lugares\nde donde emana dicha energía con el\nsímbolo \x25B3.")
/*< 42>*/ 	scene_flags[20 'Skyloft: Sky Keep'][29 /* 0x2 20 */] = true;
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_125_03() {
/*<  2>*/ 	start()
/*<  7>*/ 	switch (story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */]) {
          	  case 0:
/*<  8>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 9, 'param3': 30}
/*<  9>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          	  case 1:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 3, 'param3': 17}
/*<  3>*/ 		printf("Tengo información importante para\nel \x0E\x01\x12\x04\x00\x0Bamo.\n\n\nSegún mi análisis, estas vibraciones\nson debidas a importantes <pling><r<alteraciones\nestructurales >>acaecidas en el interior\ndel edificio.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf("Como resultado de las mismas, ahora\nes posible avanzar hacia la estancia\ncontigua.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf("Estimo que manipulando este <r<panel de\ncontrol >>es posible llegar hasta las tres\npartes de la <y+<Trifuerza>>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf("Calculo que aprovechando estas\nalteraciones es posible avanzar de\nuna estancia a otra.")
          			goto flw_5
          		}
          	}
          }

