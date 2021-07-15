          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\n¿Quiere venderme algún tesoro?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf("\x0E\x01\x09\x04\x12\x600Esto es lo que acepto hoy:\n\n\n\n<y<<string arg0>\n<y<<string arg1><y<\n<y<<string arg2><y<\n<y<<string arg3><y<>>\n\x0E\x01\x09\x04\x10\x600¿Se ha decidido ya?\n[1]Vendo[2-]No vendo")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf("A ver, ¿qué desea vender?\n\n\n\nOpción 1: <y<<string arg2>>>\nOpción 2: <y<<string arg3>>>\nOpción 3: <y<<string arg0>>>\nOpción 4: <y<<string arg1>>>[1]Opción 3[2]Opción 4[3]Opción 1[4]Opción 2")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf("\x0E\x01\x09\x04\x12\x600Ajá, en ese caso le daré <numeric arg0> \x0E\x03\x04\x02\x1CD\npor cada unidad.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf("\x0E\x01\x09\x04\x10\x600Por lo que veo tiene <numeric arg4>.\n¿Cuántas desea vender?\n[1]Una[2]Cinco[3]Todas[4-]Ninguna")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf("<y<\x0E\x01\x09\x04\x12\x900>>Así que me vende <numeric arg0>, ¿no es así?\nLe puedo dar <numeric arg1> \x0E\x03\x04\x02\x1CD. ¿Hay trato?\n[1]Vale[2-]Olvídelo")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf("\x0E\x01\x09\x04\x10\x80AMuy bien. Tome, aquí tiene su dinero.")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 429, 'param3': 6}
/*<429>*/ 								printf("Gracias, caballero. ¡Vuelva en otra\nocasión!")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf("\x0E\x01\x09\x04\x0F\x0CDe acuerdo. En fin, ya sabe dónde\nencontrarme cuando quiera vender\nalgo.")
          							}
          						  case 1:
/*<431>*/ 							printf("\x0E\x01\x09\x04\x0F\x409¡Pero oiga, si no tiene usted suficiente!\n¿Está tratando de tomarme el pelo?")
          							goto flw_656
          						}
          					  case 1:
/*<499>*/ 						make_actor_do_something(5, 0)
          						goto flw_497
          					  case 2:
/*<498>*/ 						make_actor_do_something(6, 0)
          						goto flw_497
          					  case 3:
          						goto flw_410
          					}
          				  case 1:
          					flw_494:
/*<494>*/ 					printf("\x0E\x01\x09\x04\x0F\x409¿Le parece bonito hacerme perder\nel tiempo a estas horas de la noche?\n\n\n¡Si ni siquiera lleva encima una sola\nunidad de ese tesoro! ¿Hay alguna\notra cosa que desee vender?\n[1]Así es[2-]Olvídelo")
/*<480>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_414
          					  case 1:
          						goto flw_410
          					}
          				}
          			  case 1:
/*<487>*/ 				make_actor_do_something(1, 0)
/*<482>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<490>*/ 					printf("\x0E\x01\x09\x04\x12\x600Ajá, en ese caso le daré <numeric arg1> \x0E\x03\x04\x02\x1CD\npor cada unidad.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf("\x0E\x01\x09\x04\x12\x600Ajá, en ese caso le daré <numeric arg2> \x0E\x03\x04\x02\x1CD\npor cada unidad.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf("\x0E\x01\x09\x04\x12\x600Ajá, en ese caso le daré <numeric arg3> \x0E\x03\x04\x02\x1CD\npor cada unidad.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			}
          		  case 1:
          			goto flw_410
          		}
          	  case 1:
/*<493>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 442, 'param3': 31}
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\nSí, sí, adelante, adelante...\nA ver, dígame... ¿qué desea?\n\n[1]Comprar[2]Bueno, yo...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf("\x0E\x01\x09\x04\x0F\x409Mire, para eso mejor será que se pase\nusted mañana por mi establecimiento.")
          		  case 1:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x13\x609Bueno... ¿qué? ¿Es que no desea\nnada en particular?")
/*<438>*/ 			printf("¿Cómo dice? ¿Que a qué viene tanta\naspereza? ¿Y que a mediodía parecía\nuna persona distinta?\n\n\x0E\x01\x09\x04\x10\x60BHombre, supongo que todo el día\nponiendo la misma sonrisa bobalicona\nde vendedor termina cansando...\n\nPero no me lo tenga muy en cuenta,\n¿de acuerdo?\n\n\nEn fin, a lo que íbamos...\n\n\n\nSupongo que ha venido a hacer uso de\nla <r<tienda de utensilios nocturna>>, ¿no?\n\n[1]¿Y eso?[2]Así es")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x09Ajá, veo que es su primera vez, ¿no?\nEn fin, qué le vamos a hacer.")
          				flw_434:
/*<434>*/ 				printf("\x0E\x01\x09\x04\x12\x600Digamos que durante la noche\nmi especialidad comercial cambia...\nVamos, que me dedico a <r<adquirir\ntesoros>>.\nPero no se crea que compro lo primero\nque veo... Solo acepto los <r<tesoros que\naparecen aquí señalados>>...\n\n\x0E\x01\x09\x04\x10\x600Bien, ya podemos ir al grano.")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf("\x0E\x01\x09\x04\x0F\x409¡Haber empezado por ahí, oiga!")
          				goto flw_434
          			}
          		}
          	}
          }

          void entrypoint_115_20() {
/*< 56>*/ 	start()
/*<535>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*<173>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 57, 'param3': 13}
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x00T(Zzz... zzz... Ay, no me despeines...\nZzz... zzz...)")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf("\x0E\x01\x09\x04\x00\x17Grrr... Maldito <b<Coocker>>... ¡Te odio!\n¡Juro que me vengaré!")
          	}
          }

          void entrypoint_115_03() {
/*<426>*/ 	start()
/*<425>*/ 	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
          	  case 0:
/*<717>*/ 		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          		  case 0:
/*<718>*/ 			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
          			  case 0:
          				flw_479:
/*<479>*/ 				switch (random(2)) {
          				  case 0:
/*<478>*/ 					printf("\x0E\x01\x09\x04\x03\x01¡Ah, Link! Justo ahora\nestaba pensando en ti. Seguro que\nhe desarrollado algún nuevo sentido\n«insectil»...")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf("Hoy quiero algún ejemplar de:\n<y<<y<<string arg0>\n<y<<string arg1><y<\n<y<<string arg2><y<<y<\n>>¿Qué me dices?\n[1]Vendo[2-]Olvídalo")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf("¿Qué quieres vender?\n<y<<y<[1]<string arg0>[2]<string arg1>[3]<string arg2><y<>>")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf("A ver que piense... ¿Cuántas rupias\npodría darte por ejemplar?\nMmm... <numeric arg0>, y es mi última oferta.")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf("Tienes <numeric arg4>... ¿Cuántos piensas\nvenderme?\n\n[1]Uno[2]Cinco[3]Todos[4-]Ninguno")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf("\x0E\x01\x09\x04\x03\x14A ver, a ver... ¡Te doy <numeric arg1> \x0E\x03\x04\x02\x1CD!\n[1]Vale[2-]Olvídalo")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf("Genial, aquí tienes el dinero.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf("\x0E\x01\x09\x04\x03\xFF04Gracias. Tú sí que estás hecho\nun buen bicho...\n\n\nEn el buen sentido de la palabra, claro.\nAsí que ya sabes, Link.\nVuelve cuando quieras.")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf("\x0E\x01\x09\x04\x01\xFF13Pues nada, qué remedio...\n\x0E\x01\x09\x04\x00\x500Tampoco me voy a picar, ¿no?")
          										}
          									  case 1:
/*<459>*/ 										printf("\x0E\x01\x09\x04\x12\x100Te veo poco avispado... ¿No te das\ncuenta de que no tienes tantos? Anda,\nvolveré a preguntártelo.")
          										goto flw_657
          									}
          								  case 1:
/*<454>*/ 									make_actor_do_something(5, 0)
          									goto flw_452
          								  case 2:
/*<453>*/ 									make_actor_do_something(6, 0)
          									goto flw_452
          								  case 3:
          									goto flw_473
          								}
          							  case 1:
          								flw_470:
/*<470>*/ 								printf("\x0E\x01\x09\x04\x10\xFF0C¡Pero si ni siquiera tienes un ejemplar\nde ese insecto! Como sigas así me voy\na mosquear de verdad...\n\n\x0E\x01\x09\x04\x01\xFF00A ver, ¿tienes algún otro insecto que\nquieras vender?\n[1]Pues sí[2-]Olvídalo")
/*<460>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_472
          								  case 1:
          									goto flw_473
          								}
          							}
          						  case 1:
/*<465>*/ 							make_actor_do_something(1, 0)
/*<462>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<468>*/ 								printf("A ver que piense... ¿Cuántas rupias\npodría darte por ejemplar?\nMmm... <numeric arg1>, y es mi última oferta.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf("A ver que piense... ¿Cuántas rupias\npodría darte por ejemplar?\nMmm... <numeric arg2>, y es mi última oferta.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf("\x0E\x01\x09\x04\x03\x01¡Ah, eres tú, Link! Hoy\nestoy con la mosca detrás de la oreja...\nSupongo que es la expresión apropiada,\ntratándose de mí... En fin...")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf("\x0E\x01\x09\x04\x03\x01No sabes lo que me ha pasado...\nHace un rato, a medianoche, fui\na la cueva que hay tras la cascada.\n¿Y sabes lo que había?\nPues un montón de <r<sacraliposas\n>>revoloteando en un lugar totalmente\nvacío. ¡No tengo ni idea de por qué\nestaban ahí todas juntas!\n¡No te imaginas cómo me pica la\ncuriosidad! Así que ya sabes, si te\ninteresa, yo de ti me asomaría a la\ncueva a medianoche.")
/*<722>*/ 				printf("¿Y bien? ¿Qué fantásticos insectos\nme has traído hoy?")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf("\x0E\x01\x09\x04\x00\xFF01Vaya, mira a quién tenemos aquí... \nSi es Link... ¿A qué\nhas venido, si puede saberse?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf("<r<\x0E\x01\x09\x04\x00\x300>>¿Cómo? ¿Que qué estoy haciendo?\n\n\n\n\x0E\x01\x09\x04ÿ\x114Pues admirar mi colección...\nMi colección de <r<insectos>>.")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 418, 'param3': 6}
/*<418>*/ 		printf("\x0E\x01\x09\x04\x01\xFF00Los insectos son increíbles. ¡Casi tanto\ncomo el gran Malton! Incluso más,\ndiría yo...\n\nBueno, no tanto...<pause1E> Malton siempre\nestará por encima de cualquier\nbicho...")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf("Pero vamos, que te haces una idea...\n<r<Me encantan los insectos>>, y mi sueño\nes coleccionarlos todos.\n\nNo te imaginas lo mucho que\nme gustaría tener una isla repleta\nde todo tipo de bichos...")
/*<424>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF01¡Ya sé!\n\n\n\nTe <r<pagaré >>por todos y cada uno\nde los <r<insectos >>que me traigas.\n¡En cuanto <r<veas uno>>, ya sabes!\n\n¡Te aseguro que en lo que respecta\na los bichos tengo la mano rota!\nQue no reparo en gastos, vamos...\n[1]Está bien[2]Ni hablar")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf("\x0E\x01\x09\x04\x03\xFF04Ji, ji, ji... ¡Con tu ayuda, mi colección\nde insectos será la mejor del mundo!")
          			flw_420:
/*<420>*/ 			printf("Por lo general suelo estar por aquí de\nnoche. Así que ya sabes dónde me debes\nbuscar cuando quieras venderme algún\nbicho.\n\x0E\x01\x09\x04\x12\x100Sin embargo, no creas que compro por\ncomprar. Todo <r<depende de cómo me\npille ese día>>. Por cierto, ni se te ocurra\ncomentarle nada de esto a Malton.\nRecuerda; si deseas hablar de insectos,\ntendrá que ser <r<bien entrada la noche>>.\nDigamos que me gusta guardar\nlas apariencias...\n\x0E\x01\x09\x04\x03\xFF14¿Está claro, Link?\nEspero que esto te acabe gustando\ntanto como a mí...")
/*<447>*/ 			printf("¡A ver qué tienes por ahí!")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf("\x0E\x01\x09\x04\x01\xFF05¡¿Pero qué...?! ¡Verás cuando\nse lo cuente a Malton!")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x00\x00¡Guaaaaah! ¡Ñiaaah!")
          }

          void entrypoint_115_21() {
/*< 67>*/ 	start()
/*< 68>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*< 85>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<798>*/ 			entrypoint_115_28();
          		  case 1:
/*< 84>*/ 			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          				  case 0:
/*<799>*/ 					switch (zone_temp_flags[20 /* 0x3 10 */]) {
          					  case 0:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x08\x909Ji, ji... Te debo una, Link.\nGracias a ti, me he echado un novio\nestupendo. Aunque me siento un poco\nmal por el pobre <b<Corvy>>... ")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x00\x01Gracias por traerme la carta,\nLink.\n\n\n\x0E\x01\x09\x04\x01\xD14Ay... ¿Cómo se tomaría <b<Coocker >>esto\nsi se llegara a enterar?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf("\x0E\x01\x09\x04\x00\x14Ay... ¿Qué tiene que hacer una para\nque <b<Coocker>> se fije en ella?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x08\x404¡Uah! ¡Link!\n\n\n\n¿Qué... qué pasa? No habrás...\n\x0E\x01\x08\x02\xFECDNo habrás oído lo que acabo de decir, ¿no?\x0E\x01\x08\x02Í\n\n[1]Darle la\ncarta[2]No dársela")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf("\x0E\x01\x09\x04\x08\x906¿Eh, una carta...? ¿Y es para mí?<pause0A>.<pause0A>.<pause0A>.<pause0A>\n¡Ay! ¿No será de <b<Coocker?>>\n[1]Tú léela[2]Mejor lo\nolvidamos...")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x0E\x90AGra... gracias por traérmela... \nA ver, deja que le eche un vistazo.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 598, 'param3': 6}
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 611, 'param3': 6}
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf("\x0E\x01\x09\x04\x10\x400¿De quién será?...")
/*<594>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 81, 'param3': 6}
/*< 81>*/ 						printf("\x0E\x01\x09\x04\x10\xD00Veamos...<pause14> \x0E\x01\x06\x02\xFECDBuf, vaya letra...\x0E\x01\x06\x02Í\n\n\n\n\x0E\x01\x09\x04\x10\x400Aunque eso es lo de menos, claro.\nLo importante es lo que diga...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 600, 'param3': 6}
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf("«Querida Gracielle:\nMi amor por ti es más grande que\nel ancho cielo y más puro que las\nnubes mismas».\n\x0E\x01\x09\x04\x13\x1200«Si accedes a salir conmigo, me harás\nel hombre más feliz sobre la faz de\nCeléstea. A tus pies: <b<Corvy>>».\n\n\x0E\x01\x09\x04\x00\x500(.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.)\n\n\n\n\x0E\x01\x09\x04\x01\xD00Mmm, a ver que me aclare...\n¿El tal <b<Corvy >>no es el que siempre\nva pegado a las faldas de <b<Malton>>?\n\n\x0E\x01\x09\x04\x0C\x400¿Ese chaval me ha escrito a mí\nuna carta de amor?\n\n\n\x0E\x01\x09\x04\x0B\x712Anda que... Lo que me faltaba.")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 612, 'param3': 6}
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf("\x0E\x01\x09\x04\x00\x09Aunque la verdad es que es una carta\nmuy bonita. Se ve que le ha puesto\nmucho sentimiento.\n\nIgual debería darle una oportunidad\na <b<Corvy>> y salir con él...\n\n\n\x0E\x01\x09\x04\x08\x900¡Que te lo has creído! Es broma, bobo...\n\n\n\n\x0E\x01\x09\x04\x01\xD14Ay... Pero... me pregunto qué pensaría\n<b<Coocker>> si se llegase a enterar de esto.")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x08\x912¿Qué pasa contigo? ¡No está nada\nbonito burlarse así de la gente!")
          					}
          				  case 1:
/*< 76>*/ 					printf("\x0E\x01\x09\x04\x01\x406¿Y esa cara, Link?\nCualquiera diría que andas tramando\nalguna gamberrada...")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oye, Link, ¿puedo\npreguntarte qué opinas de <b<Coocker>>?\n[1]Buen tipo[2]¿Por qué?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf("\x0E\x01\x09\x04\x0B\x70A¿Verdad que sí? Es agradable, atento,\nsiempre puedes confiar en él...\n¡Y además es guapo! ¿Qué más puede\npedir una chica?\n\x0E\x01\x09\x04\x0C\x416Ejem... Estooo... Vaya, creo que\nme he dejado llevar por la emoción.\nNo sé qué me ha pasado.\n\n\x0E\x01\x09\x04\x08\x400Perdona, no pretendía molestarte\ncon mis tonterías.\n")
          			  case 1:
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x01\x406¿Cómo? Pues es que... \n\n\n\n\x0E\x01\x09\x04\x08\x416Na... nada, olvídalo. Qué cosas me da\npor preguntarte así, sin venir a cuento.\nSoy una boba...")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf("\x0E\x01\x09\x04\x00\x1001Ese uniforme te sienta genial.\n¡Estás muy guapo!\n\n\n\x0E\x01\x09\x04\x00\x40AAunque todavía te falta mucho para\nllegar a la altura de Coocker, claro...\n¡Ji, ji!")
          			  case 1:
/*<668>*/ 				printf("\x0E\x01\x09\x04\x01\x404¡Anda...<pause14> Link,\nenhorabuena por pasar de curso!\n\n\n\x0E\x01\x09\x04\x08\x400¡Vaya, el uniforme de caballero de este\naño es verde! <pause14>Es bastante chulo. \n\n\n\x0E\x01\x09\x04\n\x1000Si Zelda te viera vestido así, estaría\norgullosa de ti...\n\n\n\x0E\x01\x09\x04\x00\x406¡No te preocupes! Seguro que está\nbien. Ya verás como vuelve antes\nde lo que te crees.")
/*<670>*/ 				zone_temp_flags[15 /* 0x0 80 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_115_05() {
/*<  7>*/ 	start()
/*<830>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*<  8>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 17>*/ 			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          			  case 0:
/*< 22>*/ 				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          				  case 0:
/*<104>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<579>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 105, 'param3': 13}
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\xE08Ahora ya puedo volver a dormir como\nuna persona normal. ¡Muchas gracias!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x00\x08Muchas gracias. No te imaginas\nlo que todo esto significa para mí.")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf("\x0E\x01\x09\x04\x00\xE0D¡E... eso es...! ¡Su <y<sonajero>>!\n¡Lo has encontrado!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 556, 'param3': 6}
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 20, 'param3': 6}
/*< 20>*/ 						printf("¡Síii, toma ya! ¡Hala, a mimir!\x0E\x01\x05\x04x\x00")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x00\xE08¡Qué alegría! ¡Ya verás qué diferencia!\n¡Seguro que ahora duerme como un\ntronco!\n\n¡Sí! ¡Y yo no pienso despertarme en una\nsemana por lo menos!\n\n\n\x0E\x01\x09\x04\x10\xE00¡No sabes cuánto te lo agradezco!\n¡Te debo una! ¡Y muy grande!")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf("\x0E\x01\x09\x04\x0D\xF09Ojalá un alma caritativa me ayudase\na encontrar el <y<sonajero >>de mi niño...\n\n\n<r<\x0E\x01\x09\x04\x10\x00Un pájaro se lo llevó>>, así que debe\nde seguir todavía por aquí, en <r<algún\nlugar de la ciudad>>.\n\n\x0E\x01\x09\x04\x0D\x00Ay, no, seguro que hoy tampoco logro\npegar ojo...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 11, 'param3': 6}
/*< 11>*/ 				printf("\x0E\x01\x06\x02\xFCCD(...)<pause2D>\x0E\x01\x06\x02Í \x0E\x01\x09\x04\x0D\x00Ay...\x0E\x01\x05\x04A\x00")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf("Uf... Hoy tampoco he pegado ojo...\n[1]¿Qué te pasa?[2]Se te ve cansado")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf("\x0E\x01\x09\x04\x10\xF06Vaya, gracias por el interés.")
          					flw_26:
/*< 26>*/ 					printf("\x0E\x01\x09\x04\x0D\xF00Como ves, últimamente mi hijo se pasa\ntoda la noche llora que te llora y no hay\nforma de conseguir que se duerma.\n\nJamás había tenido problemas para\ndormir, pero desde que perdió eso...\nnada, no hay manera.\n[1]¿Eso?[2]No será...")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf("\x0E\x01\x09\x04\x10\xF01Su <y<sonajero>>...")
          						flw_15:
/*< 15>*/ 						printf("\x0E\x01\x09\x04\x00\xF00En cuanto lo ve deja de llorar, pero\npor desgracia lo perdió el otro día.\n<r<Se lo llevó un pájaro>>. Supongo que lo\nconfundiría con comida o algo así.\n\x0E\x01\x09\x04\x0E\xF00Por supuesto, es imposible que se lo\nhaya comido, así que todavía <r<debe de\nestar en algún lugar de la ciudad>>.\n\nPero por más que lo busco, no logro\nencontrarlo por ninguna parte.\n\n\n\x0E\x01\x09\x04\x00\x09Si hubiese alguien tan amable\nde ayudarme a buscarlo...")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf("\x0E\x01\x09\x04\x10\xF04Ah, ya veo que lo sabías.\nPues sí, se trata de su <y<sonajero>>.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf("\x0E\x01\x09\x04\x10\xF07Por lo que veo te has dado cuenta...")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf("\x0E\x01\x09\x04\x00\x03¡No consigo que mi hijo se duerma\nni a la de tres! ¡Estoy perdido!\n¡¿Qué voy a hacer?!\n[1]Menudo\nproblemón...[2]¿Dónde está\ntu mujer?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x00\x04Y tú que lo digas... ¡Pero en realidad\nno importa! ¡Sigue siendo mi hijo\na pesar de todo!\n\nTú todavía no tienes hijos, pero algún\ndía lo entenderás, algún día...")
          			  case 1:
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x07Ah, mi esposa<pause0A>.<pause0A>.<pause0A>. Como comprenderás,\ndespués de llevar el negocio todo el\ndía acaba reventada.\n\n\x0E\x01\x09\x04\x0D\xF06Así que por lo menos durante la noche\nla dejo descansar...")
          			}
          		}
          	  case 1:
          		goto flw_9
          	}
          }

          void entrypoint_115_22() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 91>*/ 		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
          		  case 0:
/*< 98>*/ 			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          			  case 0:
/*<794>*/ 				switch (zone_temp_flags[20 /* 0x3 10 */]) {
          				  case 0:
/*< 99>*/ 					printf("\x0E\x01\x09\x04\x0C\x401¡Eh, Link! Gracias a ti\ntengo una novia maravillosa.\n¡Te debo una, compañero!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf("\x0E\x01\x09\x04\x00\x18Mmm...\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Si tú sintieras un interés especial, por\nlos motivos que fuera, en saber cómo\nacaba esa historia... No estaría mal\nvisto que fueras a preguntarle, ¿no?\n\x0E\x01\x09\x04\x11\xE00No lo digo porque a mí me pique la\ncuriosidad, que conste... Es que me\ngusta estudiar el amor desde un punto\nde vista, digamos... teórico.")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hombre, ¿qué se te ofrece,\nLink?")
/*<545>*/ 			printf("\x0E\x01\x09\x04\x01\xC09¿Cómo? ¿Que alguien le ha mandado\na <b<Gracielle >>una carta de amor?...\n\n\n\x0E\x01\x09\x04\x0F\x1100Va... vaya... Interesante...\n\n\n\n\x0E\x01\x09\x04\x0C\xC54Y, ejem, esto... ¿Te ha dicho ella qué\nes lo que piensa hacer al respecto?\n\n\n[1]Salir con él[2]Ni idea")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("\x0E\x01\x09\x04\x11\xE53¡¿Cómo?! ¡No puede ser!...")
          				flw_96:
/*< 96>*/ 				printf("\x0E\x01\x09\x04\x11\xE09Eh... no sé por qué he dicho eso.\nEn fin, si solo somos amigos... \n<b<Gracielle>> puede hacer lo que\nella quiera, faltaría más.\nA mí qué más me da con quién salga \no deje de salir...\n\n\n\x0E\x01\x09\x04\x0C\xC00Pero lo que no puedo permitir es\nque eso afecte al ambiente dentro\nde la academia... ¡Todos somos\ncompañeros, al fin y al cabo!\n\x0E\x01\x09\x04\x08\xC00A ver, entiéndeme... Lo ideal es elegir\nlibremente a quién amar, ¿no?\nDe hecho, si no es así, no creo que\npueda considerarse amor verdadero.\n\x0E\x01\x09\x04\x0B\xC00Mi deber es asegurarme de que\nGracielle elija su amor sin ningún\ntipo de trabas ni condicionantes.\n\n\x0E\x01\x09\x04\x11\xE00¡Porque yo también tengo derecho\na amar a quien me apetezca!\n¡Y nadie me lo puede negar!\n\n\x0E\x01\x09\x04\x0C\xC1B¿Tengo razón o no, Link?\n[1]No sé[2]¿Te gusta?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf("\x0E\x01\x09\x04\x0F\x1152Bu... bueno, mejor lo dejamos...\n¡Ahora no es momento para hablar\nde estas cosas!")
          					flw_122:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x10\x1117En fin, es igual. Oye...\n\n\n\n\x0E\x01\x09\x04\x0F\xC00¿Me harías un gran favor?\nSi pudieras enterarte de qué es\nlo que decide finalmente Gracielle...\n¡Pero trata de ser discreto!")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x11\xE53¡No... no digas tonterías,\nLink!\n\n\n\x0E\x01\x09\x04\x12\xC00Qué cosas se te ocurren, hombre...\n¡No sé cómo puedes tener una mente\ntan calenturienta!")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x0F\x1118Ya, cómo vas a saberlo, claro.\nPu... pues ya me gustaría a mí\nenterarme, la verdad...")
          				goto flw_96
          			}
          		}
          	  case 1:
/*<814>*/ 		entrypoint_115_27();
          	}
          }

          void entrypoint_115_06() {
/*<253>*/ 	start()
/*<252>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<744>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 31}
/*<256>*/ 		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          		  case 0:
/*<257>*/ 			printf("\x0E\x01\x09\x04\x07\x1602¡Verás como pronto me pongo hecho\nun mulo! ¡Pásate cuando quieras y\nverás qué cambio!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf("\x0E\x01\x09\x04\x00\x11Uffff... Uffff... Link...\neso que llevas ahí no será <y<resistone>>,\n¿verdad?\n\nPorque no sabes el favor tan grande\nque me harías...\n[1]Toma[2-]Ni hablar")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf("\x0E\x01\x09\x04\x00\x0B¡¿En serio?! ¡Muchas gracias!\n¡Te debo una!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 270, 'param3': 6}
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 265, 'param3': 6}
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 264, 'param3': 6}
/*<264>*/ 					printf("\x0E\x01\x09\x04\x00\x10Y... ¡energía renovada!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf("\x0E\x01\x09\x04\x00\x12Vaya... ¿pero estás seguro de que\nahora podré ponerme fuerte como\nun pelícaro de carga?\n[1]Depende de ti[2]¡Pues claro!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("\x0E\x01\x09\x04\x00\x09¡¿En serio?! ¡Estupendo!\n¡Me dedicaré en cuerpo y alma a\nentrenar! ¡Se acabó lo de llorar\npor las esquinas!")
          						flw_294:
/*<294>*/ 						printf("\x0E\x01\x09\x04\x00\x1800Gracias, Link.\n¡Verás como pronto me pongo\nhecho un mulo!\n\n\x0E\x01\x09\x04\x15\x1800¡Pues nada, a seguir dándole caña!\n¡Pásate por aquí cuando quieras y\nverás qué cambio!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf("\x0E\x01\x09\x04\x00\x1609¿En... en serio? Vaya, ha sonado\ntan convincente que me veo con\nposibilidades de lograrlo y todo...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf("\x0E\x01\x09\x04\x00\x11Va... vaya... Lo siento mucho, no\ndebería haberte molestado con\nmis problemas...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf("\x0E\x01\x09\x04\x00\x03¡No... no te preocupes! ¡No pienso\nabandonar tan pronto esta vez!")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x11Uffff... uffff... Ya no puedo más...\n\n\n\nSi al menos tuviera <r<una poción para\naumentar la resistencia>>...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf("\x0E\x01\x09\x04\x00\x03¡Pero no, nada de eso! ¡Lo que tengo\nque hacer es esforzarme más!\n\n\n¡Y además tengo que conseguirlo\nyo solito!")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x10Ufff... arfff... pfuuu...\n\n\n\n\x0E\x01\x09\x04\x10\x1600Ah, buenas noches, Link...\n\n\n\n¿Que qué estoy haciendo?\nPues ya ves, entrenando...\n\n\nNo soportaba más estar tan debilucho\ny enclenque, así que intento ponerme\nun poco en forma, qué menos.\n\nPero como me da vergüenza que los\ndemás vean que no puedo levantar ni\nun mísero barril, entreno de noche...\n\n\x0E\x01\x09\x04\x00\x1711Aunque me parece a mí que esto no\nfunciona... Me canso demasiado\ny en dos segundos tiro la toalla.\nSoy un pusilánime...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0B¡Ah, Link!\nEso que llevas ahí no será por un\ncasual <y<resistone>>, ¿verdad?\n\nPorque no sabes el favor tan grande\nque me harías...\n[1]Toma[2-]Ni hablar")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf("Ay... Si al menos tuviera alguna <r<poción\npara aumentar la resistencia>>...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf("\x0E\x01\x09\x04\x00\x03¡Pero no, nada de eso! ¡Lo que tengo\nque hacer es esforzarme más!\n\n\n¡Y además tengo que conseguirlo\nyo solito!")
          		}
          	}
          }

          void entrypoint_115_23() {
/*<530>*/ 	start()
/*<531>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<680>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<681>*/ 			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          			  case 0:
          				flw_534:
/*<534>*/ 				entrypoint_115_24();
          			  case 1:
/*<682>*/ 				printf("\x0E\x01\x09\x04\x00\x08¿Qué quieres, Link?...\nEstoy ocupado pensando en Gracielle,\n¿o es que no me ves?\n\nSi tienes algo que decirme, vuelve\npor la mañana. ¡Hala, aire!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf("\x0E\x01\x09\x04\x00\x10Je, je, je... ¡Se acabó la tiranía de\n<b<Malton>>! Ahora este cuarto es mío\ny solo mío.")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf("\x0E\x01\x09\x04\x00\x02¡Link! ¡Pienso ponerme\ntan cachas que cuando me veas te vas\na llevar un susto de muerte!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf("\x0E\x01\x09\x04\x00\x10Ufff... ufff...\n\n\n\nOye, Link...\nNo tendrás por ahí algo de <y<resistone\n>>de sobra, ¿no?\n[1]Toma[2-]Olvídalo")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf("\x0E\x01\x09\x04\x00\x0B¿En serio? ¡Muchas gracias!\n¡Te debo una!")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 311, 'param3': 6}
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 309, 'param3': 6}
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 345, 'param3': 6}
/*<345>*/ 					printf("\x0E\x01\x09\x04\x00\x10Ufff... ¡He vuelto a la vida! Ya no podía\nni tenerme en pie del cansancio.")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf("\x0E\x01\x09\x04\x00\x12Aunque a veces me preocupo bastante\nporque de verdad que se me hace\ninterminable.\n\n¿Hasta cuándo tengo que seguir\npara ponerme tan fuerte como tú,\nLink?\n\n¿Cuántas flexiones crees que harían\nfalta para no parecer un debilucho?\n\n[1]Unas mil[2]Un montón")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf("\x0E\x01\x09\x04\x00S¡¿Ta... tantas?!\n\n\n\n\x0E\x01\x09\x04\x10\xE00Vaya... Por lo visto el camino hacia\nla fuerza es bastante duro...")
          						flw_352:
/*<352>*/ 						printf("\x0E\x01\x09\x04\x01\x1600¡Entendido! ¡Prepárate para ver\nmuy pronto a un nuevo musculitos\nen acción!\n\n\x0E\x01\x09\x04\x00\x1800¡Pásate cuando quieras a ver el\nresultado!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf("\x0E\x01\x09\x04\x00\x07¿Un montón? ¡Pues claro!\n¡Ahora lo entiendo!\n\n\n\x0E\x01\x09\x04\x07\x800Lo que estás tratando de decirme es\nque bastará con hacer unas cuantas\nhasta perder la cuenta, ¿no?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf("\x0E\x01\x09\x04\x00\x11Ah, vale... Siento mucho haber sido tan\ndescarado...")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf("¡No pasa nada! ¡Tengo que aprender\na valerme por mí mismo!")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf("\x0E\x01\x09\x04\x00\x11Uffff... uffff... Ya no puedo más...\n\n\n\nSi al menos tuviera <r<una poción para\naumentar la resistencia>>...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf("\x0E\x01\x09\x04\x00\x03¡Pero qué estoy diciendo!\n¡Es imposible caer más bajo!\nAsí no, no puedo andar siempre\ndependiendo de los demás...\n¡Tengo que conseguirlo yo solito!")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x10Uffff... Uffff... Ah, eres tú,\nLink.\n\n\n\x0E\x01\x09\x04\xC10\xFF00Desde lo del otro día no he dejado de\nentrenar, pero últimamente estoy un\npoco estancado.\n\n¿Crees que es posible que se trate de\ncansancio acumulado?")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf("\x0E\x01\x09\x04\x00\x0B¡Ah, Link!\nEso que llevas ahí no será por un\ncasual <y<resistone>>, ¿verdad?\n\nMe preguntaba si no te importaría\nvolver a darme un poquito solo...\n[1]Toma[2-]Olvídalo")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf("Oye, Link...\nNo tendrás por ahí un poco más de\n<y<resistone>>, ¿verdad?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf("\x0E\x01\x09\x04\x00\x03¡Pero qué estoy diciendo!\n¡Es imposible caer más bajo!\nAsí no, no puedo andar siempre\ndependiendo de los demás...\n¡Tengo que conseguirlo yo solito!")
          		}
          	}
          }

          void entrypoint_115_24() {
/*<533>*/ 	start()
          	flw_58:
/*< 58>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*< 61>*/ 		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          		  case 0:
/*< 66>*/ 			printf("")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x00\x02¡Oye, Link! Le diste\nmi carta a Gracielle, ¿verdad?\n[1]Pues...[2]¿Qué carta?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x11\x1F1D¡¿Cómo?! ¿Que se la diste...\na la loca del retrete?")
          				flw_64:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x01\x1F00¡Te lo dije! ¡Te advertí que era una\ncarta para Gracielle!... ¡Me juraste\nque se la darías a ella!\n\n\x0E\x01\x09\x04\x1A\x1F17Lo has estropeado todo, idiota...\n¿Crees que tienes derecho a jugar \ncon los sentimientos de la gente?\n¡Ojalá se te zampe un pelícaro salvaje!\nNo quiero volver a verte en mi vida.\n¡Te odio, Link!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf("\x0E\x01\x09\x04\x00\x1F18¡¡¡Nooooo!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 696, 'param3': 6}
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x15\x1F12¿¡Pero cómo que qué carta!?\n\n\n\n\x0E\x01\x09\x04\x11\x1B00Oye... no se la habrás dado a la loca\ndel retrete, ¿no? ¡Porque eres capaz!")
          				goto flw_64
          			}
          		}
          	  case 1:
/*<821>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 113, 'param3': 31}
/*<113>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<541>*/ 			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
          			  case 0:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 6912, 'next': 544, 'param3': 13}
