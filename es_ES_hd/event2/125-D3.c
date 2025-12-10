          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 2, line: 7 */ "Busca las <color red<piedras brillantes >coloroff>tras\ncada una de las estatuas. Si las\ngolpeas en orden desde abajo,\nabrirás la puerta sin trabajo.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "Ruego a mi <0x10012:0x00000001>amo que observe atentamente.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Ese emblema de ahí es el <color red<símbolo\nde Farore>coloroff>.\n\n\nPercibo cómo el poder sagrado de la\n<color yellow white<Trifuerza >coloroff>emana de él.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 7, line: 10 */ "Recomiendo atravesar esa puerta para\nllegar hasta el símbolo.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "Ruego a mi <0x10012:0x00000001>amo que observe atentamente.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "Ese emblema de ahí es el <color red<símbolo\nde Nayru>coloroff>.\n\n\nPercibo cómo el poder sagrado de la\n<color yellow white<Trifuerza >coloroff>emana de él.\n\n\nPero parece que el camino que\nlleva hasta allí está actualmente\nbloqueado.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Si el <0x10012:0x00000001>amo observa con atención, verá\nallí un <color yellow<orbe cronolítico>coloroff>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Recomiendo manipular ese <color yellow<orbe\ncronolítico >coloroff>para abrir el camino\nque lleva hasta el <color red<símbolo>coloroff>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "Ruego a mi <0x10012:0x00000001>amo que observe atentamente.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Ese emblema de ahí es el <color red<símbolo de\nDin>coloroff>.\n\n\nPercibo cómo el poder sagrado de la\n<color yellow white<Trifuerza >coloroff>emana de él.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Pero estimo que desde nuestra posición\nactual es imposible llegar hasta él.\n\n\nSugiero buscar una vía de acceso\nalternativa para entrar en esta sala.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 2, line: 19 */ "Aviso para el <0x10012:0x0000000b>amo: ya hemos visitado\nesta estancia. Se trata de la misma\nque albergaba el <color red<símbolo de Din>coloroff>.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "Calculo un 60% de probabilidades\nde que la fuente de la que emana el\npoder sagrado se encuentre más allá\nde esta lava.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 22 */ "Sugiero hacer acopio de valor y seguir\navanzando.")
          	  case 1:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 21 */ "Aviso para mi <0x10012:0x0000000b>amo: siento en algún\nlugar de esta estancia la presencia\ndel poder sagrado.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "Aviso importante: hemos llegado hasta\nel símbolo.\n\n\nRuego a mi <0x10012:0x0000000b>amo que consagre su\nespada ante él para que le indique\nel camino hacia la <color yellow white<Trifuerza>coloroff>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "Aviso importante: hemos llegado hasta\nel símbolo.\n\n\nRuego a mi <0x10012:0x0000000b>amo que consagre su\nespada ante él para que le indique\nel camino hacia la <color yellow white<Trifuerza>coloroff>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "Aviso importante: hemos llegado hasta\nel símbolo.\n\n\nRuego a mi <0x10012:0x0000000b>amo que consagre su\nespada ante él para que le indique\nel camino hacia la <color yellow white<Trifuerza>coloroff>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	wait_frames(15)
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "Aviso importante, <0x10012:0x0000000b>amo...\n\n\n\nPercibo la presencia de tres fuentes de\nenergía sagrada en el interior de este\nedificio. Confirmo que se trata de la\n<color yellow white<<sound 4>Trifuerza>coloroff>.\nHe registrado en el mapa los lugares\nde donde emana dicha energía con el\nsímbolo △.")
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
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "Tengo información importante para\nel <0x10012:0x0000000b>amo.\n\n\nSegún mi análisis, estas vibraciones\nson debidas a importantes <sound 4><color red<alteraciones\nestructurales >coloroff>acaecidas en el interior\ndel edificio.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 0, unk: 2, line: 4 */ "Como resultado de las mismas, ahora\nes posible avanzar hacia la estancia\ncontigua.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Estimo que manipulando este <color red<panel de\ncontrol >coloroff>es posible llegar hasta las tres\npartes de la <color yellow white<Trifuerza>coloroff>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "Calculo que aprovechando estas\nalteraciones es posible avanzar de\nuna estancia a otra.")
          			goto flw_5
          		}
          	}
          }

