          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "También es posible engancharse a la\nhiedra con las <color yellow<zarpas>coloroff>, aunque el <0x10012:0x00000001>amo\nse encuentre en una posición alejada.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "Es posible localizar la ubicación de la\ntienda de Terry buscándola en el <color blue<mapa>coloroff>.\nPara acceder a ella, hay que hacer\nsonar la <color red<campana>coloroff> de su extremo.")
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 2, line: 25 */ "Para acceder a la tienda de <color blue<Terry>coloroff>\nantes hay que hacer sonar la gran\n<color red<campana>coloroff> que cuelga de la misma.\n\nSin embargo, actualmente el <0x10012:0x00000002>amo\ncarece de los medios necesarios para\nello: necesita hacerse con un <color red<artefacto\n>coloroff>capaz de golpear a distancia.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Hay construcciones abandonadas desde\ntiempo inmemorial en los pequeños\nislotes que flotan por los alrededores\nde <color blue<Altárea>coloroff>.<color blue<\n>coloroff>Calculo un 80% de probabilidades\nde que dichos islotes oculten cofres\ncon tesoros.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Las probabilidades de que <color blue<Batolo>coloroff> viva\nbajo la cabaña situada junto\nal cementerio rondan el 95%.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 2, line: 31 */ "Batolo ha conseguido las <color yellow<gemas de\ngratitud necesarias >coloroff>y ya es humano.\nHay un 60% de probabilidades de que\nlos rumores sobre el demonio cesen.\nNo obstante, estimo que el nuevo rostro\nde Batolo da idéntico pavor. Calculo un\n40% de probabilidades de que dichos\nrumores persistan en Altárea.")
          		  case 1:
/*< 37>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Batolo colecciona <color yellow<gemas de gratitud\n>coloroff>con el objetivo de convertirse en\nuna persona normal.\n\nEn caso de que el <0x10012:0x00000002>amo acceda a prestar\nsu ayuda, hay un 85% de probabilidades\nde obtener beneficios interesantes\nen el proceso.")
          		}
          	  case 1:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 2, line: 28 */ "En caso de desear más información\nrecomiendo visitar el bar <color blue<Calabarza's>coloroff>,\ndonde los chismes y los cotilleos son\nel pan de cada día.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 2, line: 4 */ "El aprendiz de caballero que responde\nal nombre de <color blue<Vestro>coloroff> está interesado\nen dicha isla, y a menudo se lo puede\nver surcando los cielos en su busca.\nSegún parece, recientemente ha\nencontrado una isla en el <color blue<interior del\nnubarrón tormentoso >coloroff>que podría ser\nun hábitat ideal para los insectos.")
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "El problema es que nadie ha estado\nnunca allí.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 84 */ "Es posible recoger <color blue<flechas perdidas>coloroff>\nque no han llegado a su destino para\nreutilizarlas más tarde... o eso dicen.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf(/* textboxtype: 0, unk: 0, line: 83 */ "Se puede usar la espada para cortar\nárboles no muy gruesos. Se dice que,\na veces, una parte del tronco desprende\ndestellos de luz.\nEn esos casos se recomienda hacer un\ncorte justo ahí para que broten rupias.")
          		}
          	  case 1:
          		goto flw_45
          	}
          }

          void entrypoint_006_904() {
/*<  4>*/ 	start()
/*<  5>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*<  8>*/ 		switch (has_rupees(20)) {
          		  case 0:
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "Eso es una zona de recreo donde\nse pueden ganar muchas rupias.\n\n\nNo obstante, es necesario disponer de\nun zurrón lo suficientemente amplio\npara poder llevárselas a casa.")
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Eso es una zona de recreo donde\nse pueden ganar muchas rupias.\n\n\nPero de acuerdo con mi análisis, es\nnecesario realizar previamente\nun pago para poder participar.")
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 0, unk: 2, line: 7 */ "Existen planes para convertirla en\nuna gran zona de recreo donde se\nrepartan cantidades astronómicas\nde rupias en premios.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 2, line: 58 */ "No se trata de un rumor exactamente,\npero esta información puede resultar\nde gran utilidad.\n\nCuando los <color red<cubos divinos>coloroff> que hay por\nlas tierras inferiores vuelven volando a\nlos cielos, dejan un rastro de energía.\n\nHago saber a mi <0x10012:0x00000002>amo que puedo\ndetectar el lugar al que han ido a\nparar y señalarlo en el mapa.")
          	  case 1:
/*< 53>*/ 		printf(/* textboxtype: 2, unk: 0, line: 57 */ "A lo largo de nuestro periplo se han\navistado por las tierras inferiores una\nserie de <color red<extraños cubos >coloroff>con el símbolo\nde la Diosa.\nDetecto que guardan relación con esos\ncofres oscuros sellados que se hallan\ndesperdigados por <color blue<Altárea >coloroff>y los islotes\nde los alrededores.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Puesto que la tienda ambulante nunca\nse deja ver en <color blue<Altárea >coloroff>por las noches,\ndeduzco que se traslada a otro islote\nde menor tamaño.\n<color red<Si mi <0x10012:0x00000001>amo permanece en la tienda hasta\nla noche>coloroff>, es posible que descubra\ndicho islote.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "Ahora es imposible tocar la campana,\nel <0x10012:0x00000002>amo carece del equipo necesario.\nSugiero buscar <color red<algún artefacto>coloroff> con\nel cual pueda golpear a distancia.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "En la antigüedad, cierto guerrero ideó\nuna estrategia para reunir montones\nde flechas... ¿sabe mi <0x10012:0x00000002>amo la historia?\n[1-]Pues no[2]Me la sé")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "El guerrero cogió un enorme <color blue<escudo\nde madera >coloroff>y se acercó a una atalaya\nde bokoblin arqueros.\n\nSe protegió bajo su escudo para resistir\nlos flechazos de los bokoblin y acto\nseguido se fue alejando de la atalaya,\nsin bajar el escudo en ningún momento.\nAsí, en su <color red<escudo de madera encontró\nclavada >coloroff>una cantidad inmensa de\nflechas que luego pudo reutilizar.")
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "Calculo que el escudo de madera de\nmi <0x10012:0x00000002>amo puede ofrecer idéntico\nresultado si se emplea de este modo.\n\nAun así, dicha táctica puede dañar\nel escudo, de manera que resulta vital\n<color red<no perder de vista el indicador del\nescudo>coloroff>.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 62 */ "Las <color blue<plumas de ave>coloroff> son de gran utilidad\ncomo materia prima para realizar\nmejoras varias, o eso se dice.\n\nAunque hay un 90% de probabilidades\nde necesitar alguna herramienta\ncon la que cazar las aves para\nhacerse con sus plumas.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "Gracias al poder de la <color blue<escama de\ndragón acuático>coloroff>, ahora es posible\nbucear a grandes profundidades.\n\nCalculo una probabilidad bastante alta\nde descubrir cosas nuevas al volver\na explorar lugares ya visitados\nanteriormente.")
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 2, line: 67 */ "En algún lugar de este mundo existe\nun objeto llamado <color blue<escama de dragón\nacuático>coloroff>, que permite a su poseedor\nbucear a grandes profundidades.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 0, line: 71 */ "Ahora es posible acceder a zonas\nde altas temperaturas gracias a\nlos <color blue<pendientes ignífugos>coloroff>.\n\nDeduzco que ahora será posible \nexplorar zonas que mi <0x10012:0x00000001>amo no había\npodido visitar debido al calor extremo.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 2, line: 70 */ "Gracias al poder de los legendarios\n<color blue<pendientes ignífugos>coloroff>, es posible\nacceder a zonas de calor extremo. ")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "Si un jinete y su pelícaro se acercan sin\nel debido cuidado, hay un alto riesgo\nde que Narisha los derribe con sus\naletas aun sin darse cuenta.")
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 43 */ "Desde su nacimiento fue creciendo y\ncreciendo hasta alcanzar el tamaño\nde un islote. No obstante, no se lo ha\nvisto desde hace algún tiempo.")
          	}
          }

