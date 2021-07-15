          void entrypoint_101_30() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("")
          }

          void entrypoint_101_31() {
/*< 26>*/ 	start()
/*< 64>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 	check_item_flag(19, 1)
/*< 25>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡<y<10 flechas>>! ¡Qué buena elección!\nUn artículo perfecto para dar\nimpresión de fuerza y poderío.\n\nPero tenga cuidado y no dispare\na nadie por error. Son <r<20 rupias>>.\n\n[1]Me las llevo[2-]Mejor no")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf("Disculpe, señor. Lo lamento mucho\npero no puedo venderle este artículo,\npuesto que no posee ningún arco.\nLas normas son las normas...")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 32, 'param3': 12}
/*< 32>*/ 	check_item_flag(92, 1)
/*< 31>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Aaah! Ya veo que le ha echado el ojo a\nlas <y<10 bombas>>. ¡Con semejante arsenal,\nva a sembrar el terror a su paso!\n\nResultan ideales para derribar paredes\nde un plumazo.\n\n\nSon <r<20 rupias>>. ¿Qué me dice?\n\n[1]Me las llevo[2-]Mejor no")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf("Disculpe, señor. Lo lamento mucho\npero no puedo venderle este artículo,\nya que no posee un saco de bombas.\n\nNo sabe cuánto lo siento, señor...")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x00\x02¡Aaah, buena elección! Esto es un\n<y<escudo de madera>>. ¡Con él podrá\nrepeler los ataques que le lancen!\n\nPero si el escudo recibe muchos golpes\n<r<se romperá>>, así que tenga cuidado\nal usarlo.\n\nOtra cosa a tener en cuenta es\nque el escudo no es muy resistente\nal fuego y arde a la mínima.\n\nSu precio es de <r<50 rupias>>.\n¿Qué me dice, se lo lleva?\n\n[1]Sí[2-]Mejor no")
/*<125>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 50, 'param3': 12}
/*< 50>*/ 	printf("\x0E\x01\x09\x04\x00\x02¡Aaah! ¡Qué buen ojo tiene el señor!\nEsto es un <y<escudo de hierro>>.\nOfrece mejores prestaciones\nque el escudo de madera.\n¡Y es completamente incombustible!\nLo malo es que con electricidad\nde por medio tiene las de perder...\n¡Mucho cuidado con las descargas!\nSu precio es de <r<100 rupias>>.\n¿Quiere comprarlo?\n\n[1]¡Venga![2-]Mejor no")
/*<126>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 51, 'param3': 12}
/*< 51>*/ 	printf("\x0E\x01\x09\x04\x00\x02¡Aaah! ¡Excelente elección, señor!\nEsto es un magnífico <y<escudo sagrado>>\ncapaz de repararse automáticamente\nante cualquier pequeño desperfecto.\n¡Y además es un escudo todoterreno,\nasí que se acabaron los problemas con\nel fuego y la electricidad!\n\nPero\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í su punto flaco es que se rompe\ncon unos pocos golpes... ¡Claro que el\nseñor es tan buen guerrero que seguro\nque no debe preocuparse por tal cosa!\nY barato no es... pero ¿quién podría\nrenunciar a algo así por tan solo <r<500\nrupias>>? Qué me dice, ¿se lo lleva?\n[1]¡Vale![2-]Mejor no")
/*<127>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Aaah, un cliente!\n¿Qué puedo hacer por usted, señor?\n¿Tal vez desea saber cómo funciona\nnuestra tienda?[1]Sí, dime\ncómo va[2-]Solo estoy\nmirando")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf("Será un honor para mí ofrecerle una\nexplicación al señor con todo lujo\nde detalles.\n\nColóquese delante de un artículo y\npulse (A); así podrá cogerlo\ne inspeccionarlo cómodamente,\n¡sin compromiso ninguno!\nNo se preocupe, aquí no atosigaremos\nal señor para que compre algo que\nno quiera.")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf("También tiene a su disposición el\nservicio de mejoras de la chatarrería,\npara que el señor reforme nuestros\nartículos como mejor le parezca.\nPor ejemplo, tal vez el señor quiera\nque sus escudos le duren más...\nPues en la chatarrería pueden\naumentar su resistencia fácilmente.")
/*<140>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x07¡Aaah, claro, claro, por supuesto!\n¡Un cliente tan listo y avispado como\nusted no necesita mi ayuda para nada!\n\nAdelante, deléitese la vista cuanto\nquiera con nuestros estupendos\nartículos.")
/*< 39>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 97>*/ 		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
          		  case 0:
/*<102>*/ 			switch (scene_flags[123 /* 0xE 08 */]) {
          			  case 0:
          				goto flw_41
          			  case 1:
/*<109>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 				printf("\x0E\x01\x09\x04\x00\x01Aaah, señor.\nQué coincidencia que haya venido,\n¡nos ha llegado hoy mismo un precioso\n<r<artículo nuevo>>!\nEs ideal para usted: un <y<carcaj pequeño>>.\n¡Una compra obligada para cualquier\naficionado al tiro con arco!\nMire, mire qué maravilla de acabado.")
/*<111>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
/*<115>*/ 				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
          			}
          		  case 1:
/*< 98>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
/*<101>*/ 				switch (scene_flags[122 /* 0xE 04 */]) {
          				  case 0:
          					goto flw_41
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					printf("\x0E\x01\x09\x04\x00\x01Aaah, señor.\n¡Qué bien que haya venido, porque hoy\nmismo nos ha llegado un flamante\ny despampanante <r<artículo nuevo>>!\nSeguro que le va a encantar:\n¡un <y<escudo sagrado>>, nada menos!\nFascinante y enigmático, puro arte...\n¡Mire, mire cómo reluce!")
/*<108>*/ 					zone_temp_flags[1 /* 0x1 02 */] = true;
/*<114>*/ 					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
          				}
          			  case 1:
/*< 96>*/ 				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
          				  case 0:
/*<100>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
          						goto flw_41
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 104, 'param3': 31}
/*<104>*/ 						printf("\x0E\x01\x09\x04\x00\x01Aaah, señor.\n¡Ha llegado justo a tiempo! Hoy mismo\nnos ha llegado un <r<artículo nuevo>> \nabsolutamente divino.\n¡Estoy seguro de que al señor le va a\nencantar este <y<saco de bombas pequeño>>!\nMire, mire, ¡qué costuras!")
/*<105>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
/*<113>*/ 						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
          					}
          				  case 1:
/*< 92>*/ 					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          					  case 0:
/*< 99>*/ 						switch (scene_flags[120 /* 0xE 01 */]) {
          						  case 0:
          							goto flw_41
          						  case 1:
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*< 94>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aaah, es usted, señor.\n¡Hoy está de suerte, tenemos un\n<r<artículo nuevo>> recién traído del taller!\n\nEste <y<escudo de hierro >>sería una compra\nfantástica. Mire, mire... \nQué acabado, qué lustre...")
          								flw_95:
/*< 95>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aaah, señor, es usted. ¡No podría haber\nelegido mejor momento para venir,\ntengo dos <r<artículos nuevos>> estupendos!\n\nSe trata del <y<escudo de hierro>>\ny la <y<bolsa de semillas pequeña>>.\nMire, mire qué maravilla.\n\nQué ergonomía, qué acabado más\nesplendoroso... ¡Ya no se ven cosas así!")
          								goto flw_95
          							}
          						}
          					  case 1:
/*<117>*/ 						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          						  case 0:
/*<118>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
          								goto flw_41
          							  case 1:
/*<119>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aaah, señor.\nHoy la fortuna le sonríe; ¡nos acaba\nde llegar un <r<nuevo artículo>>!\n\nCreo que le va a encantar, se trata de\nuna <y<bolsa de semillas pequeña>>.\n\n\nEs un complemento para el tirachinas\nque no le puede faltar. Mire, mire qué\nacabado más perfecto...")
/*<120>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x01¡Aaah, un cliente! ¡Pase, señor, pase!\n¡Está usted en su casa!\n\n\n¡Bienvenido a la tienda de utensilios,\nel establecimiento que hace realidad\ntodos sus sueños!\n\nAdemás, a los señores caballeros\ncelestes les hacemos un descuento\nespecial.\n\nTómeselo con calma y mire todo\nlo que quiera, seguro que ve algo\nque llama su atención.\n\n¿O tal vez desea el señor saber cómo\nfunciona nuestra tienda?\n[1]Sí, mejor[2-]Es igual\x0E\x01\x07\x04\x00\x00")
          							goto flw_1
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_101_36() {
/*< 54>*/ 	start()
/*< 69>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 53, 'param3': 12}
/*< 53>*/ 	check_item_flag(52, 1)
/*< 52>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*< 55>*/ 		printf("\x0E\x01\x09\x04\x00\x02Conque le interesan esas\n<r<10>> <y<semillas deku>>, ¿eh, señor?\nSon el proyectil ideal para los maestros\ndel tirachinas.\n¡Nunca salga de aventuras sin\nunas cuantas en el bolsillo!\nSon <r<20 rupias>>, ¿qué me dice?\n[1]Me las llevo[2-]Mejor no")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf("Señor, por lo que veo no tiene\ntirachinas. Lo siento, pero...\n\n\nNo puedo venderle este artículo si no\ntiene un tirachinas. Claro que siempre\npuede echar un vistazo a nuestros otros\nartículos, por supuestísimo.")
          	}
          }

          void entrypoint_101_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("")
          }

          void entrypoint_101_37() {
/*< 71>*/ 	start()
/*< 72>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 141, 'param3': 12}
/*<141>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	check_item_flag(52, 1)
/*< 80>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Una <y<bolsa de semillas pequeña>>!\nCon solo meterla en la alforja puede\nllevar 10 semillas más.\n\n¡Es una compra obligada para todo\nusuario de tirachinas!\nCuesta <r<100 rupias>>.\n\n¿Qué le parece al señor?\n\n[1]Me la llevo[2-]Otro día")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf("Señor, por lo que veo no tiene\ntirachinas. Lo siento, pero...\n\n\nNo puedo venderle este artículo si no\ntiene un tirachinas. Claro que siempre\npuede echar un vistazo a nuestros otros\nartículos, por supuestísimo.")
          	}
          }

          void entrypoint_101_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	switch (random(2)) {
          	  case 0:
/*<  9>*/ 		printf("")
          	  case 1:
/*< 10>*/ 		printf("")
          	}
          }

          void entrypoint_101_38() {
/*< 74>*/ 	start()
/*< 75>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 83>*/ 	check_item_flag(19, 1)
/*< 84>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          	  case 0:
/*< 76>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Esto es un <y<carcaj pequeño>>!\nCon solo meterlo en la alforja puede\nllevar 5 flechas más.\n\n¡La compra ideal para cualquier\namante del tiro con arco!\n\n\nCuesta <r<150 rupias>>.\n¿Quiere llevárselo el señor?\n\n[1]¡Venga![2-]Mejor no")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf("Disculpe, señor. Lo lamento mucho\npero no puedo venderle este artículo,\npuesto que no posee ningún arco.\nLas normas son las normas...")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	check_item_flag(112, 1)
/*< 63>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 14>*/ 		printf("Disculpe, señor, pero... Me parece\nque no tiene espacio suficiente en\nla alforja para este artículo... \n\nLe sugiero que se pase por la consigna\na dejar algo.")
/*<128>*/ 		zone_temp_flags[5 /* 0x1 20 */] = false;
          	  case 1:
          	}
          }

          void entrypoint_101_39() {
/*< 77>*/ 	start()
/*< 78>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 143, 'param3': 12}
/*<143>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 87>*/ 	check_item_flag(92, 1)
/*< 86>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Un <y<saco de bombas pequeño>>!\nCon solo meterlo en la alforja puede\nllevar 5 bombas más.\n\n¡Es la compra perfecta para llevar\ncómodamente sus bombas a todas\npartes!\n\nCuesta <r<150 rupias>>.\n¿Desea llevárselo el señor?\n\n[1]¡Vale![2-]Mejor no")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf("Disculpe, señor. Lo lamento mucho\npero no puedo venderle este artículo,\nya que no posee un saco de bombas.\n\nNo sabe cuánto lo siento, señor...")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("Disculpe, señor, pero...\n\n\n\nCreo que ya no puede llevar más\nejemplares de este artículo.\nClaro que, si lo desea, siempre\npuede mirar otros artículos.")
/*<129>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	make_actor_do_something(1, 0)
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x08¡Aaaaaah!\x0E\x01\x05\x04\n\x00\n")
/*< 60>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 61, 'param3': 22}
/*< 61>*/ 	printf("Esto, señor... Disculpe, pero no\nle llegan las rupias para pagar...\nLe agradecería que se abstuviera\nde gastar este tipo de bromas...")
/*<130>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 512, 'next': 43, 'param3': 22}
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x07Aaah, muchas gracias, señor.\n¡Vuelva a visitarnos cuando lo desee!")
          		flw_144:
/*<144>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf("Señor, voy a tomarme la libertad\nde guardar el artículo en su alforja.\nY recuerde:\n\nlos escudos y otros objetos se <r<equipan\n>>abriendo la alforja con <g<\x0E\x02\x04\x02\x2CD>> y luego\nseleccionando el objeto que\ndesee equipar.\x0E\x01\x11\x02\x2CD")
          					flw_137:
/*<137>*/ 					zone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf("Señor, si alberga dudas acerca de\nla <r<durabilidad de su escudo>>, le sugiero\nque se acerque por la <r<chatarrería>>.\n\nSi lleva al encargado tesoros y cosas\nasí, él los usará como materia prima\npara mejorar sus escudos...\ny lo que se tercie.")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf("Señor, voy a tomarme la libertad\nde guardar el artículo en su alforja.\n\n\nPara abrir la alforja, mantenga\npulsado \x0E\x02\x04\x02\x2CD y mueva el cursor <g<haciendo\nmovimientos circulares >>con el mando\npara seleccionar el objeto que desee.\x0E\x01\x11\x02\x2CD\nActo seguido, <g<suelte >>\x0E\x02\x04\x02\x2CD y dicho objeto\nestará a su disposición para usarlo\ncomo guste.\x0E\x01\x11\x02\x2CD\n\n¡Los escudos y otros objetos se equipan\nexactamente igual!")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				zone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x07Una elección excelente, señor. ¡Da\ngusto tratar con clientes como usted!")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	make_actor_do_something(1, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\x00\x08(...)\x0E\x01\x05\x04\x0F\x00")
/*< 45>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 30, 'param3': 22}
/*< 30>*/ 	printf("¡No se preocupe, señor! ¡Tenemos\nmuchos más artículos! ¡Tómese\ntodo el tiempo del mundo!")
/*<131>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

