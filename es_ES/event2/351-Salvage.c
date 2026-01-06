          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000004>¡¿Pero qué...?! ¿Me dices que me vas\na llevar a Celéstea y me sueltas\npor el camino?\n\n¡Al final vuelvo a estar en el mismo\nsitio que al principio!\n\n\n¡Espero que la próxima vez no me dejes\ncaer como si fuera un lastre, chaval!")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "Confirmo que el trabajo que mejor\nse adapta a las cualidades de este\nespécimen está disponible en el\nCalabarza's.\n¿Debería llamar al robot para\nque se lo lleve allí?\n[1-]Adelante[2]No")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Sí, amo. Avisaré al robot\ntelepáticamente.")
          		  case 1:
/*< 23>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Está bien, amo. En caso de cambiar\nde opinión, sugiero volver a buscar\nel objetivo.")
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000009>¡Hombre, chaval, volvemos\na encontrarnos! ¡Muchísimas\ngracias por todo!\n\nDesde aquel día no he parado de\nbuscar tesoros en nuevos lugares,\npero nada, no hay manera.\n\nY ya llevo tiempo machacándome\nen este auténtico infierno...\nNo aguanto ni un día más.\n\n<0x10009:0x00000005>Me parece que va siendo hora de dejar\nmis obligaciones de jefe y empezar\na cultivar mis aficiones y pasatiempos,\n¿no crees?\nMe gustaría comenzar a llevar\nun estilo de vida más reposado.\n[1-]Hay un lugar[2-]No te rindas")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000004>¿Cómo dices? ¡¿Que conoces un sitio\nadecuado para mí en Celéstea?!\n\n\n¡¿Y que allí podré encontrar\nun trabajo en el que se aprecie\nmi inigualable talento?!\n\n¡Pues ya estamos tardando!<pause 10>\n¡Vamos, vamos, está decidido!<pause 10>\n¡Llévame contigo!")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000008>Va...<pause 10> vaya... Si me lo dices así, supongo\nque un último esfuerzo no hará daño\na nadie...")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Amo, sugiero que regresemos\na Celéstea para llevar al moguma\na su lugar de destino.")
/*< 27>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = true;
/*< 48>*/ 	story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
/*< 42>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 41>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 40>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 39>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 43>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 38>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 47>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_12() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10012:0x00000064>Otra vez... ¡no hace falta que repitas\nsiempre lo mismo!")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Confirmo la similitud de este objeto\ncon la bola de cristal del adivino y la\nposibilidad de usarlo como sustitutivo.\n\nRecomiendo llamar al robot de\nla chatarrería para que venga\na recogerlo.\n[1-]Adelante[2]No")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Sí, amo. Avisaré al robot\ntelepáticamente.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Está bien, amo. En caso de cambiar\nde opinión, sugiero volver a buscar\nel objetivo.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>¡Hola, Fay, hermosura!\n¡Aquí me tienes otra vez!\n\n\n¿Quieres que me lleve esto?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "¡Pues hala, a volar! ¡Espero verte\npronto, monada!")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Amo, sugiero regresar a Celéstea\nde inmediato para llevar el cristal\na su destino.")
/*< 29>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 13>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = true;
/*< 36>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 35>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 34>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 33>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 32>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 37>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 46>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>¡Amo verdoso, no es justo! ¡A ti siempre\nte toca el trabajo más fácil!")
          }

