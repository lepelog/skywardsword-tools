          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>¿Acaso necesitan tus oídos de avezado\ne intrépido aventurero volver a oír las\nreglas del juego?\n[1-]Casi\nque sí...[2]No, gracias")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Prepárate para recibir la más excelsa\nexplicación que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n<0x10009:0x00120600>Ese cañón sito ahí en medio te enviará\nverticalmente por el aéreo elemento\nhasta que comience tu descenso hasta\nla ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n<0x10009:0x000d0600>Pero si caes sobre un <color red<área gris>coloroff>, seré yo\nel beneficiario que recibirá tu generoso\ndonativo en forma de rupias.\n\n<0x10009:0x00121100>No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <color red<lo único que cuenta es la suerte>coloroff>.\n\nPor tanto, ¡no recurras a la furia\nextrema e infundada si por avatares\ndel destino acabas estampado sobre\nun <color red<área gris>coloroff>!")
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<color red<anillos de la suerte >coloroff>y <color red<globododos>coloroff>\ncon mis hermosas facciones.\n<0x10009:0x000d0600>Si en un derroche de habilidad\nacrobática consigues atravesar un\n<color red<anillo de la suerte>coloroff>, aumentará tu\nmultiplicador de rupias.\nY por si eso fuera poco, cuantos más\nanillos logres atravesar, ¡más lenta\ngirará la ruleta y más fácil te resultará\ncontrolar el aterrizaje!\n<0x10009:0x00120c00>Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <color red<globododos >coloroff>o perderás el\nmultiplicador!\n<0x10009:0x000d0600>Y por último, ten presente que <color red<no\npodrás utilizar >coloroff>el paracaídas durante\ntu descenso, así que procura ir con mil\nojos, ¿vale?")
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000d0006>¡Ha llegado el momento de que el frío\ny duro tacto del acero de ese cañón te\nenvíe a los cielos en busca de fortuna!")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 					switch (zone_temp_flags[6 /* 0x1 40 */]) {
          					  case 0:
/*< 85>*/ 						printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00000001>Mi intelecto superior me indica que\nquieres volver a jugar, ¿no es así? Pues\nme alegro de que te guste mi juego.\n\nPor supuesto, alguien tan generoso\ncomo tú estará encantado de apoquinar\n<color red<20 rupias >coloroff>del ala, ¿verdad?\n[1-]Jugar[2-]Reglas[3]Paso")
          						flw_33:
/*< 33>*/ 						switch (choice(3)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									zone_temp_flags[5 /* 0x1 20 */] = true;
/*<  5>*/ 									printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>¡Así habla un auténtico y temerario\nviajero de las alturas! Cuando estés\nlisto, colócate sobre el cañón del\ncentro de la isla y... ¡pum!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										wait_frames(80)
          									}
          								  case 1:
/*<  7>*/ 									printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00160c03>Amigo, amigo...<pause 15> ¡mucho me temo que\ncareces de lo esencial! <0x10009:0x00000600>¡Vuelve cuando\n20 rupias decidan anidar en tu bolsillo!")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Prepárate para recibir la más excelsa\nexplicación que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n<0x10009:0x00120600>Ese cañón sito ahí en medio te enviará\nverticalmente por el aéreo elemento\nhasta que comience tu descenso hasta\nla ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n<0x10009:0x000d0600>Pero si caes sobre un <color red<área gris>coloroff>, seré yo\nel beneficiario que recibirá tu generoso\ndonativo en forma de rupias.\n\n<0x10009:0x00121100>No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <color red<lo único que cuenta es la suerte>coloroff>.\n\nPor tanto, ¡no recurras a la furia\nextrema e infundada si por avatares\ndel destino acabas estampado sobre\nun <color red<área gris>coloroff>!")
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<color red<anillos de la suerte >coloroff>y <color red<globododos>coloroff>\ncon mis hermosas facciones.\n<0x10009:0x000d0600>Si en un derroche de habilidad\nacrobática consigues atravesar un\n<color red<anillo de la suerte>coloroff>, aumentará tu\nmultiplicador de rupias.\nY por si eso fuera poco, cuantos más\nanillos logres atravesar, ¡más lenta\ngirará la ruleta y más fácil te resultará\ncontrolar el aterrizaje!\n<0x10009:0x00120c00>Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <color red<globododos >coloroff>o perderás el\nmultiplicador!\n<0x10009:0x000d0600>Y por último, ten presente que <color red<no\npodrás utilizar >coloroff>el paracaídas durante\ntu descenso, así que procura ir con mil\nojos, ¿vale?")
          						  case 2:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>¡Pero qué oyen mis preciosos y\nexperimentados oídos! ¡Jamás\nimaginé tamaña exhibición de\npusilanimidad!")
          						}
          					  case 1:
