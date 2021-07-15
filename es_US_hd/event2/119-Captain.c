          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CD¡Espléndido, sin duda!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf("\x0E\x01\x09\x04\x17\x1A08¡Hay que esforzarse al máximo\npara hacerlo bien!\n\n\n\x0E\x01\x09\x04\x09\x200¿Quieres intentar hacer ahora\nel <g<golpe de gracia>>?\n\n[1]¡Claro![2-]Mejor no")
          	  case 1:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x09\x1D04¿Qué te pasa, Link?\nNo pareces el mismo de siempre...")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf("\x0E\x01\x09\x04\x08\x1D01Mantente en el centro respecto a tus\nenemigos y blande la espada en\nel momento justo para hacer el\nataque giratorio.\n\x0E\x01\x09\x04\x09\x200¿Quieres volver a intentarlo?\n\n[1]Sí, vamos[2-]Mejor no")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x08\x200¡Magnífico! Se trata de cortar esos\ntroncos que te rodean sin moverte\ndel sitio con el<r< >><g<ataque giratorio>>.")
/*<165>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': -1, 'param3': 60}
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf("\x0E\x01\x09\x04\x08\x1D03¡Así! Con el enemigo en tierra, <r<fíjalo\ncomo objetivo >>con (Z) y lánzate hacia él\npara darle el <g<golpe de gracia>>.\x0E\x01\x11\x02\x7CD\n\n\x0E\x01\x09\x04\x09\x1D00¡Dale un corte lateral a ese tronco\ny, cuando esté caído, prueba esta\ntécnica con él!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CD¡Brillante, muy bien!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf("\x0E\x01\x09\x04\x19\x200El <g<golpe de gracia>> es una técnica muy\nefectiva para acabar con los enemigos\nque derribes con <r<ataques de escudo >>o\ncon <r<ataques giratorios>>.\n\x0E\x01\x09\x04\x1C\x200No obstante, tus rivales tratarán de\nincorporarse enseguida, ¡así que\ntendrás tan solo unos instantes\npara hacerlo!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf("\x0E\x01\x09\x04\x09\x1901¡Preséntale mis respetos al señor\nmesonero sin falta!")
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
/*< 58>*/ 					printf("\x0E\x01\x09\x04\x00\x03¡Oh...! ¿Me has traído más sopa\nde calabaza caliente?...\nTiene un aspecto exquisito...\n[1]Sírvase[2]Ejem...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf("\x0E\x01\x09\x04\x17\x1909¡¿Es para mí?! ¿Seguro?...\nDisculpa, he dado por hecho que era\npara mí.\n\nPero bueno, con el aspecto que tiene...\n¡No te voy a decir que no!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 101, 'param3': 6}
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf("¡Qué cosa más sabrosa, muchacho!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf("¡Está riquísima!\n\n\n\n\x0E\x01\x09\x04\x17\x1900¡La sopa de calabaza que prepara\nese mesonero es lo mejor del mundo,\nno me canso de tomarla!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf("\x0E\x01\x09\x04\x08\x200¡Gracias, Link!\n¡Ahí tienes una pequeña muestra\nde gratitud!")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf("\x0E\x01\x06\x02\xFCCD...\n...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x08\x1900¡Ja, ja, ja, ja!\n¡Es broma, es broma!")
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
/*< 37>*/ 					printf("\x0E\x01\x09\x04\x08\x1901¡Hola, Link!\n¡¿Estás practicando con la espada\ncomo es debido?!\n\n\x0E\x01\x09\x04\x00\x200¿Mmm?\n\n\n\n\x0E\x01\x09\x04\x00\x1909¡Pero...! ¡¿Es esa mi <r<sopa de calabaza\n>>favorita?!\n\n\n\x0E\x01\x09\x04\x00\x200Le había dejado encargado\nal mesonero que me la trajera...\n\n\n¡y resulta que te manda a ti cargado\ncon ella! Porque esa sopa es para mí,\n¿no?\n[1]¡Claro![2-]No...")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x17\x1909¡Hurra! ¡Mi ansiada sopa!...\n¡Rápido! ¡Tráela aquí!\n\n[1]Tome[2-]Lo siento,\npero...")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 92, 'param3': 6}
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf("¡Qué cosa más sabrosa, muchacho!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\x13¡Ah, es una auténtica delicia!\n\n\n\n\x0E\x01\x09\x04\x17\x1900¡La sopa de calabaza calentita es\nel mejor invento de la historia!\n")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf("\x0E\x01\x09\x04\x08\x1900¡Buen trabajo, sí señor! ¡Preséntale mis\nrespetos al señor mesonero!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x00\x1D00¡¿Cómo?! ¿Hablas en serio?\n¿Entonces no te ha mandado\nel mesonero que me la traigas? \n¿Acaso es una broma?\n\x0E\x01\x09\x04\x08\x1D00Pues si esta sopa no es para mí,\n¡ve a traerme la mía de inmediato!\n¡Vamos, vamos!\n\n¡Y más te vale que esté caliente!")
          						}
          					  case 1:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x0E\x1D00Ya veo...\n¡¿Qué pretende ese mesonero?!\n¡Le dejé muy claro que quería\nmi sopa sin tardanza!\n\x0E\x01\x09\x04\x08\x1D00¡Sin mi ración diaria de sopa, me pongo\nmuy nervioso!...\n")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x08\x1901¡Hola, Link!\n¡¿Estás practicando con la espada\ncomo es debido?!\n\n\x0E\x01\x09\x04\x00\x200¿Mmm?\n\n\n\n\x0E\x01\x09\x04\x00\x1909¡Pero...! ¡¿Es esa mi <r<sopa de calabaza\n>>favorita?!\n\n\n\x0E\x01\x09\x04\x00\x200Le había dejado encargado\nal mesonero que me la trajera...\n\n\n¡y resulta que te manda a ti cargado\ncon ella! Porque esa sopa es para mí,\n¿no?\n[1]¡Claro![2-]No...")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x17\x1909¡Hurra! ¡Mi ansiada sopa!...\n¡Rápido! ¡Tráela aquí!\n\n[1]Tome[2-]Lo siento,\npero...")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 89, 'param3': 6}
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf("¡Puaj! Qué asco...<pause14>\n¡Esta sopa está helada!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf("En esta vida hay dos cosas que no\nsoporto: ¡la sopa fría y los holgazanes!\n\n\n¡Tráeme más sopa, deprisa!\n¡Y esta vez que esté bien caliente,\ncomo debe ser!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf("\x0E\x01\x09\x04\x00\x1D00¡¿Cómo?! ¿Hablas en serio?\n¿Entonces no te ha mandado\nel mesonero que me la traigas? \n¿Acaso es una broma?\n\x0E\x01\x09\x04\x08\x1D00Pues si esta sopa no es para mí,\n¡ve a traerme la mía de inmediato!\n¡Vamos, vamos!\n\n¡Y más te vale que esté caliente!")
          							}
          						  case 1:
/*< 38>*/ 							printf("\x0E\x01\x09\x04\x0E\x1D00Ya veo...\n¡¿Qué pretende ese mesonero?!\n¡Le dejé muy claro que quería\nmi sopa sin tardanza!\n\x0E\x01\x09\x04\x08\x1D00¡Sin mi ración diaria de sopa, me pongo\nmuy nervioso!...\n")
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
/*< 25>*/ 	printf("\x0E\x01\x09\x04\xB0D\x02¡Pero...! ¡Oye!\x0E\x01\x0D\x02\x1900 ¡Link!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x08\x1D00¡No está permitido sacar las espadas\ndel gimnasio!\n\n\n¡¿En qué estabas pensando?! \n¿Crees que puedo dejarte pasear\ncon eso por Neburia?\n")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x05¿Cómo?\n<pause28>¿Que no sabes dónde está tu neburí\n<pause28>y pensabas ir a buscarlo?\n\nEntiendo cómo te sientes, pero...\n\x0E\x01\x09\x04\x09\xE00Neburia es un lugar muy tranquilo\ny solo los caballeros pueden portar\nespadas. Así son las normas.\nSi piensas llevarte esa espada, al menos\ndemuéstrame que sabes cómo usarla...\nDeberías practicar un poco dándole\nunos cortes a estos troncos.")
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
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x05Ejem... ¿Quieres que te vuelva a\nexplicar las <r<claves de la defensa>>?\n\n[1]Práctica[2]Teoría[3-]No, gracias")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 20, 'param3': 60}
/*< 20>*/ 				printf("¿Quieres que te hable de la parte\n<r<práctica>>? Bien, con mucho gusto.\n¡Presta mucha atención!\n\n\x0E\x01\x09\x04\x19\x1D00Si respondes a un ataque enemigo\ncon un golpe de tu escudo en\nel momento oportuno, puedes\n<g<devolverle el ataque>>.\n\x0E\x01\x09\x04\x1C\x1D00Esta técnica, el <r<ataque de escudo>>,\npermite desestabilizar al enemigo,\nlo que te dará la oportunidad de\nagarrarlo por sorpresa y contraatacar.\n\x0E\x01\x09\x04\x0D\x200Es un método sumamente eficaz\ncontra enemigos que te lanzan\nobjetos o que no te dejan el más\nmínimo resquicio para atacarlos.")
          				flw_21:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x0E\x200En un combate real, para ejecutar\nuna maniobra de defensa eficaz, es\nclave tener una buena coordinación.\n¡Hay que encontrar el momento justo!\n\x0E\x01\x09\x04\x08\x200¿Por qué no practicas un poco con\nese <r<tronco de >><r<entrenamiento>>?")
          			  case 1:
