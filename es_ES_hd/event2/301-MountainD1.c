          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo, he detectado la presencia de\nenemigos más adelante. De acuerdo\ncon mis cálculos, poseen una fuerza\nfísica extraordinaria.\nSi el \x0E\x01\x12\x04\x00\x01amo <g<fija el objetivo >>sobre un rival\ncon (Z) y pulsa (v) a continuación,\nacudiré con los datos que haya podido\nrecabar sobre el enemigo en cuestión.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Nos invaden monstruos diabólicos...\nPierdo a mi colega... ¿Qué más me\npuede pasar?")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("¿Qué tal, chaval? Me alegro de volver\na verte... ¿Sigues buscando a tu amiga?\n\n\nAhora que lo pienso...<pause0F> Antes de llegar\naquí vi que <pling>se llevaban a una <r<tipa rubia\nmuy rara>>.\n\nPero a ver quién es el guapo\x0E\x01\x09\x04\x14\x1215 que\nla ayuda con tanto monstruo suelto\npor aquí. ¡Es imposible!\n\n\x0E\x01\x09\x04ÿ\xFF00Si aprecias un poquito tu vida, más\nte vale esfumarte cuanto antes.")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Amo Link, confirmo que\nZelda purificó su cuerpo en este\nmanantial no hace mucho.\n\nAdemás, de las palabras que acabo\nde traducir se deduce que se dirigió\na la región conocida como <b<Lanayru>>.\n\nSi la litografía es llevada de vuelta\nante la Diosa, aparecerá una nueva\ncolumna de luz y será posible ir a\ndicha región.\nRecomiendo por tanto regresar\na <b<Altárea >>para, a continuación,\nponer rumbo a Lanayru.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Nada, no hay manera, no está por\nninguna parte... Seguro que se me\nha caído por aquí.")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("¡Hombre, chaval, qué oportuno!\n¡Soy yo, tu gran amigo <b<Jerry>>!\n\n\n\x0E\x01\x09\x04ÿ\xFFFF¡El destino ha hecho que volvamos a\nencontrarnos aquí! ¿Vienes a ayudarme\na buscar mi <y<saco de bombas>>?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("Estaba buscando tesoros al otro lado\nde esas rocas cuando, de repente,\nme atacaron unos monstruos.<pause0F> Al huir\nse me debió de caer. \x0E\x01\x09\x04\x13\x100DEstoy seguro...")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFY no veas lo práctico que es el saco...\nTe permite <r<guardar flores bomba y\nusarlas cuando quieras>>.\nFijo que lo tienen esos bicharracos...\n¡No sabes la rabia que me da!<pause0A>\n\x0E\x01\x09\x04\x11\xDFF¡Te lo suplico! ¡Tienes que ayudarme\na recuperar mi <y<saco de bombas>>!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08¡Mi <y<saco de bombas>>! ¡Me lo has traído!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FF¡Eres el mejor, chaval!\nVenga, venga, dámelo...<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0E¿Cómo? ¿Que quieres que te lo preste\npara poder seguir adelante?\n\n\n\x0E\x01\x09\x04ÿ\xFFFFAh, claro, ya me había olvidado de que\nhas venido aquí en busca de tu amiga.\n\n\n\x0E\x01\x09\x04\x15\xD11Por cierto...<pause0F> ¿cómo estará mi colega?\n[1]Se ha ido[2]Preocupado[3]Ni idea")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007¿En serio? Si ya sabía yo que no\nse podía confiar en él...\n\n\n\x0E\x01\x09\x04ÿ\x8FFOjalá se pareciera más a ti. Hay que\necharle valor para venir solo a un sitio\ncomo este...\n\n\x0E\x01\x09\x04\x14\x1209Pero bueno, qué le vamos a hacer.\nY de lo de prestarte mi saco, ni hablar;\nmejor te lo regalo. Hala, todito para ti.")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("No sabes la suerte que tienes de que\nhaya decidido donarte mi fantástico\n<y<saco de bombas>>. ¡Y ahora vete a\nencontrar a tu amiga!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004Vaya, así que está preocupado...<pause0F>\nPues lo lamento, no era mi intención.\n\n\n\x0E\x01\x09\x04ÿ\x8FFTú también estarás que te subes por\nlas paredes, ¿no? Porque no saber si\ntu amiga sigue o no con vida...\n\n\x0E\x01\x09\x04\x14\x1209Bueno, alegra esa cara. Mira, te voy\na regalar mi saco, a ver si así te animas\nun poco.")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804Vaya...<pause0F> Pues espero que esté bien.\nCon todos los monstruos que hay por\naquí, más le vale andarse con ojo.\n\n\x0E\x01\x09\x04\x00\x8FFTú también estarás que te subes por\nlas paredes, ¿no? Porque no saber si\ntu amiga sigue o no con vida...\n\n\x0E\x01\x09\x04\x14\x1209Bueno, alegra esa cara. Mira, te voy\na regalar mi saco, a ver si así te animas\nun poco.")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12¡Oye, oye!, ¿adónde vas tan rápido?\nCasi olvido una cosa importante...\n\n\n\x0E\x01\x09\x04\x09\x8FFEsos monstruos me han dejado el saco\nvacío, así que mejor será que cojas\nesto, chaval.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("Cuando se te agoten las bombas, puedes\nguardar las que encuentres en el saco.\n\n\n\x0E\x01\x09\x04\x11\x80BSi al levantar una flor bomba sobre\ntus hombros pulsas (B),<g< la meterás\nen el saco>>. Recuérdalo bien, ¿eh?\x0E\x01\x11\x02\x1CD\n\n\x0E\x01\x09\x04\x09\x8FFEn el que tienes <r<caben 10 bombas>>, así\nque en cuanto veas una flor bomba,\nya sabes. ¡A la saca! ¡De esta manera\nlas tendrás siempre a mano!")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Por cierto, chaval, ¿alguna vez te\nhas visto envuelto en llamas cuando\nluchabas con los monstruos?\nSi es que luchar quema mucho...\n\x0E\x01\x09\x04\x09\x8FFPues mira, cuando te vuelvas a ver\nen esa situación, apaga las llamas\ncuanto antes, porque si sacas una\n<y<bomba >>en ese momento...")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Je, je, ¡buen trabajo, chaval!\nTu técnica de lanzar rodando\nlas <y<flores bomba >>es muy buena.\n\n\x0E\x01\x09\x04\x11\x800¡Ya estás preparado para recuperar\nmi <y<saco de bombas >>y traérmelo!\n¡¿A qué esperas?!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("Con un buen pepinazo, ese tipo de rocas\nrevienta con facilidad. ¿Qué tal si\nbuscas alguna <y<flor bomba >>y pruebas?")
          			  case 1:
