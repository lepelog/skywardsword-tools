          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Esto es un brebaje de lo más\nmisterioso llamado <y<poción\nrevitalizante>>!\n\n¡Si lo aplicas sobre un escudo roto,\nquedará como nuevo! ¡Es una cosa\nimpresionante!\n\n¡Y, por si fuera poco, te devuelve\n<r<cuatro corazones>>! No me digas que\nno te vendría bien para tu aventura.\nAdemás, solo cuesta <r<30 rupias>>...\n[1]Dámela...[2-]Mmm, no")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Hola!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, solo tienes que\npreguntar!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x09\x04\x07\x704Por supuesto, claro que puedo mejorar\nesta poción. Entonces, ¿quieres que\nme ponga manos a la obra?\n[1]¡Sí![2-]Espera...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x07\x700A ver, a ver... Un segundito y...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf("\x0E\x01\x09\x04\x07\x708¡Listo! ¡Aquí tienes!")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf("\x0E\x01\x09\x04\n\xA06De acuerdo... ¿Puedo hacer alguna\notra cosa por ti?")
/*<100>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 12}
/*< 78>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 54, 'param3': 12}
/*< 54>*/ 	check_item_flag(153, 1)
/*< 53>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x00\x0BEsa es una <y<poción de invencibilidad>>.\nReduce el daño recibido durante un\nbreve espacio de tiempo.\n\n¡Si no te sientes muy seguro de cara\na un combate, esta es la poción que\nestabas buscando!\n\nAunque su precio es un tanto elevado.\nCuesta <r<200 rupias>>. ¿La quieres?\n\n[1]¡Claro![2-]Uf, no")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Hola!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, solo tienes que\npreguntar!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x09\x908¡Gracias! ¡Muchas gracias! ¡Vuelve\ncuando quieras!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\n\xA06Está bien... El cliente siempre tiene\nla razón. Espero volver a verte por\naquí pronto, ¿de acuerdo?")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (zone_temp_flags[2 /* 0x1 04 */]) {
          						  case 0:
/*<  5>*/ 							printf("\x0E\x01\x09\x04\x00\x0B¿Mmm? ¿Querías algo?\n\n[1]¡Quiero saber![2-]No, nada")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf("\x0E\x01\x09\x04\x00\x04¡Muy bien, jovencito! Colócate\ndelante de la poción que te interese\ny oprime (A).\n\nAsí te explicaré las características\nde esa poción. Pero debo decirte\nque mis productos son bastante\nsencillos.\nSi lo que buscas es algo con más\nfuerza...\n\n\n\x0E\x01\x09\x04\x0D\x700compra una de mis pociones y llévasela\na mi esposo, que está aquí al lado.\n\n\n\x0E\x01\x09\x04\x0C\x00Aunque no lo parezca, es único\nelaborando pociones... ¡y también\ncambiando pañales! Eso sí, sus\nhabilidades acaban ahí...")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x0C\xB0E¡Oye, no hace falta ser desagradable!\nYo también estoy muy ocupada.\nPero me pareces un buen chico,\nasí que te perdono la impertinencia.\n\x0E\x01\x09\x04\x0D\x00Si lo que buscas son pociones más\npotentes, ve a hablar con mi esposo.\nÉl realiza mezclas para obtener\nproductos aún más beneficiosos.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf("\x0E\x01\x09\x04\x00\x01¡Jovencito, bienvenido!\n\n\n\nEn mi tienda de pociones puedes\nadquirir brebajes que te serán\nmuy útiles cuando te encuentres\nen apuros.\nFascinante, ¿verdad? ¿Quieres que\nte siga contando más cosas?\n[1]¡Claro![2-]No, gracias")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Ven aquí, que tengo novedades!\n¡La poción que estaba preparando\nya está terminada!\n\n¡La he llamado <y<poción de resistencia>>!\nEs muy original, ¿no te parece?\n\n\nAl beber esta poción, el <b<indicador\nde resistencia >>se vaciará más despacio\ndurante un rato.\n\nDe ahí que sea un poco cara, ¡pero\nte aseguro que vale la pena!\n\n\nSi te interesa, colócate delante de ella\ny habla conmigo como de costumbre.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qué casualidad, tengo una novedad\nrecién salida de la botica de mi esposo.\n¡Te va a ser utilísima, ya verás!\n\nMe refiero a nuestra nueva y exclusiva\n<y<poción de oxígeno>>.\n\n\n¡Es algo fantástico! Verás, al beberla,\nconsigue que el <b<indicador de oxígeno\n>>se vacíe más lentamente. ¡De lo más\nútil si vas a bucear! ¿No crees?\nY además está a un precio francamente\ninteresante. Yo que tú no la dejaba\nescapar...\n\nSi te interesa, colócate delante de ella\ny habla conmigo como de costumbre.")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Hola, jovencito!\n\n\n\n¡Estás en la tienda de pociones! ¡Y las\ntengo de todo tipo! ¡Incluso tengo unas\nque te ayudarán a recuperarte cuando\nte hieran en combate!\n\x0E\x01\x09\x04\x0D\x700Porque ahora que me fijo, tú eres uno\nde esos caballeros, ¿verdad? Aunque\npor lo que veo aún estás estudiando...\n\nTe voy a decir una cosa: te aseguro\nque vas a necesitar mis pociones,\n¡así que no se te ocurra marcharte\nsin comprarme algo!")
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x0C\xB06Mmm\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\n\n\n\n¿Acaso no llevas encima ninguna\nbotella vacía?\n\n\nPues solo puedo venderte pociones\nsi tienes botellas vacías donde\nguardarlas.\n\n\x0E\x01\x09\x04\x09\x90BPero mira, me pareces un muchacho\nmuy agradable, así que voy a regalarte\nuna botella vacía... ¡pero solo por\nesta vez!\n\x0E\x01\x09\x04\x07\x700Aparte de pociones puedes meter otras\ncosas. Es un objeto multiusos. ¡Ji, ji!\n¡Ya verás qué útil te resulta!")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x0C\xB08Ay, pobre. Tienes la alforja llena.\n¡Eso es que te gusta gastar!\n\n\n\x0E\x01\x09\x04\n\xA00¿Por qué no guardas unas cuantas cosas\nen la consigna? ¡Así irás mucho más\nligero!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x0D\x70BLas botellas vacías se guardan en tu\nalforja de aventurero. Oprime \x0E\x02\x04\x02\x28CD\npara ver lo que tienes.\x0E\x01\x11\x02\xECD")
/*<114>*/ 					printf("Cuando la alforja esté llena y no\npuedas meter más cosas, siempre\nestá la posibilidad de recurrir a\nla consigna.\n\x0E\x01\x09\x04\x0C\x70BY bien... ¿Qué vas a comprar?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf("\x0E\x01\x09\x04\x0D\x70BLas botellas vacías se guardan en tu\nalforja de aventurero. Oprime <g<\x0E\x02\x04\x02\x28CD >>para\nver lo que tienes.\x0E\x01\x11\x02\xECD\n\nMantén oprimido \x0E\x02\x04\x02\x28CD para señalar el objeto\nque quieras utilizar.\x0E\x01\x11\x02\xECD\n\n\nA continuación <g<suelta >>\x0E\x02\x04\x02\x28CD para elegir\nel objeto y sacarlo de la alforja.\x0E\x01\x11\x02\xECD")
/*<115>*/ 					printf("Cuando la alforja esté llena y no\npuedas meter más cosas, siempre\nestá la posibilidad de recurrir a\nla consigna.\n\x0E\x01\x09\x04\x0C\x70BY bien... ¿Qué vas a comprar?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf("¡Si tienes alguna otra poción y quieres\nque la mezcle, solo tienes que\ntraérmela!")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf("Esta poción no se puede mejorar más.\nHabla con mi esposa si quieres comprar\nalguna otra poción.")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<saltabosques>> pueden darle, pero veo\nque no tienes bastantes...\nSegún dice en el grimorio, esos insectos\nsuelen abundar bastante en bosques\ny sitios así, con mucho verde...")
          	flw_137:
/*<137>*/ 	printf("\x0E\x01\x09\x04\x07\x00Lo siento... Si quieres, podemos probar\ncon otra poción.")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x00\nNo tienes los ingredientes necesarios\npara elaborar esta poción...\n\n\nLo siento... Elige otra, ¿de acuerdo?")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<escaracornos de Farone>> pueden darle,\npero veo que no tienes bastantes...\nSegún dice en el grimorio, esos insectos\nsuelen encontrarse por los árboles.\nYo buscaría en algún bosque o en sitios\ncon mucho verde...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x00\nHijo, siento tener que decirte esto,\npero parece que no tienes suficientes\nrupias...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<abejas deku>> pueden darle, pero veo\nque no tienes bastantes...\nSegún dice en el grimorio, esos insectos\nsuelen hacer sus colmenas en lo alto\nde los árboles, así que yo buscaría por\nzonas boscosas y con mucho verde...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x09\x04\x00\nVaya, pero si no tienes ninguna poción\npara mezclar.\n\n\n\x0E\x01\x09\x04\x09\x900Mi esposa vende pociones aquí al lado,\nquizá te interese hablar con ella...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<mantis entrenubosas>> pueden darle,\npero veo que no tienes bastantes...\nTampoco te preocupes demasiado.\nEs un insecto bastante común aquí,\nen Neburia.")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf("\x0E\x01\x09\x04\n\xA08No tienes ninguna <y<botella vacía>>...\nVuelve cuando hayas conseguido\nuna, ¿de acuerdo?")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<magmarinitas>> pueden darle, pero veo\nque no tienes bastantes...\nSegún dice en el grimorio, esos insectos\nhabitan principalmente en la región de\nla montaña de fuego. Aunque quién\nsabe dónde estará eso...")
          	flw_151:
/*<151>*/ 	printf("\x0E\x01\x09\x04\x07\x00Lo siento... Si quieres, podemos probar\ncon otra poción.")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x0C\xB08¡Oye, si no tienes dinero!\nEres encantador, pero yo me gano\nla vida con esto y no puedo fiarle\na nadie.\n\x0E\x01\x09\x04\n\xA00¡Vuelve por aquí cuando hayas\nahorrado un poco!")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<sacraliposas>> pueden darle, pero veo\nque no tienes bastantes...\nPero puedes encontrar montones de\nellas aquí, en Neburia. No es nada\ncomplicado.")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x09\x90AMuchísimas gracias. Si quieres una\npoción más potente, habla con mi\nesposo, aquí al lado. Seguro que él\npuede ayudarte.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<hormigas de Lanayru>> pueden darle,\npero veo que no tienes bastantes...\nSegún dice en el grimorio, esos insectos\ntienen su hábitat en zonas arenosas...\nDe hecho, incluso creo que menciona\nun desierto o algo así.")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf("\x0E\x01\x09\x04\n\xA0E¡Grrr! ¡Esto no es un museo, aquí\nse viene a comprar!")
          	  case 1:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x0C\xB10¿Que no te interesa? ¡Ya sé que mis\npociones saben un poco raras, pero\nno podrás negar que son muy eficaces!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<cigarduneras>> pueden darle, pero veo\nque no tienes bastantes...\nSegún dice en el grimorio, esos insectos\nsuelen provenir de zonas arenosas...\nDe hecho, incluso creo que menciona\nun desierto o algo así.")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<gerúdulas>> pueden darle, pero veo\nque no tienes bastantes...\nSegún dice en el grimorio, esos insectos\nse encuentran sobre todo en las zonas\ncon hierba de la región de las arenas...\ndondequiera que esté eso.")
          	flw_165:
/*<165>*/ 	printf("\x0E\x01\x09\x04\x07\x00Lo siento... Si quieres, podemos probar\ncon otra poción.")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<eldinabajos peloteros>> pueden darle,\npero veo que no tienes bastantes...\nSegún dice en el grimorio, esos insectos\nhabitan principalmente en la región de\nla montaña de fuego. Aunque no tengo\nidea de dónde estará eso...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<neburabajos>> pueden darle, pero veo\nque no tienes bastantes...\nNo te preocupes demasiado. Ese insecto\nes muy común aquí, en Neburia. Seguro\nque encontrarás un montón de ellos\nen cuanto empieces a buscarlos...")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<cielérnagas>> pueden darle, pero veo\nque no tienes bastantes...\nDicen que son insectos muy especiales\nque solo se dejan ver por las noches\ny en muy pocos lugares del cielo.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Eso es una <y<poción de salud>>! ¡Si te la\nbebes recuperarás 8 corazones!\n\n\n¿Por qué no te llevas una para\nel camino? ¡Son solo <r+<20 rupias>>!\n[1]¡De acuerdo![2-]Mejor no")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Hola!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, solo tienes que\npreguntar!")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	check_item_flag(153, 1)
/*< 14>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x00\x04¡Eso es una <y<poción de oxígeno>>! Al\nbeberla, tu <b<indicador de oxígeno>>\nbajo el agua se vacía más despacio\ndurante un rato.\n¿Te interesa? Solo cuesta <r+<20 rupias>>.\n[1]¡Claro![2-]Uf, no")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x0C\xB04Esa poción no la tenemos a la venta,\naún está en fase experimental...\npero muy pronto estará lista para\nel público.\n\x0E\x01\x09\x04\x09\x700De todos modos, ¡tenemos pociones\nde todo tipo! ¡Seguro que encontrarás\nlo que estás buscando!")
          		}
          	  case 1:
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Hola!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, solo tienes que\npreguntar!")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	check_item_flag(153, 1)
/*< 17>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 25, 'param3': 12}
/*< 25>*/ 			printf("\x0E\x01\x09\x04\x00\x0BEsa poción es una maravilla, se llama\n<y<poción de resistencia>>.\n\n\nAl beberla, tu <b<indicador de\nresistencia >>se vaciará más despacio\ndurante un rato.\n\nPor eso es un poco cara, pero te\naseguro que es una excelente compra.\nEs tuya por <r<50 rupias>>.\n[1]¡La compro![2-]Otro día")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x0C\xB04Esta es una poción buenísima para\nque tu <b<indicador de resistencia>>\nno se vacíe.\n\nEl problema es que no la he acabado\ntodavía, así que vas a tener que esperar\nhasta que la tenga lista.\n\n\x0E\x01\x09\x04\x09\x700Pero puedes ver si te interesan mis\notras pociones, por supuesto.")
          		}
          	  case 1:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Hola!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, solo tienes que\npreguntar!")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	zone_temp_flags[4 /* 0x1 10 */] = false;
