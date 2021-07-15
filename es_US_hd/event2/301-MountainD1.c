          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo, he detectado la presencia de\nenemigos más adelante. De acuerdo\ncon mis cálculos, poseen una fuerza\nfísica extraordinaria.\nSi el \x0E\x01\x12\x04\x00\x01amo <g<fija el objetivo >>sobre un rival\ncon (Z) y oprime (v) a continuación,\nacudiré con los datos que haya podido\nreunir sobre ese enemigo.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Nos invaden monstruos diabólicos...\nPierdo a mi amigo... ¿Qué más me\npuede pasar?")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("¿Qué tal, chico? Me alegro de volver\na verte... ¿Sigues buscando a tu amiga?\n\n\nAhora que lo pienso...<pause0F> Antes de llegar\naquí vi que <pling>se llevaban a una <r<chica\nrubia muy rara>>.\n\n¡Pero sería imposible\x0E\x01\x09\x04\x14\x1215 ir a ayudarla,\ncon tanto monstruo suelto por aquí!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Si aprecias un poquito tu vida, más\nte vale esfumarte cuanto antes.")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Amo Link, confirmo que\nZelda purificó su cuerpo en este\nmanantial no hace mucho.\n\nAdemás, de las palabras que acabo\nde traducir se deduce que se dirigió\na la región conocida como <b<Lanayru>>.\n\nSi la litografía es llevada de vuelta\nante la Diosa, aparecerá una nueva\ncolumna de luz y será posible ir a\ndicha región.\nPor lo tanto, recomiendo regresar\na <b<Neburia >>y, después, poner rumbo\na Lanayru.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("No está por ninguna parte...\nSeguro que se me ha caído por aquí.")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("¡Hola, muchacho! ¡Qué oportuno!\n¡Soy yo, tu gran amigo <b<Jerry>>!\n\n\n\x0E\x01\x09\x04ÿ\xFFFF¡El destino ha hecho que volvamos\na encontrarnos aquí! ¿Vienes a\nayudarme a buscar mi <y<saco de bombas>>?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("Estaba buscando tesoros al otro lado\nde esas rocas cuando, de repente,\nme atacaron unos monstruos.<pause0F> Al huir\nse me debió de caer. \x0E\x01\x09\x04\x13\x100DEstoy seguro...")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFEl saco es un objeto muy práctico...\nTe permite <r<guardar flores bomba\ny usarlas cuando quieras>>. Seguro\nque lo tienen esos tipos...\n¡No sabes la rabia que me da!<pause0A>\n\x0E\x01\x09\x04\x11\xDFF¡Te lo suplico! ¡Tienes que ayudarme\na recuperar mi <y<saco de bombas>>!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08¡Mi <y<saco de bombas>>! ¡Me lo has traído!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FF¡Eres el mejor, chico!\nVamos, vamos, dámelo...<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0E¿Cómo? ¿Dices que quieres que te lo\npreste para poder seguir adelante?\n\n\n\x0E\x01\x09\x04ÿ\xFFFFAh, claro, ya me había olvidado de que\nhas venido aquí en busca de tu amiga.\n\n\n\x0E\x01\x09\x04\x15\xD11Por cierto...<pause0F> ¿cómo estará mi amigo?\n[1]Se ha ido[2]Preocupado[3]No sé")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007¿En serio? Ya sabía yo que no\nse podía confiar en él...\n\n\n\x0E\x01\x09\x04ÿ\x8FFOjalá se pareciera más a ti. Hay que\ntener valor para venir solo a un sitio\ncomo este...\n\n\x0E\x01\x09\x04\x14\x1209Pero bueno, no se puede hacer nada.\nY en cuanto a prestarte mi saco,\nni lo sueñes. Mejor te lo regalo.\nYa está, es todo tuyo.")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("No sabes la suerte que tienes de que\nhaya decidido donarte mi fantástico\n<y<saco de bombas>>. ¡Y ahora vete a\nencontrar a tu amiga!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004Vaya, así que está preocupado...<pause0F>\nPues lo lamento, no era mi intención.\n\n\n\x0E\x01\x09\x04ÿ\x8FFTú también estarás preocupadísimo,\n¿no? Sin saber si tu amiga sigue o no\ncon vida...\n\n\x0E\x01\x09\x04\x14\x1209Bueno, alegra esa cara. Mira, te voy\na regalar mi saco, a ver si así te animas\nun poco.")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804Vaya...<pause0F> Pues espero que esté bien.\nCon todos los monstruos que hay por\naquí, más le vale tener cuidado.\n\n\x0E\x01\x09\x04\x00\x8FFTú también estarás preocupadísimo,\n¿no? Sin saber si tu amiga sigue o no\ncon vida...\n\n\x0E\x01\x09\x04\x14\x1209Bueno, alegra esa cara. Mira, te voy\na regalar mi saco, a ver si así te animas\nun poco.")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12¡Oye, oye!, ¿adónde vas tan rápido?\nCasi olvido una cosa importante...\n\n\n\x0E\x01\x09\x04\x09\x8FFEsos monstruos me han dejado el saco\nvacío, así que mejor será que te lleves\nesto, muchacho.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("Cuando se te agoten las bombas, puedes\nguardar las que encuentres en el saco.\n\n\n\x0E\x01\x09\x04\x11\x80BSi al levantar una flor bomba sobre\ntus hombros oprimes (B),<g< la meterás\nen el saco>>. Recuérdalo bien, ¿eh?\x0E\x01\x11\x02\x1CD\n\n\x0E\x01\x09\x04\x09\x8FFEn el que tienes <r<caben 10 bombas>>, así\nque en cuanto veas una flor bomba,\n¡guárdala! ¡De esta manera siempre\nlas tendrás a la mano!")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Por cierto, chico. ¿Alguna vez\nte has visto envuelto en llamas\ncuando luchabas con los monstruos?\n\n\x0E\x01\x09\x04\x09\x8FFCuando te vuelvas a ver en esa\nsituación, apaga las llamas cuanto\nantes, porque si sacas una <y<bomba\n>>en ese momento...")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Je, je, ¡buen trabajo, muchacho!\nTu técnica de lanzar rodando\nlas <y<flores bomba >>es muy buena.\n\n\x0E\x01\x09\x04\x11\x800¡Ya estás preparado para recuperar\nmi <y<saco de bombas >>y traérmelo!\n¡¿Qué esperas?!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("Con una buena explosión, ese tipo de\nrocas revienta con facilidad. ¿Qué tal\nsi buscas alguna <y<flor bomba >>y lo\nintentas?")
          			  case 1:
/*< 97>*/ 				printf("Ah, claro...<pause0F> Tú no sabes excavar,\nasí que no sé cómo vas a llegar\nal otro lado.\n\n\x0E\x01\x09\x04\x15\x120CMmm... Creo que tengo una idea.\nEsa roca de ahí parece bastante\nfrágil. Quizá puedas reventarla\ncon una <y<flor bomba>>.\n\x0E\x01\x09\x04\x09\xFF00¿Por qué no intentas encontrar una\npor los alrededores?")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Templo terrenal")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1006, 'next': 54, 'param3': 24}
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 49, 'param3': 32}
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 99, 'next': 56, 'param3': 16}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 52, 'param3': 40}
/*< 52>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1279, 'next': 70, 'param3': 13}
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 51, 'param3': 6}
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf("\x0E\x01\x09\x04\xD08\x5FFVaya, si eres tú otra vez.")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFEste<pause01>.<pause01>.<pause01>.<pause01> <pause08>Qué memoria la mía.<pause14>\nDisculpa, pero creo que he olvidado\ncómo te llamabas.\n\n\x0E\x01\x09\x04\xD0A\x5FFNo es que importe mucho, claro.\nNecesito que alguien escuche mis\nquejas y tendré que conformarme\ncontigo.")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900Vine corriendo hasta aquí porque\nlos inútiles de mis esbirros dijeron\nque teníamos a la sacerdotisa...\n¿Y con qué me encuentro?\n\x0E\x01\x09\x04\xD00\xCFFCon que esa sierva de la diosa...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍLo había vuelto a hacer...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍLo que quiero decir es que...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CD¡Esa repugnante sierva\nde la Diosa\x0E\x01\n\x04\x0BÍ se la llevó!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CD¡Y necesito a la sacerdotisa\npara resucitar a nuestro rey!\n¡LA NECESITO!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("<pause05>.<pause05>.<pause05>.<pause05><pause0A>Te pido disculpas otra vez.\n\n\n\n\x0E\x01\x09\x04\xD08\x5FFComprenderás que, dadas las\ncircunstancias, necesitaba desahogarme,\n¿verdad?")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFLlega un punto en el que uno\nno sabe cómo descargar su ira.\n<pause14>Y, ya que estás aquí...<pause14> me temo\nque te va a tocar a ti...<pause14>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf("¡sufrir mi cólera desatada!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 65, 'next': 48, 'param3': 6}
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
          		flw_57:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("Tengo información importante, \x0E\x01\x12\x04\x00\x0Bamo:\nHe detectado el aura de Zelda\nen las cercanías.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf("Esta cadena emite una señal muy\nfuerte. La probabilidad de que Zelda\nhaya estado sujeta a ella es del 95%.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf("Desconozco cómo, pero deduzco\nque Zelda consiguió escapar de\neste lugar. Recomiendo proseguir\nla marcha cuanto antes.")
          }