/*<166>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 18, 'param3': 60}
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Cuando quieras defenderte, saca\nel <r<escudo>>. ¡No es difícil de recordar,\nya lo ves!\n\n\x0E\x01\x09\x04\x0E\x200Cuando quieras apartar el escudo,\n<g<da un espadazo >>u oprime (B) para\nguardarlo y, de paso, envainar tu espada.\n\n\x0E\x01\x09\x04\x08\x200Pero ten cuidado: aunque te estés\nprotegiendo con el escudo, en cuanto\n<g<blandas la espada >><r<tu guardia quedará\nal descubierto>>.")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x09\x200Entiendo...\nEs muy loable intentar hacer las cosas\npor uno mismo. ¿Por qué no practicas\nun rato con ese tronco?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x09\x04\x00\x09¡Oye, Link!\n¡Qué buen escudo has conseguido!\n\n\n\x0E\x01\x09\x04\x19\x200Bien, ahora solo queda enseñarte\nel <r<arte de la defensa>>. ¡Para empezar,\n<r<los conceptos básicos>>!")
          				flw_15:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Cuando quieras defenderte, saca\nel <r<escudo>>. ¡No es difícil de recordar,\nya lo ves!\n\n\x0E\x01\x09\x04\x0E\x200Cuando quieras apartar el escudo,\n<g<da un espadazo >>u oprime (B) para\nguardarlo y, de paso, envainar tu espada.\n\n\x0E\x01\x09\x04\x08\x200Pero ten cuidado: aunque te estés\nprotegiendo con el escudo, en cuanto\n<g<blandas la espada >><r<tu guardia quedará\nal descubierto>>.")
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x1D00Vamos, prueba a ver qué tal lo haces.")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
/*<164>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': -1, 'param3': 60}
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04Link...\nEl director me ha contado lo ocurrido.\nEstoy muy preocupado por Zelda...\n\nVerás, no es que sepa mucho del tema,\npero sí hay algo que debo decirte.\n\n\nEsa espada que portas no es obra de\nartesanos de Neburia. Es una <r<ancestral\nreliquia divina>> reservada solo para\nel brazo del elegido.\nMe gustaría poder darte más\ninformación, pero es todo lo que sé.")
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x1D04Link, ojalá pudiera hacer\nalgo más por ti...\n\n\nAunque hay una última lección\n\x0E\x01\x09\x04\x19\x1D00que podría enseñarte... \n¡El <r<arte de la defensa>>!\n\n\x0E\x01\x09\x04\x00\x200¡Empecemos por los aspectos <r<básicos>>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x19\x1D01El arte del escudo es, en suma, el arte\nde la defensa. ¡Debes guardar\nperfecto equilibrio entre ataque\ny defensa para salir victorioso!\n\x0E\x01\x09\x04\x08\xE00Si tienes un <r<escudo>>, puedes volver\naquí para practicar las técnicas de\nataque y defensa. En el <r<bazar>> siempre\ntienen alguno a la venta...\n\x0E\x01\x09\x04\x09\x1D00¡Si quieres conservar el pellejo, harías\nbien en seguir mis consejos!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04Link...\nEl director me ha contado lo ocurrido.\nEstoy muy preocupado por Zelda...\n\nVerás, no es que sepa mucho del tema,\npero sí hay algo que debo decirte.\n\n\nEsa espada que portas no es obra de\nartesanos de Neburia. Es una <r<ancestral\nreliquia divina>> reservada solo para\nel brazo del elegido.\nMe gustaría poder darte más\ninformación, pero es todo lo que sé.")
/*<158>*/ 				printf("\x0E\x01\x09\x04\x00\x1D00Link, me temo que así no\npuedo ayudarte... Primero consigue\nun <r<escudo>> y vuelve a hablar conmigo.\n\n\x0E\x01\x09\x04\x19\x1D00¡Solo entonces podré enseñarte\nel <r<arte de la defensa>>! Es lo menos\nque puedo hacer por mi alumno antes\nde dejar que se vaya a la aventura.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x05¿Eh?\n¿Acaso quieres que te recuerde cómo\nse maneja una espada?\n[1]Por favor[2-]No, gracias")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x09\x203¡El arte de la espada es bien sencillo!\nLo único que debes hacer es tener en\ncuenta la dirección en la que blandes\ntu arma.\nMuévela de arriba abajo para soltar\nun <g<corte vertical>> o muévela en horizontal\npara dar uno <g<lateral>>.\n\nPara asestar una <g<estocada>>, muévela\nhacia delante, extendiendo el brazo.\n\n\n\x0E\x01\x09\x04\x17\x200Y por último, la técnica más potente...\n¡El <g<ataque giratorio>>! Es el movimiento\nideal para cuando estés rodeado\nde enemigos.\n\x0E\x01\x09\x04\x18\x1D00Con estos tres movimientos tendrás\nlo suficiente para enfrentar cualquier\ncosa. Pero nunca olvides lo más esencial\nen esgrima...\n\x0E\x01\x09\x04\x00\x1D04Me refiero a <r<fijar un objetivo >>con (Z).\n¡En cuanto veas un enemigo, oprime (Z)\nlo más rápido que puedas!\x0E\x01\x11\x02\x7CD\n")
          						flw_7:
/*<  7>*/ 						printf("\x0E\x01\x09\x04\x1C\x1D03¿Por qué no practicas un poco con esos\n<r<troncos>>? ¡No hay nada igual para pulir\ntu técnica!\n\n\x0E\x01\x09\x04\x09\x200Si no sabes muy bien por dónde atacar\nal leño, accede a <r<Ayuda>> con \x0E\x02\x04\x02\x13CD.\x0E\x01\x11\x02\xBCD\n\n\n\x0E\x01\x09\x04\x08\x200Si eres capaz de cortarlos todos,\nte enseñaré una <r<técnica secreta>>\nde lo más efectiva.")
/*<163>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': -1, 'param3': 60}
          					  case 1:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x0E\x1A08No me extraña. A ti siempre se te\nha dado muy bien la esgrima.\n\n\n\x0E\x01\x09\x04\x08\x200Pero nunca está de más practicar\nun poco para mejorar tus estocadas\ny afianzar tus conocimientos.\n\n\x0E\x01\x09\x04\x19\x1D00Sobre todo lo de <r<fijar el objetivo\n>>con (Z). ¡Eso es la base de la esgrima!\x0E\x01\x11\x02\x7CD")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x03¡Hola, Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200¿De modo que hoy se celebra el torneo\nceleste, pero tú quieres entrenar\nde todas formas? ¡Impresionante!\n\nTengo una buena espada para ti\nen la sala de ahí atrás. Ve y tráela.\n\n\nVen a consultarme si hay algo que no\nentiendes sobre el uso de la espada.\n¡Estoy a tu disposición!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x01\x201En ese tronco puedes practicar el <r<corte\nvertical>>. Apunta con la espada hacia\narriba y haz un rápido movimiento\nhacia abajo para cortar el tronco.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x19\x203En ese tronco puedes practicar\nel <r<corte lateral>>. Sujeta la espada en\nposición horizontal y haz un rápido\nmovimiento de izquierda a derecha.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x09\x04\x1D\x202En ese tronco puedes practicar\nel <r<corte oblicuo>>. Haz un rápido \nmovimiento en diagonal con\nla espada para cortar el tronco.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf("\x0E\x01\x09\x04\x08\x203En ese tronco puedes practicar\nla <r<estocada>>. Mueve rápidamente la espada\nhacia delante y pincharás con la punta.\nConsulta <r<Ayuda>> para más detalles.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x19\x202Con ese tronco puedes practicar\nla <r<defensa>>.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Golpéalo con la espada y, después, realiza\nun <r<ataque de escudo >>cuando el tronco\nvuelva hacia ti.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02Con ese tronco de ahí podrás practicar\ntu <r<defensa>>, ¡así que procura agarrar\nbien el <r<escudo >>y no te descuides ni un\nsegundo si no quieres salir volando!")
          		  case 1:
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02En ese tronco de ahí puedes practicar\nla <r<defensa>>, pero como no llevas ningún\n<r<escudo >>equipado, más vale que no te\nacerques o te llevarás un buen golpe.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf("\x0E\x01\x09\x04\n\x213¡Soberbio, Link!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf("\x0E\x01\x09\x04\x08\x1908Eres un espadachín de primera.\n¡Como maestro tuyo me siento muy\norgulloso, muchacho!\n\n\x0E\x01\x09\x04\x09\x200¿Sigues con fuerzas para practicar\ntambién el <g<ataque giratorio>>?\n\n[1]¡Claro![2-]Mejor no")
          }