/*<181>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			check_item_flag(71, 1)
/*<119>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 44}) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ho... hola... Bienvenido a la tienda\nde pociones que vende curas para\ntodas las ocasiones.\n\nTe puedo ayudar a mejorar los\nproductos que le hayas comprado\na mi esposa.\n\n\x0E\x01\x09\x04\x07\x700Veamos... ¿Tienes alguna poción\nque quieras que mezcle?\n[1]Sí[2-]No")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf("\x0E\x01\x09\x04\x00\x03Mmm... Sí... Creo que podré ayudarte.")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf("\x0E\x01\x09\x04\x00\nVaya, pero si no tienes ninguna poción\npara mezclar.\n\n\n\x0E\x01\x09\x04\x09\x900Mi esposa vende pociones aquí al lado,\nquizá te interese hablar con ella...")
          					}
          				  case 1:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\n\xA06De acuerdo, no hay problema.\nVuelve cuando quieras.")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf("\x0E\x01\x09\x04\x00\x01Si todavía no tienes ningún\n<y<cazamariposas>>, será mejor\nque compres uno en la <r<tienda\nde Terry>>.\nSeguramente estará revoloteando\npor las cercanías del bazar.\n\n\nSi utilizas tu <g<vista subjetiva >>para\nobservar atentamente el cielo, seguro\nque la ves, sí...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ho... hola... Bienvenido a la tienda\nde pociones que vende curas para todas\nlas ocasiones.\n\nTe puedo ayudar a mejorar los\nproductos que le hayas comprado\na mi esposa.\n\n\x0E\x01\x09\x04\x00\x07Pero claro... para mejorarlos\nnecesitaré insectos... sí, eso es,\ninsectos...\n\nSi todavía no tienes <y<cazamariposas>>,\nserá mejor que compres uno en la\n<r<tienda de Terry>>.\n\n\x0E\x01\x09\x04\x07\x708Seguramente estará revoloteando por\nlas cercanías del bazar.\n\n\nSi utilizas tu <g<vista subjetiva >>para\nobservar atentamente el cielo, seguro\nque la ves, sí...")
/*<122>*/ 					zone_temp_flags[6 /* 0x1 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				check_item_flag(160, 1)
/*<178>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 58}) {
          				  case 0:
/*<182>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 31}
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ho... hola... Bienvenido a la tienda de\npociones que vende curas para todas\nlas ocasiones... ¿Cómo? ¿Dices que\ntienes algo que quieres enseñarme?\nVerás, es que no es un buen momento,\ntengo muchísimo trabajo. Si no te\nimporta, ¿puedes ir a mi casa <r<por la\nnoche >>para hablar tranquilamente?")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bi... bienvenido...\n\x0E\x01\x06\x02\xFBCDA...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\n\xA06 aoooh...\n\n\n\x0E\x01\x09\x04ÿ\xFF00¡Ay! Lo siento, te pido perdón. No está\nnada bien eso de bostezar delante de\nlos clientes... Pero entiéndelo, llevo\nmuchas <r<noches>> sin dormir.\nÚltimamente no puedo descansar...\n\n\n\n¡Ups! Lo... lo siento, discúlpame...\nNo pretendía aburrirte con mis penas...\nSerá mejor que empiece de nuevo.\n")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

