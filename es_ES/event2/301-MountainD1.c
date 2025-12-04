          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x0000000b>Amo, he detectado la presencia de\nenemigos más adelante. De acuerdo\ncon mis cálculos, poseen una fuerza\nfísica extraordinaria.\nSi el <0x10012:0x00000001>amo <color green<fija el objetivo >coloroff>sobre un rival\ncon (Z) y pulsa (v) a continuación,\nacudiré con los datos que haya podido\nrecabar sobre el enemigo en cuestión.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Nos invaden monstruos diabólicos...\nPierdo a mi colega... ¿Qué más me\npuede pasar?")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "¿Qué tal, chaval? Me alegro de volver\na verte... ¿Sigues buscando a tu amiga?\n\n\nAhora que lo pienso...<pause 15> Antes de llegar\naquí vi que <sound 4>se llevaban a una <color red<tipa rubia\nmuy rara>coloroff>.\n\nPero a ver quién es el guapo<0x10009:0x00141215> que\nla ayuda con tanto monstruo suelto\npor aquí. ¡Es imposible!\n\n<0x10009:0x00ffff00>Si aprecias un poquito tu vida, más\nte vale esfumarte cuanto antes.")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10012:0x00000004>Amo <heroname>, confirmo que\nZelda purificó su cuerpo en este\nmanantial no hace mucho.\n\nAdemás, de las palabras que acabo\nde traducir se deduce que se dirigió\na la región conocida como <color blue<Lanayru>coloroff>.\n\nSi la litografía es llevada de vuelta\nante la Diosa, aparecerá una nueva\ncolumna de luz y será posible ir a\ndicha región.\nRecomiendo por tanto regresar\na <color blue<Altárea >coloroff>para, a continuación,\nponer rumbo a Lanayru.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	wait_frames(15)
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Nada, no hay manera, no está por\nninguna parte... Seguro que se me\nha caído por aquí.")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "¡Hombre, chaval, qué oportuno!\n¡Soy yo, tu gran amigo <color blue<Jerry>coloroff>!\n\n\n<0x10009:0x00ffffff>¡El destino ha hecho que volvamos a\nencontrarnos aquí! ¿Vienes a ayudarme\na buscar mi <color yellow<saco de bombas>coloroff>?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf(/* textboxtype: 1, unk: 1, line: 4 */ "Estaba buscando tesoros al otro lado\nde esas rocas cuando, de repente,\nme atacaron unos monstruos.<pause 15> Al huir\nse me debió de caer. <0x10009:0x0013100d>Estoy seguro...")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000908ff>Y no veas lo práctico que es el saco...\nTe permite <color red<guardar flores bomba y\nusarlas cuando quieras>coloroff>.\nFijo que lo tienen esos bicharracos...\n¡No sabes la rabia que me da!<pause 10>\n<0x10009:0x00110dff>¡Te lo suplico! ¡Tienes que ayudarme\na recuperar mi <color yellow<saco de bombas>coloroff>!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00110d08>¡Mi <color yellow<saco de bombas>coloroff>! ¡Me lo has traído!\n\n\n\n<0x10009:0x00ff08ff>¡Eres el mejor, chaval!\nVenga, venga, dámelo...<pause 20>\n\n\n<0x10009:0x00110d0e>¿Cómo? ¿Que quieres que te lo preste\npara poder seguir adelante?\n\n\n<0x10009:0x00ffffff>Ah, claro, ya me había olvidado de que\nhas venido aquí en busca de tu amiga.\n\n\n<0x10009:0x00150d11>Por cierto...<pause 15> ¿cómo estará mi colega?\n[1-]Se ha ido[2-]Preocupado[3-]Ni idea")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00131007>¿En serio? Si ya sabía yo que no\nse podía confiar en él...\n\n\n<0x10009:0x00ff08ff>Ojalá se pareciera más a ti. Hay que\necharle valor para venir solo a un sitio\ncomo este...\n\n<0x10009:0x00141209>Pero bueno, qué le vamos a hacer.\nY de lo de prestarte mi saco, ni hablar;\nmejor te lo regalo. Hala, todito para ti.")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "No sabes la suerte que tienes de que\nhaya decidido donarte mi fantástico\n<color yellow<saco de bombas>coloroff>. ¡Y ahora vete a\nencontrar a tu amiga!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00001004>Vaya, así que está preocupado...<pause 15>\nPues lo lamento, no era mi intención.\n\n\n<0x10009:0x00ff08ff>Tú también estarás que te subes por\nlas paredes, ¿no? Porque no saber si\ntu amiga sigue o no con vida...\n\n<0x10009:0x00141209>Bueno, alegra esa cara. Mira, te voy\na regalar mi saco, a ver si así te animas\nun poco.")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000804>Vaya...<pause 15> Pues espero que esté bien.\nCon todos los monstruos que hay por\naquí, más le vale andarse con ojo.\n\n<0x10009:0x000008ff>Tú también estarás que te subes por\nlas paredes, ¿no? Porque no saber si\ntu amiga sigue o no con vida...\n\n<0x10009:0x00141209>Bueno, alegra esa cara. Mira, te voy\na regalar mi saco, a ver si así te animas\nun poco.")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00110d12>¡Oye, oye!, ¿adónde vas tan rápido?\nCasi olvido una cosa importante...\n\n\n<0x10009:0x000908ff>Esos monstruos me han dejado el saco\nvacío, así que mejor será que cojas\nesto, chaval.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Cuando se te agoten las bombas, puedes\nguardar las que encuentres en el saco.\n\n\n<0x10009:0x0011080b>Si al levantar una flor bomba sobre\ntus hombros pulsas (B),<color green< la meterás\nen el saco>coloroff>. Recuérdalo bien, ¿eh?<0x10011:0x01cd>\n\n<0x10009:0x000908ff>En el que tienes <color red<caben 10 bombas>coloroff>, así\nque en cuanto veas una flor bomba,\nya sabes. ¡A la saca! ¡De esta manera\nlas tendrás siempre a mano!")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00110d00>Por cierto, chaval, ¿alguna vez te\nhas visto envuelto en llamas cuando\nluchabas con los monstruos?\nSi es que luchar quema mucho...\n<0x10009:0x000908ff>Pues mira, cuando te vuelvas a ver\nen esa situación, apaga las llamas\ncuanto antes, porque si sacas una\n<color yellow<bomba >coloroff>en ese momento...")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00150809>Je, je, ¡buen trabajo, chaval!\nTu técnica de lanzar rodando\nlas <color yellow<flores bomba >coloroff>es muy buena.\n\n<0x10009:0x00110800>¡Ya estás preparado para recuperar\nmi <color yellow<saco de bombas >coloroff>y traérmelo!\n¡¿A qué esperas?!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "Con un buen pepinazo, ese tipo de rocas\nrevienta con facilidad. ¿Qué tal si\nbuscas alguna <color yellow<flor bomba >coloroff>y pruebas?")
          			  case 1:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Pero, claro...<pause 15> Tú no sabes excavar,\nasí que no sé cómo vas a llegar\nal otro lado.\n\n<0x10009:0x0015120c>Mmm... Creo que tengo una idea.\nEsa roca de ahí parece bastante\nfrágil. Quizá puedas reventarla\ncon una <color yellow<flor bomba>coloroff>.\n<0x10009:0x0009ff00>¿Por qué no buscas una por\nlos alrededores?")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 20, unk: 0, line: 31 */ "Templo terrenal")
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
/*< 70>*/ 	wait_frames(10)
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0d0805ff>Vaya, si eres tú otra vez.")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0d0005ff>Esto<pause 1>.<pause 1>.<pause 1>.<pause 1> <pause 8>Qué memoria la mía.<pause 20>\nDisculpa, pero creo que he\nolvidado cómo te llamabas...\n\n<0x10009:0x0d0a05ff>Bah, no importa. Con tal de que\ndejes que te cuente un rato mis\npenas, puedes llamarte como\nte dé la real gana. Verás...")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0d000900>Vengo corriendo hasta aquí porque\nlos inútiles de mis esbirros dicen que\ntienen a la sacerdotisa y... ¿con qué\nme encuentro?\n<0x10009:0x0d000cff>¡Con el perrito faldero de la Diosa!")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10008:0xfecd><0x1000A:0x000c00cd>Es inaudito...\n\n\n\n<0x10009:0x0d000cff><0x10008:0xfecd><pause 15><0x1000A:0x000d00cd>Esa estúpida...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10005:0x002d0000><0x10008:0x02cd>¡La maldita sierva\nde la Diosa<0x1000A:0x000b00cd> se la llevó!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10008:0x01cd>¡Y la necesito! ¡Necesito a la\nsacerdotisa para resucitar a\nnuestro rey!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<pause 5>(.<pause 5>.<pause 5>.)<pause 5> <pause 10>Perdona de nuevo...\n\n\n\n<0x10009:0x0d0805ff>Comprenderás que, dadas las\ncircunstancias, necesitaba\ndesahogarme, ¿verdad?")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0d0a05ff>Llega un punto en el que uno no sabe\ncómo descargar su ira. <pause 20>Y, ya que estás\naquí...<pause 20> me temo que te va a tocar a ti...<pause 20>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "¡sufrir mi cólera desatada!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	wait_frames(65)
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
/*< 42>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Tengo información importante, <0x10012:0x0000000b>amo:\nHe detectado el aura de Zelda\nen las cercanías.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf(/* textboxtype: 2, unk: 0, line: 19 */ "Esta cadena emite una señal muy\nfuerte. La probabilidad de que Zelda\nhaya estado sujeta a ella es del 95%.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "Desconozco cómo, pero deduzco\nque Zelda consiguió escapar de\neste lugar. Recomiendo proseguir\nla marcha cuanto antes.")
          }

