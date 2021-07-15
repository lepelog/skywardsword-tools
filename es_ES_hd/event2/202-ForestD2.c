          void entrypoint_202_04() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("Si golpeas la piedra que el ojo\noculta, se cerrará la boca y\ndetendrás el flujo.")
          }

          void entrypoint_202_05() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("El símbolo de la gratitud que\nadorna al <r<gigante de piedra\n>>muestra el <r<ciclo de la vida >>que\ndomina esta tierra.\nLa <r<espalda>> primero, después el\n<r<trasero>>, luego el <r<dorso de la\nmano derecha>>, le sigue <r<el de la\nizquierda >>y... ¡cosa hecha!")
/*< 48>*/ 	story_flags[1195 /* us: 805A9B61 0x02, jp: 805ACDE1 0x02 */] = true;
          }

          void entrypoint_202_11() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("El análisis de la información de que\ndispongo sugiere que la <y<llave >>de la que\nse habla en la litografía es la que activa\nel mecanismo que hay más adelante.")
          }

          void entrypoint_202_12() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf("")
          }

          void entrypoint_202_13() {
/*<  9>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo, tengo información nueva.\nDetecto un gran cofre del tesoro\nen los alrededores.\n\nExiste un 85% de probabilidades\nde que contenga la <y<llave >>necesaria\npara abrir aquella gran puerta que\nhay en lo alto de la estatua central.")
          }

          void entrypoint_202_30() {
/*< 14>*/ 	start()
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1007, 'next': 17, 'param3': 24}
/*< 17>*/ 	set_camera(1, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 32, 'param3': 32}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3330, 'param2': 256, 'next': 18, 'param3': 13}
/*< 18>*/ 	set_camera(2, 0)
/*< 36>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 33, 'param3': 6}
/*< 33>*/ 	make_actor_do_something(0, 13)
/*< 35>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 26, 'param3': 6}
/*< 26>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3331, 'param2': 512, 'next': 15, 'param3': 13}
/*< 15>*/ 	printf("Ya veo que no te rindes fácilmente.<pause05>.<pause05>.")
/*< 19>*/ 	set_camera(3, 0)
/*< 16>*/ 	printf("Yo también ando bastante ocupado,\n¿sabes? Tengo que hallar el modo de\nresucitar al señor del mal. No me queda\nmucho tiempo.<pause05>.<pause05>.")
/*< 20>*/ 	set_camera(4, 0)
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3334, 'param2': 512, 'next': 23, 'param3': 13}
/*< 23>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 22, 'param3': 6}
/*< 22>*/ 	printf("¡Y empiezo a estar harto de que estés\nsiempre entrometiéndote, mocoso!")
/*< 34>*/ 	make_actor_do_something(1, 13)
/*< 37>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 27, 'param3': 6}
/*< 27>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3332, 'param2': 768, 'next': 39, 'param3': 13}
/*< 39>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 6}
/*< 21>*/ 	set_camera(5, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 63, 'next': 31, 'param3': 6}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 41, 'param3': 6}
/*< 41>*/ 	zone_temp_flags[18 /* 0x3 04 */] = true;
/*< 24>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_202_14() {
/*< 10>*/ 	start()
/*< 42>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 46}
/*< 13>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, confirmo que en la parte superior\nhay una puerta con cerradura.")
/*< 43>*/ 	scene_flags[12 'Faron: Ancient Cistern'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_202_01() {
          	start()
/*<  1>*/ 	printf("La puerta solo se abrirá ante\nquien golpee las <r<cuatro piedras\nluminiscentes >>según el orden del\n<r<ciclo de la vida >>de esta tierra.")
          }

          void entrypoint_202_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("Cuando la estatua de piedra\nrecupere su antiguo esplendor,\ndesciende por la cuerda a las\nprofundidades una vez más.\nObtendrás así la <y<llave>>\nque abre el camino.")
          }

          void entrypoint_202_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("Busca la <y<llave >>que descansa\nbajo tierra.")
          }

