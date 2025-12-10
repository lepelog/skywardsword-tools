          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "Si logras sacar todas las rupias en\nel juego <color blue<Hoyos y rupias >coloroff>de Nabucco,\nte puedes llevar un premio de lo\nmás inusual... O eso dicen.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "En las entrañas de este volcán, bajo\nla misma tierra que pisas, viven los\n<color blue<mogumas>coloroff>, unos tipos obsesionados\ncon los tesoros.\nAunque, según dicen, de un tiempo\na esta parte se lo están tomando\ncon muchísima más calma.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "Dicen por ahí que en la <color red<cima >coloroff>de este\nvolcán tiene su morada un <color red<dragón>coloroff>.\n\n\nAunque me parece a mí que no estamos\nen la <color red<cima>coloroff>, precisamente...\n")
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "¿Quieres que te lo cuente otra vez?\n\n[1-]Sí[2]No")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "¿Ah, no?<pause 15> Pues tú mismo...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 9, unk: 2, line: 9 */ "En la alforja no te cabe nada más y\nla <color red<consigna >coloroff>también está llena.\n\n\nEl objeto se queda en el cofre.")
          		  case 1:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "¡La alforja está llena, así que el objeto te\nlo guardan en la <color red<consigna>coloroff>!")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "El <color red<dragón>coloroff> que habita en la cima del\nvolcán habla hasta con las paredes.\n\n\nSe dice que puede pasarse horas\ncharlando de tierras lejanas y\nparajes exóticos.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Dicen por ahí que en la cima de este\nvolcán vive un <color red<dragón >coloroff>envuelto\nen llamas.\n\nY que vive en un <color red<lugar tan abrasador\n>coloroff>que casi nadie puede acercarse.")
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "¿Quieres que te lo cuente otra vez?\n\n[1-]Sí[2]No")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "¿Ah, no?<pause 15> Pues tú mismo...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "¡Eh! ¡<heroname>!\nNo estarás pensando en irte de aquí \nahora, ¿verdad, campeón? ¡Ja!\n\n¡Los hombres de verdad no dejan\nlas cosas a medias!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Me han soplado que si logras una\npuntuación alta en <color blue<La vertiginosa\nmontaña rusa>coloroff>, te dan una <color yellow<pieza\nde corazón>coloroff>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x1000F:0x>¿Hasta cuándo quieres dormir?\n\n[1-]Hasta la\nmañana[2-]Hasta la\nnoche[3]Paso")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "Me he enterado de que un <color red<dragón\n>coloroff>gigantesco, al que le gusta poner\na prueba a la gente, vive en algún\nrincón de este desierto.\nTambién me han dicho que si haces\nun buen papel en el desafío que te\npropone, el dragón te regala un\n<color red<escudo increíblemente robusto>coloroff>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "¿Quiere mi <0x10012:0x00000001>amo aterrizar aquí?\n[1-]Sí[2]No")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Me han contado un truco buenísimo\npara cazar insectos. Consiste en\nacercarse a ellos sigilosamente\ncon un <color red<cazamariposas grande>coloroff>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Aviso para mi <0x10012:0x0000000b>amo:\n\n\n\nDetecto que se están produciendo\n<color red<alteraciones>coloroff> estructurales en el bosque\nde Farone. En este momento no es\nposible acceder a él.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf(/* textboxtype: 9, unk: 0, line: 0 */ "<0x1000F:0x>Está cerrada con <color yellow<llave>coloroff>.")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Según dicen, entre los tesoros sellados\nque se liberan cuando los <color blue<cubos divinos\n>coloroff>se elevan hacia el cielo, hay a veces\n<color yellow<piezas de corazón>coloroff>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "Para elegir el lugar en el que se desee\naterrizar, basta con apuntar al mismo\ncon (Hand) y confirmar la elección con (A).")
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Aviso para mi <0x10012:0x0000000b>amo:\n\n\n\nEs posible descender a las <sound 4>tierras\ninferiores por los lugares señalizados\nespecíficamente con una <color blue<estatua>coloroff>.\n\nBasta con apuntar con (Hand) al lugar al\nque se quiera descender y confirmar\nla elección con (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x1000F:0x>El letrero está hecho pedazos,\nes imposible leer lo que pone.")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Dicen por ahí que si dibujas dinero en\nlos muros misteriosos, puedes llevarte\nun buen pellizco sin despeinarte.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 9, unk: 0, line: 3 */ "<0x1000F:0x>Desde aquí es imposible leer\nlo que pone en el letrero.")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Dicen que de los champiñones\nchispeantes se obtienen unas <color yellow<esporas\nchispeantes>coloroff> que tienen un curioso\nefecto sobre insectos y monstruos.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "Dicen por ahí que si dibujas un círculo\nen los muros misteriosos, aparece algo\ncon forma circular.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 9, line: 1 */ "<0x1000F:0x>La puerta está cerrada\na cal y canto.")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "Según dicen, si dibujas tres triángulos\nen los muros misteriosos, aparecen\n<color yellow<hadas>coloroff>.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "Según dicen, hay una <color yellow<pieza de corazón>coloroff>\noculta en algún lugar por aquí cerca.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Aunque me parece que tú ya la tienes...")
          	  case 1:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "Pero parece ser que para llegar hasta\nese lugar hay que ser capaz de escarbar\ncomo un auténtico <color blue<moguma>coloroff>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 9, line: 10 */ "¡Boooooing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 9, line: 4 */ "¿Quiere el <0x10012:0x00000001>amo salir de Hypnea?\n[1-]Sí[2]No")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "Te puedes llevar un premio de gran\nvalor si consigues darle al bambú\n<color red<más de 28 tajos >coloroff>en el juego\n<color blue<Mil pedazos de bambú>coloroff>.\nEl récord lo ostenta cierta antigua\nestrella de la farándula que logró\ncortarlo en 43 trozos. O eso dice él...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "Puedes ganar insectos poco comunes\nsi completas el nivel experto de\n<color blue<Atrápame esos insectos >coloroff>en menos\nde <color red<2 minutos>coloroff>.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "Las <color red<mariposas>coloroff> sienten una especial\natracción por nosotras, las <color blue<piedras\nchismosas>coloroff>.\n\nSi tuviera que elegir un <color red<sonido>coloroff> para\nexpresar mi júbilo al verlas reunidas\nen torno a mí, sería «¡boooooing!».")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Dicen por ahí que si dibujas una flecha\nen los muros misteriosos, aparece\nun objeto de forma similar.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Según dicen, si dibujas la forma\ndel amor en los muros misteriosos\nuna sensación de bienestar te recorrerá\nel cuerpo.")
          }

