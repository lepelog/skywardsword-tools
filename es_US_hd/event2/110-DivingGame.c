          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x00\x01¿Acaso necesitan tus oídos de avezado\ne intrépido aventurero volver a oír las\nreglas del juego?\n[1]Sí,\nmejor...[2-]No, gracias")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x0D\x602Prepárate para recibir la explicación\nmás sublime que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n\x0E\x01\x09\x04\x12\x600Ese cañón que ves ahí en medio\nte enviará verticalmente por el cielo\naéreo hasta que comience tu descenso\nhacia la ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n\x0E\x01\x09\x04\x0D\x600Pero si caes sobre un <r<área gris>>, seré yo\nquien recibirá tu generoso donativo\nen forma de rupias.\n\n\x0E\x01\x09\x04\x12\x1100No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <r<lo único que cuenta es la suerte>>.\n\nPor lo tanto, ¡no recurras a la furia\nextrema e irracional si, por voluntad\ndel destino, acabas estampado sobre\nun <r<área gris>>!")
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x600Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<r<anillos de la suerte >>y <r<globododos>>\ncon mis hermosas facciones.\n\x0E\x01\x09\x04\x0D\x600Si en un derroche de habilidad\nacrobática consigues atravesar un\n<r<anillo de la suerte>>, tu multiplicador\nde rupias aumentará.\nAdemás, cuantos más anillos logres\natravesar, ¡más lenta girará la ruleta\ny más fácil te resultará controlar\nel aterrizaje!\n\x0E\x01\x09\x04\x12\xC00Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <r<globododos >>o perderás el\nmultiplicador!\n\x0E\x01\x09\x04\x0D\x600Y por último, no olvides que <r<no\npodrás utilizar >>el manto durante tu\ndescenso, así que ten mucho cuidado.")
          			  case 1:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x0D\x06¡Ha llegado el momento de que el frío\ny duro tacto del acero de ese cañón te\nenvíe a los cielos en busca de fortuna!")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 					switch (zone_temp_flags[6 /* 0x1 40 */]) {
          					  case 0:
/*< 85>*/ 						printf("\x0E\x01\x09\x04\x00\x01Mi intelecto superior me indica que\nquieres volver a jugar, ¿no es así? Pues\nme alegro de que te guste mi juego.\n\nPor supuesto, alguien tan generoso\ncomo tú estará encantado de cooperar\ncon <r<20 rupias>>, ¿verdad?\n[1]Jugar[2]Reglas[3-]Mejor no")
          						flw_33:
/*< 33>*/ 						switch (choice(3)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									zone_temp_flags[5 /* 0x1 20 */] = true;
/*<  5>*/ 									printf("\x0E\x01\x09\x04\x00\x02¡Así habla un auténtico y temerario\nviajero de las alturas! Cuando estés\nlisto, colócate sobre el cañón del\ncentro de la isla y... ¡pum!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 80, 'next': -1, 'param3': 6}
          									}
          								  case 1:
/*<  7>*/ 									printf("\x0E\x01\x09\x04\x16\xC03Amigo, amigo...<pause0F> ¡mucho me temo\nque te falta lo más importante! \x0E\x01\x09\x04\x00\x600\n¡Vuelve cuando 20 rupias decidan\nentrar en tu bolsillo!")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Prepárate para recibir la explicación\nmás sublime que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n\x0E\x01\x09\x04\x12\x600Ese cañón que ves ahí en medio\nte enviará verticalmente por el cielo\naéreo hasta que comience tu descenso\nhacia la ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n\x0E\x01\x09\x04\x0D\x600Pero si caes sobre un <r<área gris>>, seré yo\nquien recibirá tu generoso donativo\nen forma de rupias.\n\n\x0E\x01\x09\x04\x12\x1100No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <r<lo único que cuenta es la suerte>>.\n\nPor lo tanto, ¡no recurras a la furia\nextrema e irracional si, por voluntad\ndel destino, acabas estampado sobre\nun <r<área gris>>!")
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x00\x600Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<r<anillos de la suerte >>y <r<globododos>>\ncon mis hermosas facciones.\n\x0E\x01\x09\x04\x0D\x600Si en un derroche de habilidad\nacrobática consigues atravesar un\n<r<anillo de la suerte>>, tu multiplicador\nde rupias aumentará.\nAdemás, cuantos más anillos logres\natravesar, ¡más lenta girará la ruleta\ny más fácil te resultará controlar\nel aterrizaje!\n\x0E\x01\x09\x04\x12\xC00Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <r<globododos >>o perderás el\nmultiplicador!\n\x0E\x01\x09\x04\x0D\x600Y por último, no olvides que <r<no\npodrás utilizar >>el manto durante tu\ndescenso, así que ten mucho cuidado.")
          						  case 2:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x16\xD05¿Cómo? ¡Qué oyen mis preciosos y\nexperimentados oídos! ¡Jamás pensé\nque recibiría una respuesta tan tímida\ny asustadiza!")
          						}
          					  case 1:
