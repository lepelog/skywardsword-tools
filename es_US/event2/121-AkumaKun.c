          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf("\x0E\x01\x09\x04\x15\xC09¡Quieto! ¡No se te ocurra abrir ese\ncofre! Dentro hay una cosa horrible...\n\n\n[1]¿Qué cosa?[2]Aún mejor")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf("\x0E\x01\x09\x04\x13\x800Lo que contiene es el <y<medallón\nmaligno>>, un objeto maldito, dotado\nde terroríficos poderes...\n\n¡Si lo llevas encima, obtendrás\nmás rupias y \x0E\x01\x09\x04\x15\xC00encontrarás tesoros\nmás fácilmente!\n\n\x0E\x01\x09\x04\x14\xA00Es tan... \nTan... ¡Aaargh!\n[1]Suena\nbien...[2]Tan...\n¿qué?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x13\x800Pues no, no suena bien, créeme...")
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x15\xC00¡Es un objeto maligno, hazme caso!\n\n\n\n\x0E\x01\x09\x04\x14\xA00¡Quien porta el medallón\n<r<no puede abrir su alforja>>!\n\n\nNo puedes sacar tu escudo ni\ntus pociones aunque las necesites.\n¿Lo ves? Una cosa francamente\nhorrible, ya te lo dije...\n\x0E\x01\x09\x04\x15\xC00¡Así que más te vale no abrir ese cofre!")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf("\x0E\x01\x09\x04\x13\x800¡Te he dicho que no lo abras!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x03¡Para, por favor! ¡No me hagas daño!\n\n\n\nYa... ya sé que parezco un monstruo,\npero no lo soy, créeme...")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x00\x05Deja que te lo explique...\n\n\n\nMe llamo <b<Mursego>>, y soy un demonio\nque vive aquí, en Neburia.\n\n\n¡Pero no te hagas una idea equivocada! \nAunque sea un demonio, no voy por ahí\natacando a la gente...\n\nEsta niña es la única que no se asusta\ncuando me ve, y por eso me gusta tanto\njugar con ella. Nos hemos hecho buenos\namigos.\nPero me encantaría relacionarme\ncon más habitantes de Neburia...\nEs decir, ser uno más.\n\nLo malo es que mi aspecto infunde\nbastante miedo, y todo el mundo\nhuye de mí...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf("Yo solo quiero llevarme bien\ncon la gente.\n\n\nPero, en cuanto me ven, salen\ncorriendo despavoridos.\n\n\nLo cual me recuerda una leyenda\nque conocen todos los demonios...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf("Cuentan que, si haces feliz a\nuna persona, obtienes una cosa\nllamada <y<gema de gratitud>>.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf("Y que si reúnes muchas <y<gemas\nde gratitud >>en el mismo sitio,\n¡puedes convertir a cualquier\nmonstruo en una persona normal!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x07¡Cuánto daría por ser una persona\nnormal!\n\n\nPor lo que puedo intuir, diría que eres\nun muchacho de principios con un\ncorazón de oro, ¿verdad?")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf("¿Qué me dices? ¿Podrías reunir\nunas cuantas <y<gemas de gratitud\n>>y traérmelas aquí?\n[1]Claro[2-]No")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf("¿De verdad que aceptas?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf("He oído que la forma más sencilla\nde obtener <y<gemas de gratitud >>es\nresolviendo los problemas de los\ndemás.")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf("También es posible que encuentres\nalgunas repartidas por lugares de las\nislas flotantes donde haya gente...\ncomo en Neburia, por ejemplo.\n¡Seguro que alguien tan generoso y\naltruista como tú no tendrá problemas\npara <g<encontrar >>muchas <y<gemas de\ngratitud>>!")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf("Ah, y ten en cuenta que te pagaré\npor cada una que encuentres.\n¡Gracias de antemano!")
/*<  2>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 65>*/ 		scene_flags[0 'Skyloft'][78 /* 0x8 40 */] = true;
/*< 11>*/ 		switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          		  case 0:
/*< 12>*/ 			story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          			flw_167:
/*<167>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
          			goto flw_167
          		}
          	  case 1:
          		flw_81:
/*< 81>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 6, 'param3': 13}
/*<  6>*/ 		printf("Por favor... No te estoy pidiendo tanto.\n\n[1]Bueno[2-]¡Que no!")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_82
          		  case 1:
          			goto flw_81
          		}
          	}
          }

          void entrypoint_121_03() {
/*<152>*/ 	start()
/*<158>*/ 	switch (story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */]) {
          	  case 0:
/*<159>*/ 		printf("\x0E\x01\x09\x04\x00\xA07Lo cierto es que lo pasaba fatal \ncada vez que veía a la buena gente\nde Neburia echarse a temblar solo\ncon verme...\n¡Pero ahora ya me siento como uno\nmás de ellos! ¡Y todo te lo debo a ti!\n¡Muchísimas gracias!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x05¡Ah, hola, Link!\nQuería volver a sentir la apacible\nbrisa nocturna y, para mi sorpresa, de\nrepente no se ve ni un solo monstruo.\n¿Habrá tenido algo que ver el hecho\nde que me haya convertido en una\npersona normal y corriente?\n[1]Es posible...[2]No creo")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x00\x856Eso mismo pienso yo...")
          			flw_157:
/*<157>*/ 			printf("\x0E\x01\x09\x04\x08\x800Cuando era un terrible demonio, mi\npoderosa aura maligna lo envolvía\ntodo a mi alrededor...\n\nPero eso ya es agua pasada. Ahora soy\nuno más entre la multitud, ¡una pieza\nmás del engranaje de amistad y\nfelicidad de estas amables gentes!\n\x0E\x01\x09\x04\x15\xA07¡Los habitantes de Neburia podrán\ndisfrutar por fin de la tan ansiada\npaz! ¡Y todo gracias a ti!")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf("\x0E\x01\x09\x04\x00\x814No pasa nada, puedes ser totalmente\nfranco conmigo. De hecho, agradezco\nmuchísimo cualquier muestra de\nsinceridad.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x13\x808¡Diantres! ¡Lo has abierto!\n\n\n\n¿Nunca has oído lo de que la curiosidad\nmató al lémury? Supongo que ese es\nun defecto común de tu especie...\n\nAunque tal vez eso es lo que los hace\ntan interesantes... En cualquier caso,\nsi llevas ese medallón, no podrás\nabrir tu alforja. \nTendrás que dejarlo en la <b<consigna\n>>si quieres volver a abrirla.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf("\x0E\x01\x09\x04\n\xC05¡No sé ni cómo darte las gracias!\nLo primero que voy a hacer es darme\nun buen paseo por Neburia.")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x05Y bien, ¿qué te parece?\nSeguro que ni siquiera me habías\nreconocido, ¿eh?")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Me... ¡Me siento como si estuviera\ndentro del cuerpo de otra persona!")
/*<124>*/ 					scene_flags[0 'Skyloft'][79 /* 0x8 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				switch (scene_flags[70 /* 0x9 40 */]) {
          				  case 0:
/*< 41>*/ 					switch (scene_flags[71 /* 0x9 80 */]) {
          					  case 0:
/*< 46>*/ 						switch (scene_flags[72 /* 0x8 01 */]) {
          						  case 0:
/*< 52>*/ 							switch (scene_flags[73 /* 0x8 02 */]) {
          							  case 0:
/*< 55>*/ 								switch (scene_flags[74 /* 0x8 04 */]) {
          								  case 0:
/*< 58>*/ 									switch (scene_flags[75 /* 0x8 08 */]) {
          									  case 0:
/*< 35>*/ 										switch (context_related2(6)) {
          										  case 0:
/*< 98>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3083, 'next': 36, 'param3': 13}
/*< 36>*/ 											printf("¡Oh! ¡Has logrado reunir 80 <y<gemas\nde gratitud>>! Si no me equivoco,\n¡esas son todas las gemas!\n\n\x0E\x01\x09\x04\x07\x807¡Mil gracias, de verdad! ¡No sabes\nlo mucho que significa para mí!\n\n\nToma, acepta esto como una última\nmuestra de mi propia gratitud.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf("No es que sea el objeto más útil\ndel mundo, pero puede que te sirva\nde algo.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf("¡No lo puedo creer! ¡Me has traído\ntodas las <y<gemas de gratitud >>que\nnecesito para convertirme en humano!\n\n\x0E\x01\x09\x04\x07\x809¿Crees que funcionará?\n¿Y si solo fuera una leyenda?\n¡Ay, qué nervioso estoy!")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf("\x0E\x01\x09\x04\x00\x05Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<y<gemas de gratitud>>! \n\n¿Crees que podrías conseguirme,\ndigamos... <r<80>>? Quizá con esas ya\nsea suficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf("\x0E\x01\x09\x04\x09\xD0B¡Increíble! ¡Me has traído muchas\n<y<gemas de gratitud>>!\n\n\n\x0E\x01\x09\x04\x07\x807Por favor, acepta esto como muestra\nde mi agradecimiento.")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BNo está mal, pero creo que todavía no\nhe llegado a saborear el verdadero\nsentimiento de agradecimiento puro...\n\n\x0E\x01\x09\x04\x07\x807¡Pero seguro que con unas pocas más\nlo conseguiré! ¡Muchísimas gracias!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf("Solo me hacen falta unas pocas\n<y<gemas de gratitud>> más para\nconvertirme en una persona normal.\nPor favor, tienes que ayudarme...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf("\x0E\x01\x09\x04\x09\xD0B¡Uoooh! ¡Vaya montón de <y<gemas de\ngratitud >>me has traído!\n\n\nCon estas ya son... ¡nada más y nada\nmenos que <r<80>>! ¡Eso significa que has\nlogrado reunir todas las <y<gemas de\ngratitud>>!\n\x0E\x01\x09\x04\x07\x807¡Muchas, muchas, muchas gracias!\n¡No te imaginas cómo te lo agradezco!\n\n\nY como muestra, acepta este último\nregalo. ¡Espero que te guste!")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf("\x0E\x01\x09\x04\x00\x05Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<y<gemas de gratitud>>! \n\n¿Crees que podrías conseguirme,\ndigamos... <r<70>>? Quizá con esas ya\nsea suficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf("\x0E\x01\x09\x04\x09\xD0B¡Increíble! ¡Me has traído muchas\n<y<gemas de gratitud>>!\n\n\n\x0E\x01\x09\x04\x07\x807Por favor, acepta esto como muestra\nde mi agradecimiento.")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf("Solo me hacen falta unas pocas\n<y<gemas de gratitud>> más para\nconvertirme en una persona normal.\nPor favor, tienes que ayudarme...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf("\x0E\x01\x09\x04\x09\xD0B¡Oh! ¡Tienes más! ¡Cuántas <y<gemas\nde gratitud>>! ¡Es increíble!\n\n\n\x0E\x01\x09\x04\x07\x807¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x05Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<y<gemas de gratitud>>! \n\n¿Crees que podrías conseguirme,\ndigamos... <r<50>>? Quizá con esas ya\nsea suficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf("\x0E\x01\x09\x04\x09\xD0B¡Increíble! ¡Me has traído muchas\n<y<gemas de gratitud>>!\n\n\n\x0E\x01\x09\x04\x07\x807Por favor, acepta esto como muestra\nde mi agradecimiento.")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf("Te agradezco que me hayas traído ya\ntodas estas <y<gemas de gratitud>>.\n\n\nPero me temo que voy a necesitar\ntodavía unas cuantas más. Por favor,\ncuento contigo...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf("\x0E\x01\x09\x04\x09\xD0B¡Oh! ¡Tienes más! ¡Cuántas <y<gemas\nde gratitud>>! ¡Es increíble!\n\n\n\x0E\x01\x09\x04\x07\x807¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf("\x0E\x01\x09\x04\x00\x05Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<y<gemas de gratitud>>! \n\n¿Crees que podrías conseguirme,\ndigamos... <r<40>>? Quizá con esas ya\nsea suficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf("\x0E\x01\x09\x04\x09\xD0B¡Increíble! ¡Me has traído muchas\n<y<gemas de gratitud>>!\n\n\n\x0E\x01\x09\x04\x07\x807Por favor, acepta esto como muestra\nde mi agradecimiento.")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf("Te agradezco que me hayas traído ya\ntodas estas <y<gemas de gratitud>>.\n\n\nPero me temo que voy a necesitar\ntodavía unas cuantas más. Por favor,\ncuento contigo...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf("\x0E\x01\x09\x04\x09\xD0B¡Oh! ¡Tienes más! ¡Cuántas <y<gemas\nde gratitud>>! ¡Es increíble!\n\n\n\x0E\x01\x09\x04\x07\x807¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x05Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<y<gemas de gratitud>>! \n\n¿Crees que podrías conseguirme,\ndigamos... <r<30>>? Quizá con esas ya\nsea suficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x09\xD0B¡Increíble! ¡Me has traído muchas\n<y<gemas de gratitud>>!\n\n\n\x0E\x01\x09\x04\x07\x807Por favor, acepta esto como muestra\nde mi agradecimiento.")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf("Por lo visto, necesito más <y<gemas\nde gratitud >>para convertirme en\nuna persona normal...\n\nTráeme más, por favor...\n¡Eres el único que puede ayudarme!...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf("\x0E\x01\x09\x04\x09\xD0B¡Oh! ¡Tienes más! ¡Cuántas <y<gemas\nde gratitud>>! ¡Es increíble!\n\n\n\x0E\x01\x09\x04\x07\x807¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf("\x0E\x01\x09\x04\x00\x05Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<y<gemas de gratitud>>! \n\n¿Crees que podrías conseguirme,\ndigamos... <r<10>>? Quizá con esas ya\nsea suficiente, con un poco de suerte.")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf("\x0E\x01\x09\x04\x09\xD0B¡Increíble! ¡Me has traído muchas\n<y<gemas de gratitud>>!\n\n\n\x0E\x01\x09\x04\x07\x807Por favor, acepta esto como muestra\nde mi agradecimiento.")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf("Por lo visto, necesito más <y<gemas\nde gratitud >>para convertirme en\nuna persona normal...\n\nTráeme más, por favor...\n¡Eres el único que puede ayudarme!...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf("\x0E\x01\x09\x04\x09\xD0B¡Oh! ¡Tienes más! ¡Cuántas <y<gemas\nde gratitud>>! ¡Es increíble!\n\n\n\x0E\x01\x09\x04\x07\x807¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf("\x0E\x01\x09\x04\x00\x05Ay... ¿cuánto tiempo más tendré que\nesperar? Por favor, encuéntrame esas\n<y<gemas de gratitud >>lo antes posible...\n\nPara empezar, <r<5 gemas >>estarían\nbastante bien... ¡Cuantos más\nproblemas resuelvas, más gemas\nobtendrás!")
          							  case 1:
/*<123>*/ 								printf("\x0E\x01\x09\x04\x00\x05Me aseguraré de que la niña vuelva\na su casa mañana por la mañana.\nSi hablas con sus padres, diles que\nno se preocupen.\nY trata de encontrarme unas cuantas\n<y<gemas de gratitud>>, ¿de acuerdo? Solo\ntienes que hacer favores a la gente\npara conseguirlas, ya lo sabes.\nSi pudieras empezar por traerme\n<r<5 gemas>>, te lo agradecería mucho.")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf("\x0E\x01\x09\x04\x00\x05¡Oooh! Eso... eso... ¡eso que tienes ahí\nes una <y<gema de gratitud>>!...<pause14> ¡Veo que \nsabes cómo encontrarlas!\n\nPues bien, para empezar necesito\n<r<5>> de ellas, ¿de acuerdo?\n\n\nRecuerda que puedes conseguir un\nmontón de ellas si haces favores a los\nvecinos y les ayudas con sus problemas.")
/*<131>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
          								goto flw_122
          							}
          						}
          					}
          				}
          			}
          		  case 1:
          			goto flw_13
          		}
          	}
          }

          void entrypoint_121_00() {
          	start()
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 18, 'param3': 32}
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x0BA ver... ¡Aaaargh!\x0E\x01\x05\x04<\x00")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 68, 'param3': 6}
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x04\x0E\x01\x08\x02\x2CD¡Uaaargh!\x0E\x01\x05\x04\x1E\x00")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x00\x07Bueno, ¿qué aspecto tengo,\nLink?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf("Ya veo... Mejor no me lo digas.\nTu cara lo dice todo.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf("¡He cambiado tanto que te he dejado\nsin habla!")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf("Jamás podría pagarte todo lo que has\nhecho por mí. Te estaré siempre\nagradecido.\n\nA partir de ahora, viviré felizmente\njunto al resto de los habitantes de\nNeburia, como una persona normal.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x08\xA0CAaah... ¡Qué luminosidad! ¡Qué brillo!\n¡Cuántas cosas bonitas! ¡Es como un\ncarrusel de sensaciones increíbles!\n¡Solo con estar aquí me siento feliz!")
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00\x05¡Ah, eres tú, Link!\n¡Muchísimas gracias por tu ayuda!\n¡No sabes cuánto te lo agradezco!\n\nSiempre había querido ver el bazar\npor dentro con mis propios ojos...\n¿No te parece un lugar increíble?\n\n\x0E\x01\x09\x04\x15\xC00¡Y mira, mira! ¡Ya nadie se asusta\nni sale corriendo al verme! ¡No sabes\nlo feliz que me has hecho!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

