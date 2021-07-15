          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf("También es posible engancharse a la\nhiedra con las <y<zarpas>>, aunque el \x0E\x01\x12\x04\x00\x01amo\nse encuentre en una posición alejada.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf("Es posible localizar la ubicación de la\ntienda de Terry buscándola en el <b<mapa>>.\nPara acceder a ella, hay que hacer\nsonar la <r<campana>> de su extremo.")
          	  case 1:
/*< 57>*/ 		printf("Para acceder a la tienda de <b<Terry>>\nantes hay que hacer sonar la gran\n<r<campana>> que cuelga de la misma.\n\nSin embargo, actualmente el \x0E\x01\x12\x04\x00\x02amo\ncarece de los medios necesarios para\nello. Necesita conseguir un <r<artefacto\n>>capaz de golpear a distancia.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Hay construcciones abandonadas desde\ntiempo inmemorial en los pequeños\nislotes que flotan por los alrededores\nde <b<Neburia>>.<b<\n>>Calculo un 80% de probabilidades\nde que dichos islotes oculten cofres\ncon tesoros.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf("Las probabilidades de que <b<Mursego\n>>viva bajo la cabaña situada junto\nal cementerio están cerca del 95%.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf("Mursego ha conseguido las <y<gemas de\ngratitud necesarias >>y ya es humano.\nHay un 60% de probabilidades de que\nlos rumores sobre el demonio cesen.\nNo obstante, estimo que el nuevo rostro\nde Mursego da idéntico pavor. Calculo\nun 40% de probabilidades de que\ndichos rumores persistan en Neburia.")
          		  case 1:
/*< 37>*/ 			printf("Mursego colecciona <y<gemas de gratitud\n>>con el objetivo de convertirse en\nuna persona normal.\n\nEn caso de que el \x0E\x01\x12\x04\x00\x02amo acceda a prestar\nsu ayuda, hay un 85% de probabilidades\nde obtener beneficios interesantes\nen el proceso.")
          		}
          	  case 1:
/*< 34>*/ 		printf("En caso de desear más información\nrecomiendo visitar <b<La Calabaza\nFlotante>>, el mesón donde se oyen\ncon frecuencia chismes y rumores.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf("El aprendiz de caballero que responde\nal nombre de <b<Vestro>> está interesado\nen dicha isla, y a veces se le puede\nver surcando los cielos en su busca.\nSegún parece, recientemente ha\nencontrado una isla en el <b<interior del\nnubarrón tormentoso >>que podría ser\nun hábitat ideal para los insectos.")
          	  case 1:
/*<  2>*/ 		printf("El problema es que nadie ha estado\nnunca allí.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf("Es posible recoger <b<flechas perdidas>>\nque no han llegado a su destino para\nreutilizarlas más tarde, o eso dicen.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf("Se puede usar la espada para cortar\nárboles no muy gruesos. Se dice que,\na veces, una parte del tronco desprende\ndestellos de luz.\nEn esos casos se recomienda hacer un\ncorte justo ahí para que broten rupias.")
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
/*<  7>*/ 			printf("Eso es una zona de recreo donde\nse pueden ganar muchas rupias.\n\n\nNo obstante, es necesario disponer de un\nmonedero lo suficientemente amplio\npara poder llevárselas a casa.")
          		  case 1:
/*<  9>*/ 			printf("Eso es una zona de recreo donde\nse pueden ganar muchas rupias.\n\n\nPero de acuerdo con mi análisis, es\nnecesario realizar previamente\nun pago para poder participar.")
          		}
          	  case 1:
/*<  6>*/ 		printf("Existen planes para convertirla en\nuna gran zona de recreo donde se\nrepartan cantidades astronómicas\nde rupias en premios.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf("No se trata de un rumor exactamente,\npero esta información puede resultar\nde gran utilidad.\n\nCuando los <r<cubos divinos>> que hay por\nlas tierras inferiores vuelven volando a\nlos cielos, dejan un rastro de energía.\n\nHago saber a mi \x0E\x01\x12\x04\x00\x02amo que puedo\ndetectar el lugar al que han ido a\nparar y señalarlo en el mapa.")
          	  case 1:
/*< 53>*/ 		printf("A lo largo de nuestro recorrido se han\navistado por las tierras inferiores una\nserie de <r<extraños cubos >>con el símbolo\nde la Diosa.\nDetecto que guardan relación con esos\ncofres oscuros sellados que se hallan\nrepartidos por <b<Neburia >>y los islotes\nde los alrededores.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf("Puesto que la tienda ambulante nunca\nse deja ver en <b<Neburia >>por las noches,\ndeduzco que se traslada a otro islote\nde menor tamaño.\n<r<Si mi \x0E\x01\x12\x04\x00\x01amo permanece en la tienda hasta\nla noche>>, es posible que descubra\ndicho islote.")
          	  case 1:
/*< 30>*/ 		printf("Ahora es imposible tocar la campana,\nel \x0E\x01\x12\x04\x00\x02amo carece del equipo necesario.\nSugiero buscar <r<algún artefacto>> con\nel cual pueda golpear a distancia.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf("En la antigüedad, cierto guerrero ideó\nuna estrategia para reunir muchas\nflechas. ¿Conoce mi \x0E\x01\x12\x04\x00\x02amo la historia?\n[1]No[2-]Sí")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("El guerrero tomó un enorme <b<escudo\nde madera >>y se acercó a una atalaya\nde bokoblin arqueros.\n\nSe protegió bajo su escudo para resistir\nlos flechazos de los bokoblin y acto\nseguido se fue alejando de la atalaya,\nsin bajar el escudo en ningún momento.\nAsí, en su <r<escudo de madera encontró\nclavada >>una cantidad inmensa de\nflechas que luego pudo reutilizar.")
          				flw_14:
/*< 14>*/ 				printf("Calculo que el escudo de madera de\nmi \x0E\x01\x12\x04\x00\x02amo puede ofrecer idéntico\nresultado si se emplea de este modo.\n\nAun así, dicha táctica puede dañar\nel escudo, de manera que resulta vital\n<r<no perder de vista el indicador del\nescudo>>.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf("Las <b<plumas de ave>> son de gran utilidad\ncomo materia prima para realizar\nmejoras de todo tipo, o eso se dice.\n\nAunque hay un 90% de probabilidades\nde necesitar alguna herramienta\ncon la que cazar las aves para\nobtener sus plumas.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf("Gracias al poder de la <b<escama de\ndragón acuático>>, ahora es posible\nbucear a grandes profundidades.\n\nCalculo una probabilidad bastante alta\nde descubrir cosas nuevas al volver\na explorar lugares ya visitados\nanteriormente.")
          	  case 1:
/*< 20>*/ 		printf("En algún lugar de este mundo existe\nun objeto llamado <b<escama de dragón\nacuático>>, que permite a su poseedor\nbucear a grandes profundidades.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf("Ahora es posible acceder a zonas\nde altas temperaturas gracias a\nlos <b<aretes ignífugos>>.\n\nDeduzco que ahora será posible \nexplorar zonas que mi \x0E\x01\x12\x04\x00\x01amo no había\npodido visitar debido al calor extremo.")
          	  case 1:
/*< 24>*/ 		printf("Gracias al poder de los legendarios\n<b<aretes ignífugos>>, es posible acceder\na zonas de calor extremo. ")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf("Si un jinete y su neburí se acercan sin\nel debido cuidado, hay un alto riesgo\nde que Narisha los derribe con sus\naletas sin darse cuenta.")
          	  case 1:
/*< 40>*/ 		printf("Desde su nacimiento fue creciendo y\ncreciendo hasta alcanzar el tamaño\nde un islote. No obstante, no se le ha\nvisto desde hace algún tiempo.")
          	}
          }