/*<  9>*/ 						printf("\x0E\x01\x09\x04\x0D\x601¡Vaaaaya, pero si es nuestro joven\namigo amante de los cielos de nuevo!\n¿Qué, quieres volver a sentir la\nadrenalina en estado puro?\n\x0E\x01\x09\x04\x09\x600Pero claro, un caballero como tú jamás\npermitiría que lo dejaran jugar gratis,\n¿no? Serán <r<20 rupias>>.\n[1]Jugar[2]Reglas[3-]Olvídalo")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Hola, hola, muchacho!\nSupongo que habrás venido a vivir\nlas intensas emociones de la caída\nlibre, ¿no?\nComo muestra de agradecimiento por\nhaber encontrado mi ruleta, ¡te dejaré\njugar gratis esta vez!\n[1]¡Acepto\nel reto![2]¿Cómo es?[3-]No, gracias")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf("\x0E\x01\x09\x04\x00\x601¡Joven aventurero, te estoy\neternamente agradecido por haber\nencontrado mi humilde ruleta!\n\nY ahora, mi más querido y novedoso\nespectador, aquí está mi sueño hecho\npor fin realidad... ¡La <b<isla Fortuna>>!\n\nNormalmente cobro 20 rupias por\nparticipar, pero como estoy en deuda\ncontigo y es tu primer intento...\n¡te concedo el honor de jugar gratis!")
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x0D\x602Prepárate para recibir la explicación\nmás sublime que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n\x0E\x01\x09\x04\x12\x600Ese cañón que ves ahí en medio\nte enviará verticalmente por el cielo\naéreo hasta que comience tu descenso\nhacia la ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n\x0E\x01\x09\x04\x0D\x600Pero si caes sobre un <r<área gris>>, seré yo\nquien recibirá tu generoso donativo\nen forma de rupias.\n\n\x0E\x01\x09\x04\x12\x1100No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <r<lo único que cuenta es la suerte>>.\n\nPor lo tanto, ¡no recurras a la furia\nextrema e irracional si, por voluntad\ndel destino, acabas estampado sobre\nun <r<área gris>>!")
/*< 22>*/ 					printf("\x0E\x01\x09\x04\x00\x600Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<r<anillos de la suerte >>y <r<globododos>>\ncon mis hermosas facciones.\n\x0E\x01\x09\x04\x0D\x600Si en un derroche de habilidad\nacrobática consigues atravesar un\n<r<anillo de la suerte>>, tu multiplicador\nde rupias aumentará.\nAdemás, cuantos más anillos logres\natravesar, ¡más lenta girará la ruleta\ny más fácil te resultará controlar\nel aterrizaje!\n\x0E\x01\x09\x04\x12\xC00Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <r<globododos >>o perderás el\nmultiplicador!\n\x0E\x01\x09\x04\x0D\x600Y por último, no olvides que <r<no\npodrás utilizar >>el manto durante tu\ndescenso, así que ten mucho cuidado.")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x12\x600Bien, considero que ha llegado\nel momento de poner a prueba tus\nacrobacias aéreas. ¿Qué me dices?\n\n[1]¡Muy bien![2-]Mejor no")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf("\x0E\x01\x09\x04\x00\x01¿Acaso necesitan tus oídos de avezado\ne intrépido aventurero volver a oír las\nreglas del juego?\n[1]Sí,\nmejor...[2-]No, gracias")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Prepárate para recibir la explicación\nmás sublime que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n\x0E\x01\x09\x04\x12\x600Ese cañón que ves ahí en medio\nte enviará verticalmente por el cielo\naéreo hasta que comience tu descenso\nhacia la ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n\x0E\x01\x09\x04\x0D\x600Pero si caes sobre un <r<área gris>>, seré yo\nquien recibirá tu generoso donativo\nen forma de rupias.\n\n\x0E\x01\x09\x04\x12\x1100No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <r<lo único que cuenta es la suerte>>.\n\nPor lo tanto, ¡no recurras a la furia\nextrema e irracional si, por voluntad\ndel destino, acabas estampado sobre\nun <r<área gris>>!")
/*<133>*/ 							printf("\x0E\x01\x09\x04\x00\x600Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<r<anillos de la suerte >>y <r<globododos>>\ncon mis hermosas facciones.\n\x0E\x01\x09\x04\x0D\x600Si en un derroche de habilidad\nacrobática consigues atravesar un\n<r<anillo de la suerte>>, tu multiplicador\nde rupias aumentará.\nAdemás, cuantos más anillos logres\natravesar, ¡más lenta girará la ruleta\ny más fácil te resultará controlar\nel aterrizaje!\n\x0E\x01\x09\x04\x12\xC00Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <r<globododos >>o perderás el\nmultiplicador!\n\x0E\x01\x09\x04\x0D\x600Y por último, no olvides que <r<no\npodrás utilizar >>el manto durante tu\ndescenso, así que ten mucho cuidado.")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x16\xD05¿Cómo? ¡Qué oyen mis preciosos y\nexperimentados oídos! ¡Jamás pensé\nque recibiría una respuesta tan tímida\ny asustadiza!")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*<152>*/ 			switch (story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */]) {
          			  case 0:
/*<153>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			  case 1:
/*< 40>*/ 				switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          				  case 0:
/*<151>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 31}
/*< 91>*/ 					switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\n\xC10Mmm... Sería casi un milagro que\nalguien la encontrara. ¡Es el fin!\nSerá mejor que no me haga muchas\nilusiones... Hay que ser realistas.")
          					  case 1:
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\x0FAh, eres tú, muchacho. ¿Has encontrado\nmi ruleta?\n\n\n¿No? Vaya... Supongo que la desgracia\nha caído sobre mí y no hay forma de\nevitarlo...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf("El <pling><r<rastreador>> no está ajustado para\nreaccionar ante la <r<ruleta>> que busca\neste individuo.\n\n¿Desea mi \x0E\x01\x12\x04\x00\x01amo que reajuste el\n<r<<pling>rastreador>> para encontrar la <r<ruleta>>?\n\n[1]Sí[2-]Ahora no")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo.\n\n\n\nEl <pling><r<rastreador >>ya está listo para\nreaccionar ante la <r<ruleta>> que busca\neste individuo.")
/*<147>*/ 							printf("A juzgar por la ubicación de este lugar,\ncalculo un 90% de probabilidades de\nque el objeto cayese sobre el <b<desierto\nde Lanayru>>. Sugiero empezar por ahí.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo. Procedo entonces\na cancelar el ajuste del <pling>rastreador.")
          							goto flw_102
          						}
          					}
          				  case 1:
/*< 44>*/ 					switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          					  case 0:
/*<103>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*< 49>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 113, 'param3': 31}
/*<113>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*<114>*/ 								printf("\x0E\x01\x09\x04\x00\x0FAh, nada, no te preocupes. En estos\nmomentos en que parece que la\nadversidad es la única que me\nacompaña, preferiría estar solo.\nEra simplemente un adorno que\nmi perfectamente formada espalda\nlucía con orgullo, pero...<pause0A> necesito esa\n<b<ruleta>>,<pause0A> aunque sea un simple adorno.[1]Yo te la\nbusco[2-]Olvídate\nde ella")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf("¡¿Y cómo te las vas a arreglar para\nrecuperar una cosa que ha caído\ndebajo de las nubes?!\n¡Es completamente imposible!")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf("Informo a mi \x0E\x01\x12\x04\x00\x05amo que es posible\najustar el <pling><r<rastreador>> para reaccionar\nante aquello que busca este sujeto.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\n¿Debo configurar el <r<rastreador>> para\nbuscar la <r<ruleta>> de este hombre?\n\n[1]Por favor[2-]No, gracias")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf("\x0E\x01\x12\x04\x00\x05De acuerdo, amo. El <r<rastreador>> ya está\npreparado para comenzar la búsqueda\nde la <r<ruleta>>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf("A juzgar por la ubicación de este lugar,\ncalculo un 90% de probabilidades de\nque el objeto cayese sobre el <b<desierto\nde Lanayru>>. Sugiero empezar por ahí.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf("\x0E\x01\x09\x04\n\xC10Mmm... Sería casi un milagro que\nalguien la encontrara. ¡Es el fin!\nSerá mejor que no me haga muchas\nilusiones... Hay que ser realistas.")
          									  case 1:
/*<111>*/ 										printf("De acuerdo, \x0E\x01\x12\x04\x00\x05amo. En caso de cambiar\nde opinión, bastará con hablar con este\nindividuo una vez más.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf("\x0E\x01\x09\x04\x00\x10Así jamás podré ayudar a la gente\na divertirse y a ser feliz.\n\n\n\x0E\x01\x09\x04\n\xC00¡Es el fin! ¡El fin!")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf("\x0E\x01\x09\x04\x00\x0FYo... yo no... no... ¿qué voy a hacer\nahora? ¡Así jamás funcionará!\n\n\n[1]¿Qué pasa?[2-]...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf("Básicamente se me ha caído la ruleta\nque me había colocado en la espalda\ny ahora está debajo de las nubes.\n\n¡Y sin ella ya me puedo olvidar de\nconvertir todo esto en el lugar\nmás maravilloso del mundo donde\njamás se detenga la diversión!\n\x0E\x01\x09\x04\n\xC00No sé qué hacer... ¿Debería renunciar\na ella y dar por hecho que es imposible\nrecuperarla?\n[1]Yo te la\nbusco[2-]Mejor\nríndete")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x0FAy, ay, ay... ¡qué desgracia más\ndesgraciada! Mi querida ruleta\nha desaparecido bajo el inmenso\nmar de nubes...\n¡Y sin ella jamás podré cumplir\nel sueño que llevo persiguiendo\ntoda mi vida! ¡Mi existencia ya\nno tiene sentido!")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x01¡La <b<isla Fortuna>>! ¡Incluso el nombre\nes imponente! Pero ahora mismo estoy\nocupado con los preparativos, así que\nme queda mucho que preparar.\nSerá mejor que vuelvas en otro\nmomento, ¿de acuerdo? ¡Seguro\nque te sorprenderá tanto que no\npodrás ni siquiera marcharte!")
          			  case 1:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0D\x01¡Ah, un visitante! Acércate, muchacho,\nacércate. No tengas miedo.\n\n\n\x0E\x01\x09\x04\x09\x600Seguro que sientes la imperiosa\nnecesidad de saber qué estoy\nhaciendo aquí, ¿no?\n[1]Sí[2-]Pues no")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x0D\x02¡Eso es lo que quería oír! ¡Sabía que\nalguien con ese porte imponente\nsentiría curiosidad por mi gran\nempresa!\n\x0E\x01\x09\x04\x08\x600Jamás cejaré en mi empeño por\nconvertir esta isla en un lugar\nde diversión sin límite donde todo\nel mundo encuentre la felicidad.\n¿Y quieres que te diga cómo quiero\nllamarla? Pues nada más y nada menos\nque...<pause1E> ¡la <b<isla Fortuna>>!\n\n\x0E\x01\x09\x04\x12\x600Todavía me queda mucho por\npreparar, así que será mejor que\nvuelvas por aquí más adelante.\n¡Nos divertiremos muchísimo!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf("\x0E\x01\x09\x04\x0D\xC03Para qué te voy a engañar...\nTu respuesta no me ha agradado lo\nmás mínimo. Es más, llevo una lucha\ninterna por no decirte lo que pienso.\n\x0E\x01\x09\x04\x08\x600¿Sabes por qué? Lo único que me\nimporta en esta vida es hacer realidad\nlos sueños de los demás.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 31, 'param3': 44}
