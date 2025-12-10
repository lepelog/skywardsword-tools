          void entrypoint_109_02() {
/*< 80>*/ 	start()
/*< 81>*/ 	switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
          	  case 0:
/*< 54>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<106>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<128>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_134:
/*<134>*/ 					{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 55, 'param3': 13}
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000001>Presta mucha atención, jovencito:\n¡no intentes flirtear con mi hija!\n¡Y nada de miradas furtivas!")
          				  case 1:
/*< 53>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 63>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 65>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 67>*/ 								switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
          								  case 0:
/*< 68>*/ 									switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          									  case 0:
/*< 70>*/ 										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          										  case 0:
/*<141>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3584, 'next': 71, 'param3': 13}
/*< 71>*/ 											printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000016>¡No me lo puedo creer! ¡Ya verás como\nagarre al miserable que ha seducido\na mi niña!\n\n<0x10009:0x000e0e13>Ay... Bueno...\nMentiría si dijera que no esperaba que\nesto ocurriera tarde o temprano...")
          										  case 1:
/*<140>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4608, 'next': 69, 'param3': 13}
/*< 69>*/ 											printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000013>¡Malas noticias, <heroname>!\n¡Mi hija tiene novio!\n\n\n<0x10009:0x000e1200>¡Aaaargh! ¡Como averigüe quién es\nel majadero que ha seducido a mi niña,\nse va a enterar!\n\n<0x10009:0x00001215>¡Y tú, <heroname>!\n¡No sé por qué confié en ti para\nresolver esta tragedia!\n\nAy, ay, ay, qué desgracia...\n¿Y ahora qué hago?")
/*< 76>*/ 											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
          										}
          									  case 1:
/*< 72>*/ 										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          										  case 0:
/*<139>*/ 											{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 77, 'param3': 13}
/*< 77>*/ 											printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000001>¡Oye, <heroname>!\n¡Recuerda que no debes encariñarte\ncon mi hija más de la cuenta!\n\nSí, sí, ya sé que es difícil resistirse a su\nbelleza... Pero si no te controlas,\ntendrás que enfrentarte a mí.\n¿Entendido?")
          										  case 1:
/*< 73>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 138, 'param3': 31}
/*<138>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 74, 'param3': 13}
/*< 74>*/ 											printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000c>¡<heroname>!\n¡Ven a que te cuente!\n\n\n¡Por lo visto, mi hija ha dejado al\nmajadero ese! ¡Como lo oyes!\n\n\n<0x10009:0x000e1200>No hace falta decir que siento mucho\nque a mi niña le rompan el corazón.\nPero si te digo la verdad...\n\n<0x10009:0x000f1809>¡estoy muy feliz por poder perder\nde vista a ese tipo!\n\n\nEn confianza, <heroname>...\n¿No habrás hecho algo? ¡Ja, ja!\nBueno, no importa. ¡Bien está\nlo que bien acaba!\n<0x10009:0x000e180a>¡Esto hay que celebrarlo! No puedo\nexpresar con palabras el peso que\nme he quitado de encima.\n¡Jua, jua, jua, jua!")
/*< 79>*/ 											give_gratitude_crystals();
/*< 75>*/ 											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<142>*/ 											{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          										}
          									}
          								  case 1:
          									flw_137:
/*<137>*/ 									{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 5120, 'next': 66, 'param3': 13}
/*< 66>*/ 									printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000006>Hola, hola, <heroname>.\n¿Qué tal estás?\n\n\nNo sé, hoy mi hija está rarísima.\nMe pregunto qué le pasará...")
          								}
          							  case 1:
          								goto flw_137
          							}
          						  case 1:
/*<136>*/ 							{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 64, 'param3': 13}
/*< 64>*/ 							printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000015>¡Confío en ti, <heroname>!\n¡Ocúpate del majadero que va detrás\nde mi hija y podré volver a dormir\ntranquilo por las noches!")
          						}
          					  case 1:
/*< 56>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 						{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 57, 'param3': 13}
/*< 57>*/ 						printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000e14>¡Hola, <heroname>, qué alegría!\n¡Llegas justo a tiempo!\n\n[1-]¿Cómo?[2-]Es por tu\nhija, ¿no?")
/*< 58>*/ 						switch (choice(2)) {
          						  case 0:
/*< 59>*/ 							printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000f1215>Tengo un problema muy gordo y no sé\ncómo solucionarlo... ¡Se trata de\nmi hija!")
          							flw_61:
/*< 61>*/ 							printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x000e1200>Ay, mi pequeña... Ya sabes que Panalí\nes la niña de mis ojos...\n\n\nEl caso es que últimamente está muy\nrara. Anda como embobada y se\nruboriza sin motivo aparente.\n\n<0x10009:0x000f1200>Ay, mi niña... Me temo que ya entiendo\n lo que le está pasando: <0x10009:0x00001400>¡<color red<Tiene algún\nadmirador secreto>coloroff>!\n\nPobre hija mía, ¿qué culpa tiene ella\nde ser tan amable y hacendosa?\n<0x10009:0x000e1400>¡Por no mencionar su arrebatadora\nbelleza!\nAh, supongo que es inevitable que\nlos muchachos estén detrás de ella...\n")
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000f1216>Pero no, ¡me niego!...\nNo pienso tolerarlo. ¡A los insolentes\ncomo ese hay que darles una lección\npara que aprendan!\n<0x10009:0x000e1200>Y aquí es donde entras tú. ¡Quiero que\nmantengas a raya a ese pesado para\nque deje de molestar a mi niña!\n\n<0x10009:0x000f1200>Yo tampoco pienso bajar la guardia,\npor supuesto, pero tampoco puedo\nestar pendiente de ella día y noche.\n\nTe compensaré generosamente, claro.\nSi me lo quitas de en medio, te daré\npermiso para charlar un ratito con\nmi hija, ¿qué me dices?")
/*<122>*/ 							printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x000e1400>No te molestes en dar una respuesta.\nSé de antemano lo que vas a decir,\nje, je.\n\n<0x10009:0x000f1809>¡Habría que ser muy insensato para\nrechazar una oferta tan tentadora!\n\n\n<0x10009:0x00001200>Tú haz que el tipo ese deje de molestar\na mi hija lo antes posible, ¿entendido?\n¡Eres el hombre perfecto para este\ntrabajo, <heroname>!")
/*< 62>*/ 							story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
          						  case 1:
/*< 60>*/ 							printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x0000000b>Así es. Ya veo que me lees la mente,\nmuchacho.")
          							goto flw_61
          						}
          					}
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
/*<133>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 84, 'param3': 13}
/*< 84>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00000009>¡Hola, hola! ¡Bienvenido a la casa\nde Míster Neburia, el auténtico, \nel de ayer, hoy y siempre!")
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e00>¿Cómo? ¡¿Que no sabes quién soy?!\n¡Pero si hasta hace poco me llamaban\n<color blue<Míster Neburia>coloroff>! ¡Todo el mundo me\nreconocía por la calle!\n<0x10009:0x00000700>Mmm<0x10006:0xfbcd>...<0x10006:0x00cd> A ver, quizá esto te ayude.\nSoy el padre de la muchacha más\nbonita de Neburia: <color blue<Panalí>coloroff>, <color blue<la reina\nde la consigna>coloroff>.<color blue<\n>coloroff><0x10009:0x000f180a>¿O eso tampoco te dice nada?\nAhora sí que sabes quién soy, ¿verdad?")
/*< 86>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*<127>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_109_03() {
/*<107>*/ 	start()
/*< 31>*/ 	story_flags[216 /* us: 805A9AF3 0x08, jp: 805ACD73 0x08 */] = true;
/*<151>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 48>*/ 		printf(/* textboxtype: 1, unk: 1, line: 4 */ "<0x10009:0x0000000b>¿Qué? ¿No te pide el cuerpo cortar\nun poco de bambú? ¡Solo son <color red<10 rupias\n>coloroff>por intento!\n[1-]Claro[2-]¿Cómo se\njuega?[3]Mejor no")
          		flw_3:
/*<  3>*/ 		switch (choice(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 19>*/ 				rupees += -10;
/*< 28>*/ 				switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
          				  case 0:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0, line: 20 */ "¡El récord actual está en <numeric arg1 0>!\n¡Veamos si eres capaz de superarlo!")
          					flw_6:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000bff09>De acuerdo. ¡A ver cómo manejas\nla espada, muchacho!")
/*<  4>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0007ff06>No tienes rupias, ¿eh?... Je, je,\nen ese caso supongo que puedo\ndejarte participar gratis por una vez...\n\n<0x10009:0x000c0e12>Te lo has creído, ¿eh? ¡Qué ingenuo!\nAy, la juventud de hoy en día,\nqué verdes están...\n\n<0x10009:0x00000e00>¡No te vendría mal seguir el ejemplo\nde mi hija, muchacho! Ella sí que tiene\nlos pies en la tierra...")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000bff09>¡Pues es tan sencillo como rebanar\nen trocitos ese tronco de bambú de ahí\nen medio! Eso sí, ¡lo importante aquí\nes el número de cortes antes de tirarlo!\nY no lo olvides: cuantos más cortes\nconsigas, ¡mayor será el premio!")
/*<154>*/ 			printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x0007000b>¿Qué me dices? ¿Quieres cortar un\npoco de bambú? ¡Son solo <color red<10 rupias\n>coloroff>por intento!\n[1-]Claro[2-]¿Cómo se\njuega?[3]No, gracias")
          			goto flw_3
          		  case 2:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000003>Ya entiendo. Eso de cortar cosas\nno es lo tuyo. Muy bien, tú sabrás.\n¡Ya nos veremos!")
          		}
          	  case 1:
/*<112>*/ 		switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          		  case 0:
/*<113>*/ 			switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          			  case 0:
/*<114>*/ 				switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          				  case 0:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 1, line: 2 */ "<0x10009:0x000c0e13>¡Grrr! ¡Ya verás como me cruce con\nel sinvergüenza que ha seducido\na mi hija!...\n\n<0x10009:0x0010ff00>En momentos así, ¡lo mejor para\ndesahogarse es empezar a cortar\nbambú como loco!\n\nSon <color red<10 rupias >coloroff>por intento.\n¿Qué me dices?\n[1-]Claro[2-]¿Cómo se\njuega?[3]Mejor no")
          					goto flw_3
          				  case 1:
/*<117>*/ 					printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x0000000b>Hola, ¿qué tal, <heroname>?\nPor lo visto, el tipo ese ya no anda\ndetrás de mi hija. ¡Y yo me alegro!\n\nBueno, ¿te animas a cortar bambú\npara celebrarlo? Son <color red<10 rupias \n>coloroff>por intento, ya sabes.\n[1-]Claro[2-]¿Cómo se\njuega?[3]Mejor no")
          					goto flw_3
          				}
          			  case 1:
/*<115>*/ 				printf(/* textboxtype: 1, unk: 1, line: 1 */ "<0x10009:0x00000015>¡<heroname>! ¿Has encontrado\nya a ese mamarracho que anda detrás\nde mi hija?\n\nBueno, ¿y qué me dices de cortar unos\nbambús, eh? ¡Son solo <color red<10 rupias\n>coloroff>por intento!\n[1-]Claro[2-]¿Cómo se\njuega?[3]Mejor no")
          				goto flw_3
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>¡Hola, hola, <heroname>!\n¡Es un placer volver a verte!\n\n\n¿Estás listo para cortar bambú?\n¡Son solo <color red<10 rupias >coloroff>por intento!\n[1-]Claro[2-]¿Cómo se\njuega?[3]Mejor no")
          			goto flw_3
          		}
          	}
          }

          void entrypoint_109_04() {
/*<108>*/ 	start()
          	goto flw_3
          }

          void entrypoint_109_01() {
          	start()
/*< 25>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 20>*/ 		switch (story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */]) {
          		  case 0:
/*<126>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
          				flw_109:
/*<109>*/ 				entrypoint_109_03();
          			  case 1:
/*< 50>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*<104>*/ 					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          					  case 0:
/*< 51>*/ 						switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          						  case 0:
/*< 52>*/ 							switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
          							  case 0:
/*< 87>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 89>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<119>*/ 										entrypoint_109_03();
          									  case 1:
/*<148>*/ 										{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 3584, 'next': 88, 'param3': 13}
/*< 88>*/ 										printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000013>¡Malas noticias, <heroname>!\n¡Mi hija tiene novio!\n\n\n<0x10009:0x0010ff15>¡Aaargh! ¡Como averigüe quién es\nel majadero que ha seducido a mi niña,\nse va a enterar!\n\n¡Y tú, <heroname>!\n¡No sé por qué confié en ti para\nresolver esta tragedia!\n\n<0x10009:0x000c0e13>Ay, ay, ay, qué desgracia...\n¿Y ahora qué hago?")
/*< 94>*/ 										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<120>*/ 										printf(/* textboxtype: 1, unk: 1, line: 52 */ "<0x10009:0x0010ff00>Grrr... ¡En momentos así, la única\nforma de aliviarse es cortar bambú!\n¿Quieres intentarlo por <color red rupee<10 rupias>coloroff>?\n[1-]Claro[2-]¿Cómo se\njuega?[3]Mejor no")
/*<121>*/ 										entrypoint_109_04();
          									}
          								  case 1:
/*< 90>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<118>*/ 										entrypoint_109_03();
          									  case 1:
/*< 91>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 147, 'param3': 31}
/*<147>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': -256, 'next': 92, 'param3': 13}
/*< 92>*/ 										printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000c>¡<heroname>!\n¡Ven a que te cuente!\n\n\n¡Por lo visto, mi hija ha dejado al\nmajadero ese! ¡Como lo oyes!\n\n\n<0x10009:0x0007ff00>No hace falta decir que siento mucho\nque a mi niña le rompan el corazón.\nPero si te digo la verdad...\n\n<0x10009:0x000b1809>¡estoy muy feliz por poder perder\nde vista a ese tipo!\n\n\nEn confianza, <heroname>...\n¿No habrás hecho algo? ¡Ja, ja!\nBueno, no importa. ¡Bien está\nlo que bien acaba!\n<0x10009:0x0007180a>¡Esto hay que celebrarlo! No puedo\nexpresar con palabras el peso que\nme he quitado de encima.\n¡Jua, jua, jua, jua!")
/*< 95>*/ 										give_gratitude_crystals();
/*< 93>*/ 										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<149>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									}
          								}
          							  case 1:
/*<110>*/ 								entrypoint_109_03();
          							}
          						  case 1:
/*< 96>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 146, 'param3': 31}
/*<146>*/ 							{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': -256, 'next': 97, 'param3': 13}
/*< 97>*/ 							printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000008>¡Hola, <heroname>, qué alivio!\n¡Llegas justo a tiempo!\n\n[1-]¿Cómo?[2-]Es por tu\nhija, ¿no?")
/*< 98>*/ 							switch (choice(2)) {
          							  case 0:
/*< 99>*/ 								printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000e15>Tengo un problema muy gordo y no sé\ncómo solucionarlo... ¡Se trata de\nmi hija!")
          								flw_101:
/*<101>*/ 								printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00100e00>Ay, mi pequeña... Ya sabes que Panalí\nes la niña de mis ojos...\n\n\n<0x10009:0x00000e00>El caso es que últimamente está muy\nrara. Anda como embobada y se\nruboriza sin motivo aparente.\n\n<0x10009:0x000c0e13>Ay, mi niña... Me temo que ya entiendo\n lo que le está pasando: ¡<color red<Tiene algún\nadmirador secreto>coloroff>!\n\nPobre hija mía, ¿qué culpa tiene ella\nde ser tan amable y hacendosa?\n¡Por no mencionar su arrebatadora\nbelleza!\n<0x10009:0x00000700>Ah, supongo que es inevitable que\nlos muchachos estén detrás de ella...\n")
/*<103>*/ 								printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x0010ff16>Pero no, ¡me niego!...\nNo pienso tolerarlo. ¡A los insolentes\ncomo ese hay que darles una lección\npara que aprendan!\n<0x10009:0x0001ff00>Y aquí es donde entras tú. ¡Quiero que\nmantengas a raya a ese pesado para\nque deje de molestar a mi niña!\n\n<0x10009:0x0007ff00>Yo tampoco pienso bajar la guardia,\npor supuesto, pero tampoco puedo\nestar pendiente de ella día y noche.\n\nTe compensaré generosamente, claro.\nSi me lo quitas de en medio, te daré\npermiso para charlar un ratito con\nmi hija, ¿qué me dices?")
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x000bff0b>No te molestes en dar una respuesta.\nSé de antemano lo que vas a decir,\nje, je.\n\n<0x10009:0x00001800>¡Habría que ser muy insensato para\nrechazar una oferta tan tentadora!\n\n\n<0x10009:0x0001ff00>Tú haz que ese tipo deje de molestar\na mi hija lo antes posible, ¿entendido?\n¡Eres el hombre perfecto para este\ntrabajo, <heroname>!")
/*<102>*/ 								story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<105>*/ 								printf(/* textboxtype: 1, unk: 1, line: 47 */ "<0x10009:0x0007ff00>¿Estás listo para cortar bambú como\nloco, muchacho? ¡Cada intento cuesta\n<color red<10 rupias>coloroff>!\n[1-]Claro[2-]¿Cómo se\njuega?[3]Mejor no")
/*<111>*/ 								entrypoint_109_04();
          							  case 1:
/*<100>*/ 								printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0007070b>Así es. Ya veo que me lees la mente,\nmuchacho.")
          								goto flw_101
          							}
          						}
          					  case 1:
          						goto flw_109
          					}
          				  case 1:
          					goto flw_109
          				}
          			}
          		  case 1:
/*<125>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 41>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000006>¿Te ves preparado para poner a prueba\ntu técnica con la espada, o no?\n\n[1-]¡Claro![2]Mejor no")
          				flw_35:
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000b060c>¡Así se habla, muchacho! ¡Muy bien, \na cortar bambú!\n\n\nPero espera... Empezar a cortar tallos\nasí, sin más, tampoco es interesante,\n¿no? Nos vamos a aburrir enseguida.\n\n<0x10009:0x00010600>Mmm<pause 5>.<pause 5>.<pause 5>.\n<0x10009:0x000b060b>Bien, ya sé qué podemos hacer.")
/*< 22>*/ 					story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = true;
/*<144>*/ 					set_camera(1, 0)
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Muy bien. Se trata de cortar ese bambú\nque hay ahí en medio. ¡El reto es ver\ncuántos cortes consigues antes de\nque caiga!\nSi consigues cortarlo en muchos\npedazos, ¡te llevarás un premio\nbien interesante!")
/*<145>*/ 					set_camera(-1, 0)
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00ffff09>¿Qué me dices? Son <color red<10 rupias\n>coloroff>por intento.\n\n[1-]Muy bien[2]¿Cuesta\ndinero?")
/*< 42>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_16
          					  case 1:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000c0e07>¿Se puede saber qué te pasa? ¡Te he\ndicho que hay un premio en juego!\n\n\n¡Tengo que alimentar a mi familia!\nSé que soy muy popular, pero eso no\nda de comer a nadie. Entiéndelo,\nno te puedo dejar jugar gratis.\n<0x10009:0x00ffff06>Bueno, ¿qué dices? Son <color red<10 rupias\n>coloroff>por intento.\n\n[1-]¡Adelante![2]¡Que no!")
/*< 43>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_16
          						  case 1:
/*< 45>*/ 							printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000003>Ya entiendo. Eso de cortar cosas\nno es lo tuyo. Muy bien, tú sabrás.\n¡Ya nos veremos!")
          						}
          					}
          				  case 1:
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000c0e05>¿Es una broma? ¡Así no esperes\nque las chicas se fijen en ti, muchacho!\n\n\n<0x10009:0x0010ff00>De todas formas, no es que quiera que\nte acerques a mi hija. ¡Si se te ocurre\nponerle un dedo encima, vas a perder\ntoda la mano!")
/*< 40>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          				}
          			  case 1:
/*<143>*/ 				{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': -256, 'next': 82, 'param3': 13}
/*< 82>*/ 				switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
          				  case 0:
/*< 83>*/ 					printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000001>¡Vaya! ¡Pero si es <heroname>!\nNo es muy habitual tener visitas\npor aquí, ¿sabes?")
          					flw_33:
/*< 33>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x0007ff00>Aquí es donde suelo entrenar un poco\ncada día, ¡mi rinconcito secreto!\n\n\nHace años era el tipo <color blue<más popular\nde toda Neburia>coloroff>. Todo el mundo\nme conocía y me animaba.\nPero claro, el tiempo pasa...\n<0x10009:0x0010ff00>Con el estrés y la grandísima\nresponsabilidad de tener una hija,\nme he ido descuidando y... bueno,\nhe ganado algo de peso.\nPor eso, para recuperar la línea,\nme dedico a cortar tallos de bambú.\n¡Es el ejercicio más completo que hay!\n\n<0x10009:0x00000700>¡Tengo una idea, <heroname>!\n¿Quieres probarlo tú?\n[1-]¡Claro![2]No, gracias")
          					goto flw_35
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>¡Vaya, si es <heroname>!\nEs raro que vengan visitas por aquí.\n[1-]¿Qué sitio\nes este?[2-]¿Quién\neres tú?")
/*<124>*/ 					story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*< 32>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_33
          					  case 1:
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000b0e06>¿Cómo? ¡¿Que no sabes quién soy?!\n¡Pero si hasta hace poco me llamaban\n<color blue<Míster Neburia>coloroff>, el tipo más famoso\nde todo el cielo! ¡Era toda una estrella!\n<0x10009:0x0001ff00>Mmm<0x10006:0xfbcd>...<0x10006:0x00cd> A ver, quizá esto te ayude.\nSoy el padre de la muchacha más\nbonita de Neburia: <color blue<Panalí>coloroff>, <color blue<la reina\nde la consigna>coloroff>.\n<0x10009:0x0007180a>¿O eso tampoco te dice nada?\nAhora sí que sabes quién soy, ¿verdad?")
          						goto flw_33
          					}
          				}
          			}
          		}
          	  case 1:
/*<129>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 44}
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "¡Para, para! ¡Ya has terminado!\n¡Relájate, muchacho!\n\n\nEl número total de cortes que\nhas conseguido es <numeric arg0 0>.")
/*< 30>*/ 		switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
          		  case 0:
/*< 23>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000bff0c>¡Bien hecho!\n¡Has superado tu propio récord!\n¡Felicidades!")
          				flw_7:
/*<  7>*/ 				switch (context_related4(0)) {
          				  case 0:
/*< 11>*/ 					printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000c0e12>Así no vas a llegar muy lejos...\n¡Vamos, hay que conseguir al menos\n<color red<15 cortes>coloroff>, muchacho!\n\n<0x10009:0x00000e00>¡Tienes que concentrarte más!\n¡Si no, te vas a ir a casa con las\nmanos vacías!")
          					flw_152:
/*<152>*/ 					switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          					  case 0:
          						flw_27:
/*< 27>*/ 						story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */] = true;
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00100700>Bueno, muchacho. ¡Si quieres dar\nunos cuantos cortes, no dudes en venir\na verme!")
/*<130>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 49, 'param3': 45}
/*< 49>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*<153>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x0007ff06>Oye...<pause 15> ahora que me fijo, veo que\nllevas una espada bastante cortita.<pause 10>\n¡No es cosa fácil manejarse bien\ncon una hoja así, no señor!\nPara cortar el bambú, lo mejor es usar\nuna espada mucho más larga. Así\nlo cortas fácilmente, ¡zas, zas, zas!\n\nHazme caso, que yo sé mucho de esto:\nbúscate una espada un poco más larga\ny ven a intentarlo entonces. ¡Ya verás\nqué diferencia!")
          						goto flw_27
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00070e05>Mmm... Aún estás algo verde. ¡Pero no\nha estado mal! Has ganado el premio\nde consolación. ¡Toma, 30 rupias!")
/*< 13>*/ 					rupees += 30;
/*<131>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0001ff00>La próxima vez intenta hacer\n<color red<20 cortes>coloroff>, ¿de acuerdo?")
          					goto flw_152
          				  case 2:
/*<  9>*/ 					printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0007ff0b>¡No está nada mal! Tu técnica es\nbastante aceptable.\n\n\n¡Toma! ¡Esto es para ti!")
/*< 14>*/ 					give_item(63 0x3F);
/*<132>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff00>¡La próxima vez quiero ver cómo\nconsigues <color red<28 cortes>coloroff>!")
          					goto flw_27
          				  case 3:
/*< 10>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000bff0c>¡Sí señor, así se usa la espada!\nNi yo, que he sido una estrella de esto,\nhe podido conseguir esa puntuación\nmuchas veces...\nToma, muchacho, ¡te lo has ganado!")
/*< 15>*/ 					give_item(64 0x40);
          					goto flw_27
          				}
          			  case 1:
          				goto flw_7
          			}
          		  case 1:
          			goto flw_7
          		}
          	  case 2:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00070e07>¿Se puede saber qué haces?\n¡El tiempo ya se ha acabado!")
          	}
          }

