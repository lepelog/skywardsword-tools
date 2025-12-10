          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00150c09>¡Quieto! ¡Ni se te ocurra abrir ese cofre!\nDentro hay una cosa horrible...\n\n\n[1-]¿Qué cosa?[2-]Mejor\ntodavía")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00130800>Lo que contiene es el <color yellow<medallón\nmaligno>coloroff>, un objeto maldito, dotado\nde terroríficos poderes...\n\n¡Si lo llevas encima, obtendrás\nmás rupias y <0x10009:0x00150c00>encontrarás\ntesoros más fácilmente!\n\n<0x10009:0x00140a00>Es tan... \nTan... ¡Aaargh!\n[1-]Suena\nbien...[2-]Tan...\n¿qué?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00130800>Pues no, no suena bien, créeme...")
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00150c00>¡Es un objeto maligno, hazme caso!\n\n\n\n<0x10009:0x00140a00>¡Quien porta el medallón\n<color red<no puede abrir su alforja>coloroff>!\n\n\nNo puedes sacar tu escudo ni\ntus pociones aunque las necesites.\n¿Lo ves? Una cosa francamente\nhorrible, ya te lo dije...\n<0x10009:0x00150c00>¡Así que más te vale no abrir ese cofre!")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00130800>¡Te he dicho que no lo abras!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>¡Para, por favor! ¡No me hagas daño!\n\n\n\nYa... ya sé que parezco un monstruo,\npero no lo soy, créeme...")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000005>Deja que te explique...\n\n\n\nMe llamo <color blue<Batolo>coloroff>, y soy un demonio\nque vive aquí, en Altárea.\n\n\n¡Pero no te hagas una idea equivocada! \nNo por ser un demonio voy atacando\npor ahí a la gente...\n\nEsta niña es la única que no se asusta\ncuando me ve, y por eso me gusta tanto\njugar con ella. Nos hemos hecho buenos\namigos.\nPero me encantaría relacionarme\ncon más habitantes de Altárea...\nSer uno más, vaya.\n\nLo malo es que mi aspecto infunde\nbastante miedo, por lo visto, y todo\nel mundo me rehúye...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Yo lo único que quiero es llevarme bien\ncon la gente.\n\n\nPero, en cuanto me ven, salen\ncorriendo despavoridos.\n\n\nLo cual me recuerda una leyenda\nque conocen todos los demonios...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Cuentan que, si haces feliz a una persona,\nobtienes una cosa llamada <color yellow<gema\nde gratitud>coloroff>.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "Y que si juntas muchas <color yellow<gemas de gratitud\n>coloroff>en el mismo sitio, ¡puedes convertir\na cualquier monstruo en una persona\nnormal!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000007>¡Lo que daría yo por ser una persona\nnormal!\n\n\nPor lo que puedo intuir, diría que eres\nun muchacho altruista y de sólidos\nprincipios, ¿verdad?")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "¿Qué me dices? ¿Podrías reunir\nunas cuantas <color yellow<gemas de gratitud\n>coloroff>y traérmelas aquí?\n[1-]Claro[2]Paso")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "¿De verdad que aceptas?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "He oído que la forma más sencilla de\nobtener <color yellow<gemas de gratitud >coloroff>es resolviendo\nlos problemas de los demás.")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "También es posible que veas algunas\ndesperdigadas por lugares de Celéstea\ndonde haya gente... como en Altárea,\npor ejemplo.\n¡Seguro que a alguien tan generoso\ny altruista como tú no le costará nada\n<color green<encontrar >coloroff>muchas <color yellow<gemas de gratitud>coloroff>!\n\nSin embargo, tan solo las podrás ver\ndurante la <color red<noche>coloroff>, así que ya sabes,\nnada de buscarlas de día, ¿de acuerdo?")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ah, y ten en cuenta que te pagaré\npor cada una que encuentres.\n¡Gracias de antemano!")
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
/*<  6>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "Venga, por favor... No te pido tanto.\n\n[1-]Bueno, vale[2]¡Que no!")
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
/*<159>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000a07>La verdad es que lo he pasado fatal\ntodo este tiempo cada vez que veía a\nlas buenas gentes de Altárea echarse\na temblar solo con verme...\n¡Pero ahora ya me siento como uno\nmás de ellos! ¡Y todo te lo debo a ti!\n¡Muchísimas gracias!")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000005>¡Ah, hola, <heroname>!\nMe apetecía volver a sentir la apacible\nbrisa nocturna y, mira tú por dónde, de\nrepente no se ve ni un solo monstruo.\n¿Tú crees que habrá tenido algo que\nver el hecho de que me haya convertido\nen una persona normal y corriente?\n[1-]Es posible...[2-]No creo")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000856>Eso mismo pienso yo...")
          			flw_157:
/*<157>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00080800>Cuando era un terrible demonio, mi\npoderosa aura maligna lo envolvía\ntodo a mi alrededor...\n\nPero eso ya es agua pasada. Ahora soy\nuno más entre la multitud, ¡una pieza\nmás del engranaje de amistad y\nfelicidad de estas amables gentes!\n<0x10009:0x00150a07>¡Los habitantes de Altárea podrán\ndisfrutar por fin de la tan ansiada\npaz! ¡Y todo gracias a ti!")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000814>No pasa nada, puedes ser totalmente\nfranco conmigo. De hecho, agradezco\nmuchísimo cualquier muestra de\nsinceridad.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00130808>¡Rayos, lo has abierto!\n\n\n\n¿Nunca has oído lo de que la curiosidad\nmató al lémury? Supongo que ese es\nun defecto común en vuestra especie...\n\nAunque tal vez eso es lo que os hace\ntan interesantes... En fin, mientras\nlleves ese medallón, no podrás abrir\ntu alforja. \nTendrás que dejarlo en la <color blue<consigna\n>coloroff>si quieres volver a abrirla.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000a0c05>¡No sé ni cómo darte las gracias!\nLo primero que voy a hacer es darme\nun buen paseo por Altárea.")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>Y bien, ¿qué te parece?\nSeguro que ni siquiera me habías\nreconocido, ¿eh?")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 0, unk: 0, line: 38 */ "Me... ¡Me siento como si estuviera\ndentro del cuerpo de otra persona!")
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
/*< 36>*/ 											printf(/* textboxtype: 0, unk: 1, line: 40 */ "¡Oh! ¡Has logrado reunir 80 <color yellow<gemas\nde gratitud>coloroff>! Y lo que es mejor...\n¡has juntado todas las gemas!\n\n<0x10009:0x00070807>¡Mil gracias, de verdad! ¡No sabes\nlo mucho que significa para mí!\n\n\nToma, acepta esto como una última\nmuestra de mi propia gratitud.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf(/* textboxtype: 1, unk: 0, line: 36 */ "No es que sea el objeto más útil\ndel mundo, pero puede que te sirva\nde algo.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf(/* textboxtype: 0, unk: 0, line: 29 */ "¡No me lo puedo creer! ¡Me has traído\ntodas las <color yellow<gemas de gratitud >coloroff>que\nnecesito para convertirme en humano!\n\n<0x10009:0x00070809>¿Crees que funcionará?\nMira que si solo era una leyenda...\n¡Ay, qué nervioso estoy!")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000005>Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<color yellow<gemas de gratitud>coloroff>, te lo ruego! \n\n¿Crees que podrías conseguirme,\ndigamos... <color red<80>coloroff>? Igual con esas ya es\nsuficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>¡Increíble! ¡Me has traído un montón\nde <color yellow<gemas de gratitud>coloroff>!\n\n\n<0x10009:0x00070807>Por favor, acepta esto como muestra\nde mi agradecimiento.")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00090d0b>No está mal, pero creo que todavía no\nhe llegado a paladear el verdadero\nsentimiento de agradecimiento puro...\n\n<0x10009:0x00070807>¡Pero seguro que con unas pocas más\nlo conseguiré! ¡Muchísimas gracias!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf(/* textboxtype: 1, unk: 0, line: 24 */ "Solo me hacen falta unas pocas\n<color yellow<gemas de gratitud>coloroff> más para\nconvertirme en una persona normal.\nPor favor, tienes que ayudarme...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00090d0b>¡Uoooh! ¡Vaya montón de <color yellow<gemas de\ngratitud >coloroff>me has traído!\n\n\nCon estas ya son... ¡nada más y nada\nmenos que <color red<80>coloroff>! ¡Eso significa que has\nlogrado reunir todas las <color yellow<gemas de\ngratitud>coloroff>!\n<0x10009:0x00070807>¡Muchas, muchas, muchas gracias!\n¡No te imaginas cómo te lo agradezco!\n\n\nY como muestra, acepta este último\nregalo. ¡Espero que te guste!")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000005>Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<color yellow<gemas de gratitud>coloroff>, te lo ruego! \n\n¿Crees que podrías conseguirme,\ndigamos... <color red<70>coloroff>? Igual con esas ya es\nsuficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>¡Increíble! ¡Me has traído un montón\nde <color yellow<gemas de gratitud>coloroff>!\n\n\n<0x10009:0x00070807>Por favor, acepta esto como muestra\nde mi agradecimiento.")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf(/* textboxtype: 1, unk: 0, line: 24 */ "Solo me hacen falta unas pocas\n<color yellow<gemas de gratitud>coloroff> más para\nconvertirme en una persona normal.\nPor favor, tienes que ayudarme...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>¡Oh! ¡Tienes más! ¡Vaya montón\nde <color yellow<gemas de gratitud>coloroff>! ¡Es increíble!\n\n\n<0x10009:0x00070807>¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<color yellow<gemas de gratitud>coloroff>, te lo ruego! \n\n¿Crees que podrías conseguirme,\ndigamos... <color red<50>coloroff>? Igual con esas ya es\nsuficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>¡Increíble! ¡Me has traído un montón\nde <color yellow<gemas de gratitud>coloroff>!\n\n\n<0x10009:0x00070807>Por favor, acepta esto como muestra\nde mi agradecimiento.")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf(/* textboxtype: 0, unk: 0, line: 23 */ "Te agradezco que me hayas traído ya\ntodas estas <color yellow<gemas de gratitud>coloroff>.\n\n\nLo malo es que voy a necesitar todavía\nunas cuantas más. Por favor,\ncuento contigo...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>¡Oh! ¡Tienes más! ¡Vaya montón\nde <color yellow<gemas de gratitud>coloroff>! ¡Es increíble!\n\n\n<0x10009:0x00070807>¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000005>Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<color yellow<gemas de gratitud>coloroff>, te lo ruego!\n\n¿Crees que podrías conseguirme,\ndigamos... <color red<40>coloroff>? Igual con esas ya es\nsuficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>¡Increíble! ¡Me has traído un montón\nde <color yellow<gemas de gratitud>coloroff>!\n\n\n<0x10009:0x00070807>Por favor, acepta esto como muestra\nde mi agradecimiento.")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf(/* textboxtype: 0, unk: 0, line: 23 */ "Te agradezco que me hayas traído ya\ntodas estas <color yellow<gemas de gratitud>coloroff>.\n\n\nLo malo es que voy a necesitar todavía\nunas cuantas más. Por favor,\ncuento contigo...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>¡Oh! ¡Tienes más! ¡Vaya montón\nde <color yellow<gemas de gratitud>coloroff>! ¡Es increíble!\n\n\n<0x10009:0x00070807>¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000005>Me gustaría tanto ser una persona\nnormal... Por favor, ¡tráeme\n<color yellow<gemas de gratitud>coloroff>, te lo ruego!\n\n¿Crees que podrías conseguirme,\ndigamos... <color red<30>coloroff>? Igual con esas ya es\nsuficiente, con un poco de suerte.\n¡Muchas gracias de antemano!")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>¡Increíble! ¡Me has traído un montón\nde <color yellow<gemas de gratitud>coloroff>!\n\n\n<0x10009:0x00070807>Por favor, acepta esto como muestra\nde mi agradecimiento.")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf(/* textboxtype: 0, unk: 1, line: 22 */ "Por lo visto, necesito más <color yellow<gemas\nde gratitud >coloroff>para convertirme en\nuna persona normal...\n\nNo me dejes en la estacada, te lo ruego.\n¡Eres el único que puede ayudarme!...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>¡Oh! ¡Tienes más! ¡Vaya montón\nde <color yellow<gemas de gratitud>coloroff>! ¡Es increíble!\n\n\n<0x10009:0x00070807>¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000005>Me gustaría tanto ser una persona\nnormal... Venga, ¡tráeme\n<color yellow<gemas de gratitud>coloroff>, por favor! \n\n¿Crees que podrías conseguirme,\ndigamos... <color red<10>coloroff>? Igual con esas ya es\nsuficiente, con un poco de suerte.")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>¡Increíble! ¡Me has traído un montón\nde <color yellow<gemas de gratitud>coloroff>!\n\n\n<0x10009:0x00070807>Por favor, acepta esto como muestra\nde mi agradecimiento.")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 1, line: 22 */ "Por lo visto, necesito más <color yellow<gemas\nde gratitud >coloroff>para convertirme en\nuna persona normal...\n\nNo me dejes en la estacada, te lo ruego.\n¡Eres el único que puede ayudarme!...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>¡Oh! ¡Tienes más! ¡Vaya montón\nde <color yellow<gemas de gratitud>coloroff>! ¡Es increíble!\n\n\n<0x10009:0x00070807>¡Toma, acepta esto como muestra\nde agradecimiento! ¡No te imaginas\nlo feliz que me haces!")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000005>Ay... ¿cuánto tiempo más tendré que\nesperar? Por favor, encuéntrame esas\n<color yellow<gemas de gratitud >coloroff>lo antes posible...\n\nPara empezar, <color red<5 gemas >coloroff>estarían\nbastante bien... ¡Cuantos más\nproblemas resuelvas, más gemas\nobtendrás!")
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000005>Me aseguraré de que la niña vuelva\na casa mañana por la mañana.\nSi hablas con sus padres, diles que\nno se preocupen.\nY trata de encontrarme unas cuantas\n<color yellow<gemas de gratitud>coloroff>, ¿vale? Solo tienes\nque hacerle algún favorcillo a la gente\npara conseguirlas, ya lo sabes.\nSi pudieras empezar por traerme\n<color red<5 gemas>coloroff>, te lo agradecería mucho.")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000005>¡Oooh! Eso... eso... ¡eso que tienes ahí\nes una <color yellow<gema de gratitud>coloroff>!...<pause 20> ¡Veo que \nsabes cómo dar con ellas!\n\nPues bien, para empezar necesito\n<color red<5>coloroff> de ellas, ¿de acuerdo?\n\n\nRecuerda que puedes conseguir un\nmontón si haces favores a los vecinos\ny los ayudas con sus problemas.")
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
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000b>A ver... ¡Aaaargh!<0x10005:0x003c0000>")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	wait_frames(40)
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004><0x10008:0x02cd>¡Uaaargh!<0x10005:0x001e0000>")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10006:0xfccd>(...)<0x10006:0x00cd>\n<0x10009:0x00000007>Bueno, ¿qué aspecto tengo,\n<heroname>?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "Ya veo... Mejor no me lo digas.\nTu cara lo dice todo.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "¡He cambiado tanto que te he dejado\nsin habla!")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Jamás podría pagarte todo lo que has\nhecho por mí. Te estaré siempre\nagradecido.\n\nDe ahora en adelante, viviré felizmente\njunto al resto de habitantes de Altárea,\ncomo una persona normal.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00080a0c>Aaah... ¡Qué luminosidad! ¡Qué brillo!\n¡Cuántas cosas bonitas! ¡Es como un\ncarrusel de sensaciones increíbles!\n¡Solo con estar aquí me siento feliz!")
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000005>¡Ah, eres tú, <heroname>!\n¡Muchísimas gracias por tu ayuda!\n¡No sabes cuánto te lo agradezco!\n\nSiempre había querido ver el bazar\npor dentro con mis propios ojos...\n¿No te parece un lugar increíble?\n\n<0x10009:0x00150c00>¡Y mira, mira! ¡Ya nadie se asusta\ny sale corriendo simplemente con\nverme! ¡No te imaginas lo feliz\nque me has hecho!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

