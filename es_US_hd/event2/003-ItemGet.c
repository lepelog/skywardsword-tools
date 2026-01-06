          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 5, line: 85 */ "")
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
/*<151>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "¡Has obtenido todas las <color yellow<piezas de la llave>coloroff>!\nYa puedes abrir la puerta del templo\npara ir en busca de Zelda.\n\n¡Será mejor que vuelvas a la cima cuanto\nantes y explores el interior del templo\npara ver si encuentras algún rastro de ella!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 0, unk: 5, line: 37 */ "¡Has conseguido una <color yellow<pieza de la llave>coloroff>!\nEs un fragmento de la llave que abre\nel templo. ¡Solo falta <color red<1 pieza >coloroff>más!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1, line: 36 */ "¡Has conseguido una <color yellow<pieza de la llave>coloroff>!\nEs un fragmento de la llave que abre\nel templo. ¡Solo te faltan <color red<2 piezas>coloroff>!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "¡Has conseguido una <color yellow<pieza de la llave>coloroff>!\nEs un fragmento de la llave que abre\nel templo. ¡Busca las <color red<3 piezas >coloroff>restantes!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 5, line: 34 */ "¡Has conseguido una <color yellow<pieza de la llave>coloroff>!\nEs un fragmento de la llave que abre\nel templo.\n\nDebes reunir las 5 piezas para completar\nla llave. ¡Busca las otras <color red<4 piezas>coloroff>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "¡Has conseguido una <color yellow<espada de aprendiz>coloroff>!\nLa utilizan los alumnos de la academia\npara entrenar. Úsala con cuidado, ¡está\nbastante afilada!\nOprime (+) en cualquier momento para ver\nlos objetos con los que vas equipado.<0x10011:0x03cd>")
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
/*<582>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "¡Has obtenido la <color yellow white<Trifuerza de la Sabiduría>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "¡Has obtenido la <color yellow white<Trifuerza de la Sabiduría>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<537>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "¡Solo te falta <color red<una>coloroff> parte de la Trifuerza\npara completarla!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "¡Has obtenido la <color yellow white<Trifuerza de la Sabiduría>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<536>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "¡Consigue las <color red<dos>coloroff> partes que te faltan\npara completar la Trifuerza!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1, line: 138 */ "¡Has conseguido el <color yellow<medallón maligno>coloroff>!\nEs un misterio, pero hace que surjan más\ntesoros y rupias. ¡Aunque está maldito y\nno te permite abrir la alforja!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 0, unk: 5, line: 157 */ "¡Ahora tu escudo es un <color yellow<escudo de hierro\nsólido>coloroff>! Es muy resistente. De hecho, ¡es el\nescudo de hierro más resistente de todos!")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1, line: 177 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 0, unk: 5, line: 223 */ "¡Has conseguido un <color yellow<cristal maléfico>coloroff>!\nEs el corazón cristalizado de un monstruo.\nEs muy poco frecuente encontrarlos\nen este estado.")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 1, unk: 0, line: 206 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 0, unk: 5, line: 58 */ "Has conseguido reunir todas las <color yellow<lágrimas\nde Nayru>coloroff> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1, line: 57 */ "¡Has conseguido una <color yellow<lágrima de Nayru>coloroff>!\nCon su poder sagrado paralizarás a los\nguardianes durante <color red<90 segundos>coloroff>.\n\n¡Reúne las <color red<15>coloroff> lágrimas para poder superar\nel juicio!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1, line: 240 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1, line: 39 */ "¡Has conseguido el <color yellow<glifo dorado>coloroff>!\nEsta escultura dorada tiene una forma\nbastante peculiar y unos grabados\nmuy originales.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1, line: 15 */ "¡Has conseguido la <color yellow<espada divina>coloroff>!\nSu misteriosa hoja está bañada por\nuna luz celestial.\n\n¡Eleva hacia el cielo la espada que tantas\nveces has empuñado con valor y observa\ncómo emana de ella la <sound 4><color red<poderosa energía\ndel rayo celestial>coloroff>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "¡Has conseguido la <color yellow<espada divina>coloroff>!\nSu misteriosa hoja está bañada por\nuna luz celestial.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 5, line: 106 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "¡Has conseguido la <color yellow<carta náutica del\npasado>coloroff>! Es un mapa antiguo del desierto,\n¡cuando todo estaba cubierto de agua!")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 0, unk: 5, line: 139 */ "¡Tu resortera ahora es una <color yellow<resortera\nmúltiple>coloroff>! El área de impacto ha\naumentado. ¡Mantén oprimido <icon 41>\npara disparar a lo grande!<0x10011:0x0fcd>")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1, line: 159 */ "¡Has conseguido un <color yellow<escudo sagrado>coloroff>!\nSu misterioso poder le permite repararse \nsolo, y es capaz de repeler el fuego,\nla electricidad y hasta las maldiciones.")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 1, unk: 0, line: 158 */ "¡Has conseguido un <color yellow<escudo sagrado>coloroff>!\nSu misterioso poder le permite <color red<repararse>coloroff> \ngradualmente <color red<por sí mismo>coloroff>.\n\nAunque no es demasiado resistente y se\nrompe con cierta facilidad, es capaz\nde repeler el fuego, la electricidad y\nhasta las maldiciones.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 1, unk: 0, line: 224 */ "¡Has conseguido una <color yellow<pluma de ave azul>coloroff>!\nSolo unos pocos pájaros presentan esta\nllamativa tonalidad, por eso sus plumajes\nson tan tremendamente valiosos.")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf(/* textboxtype: 5, unk: 1, line: 207 */ "")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1, line: 60 */ "Has conseguido reunir todas las <color yellow<lágrimas\nsagradas>coloroff> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "¡Has conseguido una <color yellow<lágrima sagrada>coloroff>!\nCon su poder sagrado paralizarás a los\nguardianes durante <color red<90 segundos>coloroff>.\n\n¡Reúne las <color red<15>coloroff> lágrimas para poder superar\nel juicio!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 0, unk: 5, line: 241 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1, line: 87 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 5, line: 61 */ "¡Has conseguido un <color yellow<fruto luminoso>coloroff>! Estos\nfrutos harán que las lágrimas sagradas\nrestantes proyecten haces de luz verticales\n<color red<durante 30 segundos>coloroff>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 0, unk: 5, line: 16 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 107 */ "¡Has conseguido una <color yellow<poción de salud <color yellow<★★<color yellow<>coloroff>!\nAdemás de <color red<devolverte todos los corazones>coloroff>,\ncada botella incluye <color red<dos dosis>coloroff>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 0, unk: 5, line: 76 */ "¡Has recuperado los <color yellow<guantes mogma>coloroff>!\n¡Intenta escapar de aquí como lo haría\nun auténtico mogma!")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1, line: 132 */ "¡Has conseguido los <color yellow<guantes mogma>coloroff>!\n¡Ni siquiera los propios mogmas se topan\ncon guantes para cavar de esta calidad\ncon mucha frecuencia!\nEstos no solo sirven para cavar agujeros,\nsino <color green<también para abrirte paso bajo tierra>coloroff>.\n¡Busca hoyos en los que puedas meterte!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 1, unk: 0, line: 140 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 0, unk: 5, line: 160 */ "¡Ahora tu escudo es un <color yellow<escudo sagrado\nsuperior>coloroff>! Se repara solo gracias a su\npoder sagrado. ¡Y además, es bastante\nmás resistente!")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 0, unk: 5, line: 178 */ "¡Has conseguido el <color yellow<cazamariposas grande>coloroff>!\nComo es el doble de grande, podrás cazar\nhasta los insectos más esquivos.")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1, line: 225 */ "¡Has conseguido un <color yellow<broche calavérico\nde oro>coloroff>! La mayor rareza entre las joyas\ncalavéricas. Emite un extraño brillo\ndorado.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 0, unk: 5, line: 208 */ "¡Has recibido la <color yellow<carta de Corvy>coloroff>!\n¿Reflejará sus auténticos sentimientos?\n\n\n¡Cuida bien de ella y no se te ocurra usarla\ncomo papel higiénico ni nada por el estilo!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 1, unk: 0, line: 242 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 5, line: 88 */ "¡Has conseguido una <color yellow<poción de\ninvencibilidad>coloroff>! Esta misteriosa poción\nreduce a la mitad el daño recibido.\nSu efecto dura <color red<3 minutos>coloroff>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "¡Has conseguido <color red<una >coloroff><color yellow<gema de gratitud>coloroff>!\nEstas piedras preciosas proceden de\npersonas totalmente desbordadas por un\nindescriptible sentimiento de gratitud.\n¡Reúne todas las que puedas y llévaselas\na <color blue<Mursego>coloroff>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 5, line: 40 */ "¡Has conseguido el <color yellow<glifo de dragón>coloroff>! Es una\ndeslumbrante escultura de un dragón\nenroscado elaborada en oro.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1, line: 18 */ "¡Has recuperado la <color yellow<Espada Maestra\nAuténtica>coloroff>! Nada se resistirá al filo\nde su hoja. Además, podrás volver\na hablar con <color blue<<sound 4>Fay>coloroff>.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 5, unk: 1, line: 108 */ "")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 5, unk: 1, line: 141 */ "")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0, line: 161 */ "¡Ahora tu escudo es un <color yellow<escudo sagrado\nsupremo>coloroff>! Se repara solo gracias a su poder\nsagrado. ¡Y además, su durabilidad es aún\nmás elevada!")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1, line: 180 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>! Aparecen\nen grandes grupos una vez cada diez años y\ndevoran toda la vegetación que encuentran\na su paso.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 0, unk: 0, line: 179 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>! Aparecen\nen grandes grupos una vez cada diez años y\ndevoran toda la vegetación que encuentran\na su paso.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 0, unk: 5, line: 226 */ "¡Has conseguido un <color yellow<objeto perdido\nde la Diosa>coloroff>! Cuentan que se le cayó\na la Diosa hace mucho tiempo. ¡Es un\ntesoro legendario!")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 1, unk: 0, line: 209 */ "¡Has conseguido la <color yellow<jaula para insectos de\nTerry>coloroff>! ¡Y dentro está su insecto favorito!\n¡Ve corriendo a llevársela!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1, line: 243 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 1, unk: 0, line: 251 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 1, unk: 0, line: 89 */ "¡Has conseguido una <color yellow<poción de\ninvencibilidad <color yellow<★<color yellow<>coloroff>! Es una potente poción\ncon la que serás invencible durante\n<color red<3 minutos>coloroff>.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 0, unk: 5, line: 64 */ "¡Has recuperado el <color yellow<ánfora de aire>coloroff>!\nYa puedes volver a desatar toda su\nfuria huracanada.")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1, line: 63 */ "¡Has conseguido el <color yellow<ánfora de aire>coloroff>! Se trata\nde un arcano y misterioso objeto que lanza\npotentes ráfagas de viento.")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "¡Has conseguido el <color yellow<glifo vetusto>coloroff>!\nEs de reluciente oro y parece parte\nde un mecanismo. Lleva incrustado\nalgún tipo de circuito.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 5, line: 19 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 5, line: 109 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 0, unk: 5, line: 142 */ "¡Has conseguido el <color yellow<monedero mediano>coloroff>! Tiene\nmayor capacidad que el monedero utilizado\nhasta ahora. ¡En este caben <color red<500 rupias>coloroff>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1, line: 162 */ "¡Has conseguido el <color yellow<escudo hyliano>coloroff>!\nEs un escudo legendario imbuido de\nun poder heroico. ¡No hay ataque que\npueda con él!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 1, unk: 0, line: 182 */ "¡Has obtenido <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nDicen que sacan brillo a sus caparazones\npara aumentar su fuerza. De hecho, esta\nespecie es la más fuerte de todas.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 0, unk: 5, line: 181 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nDicen que sacan brillo a sus caparazones\npara aumentar su fuerza. De hecho, esta\nespecie es la más fuerte de todas.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 1, unk: 0, line: 227 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 0, unk: 5, line: 244 */ "¡Has conseguido una <color yellow<poción revitalizante ★★>coloroff>!\nTe rellena <color red<automáticamente>coloroff> el indicador\ndel escudo, te recupera <color red<8>coloroff> corazones... \n¡y además la puedes usar <color red<dos>coloroff> <color red<veces>coloroff>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1, line: 90 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1, line: 42 */ "¡Has conseguido una <color silver<rupia de plata>coloroff>!\nQuizá no lo sepas, pero vale <color red<100 rupias>coloroff>.\n¿Verdad que quieres saltar de alegría?")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "¡Has conseguido una <color yellow<poción de resistencia>coloroff>!\nTu indicador de resistencia se agotará\na menor velocidad. ¡Y su efecto dura\n<color red<3 minutos>coloroff>!")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 1, unk: 0, line: 143 */ "¡Has conseguido el <color yellow<monedero grande>coloroff>!\nEs mucho más grande que el monedero \nutilizado hasta ahora. ¡Puedes guardar\nhasta <color red<1000 rupias>coloroff>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 0, unk: 5, line: 163 */ "¡Has conseguido una <color yellow<poción revitalizante>coloroff>!\nEsta misteriosa poción te deja el indicador\ndel escudo <color red<como nuevo >coloroff>y, de propina, te\nrecupera <color red<4>coloroff> corazones de salud.")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 0, unk: 5, line: 184 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nAl calentarlo, su veneno puede usarse\ncomo medicina. ¡Pero procura evitar\nlos enjambres o lo lamentarás!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1, line: 183 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nAl calentarlo, su veneno puede usarse\ncomo medicina. ¡Pero procura evitar\nlos enjambres o lo lamentarás!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1, line: 210 */ "¡Has conseguido el <color yellow<sonajero>coloroff>! Es el juguete\nideal para cualquier bebé. ¿Cómo habrá\nllegado hasta aquí?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1, line: 228 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 1, unk: 0, line: 245 */ "¡Has conseguido <color yellow<sopa de calabaza caliente>coloroff>!\nLa prepara el dueño de La Calabaza\nFlotante. ¡Pero se enfría en <color red<5 minutos>coloroff>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 5, line: 91 */ "¡Has conseguido la <color yellow<escama de dragón\nacuático>coloroff>! Es una de las tres reliquias\nlegadas por la Diosa. Permite bucear\ny hacer torbellinos bajo el agua.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 65 */ "¡Has conseguido el <color yellow<mapa de la mazmorra>coloroff>!\nAhora podrás consultar en todo momento tu\nposición y los lugares que quedan por explorar.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1, line: 66 */ "También indica la ubicación de los cofres de\ntesoros, ¡así que no olvides usarlo con frecuencia!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 5, line: 43 */ "¡Has conseguido una <color gold<rupia dorada>coloroff>! Vale\nnada más y nada menos que <color red<300 rupias>coloroff>.\n¡Pero no se lo digas a nadie!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1, line: 21 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1, line: 111 */ "¡Has obtenido una <color yellow<poción de resistencia <color yellow<★<color yellow<>coloroff>!\nEs una poción milagrosa con la que\ndurante <color red<3 minutos>coloroff> tu indicador de\nresistencia no se moverá.")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 164 */ "¡Has obtenido una <color yellow<poción revitalizante <color yellow<★<color yellow<>coloroff>!\nEsta poción te restaura <color red<automáticamente\n>coloroff>el indicador del escudo al vaciarse y,\nademás, te recupera <color red<8>coloroff> corazones.")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1, line: 186 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nUtilizan sus poderosas patas delanteras\npara atrapar a sus presas. Es un insecto\nmuy común en las islas aéreas.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 185 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nUtilizan sus poderosas patas delanteras\npara atrapar a sus presas. Es un insecto\nmuy común en las islas aéreas.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 0, unk: 5, line: 211 */ "¡Has conseguido <color yellow<larvas de abeja>coloroff>!\nSon una excelente fuente de proteínas.\nQuizá puedan servir como ingrediente\npara elaborar distintos elementos.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 0, unk: 5, line: 229 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1, line: 246 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 92 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 5, line: 67 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "¡Has conseguido una <color black<rupobre>coloroff>! El influjo de\nlas rupobres es capaz de hacer desaparecer\n<color red<10 rupias>coloroff>. Lo que significa que acabas de\nperderlas...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 0, unk: 5, line: 22 */ "¡Has conseguido la <color yellow<orquídea del espíritu>coloroff>!\nEs una misteriosa planta que representa\ntu esencia, <heroname>.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 0, unk: 5, line: 112 */ "¡Has conseguido una <color yellow<poción de oxígeno>coloroff>!\nÚsala para que tu indicador de oxígeno se\nvacíe más lentamente durante <color red<3 minutos>coloroff>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1, line: 144 */ "¡Has conseguido el <color yellow<monedero gigante>coloroff>!\nEs todavía más grande que el monedero\nutilizado hasta ahora. ¡Puedes meter\nhasta <color red<5000 rupias>coloroff>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1, line: 165 */ "¡Has conseguido la <color yellow<bolsa de semillas\npequeña>coloroff>! Con ella puedes guardar <color red<10\n>coloroff>semillas deku adicionales, así que llévala\ncontigo cuando uses la resortera.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 1, unk: 0, line: 188 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>! Dicen\nque se vuelven de color rojo al ingerir\nmetales. No son demasiado activas y\nsuelen permanecer quietas.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 0, unk: 5, line: 187 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>! Dicen\nque se vuelven de color rojo al ingerir\nmetales. No son demasiado activas y\nsuelen permanecer quietas.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 1, unk: 0, line: 212 */ "¡Has obtenido <numeric arg0 0> <color yellow<<0x30004:0x0fcd>>coloroff>! Estas\nhermosas y diminutas plumas son muy\napreciadas en Neburia, y probablemente\nsirvan como materia prima para algo.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 1, unk: 0, line: 248 */ "¡Has vuelto a conseguir un <color yellow<brote del árbol\nde la vida>coloroff>! Si lo plantas aquí, va a tardar\nuna eternidad en crecer. ¿Por qué no\nbuscas otro lugar?")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 0, unk: 5, line: 247 */ "¡Has conseguido un <color yellow<brote del árbol de\nla vida>coloroff>! Dicen que esta semilla de un\nlegendario árbol cura cualquier mal.")
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
/*<599>*/ 			printf(/* textboxtype: 0, unk: 5, line: 70 */ "¡Has recuperado la <color yellow<resortera múltiple>coloroff>!\n¡Aturde a los enemigos que están montando\nguardia!")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1, line: 69 */ "¡Has recuperado la <color yellow<resortera>coloroff>! ¡Aturde\na los enemigos que están montando\nguardia!")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "¡Has conseguido la <color yellow<resortera>coloroff>!\nEs un arma que permite disparar semillas\ndeku para aturdir a tus enemigos con su\nefecto paralizante.")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1, line: 45 */ "¡Has conseguido <color red<cinco >coloroff><color yellow<gemas de gratitud>coloroff>!\nBásicamente se trata de sentimientos\npuros de agradecimiento cristalizados.\n\nCada vez que ayudes a alguien, recibirás\n<color red<cinco gemas >coloroff>como muestra de gratitud.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1, line: 0 */ "¡Aquí no hay nada que te sirva!")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 0, unk: 5, line: 1 */ "No deberías abrir los armarios\nde los demás sin permiso...")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 1, unk: 0, line: 113 */ "¡Has conseguido una <color yellow<poción de oxígeno <color yellow<★<color yellow<>coloroff>!\nCon esta maravilla de poción tu indicador\nde oxígeno se mantendrá intacto durante\n<color red<3 minutos>coloroff>.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 0, unk: 5, line: 145 */ "¡Has conseguido el <color yellow<monedero de magnate>coloroff>!\n¡Es grande hasta para los ricos y tiene\ncapacidad para <color red<9000 rupias>coloroff>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 0, unk: 5, line: 166 */ "¡Has conseguido la <color yellow<bolsa de semillas\nmediana>coloroff>! Con ella puedes guardar <color red<20\n>coloroff>semillas deku adicionales, así que llévala\ncontigo cuando uses la resortera.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 0, unk: 5, line: 190 */ "¡Has obtenido <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>! Se trata de\nun insecto muy común en todas las regiones\nque, a veces, revolotea por sitios extraños.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1, line: 189 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>! Se trata de\nun insecto muy común en todas las regiones\nque, a veces, revolotea por sitios extraños.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1, line: 213 */ "¡Has conseguido una <color yellow<planta rodadora>coloroff>!\nSi dejas que se seque hasta que se quede\ndura, es posible que sirva para algo.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 1, unk: 0, line: 230 */ "¡Has conseguido la <color yellow<gema de la ordalía>coloroff>!\nEl símbolo que presenta guiará al elegido\nhasta el lugar donde se oculta la Trifuerza.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1, line: 249 */ "¡Has conseguido un <color yellow<fruto del árbol de la\nvida>coloroff>! Dicen que cura todos los males...\n¡Corre, llévaselo al dragón del trueno!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 1, unk: 0, line: 101 */ "")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 71 */ "¡Has conseguido el <color yellow<escarabajo>coloroff>! Es un\nobjeto con forma de insecto que puede\nvolar libremente.\n\n¡Apunta con el cursor adonde quieras\nque vaya y luego oprime <icon 41> para que\neche a volar!<0x10011:0x0fcd>")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 5, line: 46 */ "¡Has conseguido <color yellow<esporas chispeantes>coloroff>!\nEs un polvo que despiden los champiñones\nchispeantes.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1, line: 24 */ "¡Has conseguido el <color yellow<arco>coloroff>! Con él puedes\ndisparar flechas a objetivos lejanos\npara infligirles grandes daños.")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "¡Has conseguido una <color yellow<llave pequeña>coloroff>!\nCon ella puedes abrir una puerta, pero\nsolo en esta zona.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1, line: 93 */ "¡Has conseguido un <color yellow<medallón de insecto>coloroff>!\nCon él podrás localizar en el mapa los\nlugares donde se ocultan los insectos.\n¡Dirígete hacia los (O)!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1, line: 114 */ "¡Has atrapado un <color yellow<hada>coloroff>! Estos amables\nseres te regeneran <color red<6 corazones>coloroff>.\n\n\nSi la metes en una botella, acudirá en tu\nayuda para curar <color red<automáticamente>coloroff> tus\nheridas en cuanto tu <color red<indicador de salud\nse quede vacío>coloroff>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1, line: 147 */ "¡Has recuperado la <color yellow<alforja de aventurero>coloroff>!\n¡Qué buena suerte! ¡Todos los objetos que\nte faltaban están dentro!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 146 */ "¡Has conseguido la <color yellow<alforja de aventurero>coloroff>!\nEn ella podrás guardar todo tipo de\nobjetos que utilizarás en tu aventura.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1, line: 192 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nDicen que almacenan agua en el fondo\nde sus hormigueros para sobrevivir en\nlos desiertos más calurosos e inhóspitos.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 1, unk: 0, line: 191 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nDicen que almacenan agua en el fondo\nde sus hormigueros para sobrevivir en\nlos desiertos más calurosos e inhóspitos.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 0, unk: 5, line: 214 */ "¡Has conseguido una <color yellow<cola de lagarto>coloroff>!\nEn el extremo tiene una bola de púas\nmetálicas. Da un poco de asco, pero\npuede que sea útil para algo.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1, line: 231 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 0, unk: 5, line: 250 */ "¡Has conseguido un <color yellow<monedero suplementario>coloroff>!\nEs un pequeño monedero que te permite\nguardar <color red<300 rupias>coloroff> más.")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 5, line: 94 */ "¡Has conseguido el <color yellow<cazamariposas>coloroff>! Atrapa\npequeños insectos y otras cosas. ¡Acércate\nsigilosamente y agárralos por sorpresa!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1, line: 72 */ "¡Has conseguido <color yellow<agua>coloroff>! Es incolora, inodora\ne insípida, pero puede que te sea útil en\nalgún momento.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1, line: 3 */ "¡Has conseguido una <color green rupee<rupia verde>coloroff>!\n¡Solo vale <color red<1 rupia>coloroff>, así que será mejor\nque encuentres muchas!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 0, unk: 5, line: 115 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 0, unk: 5, line: 148 */ "¡Tu <color yellow<alforja de aventurero >coloroff>ahora tiene más\ncapacidad! ¡Puedes llevar un objeto más!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 167 */ "¡Has conseguido la <color yellow<bolsa de semillas\ngrande>coloroff>! Con ella puedes guardar <color red<30\n>coloroff>semillas deku adicionales, así que llévala\ncontigo cuando uses la resortera.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 1, unk: 0, line: 194 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nPermanecen bajo tierra en fase\nlarvaria durante diez años o más.\n¡Son los insectos más esquivos!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 0, unk: 5, line: 193 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nPermanecen bajo tierra en fase\nlarvaria durante diez años o más.\n¡Son los insectos más esquivos!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 1, unk: 0, line: 215 */ "¡Has conseguido un <color yellow<mineral de Eldin>coloroff>! Estas\npiedras robustas tienen un brillo peculiar.\nSon preciosas y tienen muchas utilidades.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 0, unk: 5, line: 232 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1, line: 96 */ "¡Has atrapado un <color yellow<hada>coloroff>! Estos amables\nseres te regeneran <color red<6 >coloroff>corazones.\n\n\nPero no te la puedes quedar porque no\ntienes una <color yellow<botella vacía>coloroff>, así que será\nmejor dejarla marchar.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 1, unk: 0, line: 95 */ "¡Has encontrado un <color yellow<hada>coloroff>! Estos amables\nseres te regeneran <color red<6 >coloroff>corazones.")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "¡Has conseguido una botella llena de\n<color yellow<esporas de champiñón>coloroff>! Proceden de\nun champiñón gigante. ¡Y son perfectas\npara tratar las heridas de las aves!")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 5, line: 73 */ "¡Has conseguido <color yellow<esporas de champiñón>coloroff>!\nProceden de un champiñón gigante.\nTe vendrá bien llevarte algunas.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 5, unk: 1, line: 48 */ "")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "¡Has recuperado las <color yellow<zarpas>coloroff>! Ya puedes\nacceder a lugares alejados otra vez.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 0, unk: 5, line: 25 */ "¡Has conseguido las <color yellow<zarpas>coloroff>! Son una de las\ntres reliquias transmitidas por la Diosa y\notorgan a su poseedor la capacidad de\nalcanzar lugares alejados.\nSi apuntas y disparas hacia una <color red<diana >coloroff>o\nhacia una <color red<hiedra>coloroff>, lanzarás una garra que\nse enganchará a ella y a continuación la\ncadena te propulsará hasta ese punto.")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "¡Has encontrado una <color blue rupee<rupia azul>coloroff>!\nVale <color red<5 rupias>coloroff>. ¡Al monedero!")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 5, line: 4 */ "¡Has conseguido una <color blue rupee<rupia azul>coloroff>!\nVale <color red<5 rupias>coloroff>. ¡No está mal!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0, line: 149 */ "¡Has conseguido el <color yellow<medallón de vida>coloroff>!\nSi te lo pones, aumentará en uno tu\nnúmero máximo de corazones, así que\núsalo cuando lo necesites.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1, line: 168 */ "¡Has conseguido el <color yellow<carcaj pequeño>coloroff>! Te\npermite guardar <color red<5 >coloroff>flechas adicionales,\nasí que será útil tenerlo a la mano\ncuando vayas a usar el arco.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 0, unk: 5, line: 196 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>! ¡Tienen\nunos ojos más bonitos que el mar y sus\nalas relucen como delicados cristales!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1, line: 195 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>! ¡Tienen unos\nojos preciosos y sus alas relucen como\ndelicados cristales!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1, line: 216 */ "¡Has conseguido una <color yellow<flor arcana>coloroff>!\nDicen que estos milagros de la naturaleza\nllevan floreciendo desde hace eones y\nbrillan en la oscuridad.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 1, unk: 0, line: 233 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1, line: 75 */ "¡Has conseguido los <color yellow<guantes para cavar>coloroff>!\nSus afiladas garras son perfectas para\nescarbar la superficie.\n\nSi ves algún montículo sospechoso de\ntierra blanda en el suelo, acércate a él\ny oprime (A) para empezar a cavar.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 5, line: 49 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1, line: 27 */ "¡Has conseguido la <color yellow<estatuilla>coloroff>!\nEs la prueba de tu victoria en el torneo\nceleste. ¡Qué contenta se va a poner Zelda!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1, line: 6 */ "¡Has conseguido una <color red rupee<rupia roja>coloroff>!\nVale <color red<20 rupias>coloroff>. ¡Pero no te las gastes\ntodas a la vez!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 5, line: 97 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "¡Ahora tu arco es un <color yellow<arco de hierro>coloroff>!\nDiseñado para manos expertas,\nsu potencia de disparo es bastante\nsuperior a la de tu arco anterior.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1, line: 150 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 0, unk: 5, line: 169 */ "¡Has conseguido el <color yellow<carcaj mediano>coloroff>! Te\npermite guardar <color red<10 >coloroff>flechas adicionales,\nasí que será útil tenerlo a la mano\ncuando vayas a usar el arco.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 0, unk: 5, line: 217 */ "¡Has conseguido una <color yellow<alhaja ambarina>coloroff>!\nUna bonita piedra ámbar redondeada que\nse puede encontrar en muchos lugares.\nLo de su forma es todo un misterio...")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf(/* textboxtype: 5, unk: 1, line: 234 */ "")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "¡Has conseguido <color red<5>coloroff> <color yellow<semillas deku>coloroff>! Puedes\nusar la resortera para lanzarlas como\nproyectiles. ¡Pero úsalas con cuidado,\nporque se agotan!")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1, line: 78 */ "")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 5, line: 28 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 5, line: 7 */ "¡Has completado la <color yellow white<Trifuerza>coloroff>! ¡Gracias\na su infinito poder podrás cumplir\nlos deseos de Zelda y <color red<librar al mundo>coloroff>\ndefinitivamente del <color blue<Heraldo de la Muerte>coloroff>!")
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
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1, line: 99 */ "¡Has conseguido <color yellow<agua sagrada>coloroff>! Parece\nagua normal, pero en realidad es agua\npura que encierra una gran energía.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "¡Has conseguido <color yellow<agua sagrada>coloroff>! Utiliza\nsu energía para sanar las graves heridas\nde la dragona del agua.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1, line: 117 */ "¡Ahora tu arco es un <color yellow<arco sagrado>coloroff>! Gracias\nal poder sagrado de la oración de la Diosa,\nel enemigo sufrirá su virulenta ofensiva.")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 0, unk: 5, line: 151 */ "¡Has conseguido un <color yellow<escudo de madera>coloroff>!\nEs ligero y fácil de manejar, ¡pero ten\nmucho cuidado porque puede arder y\nromperse con facilidad!")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 1, unk: 0, line: 170 */ "¡Has conseguido el <color yellow<carcaj grande>coloroff>! Te\npermite guardar <color red<15 >coloroff>flechas adicionales,\nasí que será útil tenerlo a la mano\ncuando vayas a usar el arco.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1, line: 198 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nSus diminutos cuerpecitos son capaces\nde empujar pesos enormes. ¡Es todo\nun espectáculo!")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nSus diminutos cuerpecitos son\ncapaces de empujar pesos enormes. \n¡Es todo un espectáculo!")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0, line: 218 */ "¡Has conseguido una <color yellow<alhaja tenebrosa>coloroff>!\nSimilar a la ambarina, pero de naturaleza\ndiferente. Solo se halla en ciertos lugares.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 0, unk: 5, line: 235 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "¡Has conseguido <color yellow<5 bombas>coloroff>! Lánzalas o\nhazlas rodar con fines destructivos.\n¡Intenta tener siempre una a mano!")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "¡Has conseguido un <color yellow<corazón>coloroff>!\nEstos objetos son fuente de salud y te\nayudan a recuperarte de tus heridas.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf(/* textboxtype: 5, unk: 1, line: 120 */ "¡Has recuperado el <color yellow<saco de bombas>coloroff>! ¡Pum,\ncatapum! ¡Que dé comienzo la fiesta!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf(/* textboxtype: 1, unk: 0, line: 119 */ "¡Has recibido el <color yellow<saco de bombas>coloroff>! Parece\nque <color blue<Jerry>coloroff> le tiene mucho aprecio, ¡así que\nserá mejor que lo cuides bien!")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 0, unk: 5, line: 118 */ "¡Has encontrado un <color yellow<saco de bombas>coloroff>!\nPuedes utilizarlo para guardar y\ntransportar flores bomba.\n\nCon él también podrás acceder a lugares\nque antes eran inaccesibles. Como es de\n<color blue<Jerry>coloroff>, deberías pedirle que te lo preste.")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 0, unk: 5, line: 100 */ "¡Tu escarabajo se ha convertido en un\n<color yellow<escarabajo con gancho>coloroff>! Ahora tiene\nunas mandíbulas más grandes que le\npermiten transportar cosas.\nSi necesitas dejar caer algo con precisión,\nusa (Z) para obtener una vista de pájaro.\n¡Te resultará muy útil, no lo olvides!<0x10011:0x07cd>")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1, line: 153 */ "¡Ahora tu escudo es un <color yellow<escudo de madera\nmacizo>coloroff>! Es fácil de usar y más robusto que\nel escudo de madera normal.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1, line: 171 */ "¡Has conseguido el <color yellow<saco de bombas\npequeño>coloroff>! Te permite guardar <color red<5>coloroff> bombas\nadicionales, así que será útil llevarlo\ncontigo cuando quieras usar bombas.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 1, unk: 0, line: 200 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>! Son\ninsectos muy populares entre los niños\nde Neburia. Pero si uno te agarra con\nsu poderosa mandíbula, ¡estás perdido!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 0, unk: 5, line: 199 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>! Son unos\ninsectos muy populares entre los niños\nde Neburia. Pero si uno te agarra con\nsu poderosa mandíbula, ¡estás perdido!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1, line: 219 */ "¡Has conseguido un <color yellow<ectoplasma viscoso>coloroff>!\nSu aspecto no es su punto fuerte, pero\ntiene tantas aplicaciones que es todo\nun hallazgo.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 0, unk: 5, line: 79 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 1, unk: 0, line: 236 */ "¡Has aprendido el <color yellow<Cántico de la Diosa>coloroff>!\nEs una enigmática melodía que se\ntransmite desde tiempos inmemoriales.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1, line: 51 */ "¡Has conseguido <color yellow<10 bombas>coloroff>! Lánzalas\no hazlas rodar con fines destructivos.\n¡Llévatelas en tu saco de bombas!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 5, unk: 1, line: 30 */ "")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 5, unk: 1, line: 9 */ "¡Has conseguido una <color yellow<flecha perdida>coloroff>!\nLas flechas se pueden usar más de una\nvez con el arco, ¡así que no te olvides\nde buscar las que pierdas!")
          	  case 1:
/*<159>*/ 		printf(/* textboxtype: 0, unk: 5, line: 10 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 0, unk: 5, line: 121 */ "¡Has conseguido un <color yellow<contenedor de corazón>coloroff>!\n¡Tu salud ha aumentado <color red<1 corazón >coloroff>y ahora\nestá al máximo!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1, line: 102 */ "¡Tu escarabajo se ha transformado\nen un <color yellow<escarabajo veloz>coloroff>! Ahora es\nmucho más rápido, ¡pero procura\nno pasarte de largo el objetivo!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 1, unk: 0, line: 134 */ "¡Has conseguido el <color yellow<medallón de corazón>coloroff>!\n¡Con él aparecerán corazones hasta en el\n<color red<modo Héroe>coloroff>!\n\n¡Incluso las flores de corazón darán\nsus frutos! Sin duda, ¡es el objeto perfecto\nsi te preocupas por tu salud!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 0, unk: 5, line: 133 */ "¡Has conseguido el <color yellow<medallón de corazón>coloroff>!\nAhora surgirán corazones más a menudo.\n¡El objeto perfecto si te preocupa la salud!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 0, unk: 5, line: 154 */ "¡Ahora tu escudo es un <color yellow<escudo de madera\nrobusto>coloroff>! Es ligero y fácil de usar, además\nde ser el escudo de madera más resistente\nque hay.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 0, unk: 5, line: 172 */ "¡Has conseguido el <color yellow<saco de bombas\nmediano>coloroff>! Te permite guardar <color red<10 >coloroff>bombas\nadicionales, así que será útil llevarlo\ncontigo cuando quieras usar bombas.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 0, unk: 5, line: 202 */ "¡Has conseguido <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>! Son los\ninsectos menos comunes de todos los\nque habitan los cielos. De hecho, solo\nlos encontrarás entre las tinieblas.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1, line: 201 */ "¡Has atrapado <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>! Son los\ninsectos menos comunes de todos los\nque habitan los cielos. De hecho, solo\nlos encontrarás entre las tinieblas.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 0, unk: 5, line: 79 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1, line: 237 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 5, line: 52 */ "¡Has conseguido un <color yellow<fruto de vigor>coloroff>! Cada\nvez que consigas uno de estos frutos se\nllenará totalmente el indicador de\nresistencia.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 0, unk: 5, line: 31 */ "¡Has conseguido el <color yellow<glifo bendito>coloroff>! Es una\nfigura de madera que inspira gratitud y\nrepresenta fielmente la estatua de piedra\ndel nivel superior.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "¡Has conseguido <color yellow<10 flechas>coloroff>! Las puedes\nlanzar con el arco, pero úsalas bien.\n¡No hay muchas!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 0, unk: 5, line: 103 */ "¡Tu escarabajo se ha transformado\nen un <color yellow<escarabajo tenaz>coloroff>! Su autonomía\nde vuelo ha aumentado bastante.\n¡Ahora podrás llegar mucho más lejos!")
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
/*<208>*/ 				printf(/* textboxtype: 0, unk: 5, line: 124 */ "¡Has conseguido una <color yellow<pieza de corazón>coloroff>!\nCon 4 conseguirás un nuevo corazón para\ntu indicador de salud. ¡Solo te falta <color red<1 >coloroff>más!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1, line: 123 */ "¡Has conseguido una <color yellow<pieza de corazón>coloroff>!\nReúne cuatro para que tu indicador\nde salud aumente un corazón.\n¡Solo te faltan <color red<2 >coloroff>más!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 1, unk: 0, line: 122 */ "¡Has conseguido una <color yellow<pieza de corazón>coloroff>!\nReúne cuatro para que tu indicador\nde salud aumente un corazón.\n¡Solo te faltan <color red<3 >coloroff>más!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 125 */ "¡Has conseguido una <color yellow<pieza de corazón>coloroff>!\n¡Ya tienes las cuatro para completar\nun contenedor de corazón y aumentar\ntu indicador de salud!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1, line: 135 */ "¡Has conseguido el <color yellow<medallón de rupia>coloroff>!\nGracias a él aparecerán rupias con más\nfrecuencia. ¡Si estás en números rojos,\nno dudes en utilizarlo!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 1, unk: 0, line: 155 */ "¡Has conseguido un <color yellow<escudo de hierro>coloroff>!\nEs muy resistente y no arde ni se rompe\nfácilmente, ¡pero ten cuidado con la\nelectricidad!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 0, line: 173 */ "¡Has conseguido el <color yellow<saco de bombas grande>coloroff>!\nTe permite guardar <color red<15 >coloroff>bombas adicionales,\nasí que será útil llevarlo contigo cuando\nquieras usar bombas.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0, line: 203 */ "¡Has conseguido una <color yellow<botella vacía>coloroff>!\nDentro podrás guardar montones de cosas.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 0, unk: 5, line: 220 */ "¡Has conseguido una <color yellow<garra de monstruo>coloroff>!\nEs una especie de garra afilada de\ndemonio. Duele solo con mirarla.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 0, unk: 5, line: 238 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "¡Has conseguido <color red<10>coloroff> <color yellow<semillas deku>coloroff>! Puedes\nutilizar la resortera para lanzarlas como\nproyectiles. ¡Pero úsalas con cuidado,\nporque se agotan!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1, line: 54 */ "Has conseguido reunir todas las <color yellow<lágrimas\nde Farore>coloroff> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "¡Has conseguido una <color yellow<lágrima de Farore>coloroff>!\nCon su poder sagrado paralizarás a los\nguardianes durante <color red<90 segundos>coloroff>.\n\n¡Reúne las <color red<15>coloroff> lágrimas para poder superar\nel juicio!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "¡Has conseguido el <color yellow<cristal enigmático>coloroff>!\nEstá compuesto por cristales cúbicos\nopacos dispersos por toda la estructura.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 104 */ "¡Has conseguido una <color yellow<poción de salud>coloroff>!\nIntenta llevar siempre una en la alforja\npara recuperar <color red<8 corazones>coloroff>.")
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
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "¡Has obtenido la <color yellow white<Trifuerza del Valor>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "¡Has obtenido la <color yellow white<Trifuerza del Valor>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<532>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "¡Solo te falta <color red<una>coloroff> parte de la Trifuerza\npara completarla!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "¡Has obtenido la <color yellow white<Trifuerza del Valor>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<531>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "¡Consigue las <color red<dos>coloroff> partes que te faltan\npara completar la Trifuerza!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 0, unk: 5, line: 136 */ "¡Has conseguido el <color yellow<medallón de tesoro>coloroff>!\nSi te lo pones, ¡aparecerán tesoros más\nfrecuentemente! ¡Úsalo cuando vayas en\nbusca de riquezas!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 0, unk: 5, line: 175 */ "¡Has recuperado el <color yellow<látigo>coloroff>! ¡Ya puedes\nvolver a buscar cosas que atraer con\nun pegadizo movimiento!")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1, line: 174 */ "¡Has conseguido el <color yellow<látigo>coloroff>! En el extremo\ntiene una bola de luz que puede adherirse\na distintos elementos.\n\nSi quieres algo que está fuera de tu alcance,\noprime (Z) para fijarlo como objetivo\ny engancharlo con el látigo.<0x10011:0x07cd>")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 1, unk: 0, line: 221 */ "¡Has conseguido un <color yellow<cuerno de monstruo>coloroff>!\nEs una especie de corneta hecha con\nel duro cuerno de una fiera salvaje.\nSeguramente servirá para elaborar algo.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1, line: 204 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 1, unk: 0, line: 239 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1, line: 84 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1, line: 33 */ "¡Has conseguido el <color yellow<glifo de calamar>coloroff>! Tiene\nforma de cefalópodo y está cubierto de\nmisteriosas ventosas.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1, line: 105 */ "¡Has conseguido una <color yellow<poción de salud <color yellow<★<color yellow<>coloroff>!\n¡Es una versión mejorada de la poción de\nsalud! Te <color red<restaura todos los corazones>coloroff>.")
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
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "¡Has obtenido la <color yellow white<Trifuerza del Poder>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "¡Has obtenido la <color yellow white<Trifuerza del Poder>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<535>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "¡Solo te falta <color red<una>coloroff> parte de la Trifuerza\npara completarla!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "¡Has obtenido la <color yellow white<Trifuerza del Poder>coloroff>!\nEs el legado de las antiguas deidades.\nSi logras reunir las tres partes, ¡el <color red<infinito\npoder >coloroff>de la Trifuerza será tuyo!")
/*<534>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "¡Consigue las <color red<dos>coloroff> partes que te faltan\npara completar la Trifuerza!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "¡Has conseguido el <color yellow<medallón duradero>coloroff>!\n¡Llévalo para prolongar los efectos de\ncualquier poción! Si tienes pociones, claro.")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "¡El escudo ya está arreglado y ha quedado\ncomo nuevo!")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1, line: 156 */ "¡Ahora tu escudo es un <color yellow<escudo de hierro\nmacizo>coloroff>! Es un poco más resistente que\nel escudo de hierro normal.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "¡Has conseguido los <color yellow<aretes ignífugos>coloroff>!\nSon una de las reliquias legadas por la\nDiosa y permiten soportar hasta el calor\nmás extremo.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1, line: 222 */ "¡Has conseguido un <color yellow<broche calavérico>coloroff>!\nTiene la forma de una calavera, símbolo\nde los bokoblin.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 0, unk: 5, line: 205 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "Has conseguido reunir todas las <color yellow<lágrimas\nde Din>coloroff> y tu espíritu se ha fortalecido.\n\n\nNo obstante, el juicio proseguirá hasta\nque alcances el mundo exterior...\nRegresa con cuidado al umbral para\nrecibir la prueba de tu madurez.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 0, unk: 5, line: 55 */ "¡Has conseguido una <color yellow<lágrima de Din>coloroff>!\nCon su poder sagrado paralizarás\na los guardianes durante <color red<90 segundos>coloroff>.\n\n¡Reúne las <color red<15>coloroff> lágrimas para poder superar\nel juicio!")
          	}
          }

