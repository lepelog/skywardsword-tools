          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf("")
/*<  7>*/ 	give_item(62 0x3E);
          }

          void entrypoint_003_028() {
/*<118>*/ 	start()
/*<148>*/ 	check_item_flag(505, 2)
/*<149>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 27>*/ 		check_item_flag(505, 3)
/*< 28>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          		  case 0:
/*< 24>*/ 			check_item_flag(505, 4)
/*< 25>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 2}) {
          			  case 0:
/*< 21>*/ 				check_item_flag(505, 5)
/*< 22>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          				  case 0:
/*<151>*/ 					printf("¡Has conseguido todas las <y<piezas de llave>>!\nYa puedes abrir la puerta del templo\nsellado para ir en pos de Zelda.\n\n¡Será mejor que vuelvas a la cima cuanto\nantes y explores las entrañas del templo,\na ver si das con algún rastro de ella!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf("¡Has conseguido una <y<pieza de llave>>! Es un\nfragmento de la llave que abre el templo\nsellado. ¡Solo necesitas <r<1 pieza >>más!")
          				}
          			  case 1:
/*< 26>*/ 				printf("¡Has conseguido una <y<pieza de llave>>! Es un\nfragmento de la llave que abre el templo\nsellado. ¡Solo te faltan <r<2 piezas>>!")
          			}
          		  case 1:
/*< 29>*/ 			printf("¡Has conseguido una <y<pieza de llave>>!\nEs un fragmento de la llave que abre\nel templo sellado. ¡Busca las <r<3 piezas\n>>restantes!")
          		}
          	  case 1:
/*<150>*/ 		printf("¡Has conseguido una <y<pieza de llave>>!\nEs un fragmento de la llave que abre\nel templo sellado.\n\nDebes reunir las 5 piezas para completar\nla llave. ¡Busca las otras <r<4 piezas>>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf("¡Has conseguido una <y<espada de aprendiz>>!\nEs la herramienta básica que todo alumno\nde la academia usa para entrenar.\n¡Ojo que parece muy afilada!\nPulsa (1) en cualquier momento para ver\nlos objetos con los que vas equipado.\x0E\x01\x11\x02\x4CD")
/*<383>*/ 	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
/*<569>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_003_097() {
/*<223>*/ 	start()
/*<578>*/ 	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
/*<221>*/ 	check_item_flag(95, 1)
/*<222>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*<224>*/ 		check_item_flag(96, 1)
/*<225>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*<582>*/ 			printf("¡Has obtenido la <y+<Trifuerza de la Sabiduría>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf("¡Has obtenido la <y+<Trifuerza de la Sabiduría>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<537>*/ 			printf("¡Solo te falta <r<una>> parte de la Trifuerza\npara completarla!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf("¡Has obtenido la <y+<Trifuerza de la Sabiduría>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<536>*/ 			printf("¡Consigue las <r<dos>> partes que te faltan\npara completar la Trifuerza!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf("¡Has conseguido el <y<medallón maligno>>!\nEs un misterio, pero hace que surjan más\ntesoros y rupias. ¡Pero está maldito y no\nte permite abrir la alforja!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<268>*/ 		printf("¡Ahora tu escudo es un <y<escudo de hierro\nsólido>>! Es muy resistente. De hecho, ¡es el\nescudo de hierro más resistente de todos!")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf("")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf("¡Has conseguido un <y<cristal maléfico>>!\nEs el corazón cristalizado de un monstruo.\nEs muy poco frecuente encontrarlos\nen este estado.")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf("")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf("Has conseguido reunir todas las <y<lágrimas\nde Nayru>> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*<447>*/ 		printf("¡Has conseguido una <y<lágrima de Nayru>>!\nCon su poder sagrado paralizarás a los\nguardianes durante <r<90 segundos>>.\n\n¡Reúne las <r<15>> lágrimas para poder superar\nel juicio!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf("")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf("")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf("¡Has conseguido el <y<glifo dorado>>! Esta\nescultura dorada tiene una forma\nbastante peculiar y unos grabados\nmuy originales.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf("¡Has conseguido la <y<espada divina>>!\nSu misteriosa hoja está bañada por\nun fulgor celestial.\n\n¡Eleva hacia el cielo la espada que tantas\nveces has empuñado con valor y observa\ncómo emana de ella la <pling><r<poderosa energía\ndel rayo celestial>>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf("¡Has conseguido la <y<espada divina>>!\nSu misteriosa hoja está bañada por\nun fulgor celestial.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf("")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf("¡Has conseguido la <y<carta náutica del\npasado>>! Es un mapa del desierto,\n¡pero de cuando todo estaba cubierto\nde agua!")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf("¡Tu tirachinas ahora es un <y<tirachinas\nmúltiple>>! El área de impacto ha\naumentado. ¡Mantén pulsado (A)\npara disparar a lo grande!")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf("¡Has conseguido un <y<escudo sagrado>>!\nSu misterioso poder le permite repararse \nél solo, y es capaz de repeler el fuego,\nla electricidad y hasta las maldiciones.")
          		  case 1:
/*<673>*/ 			printf("¡Has conseguido un <y<escudo sagrado>>!\nSu misterioso poder le permite <r<repararse>> \ngradualmente <r<él solo>>.\n\nAunque no es demasiado resistente y se\nrompe con cierta facilidad, es capaz\nde repeler el fuego, la electricidad y\nhasta las maldiciones.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf("¡Has conseguido una <y<pluma de ave azul>>!\nSolo unos pocos pájaros presentan esta\nllamativa tonalidad, por eso sus plumajes\nson tan tremendamente valiosos.")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf("")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf("Has conseguido reunir todas las <y<lágrimas\nsagradas>> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*<442>*/ 		printf("¡Has conseguido una <y<lágrima sagrada>>!\nCon su poder sagrado paralizarás a los\nguardianes durante <r<90 segundos>>.\n\n¡Reúne las <r<15>> lágrimas para poder superar\nel juicio!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf("")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf("")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf("¡Has conseguido un <y<fruto luminoso>>! Estos\nfrutos harán que las lágrimas sagradas\nrestantes proyecten haces de luz verticales\n<r<durante 30 segundos>>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf("")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf("¡Has conseguido una <y<poción de salud XXL>>!\nAdemás de <r<devolverte todos los corazones>>,\ncada botella incluye <r<dos dosis>>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf("¡Has recuperado los <y<guantes moguma>>!\n¡Intenta escapar de aquí como lo haría\nun auténtico moguma!")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf("¡Has conseguido los <y<guantes moguma>>!\n¡Ni siquiera los propios mogumas se topan\ncon guantes de cavar de esta calidad\na menudo!\nEstos no solo sirven para cavar hoyos, sino\n<g<también para abrirte paso bajo tierra>>.\n¡Busca hoyos en los que puedas meterte!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf("")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<278>*/ 		printf("¡Ahora tu escudo es un <y<escudo sagrado\nsuperior>>! Se repara solo gracias a su\npoder sagrado. ¡Y además es bastante\nmás resistente!")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf("¡Has conseguido el <y<cazamariposas grande>>!\nComo es el doble de grande, podrás cazar\nhasta los insectos más esquivos.")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf("¡Has conseguido un <y<broche calavérico de\noro>>! Toda una rareza entre las joyas de\neste tipo, emite extraños brillos dorados.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf("¡Has recibido la <y<carta de Corvy>>! ¿Reflejará\nsus auténticos sentimientos?\n\n\n¡Cuida bien de ella y no se te ocurra usarla\ncomo papel higiénico ni nada por el estilo!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf("")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf("¡Has conseguido <y<invencibline 500>>! Es una\nmisteriosa poción que reduce a la mitad\nel daño recibido. Su efecto dura <r<3 minutos>>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf("¡Has conseguido <r<una >><y<gema de gratitud>>!\nEstas piedras preciosas proceden de\npersonas totalmente desbordadas por un\nindescriptible sentimiento de gratitud.\n¡Reúne todas las que puedas y llévaselas\na <b<Batolo>>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf("¡Has conseguido el <y<glifo de dragón>>!\nEs una deslumbrante escultura de un\ndragón enroscado elaborada en oro.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf("¡Has recuperado la <y<Espada Maestra\nAuténtica>>! Ahora podrás desquitarte a \ngusto: nada se resistirá al filo de su hoja\ny, además, volverás a hablar con <b<<pling>Fay>>.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf("")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf("")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf("")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<277>*/ 		printf("¡Ahora tu escudo es un <y<escudo sagrado\nsupremo>>! Se repara solo gracias a su poder\nsagrado. ¡Y además su durabilidad es aún\nmás elevada!")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>! Aparecen\nen grandes grupos una vez cada diez años y\ndevoran toda la vegetación que encuentran\na su paso.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>! Aparecen\nen grandes grupos una vez cada diez años y\ndevoran toda la vegetación que encuentran\na su paso.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf("¡Has conseguido un <y<objeto perdido\nde la Diosa>>! Cuentan que se le cayó\na la Diosa hace mucho tiempo. ¡Es un\ntesoro legendario!")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf("¡Has conseguido la <y<jaula para insectos de\nTerry>>! ¡Y dentro está su insecto favorito!\n¡Ve corriendo a llevársela!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf("")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf("")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf("¡Has conseguido <y<invencibline 2000>>! Es una\npotente poción con la que serás invencible\ndurante <r<3 minutos>>.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf("¡Has recuperado el <y<ánfora de aire>>!\nYa puedes volver a desatar toda su\nfuria huracanada.")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf("¡Has conseguido el <y<ánfora de aire>>! Se trata\nde un arcano y misterioso objeto que lanza\npotentes ráfagas de viento.\n\nSi notas que tiembla demasiado y te\n<r<falta precisión >>al apuntar, pulsa (v)\npara corregir el punto de mira.\x0E\x01\x11\x02\x9CD")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf("¡Has conseguido el <y<glifo vetusto>>!\nEs de reluciente oro y parece parte\nde un mecanismo. Lleva incrustado\nalgún tipo de circuito.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf("")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf("")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf("¡Has conseguido el <y<zurrón mediano>>! Tiene\nmayor capacidad que el zurrón utilizado\nhasta ahora. ¡En este caben <r<500 rupias>>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf("¡Has conseguido el <y<escudo hyliano>>!\nEs un escudo legendario imbuido de\nun poder heroico. ¡No hay ataque que\npueda con él!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf("¡Has obtenido <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nDicen que sacan brillo a sus carapachos\npara aumentar su fuerza. De hecho, esta\nespecie es la más fuerte de todas.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nDicen que sacan brillo a sus carapachos\npara aumentar su fuerza. De hecho, esta\nespecie es la más fuerte de todas.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf("")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf("¡Has conseguido <y<reparol 2000>>!\nTe rellena <r<automáticamente>> el indicador\ndel escudo, te recupera <r<8>> corazones... \n¡y además lo puedes usar <r<dos>> <r<veces>>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf("")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf("¡Has conseguido una <s<rupia plateada>>!\nIgual no lo sabes, pero vale <r<100 rupias>>.\n¿No te entran ganas de ponerte a brincar\nde alegría?")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf("")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf("¡Has conseguido <y<resistone 500>>!\nTu indicador de resistencia se\nagotará a menor velocidad.\n¡Y su efecto dura <r<3 minutos>>!")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf("¡Has conseguido el <y<zurrón grande>>!\nEs mucho más grande que el zurrón\nutilizado hasta ahora. ¡Puedes meter\nhasta <r<1000 rupias>>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf("¡Has conseguido <y<reparol 100>>!\nEsta misteriosa poción te deja el indicador\ndel escudo <r<como nuevo >>y, de propina, te\nrecupera <r<4>> corazones de salud.")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>!\nAl calentarlo, su veneno puede usarse\ncomo medicina. ¡Pero procura evitar\nlos enjambres o lo lamentarás!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>!\nAl calentarlo, su veneno puede usarse\ncomo medicina. ¡Pero procura evitar\nlos enjambres o lo lamentarás!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf("¡Has conseguido el <y<sonajero>>! Es el juguete\nideal para cualquier bebé. ¿Cómo habrá\nllegado hasta aquí?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf("")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf("¡Has conseguido <y<sopa de calabaza caliente>>!\nLa prepara el dueño del Calabarza's.\n¡Pero se enfría en <r<5 minutos>>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf("¡Has conseguido la <y<escama de dragón\nacuático>>! Es una de las tres reliquias\nlegadas por la Diosa. Permite bucear\ny ejecutar torbellinos bajo el agua.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf("¡Has conseguido el <y<mapa de la mazmorra>>!\nAhora podrás consultar en todo momento\ntu posición y los lugares aún por explorar.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf("También indica la ubicación de los cofres\nde tesoros, ¡así que no te olvides de\nutilizarlo a menudo!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf("¡Has conseguido una <y+<rupia dorada>>! Vale\nnada más y nada menos que <r<300 rupias>>.\n¡Pero no se lo digas a nadie!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf("")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf("¡Has conseguido <y<resistone 2000>>! Es una\npoción milagrosa con la que durante\n<r<3 minutos>> tu indicador de resistencia\nno se moverá.")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf("¡Has conseguido <y<reparol 500>>!\nEsta poción te restaura <r<automáticamente>>\nel indicador del escudo cuando se vacía y,\nademás, te recupera <r<8>> corazones.")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nUtilizan sus poderosas patas delanteras\npara atrapar a sus presas. Es un insecto\nmuy común en Celéstea.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nUtilizan sus poderosas patas delanteras\npara atrapar a sus presas. Es un insecto\nmuy común en Celéstea.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf("¡Has conseguido <y<larvas de abeja>>! Son una\nexcelente fuente de proteínas e igual\npueden servir como ingrediente para\nelaborar distintos elementos.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf("")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf("")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf("")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf("")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf("¡Has conseguido una <black<pudria>>! El influjo de\nlas pudrias es capaz de hacer desaparecer\n<r<10 rupias >>de golpe. Así que sí, acabas de\nperderlas...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf("¡Has conseguido la <y<orquídea del espíritu>>!\n¡Es una misteriosa planta que representa\ntu esencia, Link!")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf("¡Has conseguido una <y<poción de oxígeno>>!\nÚsala para que tu indicador de oxígeno se\nvacíe más lentamente durante <r<3 minutos>>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf("¡Has conseguido el <y<zurrón gigante>>!\nEs todavía más grande que el zurrón\nutilizado hasta ahora. ¡Le caben hasta\n<r<5000 rupias>>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf("¡Has conseguido la <y<bolsa de semillas\npequeña>>! Con ella puedes guardar <r<10\n>>semillas deku adicionales, así que llévala\nencima cuando uses el tirachinas.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>! Dicen\nque se vuelven de color rojo al ingerir\nmetales. No son demasiado activas y\nsuelen permanecer quietas.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>! Dicen\nque se vuelven de color rojo al ingerir\nmetales. No son demasiado activas y\nsuelen permanecer quietas.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf("¡Has obtenido <numeric arg0> <y<\x0E\x03\x04\x02\xFCD>>! Estas\nhermosas y diminutas plumas son muy\napreciadas en Altárea, y probablemente\nsirvan como materia prima para algo.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf("¡Has vuelto a conseguir un <y<brote del árbol\nde la vida>>! Si lo plantas aquí, va a tardar\nuna eternidad en crecer. ¿Por qué no\nbuscas otro lugar?")
          	  case 1:
/*<490>*/ 		printf("¡Has conseguido un <y<brote del árbol de la\nvida>>! Es la semilla de un legendario árbol\ncuyos frutos al parecer curan cualquier\nmal.")
/*<529>*/ 		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
          	}
          }

          void entrypoint_003_052() {
/*< 97>*/ 	start()
/*<415>*/ 	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
          	  case 0:
/*<597>*/ 		check_item_flag(105, 1)
/*<598>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 96}) {
          		  case 0:
/*<599>*/ 			printf("¡Has recuperado el <y<tirachinas múltiple>>!\n¡Aturde a los enemigos que están montando\nguardia!")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf("¡Has recuperado el <y<tirachinas>>! ¡Aturde\na los enemigos que están montando\nguardia!")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf("¡Has conseguido el <y<tirachinas>>!\nEs un arma que permite disparar semillas\ndeku para aturdir a tus enemigos con su\nefecto paralizante.\nSi notas que tiembla demasiado y te\n<r<falta precisión >>al apuntar, pulsa (v)\npara corregir el punto de mira.\x0E\x01\x11\x02\x9CD")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf("¡Has conseguido <r<cinco >><y<gemas de gratitud>>!\nBásicamente se trata de sentimientos\npuros de agradecimiento cristalizados.\n\nCada vez que ayudes a alguien, recibirás\n<r<cinco gemas >>como muestra de gratitud.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf("")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf("¡Aquí solamente hay trastos!")
          	  case 1:
/*<596>*/ 		printf("Ir abriendo los armarios de los demás\nno es propio de caballeros...")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf("¡Has conseguido una <y<poción de oxígeno XL>>!\nCon esta maravilla de poción tu indicador\nde oxígeno se mantendrá intacto durante\n<r<3 minutos>>.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf("¡Has conseguido el <y<zurrón de ricachón>>!\n¡Es grande hasta para los ricos y tiene\ncapacidad para <r<9000 rupias>>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf("¡Has conseguido la <y<bolsa de semillas\nmediana>>! Con ella puedes guardar <r<20\n>>semillas deku adicionales, así que llévala\nencima cuando uses el tirachinas.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf("¡Has obtenido <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>! Se trata de\nun insecto muy común en todas las regiones\nque, a veces, revolotea por sitios extraños.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>! Se trata de\nun insecto muy común en todas las regiones\nque, a veces, revolotea por sitios extraños.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf("¡Has conseguido una <y<planta rodadora>>!\nSi la pones a secar hasta que se quede\ncomo una piedra, igual sirve para algo.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf("¡Has conseguido la <y<gema de la ordalía>>!\nEl símbolo que presenta guiará al elegido\nhasta el lugar donde se oculta la Trifuerza.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf("¡Has conseguido un <y<fruto del árbol de la\nvida>>! Dicen que cura todos los males...\n¡Corre, llévaselo al dragón del trueno!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf("¡Has conseguido el <y<telescarabajo con\ngancho>>! Ahora tiene unas mandíbulas\nmás grandes y permite transportar cosas.\n\nSi necesitas dejar caer algo con precisión,\npulsa (Z) para obtener una vista de pájaro.\n¡Te resultará muy útil, no lo olvides!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf("¡Has conseguido el <y<telescarabajo>>! Es un\nobjeto con forma de insecto que puede\nvolar libremente.\n\n¡Apunta con el mando <r<hacia la pantalla\n>>y pulsa (A) para echarlo a volar!\n\n\nSi al usarlo notas que <r<falla la precisión>>,\npulsa (v) mientras lo tengas preparado\npara corregirlo.\x0E\x01\x11\x02\x9CD")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf("¡Has conseguido <y<esporas chispeantes>>!\nEs un polvo que despiden los champiñones\nchispeantes.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf("¡Has conseguido el <y<arco>>! Con él puedes\ndisparar flechas a objetivos lejanos\npara infligirles grandes daños.\n\nSi en algún momento notas que tiembla\ndemasiado y te <r<falta precisión >>al apuntar,\npulsa (v) para corregir el punto de mira.\x0E\x01\x11\x02\x9CD")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf("¡Has conseguido una <y<llave pequeña>>!\nCon ella puedes abrir una puerta,\npero solo en esta zona.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf("¡Has conseguido un <y<medallón de insecto>>!\nCon él podrás localizar en el mapa los\nlugares donde se ocultan los insectos.\n¡Dirígete hacia los \x0E\x02\x04\x02\x1ACD!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf("¡Has atrapado un <y<hada>>! Estos amables\nseres te regeneran <r<6 corazones>>.\n\n\nSi la metes en una botella, acudirá en tu\nayuda para curar <r<automáticamente>> tus\nheridas en cuanto tu <r<indicador de salud\nse quede vacío>>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf("¡Has recuperado la <y<alforja de aventurero>>!\nY mira tú por dónde, ¡todos los objetos que\nte faltaban están dentro!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf("¡Has conseguido la <y<alforja de aventurero>>!\nEn ella podrás guardar todo tipo de objetos\nque utilizarás a lo largo de tu aventura.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>!\nDicen que almacenan agua en el fondo\nde sus hormigueros para sobrevivir en\nlos desiertos más calurosos e inhóspitos.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>!\nDicen que almacenan agua en el fondo\nde sus hormigueros para sobrevivir en\nlos desiertos más calurosos e inhóspitos.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf("¡Has conseguido una <y<cola de lagarto>>!\nEn el extremo tiene una bola de pinchos\nmetálica. Da un poco de grima, pero\nigual resulta útil para algo.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf("")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf("¡Has conseguido un <y<zurrón suplementario>>!\nEs un pequeño monedero que te permite\nguardar <r<300 rupias>> más.")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf("¡Has conseguido el <y<cazamariposas>>! Atrapa\npequeños insectos y otras cosas. ¡Acércate\nsigilosamente y píllalos por sorpresa!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf("¡Has conseguido <y<agua>>! Es incolora, inodora\ne insípida, pero igual en algún momento\nte resulta útil.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf("")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf("¡Has conseguido una <g+<rupia verde>>!\n¡Solo vale <r<1 rupia>>, así que ya te las\npuedes ir ingeniando para encontrar\nmontones de ellas!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf("")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf("¡Tu <y<alforja de aventurero >>ahora tiene más\ncapacidad! ¡Puedes llevar un objeto más!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf("¡Has conseguido la <y<bolsa de semillas\ngrande>>! Con ella puedes guardar <r<30\n>>semillas deku adicionales, así que llévala\nencima cuando uses el tirachinas.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>!\nPermanecen bajo tierra en fase\nlarvaria durante diez años o más.\n¡Son los insectos más esquivos!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>!\nPermanecen bajo tierra en fase\nlarvaria durante diez años o más.\n¡Son los insectos más esquivos!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf("¡Has conseguido <y<mineral de Eldin>>! Estas\npiedras robustas tienen un brillo peculiar.\nSon preciosas y tienen muchas utilidades.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf("")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf("¡Has atrapado un <y<hada>>! Estos amables\nseres te regeneran <r<6 >>corazones.\n\n\nPero no te la puedes quedar porque no\ntienes una <y<botella vacía>>, así que será\nmejor dejarla marchar.")
          	  case 1:
/*<505>*/ 		printf("¡Has encontrado un <y<hada>>! Estos amables\nseres te regeneran <r<6 >>corazones.")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf("¡Has conseguido una botella llena de\n<y<esporas de champiñón>>! Proceden de\nun champiñón gigante. ¡Y van genial\npara tratar las heridas de las aves!")
          	  case 1:
/*< 36>*/ 		printf("¡Has conseguido <y<esporas de champiñón>>!\nProceden de un champiñón gigante.\nNo está de más tenerlas a mano.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf("")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf("¡Has recuperado las <y<zarpas>>! Ahora ya\npuedes acceder a lugares a los que antes\nte resultaba imposible llegar.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf("¡Has conseguido las <y<zarpas>>! Son una de las\ntres reliquias transmitidas por la Diosa y\notorgan a su poseedor la capacidad de\nalcanzar lugares alejados.\nSi apuntas y disparas hacia una <r<diana >>o\nhacia una <r<hiedra>>, lanzarás una garra que\nse enganchará a ella y a continuación la\ncadena te propulsará hasta ese punto.\nSi notas que tiemblan demasiado las garras\ny te <r<falta precisión >>al apuntar, pulsa (v)\npara corregir el punto de mira.\x0E\x01\x11\x02\x9CD")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf("¡Has encontrado una <b+<rupia azul>>!\nVale <r<5 rupias>>. ¡Al zurrón con ella!")
          	  case 1:
/*< 84>*/ 		printf("¡Has conseguido una <b+<rupia azul>>!\nVale <r<5 rupias>>. ¡Menos da una piedra!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf("¡Has conseguido el <y<medallón de vida>>!\nSi te lo cuelgas, aumentará en uno tu\nnúmero máximo de corazones, así que\núsalo cuando estimes oportuno.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf("¡Has conseguido el <y<carcaj pequeño>>! Te\npermite guardar <r<5 >>flechas adicionales,\nasí que procura tenerlo a mano cuando\nvayas a usar el arco.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>! ¡Tienen\nunos ojos más bonitos que el mar y sus\nalas relucen como delicados cristales!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>! ¡Tienen unos\nojos más bonitos que el mar y sus alas\nrelucen como delicados cristales!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf("¡Has conseguido una <y<flor arcana>>!\nDicen que estos milagros de la naturaleza\nllevan floreciendo desde hace eones y\nbrillan en la oscuridad.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf("")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf("¡Has conseguido los <y<guantes de cavar>>!\nSus afiladas garras son perfectas para\nescarbar la superficie.\n\nSi ves algún montículo sospechoso de tierra\nblanda en el suelo, acércate a él y pulsa (A)\npara empezar a cavar.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf("")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf("¡Has conseguido la <y<estatuilla>>! Es la prueba\nde tu victoria en el torneo celeste. ¡Menuda\nalegría se va a llevar Zelda!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf("¡Has conseguido una <r+<rupia roja>>!\nVale <r<20 rupias>>. ¡Así da gusto, oye!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf("")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf("¡Ahora tu arco es un <y<arco de hierro>>!\nDiseñado para manos expertas,\nsu potencia de disparo es bastante\nsuperior a la de tu anterior arco.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf("")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf("¡Has conseguido el <y<carcaj mediano>>! Te\npermite guardar <r<10>> flechas adicionales,\nasí que procura tenerlo a mano cuando\nvayas a usar el arco.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf("¡Has conseguido una <y<alhaja ambarina>>!\nUna bonita piedra ámbar redondeada que\nse puede encontrar en muchos lugares.\nLo de su forma es todo un misterio...")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf("")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf("¡Has conseguido <r<5>> <y<semillas deku>>! Puedes\nusar el tirachinas para lanzarlas como\nproyectiles. ¡Pero úsalas con mesura\nque se agotan!")
          	  case 1:
/*<398>*/ 		printf("")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf("")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf("¡Has completado la <y+<Trifuerza>>! ¡Gracias\na su infinito poder podrás cumplir\nlos deseos de Zelda y <r<librar al mundo>>\ndefinitivamente del <b<Heraldo de la Muerte>>!")
/*<540>*/ 	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
/*<583>*/ 	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
          }

          void entrypoint_003_074() {
/*<155>*/ 	start()
/*<675>*/ 	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
/*<600>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<676>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
          		flw_156:
/*<156>*/ 		printf("¡Has conseguido <y<agua sagrada>>! Parece\nagua normal, pero en realidad es agua\npura que encierra una gran energía.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf("¡Has conseguido <y<agua sagrada>>! Utiliza\nsu energía para sanar las graves heridas\nde la dragona del agua.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf("¡Ahora tu arco es un <y<arco sagrado>>! Gracias\nal poder sagrado de la oración de la Diosa,\nel enemigo sufrirá su virulenta ofensiva.")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<262>*/ 		printf("¡Has conseguido un <y<escudo de madera>>!\nEs ligero y fácil de manejar, ¡pero ten\nmucho cuidado porque puede arder y\nromperse con facilidad!")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf("¡Has conseguido el <y<carcaj grande>>! Te\npermite guardar <r<15 >>flechas adicionales,\nasí que procura tenerlo a mano cuando\nvayas a usar el arco.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>!\nSus diminutos cuerpecitos son capaces\nde empujar las mi... migas más grandes\njamás vistas. Todo un espectáculo.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>!\nSus diminutos cuerpecitos son capaces\nde empujar las mi... migas más grandes\njamás vistas. Todo un espectáculo.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf("¡Has conseguido una <y<alhaja tenebrosa>>!\nSimilar a la ambarina, pero de naturaleza\ndiferente. Solo se halla en ciertos lugares.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf("")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf("¡Has conseguido <y<5 bombas>>! Lánzalas o\nhazlas rodar con fines destructivos.\n¡Y procura tener siempre una a mano!")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf("")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf("¡Has conseguido un <y<corazón>>!\nEstos objetos son fuente de salud y te\nayudan a recuperarte de tus heridas.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf("¡Has recuperado el <y<saco de bombas>>! ¡Pum,\ncatapum! ¡Que dé comienzo la fiesta!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf("¡Has recibido el <y<saco de bombas>>! Por lo\nvisto <b<Jerry>> lo quiere más que a su vida,\n¡así que procura cuidarlo bien!")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf("¡Has encontrado un <y<saco de bombas>>!\nPuedes utilizarlo para guardar y\ntransportar flores bomba.\n\nCon uno como este podrías abrirte paso\na lugares anteriormente inaccesibles.\nComo es de <b<Jerry>>, ¿qué tal si le pides que\nte lo preste?")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf("¡Tu telescarabajo se ha convertido en un\n<y<telescarabajo con gancho>>! Ahora tiene\nunas mandíbulas más grandes que le\npermiten transportar cosas.\nSi necesitas dejar caer algo con precisión,\npulsa (Z) para obtener una vista de pájaro.\n¡Te resultará muy útil, no lo olvides!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<261>*/ 		printf("¡Ahora tu escudo es un <y<escudo de madera\nmacizo>>! Es fácil de usar y más robusto que\nel escudo de madera normal.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf("¡Has conseguido el <y<saco de bombas\npequeño>>! Te permite guardar <r<5>> bombas\nadicionales, así que procura llevarlo\nencima cuando quieras usar bombas.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>! Son\ninsectos muy populares entre los niños\nde Altárea. ¡Pero ay de ti si te pilla uno\ncon su poderosa mandíbula!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>! Son unos\ninsectos muy populares entre los niños\nde Altárea. ¡Pero ay de ti si te pilla uno\ncon su poderosa mandíbula!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf("¡Has conseguido <y<ectoplasma viscoso>>!\nSu aspecto no es su punto fuerte, pero\ntiene tantas aplicaciones que es todo\nun hallazgo.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf("")
          	  case 1:
/*<456>*/ 		printf("")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf("¡Has aprendido el <y<Cántico de la Diosa>>!\nEs una enigmática melodía que se\ntransmite desde tiempos inmemoriales.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf("¡Has conseguido <y<10 bombas>>! Lánzalas o\nhazlas rodar con fines destructivos.\n¡Llévatelas en tu saco de bombas!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf("")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf("¡Has conseguido una <y<flecha perdida>>!\nLas flechas se pueden usar más de una\nvez con el arco, ¡así que no te olvides\nde buscar las que pierdas!")
          	  case 1:
/*<159>*/ 		printf("")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf("¡Has conseguido un <y<contenedor de corazón>>!\n¡Tu salud ha aumentado <r<1 corazón >>y ahora\nestá al máximo!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf("¡Tu telescarabajo se ha transformado\nen un <y<telescarabajo veloz>>! Ahora es\nmucho más rápido, ¡pero procura\nno pasarte de largo el objetivo!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf("¡Has conseguido el <y<medallón de corazón>>!\n¡Con él aparecerán corazones hasta en\n<r<modo Héroe>>!\n\n¡Y hasta las flores de corazón darán sus\nfrutos! ¡Sin duda el objeto perfecto si te\npreocupas por tu salud!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf("¡Has conseguido el <y<medallón de corazón>>!\nAhora surgirán corazones más a menudo.\n¡El objeto perfecto si te preocupa la salud!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<260>*/ 		printf("¡Ahora tu escudo es un <y<escudo de madera\nrobusto>>! Es ligero y fácil de usar, además\nde ser el escudo de madera más resistente\nque hay.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf("¡Has conseguido el <y<saco de bombas\nmediano>>! Te permite guardar <r<10 >>bombas\nadicionales, así que procura llevarlo\nencima cuando quieras usar bombas.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf("¡Has conseguido <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>! Son los\ninsectos menos comunes de todos los\nque habitan los cielos. De hecho, solo\nlos encontrarás entre las tinieblas.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf("¡Has atrapado <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>! Son los\ninsectos menos comunes de todos los\nque habitan los cielos. De hecho, solo\nlos encontrarás entre las tinieblas.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf("")
          	  case 1:
/*<461>*/ 		printf("")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf("")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf("¡Has conseguido un <y<fruto de vigor>>!\nCada vez que consigas uno de estos\nfrutos se llenará completamente el\nindicador de resistencia.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf("¡Has conseguido el <y<glifo bendito>>! Es una\ntalla de madera que inspira gratitud y\nrepresenta fielmente la estatua de piedra\ndel nivel superior.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf("¡Has conseguido <y<10 flechas>>!\nLas puedes lanzar con el arco, pero no\nlas malgastes porque no hay demasiadas.")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf("¡Tu telescarabajo se ha transformado en\nun <y<telescarabajo tenaz>>! Su autonomía de\nvuelo ha aumentado bastante. ¡Ahora\npodrás llegar mucho más lejos!")
          }

          void entrypoint_003_094() {
/*<204>*/ 	start()
/*<205>*/ 	check_item_flag(489, 1)
/*<206>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          	  case 0:
/*<201>*/ 		check_item_flag(489, 2)
/*<202>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          		  case 0:
/*<198>*/ 			check_item_flag(489, 3)
/*<199>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<208>*/ 				printf("¡Has conseguido una <y<pieza de corazón>>!\nCon 4 conseguirás un nuevo corazón para\ntu indicador de salud. ¡<r<1 >>más y está hecho!")
          			  case 1:
/*<200>*/ 				printf("¡Has conseguido una <y<pieza de corazón>>!\nReúne cuatro de estas para que tu\nindicador de salud aumente un corazón.\n¡Solo te faltan <r<2 >>más!")
          			}
          		  case 1:
/*<203>*/ 			printf("¡Has conseguido una <y<pieza de corazón>>!\n¡Reúne cuatro de estas para que tu\nindicador de salud aumente un corazón.\n¡Solo te faltan <r<3 >>más!")
          		}
          	  case 1:
/*<207>*/ 		printf("¡Has conseguido una <y<pieza de corazón>>!\n¡Ya tienes las cuatro para completar\nun contenedor de corazón y aumentar\ntu indicador de salud!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf("¡Has conseguido el <y<medallón de rupia>>!\nCon él aparecerán rupias más a menudo.\n¡Si estás en números rojos, no dudes en\nutilizarlo!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<270>*/ 		printf("¡Has conseguido un <y<escudo de hierro>>!\nEs muy resistente y no arde ni se rompe\nfácilmente, ¡pero mucho ojo con la\nelectricidad!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf("¡Has conseguido el <y<saco de bombas grande>>!\nTe permite guardar <r<15 >>bombas adicionales,\nasí que procura llevarlo encima cuando\nquieras usar bombas.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf("¡Has conseguido una <y<botella vacía>>!\nDentro podrás guardar montones de cosas.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf("¡Has conseguido una <y<garra de monstruo>>!\nEs una especie de garra afilada de\ndemonio. Duele solo con mirarla.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf("")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf("¡Has conseguido <r<10>> <y<semillas deku>>! Puedes\nutilizar el tirachinas para lanzarlas como\nproyectiles. ¡Pero úsalas con mesura\nque se agotan!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf("Has conseguido reunir todas las <y<lágrimas\nde Farore>> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*< 45>*/ 		printf("¡Has conseguido una <y<lágrima de Farore>>!\nCon su poder sagrado paralizarás a los\nguardianes durante <r<90 segundos>>.\n\n¡Reúne las <r<15>> lágrimas para poder superar\nel juicio!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf("¡Has conseguido el <y<cristal enigmático>>!\nEstá compuesto por cristales cúbicos\nopacos dispersos por toda la estructura.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf("")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf("¡Has conseguido una <y<poción de salud>>!\nProcura llevar siempre una en la alforja\npara recuperar <r<8 corazones>>.")
          }

          void entrypoint_003_095() {
/*<211>*/ 	start()
/*<576>*/ 	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
/*<209>*/ 	check_item_flag(96, 1)
/*<210>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*<212>*/ 		check_item_flag(97, 1)
/*<213>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          		  case 0:
/*<580>*/ 			printf("¡Has obtenido la <y+<Trifuerza del Valor>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf("¡Has obtenido la <y+<Trifuerza del Valor>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<532>*/ 			printf("¡Solo te falta <r<una>> parte de la Trifuerza\npara completarla!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf("¡Has obtenido la <y+<Trifuerza del Valor>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<531>*/ 			printf("¡Consigue las <r<dos>> partes que te faltan\npara completar la Trifuerza!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf("¡Has conseguido el <y<medallón de tesoro>>!\nSi te lo pones, ¡aparecerán tesoros más\na menudo! ¡Úsalo cuando vayas en busca\nde riquezas!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf("¡Has recuperado el <y<látigo>>! ¡Ya puedes\nvolver a buscar cosas que atraer con\nun pegadizo movimiento!")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf("¡Has conseguido el <y<látigo>>! En el extremo\ntiene una bola de luz que puede adherirse\na distintos elementos.\n\nSi ves algo en la distancia, pulsa (Z) para\nfijarlo como objetivo y agita el mando\npara engancharlo o golpearlo.\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf("¡Has conseguido un <y<cuerno de monstruo>>!\nEs una especie de corneta hecha con\nel duro cuerno de una fiera salvaje.\nSeguramente servirá para elaborar algo.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf("")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf("")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf("")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf("¡Has conseguido el <y<glifo de calamar>>! Tiene\nforma de cefalópodo y está cubierto de\nmisteriosas ventosas.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf("¡Has conseguido una <y<poción de salud XL>>!\n¡Es una versión mejorada de la poción de\nsalud! Te <r<restaura todos los corazones>>.")
          }

          void entrypoint_003_096() {
/*<217>*/ 	start()
/*<577>*/ 	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
/*<215>*/ 	check_item_flag(95, 1)
/*<216>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*<218>*/ 		check_item_flag(97, 1)
/*<219>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*<581>*/ 			printf("¡Has obtenido la <y+<Trifuerza del Poder>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf("¡Has obtenido la <y+<Trifuerza del Poder>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<535>*/ 			printf("¡Solo te falta <r<una>> parte de la Trifuerza\npara completarla!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf("¡Has obtenido la <y+<Trifuerza del Poder>>!\nEl áureo legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <r<infinito\npoder >>de la Trifuerza será tuyo!")
/*<534>*/ 			printf("¡Consigue las <r<dos>> partes que te faltan\npara completar la Trifuerza!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf("¡Has conseguido el <y<medallón duradero>>!\n¡Llévalo para prolongar los efectos de\ncualquier poción! Si tienes pociones, claro.")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf("¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<269>*/ 		printf("¡Ahora tu escudo es un <y<escudo de hierro\nmacizo>>! Es un poco más resistente que\nel escudo de hierro normal.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf("¡Has conseguido los <y<pendientes ignífugos>>!\nSon una de las reliquias legadas por la\nDiosa y permiten soportar hasta el calor\nmás extremo.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf("¡Has conseguido un <y<broche calavérico>>!\nTiene la forma de una calavera, símbolo\nde los bokoblin.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf("")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf("Has conseguido reunir todas las <y<lágrimas\nde Din>> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*<437>*/ 		printf("¡Has conseguido una <y<lágrima de Din>>!\nCon su poder sagrado paralizarás\na los guardianes durante <r<90 segundos>>.\n\n¡Reúne las <r<15>> lágrimas para poder superar\nel juicio!")
          	}
          }