/*<  9>*/ 						printf(/* textboxtype: 1, unk: 1, line: 8 */ "<0x10009:0x000d0601>¡Hooombre, pero si es nuestro joven\namigo amante de los cielos de nuevo!\n¿Qué, quieres volver a sentir la\nadrenalina en estado puro?\n<0x10009:0x00090600>Pero claro, un caballero como tú jamás\npermitiría que lo dejasen jugar gratis,\n¿no? Serán <color red<20 rupias>coloroff>.\n[1-]Jugar[2-]Reglas[3]Olvídalo")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf(/* textboxtype: 1, unk: 1, line: 10 */ "<0x10009:0x00000001>¡Hola, hola, muchacho!\nSupongo que habrás venido a vivir\nlas intensas emociones de la caída\nlibre, ¿no?\nComo muestra de agradecimiento por\nhaber encontrado mi ruleta, ¡te dejaré\njugar gratis esta vez!\n[1-]¡Acepto\nel reto![2-]¿Cómo va?[3]Paso")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000601>¡Joven aventurero, mi gratitud hacia\nti será eterna por haber encontrado\nla ruleta para mi humilde persona!\n\nY ahora, mi más querido y novedoso\nespectador, aquí está mi sueño hecho\npor fin realidad... ¡La <color blue<isla Fortuna>coloroff>!\n\nNormalmente cobro 20 rupias por\nparticipar, pero como estoy en deuda\ncontigo y es tu primera incursión...\n¡te concedo el honor de jugar gratis!")
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Prepárate para recibir la más excelsa\nexplicación que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n<0x10009:0x00120600>Ese cañón sito ahí en medio te enviará\nverticalmente por el aéreo elemento\nhasta que comience tu descenso hasta\nla ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n<0x10009:0x000d0600>Pero si caes sobre un <color red<área gris>coloroff>, seré yo\nel beneficiario que recibirá tu generoso\ndonativo en forma de rupias.\n\n<0x10009:0x00121100>No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <color red<lo único que cuenta es la suerte>coloroff>.\n\nPor tanto, ¡no recurras a la furia\nextrema e infundada si por avatares\ndel destino acabas estampado sobre\nun <color red<área gris>coloroff>!")
/*< 22>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<color red<anillos de la suerte >coloroff>y <color red<globododos>coloroff>\ncon mis hermosas facciones.\n<0x10009:0x000d0600>Si en un derroche de habilidad\nacrobática consigues atravesar un\n<color red<anillo de la suerte>coloroff>, aumentará tu\nmultiplicador de rupias.\nY por si eso fuera poco, cuantos más\nanillos logres atravesar, ¡más lenta\ngirará la ruleta y más fácil te resultará\ncontrolar el aterrizaje!\n<0x10009:0x00120c00>Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <color red<globododos >coloroff>o perderás el\nmultiplicador!\n<0x10009:0x000d0600>Y por último, ten presente que <color red<no\npodrás utilizar >coloroff>el paracaídas durante\ntu descenso, así que procura ir con mil\nojos, ¿vale?")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120600>Pues bien, considero que ha llegado\nel momento de poner a prueba tus\nacrobacias aéreas. ¿Qué me dices?\n\n[1-]¡Vale![2]¡Paso!")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>¿Acaso necesitan tus oídos de avezado\ne intrépido aventurero volver a oír las\nreglas del juego?\n[1-]Casi\nque sí...[2]No, gracias")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Prepárate para recibir la más excelsa\nexplicación que tus inexpertos oídos\njamás tendrán el placer de escuchar.\n\n<0x10009:0x00120600>Ese cañón sito ahí en medio te enviará\nverticalmente por el aéreo elemento\nhasta que comience tu descenso hasta\nla ruleta.\nEl número de rupias que obtengas\nvariará en función del área coloreada\nsobre la que aterrices. ¿Hasta aquí\ntodo claro?\n<0x10009:0x000d0600>Pero si caes sobre un <color red<área gris>coloroff>, seré yo\nel beneficiario que recibirá tu generoso\ndonativo en forma de rupias.\n\n<0x10009:0x00121100>No dudo que dedicarás todo tu esfuerzo\npor llevarte el máximo premio, pero\naquí <color red<lo único que cuenta es la suerte>coloroff>.\n\nPor tanto, ¡no recurras a la furia\nextrema e infundada si por avatares\ndel destino acabas estampado sobre\nun <color red<área gris>coloroff>!")
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000600>Prosigamos... Durante tu descenso\ndesde las alturas, podrás observar\n<color red<anillos de la suerte >coloroff>y <color red<globododos>coloroff>\ncon mis hermosas facciones.\n<0x10009:0x000d0600>Si en un derroche de habilidad\nacrobática consigues atravesar un\n<color red<anillo de la suerte>coloroff>, aumentará tu\nmultiplicador de rupias.\nY por si eso fuera poco, cuantos más\nanillos logres atravesar, ¡más lenta\ngirará la ruleta y más fácil te resultará\ncontrolar el aterrizaje!\n<0x10009:0x00120c00>Peeero..., siempre tiene que haber\nun pero, ¡evita chocar contra mis\nqueridos <color red<globododos >coloroff>o perderás el\nmultiplicador!\n<0x10009:0x000d0600>Y por último, ten presente que <color red<no\npodrás utilizar >coloroff>el paracaídas durante\ntu descenso, así que procura ir con mil\nojos, ¿vale?")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>¡Pero qué oyen mis preciosos y\nexperimentados oídos! ¡Jamás\nimaginé tamaña exhibición de\npusilanimidad!")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*<152>*/ 			switch (story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */]) {
          			  case 0:
/*<153>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			  case 1:
/*< 40>*/ 				switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          				  case 0:
/*<151>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 31}
/*< 91>*/ 					switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x000a0c10>Mmm... Sería casi un milagro que\nalguien la encontrase. ¡Es el fin!\nAsí que mejor no me hago muchas\nilusiones... Hay que ser realistas.")
          					  case 1:
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0000000f>Ah, eres tú, muchacho. ¿Has\nencontrado mi ruleta?\n\n\n¿No? En fin... Supongo que la\ndesgracia se está cebando\nconmigo y no hay forma de\nevitarlo...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf(/* textboxtype: 2, unk: 0, line: 44 */ "El <sound 4><color red<rastreador>coloroff> no está ajustado para\nreaccionar ante la <color red<ruleta>coloroff> que busca\neste individuo.\n\n¿Desea mi <0x10012:0x00000001>amo que reajuste el\n<color red<<sound 4>rastreador>coloroff> para encontrar la <color red<ruleta>coloroff>?\n\n[1-]Sí[2]Ahora no")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000005>De acuerdo, amo.\n\n\n\nEl <sound 4><color red<rastreador >coloroff>ya está listo para\nreaccionar ante la <color red<ruleta>coloroff> que busca\neste individuo.")
/*<147>*/ 							printf(/* textboxtype: 2, unk: 0, line: 42 */ "A juzgar por la ubicación de este lugar,\ncalculo un 90% de probabilidades de\nque el objeto cayese sobre el <color blue<desierto\nde Lanayru>coloroff>. Sugiero empezar por ahí.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 2, unk: 0, line: 46 */ "<0x10012:0x00000005>De acuerdo, amo. Procedo entonces\na cancelar el ajuste del <sound 4>rastreador.")
          							goto flw_102
          						}
          					}
          				  case 1:
