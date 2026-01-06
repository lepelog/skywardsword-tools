          void entrypoint_451_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Con toda probabilidad, el objeto\ndescubierto es el artículo perdido\ndel sujeto de la isla Fortuna.\n\nRecomiendo llamar al robot de\nla chatarrería para que venga a\nrecogerlo.\n[1-]Adelante[2]Dejémoslo")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Sí, amo. Avisaré al robot\ntelepáticamente.")
          	  case 1:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Está bien, amo. En caso de cambiar\nde opinión, sugiero volver a examinar\nel objeto.")
          	}
          }

          void entrypoint_451_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Fay, ricura, ¿me llamabas?\n\n\n\nMmm, este lugar tiene un aire\nextrañamente familiar...\n\n\nBueno, da lo mismo, estamos aquí\npara trabajar. Esto es lo que quieres\nque me lleve, ¿verdad?")
          }

          void entrypoint_451_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10012:0x00000064>Pues nada, me lo llevo volando.\nTe espero surcando los cielos,\nbombón. ¡No me tardes!")
          }

          void entrypoint_451_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Amo, sugiero que nosotros también\nnos pongamos en camino hacia la\nisla Fortuna.")
/*< 14>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*< 13>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = true;
/*< 19>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 18>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 17>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 16>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 20>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 15>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 21>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 721, 'next': 22, 'param3': 52}
/*< 22>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 722, 'next': 24, 'param3': 52}
/*< 24>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
/*< 23>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_451_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Tú no te estreses, amo verdoso.\nDeja que trabajemos los profesionales.")
          }

          void entrypoint_451_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0, line: 7 */ "Con toda probabilidad, el objeto\ndescubierto es el artículo perdido\ndel sujeto de la isla Fortuna.\n\nEn circunstancias normales, podríamos\nllamar al robot de la chatarrería para\nque viniera a recogerlo.\n\nSin embargo, se encuentra en el volcán\nde Eldin cumpliendo con la tarea que\nse le ha asignado, por lo que no está\ndisponible en este momento.\nRecomiendo ir al volcán de Eldin\na confirmar el estado del robot.")
          }