/*< 97>*/ 				printf("Pero, claro...<pause0F> Tú no sabes excavar,\nasí que no sé cómo vas a llegar\nal otro lado.\n\n\x0E\x01\x09\x04\x15\x120CMmm... Creo que tengo una idea.\nEsa roca de ahí parece bastante\nfrágil. Quizá puedas reventarla\ncon una <y<flor bomba>>.\n\x0E\x01\x09\x04\x09\xFF00¿Por qué no buscas una por\nlos alrededores?")
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
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFEsto<pause01>.<pause01>.<pause01>.<pause01> <pause08>Qué memoria la mía.<pause14>\nDisculpa, pero creo que he\nolvidado cómo te llamabas...\n\n\x0E\x01\x09\x04\xD0A\x5FFBah, no importa. Con tal de que\ndejes que te cuente un rato mis\npenas, puedes llamarte como\nte dé la real gana. Verás...")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900Vengo corriendo hasta aquí porque\nlos inútiles de mis esbirros dicen que\ntienen a la sacerdotisa y... ¿con qué\nme encuentro?\n\x0E\x01\x09\x04\xD00\xCFF¡Con el perrito faldero de la Diosa!")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍEs inaudito...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍEsa estúpida...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CD¡La maldita sierva\nde la Diosa\x0E\x01\n\x04\x0BÍ se la llevó!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CD¡Y la necesito! ¡Necesito a la\nsacerdotisa para resucitar a\nnuestro rey!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("<pause05>(.<pause05>.<pause05>.)<pause05> <pause0A>Perdona de nuevo...\n\n\n\n\x0E\x01\x09\x04\xD08\x5FFComprenderás que, dadas las\ncircunstancias, necesitaba desahogarme,\n¿verdad?")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFLlega un punto en el que uno no sabe\ncómo descargar su ira. <pause14>Y, ya que estás\naquí...<pause14> me temo que te va a tocar a ti...<pause14>")
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
