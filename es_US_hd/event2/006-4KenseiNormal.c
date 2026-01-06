          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x00000002>Amo, el nivel del indicador de salud\nes demasiado bajo. Sugiero tomar\nmedidas para recuperar corazones.<entrypoint_6_402>")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "El indicador de salud ha sufrido un\nimportante descenso. Sugiero tomar \nmedidas para recuperar corazones.\n\nPara ayudar al <0x10012:0x00000001>amo a recobrar la salud\ncuando sea necesario, he añadido los\n<sound 4><color yellow<corazones>coloroff> a la lista de objetivos de\n<color green<rastreo>coloroff> para elegir.")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0, line: 6 */ "Para seleccionar los <color yellow<corazones >coloroff>como\nobjetivo de rastreo basta con oprimir <icon 34>\ny elegirlos en el menú.<0x10011:0x08cd>\n\nSe puede hacer uso de esta opción cuando\nel <0x10012:0x00000001>amo lo estime conveniente.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 2, line: 7 */ "En el actual <color red<modo Héroe >coloroff>no aparecen\ncorazones ni flores de corazón.\n\n\nNo obstante, si se lleva equipado un\n<color yellow<medallón de corazón>coloroff>, sí habrá alguna\n<color red<probabilidad >coloroff>de encontrar <sound 4>corazones\ny flores de corazón.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x00000002>Amo, el nivel del indicador de salud\nes demasiado bajo. Sugiero tomar\nmedidas para recuperar corazones.<entrypoint_6_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x00000002>Amo, el nivel del indicador de salud\nes demasiado bajo. Sugiero tomar\nmedidas para recuperar corazones.<entrypoint_6_402>")
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
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "Puesto que en el actual <color red<modo Héroe\n>coloroff>no aparecen corazones ni flores de\ncorazón, recomiendo un uso intensivo\nde las pociones.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