/*< 31>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
/*< 26>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 14, 'param3': 12}
/*< 14>*/ 	switch (context_related4(0)) {
          	  case 0:
/*<115>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 117, 'param3': 13}
/*<117>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 15, 'param3': 6}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05¡Oh, cielos! ¡La adversidad ha invadido\ntu persona y te has estampado contra\nla temible área gris!\n\nTemible para ti, claro, ¡porque eso\nsignifica que mis ganancias ascienden\na <r<<numeric arg2> \x0E\x03\x04\x02\x1CD>>!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 16, 'param3': 6}
/*< 16>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05¡Qué amarga contrariedad! <r<0 rupias>>,\nni una más, ni una menos. ¡Pero no\npermitas que te invada el desánimo\ny vuelve cuando quieras!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 85, 'next': 17, 'param3': 6}
/*< 17>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06¡Vaya, vaya, esta vez te ha acompañado\nla suerte! ¡A eso lo llamo yo aterrizar\nen brazos de la fortuna!\n\n\x0E\x01\x09\x04\x0D\x600Veamos, has caído en un área valorada\nen <numeric arg0> y has obtenido un multiplicador\nde <numeric arg1>, lo que traducido en <r<rupias>>...\n¡nos da un total de <r<<numeric arg2>>>!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf("Y como buen caballero pagador\nque soy, ¡aquí tienes tu premio\nen rupias! ¡Nada más y nada menos\nque <numeric arg2>!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x12\x600Si logras esquivar todos los globododos,\natraviesas 5 anillos y caes en un área de\n50 rupias...\n\n¡te llevarás a casa un gran premio\nespecial!\n\n\n\x0E\x01\x09\x04\x08\x1000¡Espero volver a ver tu imponente\nfigura de aventurero de las alturas\npor aquí muy pronto!\n")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 130, 'next': 24, 'param3': 6}
/*< 24>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06¡Sublime! ¡Simple y llanamente sublime!\n¡Has aterrizado en un área de 50 rupias!\n\n\nY como habías obtenido un multiplicador\nx <numeric arg1>... ¡has conseguido <r<<numeric arg2> rupias>>!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf("¡Increíble! ¡Has atravesado todos los\nanillos de la suerte y además has caído\nen la mejor zona de todas! ¡Te mereces\nun premio además de las rupias!")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				check_item_flag(489, 3)
/*<149>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 65}) {
          				  case 0:
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 12}
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x12\x600Si logras esquivar todos los globododos,\natraviesas 5 anillos y caes en un área de\n50 rupias...\n\n¡te llevarás a casa un gran premio\nespecial!\n\n\n\x0E\x01\x09\x04\x08\x1000¡Espero volver a ver tu imponente\nfigura de aventurero de las alturas\npor aquí muy pronto!\n")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf("\x0E\x01\x09\x04\x00\x06¡Muchísimas gracias! ¡Todo vuelve a\ntener sentido otra vez! ¡Ahora ya puedo\nretomar mi gran proyecto de la <b<isla\nFortuna>>!\n\x0E\x01\x09\x04\x00\xA00¡Aaaaaah! ¡Tanta felicidad es casi\ninsoportable! ¡Siento un cosquilleo\nindescriptible por todo el cuerpo!")
/*< 67>*/ 		printf("¡Te pienso conceder el grandísimo\nhonor de ser mi primer cliente!\n¡Te estaré agradecido eternamente!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x00\x07¡Aaaaaay! ¡Sííí, es mi ruleta!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x0B¡¿Pe... pero qué ven mis ojos?!\n¡No... no es posible!\n\n\n¡Sí! ¡No hay duda! ¡No es una\nalucinación!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00dMuy bien, ya está aquí el tablero\nde los colores.")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00dPara cualquier otra cosa, ya sabes...\n¡Que me lo pida Fay!")
          }

