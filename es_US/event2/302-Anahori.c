          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf("¡Hola, amigo!")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf("Se trata de escarbar en busca\nde rupias hasta que te encuentres\nuna bomba y... ¡pum, se acabó!\n¿Qué, quieres jugar... una partidita?\n\x0E\x01\x09\x04\x14\x1614Aunque ahora que me fijo... Estás\nbastante debilucho, amigo. Será mejor\nque vuelvas cuando andes mejor\nde salud.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf("Si quieres puedes sentarte\nahí a descansar.")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf("¡Saca rupias hasta que no puedas más!\nO hasta que salga la bomba, claro...\n¿Quieres jugar a <b<Agujeros y rupias>>?\n[1]Principiante[2]Intermedio[3]Experto[4-]No, gracias")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf("Cada partida cuesta <r<30 rupias>>.\n¿Qué me dices?\n\n[1]¡Vamos![2-]Mejor no")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf("Muy bien, ¡buena suerte con esas\nrupias! ¡A ver qué tal lo haces!\n")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf("Ay, ¡me temo que no tienes suficientes\nrupias, amigo! Vuelve cuando hayas\nahorrado un poco, ¿sí?")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf("¿En qué nivel quieres jugar?\n[1]Principiante[2]Intermedio[3]Experto[4-]Mejor no")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf("El nivel principiante tiene menos\nagujeros. Ideal para... principiantes.\n¡Je, je! Es fácil y divertido.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf("Son <r<50 rupias>> la partida.\n¿Qué, te interesa?\n\n[1]Sí[2-]Mejor no")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf("Muy bien, ¡buena suerte con esas\nrupias! ¡A ver qué tal lo haces!\n")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf("Ay, ¡me temo que no tienes suficientes\nrupias, amigo! Vuelve cuando hayas\nahorrado un poco, ¿sí?")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf("¿En qué nivel quieres jugar?\n[1]Principiante[2]Intermedio[3]Experto[4-]Mejor no")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf("En el nivel intermedio hay algunos\nagujeros más. ¡Pero ten cuidado\ncon las <y<rupobres>>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf("La partida cuesta <r<70 rupias>>.\n¿Qué me dices?\n\n[1]Juego[2-]Mejor no")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf("Muy bien, ¡buena suerte con esas\nrupias! ¡A ver qué tal lo haces!\n")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf("Ay, ¡me temo que no tienes suficientes\nrupias, amigo! Vuelve cuando hayas\nahorrado un poco, ¿sí?")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf("¿En qué nivel quieres jugar?\n[1]Principiante[2]Intermedio[3]Experto[4-]Mejor no")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf("En el nivel experto hay más bombas,\npero también las rupias son de mayor\nvalor. ¡No lo olvides! ¡El que no\narriesga no gana!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf("¡Aquí estaré si cambias de idea, amigo!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf("Es tu primera vez, ¿verdad? \n¡Es un orgullo!")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf("¡Yo soy el gran <b<Nabucco>>! ¡Y me encargo\ndel juego de <r<Agujeros y rupias>>!")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf("Esta vez has logrado encontrar\n<r<<numeric arg0> \x0E\x03\x04\x02\x1CD>>.")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf("¡¿Pero qué...?! ¿No has encontrado\nni una sola rupia? Pobre...")
          				flw_103:
/*<103>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 81, 'param3': 13}
/*< 81>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 108, 'param3': 12}
/*<108>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 45}
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 56, 'param3': 13}
/*< 56>*/ 						printf("Chico, pareces estar cansadísimo.\nRecupera corazones y vuelve a\nintentarlo en otro momento, ¿eh?")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf("Si quieres puedes sentarte a descansar\nun rato allí.")
          					  case 1:
/*<  2>*/ 						printf("Creo que te vendría bien intentarlo\nde nuevo. ¿Qué me dices?\n[1]Principiante[2]Intermedio[3]Experto[4-]Mejor no")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf("Ahí va un consejito... <r<Si las rupias\nson de poco valor>>, no habrá muchos\n<r<agujeros contiguos con trampa>>, así que\npodrás relajarte, que pareces tenso.\nSin embargo, cuanto <r<más valiosas\nsean las rupias>>, <r<más agujeros contiguos\ncon trampa >>habrá. Ahí tendrás\nque estar muy atento.\nPero al primer agujero que te\nencuentres una bomba...<pause14> ¡pum!\nTendrás que admitir tu derrota.\n¡Y no te desesperes!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf("Has perdido dinero. \nDas bastante pena...")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf("Solo has perdido un poco. Eso es mala\nsuerte y nada más.")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf("Al final, te has quedado igual.")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf("Bueno, no está nada mal.\nEstarás contento, ¿no?")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf("¡Has ganado una fortuna!\n¡Felicidades, amigo!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf("Esta vez has logrado encontrar...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf("¡Impresionante! ¡Has encontrado todas\nlas rupias! Toma, esto es para ti, te lo\nhas ganado.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("Estimado cliente, gracias por\njugar a <r<Agujeros y rupias>>.\nPermítame darle un consejito\nbuenísimo.\n<r<Si las rupias son de poco valor>>,\nno habrá demasiados <r<agujeros\ncontiguos con trampa>>, así que\npuede relajarse.\nNo obstante, cuanto <r<más valga\nla rupia>>, <r<más agujeros contiguos\ncon trampa>> habrá. Así que debe\nestar atento. ¡Adiós!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("Se te está acabando el tiempo...\nSi fuera tú, intentaría darme un\npoco más de prisa, en serio.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf("¡Se te ha agotado el tiempo!\nLo siento, pero no te lo puedes tomar\ncon TANTA calma, amigo.")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf("\x0E\x01\x09\x04\x08\xA04Ah, ya veo, vas a descansar\nun ratito, ¿no?\n\n\nYa que no tienes nada que hacer,\npodíamos charlar un rato, ¿no crees?\n[1]Claro[2-]No, gracias")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf("\x0E\x01\x09\x04\x0F\x110C¡Genial! A ver, a ver. ¿Quieres\npreguntarme algo?\n\x0E\x01\x09\x04\x08\xAFF[1]¿Quién\neres?[2]¿Levitas?[3]¿Aquí llega\nel sol?[4-]Olvídalo\x0E\x01\x09\x04\x13\x16FF")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x08\xA04¡Yo soy el gran <b<Nabucco>>! ¡El encargado\nde <r<Agujeros y rupias>>! Es decir, que\naquí mando yo.\n\n\x0E\x01\x09\x04\x09\xB09Pero me gustan los ambientes\ninformales, así que puedes tratarme\ncon toda confianza, amigo.\n")
          				flw_128:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x13\x1806¿Más preguntas?[1]¿Quién\neres?[2]¿Levitas?[3]¿Aquí llega\nel sol?[4-]No, gracias")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x08\xA04¿Que quién soy? Verás, ¡yo soy el gran\n<b<Nabucco>>! ¡El encargado de <r<Agujeros y\nrupias>>! Es decir, que aquí mando yo.\n\nPero me gustan los ambientes\ninformales, así que puedes tratarme\ncon toda confianza, \x0E\x01\x09\x04\x0D\xF01amigo.\n\n\x0E\x01\x09\x04\x08\xA09Abrí este negocio de <b<Agujeros y rupias\n>>porque siempre me ha gustado ver\nsonreír a mis amigos cuando amasan\nenormes fortunas.\n\x0E\x01\x09\x04\x10\x1319Pero todos los <b<mogmas >>dicen que \nencontrar las rupias es facilísimo\ny que no quieren jugar...\n\n\x0E\x01\x09\x04\x08\xAFFPor eso me encantaría que te\nconvirtieras en cliente habitual,\n¡sería lo mejor que me ha pasado!")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf("\x0E\x01\x09\x04\x08\xA04¿Que quién soy? Verás, ¡yo soy el gran\n<b<Nabucco>>! ¡El encargado de <r<Agujeros y\nrupias>>! Es decir, que aquí mando yo.\n\nPero me gustan los ambientes\ninformales, así que puedes tratarme\ncon toda confianza, \x0E\x01\x09\x04\x0D\xF01amigo.\n\n\x0E\x01\x09\x04\x08\xA09Abrí este negocio de <b<Agujeros y rupias\n>>porque siempre me ha gustado ver\nsonreír a mis amigos cuando amasan\nenormes fortunas.\n\x0E\x01\x09\x04\x10\x1319Pero últimamente toda la zona se está\nllenando de horribles monstruos rojos\nque andan a sus anchas y ningún\n<b<mogma >>se atreve a venir por aquí.\n\x0E\x01\x09\x04\x08\xAFFNo te imaginas lo que agradecería que\nalguien les reventase sus <r<torretas >>con\nun buen <pling>¡bum! y se fueran corriendo\nde aquí de una vez por todas.")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf("\x0E\x01\x09\x04\x08\xA05No, no levito. Lo que pasa es que así\nlos clientes pueden contemplar mis\nfantásticas y <r<musculosas patas>>,\nque son de lo mejor.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf("\x0E\x01\x09\x04\x14\x1605Je, je, je... No, no levito.\n¡Me apoyo sobre la colita!")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf("\x0E\x01\x09\x04\x00\nY supongo que ya habrás observado\nlas fantásticas y<r< musculosas patas>>\nque la Diosa me ha dado, ¿no?")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf("\x0E\x01\x09\x04\x08\xAFFReconozco que me encanta que mis\nclientes las admiren. Por eso me apoyo\nen la cola. ¡Es toda una estrategia\ncomercial!")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x08\xA09No, aquí no entra el sol ni aunque\nlo invites. ¡Llevo los lentes por estar\na la última moda!")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf("\x0E\x01\x09\x04\x14\x160A¿Lo dices por los lentes? Je, je.\nNo son verdaderos. ¡Los llevo porque\nme hacen parecer aún más interesante\nde lo que soy!")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf("\x0E\x01\x09\x04\x14\xE0B¿Y qué me dices del <r<bigote>>?\nTan lustroso y rizadito.\n¡Me lo cuido muchísimo!")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf("\x0E\x01\x09\x04\x08\xAFFPero esto es todo pura mercadotecnia.\n¡Mis clientes se merecen que los reciba\nde la mejor forma posible!")
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (zone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf("\x0E\x01\x09\x04\x10\x1319¿Nada de nada? Qué pena... Bueno,\nno importa. Tómatelo con calma y,\nsi quieres, juega una partida de \n<b<Agujeros y rupias >>un siglo de estos.")
          						  case 1:
/*<141>*/ 							printf("\x0E\x01\x09\x04\x10\x1319¿Nada de nada? Qué pena.\n\x0E\x01\x09\x04\x0D\x100CDe todas formas, muchas gracias\npor la conversación. Y como me has\ncaído bien, voy a contarte una cosita.\n\x0E\x01\x09\x04\x08\xA04¿Ves esas piedras tan relucientes\ncolgando de las paredes? ¿Las ves,\neh, las ves?\n\nPues son <r<rupias en bruto>>. De ahí que\nhaya tantas rupias en esta zona.\n¡Si les das un buen <r<golpe>>, puede que\n<r<se rompan y caigan>> de donde están!<pling>")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x10\x1319Qué rabia. Bueno, cuando hayas\ndescansado, puede que quieras jugar\na <b<Agujeros y rupias>>.")
          	}
          }

