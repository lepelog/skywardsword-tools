          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 25, unk: 1, line: 28 */ "<0x10009:0x00170209><0x10008:0x02cd>¡Espléndido, sin duda!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 0, unk: 25, line: 32 */ "<0x10009:0x00171a08>¡Hay que esforzarse al máximo\npara hacerlo bien!\n\n\n<0x10009:0x00090200>¿Quieres intentar hacer ahora\nel <color green<golpe de gracia>coloroff>?\n\n[1-]¡Claro![2]Mejor no")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00091d04>¿Qué te pasa, <heroname>?\nNo pareces el mismo de siempre...")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 25, unk: 1, line: 31 */ "<0x10009:0x00081d01>Mantente en el centro respecto a tus\nenemigos y blande la espada en\nel momento justo para hacer el\nataque giratorio.\n<0x10009:0x00090200>¿Quieres volver a intentarlo?\n\n[1-]Sí, vamos[2]Mejor no")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00080200>¡Magnífico! Se trata de cortar esos\ntroncos que te rodean sin moverte\ndel sitio con el<color red< >coloroff><color green<ataque giratorio>coloroff>.")
/*<165>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': -1, 'param3': 60}
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00081d03>¡Así! Con el enemigo en tierra, <color red<fíjalo\ncomo objetivo >coloroff>con (Z) y lánzate hacia él\npara darle el <color green<golpe de gracia>coloroff>.<0x10011:0x07cd>\n\n<0x10009:0x00091d00>¡Dale un corte lateral a ese tronco\ny, cuando esté caído, prueba esta\ntécnica con él!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 25, unk: 1, line: 34 */ "<0x10009:0x00171a09><0x10008:0x01cd>¡Brillante, muy bien!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 0, unk: 25, line: 35 */ "<0x10009:0x00190200>El <color green<golpe de gracia>coloroff> es una técnica muy\nefectiva para acabar con los enemigos\nque derribes con <color red<ataques de escudo >coloroff>o\ncon <color red<ataques giratorios>coloroff>.\n<0x10009:0x001c0200>No obstante, tus rivales tratarán de\nincorporarse enseguida, ¡así que\ntendrás tan solo unos instantes\npara hacerlo!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 0, unk: 25, line: 50 */ "<0x10009:0x00091901>¡Preséntale mis respetos al señor\nmesonero sin falta!")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000003>¡Oh...! ¿Me has traído más sopa\nde calabaza caliente?...\nTiene un aspecto exquisito...\n[1-]Sírvase[2-]Ejem...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 0, unk: 25, line: 47 */ "<0x10009:0x00171909>¡¿Es para mí?! ¿Seguro?...\nDisculpa, he dado por hecho que era\npara mí.\n\nPero bueno, con el aspecto que tiene...\n¡No te voy a decir que no!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						wait_frames(96)
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf(/* textboxtype: 0, unk: 25, line: 44 */ "¡Qué cosa más sabrosa, muchacho!<0x10005:0x001e0000>")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Está riquísima!\n\n\n\n<0x10009:0x00171900>¡La sopa de calabaza que prepara\nese mesonero es lo mejor del mundo,\nno me canso de tomarla!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf(/* textboxtype: 25, unk: 1, line: 49 */ "<0x10009:0x00080200>¡Gracias, <heroname>!\n¡Ahí tienes una pequeña muestra\nde gratitud!")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 25, unk: 1, line: 46 */ "<0x10006:0xfccd>...\n...<0x10006:0x00cd>\n\n\n<0x10009:0x00081900>¡Ja, ja, ja, ja!\n¡Es broma, es broma!")
/*< 65>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>¡Hola, <heroname>!\n¡¿Estás practicando con la espada\ncomo es debido?!\n\n<0x10009:0x00000200>¿Mmm?\n\n\n\n<0x10009:0x00001909>¡Pero...! ¡¿Es esa mi <color red<sopa de calabaza\n>coloroff>favorita?!\n\n\n<0x10009:0x00000200>Le había dejado encargado\nal mesonero que me la trajera...\n\n\n¡y resulta que te manda a ti cargado\ncon ella! Porque esa sopa es para mí,\n¿no?\n[1-]¡Claro![2]No...")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 25, line: 38 */ "<0x10009:0x00171909>¡Hurra! ¡Mi ansiada sopa!...\n¡Rápido! ¡Tráela aquí!\n\n[1-]Tome[2]Lo siento,\npero...")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							wait_frames(96)
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf(/* textboxtype: 0, unk: 25, line: 44 */ "¡Qué cosa más sabrosa, muchacho!<0x10005:0x001e0000>")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000013>¡Ah, es una auténtica delicia!\n\n\n\n<0x10009:0x00171900>¡La sopa de calabaza calentita es\nel mejor invento de la historia!\n")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf(/* textboxtype: 25, unk: 1, line: 43 */ "<0x10009:0x00081900>¡Buen trabajo, sí señor! ¡Preséntale mis\nrespetos al señor mesonero!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>¡¿Cómo?! ¿Hablas en serio?\n¿Entonces no te ha mandado\nel mesonero que me la traigas? \n¿Acaso es una broma?\n<0x10009:0x00081d00>Pues si esta sopa no es para mí,\n¡ve a traerme la mía de inmediato!\n¡Vamos, vamos!\n\n¡Y más te vale que esté caliente!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 25, unk: 1, line: 37 */ "<0x10009:0x000e1d00>Ya veo...\n¡¿Qué pretende ese mesonero?!\n¡Le dejé muy claro que quería\nmi sopa sin tardanza!\n<0x10009:0x00081d00>¡Sin mi ración diaria de sopa, me pongo\nmuy nervioso!...\n")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>¡Hola, <heroname>!\n¡¿Estás practicando con la espada\ncomo es debido?!\n\n<0x10009:0x00000200>¿Mmm?\n\n\n\n<0x10009:0x00001909>¡Pero...! ¡¿Es esa mi <color red<sopa de calabaza\n>coloroff>favorita?!\n\n\n<0x10009:0x00000200>Le había dejado encargado\nal mesonero que me la trajera...\n\n\n¡y resulta que te manda a ti cargado\ncon ella! Porque esa sopa es para mí,\n¿no?\n[1-]¡Claro![2]No...")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 0, unk: 25, line: 38 */ "<0x10009:0x00171909>¡Hurra! ¡Mi ansiada sopa!...\n¡Rápido! ¡Tráela aquí!\n\n[1-]Tome[2]Lo siento,\npero...")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								wait_frames(96)
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 25, unk: 1, line: 40 */ "¡Puaj! Qué asco...<pause 20>\n¡Esta sopa está helada!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf(/* textboxtype: 0, unk: 25, line: 41 */ "En esta vida hay dos cosas que no\nsoporto: ¡la sopa fría y los holgazanes!\n\n\n¡Tráeme más sopa, deprisa!\n¡Y esta vez que esté bien caliente,\ncomo debe ser!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>¡¿Cómo?! ¿Hablas en serio?\n¿Entonces no te ha mandado\nel mesonero que me la traigas? \n¿Acaso es una broma?\n<0x10009:0x00081d00>Pues si esta sopa no es para mí,\n¡ve a traerme la mía de inmediato!\n¡Vamos, vamos!\n\n¡Y más te vale que esté caliente!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 25, unk: 1, line: 37 */ "<0x10009:0x000e1d00>Ya veo...\n¡¿Qué pretende ese mesonero?!\n¡Le dejé muy claro que quería\nmi sopa sin tardanza!\n<0x10009:0x00081d00>¡Sin mi ración diaria de sopa, me pongo\nmuy nervioso!...\n")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 11, 'next': 25, 'param3': 32}
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 25, line: 5 */ "<0x10009:0x0b0d0002>¡Pero...! ¡Oye!<0x1000D:0x1900> ¡<heroname>!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00081d00>¡No está permitido sacar las espadas\ndel gimnasio!\n\n\n¡¿En qué estabas pensando?! \n¿Crees que puedo dejarte pasear\ncon eso por Neburia?\n")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 25, unk: 1, line: 7 */ "<0x10009:0x00000005>¿Cómo?\n<pause 40>¿Que no sabes dónde está tu neburí\n<pause 40>y pensabas ir a buscarlo?\n\nEntiendo cómo te sientes, pero...\n<0x10009:0x00090e00>Neburia es un lugar muy tranquilo\ny solo los caballeros pueden portar\nespadas. Así son las normas.\nSi piensas llevarte esa espada, al menos\ndemuéstrame que sabes cómo usarla...\nDeberías practicar un poco dándole\nunos cortes a estos troncos.")
/*< 74>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 27, 'param3': 42}
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 25, unk: 1, line: 13 */ "<0x10009:0x00000005>Ejem... ¿Quieres que te vuelva a\nexplicar las <color red<claves de la defensa>coloroff>?\n\n[1-]Práctica[2-]Teoría[3]No, gracias")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 20, 'param3': 60}
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 25, line: 14 */ "¿Quieres que te hable de la parte\n<color red<práctica>coloroff>? Bien, con mucho gusto.\n¡Presta mucha atención!\n\n<0x10009:0x00191d00>Si respondes a un ataque enemigo\ncon un golpe de tu escudo en\nel momento oportuno, puedes\n<color green<devolverle el ataque>coloroff>.\n<0x10009:0x001c1d00>Esta técnica, el <color red<ataque de escudo>coloroff>,\npermite desestabilizar al enemigo,\nlo que te dará la oportunidad de\nagarrarlo por sorpresa y contraatacar.\n<0x10009:0x000d0200>Es un método sumamente eficaz\ncontra enemigos que te lanzan\nobjetos o que no te dejan el más\nmínimo resquicio para atacarlos.")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0200>En un combate real, para ejecutar\nuna maniobra de defensa eficaz, es\nclave tener una buena coordinación.\n¡Hay que encontrar el momento justo!\n<0x10009:0x00080200>¿Por qué no practicas un poco con\nese <color red<tronco de >coloroff><color red<entrenamiento>coloroff>?")
          			  case 1:
/*<166>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 18, 'param3': 60}
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 25, line: 11 */ "<0x10009:0x001c0200>Cuando quieras defenderte, saca\nel <color red<escudo>coloroff>. ¡No es difícil de recordar,\nya lo ves!\n\n<0x10009:0x000e0200>Cuando quieras apartar el escudo,\n<color green<da un espadazo >coloroff>u oprime (B) para\nguardarlo y, de paso, envainar tu espada.\n\n<0x10009:0x00080200>Pero ten cuidado: aunque te estés\nprotegiendo con el escudo, en cuanto\n<color green<blandas la espada >coloroff><color red<tu guardia quedará\nal descubierto>coloroff>.")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 0, unk: 25, line: 17 */ "<0x10009:0x00090200>Entiendo...\nEs muy loable intentar hacer las cosas\npor uno mismo. ¿Por qué no practicas\nun rato con ese tronco?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 25, unk: 1, line: 10 */ "<0x10009:0x00000009>¡Oye, <heroname>!\n¡Qué buen escudo has conseguido!\n\n\n<0x10009:0x00190200>Bien, ahora solo queda enseñarte\nel <color red<arte de la defensa>coloroff>. ¡Para empezar,\n<color red<los conceptos básicos>coloroff>!")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 25, line: 11 */ "<0x10009:0x001c0200>Cuando quieras defenderte, saca\nel <color red<escudo>coloroff>. ¡No es difícil de recordar,\nya lo ves!\n\n<0x10009:0x000e0200>Cuando quieras apartar el escudo,\n<color green<da un espadazo >coloroff>u oprime (B) para\nguardarlo y, de paso, envainar tu espada.\n\n<0x10009:0x00080200>Pero ten cuidado: aunque te estés\nprotegiendo con el escudo, en cuanto\n<color green<blandas la espada >coloroff><color red<tu guardia quedará\nal descubierto>coloroff>.")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00091d00>Vamos, prueba a ver qué tal lo haces.")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
/*<164>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': -1, 'param3': 60}
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 0, unk: 25, line: 8 */ "<0x10009:0x00081d04><heroname>...\nEl director me ha contado lo ocurrido.\nEstoy muy preocupado por Zelda...\n\nVerás, no es que sepa mucho del tema,\npero sí hay algo que debo decirte.\n\n\nEsa espada que portas no es obra de\nartesanos de Neburia. Es una <color red<ancestral\nreliquia divina>coloroff> reservada solo para\nel brazo del elegido.\nMe gustaría poder darte más\ninformación, pero es todo lo que sé.")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001d04><heroname>, ojalá pudiera hacer\nalgo más por ti...\n\n\nAunque hay una última lección\n<0x10009:0x00191d00>que podría enseñarte... \n¡El <color red<arte de la defensa>coloroff>!\n\n<0x10009:0x00000200>¡Empecemos por los aspectos <color red<básicos>coloroff>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00191d01>El arte del escudo es, en suma, el arte\nde la defensa. ¡Debes guardar\nperfecto equilibrio entre ataque\ny defensa para salir victorioso!\n<0x10009:0x00080e00>Si tienes un <color red<escudo>coloroff>, puedes volver\naquí para practicar las técnicas de\nataque y defensa. En el <color red<bazar>coloroff> siempre\ntienen alguno a la venta...\n<0x10009:0x00091d00>¡Si quieres conservar el pellejo, harías\nbien en seguir mis consejos!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 25, line: 8 */ "<0x10009:0x00081d04><heroname>...\nEl director me ha contado lo ocurrido.\nEstoy muy preocupado por Zelda...\n\nVerás, no es que sepa mucho del tema,\npero sí hay algo que debo decirte.\n\n\nEsa espada que portas no es obra de\nartesanos de Neburia. Es una <color red<ancestral\nreliquia divina>coloroff> reservada solo para\nel brazo del elegido.\nMe gustaría poder darte más\ninformación, pero es todo lo que sé.")
/*<158>*/ 				printf(/* textboxtype: 25, unk: 1, line: 16 */ "<0x10009:0x00001d00><heroname>, me temo que así no\npuedo ayudarte... Primero consigue\nun <color red<escudo>coloroff> y vuelve a hablar conmigo.\n\n<0x10009:0x00191d00>¡Solo entonces podré enseñarte\nel <color red<arte de la defensa>coloroff>! Es lo menos\nque puedo hacer por mi alumno antes\nde dejar que se vaya a la aventura.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 25, unk: 1, line: 1 */ "<0x10009:0x00000005>¿Eh?\n¿Acaso quieres que te recuerde cómo\nse maneja una espada?\n[1-]Por favor[2]No, gracias")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00090203>¡El arte de la espada es bien sencillo!\nLo único que debes hacer es tener en\ncuenta la dirección en la que blandes\ntu arma.\nMuévela de arriba abajo para soltar\nun <color green<corte vertical>coloroff> o muévela en horizontal\npara dar uno <color green<lateral>coloroff>.\n\nPara asestar una <color green<estocada>coloroff>, muévela\nhacia delante, extendiendo el brazo.\n\n\n<0x10009:0x00170200>Y por último, la técnica más potente...\n¡El <color green<ataque giratorio>coloroff>! Es el movimiento\nideal para cuando estés rodeado\nde enemigos.\n<0x10009:0x00181d00>Con estos tres movimientos tendrás\nlo suficiente para enfrentar cualquier\ncosa. Pero nunca olvides lo más esencial\nen esgrima...\n<0x10009:0x00001d04>Me refiero a <color red<fijar un objetivo >coloroff>con (Z).\n¡En cuanto veas un enemigo, oprime (Z)\nlo más rápido que puedas!<0x10011:0x07cd>\n")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 25, unk: 1, line: 4 */ "<0x10009:0x001c1d03>¿Por qué no practicas un poco con esos\n<color red<troncos>coloroff>? ¡No hay nada igual para pulir\ntu técnica!\n\n<0x10009:0x00090200>Si no sabes muy bien por dónde atacar\nal leño, accede a <color red<Ayuda>coloroff> con <icon 19>.<0x10011:0x0bcd>\n\n\n<0x10009:0x00080200>Si eres capaz de cortarlos todos,\nte enseñaré una <color red<técnica secreta>coloroff>\nde lo más efectiva.")
/*<163>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': -1, 'param3': 60}
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 25, line: 2 */ "<0x10009:0x000e1a08>No me extraña. A ti siempre se te\nha dado muy bien la esgrima.\n\n\n<0x10009:0x00080200>Pero nunca está de más practicar\nun poco para mejorar tus estocadas\ny afianzar tus conocimientos.\n\n<0x10009:0x00191d00>Sobre todo lo de <color red<fijar el objetivo\n>coloroff>con (Z). ¡Eso es la base de la esgrima!<0x10011:0x07cd>")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>¡Hola, <heroname>!\n\n\n\n<0x10009:0x00090200>¿De modo que hoy se celebra el torneo\nceleste, pero tú quieres entrenar\nde todas formas? ¡Impresionante!\n\nTengo una buena espada para ti\nen la sala de ahí atrás. Ve y tráela.\n\n\nVen a consultarme si hay algo que no\nentiendes sobre el uso de la espada.\n¡Estoy a tu disposición!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 25, unk: 1, line: 19 */ "<0x10009:0x00010201>En ese tronco puedes practicar el <color red<corte\nvertical>coloroff>. Apunta con la espada hacia\narriba y haz un rápido movimiento\nhacia abajo para cortar el tronco.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 25, line: 20 */ "<0x10009:0x00190203>En ese tronco puedes practicar\nel <color red<corte lateral>coloroff>. Sujeta la espada en\nposición horizontal y haz un rápido\nmovimiento de izquierda a derecha.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x001d0202>En ese tronco puedes practicar\nel <color red<corte oblicuo>coloroff>. Haz un rápido \nmovimiento en diagonal con\nla espada para cortar el tronco.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 25, unk: 1, line: 22 */ "<0x10009:0x00080203>En ese tronco puedes practicar\nla <color red<estocada>coloroff>. Mueve rápidamente la espada\nhacia delante y pincharás con la punta.\nConsulta <color red<Ayuda>coloroff> para más detalles.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00190202>Con ese tronco puedes practicar\nla <color red<defensa>coloroff>.\n\n\n<0x10009:0x001c1d00>Golpéalo con la espada y, después, realiza\nun <color red<ataque de escudo >coloroff>cuando el tronco\nvuelva hacia ti.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 25, unk: 1, line: 25 */ "<0x10009:0x00191d02>Con ese tronco de ahí podrás practicar\ntu <color red<defensa>coloroff>, ¡así que procura agarrar\nbien el <color red<escudo >coloroff>y no te descuides ni un\nsegundo si no quieres salir volando!")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 0, unk: 25, line: 23 */ "<0x10009:0x00191d02>En ese tronco de ahí puedes practicar\nla <color red<defensa>coloroff>, pero como no llevas ningún\n<color red<escudo >coloroff>equipado, más vale que no te\nacerques o te llevarás un buen golpe.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 0, unk: 25, line: 29 */ "<0x10009:0x000a0213>¡Soberbio, <heroname>!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 0, unk: 25, line: 26 */ "<0x10009:0x00081908>Eres un espadachín de primera.\n¡Como maestro tuyo me siento muy\norgulloso, muchacho!\n\n<0x10009:0x00090200>¿Sigues con fuerzas para practicar\ntambién el <color green<ataque giratorio>coloroff>?\n\n[1-]¡Claro![2]Mejor no")
          }

