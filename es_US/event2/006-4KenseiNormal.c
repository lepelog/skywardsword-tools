          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x12\x04\x00\x02Amo, el nivel del indicador de salud\nes demasiado bajo. Sugiero tomar\nmedidas para recuperar corazones.<entrypoint_402>")
          		  case 1:
/*<  3>*/ 			printf("El indicador de salud ha sufrido un\nimportante descenso. Sugiero tomar \nmedidas para recuperar corazones.\n\nPara ayudar al \x0E\x01\x12\x04\x00\x01amo a recobrar la salud\ncuando sea necesario, he añadido los\n<pling><y<corazones>> a la lista de objetivos de\n<g<rastreo>> para elegir.")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf("Para seleccionar los <y<corazones\n>>como objetivo de rastreo basta con\noprimir(C) y elegirlos en el menú.\x0E\x01\x11\x02\x6CD\n\nSe puede hacer uso de esta opción\ncuando el \x0E\x01\x12\x04\x00\x01amo lo estime conveniente.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf("En el actual <r<modo Héroe >>no aparecen\ncorazones ni flores de corazón.\n\n\nNo obstante, si se lleva equipado un\n<y<medallón de corazón>>, sí habrá alguna\n<r<probabilidad >>de encontrar <pling>corazones\ny flores de corazón.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf("\x0E\x01\x12\x04\x00\x02Amo, el nivel del indicador de salud\nes demasiado bajo. Sugiero tomar\nmedidas para recuperar corazones.<entrypoint_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x02Amo, el nivel del indicador de salud\nes demasiado bajo. Sugiero tomar\nmedidas para recuperar corazones.<entrypoint_402>")
          }

          void entrypoint_006_402() {
/*< 15>*/ 	start()
/*<  9>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 10>*/ 		switch (story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */]) {
          		  case 0:
/*< 14>*/ 			switch (adventure_pouch_has(8 0x0008)) {
          			  case 0:
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf("Puesto que en el actual <r<modo Héroe\n>>no aparecen corazones ni flores de\ncorazón, recomiendo un uso intensivo\nde las pociones.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