/*< 44>*/ 					switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          					  case 0:
/*<103>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*< 49>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 113, 'param3': 31}
/*<113>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*<114>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0000000f>Ah, nada, nada, tranquilo. En estos\nmomentos en que parece que la\nadversidad es la única que me\nacompaña, preferiría estar solo.\nEra simplemente un adorno que\nmi perfectamente formada espalda\nlucía con orgullo, pero...<pause 10> necesito esa\n<color blue<ruleta>coloroff>,<pause 10> aunque sea un mero ornamento.[1-]Yo te la\nbusco[2]Olvídate\nde ella")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf(/* textboxtype: 1, unk: 0, line: 30 */ "¡¿Y cómo te las vas a arreglar\npara recuperar una cosa que ha\ncaído debajo de las nubes?!\n¡Es un completo despropósito!")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf(/* textboxtype: 2, unk: 0, line: 40 */ "Informo a mi <0x10012:0x00000005>amo de que es posible\najustar el <sound 4><color red<rastreador>coloroff> para reaccionar\nante aquello que busca este sujeto.\n\nNo obstante, en caso de aceptar un\nnuevo encargo por parte de otro\nindividuo, el objetivo de rastreo del\nencargo anterior desaparecerá.\n¿Debo configurar el <color red<rastreador>coloroff> para\nbuscar la <color red<ruleta>coloroff> de este hombre?\n\n[1-]Por favor[2]No, gracias")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x00000005>De acuerdo, amo. El <color red<rastreador>coloroff> ya está\npreparado para comenzar la búsqueda\nde la <color red<ruleta>coloroff>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf(/* textboxtype: 2, unk: 0, line: 42 */ "A juzgar por la ubicación de este lugar,\ncalculo un 90% de probabilidades de\nque el objeto cayese sobre el <color blue<desierto\nde Lanayru>coloroff>. Sugiero empezar por ahí.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x000a0c10>Mmm... Sería casi un milagro que\nalguien la encontrase. ¡Es el fin!\nAsí que mejor no me hago muchas\nilusiones... Hay que ser realistas.")
          									  case 1:
/*<111>*/ 										printf(/* textboxtype: 2, unk: 0, line: 43 */ "De acuerdo, <0x10012:0x00000005>amo. En caso de cambiar\nde opinión, bastará con hablar con este\nindividuo una vez más.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000010>Así jamás podré ayudar a la gente\na divertirse y a ser feliz.\n\n\n<0x10009:0x000a0c00>¡Es el acabose!")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0000000f>Yo... yo no... no... ¿qué voy a hacer\nahora? ¡Así jamás funcionará!\n\n\n[1-]¿Qué pasa?[2](...)")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf(/* textboxtype: 1, unk: 0, line: 29 */ "Básicamente se me ha caído la ruleta\nque me había colocado a la espalda y\nahora está debajo de las nubes.\n\n¡Y sin ella ya me puedo ir olvidando\nde convertir todo esto en el lugar\nmás maravilloso del mundo donde\njamás se detenga la diversión!\n<0x10009:0x000a0c00>No sé qué hacer... ¿Debería renunciar\na ella y dar por hecho que es del todo\nimposible recuperarla?\n[1-]Yo te la\nbusco[2]Pues casi\nque sí...")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0000000f>Ay, ay, ay... ¡qué desgracia más\ndesgraciada! Mi querida ruleta\nha desaparecido bajo el inmenso\nmar de nubes...\n¡Y sin ella jamás podré cumplir\nel sueño que llevo persiguiendo\ntoda mi vida! ¡Mi existencia ya\nno tiene sentido!")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>¡La <color blue<isla Fortuna>coloroff>! ¡Solo el nombre ya\nresulta imponente! Pero ahora mismo\nestoy liado con los preparativos, así\nque está todo patas arriba.\nSerá mejor que vuelvas en otro\nmomento, ¿de acuerdo? ¡Seguro\nque te sorprenderá tanto que no\npodrás ni siquiera marcharte!")
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000d0001>¡Ah, un visitante! Acércate, muchacho,\nacércate. No tengas miedo.\n\n\n<0x10009:0x00090600>Seguro que sientes la imperiosa\nnecesidad de saber qué estoy\nhaciendo aquí, ¿no?\n[1-]Un poco, sí[2]Pues no")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000d0002>¡Eso es lo que quería oír! ¡Sabía que\nalguien con esa planta imponente\nsentiría curiosidad por esta mi más\ngrande empresa!\n<0x10009:0x00080600>Jamás cejaré en mi empeño por\nconvertir esta isla en un lugar\nde diversión sin límite donde todo\nel mundo encuentre la felicidad.\n¿Y quieres que te diga cómo la voy a\nllamar? Pues nada más y nada menos\nque...<pause 30> ¡la <color blue<isla Fortuna>coloroff>!\n\n<0x10009:0x00120600>Pero todo está todavía manga por\nhombro, así que será mejor que\nvuelvas por aquí más adelante.\n¡Seguro que lo pasamos en grande!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x000d0c03>Para qué te voy a engañar...\nTu respuesta no me ha agradado lo\nmás mínimo. Es más, llevo una lucha\ninterna por no decirte lo que pienso.\n<0x10009:0x00080600>¿Porque sabes qué? Lo único que me\nimporta en esta vida es hacer realidad\nlos sueños de los demás.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 31, 'param3': 44}
/*< 31>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
/*< 26>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 14, 'param3': 12}
/*< 14>*/ 	switch (context_related4(0)) {
          	  case 0:
/*<115>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 117, 'param3': 13}
/*<117>*/ 		wait_frames(50)
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x0000ff05>¡Oh, cielos! ¡La adversidad se ha\ncebado con tu persona y te has\nterminado estampando contra\nla temible área gris!\nTemible para ti, claro, ¡porque eso\nsignifica que mis ganancias ascienden\na <color red<<numeric arg2 0> <0x30004:0x01cd>>coloroff>!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		wait_frames(50)
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x0000ff05>¡Qué amarga contrariedad! <color red<0 rupias>coloroff>,\nni una más, ni una menos. ¡Pero no\npermitas que te embargue el desánimo\ny vuelve cuando quieras!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		wait_frames(85)
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00ffff06>¡Vaya, vaya, esta vez te ha acompañado\nla suerte! ¡A eso lo llamo yo aterrizar\nen brazos de la fortuna!\n\n<0x10009:0x000d0600>Veamos, has caído en un área valorada\nen <numeric arg0 0> y has obtenido un multiplicador\nde <numeric arg1 0>, lo que traducido en <color red<rupias>coloroff>...\n¡nos da un total de <color red<<numeric arg2 0>>coloroff>!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Y como buen caballero pagador que\neste humilde servidor presume de ser,\n¡aquí tienes tu premio en rupias!\n¡Nada más y nada menos que <numeric arg2 0>!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00120600>Si logras esquivar todos los globododos,\natraviesas 5 anillos y caes en un área de\n50 rupias...\n\n¡te llevarás a casa un gran premio\nespecial!\n\n\n<0x10009:0x00081000>¡Espero volver a ver tu imponente\nplanta de aventurero de las alturas\npor aquí muy pronto!\n")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		wait_frames(130)
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00ffff06>¡Sublime! ¡Simple y llanamente\nsublime! ¡Has aterrizado en un\nárea de 50 rupias!\n\nY como habías obtenido un\nmultiplicador x <numeric arg1 0>...\n¡has conseguido <color red<<numeric arg2 0> rupias>coloroff>!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "¡Increíble! ¡Has atravesado todos los\nanillos de la suerte y además has caído\nen la mejor zona de todas! ¡Te mereces\nun premio además de las rupias!")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				check_item_flag(489, 3)
/*<149>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 65}) {
          				  case 0:
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 12}
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00120600>Si logras esquivar todos los globododos,\natraviesas 5 anillos y caes en un área de\n50 rupias...\n\n¡te llevarás a casa un gran premio\nespecial!\n\n\n<0x10009:0x00081000>¡Espero volver a ver tu imponente\nplanta de aventurero de las alturas\npor aquí muy pronto!\n")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000006>¡Muchísimas gracias! ¡Todo vuelve a\ntener sentido otra vez! ¡Ahora ya puedo\nretomar mi gran proyecto de la <color blue<isla\nFortuna>coloroff>!\n<0x10009:0x00000a00>¡Aaaaaaah! ¡Tanta felicidad es casi\ninsoportable! ¡Siento un cosquilleo\nindescriptible por todo el cuerpo!")
/*< 67>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "¡Te pienso conceder el grandísimo\nhonor de ser mi primer cliente!\n¡Te estaré agradecido eternamente!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000007>¡Aaaaaaaaay! ¡Que sí, que es mi ruleta!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x0000000b>¡¿Pe... pero qué ven mis ojos?!\n¡No... no es posible!\n\n\n¡Sí! ¡No hay duda! ¡No es una\nalucinación!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10012:0x00000064>Pues hala, ya está aquí el tablero\nde los co... de los colores.")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000064>Para cualquier otra cosa, ya sabes.\n¡Que me lo pida Fay!")
          }

