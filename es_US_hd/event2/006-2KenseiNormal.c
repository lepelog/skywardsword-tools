          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Sin embargo, un misterioso personaje\nla ha encontrado y se dirige con ella\nhacia otro lugar.\n\nSugiero obrar del mismo modo que\nen el <b<manantial de la contemplación\n>>y pedir consejo a la efigie de\nla Diosa del <b<manantial terrenal>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("La probabilidad de hallar a Zelda\nsana y salva es cada vez más pequeña.\nEs imprescindible encontrarla de\ninmediato.<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("Si el \x0E\x01\x12\x04\x00\x01amo necesita algo de Narisha,\nantes deberá aprender el <g<tirabuzón\naéreo >>del maestro <b<Buhel>>.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("<b<Buhel >>ha estado investigando sobre\nNarisha. Sugiero que el \x0E\x01\x12\x04\x00\x01amo vaya\na hablar con él.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Recomiendo investigar el <b<mar de arena\nde Lanayru>>, al que ya es posible\nacceder gracias a las <y<zarpas>>.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("La probabilidad de acceder a nuevas\nzonas de la región de Lanayru con\nlas <r<<y<zarpas<r< >>obtenidas en la <r<Hypnea>>\ndel <b<desierto de Lanayru >>es del 96%.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("Sin embargo, Narisha se halla sumido\nen un estado de gran agresividad,\npor lo que será difícil hablar con él.\n\nSugiero librarlo de los parásitos\nque se aferran a su cuerpo empleando\nel <g<tirabuzón aéreo>>.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("Hay una probabilidad del 90% de que\n<b<Narisha >>aparezca si el \x0E\x01\x12\x04\x00\x01amo le lleva su\nalimento favorito: <y<sopa de calabaza>>.\n\nSugiero llevar la sopa a la pequeña\nisla del <r<arcoíris >>que hay dentro\ndel <b<nubarrón de tormenta>>.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("Hay una probabilidad del 85% de que\nel dueño de La Calabaza Flotante tenga\ninformación sobre cómo se puede\nllegar hasta Narisha.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_296() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Estos son los únicos datos \nadicionales de que dispongo:\nTiempo de la sesión actual: <r<\x0E\x02\x03\x06\x00\x00\x2CD\xFF1A<numeric arg1(2)>>>.\nTiempo total de juego: <r<<numeric arg2(2)>\xFF1A\x0E\x02\x03\x06\x00\x03\x2CD>>.")
          }

          void entrypoint_006_227() {
/*< 77>*/ 	start()
/*< 78>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 80>*/ 		printf("Recomiendo llevarle al almirante\nla carta náutica cuanto antes.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("Confirmo que antes de recuperar el\nbarco será necesario buscar la carta\nnáutica en la <b<casa del almirante>>.<entrypoint_296>")
          	}
          }

          void entrypoint_006_248() {
/*<  2>*/ 	start()
/*<  3>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*<  5>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
          			  case 1:
/*<  6>*/ 				printf("El \x0E\x01\x12\x04\x00\x01amo ha aprendido ya dos de\nlas estrofas del <r<Cantar del Héroe>>.\nEl siguiente paso es encontrar al\ndragón de la <b<región de Lanayru>>.[1]¿Y después?[2-]¡Entendido!")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("Cuando el \x0E\x01\x12\x04\x00\x02amo aprenda las tres\nestrofas del Cantar del Héroe, deberá\nacudir a <b<Narisha>>, el gran espíritu de\nlos cielos, para completarlo.\nSolo entonces se le mostrará\nel camino a la <y+<Trifuerza>>.\n\n\nLa misión final de mi \x0E\x01\x12\x04\x00\x02amo consiste en\nacabar con el <b<Heraldo de la Muerte\n>>valiéndose de la <y+<Trifuerza>>.\nEse es su destino.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("El \x0E\x01\x12\x04\x00\x01amo ha aprendido ya dos de\nlas estrofas del <r<Cantar del Héroe>>.\nEl siguiente paso es encontrar al\ndragón de la <b<región de Eldin>>.[1]¿Y después?[2-]¡Entendido!")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("El \x0E\x01\x12\x04\x00\x01amo ha aprendido una de\nlas estrofas del <r<Cantar del Héroe>>.\nAhora debe encontrar a los dragones\nde las <b<regiones de Eldin y Lanayru>>.[1]¿Y después?[2-]¡Entendido!")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("El \x0E\x01\x12\x04\x00\x01amo ha aprendido ya dos de\nlas estrofas del <r<Cantar del Héroe>>.\nEl siguiente paso es encontrar al\ndragón de la <b<región de Farone>>.[1]¿Y después?[2-]¡Entendido!")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("El \x0E\x01\x12\x04\x00\x01amo ha aprendido una de\nlas estrofas del <r<Cantar del Héroe>>.\nAhora debe encontrar a los dragones\nde las <b<regiones de Farone y Lanayru>>.[1]¿Y después?[2-]¡Entendido!")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("El \x0E\x01\x12\x04\x00\x01amo ha aprendido una de\nlas estrofas del <r<Cantar del Héroe>>.\nAhora debe encontrar a los dragones\nde las <b<regiones de Farone y Eldin>>.[1]¿Y después?[2-]¡Entendido!")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("Recomiendo regresar con <b<Narisha>>,\nel gran espíritu de los cielos, para\ncompletar el Cantar del Héroe.\n[1]¿Y después?[2-]¡Entendido!")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("Deduzco que el camino a la <y+<Trifuerza\n>>se hará visible cuando mi \x0E\x01\x12\x04\x00\x02amo complete\nel Cantar del Héroe.\n\nLa misión final de mi \x0E\x01\x12\x04\x00\x02amo consiste en\nacabar con el <b<Heraldo de la Muerte\n>>valiéndose de la <y+<Trifuerza>>.\nTal es su destino.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("Sugiero examinar la estructura oculta\nque ha surgido en lo alto de la torre de\nla luz al dirigir hacia ella los molinos.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("Calculo un 80% de probabilidades de\nque una de las <r<dos grandes hojas de\nviento>> del cántico en realidad se trate\ndel molino que reparó <b<Carpín>>.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("La relación con las hojas de viento no\nestá clara, pero calculo un 85% de\nprobabilidades de que el objeto hallado\nhace poco se trate del <r<rotor del molino>>.\nRecomiendo guiar al robot de la\nchatarrería para transportarlo hasta\nNeburia.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Hay rumores de que un <r<rotor de molino\n>>de Neburia ha caído a las tierras\ninferiores, aunque su relación con\nlas hojas de viento es incierta.\nSi se lograra descubrir su ubicación\nmediante el <g<rastreo>>, el robot de la\nchatarrería podría llevarlo a Neburia.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Se dice que el <r<rotor de un molino\n>>de Neburia ha caído a las tierras\ninferiores.\n\nSu relación exacta con las hojas de\nviento se desconoce, pero deduzco que\nconviene encontrarlo de algún modo.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("La letra es críptica, pero sugiero\nbuscar por Neburia dos cosas que \npuedan parecerse a grandes hojas y\nque tengan algo que ver con el viento.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("Para encontrar a <b<Zelda>>, que ha caído a\nlas tierras inferiores, sugiero <g<lanzarse\n>>al interior de la <r<columna de luz>> que\nse alza en el mar de nubes.\nLa columna se encuentra situada\nal sur de <b<Neburia>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("Sugiero que sigamos el consejo de la\nanciana del <b<templo del presidio >>y que\nnos dirijamos al <b<bosque de Farone>>.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("Detecto ciertos indicios de civilización\nen las tierras inferiores. Sugiero\nexplorar las inmediaciones de nuestra\nzona de aterrizaje.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("Detecto una especie de edificio en\nla cumbre del volcán. Recomiendo\nadentrarse en él.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("Para apagar el muro de fuego que\nbloquea el paso a la cumbre, el \x0E\x01\x12\x04\x00\x01amo\ndebe traer la <r<marmita >>gigante de\nla dragona del agua hasta las llamas.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("Sugiero encarecidamente trepar por la\nespalda de <b<Salvio>>, el jefe de los kyus,\npara obtener el objeto transmitido de\ngeneración en generación.")
          		  case 1:
/*< 28>*/ 			printf("<b<Salvio>>, el jefe de los kyus, dice que\npara obtener su colaboración debemos\nencontrar primero a los kyus\ndesaparecidos.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("Según el kyu conocido como <b<Machi>>, \nla probabilidad de que la búsqueda\ndel jefe de los kyus ayude a\nencontrar a Zelda es del 80%.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("La presencia de Zelda en este lugar\nno ha podido pasar desapercibida.\nEstimo que buscar algún testigo\nofrecería resultados satisfactorios.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("La dragona del agua ha abierto\nel acceso al lugar donde se halla\nla <r<Llama de Farore>>.\n\nPreveo la presencia de monstruos,\npor lo que recomiendo al \x0E\x01\x12\x04\x00\x01amo\nabastecerse adecuadamente\nantes de entrar.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("El requisito para encontrar la<r< llama\nsagrada>> de la <b<región de Farone>>\nconsiste en obtener el <y<agua sagrada>>\ny llevársela a la dragona del agua.\nEs posible encontrar la ubicación\ndel agua sagrada mediante\nel <g<rastreador>>.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("Recomiendo al \x0E\x01\x12\x04\x00\x01amo que siga adelante.\nHay un 99% de probabilidades de que\n<b<Zelda >>haya atravesado el <r<Portal del\nTiempo>>.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("Ha llegado la hora de usar el poder\nrenovado de la espada y reactivar el\n<r<Portal del Tiempo>>. Aconsejo al \x0E\x01\x12\x04\x00\x01amo\nque no se demore ni un minuto más.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Confirmo que el \x0E\x01\x12\x04\x00\x01amo ha encontrado los\n5 fragmentos de la llave y debe partir\ncuanto antes hacia el templo del volcán\npara abrir la puerta de entrada.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("La búsqueda actual del \x0E\x01\x12\x04\x00\x01amo se centra\nen los 5 fragmentos de la <r<llave de la\nentrada del templo>>, que están ocultos.\nEs posible buscarlos con el <g<rastreador>>.<entrypoint_296>")
          	}
          }