/*<544>*/ 				printf("\x0E\x01\x09\x04\x00\x0FBuf... Me pregunto si <b<Gracielle>> habrá\ncomprendido lo que siento por ella... \n\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00¿Qué hago? Se me va a salir el corazón por\nla boca, de los nervios que tengo...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf("\x0E\x01\x09\x04\x00\x13¡¿Cómo?! ¿Que... que ya le has dado\nla carta a <b<Gracielle>>...?\n\n\n\x0E\x01\x09\x04\x01\x2500¡Ay, mi madre! ¿Y ahora qué hago?...\nDebería ir a hablar con ella, a ver qué\nme responde, ¿no?\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00(Qué vergüenza...)")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf("\x0E\x01\x09\x04\x00\x02¿Lo coges, Link?\nTienes que darle la carta a la chica\nde la <r<boina>>. \n\n\x0E\x01\x09\x04\x01\x1B00Como se la des a <r<la loca del retrete>>...\n¡no sé lo que te hago!")
          		}
          	}
          }

          void entrypoint_115_25() {
/*<239>*/ 	start()
/*<243>*/ 	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          	  case 0:
/*<248>*/ 		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
          		  case 0:
/*<250>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<251>*/ 				printf("¡Uoooooooh!")
          			  case 1:
/*<249>*/ 				printf("3985... 3986...\n3987... 3988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf("Nuooh... guoooh...")
          			  case 1:
/*<244>*/ 				printf("\x0E\x01\x06\x02\xFECD55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf("Ung... guh... goh...")
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x06\x02\xFCCD5... 6... 7...")
/*<241>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_115_08() {
/*<313>*/ 	start()
/*<314>*/ 	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          	  case 0:
/*<326>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<321>*/ 			printf("\x0E\x01\x09\x04\x15\x180A¡Todavía tengo que mejorar!\n¡Y no pienso parar hasta que consiga\nlevantar un barril con un solo dedo!")
          		  case 1:
/*<322>*/ 			printf("\x0E\x01\x09\x04\x15\x180AUffff... Una... más... vamos...")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf("\x0E\x01\x09\x04\x15\x190AUfff... Una... más... vamos...\n\n\n\n\x0E\x01\x09\x04\x01\x1600¡Hola, Link! ¡Llegas en\nel momento justo! Hay una cosa que\nme gustaría comentar contigo.\n\n\x0E\x01\x09\x04\x07\x1800Verás, hace un rato probé a levantar un\nbarril, y lo conseguí con un solo brazo.\n\n\n\x0E\x01\x09\x04\x00\x1600¿Crees que he conseguido ponerme un\npoco más fuerte que antes?\n\n\nLink, ¿qué te parece?\n¿Me ves más fuerte?\n[1]¡Mucho![2]Pues sí")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf("\x0E\x01\x09\x04\x07\x1809¿Eh? ¡Anda ya! ¡No seas pelota!\nPero bueno, estoy muy contento,\nla verdad.")
          			flw_320:
/*<320>*/ 			printf("\x0E\x01\x09\x04\x00\x1600Todo esto lo he conseguido gracias a ti,\nLink.\n\n\n\x0E\x01\x09\x04\x01\x1900Si no me hubieses animado todo este\ntiempo, jamás lo habría logrado.\n\n\n\x0E\x01\x09\x04\x07\x180B¡Muchísimas gracias!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf("\x0E\x01\x09\x04\x00\x180B¿En serio? ¡Muchas gracias!\n¡No sabes lo contento que estoy!")
          			goto flw_320
          		}
          	}
          }

          void entrypoint_115_09() {
/*<175>*/ 	start()
/*<212>*/ 	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
          	  case 0:
/*<215>*/ 		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
          		  case 0:
/*<788>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<789>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09Ah, Link, muchas gracias\npor salvar a mi hermana, estoy\nen deuda contigo.")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09¡Link! ¡Hace un rato\nregresó mi hermana sana y salva!\n\n\n\x0E\x01\x09\x04\n\x400La verdad es que estaba muy\npreocupado, pero al final todo\nha salido bien.\n\n\x0E\x01\x09\x04\x0B\x400¡Y todo gracias a ti, Link!\n¡Te debo una!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09¡Link, mi hermana está\na salvo!\n\n\n\x0E\x01\x09\x04\n\x400No sé qué habría hecho si le llega\na pasar algo... ¡Menudo peso me\nhe quitado de encima!\n\n¿Cómo? ¿Que fuiste tú el que\nle llevó la medicina?<pause14>\n\x0E\x01\x09\x04\x0B\x400¡Muchísimas gracias!\n\nEsto no es ni la mitad de lo que\nte mereces por lo que has hecho,\npero acéptalo, por favor.")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf("\x0E\x01\x09\x04\x0B\xA05Vaya, qué lástima... Quería darte esta\n<y<botella vacía>>, pero al parecer no te\nqueda espacio libre en la alforja ni\ntampoco en la consigna...\nBueno, te la guardo. Si consigues hacer\nalgo de hueco, ven a verme más tarde\ny será toda tuya.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf("\x0E\x01\x09\x04\x0B\x400Este artículo sirve para multitud\nde cosas. ¡Gracias, gracias!")
/*<813>*/ 						give_gratitude_crystals();
          					}
          				  case 1:
          					goto flw_735
          				}
          			}
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          		  case 0:
/*<741>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 183, 'param3': 31}
/*<183>*/ 			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          			  case 0:
/*<200>*/ 				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          				  case 0:
/*<204>*/ 					switch (adventure_pouch_has(5 0x0005)) {
          					  case 0:
/*<205>*/ 						printf("\x0E\x01\x09\x04\x0B\x409¿Qué pasa, Link?\n¡Tienes que llevarle esas <y<<y<esporas de\nchampiñón<y< >>a mi hermana cuanto antes!\n\x0E\x01\x09\x04\n\x400¡Cuento contigo!")
          					  case 1:
/*<201>*/ 						printf("\x0E\x01\x09\x04\x0B\x406¿Eh? ¿Dónde has metido las <y<esporas de\nchampiñón>>? ¿Aún no se las has dado?\n\n\n\x0E\x01\x09\x04\n\x400Bueno, si se te acaban puedes <r<sacar\nmás de los champiñones >>que crecen\nen una de las islas de por aquí.\n\n¡Cuento contigo, Link!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf("\x0E\x01\x09\x04\x0B\x409Si has hecho algo de sitio en\ntu alforja, podrás llevarte esto.\n\n\n<y<\x0E\x01\x09\x04\n\x400>>Con estas <y<esporas de champiñón>>,\nseguro que el pelícaro se cura\nenseguida de sus heridas.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf("\x0E\x01\x09\x04\x00\x50D¡Pero si no puedes llevar más cosas\nencima! \x0E\x01\x09\x04\x00\x400¡Deja algo de espacio en\ntu alforja y vuelve después!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf("\x0E\x01\x09\x04\x0B\x404Si las usa, se pondrá bien enseguida y\npodrá volver por sí mismo. \x0E\x01\x09\x04\x00\xC00¡Tienes que \nllevárselas a mi hermana! \x0E\x01\x09\x04\x00\x400Y luego te\npuedes quedar con la <r<botella vacía>>.\n¡Cuento contigo, Link!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf("\x0E\x01\x09\x04\x0B\x50D¡¿Cómo?! ¡¿Que has visto a mi\nhermana?! ¡¿Y que su pelícaro\nestá herido y no puede volar?!\n\n\x0E\x01\x09\x04\n\xC00¡Entonces tienes que llevarle esto\nenseguida! Toma, son<y<\x0E\x01\x09\x04\x00\x400 esporas de\nchampiñón>>. Seguro que se cura muy\npronto.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf("\x0E\x01\x09\x04\n\xC12Qué voy a hacer, qué voy a hacer...\n\n\n\nSiempre le digo que conviene llevar\nencima una poción por si le ocurre\nalgo al pelícaro...\n\nY justo el día que se la deja en casa,\nva y le pasa esto.")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf("\x0E\x01\x09\x04\x0D\x400Mi hermana decía que sentía mucha\ncuriosidad por esa <b<isla con forma de\nruleta>>. ¡Creo que se ha ido hacia el\n<r<sudoeste>>!")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf("\x0E\x01\x09\x04\x01\x400¿Me vas a ayudar a buscarla,\nLink?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf("\x0E\x01\x09\x04\n\xC12No puede ser... Qué problemón...\nqué problemón...\n[1]¿Qué pasa?[2]Tranquilo")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf("\x0E\x01\x09\x04\x00\x411Vaya, gracias por escucharme,\nLink. Ojalá todo el mundo\nfuera tan amable como tú.")
          				flw_181:
/*<181>*/ 				printf("\x0E\x01\x09\x04\x00\x400Verás... <r<Mi hermana pequeña >>se fue\nhace un rato a dar un paseo con su\npelícaro y no ha vuelto todavía.\n\nEn cuanto vi que tardaba demasiado,\nme puse a buscarla por todas partes,\npero... ni rastro de ella.\n\n\x0E\x01\x09\x04\x0B\x500Espero que no le haya pasado nada,\npero estoy tan preocupado...")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf("\x0E\x01\x09\x04\x00\x411Oye, Link...\n¿Por qué no me ayudas a buscarla?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf("\x0E\x01\x09\x04\x0D\x400Comentó algo sobre una <b<isla con\nforma de ruleta >>que apareció hace\npoco. ¡Se ha ido hacia el <r<sudoeste>>!")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf("\x0E\x01\x09\x04\x01\x400¡Cuento contigo, Link!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf("\x0E\x01\x09\x04\x0B\x500¡¿Cómo que me tranquilice?!\nAh, lo siento... No quería gritarte...")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf("\x0E\x01\x09\x04\x0B\x409¡La isla de la Diosa ha desaparecido!\n¡Es terrible!\n\n\n\x0E\x01\x09\x04\n\x400Sin duda esto no presagia nada bueno,\nes obvio...")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf("\x0E\x01\x09\x04\x01\x400Ahora que me acuerdo, hace un rato he\nvisto a <b<Vestro>> volando hacia el cúmulo.\nIba de lo más contento, decía no sé qué\nde un <r<insecto muy raro>>.\n¡Este chaval!... Como no espabile,\notro año que va a catearlas todas.\nDebería dejarse de tanto bicho y\nestudiar un poco más.")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf("\x0E\x01\x09\x04\x01\x400Por cierto, ¡<b<Vestro >>dice que tiene\npensado construir un paraíso de\ninsectos dentro de una isla del <r<gran\ncúmulo>>!")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf("\x0E\x01\x09\x04\n\xA00Por cierto, tu compañero ese de la\nacademia de caballeros, el tal <b<Vestro>>...\n\n\nPues dice que encontró el paraíso de\nlos insectos <r<dentro del gran cúmulo>>.\nSe nota que le gustan esos bichos.\n\n\x0E\x01\x09\x04\x0B\x400De todas formas, me pregunto qué\ntendrá pensado hacer por allí...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf("\x0E\x01\x09\x04\x00\x01¿Has oído el estruendo ese tan grande?\nParecía como si la isla fuese a estallar\nen pedazos. ¿Qué habrá pasado?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oye, hace un momento, en la plaza... \nNo habrás hecho alguna de las tuyas,\n¿verdad? Es que al ver cómo el cielo\nse oscurecía así, tan de repente...")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf("\x0E\x01\x09\x04\n\x405Me pregunto por qué se arremolinarán\nlas mariposas precisamente en este\nlugar. Si aquí no hay nada de nada...")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Muy buenas, Link!\nSiempre que te veo vas con prisas\npara llegar a algún sitio, ¿eh?")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link!\n¿No te parece que hace mucho que\nno se juntan esos tres granujas que\ntú y yo sabemos?\nMe pregunto si le habrán visto por fin\nlas orejas al lobo y se habrán puesto\na estudiar para los exámenes de una\nvez por todas...")
          							  case 1:
/*<785>*/ 								printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link!\nAcabo de llegar de visitar la\nmisteriosa isla esa de la ruleta\nde la que me habló mi hermana.\nHabía un tipo muy raro que me soltó\nun rollo sobre que se le había caído\nuna <r<ruleta >>y había desaparecido bajo\nlas nubes y no sé qué más historias.\nPero vamos, que la lleva clara si cree\nque va a poder recuperar algo una vez\nque ha atravesado el mar de nubes.\n¡Yo daría la ruleta por perdida sí o sí!")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf("\x0E\x01\x09\x04\n\x405¡¿Has visto eso?! ¡¿Lo has visto?!\n¡De repente ha surgido un rayo de\nluz desde aquella torre hacia el gran\ncúmulo!\nNo hay duda, está pidiendo a gritos\nque alguien lo siga hasta allí...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link!\nÚltimamente no se le ha visto\nel pelo a Zelda por aquí...\n¿Sabes si le ha pasado algo?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link!\n\n\n\n\x0E\x01\x09\x04\n\x400¿Cómo dices?, ¿<r<dos hojas de viento>>?<pause1E>\n¡A mí no me vengas con acertijos\nraros de esos, que se me dan fatal!\n¡Búscate un <r<vidente>>, anda!")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf("\x0E\x01\x09\x04\x0B\xE09Ah, Link, muchas gracias\npor salvar a mi hermana, estoy\nen deuda contigo.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_27() {
/*<795>*/ 	start()
/*<816>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<818>*/ 		printf("\x0E\x01\x09\x04\x0C\x401¿Te has enterado?\n¡La isla de la Diosa se ha hundido!\n<pause1E>Es la peor tragedia en la historia\nde Altárea...\n\x0E\x01\x09\x04\x11\xE00Aunque igual es que la Diosa quiere\ndecirnos que debemos andar nuestro\npropio camino sin su protección.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf("\x0E\x01\x09\x04\x0C\x40B\x0E\x01\x08\x02\xFECDAdemás, yo ya tengo mi propia diosa...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf("\x0E\x01\x09\x04\x00\x1101¡Link!\nTe voy a contar una cosa, pero tienes\nque prometerme que no se lo vas a\ncontar a nadie, ¿vale?\n\x0E\x01\x09\x04\x0C\x400Salí a dar una vuelta y, de repente,\nemergieron unas extrañas ruinas\nbajo la isla de la Diosa.\n\n\x0E\x01\x09\x04\x11\xE00¿Qué está ocurriendo en Altárea?\n¡Ya no reconozco este lugar!")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf("\x0E\x01\x09\x04\x00\x05¡Hombre, Link!\nMe alegra verte con tan buena\ncara últimamente.\n\n\x0E\x01\x09\x04\x00\x40B¡Que no decaiga el ánimo! <pause14>\nYa verás como Zelda vuelve antes\nde lo que piensas. ¡Ten confianza!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Oye, Link!\n¿Qué tal va la cosa?\n\n\n\x0E\x01\x09\x04\x0C\x1400¿Cómo dices? ¿La Trifuerza\nescondida por la Diosa?...\n \n\n\x0E\x01\x09\x04\x10\x1100Mmm... Me temo que yo no te voy\na servir de mucha ayuda...\n\n\n\x0E\x01\x09\x04\x08\x1400Mejor será que les preguntes a los\nprofesores sobre ese tema.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf("\x0E\x01\x09\x04\x00\x05¡Hombre, Link!\nMe alegra verte con tan buena\ncara últimamente.\n\n\x0E\x01\x09\x04\x00\x40B¡Que no decaiga el ánimo! <pause14>\nYa verás como Zelda vuelve antes\nde lo que piensas. ¡Ten confianza!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf("\x0E\x01\x09\x04\x00\x01¡Hola, Link!\n¿Cómo va la cosa, compañero?\n¿Ya estás un poco más animado?\n\n\x0E\x01\x09\x04\x09\x1400No te creas, yo también tengo\nmis problemas... ¡y bastante gordos!\nPero delante de los amigos me hago\nel duro, para no preocuparlos.\n\x0E\x01\x09\x04\x11\x400Y así, poco a poco los problemas\nparece que se van diluyendo.\n¡O al menos eso creo! A mí me\nfunciona bastante bien.")
          						  case 1:
/*< 90>*/ 							printf("\x0E\x01\x09\x04\x00\x01¡Hombre, Link,\nfelicidades por pasar de curso!\nY ya veo que estrenas uniforme...\n¡Te sienta muy bien!\n\x0E\x01\x09\x04\x10\x1100Pero bueno, ahora no es momento\npara frivolidades... Todavía no puedo\ncreerme que Zelda haya desaparecido.\n\n\x0E\x01\x09\x04\x0C\x1400Sé que tú y ella os llevabais de\nmaravilla, así que me imagino\ncómo debes de sentirte.\n\n\x0E\x01\x09\x04\x08\x1400Pero no te desanimes; ten confianza\ny piensa en positivo. ¡Estoy convencido\nde que sigue viva y de que volverá\npronto! Ánimo, hombre.")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_10() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          	  case 0:
/*<206>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<845>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 31}
/*<195>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<207>*/ 				printf("\x0E\x01\x09\x04\x00\x0B¡Son las <y<esporas de champiñón>>!\nMenos mal que has podido traerlas...\n[1]Toma, todas\ntuyas[2-]¡No pienso\ndártelas!")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf("\x0E\x01\x09\x04\x0B\x409¡Muchas gracias! Con esto podré curar \nlas heridas de este chiquitín.")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 646, 'param3': 6}
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 233, 'param3': 6}
/*<233>*/ 					printf("\x0E\x01\x09\x04\x00\x04Ya verás como se pone bien en menos\nque canta un pelícaro.")
/*<237>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 581, 'param3': 6}
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x09Menos mal... Empezaba a temerme\nque ya fuese demasiado tarde.\n¡Pero has venido justo a tiempo!\n\nEste chiquitín y yo te debemos la vida...\n¡Muchas gracias!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x04Bueno, pues yo voy a ir tirando.\n¡Nos vemos por la ciudad!")
/*<615>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 582, 'param3': 47}
/*<582>*/ 					make_actor_do_something(2, 0)
/*<613>*/ 					set_camera(25, 0)
/*<617>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 583, 'param3': 17}
/*<583>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 40, 'next': 616, 'param3': 48}
/*<616>*/ 					make_actor_do_something(3, 0)
/*<211>*/ 					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
/*<823>*/ 					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
/*<614>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x1113Cómo... ¿Cómo puedes ser tan cruel?")
          				}
          			  case 1:
/*<730>*/ 				printf("\x0E\x01\x09\x04\x00\x50BEntonces, ¿me das las esporas de\nchampiñón? Con ellas, este pequeñín\nse curará de inmediato.\n[1]Aquí tienes[2-]Ni hablar")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf("<r<\x0E\x01\x09\x04\x00\x01>><r<La medicina para el pelícaro la tiene\nmi hermano>>... Ve a buscarlo, ¡deprisa! \n\n\nYo te espero aquí junto al chiquitín.\nPor favor, ¡tienes que ayudarnos!")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf("\x0E\x01\x09\x04\x00\x50B¡Hola, Link!\n¡Llegas justo a tiempo!\n\n\n\x0E\x01\x09\x04\x12\x200Verás, mi pelícaro se ha hecho daño\nmientras paseábamos y no puede volar.\n\x0E\x01\x09\x04\x01\x1500Hemos aterrizado aquí como hemos\npodido, pero ahora no sé qué hacer.\n\x0E\x01\x09\x04\x12\x1500Hasta que no se cure no podemos\nvolver, pero para eso <r<necesito >>algún\ntipo de <r<medicina>>.\n\nPero claro, tiene que ser <r<medicina\nespecial para pelícaros>>.\n\n\nLink, tú... \x0E\x01\x09\x04\x15\x200¿tú podrías\ntraerme medicina para pelícaros?\n[1]Claro[2]Lo siento")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf("\x0E\x01\x09\x04\x0B\x409¡Muchísimas gracias! ¡Te debo la vida!")
          			flw_192:
/*<192>*/ 			printf("<r<La medicina para el pelícaro la tiene\nmi hermano>>, lo mejor será que vayas\na hablar con él.\n\nMe imagino que estará esperándome\n<r<en la plaza de Altárea>>. Pobre, seguro\nque está hecho un manojo de nervios...")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf("\x0E\x01\x09\x04\x09\x509Oye, ¡pero si tienes la medicina!\n¿Y por qué no dices nada? Esas\n<y<esporas de champiñón >>son lo que\nnecesitamos...\nCon ellas, este pequeñín se curará\nde inmediato. Si no es mucha molestia,\n¿te importaría dármelas?\n[1]Aquí tienes[2-]Ni hablar")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf("Vaya, supongo que era mucho pedir...\n¿Podrías al menos buscar a mi hermano\ny contarle lo que ha pasado?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf("Cómo, ¿que ya has estado con él?\nPerfecto, eso lo hace todo mucho\nmás sencillo.")
          					flw_194:
/*<194>*/ 					printf("Yo te espero aquí con este chiquitín,\n¿de acuerdo?\n\n\nYa sabes lo que tienes que hacer,\n¡confío en ti!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf("\x0E\x01\x09\x04\x0C\x1513¿Eh? ¿Es que acaso no tienes corazón?\n\x0E\x01\x09\x04\x0B\x409Menos mal que sé que estás de broma,\nque si no...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf("\x0E\x01\x09\x04\x0C\x456¿Se puede saber qué ha pasado\nahí fuera? Menudo estruendo...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oye, Link... No se cómo\nlo haces, pero cada día estás más\natractivo. ¡Y ese uniforme te queda\ndivino!\n¡Te estás convirtiendo en un hombre\nhecho y derecho!")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf("\x0E\x01\x09\x04\x08\xE06¡Anda! ¡No me digas que has aprendido\na ejecutar el tirabuzón aéreo con el\npelícaro!\n\n\x0E\x01\x09\x04\x08\x909¡Qué máquina! ¡Estás hecho un crack!<pause1E>\n\x0E\x01\x09\x04\x0C\x400Pero no te creas,<pause14> seguro que Coocker\ntambién domina esa maniobra a las mil\nmaravillas.")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf("\x0E\x01\x09\x04\x00\x06¿Cómo? ¿La Trifuerza, dices?...<pause1E>\n¿Y qué se supone que es eso?")
          				  case 1:
          					goto flw_86
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_11() {
/*<217>*/ 	start()
/*<759>*/ 	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
          	  case 0:
/*<704>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<705>*/ 			printf("\x0E\x01\x09\x04\x00\x01 ¡Link... la isla de la Diosa\nha desaparecido!\n\n\n\x0E\x01\x09\x04\x00\x1513Qué disgusto, con lo que les gustaba\na los pelícaros posarse allí para\ndescansar...")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf("\x0E\x01\x09\x04\x00\x13¿Has sentido el temblor ese tan fuerte?\nNo sé a qué se habrá debido, ¿tú sabes\nlo que está pasando?")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf("\x0E\x01\x09\x04\x00\x01¿Qué tal, Link?\n\n\n\n\x0E\x01\x09\x04\x0C\x200Oye, ¿has aprendido a ejecutar la\nlegendaria técnica de vuelo llamada\n«tirabuzón aéreo»?<pause1E> Ah, ¿en serio?\n\x0E\x01\x09\x04\x0C\x50B¡Pues enhorabuena!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf("\x0E\x01\x09\x04\x00W¿La Trifuerza?<pause14> En la vida, chico...\nNi siquiera había oído mencionar\nel nombre antes.\n\nTe aconsejo que hables con el director\nde la academia. Si alguien sabe algo\nsobre ese tipo de cosas, será él.")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf("\x0E\x01\x09\x04\x00\x01Muy buenas, Link.\nOye, hace mucho que no veo a la\nchica esa rubita tan maja de la\nacademia...\nZelda se llamaba, ¿verdad?<pause05>.<pause05>.<pause05>.<pause05>\nAntes ibais juntos a todas partes...\nNo os habréis peleado ni nada, ¿no?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf("\x0E\x01\x09\x04\x00\x13Durante un instante, dio la impresión\nde que las tinieblas devoraban por\ncompleto el cielo... ¿Qué podría\nprovocar algo así?")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf("\x0E\x01\x09\x04\x00\x01Hola, Link.\n\n\n\n\x0E\x01\x09\x04\x11W¿<r<Dos grandes hojas>>, dices? No sé a qué\nse referirá, la verdad...\n\n\n\x0E\x01\x09\x04\x01\x00Bueno, ahora que lo pienso, las aspas\nde los <r<molinos >>de Altárea podrían\nconsiderarse unas hojas, y además\nson bastante grandes... ¿no crees?")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf("\x0E\x01\x09\x04\x00\x0BHola, Link.\nOye, muchas gracias por tu ayuda.\n\n\n\x0E\x01\x09\x04\x00\x400Mi pelícaro vuelve a estar sano\ncomo un roble. De verdad, no sé\nqué hubiéramos hecho sin ti... \n¡Muchísimas gracias!")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<760>*/ 		printf("\x0E\x01\x09\x04\x00\x0BHola, Link.\nOye, muchas gracias por tu ayuda.\n\n\n\x0E\x01\x09\x04\x00\x400Mi pelícaro vuelve a estar sano\ncomo un roble. De verdad, no sé\nqué hubiéramos hecho sin ti... \n¡Muchísimas gracias!")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf("Oooh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf("Ay... Por caridad... que alguien\nme ayude...")
/*< 30>*/ 	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*< 54>*/ 	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
/*<652>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_115_13() {
/*<501>*/ 	start()
/*<504>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<510>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<676>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 506, 'param3': 24}
/*<506>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oye, olvida lo del papel que te pedí,\n¿vale? Hala, adiós...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf("Ah... ¡<r<Papel>>!... ¡Me has traído <r<papel>>!\n\n\n\nEspera, ya te abro... Pasa, pasa,\npor favor.")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf("Uuuf... Necesito <r<papel>>...\n\n\n\n<r<Un poco de papel>>, por caridad...\nAlguien, quien sea... Papel, por favor...\n\n\nMe sirve <r<cualquier cosa>>, mientras sea\nde <r<papel>>... Uuuf...")
/*<503>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
          	}
          }

          void entrypoint_115_14() {
/*< 31>*/ 	start()
/*< 33>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
          		goto flw_58
          	  case 1:
/*<141>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<163>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 142, 'param3': 13}
/*<142>*/ 			printf("\x0E\x01\x09\x04\x00\x1B1BOye, ¡ni se te ocurra! Esto no es\nun simple papelajo... ¡es una <r<carta>>!\n\n\n\x0E\x01\x09\x04\x17\x2500He puesto todo mi corazón en estas\nlíneas... Cada palabra, cada frase... \n¡Rebosa amor por los cuatro costados!\n\n\x0E\x01\x09\x04\x17\x1800¡Y tú pensando en usarla como papel\nhigiénico!...")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 167, 'param3': 6}
/*<167>*/ 			printf("A ver, escucha... La persona a la que va\ndirigida es una alumna de último curso,\n<b<Gracielle>>.\n\n\x0E\x01\x09\x04\x01\xC11¿Sa... sabes quién te digo? Esa chica\ntan mona que lleva siempre una <r<boina\nasí como muy redondeada>>.\n\n\x0E\x01\x09\x04\x17\x1800No vayas a dársela a <r<la loca del retrete>>,\n¿eh? ¡Que te conozco!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 168, 'param3': 6}
/*<168>*/ 			printf("Vale, aquí tienes la carta...\n¡Pero no la abras!")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf("¡Lo dejo todo en tus manos,\nLink! Si la cosa va\nbien, igual hasta te dejo entrar\nen la banda. Bueno, gracias y tal. ")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x08Pero bueno... ¿Se puede saber\nqué haces, mirando hacia el retrete?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf("¿Cómo? ¿Que había alguien pidiendo\npapel en el retrete por la noche?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf("Mpf... ¿Debo dar yo el primer paso\no esperar a que ella venga a mí?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf("¡Ahí va, mi madre! ¡Link,\nmenudo susto me has dado! Ten más\ncuidado, ¿vale?\n\n\x0E\x01\x09\x04\x17\x1800Anda, ¡lárgate y no me des más la lata,\nque estoy dándole vueltas a un asunto\nde vital importancia!\n[1]¿Cuál?[2]Te ayudo")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf("¿Cómo? ¿Y desde cuándo te interesas\ntú por mis problemas?\n\n\n\x0E\x01\x09\x04\x00\x1C¡Puf!... Eres la última persona a la\nque se me ocurriría pedirle consejo.\nPero bueno, ya que insistes...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("Quizá puedas ayudarme. Es cierto\nque tú y yo no nos caemos muy bien\nque digamos, pero también me consta\nque sabes tratar a las mujeres...\nMuy bien, ¡decidido! Link,\nte voy a encomendar una tarea.")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 158, 'param3': 6}
/*<158>*/ 					printf("Quiero que le des este <r<papel >>a cierta\npersona. Es un asunto muy importante,\n¡así que asegúrate de que lo reciba sin\nfalta!")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf("¿Lo dices en serio?\n\n\n\n\x0E\x01\x09\x04\x00\x1CHum... No sé si me gusta que metas\nlas narices en mis asuntos, pero ya\nque insistes...")
          					goto flw_157
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_15() {
/*< 41>*/ 	start()
/*<118>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*<110>*/ 		set_camera(4, 0)
/*<678>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 42, 'param3': 24}
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oye, olvida lo del papel que te pedí,\n¿vale? Hala, adiós...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 111, 'param3': 6}
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 53, 'param3': 6}
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oye, olvida lo del papel que te pedí,\n¿vale? Hala, adiós...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 46, 'param3': 6}
/*< 46>*/ 		printf("Uuuf... <r<Papel>>... Necesito <r<papel>>...\npor caridad...\n\n\nNo pido mucho; <r<solo un poco de papel>>...\n[1]Lo mismo\nesta carta...[2-]Se siente")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x0B\x04¿De verdad que me la das?...\nAy, qué maravilla.")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 			printf("Pero... esto parece una carta dirigida\na alguien... No sé yo si está bien usarla\npara...\n[1]Descuida[2-]Igual no")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 153, 'param3': 6}
/*<153>*/ 				printf("\x0E\x01\x09\x04\x00\x02Pues gracias. La usaré con sumo\ncuidado.\n\n\nEso sí, te agradecería que no me\npreguntases para qué la quiero.\nQue soy una señorita...\n\nBueno, hasta la vista, mi amable\nbenefactor.")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf("\x0E\x01\x09\x04\x05\x03Uuuf... Por favor... papeeel...")
          			}
          		  case 1:
          			goto flw_48
          		}
          	}
          }

          void entrypoint_115_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
          	  case 0:
/*<518>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 148, 'param3': 32}
/*<148>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 149, 'param3': 13}
/*<149>*/ 		printf("\x0E\x01\x09\x04\x00\x02Oh, querido mío... te amaré toda\nmi vida. ¡Aprovecharé que te tengo\na mano! Ji, ji, ji...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 		printf("\x0E\x01\x09\x04\x00\x04Anda, si eres el amable jovencito\ndel otro día...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf("\x0E\x01\x09\x04\x06\x02Me alegro de volver a verte. Gracias\na ti, he encontrado a mi príncipe azul.\n\n\nSí, creo que ya sabes quién es...\n\n\n\n\x0E\x01\x09\x04\x0C\x00Si no hubiera leído aquella carta que\nme diste, jamás habría sucedido.\n\n\n\x0E\x01\x09\x04\x06\x00¡Sus dulces palabras me han robado\nel corazón!")
/*<521>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ay, no puedo pensar en otra cosa\nque no sea él, de noche y de día...\nEstoy enamorada como una colegiala.")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf("\x0E\x01\x09\x04\x00\x02Oh, querido mío... te amaré toda\nmi vida. ¡Aprovecharé que te tengo\na mano! Ji, ji, ji...")
/*<520>*/ 		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
/*<655>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_115_18() {
/*<357>*/ 	start()
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1005, 'next': 358, 'param3': 24}
/*<358>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 359, 'param3': 32}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 360, 'param3': 32}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 826, 'param3': 32}
/*<826>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 822, 'param3': 47}
/*<822>*/ 	make_actor_do_something(3, 5)
/*<621>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': -256, 'next': 361, 'param3': 13}
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 828, 'param3': 16}
/*<828>*/ 	set_camera(31, 0)
/*<827>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 362, 'param3': 48}
/*<362>*/ 	set_camera(11, 0)
/*<365>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 363, 'param3': 15}
/*<363>*/ 	printf("Tú eres el autor de la carta, ¿no?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf("Pues... sí...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf("\x0E\x01\x09\x04\x1400\x09Ji, ji, ji... Se te da muy bien escribir\ncartas de amor, ¿sabías? ¡Muchas\ngracias!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x500\x11Ejem, no... no es para tanto...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf("Bueno, en... entonces...\n¿Cuál es tu respuesta?...")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf("\x0E\x01\x09\x04\x1400\x12¿Mi respuesta? Ay, claro, qué tonta...\nEn estos casos se suele responder, ¿no?")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf("\x0E\x01\x09\x04\x500\x2519Te... te lo ruego, ¡sal conmigo!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf("¡Alto ahí!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 386, 'param3': 6}
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf("Pu... puestos a salir con alguien...\n¿Po... por qué no sales conmigo?\n¡Me encantaría que fueses mi novia!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf("\x0E\x01\x09\x04\x500\x1B09¿Pero qué...? ¿Tú de dónde sales?\n¿Y quién te ha dado vela en este\nentierro?")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf("Esto... yo...\x0E\x01\x09\x04\x1400\x900 Me quedo con Coocker.")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf("\x0E\x01\x09\x04\x515\xC10¡Ja, ja, lo sabía! Gracielle solo tiene\nojos para... Oye, un momento...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf("\x0E\x01\x09\x04\x511\x1D1D¿Có... cómo?")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 605, 'param3': 6}
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf("\x0E\x01\x09\x04\x1201\xFF00¿Lo dices en serio? ¿De verdad que te\ngusto?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf("¡Pues claro! \x0E\x01\x09\x04\x1400\x900Me has hecho muy feliz.\nGracias...")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf("\x0E\x01\x09\x04\x500\x1D17Esto no puede estar pasando...\nNo es justo... ¿Por qué? ¿Por qué?...")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 638, 'param3': 6}
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf("\x0E\x01\x09\x04\x500\x18¡¡¡Buaaaah!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf("\x0E\x01\x09\x04\x1200\x01¡Link!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf("Desde el momento en el que me dijiste\nlo de la carta, lo tuve claro.\n\n\nMe di cuenta de lo que sentía por ella\nen realidad. De que ella era quien\nme gustaba.\n\n\x0E\x01\x09\x04\x1209\xC00Y me dije a mí mismo que no podía\npermitir que otro me la arrebatara.\n\n\n\x0E\x01\x09\x04\x1201\x400Si no llega a ser por ti, quizá nunca\nme hubiese dado cuenta de todo esto.\n\n\n\x0E\x01\x09\x04\x1208\x0B¡Muchas gracias, compañero!\nLa verdad es que no sé cómo\nagradecértelo...")
/*<651>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 641, 'param3': 42}
/*<641>*/ 	give_gratitude_crystals();
/*<642>*/ 	set_camera(20, 0)
/*<404>*/ 	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
/*<405>*/ 	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<659>*/ 	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<355>*/ 	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
/*<356>*/ 	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
/*<553>*/ 	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<699>*/ 	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<627>*/ 	zone_temp_flags[21 /* 0x3 20 */] = false;
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 793, 'param3': 42}
/*<793>*/ 	zone_temp_flags[20 /* 0x3 10 */] = true;
          }

          void entrypoint_115_01() {
          	start()
/*<  4>*/ 	set_camera(2, 0)
/*<  3>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 100, 'next': 1, 'param3': 15}
/*<  1>*/ 	set_camera(1, 0)
/*<  2>*/ 	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
/*<644>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
/*<645>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
          }

          void entrypoint_115_19() {
/*<100>*/ 	start()
/*<684>*/ 	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
          	  case 0:
/*<101>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<537>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<540>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F1BDesde aquello apenas puedo pegar ojo\npor las noches. Y casi mejor, porque no\ntengo más que pesadillas horripilantes.\n¿Estará la cama embrujada? \n¡Igual es la maldición de <b<Malton>>!\n¡Por favor, Link!\n¡Ayúdame!")
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F17¿Qué quieres, Link?\n¡Que sepas que no he olvidado la\nfaena que me hiciste!\n\nDesde aquello apenas puedo pegar ojo\npor las noches. Y casi mejor, porque no\ntengo más que pesadillas...\n\nNo sé qué puede estar pasando; es como\nsi la cama estuviera embrujada o algo\nasí... Igual es la maldición de <b<Malton>>.\n\n\x0E\x01\x09\x04\x1C\x1A18¡Por favor, Link!\n¡Ayúdame!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x17A la porra... Todo se ha acabado... \n\n\n\n\x0E\x01\x09\x04\x1C\x1F00¿Qué miras, Link?\n¿Has venido a mofarte en mi cara?\nAnda, haz el favor de dejarme en paz...")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf("\x0E\x01\x09\x04\x1B\x1F17¿Es que no vas a dejarme en paz,\nLink?... ¿No tienes\nbastante con lo que me has hecho?\n\n\x0E\x01\x09\x04\x1C\x1F00No sé quién será la loca del retrete,\npero solo de pensar que haya leído\nmi carta... Ay, qué desastre.")
          	}
          }

