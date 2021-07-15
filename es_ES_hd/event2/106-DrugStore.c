          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Esto es un mejunje de lo más\nmisterioso llamado <y<reparol 100>>!\n\n\n¡Si lo aplicas sobre un escudo roto,\nquedará como nuevo! ¡Es una cosa\nimpresionante!\n\n¡Y, por si fuera poco, te devuelve\n<r<cuatro corazones>>! No me digas que\nno te vendría bien para tu aventura.\nAdemás, solo cuesta <r<30 rupias>>...\n[1]Venga...[2-]Mmm, no")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Muy buenas!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x09\x04\x07\x704Por supuesto, claro que puedo mejorar\nesta poción. ¿Y bien? ¿Me pongo\nmanos a la obra?\n\n[1]¡Sí![2-]Espera...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x07\x700A ver, a ver... Un segundito y...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf("\x0E\x01\x09\x04\x07\x708¡Listo! ¡Aquí tienes!")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf("\x0E\x01\x09\x04\n\xA06De acuerdo... ¿Alguna otra cosa que\npueda hacer por ti?")
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
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x00\x0BEsto es <y<invencibline 500>>. Es una poción\nque reduce el daño recibido durante\nun breve espacio de tiempo.\n\n¡Si no las tienes todas contigo de cara\na un combate, esta es la poción que\nestabas buscando!\n\nAunque su precio es un tanto elevado.\nCuesta <r<200 rupias>>. ¿Y bien?\n\n[1]¡Claro![2-]Uf, no")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Muy buenas!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x09\x908¡Gracias! ¡Muchas gracias! ¡Vuelve\ncuando quieras!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\n\xA06Qué le vamos a hacer... El cliente\nsiempre tiene la razón. Tan solo\nespero volver a verte por aquí\npronto, ¿de acuerdo?")
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
/*<  4>*/ 								printf("\x0E\x01\x09\x04\x00\x04¡Pues allá va, jovencito! Colócate\ndelante de la poción que te interese\ny pulsa (A).\n\nAsí te explicaré las características\nde la poción en cuestión. Pero debo\ndecir que mis productos son bastante\nsencillitos.\nSi lo que buscas es algo con más\npoderío...\n\n\n\x0E\x01\x09\x04\x0D\x700compra una de mis pociones y llévasela\na mi marido, que está aquí al lado.\n\n\n\x0E\x01\x09\x04\x0C\x00Aunque no lo parezca, es único\nelaborando pociones... ¡y también\ncambiando pañales! Eso sí,\nno lo saques de ahí...")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x0C\xB0E¡Oye, tampoco hace falta ser tan\nborde! Yo también ando muy liada.\nEl caso es que pareces buen chico,\nasí que te perdono la impertinencia.\n\x0E\x01\x09\x04\x0D\x00Si lo que buscas son pociones más\npotentes, ve a hablar con mi marido.\nÉl realiza mezclas para obtener\nproductos aún más beneficiosos.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf("\x0E\x01\x09\x04\x00\x01¡Jovencito, bienvenido!\n\n\n\nEn mi tienda de pociones puedes\nadquirir brebajes que te vendrán\nde perlas cuando te encuentres\nen apuros.\nFascinante, ¿a que sí? ¿Te sigo\ncontando?\n\n[1]¡Claro![2-]Paso")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf("\x0E\x01\x09\x04\x00\x01¡Ven aquí, que tengo novedades!\n¡La poción que estaba preparando\nya está terminada!\n\n¡La he llamado <y<resistone 500>>!\n\n\n\nAl beberte esta poción, el <b<indicador\nde resistencia >>se vaciará más despacio\ndurante un rato.\n\nDe ahí que sea un pelín cara, ¡pero\nte aseguro que merece la pena!\n\n\nSi te interesa, colócate delante de ella\ny habla conmigo como de costumbre.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x01Mira por dónde, tengo una novedad\nrecién salida de la botica de mi marido.\n¡Te va a venir de perlas, ya verás!\n\nMe refiero a nuestra nueva y exclusiva\n<y<poción de oxígeno>>.\n\n\n¡Es una cosa estupenda! Te explico: al\nbeberla, consigue que el <b<indicador de\noxígeno>> se vacíe más lentamente. ¡De lo\nmás útil si sales a bucear! ¿A que sí?\nY además está a un precio francamente\ninteresante. Yo que tú no la dejaba\nescapar, no te digo más...\n\nSi te interesa, colócate delante de ella\ny habla conmigo como de costumbre.")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x02¡Hola, jovencito!\n\n\n\n¡Estás en la tienda de pociones! ¡Y las\ntengo de todo tipo! ¡Incluso tengo unas\nque te ayudarán a recuperarte cuando\nte hieran en combate!\n\x0E\x01\x09\x04\x0D\x700Porque ahora que me fijo, tú eres uno\nde esos caballeros, ¿verdad? Aunque\npor lo que veo aún estás estudiando...\n\nPues te voy a decir una cosa: vas a\nnecesitar mis pociones sí o sí, ¡así\nque no se te ocurra marcharte sin\ncomprarme algo!")
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x0C\xB06Mmm\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\n\n\n\n¿Acaso no llevas encima ninguna\nbotella vacía, alma de cántaro?\n\n\nPues solo puedo venderte pociones si\ntienes botellas vacías. Si no, ya me\ndirás tú dónde las vas a echar...\n\n\x0E\x01\x09\x04\x09\x90BPero mira, como resulta que me has\ncaído de maravilla, voy a regalarte\nuna botella vacía... ¡aunque solo por\nesta vez, no vayas a acostumbrarte!\n\x0E\x01\x09\x04\x07\x700Aparte de pociones puedes meter otras\ncosas. Es un objeto de lo más apañado.\n¡Ya verás qué útil te resulta!")
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
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x0D\x70BLas botellas vacías se guardan en tu\nalforja de aventurero. Pulsa \x0E\x02\x04\x02\x28CD para\nver lo que tienes.\x0E\x01\x11\x02\xECD")
/*<114>*/ 					printf("Cuando la alforja esté llena y no\npuedas meter más cosas, siempre\nestá la posibilidad de recurrir a\nla consigna.\n\x0E\x01\x09\x04\x0C\x70BY bien... ¿Qué vas a comprar?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf("\x0E\x01\x09\x04\x0D\x70BLas botellas vacías se guardan en tu\nalforja de aventurero. Pulsa <g<\x0E\x02\x04\x02\x28CD >>para\nver lo que tienes.\x0E\x01\x11\x02\xECD\n\nMantén pulsado \x0E\x02\x04\x02\x28CD para señalar el objeto\nque quieras utilizar.\x0E\x01\x11\x02\xECD\n\n\nA continuación <g<suelta >>\x0E\x02\x04\x02\x28CD para elegir\nel objeto y sacarlo de la alforja.\x0E\x01\x11\x02\xECD")
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
/*<113>*/ 		printf("Esta poción no se puede mejorar más.\nHabla con mi mujer si quieres comprar\nalguna otra poción.")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<saltabosques>> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen abundar bastante en bosques\ny sitios así, con mucho verde...")
          	flw_137:
/*<137>*/ 	printf("\x0E\x01\x09\x04\x07\x00Ya lo siento... Si te parece, podemos\nprobar con otra poción, ¿qué me dices?")
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
/*<139>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<escaracornos de Farone>> pueden darle,\npero veo que no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen encontrarse por los árboles.\nYo buscaría en algún bosque o en sitios\ncon mucho verde...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x00\nHijo, esto es un poco embarazoso, pero\nes que no tienes suficientes rupias...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<abejas deku>> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen hacer sus colmenas en lo alto\nde los árboles, así que yo buscaría por\nzonas boscosas y con mucho verde...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x09\x04\x00\nAnda, pero si no tienes ninguna poción\npara mezclar.\n\n\n\x0E\x01\x09\x04\x09\x900Mi mujer vende pociones aquí al lado,\nigual te interesa hablar con ella...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<mantis entrenubosas>> pueden darle,\npero veo que no tienes bastantes...\nTampoco te rompas la cabeza, es un\nbicho bastante común aquí en Altárea.")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf("\x0E\x01\x09\x04\n\xA08No tienes ninguna <y<botella vacía>>...\nVuelve cuando hayas conseguido\nuna, ¿de acuerdo?")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<magmariquitas>> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nhabitan principalmente en la región de\nla montaña de fuego. Aunque vete a\nsaber dónde estará eso...")
          	flw_151:
/*<151>*/ 	printf("\x0E\x01\x09\x04\x07\x00Ya lo siento... Si te parece, podemos\nprobar con otra poción, ¿qué me dices?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x0C\xB08¡Leñe! ¡Estás pelado! ¡Eres encantador,\npero yo me gano la vida con esto y no\nestoy para hacer de madre de nadie!\n\n\x0E\x01\x09\x04\n\xA00Vuelve por aquí cuando hayas ahorrado\nun poco, anda.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<sacraliposas>> pueden darle, pero veo\nque no tienes bastantes...\nTranquilo, aquí en Altárea las puedes\nencontrar a montones, no tiene mayor\nmisterio...")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x09\x90AMuchísimas gracias. Si quieres una\npoción más potente, habla con mi\nmarido, aquí al lado. Seguro que él\npuede ayudarte.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<hormigas de Lanayru>> pueden darle,\npero veo que no tienes bastantes...\nSegún pone en el grimorio, esos bichos\ntienen su hábitat en zonas arenosas...\nDe hecho, incluso creo que menciona\nun desierto o algo así.")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf("\x0E\x01\x09\x04\n\xA0E¡Grrr! ¡Esto no es un museo, aquí\nse viene a comprar!")
          	  case 1:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x0C\xB10¿Que no te interesa? ¡Ya sé que mis\npociones saben un poco raras, pero\nnadie puede negar que son la mar\nde eficaces!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<cigarduneras>> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen provenir de zonas arenosas...\nDe hecho, incluso creo que menciona\nun desierto o algo así.")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<gerúdulas>> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nse encuentran sobre todo en las zonas\ncon hierba de la región de las arenas...\ndonde quiera que esté eso.")
          	flw_165:
/*<165>*/ 	printf("\x0E\x01\x09\x04\x07\x00Ya lo siento... Si te parece, podemos\nprobar con otra poción, ¿qué me dices?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<eldinabajos peloteros>> pueden darle,\npero veo que no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nhabitan principalmente en la región de\nla montaña de fuego. Aunque no tengo\nni idea de dónde estará eso...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo los \n<y<celestarabajos>> pueden darle, pero veo\nque no tienes bastantes...\nTampoco hace falta que te rompas\nla cabeza, ese bicho es de lo más común\naquí en Altárea... A poco que busques,\nlos encuentras a patadas.")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\nAh... vaya, para completar la poción\nme hace falta el toque que solo las \n<y<cielérnagas>> pueden darle, pero veo\nque no tienes bastantes...\nSon bichos bastante especiales, dicen\nque solo se dejan ver por las noches...\ny únicamente aquí, en Altárea.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Eso es una <y<poción de salud>>! ¡Si te la\nbebes recuperarás 8 corazones!\n\n\n¿Qué, te llevas una para el camino?\n¡Son solo <r+<20 rupias>>!\n\n[1]¡Venga![2-]Mejor no")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Muy buenas!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
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
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x00\x04¡Eso es una <y<poción de oxígeno>>! Al\nbebértela, tu <b<indicador de oxígeno>>\nbajo el agua se vacía más despacio\ndurante un rato.\n¿Te interesa? Solo cuesta <r+<20 rupias>>.\n\n[1]¡Vale![2-]Uf, no")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x0C\xB04Esa poción no la tenemos a la venta,\naún está en fase experimental... pero\nsolo le falta un toquecillo de nada, muy\npronto estará lista para el público.\n\x0E\x01\x09\x04\x09\x700De todos modos, ¡será por pociones!... \nTengo brebajes para dar y tomar, ¡echa\nun vistazo al muestrario y seguro que\nves justo lo que estabas buscando!")
          		}
          	  case 1:
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Muy buenas!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
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
/*< 25>*/ 			printf("\x0E\x01\x09\x04\x00\x0BEsa poción es una maravilla, se llama\n<y<resistone 500>>.\n\n\nAl bebértela, tu <b<indicador de\nresistencia >>se vaciará más despacio\ndurante un rato.\n\nPor eso es un poco carilla, pero te\naseguro que es una excelente compra.\nEs tuya por <r<50 rupias>>.\n[1]¡Vale![2-]Otro día")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x0C\xB04Esta es una poción buenísima para\nque tu <b<indicador de resistencia>>\nno se vacíe.\n\nEl problema es que no la he acabado\ntodavía, así que vas a tener que esperar\nhasta que la tenga lista.\n\n\x0E\x01\x09\x04\x09\x700Pero puedes echar un vistazo a\nmis otras pociones, por supuesto.")
          		}
          	  case 1:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x09\x702¡Muy buenas!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n\x0E\x01\x09\x04\x0D\x700¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
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
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ho... hola... Bienvenido a la tienda\nde pociones que vende curas para\ntodas las ocasiones.\n\nTe puedo ayudar a mejorar los\nproductos que hayas adquirido\naquí al lado.\n\n\x0E\x01\x09\x04\x07\x700Veamos... ¿Tienes alguna poción\nque quieras que mezcle?\n\n[1]Sí[2-]No")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf("\x0E\x01\x09\x04\x00\x03Mmm... sí... creo que podré ayudarte...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf("\x0E\x01\x09\x04\x00\nAnda, pero si no tienes ninguna poción\npara mezclar.\n\n\n\x0E\x01\x09\x04\x09\x900Mi mujer vende pociones aquí al lado,\nigual te interesa hablar con ella...")
          					}
          				  case 1:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\n\xA06De acuerdo, no hay problema. Hasta\nla próxima entonces.")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf("\x0E\x01\x09\x04\x00\x01Si todavía no tienes ningún\n<y<cazamariposas>>, será mejor\nque compres uno en la <r<tienda\nde Terry>>.\nSeguramente estará revoloteando\npor las cercanías del bazar.\n\n\nSi utilizas tu <g<vista subjetiva >>para\nobservar atentamente el cielo, seguro\nque la ves, sí...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ho... hola... Bienvenido a la tienda\nde pociones que vende curas para todas\nlas ocasiones.\n\nTe puedo ayudar a mejorar los\nproductos que hayas adquirido\naquí al lado.\n\n\x0E\x01\x09\x04\x00\x07Pero claro... para mejorarlos\nnecesitaré insectos... sí, eso es,\ninsectos...\n\nSi todavía no tienes <y<cazamariposas>>,\nserá mejor que compres uno en la\n<r<tienda de Terry>>.\n\n\x0E\x01\x09\x04\x07\x708Seguramente andará revoloteando por\nlas cercanías del bazar.\n\n\nSi utilizas tu <g<vista subjetiva >>para\nobservar atentamente el cielo, seguro\nque la ves, sí...")
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
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ho... hola... Bienvenido a la tienda de\npociones que vende curas para todas\nlas ocasiones... ¿Cómo...? ¿Que tienes\nuna cosa que quieres enseñarme?\nVerás, es que ahora mismo me viene un\npoco mal, tengo mucha faena... Si no te\nimporta, pásate <r<una noche>> por mi casa\ny me cuentas lo que quieras, ¿vale?")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bi... bienvenido...\n\x0E\x01\x06\x02\xFBCDA...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\n\xA06 aoooh...\n\n\n\x0E\x01\x09\x04ÿ\xFF00¡Ay! Lo siento, mil perdones... No está\nnada bien eso de bostezar delante de\nlos clientes... Pero hazte cargo, llevo\nno sé cuántas <r<noches>> sin dormir.\nÚltimamente no consigo pegar ojo ni\nqueriendo... \n\n\n¡Ups! Lo... lo siento, discúlpame... No\npretendía aburrirte con mis penas...\nA ver, dime, ¿qué se te ofrece?\n")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

