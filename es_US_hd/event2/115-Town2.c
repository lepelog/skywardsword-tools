          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000a>¿Quiere venderme algún tesoro?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00120600>Esto es lo que acepto hoy:\n\n\n\n<color yellow<<string arg0>\n<color yellow<<string arg1><color yellow<\n<color yellow<<string arg2><color yellow<\n<color yellow<<string arg3><color yellow<>coloroff>\n<0x10009:0x00100600>¿Se ha decidido ya?\n[1-]Vendo[2]No vendo")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "Bueno, ¿qué desea vender?\n\n\n\nOpción 1: <color yellow<<string arg2>>coloroff>\nOpción 2: <color yellow<<string arg3>>coloroff>\nOpción 3: <color yellow<<string arg0>>coloroff>\nOpción 4: <color yellow<<string arg1>>coloroff>[1-]Opción 3[2-]Opción 4[3-]Opción 1[4-]Opción 2")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00120600>Ajá, en ese caso le daré <numeric arg0 0> <0x30004:0x01cd>\npor cada unidad.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00100600>Por lo que veo tiene <numeric arg4 0>.\n¿Cuántas desea vender?\n[1-]Una[2-]Cinco[3-]Todas[4]Ninguna")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<<0x10009:0x00120900>>coloroff>Así que me vende <numeric arg0 0>, ¿no es así?\nLe puedo dar <numeric arg1 0> <0x30004:0x01cd>. ¿Hay trato?\n[1-]Sí[2]Olvídelo")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0010080a>Muy bien. Tome, aquí tiene su dinero.")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								wait_frames(45)
/*<429>*/ 								printf(/* textboxtype: 0, unk: 1, line: 19 */ "Gracias. ¡Vuelva en otra ocasión!")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000f000c>De acuerdo. Bueno, ya sabe dónde\nencontrarme cuando quiera vender\nalgo.")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000f0409>¡No tiene suficiente!\n¿Está intentando burlarse de mí?")
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
/*<494>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000f0409>¿Le parece bien hacerme perder\nel tiempo a estas horas de la noche?\n\n\n¡Ni siquiera tiene una sola unidad de\nese tesoro! ¿Tiene alguna otra cosa que\ndesee vender?\n[1-]Así es[2]Olvídelo")
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
/*<490>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00120600>Ajá, en ese caso le daré <numeric arg1 0> <0x30004:0x01cd>\npor cada unidad.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120600>Ajá, en ese caso le daré <numeric arg2 0> <0x30004:0x01cd>\npor cada unidad.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00120600>Ajá, en ese caso le daré <numeric arg3 0> <0x30004:0x01cd>\npor cada unidad.")
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
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x0000000a>Sí, sí, adelante, adelante...\nBien, dígame... ¿qué desea?\n\n[1-]Comprar[2-]Bueno, yo...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x000f0409>Mire, para eso mejor será que venga\na mi establecimiento mañana.")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00130609>Bueno... ¿qué? ¿Es que no desea\nnada en particular?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "¿Cómo dice? ¿Pregunta por qué soy\nbrusco? ¿Y dice que durante el día\nparecía una persona distinta?\n\n<0x10009:0x0010060b>Bueno, supongo que estoy cansado\ndespués de tener todo el día la misma\nsonrisa bobalicona de vendedor.\n\nPero no piense mal de mí, por favor.\n\n\n\nEn fin, a lo que íbamos...\n\n\n\nSupongo que ha venido a hacer uso de\nla <color red<tienda de utensilios nocturna>coloroff>, ¿no?\n\n[1-]¿Qué es?[2-]Así es")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000009>Aaah, por lo que veo es su primera vez.\nEn fin... Está bien, se lo explicaré.")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120600>Digamos que durante la noche\nmi especialidad comercial cambia...\nEs decir, que me dedico a <color red<comprar\ntesoros>coloroff>.\nPero no compro lo primero que veo,\npues solo acepto los <color red<tesoros que\naparecen aquí señalados>coloroff>...\n\n<0x10009:0x00100600>Bien, ya podemos ir al grano.")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000f0409>¡Debería haber empezado por ahí!")
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
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 0, line: 194 */ "<0x10009:0x00000054>Zzz... zzz... Ay, no me despeines...\nZzz... zzz...")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00000017>Grrr... Dichoso <color blue<Cocu>coloroff>... ¡Te odio!\n¡Prometo que me vengaré!")
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
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030001>¡Vaya, <heroname>! Justo ahora\nestaba pensando en ti. Seguro que\nhe desarrollado algún nuevo sentido\n\"insectil\"...")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "Hoy quiero algún ejemplar de:\n<color yellow<<string arg0>>coloroff>\n<color yellow<<string arg1>>coloroff>\n<color yellow<<string arg2>>coloroff>\n¿Qué me dices?\n[1-]Vendo[2]Olvídalo")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "¿Qué quieres vender?\n<color yellow<<color yellow<[1-]<string arg0>[2-]<string arg1>[3-]<string arg2><color yellow<>coloroff>")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "Deja que piense... ¿Cuántas rupias\npodría darte por ejemplar?\nMmm... <numeric arg0 0>, y es mi última oferta.")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf(/* textboxtype: 1, unk: 0, line: 42 */ "Tienes <numeric arg4 0>... ¿Cuántos ejemplares\npiensas venderme?\n\n[1-]Uno[2-]Cinco[3-]Todos[4]Ninguno")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00030014>A ver, a ver... ¡Te doy <numeric arg1 0> <0x30004:0x01cd>!\n[1-]Bueno[2]Olvídalo")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0, line: 45 */ "Genial, aquí tienes el dinero.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0003ff04>Gracias. Tú sí que sabes. Se nota\nque no matarías ni una mosca...\n\n\nY eso es algo muy bueno, claro.\nAsí que ya sabes, <heroname>.\nVuelve cuando quieras.")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x0001ff13>Entonces nada...\n<0x10009:0x00000500>No te ha entrado el hormigueo\nde vender, ¿no?")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00120100>Te veo poco avispado...\n¿No ves que no tienes tantos?\nVamos, volveré a preguntártelo.")
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
/*<470>*/ 								printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0010ff0c>¡Pero si ni siquiera tienes un ejemplar\nde ese insecto! Te crees muy avispado,\n¿no?\n\n<0x10009:0x0001ff00>A ver, ¿tienes algún otro insecto que\nquieras vender?\n[1-]Pues sí[2]Olvídalo")
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
/*<468>*/ 								printf(/* textboxtype: 0, unk: 0, line: 38 */ "Deja que piense... ¿Cuántas rupias\npodría darte por ejemplar?\nMmm... <numeric arg1 0>, y es mi última oferta.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "Deja que piense... ¿Cuántas rupias\npodría darte por ejemplar?\nMmm... <numeric arg2 0>, y es mi última oferta.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00030001>¡Ah, eres tú, <heroname>! Hoy\nestoy con la mosca detrás de la oreja...\nSupongo que es la expresión apropiada,\ntratándose de mí... En fin...")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00030001>No sabes lo que me ha pasado...\nHace un rato, a medianoche, fui\na la cueva que hay tras la cascada.\n¿Y sabes lo que encontré?\nPues un montón de <color red<sacraliposas\n>coloroff>revoloteando en un lugar totalmente\nvacío. ¡No tengo idea de por qué\nestaban ahí todas juntas!\n¡No te imaginas cómo me pica la\ncuriosidad! Así que ya sabes, si te\ninteresa, yo que tú me asomaría a la\ncueva a medianoche.")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "¿Y bien? ¿Qué fantásticos insectos\nme has traído hoy?")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x0000ff01>Vaya, mira a quién tenemos aquí... \nSi es <heroname>... ¿A qué has\nvenido, si puede saberse?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<color red<<0x10009:0x00000300>>coloroff>¿Qué? ¿Preguntas qué estoy haciendo?\n\n\n\n<0x10009:0x00ff0114>Pues admirar mi colección...\nMi colección de <color red<insectos>coloroff>.")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		wait_frames(30)
/*<418>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0001ff00>Los insectos son increíbles. ¡Casi tanto\ncomo el gran Vilán! Incluso más,\ndiría yo...\n\nBueno, no tanto...<pause 30> Vilán siempre\nestará por encima de cualquier\ninsecto...")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Pero seguro que te haces una idea.\n<color red<Me encantan los insectos>coloroff>, y mi sueño\nes coleccionarlos todos.\n\nNo te imaginas lo mucho que\nme gustaría tener una isla llena\nde todo tipo de insectos...")
/*<424>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00ffff01>¡Ya sé!\n\n\n\nTe <color red<pagaré >coloroff>por todos y cada uno\nde los <color red<insectos >coloroff>que me traigas.\n¡En cuanto <color red<veas uno>coloroff>, ya sabes lo\nque tienes que hacer!\n¡Te aseguro que, en lo que respecta\na los insectos, pagaré cualquier precio!\n[1-]Está bien[2-]No, gracias")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0003ff04>Ji, ji, ji... ¡Con tu ayuda, mi colección\nde insectos será la mejor del mundo!")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "Por lo general, suelo estar aquí de\nnoche. Así que ya sabes dónde debes\nbuscarme cuando quieras venderme\nalgún insecto.\n<0x10009:0x00120100>Sin embargo, no creas que compro así,\nsin más. Todo <color red<depende de cómo esté\nese día>coloroff>. Por cierto, no se te ocurra\ndecirle nada de esto a Vilán.\nRecuerda; si deseas hablar de insectos,\ntendrá que ser <color red<durante la noche>coloroff>.\nDigamos que me gusta guardar\nlas apariencias...\n<0x10009:0x0003ff14>¿Está claro, <heroname>?\nAl final, espero que esto te guste\ntanto como a mí...")
/*<447>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "¡A ver qué tienes por ahí!")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff05>¡¿Pero qué...?! ¡Se lo voy a contar\ntodo a Vilán!")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000000>Zzzzzz... Zzzz...")
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
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 222 */ "<0x10009:0x00080909>Ji, ji... Te debo una, <heroname>.\nGracias a ti, tengo un novio genial.\nAunque me siento un poco mal\npor el pobre <color blue<Corvy>coloroff>... ")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 0, unk: 0, line: 221 */ "<0x10009:0x00000001>Gracias por traerme la carta,\n<heroname>.\n\n\n<0x10009:0x00010d14>Ay... ¿Cómo se tomaría <color blue<Cocu >coloroff>esto\nsi se llegara a enterar?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 1, line: 211 */ "<0x10009:0x00000014>Ay... ¿Qué tiene que hacer una para\nque <color blue<Cocu>coloroff> se fije en ella?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf(/* textboxtype: 0, unk: 0, line: 212 */ "<0x10009:0x00080404>¡Uah! ¡<heroname>!\n\n\n\n¿Qué... qué pasa? No habrás...\n<0x10008:0xfecd>No habrás oído lo que acabo de decir, ¿verdad?<0x10008:0x00cd>\n\n[1-]Toma esta\ncarta[2-]Claro\nque no...")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 0, unk: 1, line: 214 */ "<0x10009:0x00080906>¿Eh, una carta...? ¿Y es para mí?<pause 10>.<pause 10>.<pause 10>.<pause 10>\n¡Ay! ¿No será de <color blue<Cocu>coloroff>?\n[1-]Léela[2-]Olvídalo")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0, line: 216 */ "<0x10009:0x000e090a>Gra... gracias por traérmela... \nVamos a ver...")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						wait_frames(5)
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						wait_frames(10)
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf(/* textboxtype: 0, unk: 1, line: 217 */ "<0x10009:0x00100400>¿De quién será?...")
/*<594>*/ 						wait_frames(30)
/*< 81>*/ 						printf(/* textboxtype: 0, unk: 0, line: 218 */ "<0x10009:0x00100d00>Veamos...<pause 20> <0x10006:0xfecd>Buf, qué letra...<0x10006:0x00cd>\n\n\n\n<0x10009:0x00100400>Aunque eso es lo de menos, claro.\nLo importante es lo que diga...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						wait_frames(15)
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0, line: 219 */ "\"Querida Grusi:\nMi amor por ti es más grande que\nel ancho cielo y más puro que las\nnubes mismas\".\n<0x10009:0x00131200>\"Si accedes a salir conmigo, me harás\nel hombre más feliz sobre la faz de\nNeburia. A tus pies: <color blue<Corvy>coloroff>\".\n\n<0x10009:0x00000500>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.\n\n\n\n<0x10009:0x00010d00>Pero, oye... ¿Ese <color blue<Corvy >coloroff>no es uno de\nlos de la pandilla de <color blue<Vilán>coloroff>?\n\n\n<0x10009:0x000c0400>¿Ese tipo me ha escrito a mí\nuna carta de amor?\n\n\n<0x10009:0x000b0712>Lo que me faltaba...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						wait_frames(15)
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf(/* textboxtype: 0, unk: 1, line: 220 */ "<0x10009:0x00000009>Aunque la verdad es que es una carta\nmuy bonita. Se ve que le ha puesto\nmucho sentimiento.\n\nQuizá debería darle una oportunidad\na <color blue<Corvy>coloroff> y salir con él...\n\n\n<0x10009:0x00080900>¡Y que te lo crees! Es broma, bobo...\n\n\n\n<0x10009:0x00010d14>Ay... Pero... me pregunto qué pensaría\n<color blue<Cocu>coloroff> si se llegara a enterar de esto.")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 0, unk: 0, line: 215 */ "<0x10009:0x00080912>¿Pero qué te pasa?\n¡No te burles de mí!")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 213 */ "<0x10009:0x00010406>¿Qué pasa, <heroname>?\nA veces parece que estás planeando\nalgo...")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 0, unk: 0, line: 206 */ "<0x10009:0x00000001>Oye, <heroname>... ¿Puedo\npreguntarte qué opinas de <color blue<Cocu>coloroff>?\n[1-]Buen tipo[2-]¿Por qué?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 207 */ "<0x10009:0x000b070a>¿Verdad que sí? Es agradable, atento,\nsiempre puedes confiar en él...\n¡Y además es guapo! ¿Qué más puede\npedir una chica?\n<0x10009:0x000c0416>Ejem... Esteee... Vaya, creo que\nme he dejado llevar por la emoción.\nNo sé qué me ha pasado.\n\n<0x10009:0x00080400>Perdona, no pretendía molestarte\ncon mis tonterías.\n")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 0, unk: 1, line: 208 */ "<0x10009:0x00010406>¿Cómo? Pues verás... \n\n\n\n<0x10009:0x00080416>Na... nada, olvídalo. No sé por qué te\nhe preguntado algo así. Soy una boba...")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0, line: 210 */ "<0x10009:0x00001001>¡Ese uniforme te sienta genial!\n\n\n\n<0x10009:0x0000040a>Aunque todavía te falta mucho para\nllegar a la altura de Cocu, claro...\n¡Ji, ji!")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 0, unk: 0, line: 209 */ "<0x10009:0x00010404>¡Vaya...<pause 20> <heroname>!\n¡Felicidades por pasar de curso!\n\n\n<0x10009:0x00080400>¡Así que el uniforme de caballero de\neste año es verde! <pause 20>Me gusta mucho. \n\n\n<0x10009:0x000a1000>Si Zelda te viera vestido así, estaría\norgullosa de ti...\n\n\n<0x10009:0x00000406>¡No te preocupes! Seguro que está\nbien. Ya verás como vuelve antes\nde lo que tú crees.")
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
/*<105>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00000e08>Ahora ya puedo volver a dormir como\nuna persona normal. ¡Muchas gracias!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 63 */ "<0x10009:0x00000008>Muchas gracias. No te imaginas\nlo que todo esto significa para mí.")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000e0d>¡E... eso es...! ¡Su <color yellow<sonajero>coloroff>!\n¡Lo has encontrado!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						wait_frames(10)
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						wait_frames(60)
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 60 */ "¡Sííí, ya está! ¡Bueno, a mimir!<0x10005:0x00780000>")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000e08>¡Qué alegría! ¡Ya verás qué diferencia!\nSeguro que ahora duerme como...\n¡como un bebé!\n\n¡Sí! ¡Y yo no pienso despertarme en una\nsemana por lo menos!\n\n\n<0x10009:0x00100e00>¡No sabes cuánto te lo agradezco!\n¡Te debo una! ¡Y muy grande!")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x000d0f09>Ojalá una persona gentil me ayudara\na encontrar el <color yellow<sonajero >coloroff>de mi bebé...\n\n\n<color red<<0x10009:0x00100000>Un pájaro se lo llevó>coloroff>, así que debe\nde seguir todavía por aquí, en <color red<algún\nlugar de la ciudad>coloroff>.\n\n<0x10009:0x000d0000>Ay, no, seguro que hoy tampoco logro\ndormir... Ni siquiera un poquito...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				wait_frames(75)
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10006:0xfccd>Ay...<pause 45><0x10006:0x00cd> <0x10009:0x000d0000>Ay...<0x10005:0x00410000>")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "Uf... Hoy tampoco he dormido nada...\n[1-]¿Qué te pasa?[2-]Se te ve cansado")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00100f06>Vaya, gracias por el interés.")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 1, line: 54 */ "<0x10009:0x000d0f00>Como ves, últimamente mi hijo se pasa\ntoda la noche llorando y no hay\nforma de conseguir que se duerma.\n\nJamás había tenido problemas para\ndormir, pero desde que perdió eso,\nnada...\n[1-]¿Eso?[2-]No será...")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00100f01>Su <color yellow<sonajero>coloroff>...")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000f00>En cuanto lo ve deja de llorar, pero\npor desgracia lo perdió el otro día.\n<color red<Se lo llevó un pájaro>coloroff>. Supongo que lo\nconfundiría con comida o algo así.\n<0x10009:0x000e0f00>Por supuesto, es imposible que se lo\nhaya comido, así que todavía <color red<debe de\nestar en algún lugar de la ciudad>coloroff>.\n\nPero por más que lo busco, no logro\nencontrarlo por ninguna parte.\n\n\n<0x10009:0x00000009>Si hubiera alguien tan amable\nde ayudarme a buscarlo...")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00100f04>Ah, ya veo que lo sabías.\nPues sí, se trata de su <color yellow<sonajero>coloroff>.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00100f07>Por lo que veo, te has dado cuenta...")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00000003>¡No consigo que mi hijo se duerma!\n¡Estoy perdido! ¡¿Qué voy a hacer?!\n[1-]Es horrible[2-]¿Y tu esposa?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000004>Muy cierto... ¡Pero en realidad\nno importa! ¡Sigue siendo mi hijo\na pesar de todo!\n\nTú todavía no tienes hijos, pero algún\ndía lo entenderás, algún día...")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000007>Ah, mi esposa<pause 10>.<pause 10>.<pause 10>. Como comprenderás,\ndespués de llevar el negocio todo el\ndía, está cansadísima.\n\n<0x10009:0x000d0f06>Así que por lo menos durante la noche\nla dejo descansar...")
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
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 243 */ "<0x10009:0x000c0401>¡Eh, <heroname>! Gracias a ti\ntengo una novia maravillosa.\n¡Te debo una, compañero!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf(/* textboxtype: 0, unk: 0, line: 242 */ "<0x10009:0x00000018>Mmm...\n\n\n\n<0x10009:0x000f1100>Si tú sintieras un interés especial, por\ncualquier motivo, en saber cómo\nacaba esa historia... No estaría mal\nvisto que fueras a preguntarle, ¿no?\n<0x10009:0x00110e00>No lo digo porque yo tenga curiosidad,\n¿eh? Es que me gusta estudiar el amor\ndesde un punto de vista, digamos...\nteórico.")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0, line: 234 */ "<0x10009:0x00000001>¡Hola! ¿Qué se te ofrece,\n<heroname>?")
/*<545>*/ 			printf(/* textboxtype: 0, unk: 1, line: 235 */ "<0x10009:0x00010c09>¿Cómo? ¿Que alguien le ha mandado\na <color blue<Grusi >coloroff>una carta de amor?...\n\n\n<0x10009:0x000f1100>Va... vaya... Interesante...\n\n\n\n<0x10009:0x000c0c54>Y, ejem, este... ¿Te ha dicho ella qué\nes lo que piensa hacer al respecto?\n\n\n[1-]Salir con él[2-]No sé")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 0, unk: 0, line: 236 */ "<0x10009:0x00110e53>¡¿Cómo?! ¡No puede ser!...")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 0, unk: 1, line: 238 */ "<0x10009:0x00110e09>Eh... no sé por qué he dicho eso.\nDespués de todo, solo somos amigos...\n<color blue<Grusi>coloroff> puede hacer lo que ella quiera,\npor supuesto.\nSi quiere salir con alguien, no es\nasunto mío...\n\n\n<0x10009:0x000c0c00>Pero lo que no puedo permitir es\nque eso afecte al ambiente dentro\nde la academia... ¡Todos somos\ncompañeros, al fin y al cabo!\n<0x10009:0x00080c00>Tú me entiendes... Lo ideal es elegir\nlibremente a quién amar, ¿no?\nDe hecho, si no es así, no creo que\npueda considerarse amor verdadero.\n<0x10009:0x000b0c00>Mi deber es asegurarme de que\nGrusi elija su amor sin ningún\ntipo de trabas ni condicionantes.\n\n<0x10009:0x00110e00>¡Porque yo también tengo derecho\na amar a quien quiera! ¡Claro que sí!\n¡Y nadie me lo puede negar!\n\n<0x10009:0x000c0c1b>¿Tengo razón o no, <heroname>?\n[1-]No sé[2-]¿Ella te gusta?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 240 */ "<0x10009:0x000f1152>Bu... bueno, mejor lo dejamos...\n¡Ahora no es momento para hablar\nde estas cosas!")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 0, unk: 1, line: 241 */ "<0x10009:0x00101117>En fin, no importa. Oye...\n\n\n\n\n<0x10009:0x000f0c00>¿Me harías un gran favor?\nSi pudieras enterarte de qué es\nlo que decide finalmente Grusi...\n¡Pero trata de ser discreto!")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 0, unk: 0, line: 239 */ "<0x10009:0x00110e53>¡No... no digas tonterías,\n<heroname>!\n\n\n<0x10009:0x00120c00>Qué cosas se te ocurren...\n¡Me temo que has malentendido\ntodo lo que he dicho!\n")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 237 */ "<0x10009:0x000f1118>Ya, cómo vas a saberlo, claro. Pu... pues\nme gustaría enterarme, la verdad...")
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
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00071602>¡Verás como pronto seré muy fuerte!\n¡Vuelve cuando quieras y verás\nqué cambio!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000011>Uffff... Uffff... <heroname>...\neso que llevas ahí no será una <color yellow<poción\nde resistencia>coloroff>, ¿verdad?\n\nPorque no sabes el favor tan grande\nque me harías...\n[1-]Toma[2]Lo siento")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x0000000b>¡¿En serio?! ¡Muchas gracias!\n¡Te debo una!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					wait_frames(4)
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					wait_frames(135)
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					wait_frames(20)
/*<264>*/ 					printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000010>Y... ¡energía renovada!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000012>Vaya... ¿pero estás seguro de que\nahora podré ponerme fuerte como\nun neburí?\n[1-]Depende de ti[2-]¡Pues claro!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000009>¡¿En serio?! ¡Estupendo!\n¡Me dedicaré a entrenar en cuerpo\ny alma! ¡Se acabaron los lloriqueos!")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00001800>Gracias, <heroname>.\n¡Verás como pronto seré muy fuerte!\n\n\n<0x10009:0x00151800>¡Muy bien, voy a continuar!\n¡Vuelve por aquí cuando quieras y\nverás qué cambio!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00001609>¿En... en serio? Vaya, has sonado\ntan convincente que incluso me veo\ncon posibilidades de lograrlo...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000011>Va... vaya... Lo siento mucho, no\ndebería haberte molestado con\nmis problemas...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000003>¡No... no te preocupes! ¡No pienso\nabandonar tan pronto esta vez!")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000011>Uffff... uffff... Ya no puedo más...\n\n\n\nSi al menos tuviera <color red<una poción para\naumentar la resistencia>coloroff>...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>¡Pero no, nada de eso! ¡Lo que tengo\nque hacer es esforzarme más!\n\n\n¡Y además tengo que conseguirlo\nyo solito!")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000010>Ufff... arfff... pfuuu...\n\n\n\n<0x10009:0x00101600>Ah, buenas noches, <heroname>...\n\n\n\n¿Que qué estoy haciendo?\nPues ya ves, entrenando...\n\n\nNo soportaba más estar tan debilucho\ny enclenque, así que intento ponerme\nun poco en forma.\n\nPero como me da vergüenza que los\ndemás vean que no puedo levantar ni\nun pequeño barril, entreno de noche...\n\n<0x10009:0x00001711>Aunque me parece que esto no\nfunciona... Me canso demasiado\ny en dos segundos lo dejo.\nNo puede ser...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x0000000b>¡Oye, <heroname>!\nEso que llevas ahí no será una <color yellow<poción\nde resistencia>coloroff>, por casualidad...\n\nPorque no sabes el favor tan grande\nque me harías...\n[1-]Toma[2]Lo siento")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "Ay... Si al menos tuviera alguna <color red<poción\npara aumentar la resistencia>coloroff>...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>¡Pero no, nada de eso! ¡Lo que tengo\nque hacer es esforzarme más!\n\n\n¡Y además tengo que conseguirlo\nyo solito!")
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
/*<682>*/ 				printf(/* textboxtype: 0, unk: 1, line: 190 */ "<0x10009:0x00000008>¿Qué quieres, <heroname>?...\nEstoy ocupado pensando en Grusi,\n¿o es que no me ves?\n\nSi tienes algo que decirme, vuelve\npor la mañana. ¡Vamos, lárgate!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 0, unk: 1, line: 193 */ "<0x10009:0x00000010>Je, je, je... ¡Se acabó la tiranía de\n<color blue<Vilán>coloroff>! Ahora este cuarto es mío\ny solo mío.")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002>¡<heroname>, ya verás! ¡Ganaré\ntanto músculo que cuando me veas\nte vas a llevar un susto de muerte!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00000010>Ufff... ufff...\n\n\n\nOye, <heroname>...\nNo tendrás por ahí un poco de <color yellow<poción\nde resistencia>coloroff>, ¿verdad?\n[1-]Toma[2]Olvídalo")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x0000000b>¿En serio? ¡Muchas gracias!\n¡Te debo una!")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					wait_frames(4)
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					wait_frames(135)
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					wait_frames(20)
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000010>Ufff... ¡He vuelto a la vida!\n¡Ya no podía más del cansancio!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000012>Aunque a veces me preocupo bastante\nporque parece interminable,\nde verdad.\n\n¿Hasta cuándo tengo que seguir\npara ponerme tan fuerte como tú,\n<heroname>?\n\n¿Cuántas flexiones crees que harían\nfalta para no parecer un debilucho?\n\n[1-]Unas mil[2-]Muchas")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x00000053>¡¿Ta... tantas?!\n\n\n\n<0x10009:0x00100e00>Vaya... Por lo visto el camino hacia\nla fuerza es bastante duro...")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00011600>¡Entendido! ¡Ahora que sé lo que tengo\nque hacer, mejoraré muy pronto!\n\n\n<0x10009:0x00001800>¡Vuelve cuando quieras para ver el\nresultado!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000007>¿Muchas? ¡Pues claro!\n¡Ahora lo entiendo!\n\n\n<0x10009:0x00070800>Lo que estás tratando de decirme es\nque bastará con hacer unas cuantas\nhasta perder la cuenta, ¿no?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000011>Ah, bueno... Siento mucho haber sido\ntan descarado...")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf(/* textboxtype: 0, unk: 1, line: 91 */ "¡No te preocupes! ¡Tengo que aprender\na valerme por mí mismo!")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000011>Uffff... uffff... Ya no puedo más...\n\n\n\nSi al menos tuviera <color red<una poción para\naumentar la resistencia>coloroff>...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>¡Pero qué estoy diciendo! ¡Así no!\n¡No puedo estar siempre dependiendo\nde los demás!\n\n¡Tengo que conseguirlo yo solito!")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000010>Uffff... Uffff... Ah, eres tú,\n<heroname>.\n\n\n<0x10009:0x0c10ff00>Desde lo del otro día no he dejado de\nentrenar, pero últimamente me siento\nun poco débil.\n\n¿Crees que es posible que se trate de\ncansancio acumulado?")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x0000000b>¡Oye, <heroname>!\nEso que llevas ahí no será una <color yellow<poción\nde resistencia>coloroff>, por casualidad...\n\nMe preguntaba si no te importaría\nvolver a darme un poquito...\n[1-]Toma[2]Olvídalo")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 0, unk: 0, line: 86 */ "Oye, <heroname>...\nNo tendrás por ahí un poco más de\n<color yellow<poción de resistencia>coloroff>, ¿verdad?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>¡Pero qué estoy diciendo! ¡Así no!\n¡No puedo estar siempre dependiendo\nde los demás!\n\n¡Tengo que conseguirlo yo solito!")
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
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 201 */ "")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf(/* textboxtype: 0, unk: 1, line: 196 */ "<0x10009:0x00000002>¡Oye, <heroname>! Le diste\nmi carta a Grusi, ¿verdad?\n[1-]Pues...[2-]¿Qué carta?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 0, line: 197 */ "<0x10009:0x00111f1d>¡¿Cómo?! ¿Dices que se la diste...\na la loca del retrete?")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 0, unk: 1, line: 199 */ "<0x10009:0x00011f00>¡Te lo dije! ¡Te advertí que era una\ncarta para Grusi!... ¡Me prometiste\nque se la darías a ella!\n\n<0x10009:0x001a1f17>¡Lo has estropeado todo!\n¿Crees que tienes derecho a jugar \ncon los sentimientos de la gente?\n¡Ojalá te devore un neburí salvaje!\nNo quiero volver a verte en mi vida.\n¡Te odio, <heroname>!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf(/* textboxtype: 0, unk: 0, line: 200 */ "<0x10009:0x00001f18>¡¡¡Nooooo!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				wait_frames(1)
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00151f12>¿Eh? ¿¡Cómo que qué carta!?\n\n\n\n<0x10009:0x00111b00>Oye... no se la habrás dado a la loca\ndel retrete, ¿verdad? ¡Porque solo\na ti se te ocurriría hacer algo así!")
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
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0000000f>Buf... Me pregunto si <color blue<Grusi>coloroff> habrá\ncomprendido lo que siento por ella... \n\n\n<0x10008:0xffcd><0x10009:0x00011f00>¿Qué debo hacer? Se me va a salir el corazón\npor la boca de tantos nervios...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf(/* textboxtype: 0, unk: 0, line: 191 */ "<0x10009:0x00000013>¡¿Cómo?! ¿Dices que... que ya le has\ndado la carta a <color blue<Grusi>coloroff>...?\n\n\n<0x10009:0x00012500>¡Ay, qué nervios! ¿Y ahora qué hago?...\nDebería ir a hablar con ella, a ver qué\nme responde, ¿no?\n\n<0x10008:0xffcd><0x10009:0x00011f00>Qué vergüenza...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000002>¿Lo entiendes, <heroname>?\nTienes que darle la carta a la alumna\nde la <color red<boina>coloroff>. \n\n<0x10009:0x00011b00>Como se la des a <color red<la loca del retrete>coloroff>...\n¡no sé lo que te hago!")
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
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "¡Uoooooooh!")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "3985... 3986...\n3987... 3988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 0, unk: 1, line: 67 */ "Nuooh... guoooh...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10006:0xfecd>55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 0, unk: 0, line: 65 */ "Ung... guh... goh...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10006:0xfccd>5... 6... 7...")
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
/*<321>*/ 			printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x0015180a>¡Todavía tengo que mejorar!\n¡Y no pienso parar hasta que consiga\nlevantar un barril con un solo dedo!")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x0015180a>Lo estoy consiguiendo...\n¡No hay que preocuparse!")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0015190a>Lo estoy consiguiendo...\n¡No hay que preocuparse!\n\n\n<0x10009:0x00011600>¡Eh, <heroname>! ¡Llegas en el \nmomento justo! Hay una cosa que\nme gustaría preguntarte.\n\n<0x10009:0x00071800>Verás, hace un rato intenté levantar un\nbarril, y lo conseguí con un solo brazo.\n\n\n<0x10009:0x00001600>¿Crees que soy un poco más fuerte\nque antes?\n\n\n<heroname>, ¿qué te parece?\n¿Me ves más fuerte?\n[1-]¡Mucho![2-]Claro")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x00071809>¿Eh? ¡No seas exagerado!\nPero lo cierto es que estoy muy\ncontento, la verdad.")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00001600>Todo esto lo he conseguido gracias a ti,\n<heroname>.\n\n\n<0x10009:0x00011900>Si no me hubieras animado todo este\ntiempo, jamás lo habría logrado.\n\n\n<0x10009:0x0007180b>¡Muchísimas gracias!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x0000180b>¿En serio? ¡Muchas gracias!\n¡No sabes lo contento que estoy!")
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
/*<789>*/ 				printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Ah, <heroname>, muchas gracias\npor salvar a mi hermana. Estoy\nen deuda contigo.")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 0, unk: 1, line: 121 */ "<0x10009:0x000b0e09>¡Hola, <heroname>! ¡Mi hermana\nha regresado sana y salva!\n\n\n<0x10009:0x000a0400>La verdad es que estaba muy\npreocupado, pero al final todo\nha salido bien.\n\n<0x10009:0x000b0400>¡Y todo gracias a ti, <heroname>!\n¡Te debo una!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x000b0e09>¡<heroname>, mi hermana está\na salvo!\n\n\n<0x10009:0x000a0400>No sé qué habría hecho si le hubiera\npasado algo... ¡Me he quitado un \npeso de encima!\n\n¿Cómo? ¿Dices que fuiste tú el que\nle llevó la medicina?<pause 20> ¿En serio?\n<0x10009:0x000b0400>¡Muchísimas gracias!\n\nEsto no es ni la mitad de lo que\nte mereces por lo que has hecho,\npero acéptalo, por favor.")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x000b0a05>Vaya, qué lástima... Quería darte esta\n<color yellow<botella vacía>coloroff>, pero al parecer no te\nqueda espacio libre en la alforja ni\ntampoco en la consigna...\nBueno, puedo guardártela. Si consigues\nhacer algo de espacio, ven a verme\nmás tarde y será toda tuya.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf(/* textboxtype: 0, unk: 1, line: 124 */ "<0x10009:0x000b0400>Este artículo sirve para una gran\nmultitud de cosas. ¡Gracias, gracias!")
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
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x000b0409>¿Qué pasa, <heroname>?\n¡Tienes que llevarle esas <color yellow<<color yellow<esporas de\nchampiñón<color yellow< >coloroff>a mi hermana cuanto antes!\n<0x10009:0x000a0400>¡Cuento contigo!")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 0, unk: 1, line: 118 */ "<0x10009:0x000b0406>¿Eh? ¿Dónde has metido las <color yellow<esporas de\nchampiñón>coloroff>? ¿Aún no se las has dado?\n\n\n<0x10009:0x000a0400>Bueno, si se te acaban puedes <color red<sacar\nmás de los champiñones >coloroff>que crecen\nen una isla flotante cercana.\n\n¡Cuento contigo, <heroname>!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x000b0409>Si has hecho un poco de espacio en\ntu alforja, podrás llevarte esto.\n\n\n<color yellow<<0x10009:0x000a0400>>coloroff>Con estas <color yellow<esporas de champiñón>coloroff>,\nseguro que el neburí se cura\nenseguida de sus heridas.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x0000050d>¡Pero si no puedes llevar más cosas\nencima! <0x10009:0x00000400>¡Haz algo de espacio en\ntu alforja y vuelve después!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000b0404>Si las usa, se pondrá bien enseguida y\npodrá volver por sí mismo. <0x10009:0x00000c00>¡Tienes que \nllevárselas a mi hermana! <0x10009:0x00000400>Y luego te\npuedes quedar con la <color red<botella vacía>coloroff>.\n¡Cuento contigo, <heroname>!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10009:0x000b050d>¡¿Cómo?! ¡¿Dices que has visto\na mi hermana?! ¡¿Y que su neburí\nestá herido y no puede volar?!\n\n<0x10009:0x000a0c00>¡Entonces tienes que llevarle esto\nenseguida! Toma, son<color yellow<<0x10009:0x00000400> esporas de\nchampiñón>coloroff>. Seguro que se cura muy\npronto.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x000a0c12>Qué voy a hacer, qué voy a hacer...\n\n\n\nSiempre le digo que conviene llevar\nuna poción por si le ocurre algo\nal neburí...\n\nY justo el día que se la deja en casa,\nle ha pasado esto...")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10009:0x000d0400>Mi hermana decía que sentía mucha\ncuriosidad por esa <color blue<isla con forma de\nruleta>coloroff>. ¡Creo que se ha ido hacia el\n<color red<suroeste>coloroff>!")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00010400>¿Me vas a ayudar a buscarla,\n<heroname>?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x000a0c12>No puede ser... Qué problemón...\nQué problemón...\n[1-]¿Qué pasa?[2-]Cálmate")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000411>Vaya, gracias por escucharme,\n<heroname>. Ojalá todo el mundo\nfuera tan amable como tú.")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000400>Verás... <color red<Mi hermana pequeña >coloroff>se fue\nhace un rato a dar un paseo con su\nneburí y no ha vuelto todavía.\n\nCuando vi que tardaba demasiado,\nempecé a buscarla por todas partes,\npero... ni rastro de ella.\n\n<0x10009:0x000b0500>Espero que no le haya pasado nada,\npero estoy tan preocupado...")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10009:0x00000411>Oye, <heroname>...\n¿Por qué no me ayudas a buscarla?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x000d0400>Me habló sobre una <color blue<isla con forma\nde ruleta >coloroff>que apareció hace poco.\n¡Se ha ido hacia el <color red<suroeste>coloroff>!")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00010400>¡Cuento contigo, <heroname>!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x000b0500>¡¿Cómo que me tranquilice?!\nAh, lo siento... No quería gritarte...")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x000b0409>¡La isla de la Diosa ha desaparecido!\n¡Es terrible!\n\n\n<0x10009:0x000a0400>Sin duda esto no presagia nada bueno,\nes obvio...")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x00010400>Ahora que me acuerdo, hace un rato he\nvisto a <color blue<Vestro>coloroff> volando hacia el cúmulo.\nIba muy contento, decía no sé qué\nde un <color red<insecto muy raro>coloroff>.\n¡Este chico!... Si no cambia, va a volver\na tener problemas con los exámenes.\nDebería preocuparse menos por los\ninsectos y estudiar un poco más.")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf(/* textboxtype: 0, unk: 0, line: 137 */ "<0x10009:0x00010400>Por cierto, ¡<color blue<Vestro >coloroff>dice que tiene\npensado construir un paraíso de\ninsectos dentro de una isla del <color red<gran\ncúmulo>coloroff>!")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x000a0a00>Por cierto, tu compañero ese de la\nacademia de caballeros, el tal <color blue<Vestro>coloroff>...\n\n\nDice que encontró el paraíso de\nlos insectos <color red<dentro del gran cúmulo>coloroff>.\nSe nota que le gustan esos insectos...\n\n<0x10009:0x000b0400>De todas formas, me pregunto qué\ntendrá pensado hacer por allí...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf(/* textboxtype: 0, unk: 0, line: 134 */ "<0x10009:0x00000001>¿Has oído el estruendo ese tan grande?\nParecía como si la isla fuera a estallar\nen pedazos. ¿Qué habrá pasado?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10009:0x00000001>Oye, hace un momento, en la plaza... \nNo habrás hecho de las tuyas, ¿verdad?\nEs que al ver cómo el cielo se oscurecía\nasí, tan de repente...")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x000a0405>¿Por qué les gustará tanto este lugar\na las mariposas? Aquí no hay nada...")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf(/* textboxtype: 0, unk: 0, line: 131 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nSiempre que te veo tienes prisa\npara llegar a algún sitio, ¿eh?")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n¿No te parece que hace mucho que\nno vemos juntos a esos tres granujas\nque tú y yo sabemos?\nMe pregunto si se habrán decidido\na estudiar de una vez por todas...")
          							  case 1:
/*<785>*/ 								printf(/* textboxtype: 0, unk: 1, line: 130 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nAcabo de llegar de visitar esa\nmisteriosa isla de la ruleta de la\nque me habló mi hermana.\nHabía un tipo muy raro que no dejaba\nde hablar de una <color red<ruleta >coloroff>que se le había \ncaído y había desaparecido bajo las\nnubes.\nNo sé cómo piensa que va a poder\nrecuperarla... ¡Yo daría la ruleta\npor perdida!")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10009:0x000a0405>¡¿Has visto eso?! ¡¿Lo has visto?!\n¡De repente ha surgido un rayo de\nluz desde aquella torre hacia el gran\ncúmulo!\nEs como si estuviera pidiendo que\nalguien lo siga hasta allí...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000001>¡Hola, <heroname>!\nÚltimamente no se ve a Zelda por\naquí... ¿Sabes si le ha pasado algo?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf(/* textboxtype: 0, unk: 1, line: 127 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n\n\n\n<0x10009:0x000a0400>¿Cómo dices?, ¿<color red<dos hojas de viento>coloroff>?<pause 30>\n¡No me cuentes acertijos raros, que no\nsé de esas cosas! ¡Pregúntale a un\n<color red<vidente>coloroff> o algo así!")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Ah, <heroname>, muchas gracias\npor salvar a mi hermana. Estoy\nen deuda contigo.")
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
/*<818>*/ 		printf(/* textboxtype: 0, unk: 1, line: 232 */ "<0x10009:0x000c0401>¿Te has enterado?\n¡La isla de la Diosa se ha hundido!\n<pause 30>Es la peor tragedia en la historia\nde Neburia...\n<0x10009:0x00110e00>Aunque puede que la Diosa esté\nintentando decirnos que debemos\nandar nuestro propio camino sin\nsu protección.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf(/* textboxtype: 0, unk: 0, line: 233 */ "<0x10009:0x000c040b><0x10008:0xfecd>Además, yo ya tengo mi propia diosa...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf(/* textboxtype: 1, unk: 0, line: 231 */ "<0x10009:0x00001101>¡<heroname>!\nTe voy a contar una cosa, pero tienes\nque prometerme que no se lo vas a\ncontar a nadie, ¿de acuerdo?\n<0x10009:0x000c0400>Salí a dar un paseo y, de repente,\nemergieron unas extrañas ruinas\nbajo la isla de la Diosa.\n\n<0x10009:0x00110e00>¿Qué está ocurriendo en Neburia?\n¡Ya no reconozco este lugar!")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 0, unk: 1, line: 229 */ "<0x10009:0x00000005>¡Hola, <heroname>!\nMe alegra verte con tan buena\ncara últimamente.\n\n<0x10009:0x0000040b>¡Que no decaiga el ánimo! <pause 20>\nYa verás como Zelda volverá antes\nde lo que piensas. ¡Ten confianza!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 0, unk: 0, line: 230 */ "<0x10009:0x00000001>¡Oye, <heroname>!\n¿Qué tal estás?\n\n\n<0x10009:0x000c1400>¿Cómo dices? ¿La Trifuerza\nescondida por la Diosa?...\n \n\n<0x10009:0x00101100>Mmm... Me temo que yo no te voy\na servir de mucha ayuda...\n\n\n<0x10009:0x00081400>Será mejor que les preguntes a los\nprofesores sobre ese tema.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 0, unk: 1, line: 229 */ "<0x10009:0x00000005>¡Hola, <heroname>!\nMe alegra verte con tan buena\ncara últimamente.\n\n<0x10009:0x0000040b>¡Que no decaiga el ánimo! <pause 20>\nYa verás como Zelda volverá antes\nde lo que piensas. ¡Ten confianza!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0, line: 228 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n¿Qué tal estás, compañero?\n¿Un poco más animado?\n\n<0x10009:0x00091400>Aunque no lo creas, yo también tengo\nmis problemas... ¡y bastante grandes!\nPero delante de los amigos me hago\nel fuerte, para no preocuparlos.\n<0x10009:0x00110400>Y así, poco a poco parece que\nlos problemas se van diluyendo.\n¡O al menos eso creo! A mí me\nfunciona bastante bien.")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 0, unk: 0, line: 227 */ "<0x10009:0x00000001>¡Hola, <heroname>!\n¡Felicidades por pasar de curso!\nY ya veo que estrenas uniforme...\n¡Te sienta muy bien!\n<0x10009:0x00101100>Pero bueno, ahora no es momento\npara frivolidades... Todavía no puedo\ncreer que Zelda haya desaparecido.\n\n<0x10009:0x000c1400>Sé que ella y tú eran buenos amigos,\nasí que me imagino cómo debes\nde sentirte.\n\n<0x10009:0x00081400>Pero no te desanimes; ten confianza\ny sé positivo. ¡Estoy convencido\nde que sigue viva y de que volverá\npronto! Ánimo.")
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
/*<207>*/ 				printf(/* textboxtype: 0, unk: 0, line: 149 */ "<0x10009:0x0000000b>¡Son las <color yellow<esporas de champiñón>coloroff>!\nMenos mal que has podido traerlas...\n\n[1-]Tómalas[2]Lo siento")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 0, unk: 1, line: 151 */ "<0x10009:0x000b0409>¡Muchas gracias! Con esto podré curar \nlas heridas de mi pájaro.")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					wait_frames(1)
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					wait_frames(45)
/*<233>*/ 					printf(/* textboxtype: 0, unk: 0, line: 152 */ "<0x10009:0x00000004>Ya verás como se pone bien en menos\nque canta un neburí.")
/*<237>*/ 					wait_frames(30)
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10009:0x00000009>Menos mal... Empezaba a temer\nque ya fuera demasiado tarde.\n¡Pero has venido justo a tiempo!\n\nMi pájaro y yo te debemos la vida...\n¡Muchas gracias!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf(/* textboxtype: 0, unk: 1, line: 154 */ "<0x10009:0x00000004>Bueno, será mejor que me vaya.\n¡Nos vemos en Neburia!")
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
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x00001113>Cómo... ¿Cómo puedes ser tan cruel?")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x0000050b>Entonces, ¿me das las esporas de\nchampiñón? Con ellas, mi pequeño\nse curará de inmediato.\n[1-]Aquí tienes[2]Lo siento")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf(/* textboxtype: 0, unk: 1, line: 148 */ "<color red<<0x10009:0x00000001>M>coloroff><color red<<color red<i hermano tiene l<color red<a medicina para\nel neburí>coloroff>... Ve a buscarlo, ¡deprisa! \n\n\nYo te espero aquí junto a este pequeño.\nPor favor, ¡tienes que ayudarnos!")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "<0x10009:0x0000050b>¡Hola, <heroname>!\n¡Llegas justo a tiempo!\n\n\n<0x10009:0x00120200>Verás, mi neburí se ha hecho daño\nmientras paseábamos y no puede volar.\n<0x10009:0x00011500>Hemos aterrizado aquí como hemos\npodido, pero ahora no sé qué hacer.\n<0x10009:0x00121500>No podemos volver hasta que no se\ncure, pero para eso necesito<color red< >coloroff>algún\ntipo de <color red<medicina>coloroff>.\n\nClaro, tiene que ser <color red<medicina\nespecial para neburís>coloroff>.\n\n\n<heroname>, tú... <0x10009:0x00150200>¿tú podrías\ntraerme medicina para neburís?\n[1-]Claro[2-]Lo siento")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 0, unk: 0, line: 140 */ "<0x10009:0x000b0409>¡Muchísimas gracias! ¡Te debo la vida!")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 0, unk: 1, line: 142 */ "<color red<Mi hermano tiene la medicina para\nel neburí>coloroff>. Lo mejor será que vayas\na hablar con él.\n\nMe imagino que estará esperándome\n<color red<en la plaza de Neburia>coloroff>. Pobre, seguro\nque está hecho un manojo de nervios...")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 0, unk: 0, line: 143 */ "<0x10009:0x00090509>Oye, ¡pero si tienes la medicina!\n¿Y por qué no dices nada? Esas\n<color yellow<esporas de champiñón >coloroff>son lo que\nnecesitamos...\nCon ellas, mi pequeño se curará\nde inmediato. Si no es mucha molestia,\n¿te importaría dármelas?\n[1-]Aquí tienes[2]Lo siento")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf(/* textboxtype: 0, unk: 1, line: 145 */ "Vaya, supongo que era mucho pedir...\n¿Podrías al menos hablar con mi\nhermano y contarle lo que ha pasado?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 0, unk: 0, line: 146 */ "Cómo, ¿dices que ya has estado con él?\nPerfecto, eso lo hace todo mucho\nmás sencillo.")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 147 */ "Yo te espero aquí con este pequeño,\n¿de acuerdo?\n\n\nYa sabes lo que tienes que hacer,\n¡confío en ti!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000c1513>¿Eh? ¿Es que acaso no tienes corazón?\n<0x10009:0x000b0409>Menos mal que sé que estás bromeando,\nque si no...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf(/* textboxtype: 0, unk: 1, line: 226 */ "<0x10009:0x000c0456>¿Se puede saber qué ha pasado ahí fuera?\nQué estruendo...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 223 */ "<0x10009:0x00000001>Oye, <heroname>... No sé cómo\nlo haces, pero cada día estás más\natractivo. ¡Y ese uniforme te queda\nmuy bien!\n¡Te estás convirtiendo en un hombre\nhecho y derecho!")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf(/* textboxtype: 1, unk: 0, line: 225 */ "<0x10009:0x00080e06>¿Cómo? ¿Ya has aprendido a hacer \nel tirabuzón aéreo con tu neburí?\n\n\n<0x10009:0x00080909>¡Eres impresionante!<pause 30><0x10009:0x000c0400> Aunque...<pause 20> debo\ndecirte que Cocu también domina\nesa maniobra. ¡Es todo un experto!")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf(/* textboxtype: 0, unk: 0, line: 224 */ "<0x10009:0x00000006>¿Cómo? ¿La Trifuerza, dices?...<pause 30>\n¿Y qué se supone que es eso?")
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
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x00000001>¡<heroname>... la isla de la Diosa\nha desaparecido!\n\n\n<0x10009:0x00001513>Qué pena... ¡Con lo que les gustaba\na los neburís posarse allí para descansar!")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf(/* textboxtype: 0, unk: 0, line: 161 */ "<0x10009:0x00000013>¿Has sentido ese temblor tan fuerte?\nNo sé a qué se habrá debido...\n¿Tú sabes lo que está pasando?")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf(/* textboxtype: 0, unk: 1, line: 160 */ "<0x10009:0x00000001>¿Qué tal, <heroname>?\n\n\n\n<0x10009:0x000c0200>Oye, ¿has aprendido a ejecutar la\nlegendaria técnica de vuelo llamada\n\"tirabuzón aéreo\"?<pause 30> Ah, ¿en serio?\n<0x10009:0x000c050b>¡Pues te felicito!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00000057>¿La Trifuerza?<pause 20> No lo sé, chico...\nNi siquiera había oído mencionar\nel nombre antes.\n\nTe aconsejo que hables con el director\nde la academia. Si alguien sabe algo\nsobre ese tipo de cosas, es él.")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x00000001>¿Qué tal, <heroname>?\nOye, hace mucho que no veo a esa chica\nrubia tan agradable de la academia...\n\nSe llamaba Zelda, ¿verdad<pause 5>.<pause 5>.<pause 5>.<pause 5>?\nAntes iban juntos a todas partes...\n¿Qué pasa? ¿Es que ya no se hablan?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf(/* textboxtype: 0, unk: 0, line: 158 */ "<0x10009:0x00000013>Durante un instante, parecía que\nlas tinieblas devoraban por completo\nel cielo... ¿Qué podría provocar\nalgo así?")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf(/* textboxtype: 0, unk: 1, line: 157 */ "<0x10009:0x00000001>Hola, <heroname>.\n\n\n\n<0x10009:0x00110057>¿<color red<Dos grandes hojas>coloroff>, dices? No sé a qué\nse referirá, la verdad...\n\n\n<0x10009:0x00010000>Bueno, ahora que lo pienso, las aspas\nde los <color red<molinos >coloroff>de Neburia podrían\nconsiderarse unas hojas, y además\nestán bastante altas... ¿no crees?")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 0, unk: 0, line: 155 */ "<0x10009:0x0000000b>Hola, <heroname>.\nOye, muchas gracias por tu ayuda.\n\n\n<0x10009:0x00000400>Mi neburí vuelve a estar sano\ncomo un roble. De verdad, no sé\nqué hubiéramos hecho sin ti... \n¡Muchísimas gracias!")
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
/*<760>*/ 		printf(/* textboxtype: 0, unk: 0, line: 155 */ "<0x10009:0x0000000b>Hola, <heroname>.\nOye, muchas gracias por tu ayuda.\n\n\n<0x10009:0x00000400>Mi neburí vuelve a estar sano\ncomo un roble. De verdad, no sé\nqué hubiéramos hecho sin ti... \n¡Muchísimas gracias!")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 1, line: 163 */ "Oooh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf(/* textboxtype: 0, unk: 0, line: 164 */ "Oooh...\nPor caridad... \nQue alguien me ayude...")
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
/*<506>*/ 			printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Por favor, olvida lo del papel\nque te pedí...\nAdiós...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf(/* textboxtype: 0, unk: 1, line: 166 */ "Ah... ¡<color red<Papel>coloroff>!...\n¡Me has traído <color red<papel>coloroff>!...\n\n\nTe abriré la puerta...\nPasa, pasa, por favor...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 165 */ "Oooh...\nNecesito <color red<papel>coloroff>...\n\n\n<color red<Un poco de papel>coloroff>, por caridad...\nAlguien, quien sea...\nPapel, por favor...\n\nMe sirve <color red<cualquier cosa>coloroff>...\nmientras sea de <color red<papel>coloroff>...\nOooh...")
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
/*<142>*/ 			printf(/* textboxtype: 0, unk: 0, line: 185 */ "<0x10009:0x00001b1b>Oye, ¡ni se te ocurra! Esto no es\nun simple papel... ¡es una <color red<carta>coloroff>!\n\n\n<0x10009:0x00172500>He puesto todo mi corazón en estas\nlíneas... Cada palabra, cada frase... \n¡Rebosa amor por los cuatro costados!\n\n<0x10009:0x00171800>¡Y tú pensando en usarla como papel\nhigiénico!...")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			wait_frames(30)
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 186 */ "A ver, escucha... La persona a la que va\ndirigida es una alumna de último curso,\n<color blue<Grusi>coloroff>.\n\n<0x10009:0x00010c11>¿Sa... sabes quién te digo? Esa chica\ntan bonita que lleva siempre una <color red<boina\nmuy redondeada>coloroff>.\n\n<0x10009:0x00171800>No vayas a dársela a <color red<la loca del retrete>coloroff>,\n¿eh? ¡Que te conozco!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			wait_frames(45)
/*<168>*/ 			printf(/* textboxtype: 0, unk: 1, line: 187 */ "Bueno, aquí tienes la carta...\n¡Pero no se te ocurra leerla!")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 0, unk: 0, line: 188 */ "¡Cuento contigo, <heroname>!\nSi todo va bien, puede que incluso\nte deje entrar en la pandilla.\nBueno, gracias y todo eso. ")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000008>Pero bueno... ¿Se puede saber\nqué haces, mirando hacia el retrete?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 0, unk: 1, line: 184 */ "¿Dices que había alguien pidiendo\npapel en el retrete por la noche?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "Hmm... ¿Debo dar yo el primer paso\no esperar a que ella venga a mí?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 178 */ "¡Aah! ¡<heroname>, qué susto me\nhas dado! Ten más cuidado, ¿eh?\n\n\n<0x10009:0x00171800>Vamos, ¡lárgate y no me molestes más,\nque estoy pensando en un asunto\nde mucha importancia!\n[1-]¿Cuál?[2-]Te ayudo")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 0, unk: 0, line: 179 */ "¿Cómo? ¿Y desde cuándo te interesas\ntú por mis problemas?\n\n\n<0x10009:0x0000001c>¡Puf!... Eres la última persona a la\nque se me ocurriría pedirle consejo.\nPero bueno, ya que insistes...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf(/* textboxtype: 0, unk: 1, line: 181 */ "Quizá puedas ayudarme. Es cierto\nque tú y yo no nos llevamos muy bien,\npero también me consta que sabes\ntratar a las mujeres...\nYa está, ¡decidido! <heroname>,\nte voy a encomendar una tarea.")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					wait_frames(45)
/*<158>*/ 					printf(/* textboxtype: 0, unk: 0, line: 182 */ "Quiero que le des este <color red<papel >coloroff>a cierta\npersona. Es un asunto muy importante,\n¡así que asegúrate de que lo reciba sin\nfalta!")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0, line: 180 */ "¿Lo dices en serio?\n\n\n\n<0x10009:0x0000001c>Hum... No sé si me gusta que metas\nlas narices en mis asuntos, pero ya\nque insistes...")
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
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Por favor, olvida lo del papel\nque te pedí...\nAdiós...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		wait_frames(45)
/*<111>*/ 		wait_frames(45)
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Por favor, olvida lo del papel\nque te pedí...\nAdiós...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		wait_frames(45)
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 168 */ "Oooh... <color red<Papel>coloroff>...\nNecesito <color red<papel>coloroff>...\nPor caridad...\n\nNo pido mucho...\n<color red<Solo un poco de papel>coloroff>...\n[1-]Toma esta\ncarta[2]Lo siento")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 0, unk: 0, line: 170 */ "<0x10009:0x000b0004>¿Eh?\n¿Me la das, de verdad?...\nQué alegría...")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			wait_frames(45)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "Pero... esto parece una carta dirigida\na alguien... No sé si está bien usarla\npara...\n[1-]Descuida[2]Mejor no")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				wait_frames(30)
/*<153>*/ 				printf(/* textboxtype: 0, unk: 1, line: 172 */ "<0x10009:0x00000002>Pues gracias...\nLa usaré con sumo cuidado...\n\n\nPero soy una señorita, así que no me\npreguntes para qué la quiero...\n\n\nHasta la vista... \nMi amable benefactor...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 0, unk: 1, line: 169 */ "<0x10009:0x00050003>Uuuf... Por favor... papeeel...")
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
/*<149>*/ 		printf(/* textboxtype: 0, unk: 0, line: 176 */ "<0x10009:0x00000002>Oh, querido mío...\nTe amaré toda mi vida...\nEstaré siempre a tu lado...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		wait_frames(15)
/*<151>*/ 		printf(/* textboxtype: 0, unk: 0, line: 173 */ "<0x10009:0x00000004>Ah...\nEres el amable jovencito del otro día...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00060002>Me alegro de volver a verte...\nGracias a ti, he encontrado a mi\npríncipe azul...\n\nSí, creo que ya sabes quién es...\n\n\n\n<0x10009:0x000c0000>Por supuesto, todo empezó con\naquella carta que me diste...\n\n\n<0x10009:0x00060000>¡Sus dulces palabras me han robado\nel corazón!")
/*<521>*/ 		printf(/* textboxtype: 0, unk: 1, line: 175 */ "<0x10009:0x00000002>Ay, no puedo pensar en otra cosa\nque no sea él, de noche y de día...\nMe siento tan llena de vida...")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf(/* textboxtype: 0, unk: 0, line: 176 */ "<0x10009:0x00000002>Oh, querido mío...\nTe amaré toda mi vida...\nEstaré siempre a tu lado...")
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
/*<363>*/ 	printf(/* textboxtype: 0, unk: 1, line: 244 */ "Tú eres el autor de la carta, ¿no?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf(/* textboxtype: 0, unk: 0, line: 245 */ "Pues... sí...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0, line: 246 */ "<0x10009:0x14000009>Ji, ji, ji... Se te da muy bien escribir\ncartas de amor. ¡Muchas gracias!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 0, unk: 1, line: 247 */ "<0x10009:0x05000011>Ejem, no... no es para tanto...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf(/* textboxtype: 0, unk: 0, line: 248 */ "Bueno, en... entonces...\n¿Cuál es tu respuesta?...")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0, line: 249 */ "<0x10009:0x14000012>¿Mi respuesta? Ah, tienes razón.\nEn estos casos se suele responder, ¿no?")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf(/* textboxtype: 0, unk: 1, line: 250 */ "<0x10009:0x05002519>Por... Por favor, ¡sal conmigo!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 0, unk: 0, line: 251 */ "¡Alto ahí!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	wait_frames(45)
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0, line: 252 */ "Si vas a salir con alguien...\n¿por qué no sales conmigo?\nLo que quiero decir es que...\n¡me encantaría que fueses mi novia!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf(/* textboxtype: 0, unk: 1, line: 253 */ "<0x10009:0x05001b09>¿Pero qué...? ¡Un momento!\n¿Por qué te entrometes en este asunto?")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf(/* textboxtype: 0, unk: 0, line: 254 */ "Este... yo...<0x10009:0x14000900> Quiero salir con Cocu.")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0, line: 255 */ "<0x10009:0x05150c10>¡Ja, ja, lo sabía! Grusi solo tiene\nojos para... Oye, un momento...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf(/* textboxtype: 0, unk: 1, line: 256 */ "<0x10009:0x05111d1d>¿Có... cómo?")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	wait_frames(10)
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf(/* textboxtype: 0, unk: 0, line: 257 */ "<0x10009:0x1201ff00>¿Lo dices en serio? ¿Me eliges a mí?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0, line: 258 */ "¡Pues claro! <0x10009:0x14000900>Me has hecho muy feliz.\nGracias...")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf(/* textboxtype: 0, unk: 1, line: 259 */ "<0x10009:0x05001d17>Esto no puede estar pasando...\nNo es justo... ¿Por qué? ¿Por qué?...")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	wait_frames(1)
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf(/* textboxtype: 0, unk: 0, line: 260 */ "<0x10009:0x05000018>¡¡¡Buaaaah!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 261 */ "<0x10009:0x12000001>¡<heroname>!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf(/* textboxtype: 0, unk: 1, line: 262 */ "Desde el momento en el que me dijiste\nlo de la carta, me di cuenta de mis\nsentimientos por ella.\n\n<0x10009:0x12090c00>Y me dije a mí mismo que no podía\npermitir que otro me la arrebatara.\n\n\n<0x10009:0x12010400>Si no llega a ser por ti, quizá nunca\nme hubiera dado cuenta de todo esto.\n\n\n<0x10009:0x1208000b>¡Muchas gracias, compañero!\nLa verdad es que no sé cómo\nagradecértelo...")
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
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0, line: 204 */ "<0x10009:0x001b1f1b>Desde aquello apenas puedo dormir\npor las noches. Y casi mejor, porque no\ntengo más que pesadillas horripilantes.\n¿Estará la cama embrujada? \n¡Quizá es la maldición de <color blue<Vilán>coloroff>!\n¡Por favor, <heroname>!\n¡Ayúdame!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 0, unk: 0, line: 203 */ "<0x10009:0x001b1f17>¿Qué quieres, <heroname>?\n¡Te advierto que no he olvidado lo\nque me has hecho!\n\nDesde aquello apenas puedo dormir\npor las noches. Aunque es mejor, \nporque no tengo más que pesadillas...\n\nNo sé qué puede estar pasando; es como\nsi la cama estuviera embrujada o algo\nasí... Quizá es la maldición de <color blue<Vilán>coloroff>.\n\n<0x10009:0x001c1a18>¡Por favor, <heroname>!\n¡Ayúdame!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf(/* textboxtype: 0, unk: 1, line: 205 */ "<0x10009:0x00000017>Todo se ha acabado... \nYa no importa nada...\n\n\n<0x10009:0x001c1f00>¿Qué miras, <heroname>?\n¿Has venido a reírte de mí?\nVamos, déjame tranquilo...")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf(/* textboxtype: 0, unk: 1, line: 202 */ "<0x10009:0x001b1f17>¿Es que no vas a dejarme en paz,\n<heroname>?... ¿No te parece\nbastante lo que me has hecho?\n\n<0x10009:0x001c1f00>No sé quién será la loca del retrete,\npero solo de pensar que haya leído\nmi carta... Ay, qué desastre.")
          	}
          }

