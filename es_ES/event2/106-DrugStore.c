          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>¡Esto es un mejunje de lo más\nmisterioso llamado <color yellow<reparol 100>coloroff>!\n\n\n¡Si lo aplicas sobre un escudo roto,\nquedará como nuevo! ¡Es una cosa\nimpresionante!\n\n¡Y, por si fuera poco, te devuelve\n<color red<cuatro corazones>coloroff>! No me digas que\nno te vendría bien para tu aventura.\nAdemás, solo cuesta <color red<30 rupias>coloroff>...\n[1-]Venga...[2]Mmm, no")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>¡Muy buenas!\n\n\n\n<0x10009:0x000c0b00>Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n<0x10009:0x000d0700>¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070704>Por supuesto, claro que puedo mejorar\nesta poción. ¿Y bien? ¿Me pongo\nmanos a la obra?\n\n[1-]¡Sí![2]Espera...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00070700>A ver, a ver... Un segundito y...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00070708>¡Listo! ¡Aquí tienes!")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000a0a06>De acuerdo... ¿Alguna otra cosa que\npueda hacer por ti?")
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
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0000000b>Esto es <color yellow<invencibline 500>coloroff>. Es una poción\nque reduce el daño recibido durante\nun breve espacio de tiempo.\n\n¡Si no las tienes todas contigo de cara\na un combate, esta es la poción que\nestabas buscando!\n\nAunque su precio es un tanto elevado.\nCuesta <color red<200 rupias>coloroff>. ¿Y bien?\n\n[1-]¡Claro![2]Uf, no")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>¡Muy buenas!\n\n\n\n<0x10009:0x000c0b00>Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n<0x10009:0x000d0700>¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090908>¡Gracias! ¡Muchas gracias! ¡Vuelve\ncuando quieras!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000a0a06>Qué le vamos a hacer... El cliente\nsiempre tiene la razón. Tan solo\nespero volver a verte por aquí\npronto, ¿de acuerdo?")
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
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000b>¿Mmm? ¿Querías algo?\n\n[1-]¡Quiero saber![2]No, nada")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000004>¡Pues allá va, jovencito! Colócate\ndelante de la poción que te interese\ny pulsa (A).\n\nAsí te explicaré las características\nde la poción en cuestión. Pero debo\ndecir que mis productos son bastante\nsencillitos.\nSi lo que buscas es algo con más\npoderío...\n\n\n<0x10009:0x000d0700>compra una de mis pociones y llévasela\na mi marido, que está aquí al lado.\n\n\n<0x10009:0x000c0000>Aunque no lo parezca, es único\nelaborando pociones... ¡y también\ncambiando pañales! Eso sí,\nno lo saques de ahí...")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000c0b0e>¡Oye, tampoco hace falta ser tan\nborde! Yo también ando muy liada.\nEl caso es que pareces buen chico,\nasí que te perdono la impertinencia.\n<0x10009:0x000d0000>Si lo que buscas son pociones más\npotentes, ve a hablar con mi marido.\nÉl realiza mezclas para obtener\nproductos aún más beneficiosos.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>¡Jovencito, bienvenido!\n\n\n\nEn mi tienda de pociones puedes\nadquirir brebajes que te vendrán\nde perlas cuando te encuentres\nen apuros.\nFascinante, ¿a que sí? ¿Te sigo\ncontando?\n\n[1-]¡Claro![2]Paso")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>¡Ven aquí, que tengo novedades!\n¡La poción que estaba preparando\nya está terminada!\n\n¡La he llamado <color yellow<resistone 500>coloroff>!\n\n\n\nAl beberte esta poción, el <color blue<indicador\nde resistencia >coloroff>se vaciará más despacio\ndurante un rato.\n\nDe ahí que sea un pelín cara, ¡pero\nte aseguro que merece la pena!\n\n\nSi te interesa, colócate delante de ella\ny habla conmigo como de costumbre.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Mira por dónde, tengo una novedad\nrecién salida de la botica de mi marido.\n¡Te va a venir de perlas, ya verás!\n\nMe refiero a nuestra nueva y exclusiva\n<color yellow<poción de oxígeno>coloroff>.\n\n\n¡Es una cosa estupenda! Te explico: al\nbeberla, consigue que el <color blue<indicador de\noxígeno>coloroff> se vacíe más lentamente. ¡De lo\nmás útil si sales a bucear! ¿A que sí?\nY además está a un precio francamente\ninteresante. Yo que tú no la dejaba\nescapar, no te digo más...\n\nSi te interesa, colócate delante de ella\ny habla conmigo como de costumbre.")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>¡Hola, jovencito!\n\n\n\n¡Estás en la tienda de pociones! ¡Y las\ntengo de todo tipo! ¡Incluso tengo unas\nque te ayudarán a recuperarte cuando\nte hieran en combate!\n<0x10009:0x000d0700>Porque ahora que me fijo, tú eres uno\nde esos caballeros, ¿verdad? Aunque\npor lo que veo aún estás estudiando...\n\nPues te voy a decir una cosa: vas a\nnecesitar mis pociones sí o sí, ¡así\nque no se te ocurra marcharte sin\ncomprarme algo!")
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000c0b06>Mmm<0x10006:0xfccd>...<0x10006:0x00cd>\n\n\n\n¿Acaso no llevas encima ninguna\nbotella vacía, alma de cántaro?\n\n\nPues solo puedo venderte pociones si\ntienes botellas vacías. Si no, ya me\ndirás tú dónde las vas a echar...\n\n<0x10009:0x0009090b>Pero mira, como resulta que me has\ncaído de maravilla, voy a regalarte\nuna botella vacía... ¡aunque solo por\nesta vez, no vayas a acostumbrarte!\n<0x10009:0x00070700>Aparte de pociones puedes meter otras\ncosas. Es un objeto de lo más apañado.\n¡Ya verás qué útil te resulta!")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0b08>Ay, pobre. Tienes la alforja llena.\n¡Eso es que te gusta gastar!\n\n\n<0x10009:0x000a0a00>¿Por qué no guardas unas cuantas cosas\nen la consigna? ¡Así irás mucho más\nligero!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000d070b>Las botellas vacías se guardan en tu\nalforja de aventurero. Pulsa (-) para\nver lo que tienes.<0x10011:0x02cd>")
/*<114>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Cuando la alforja esté llena y no\npuedas meter más cosas, siempre\nestá la posibilidad de recurrir a\nla consigna.\n<0x10009:0x000c070b>Y bien... ¿Qué vas a comprar?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000d070b>Las botellas vacías se guardan en tu\nalforja de aventurero. Pulsa <color green<(-) >coloroff>para\nver lo que tienes.<0x10011:0x02cd>\n\nMantén pulsado (-) y <color green<mueve en círculos\n>coloroff>el mando para señalar el objeto que\nquieras utilizar.<0x10011:0x02cd>\n\nA continuación <color green<suelta >coloroff>(-) para elegir\nel objeto y sacarlo de la alforja.<0x10011:0x02cd>")
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Cuando la alforja esté llena y no\npuedas meter más cosas, siempre\nestá la posibilidad de recurrir a\nla consigna.\n<0x10009:0x000c070b>Y bien... ¿Qué vas a comprar?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "¡Si tienes alguna otra poción y quieres\nque la mezcle, solo tienes que\ntraérmela!")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "Esta poción no se puede mejorar más.\nHabla con mi mujer si quieres comprar\nalguna otra poción.")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo los \n<color yellow<saltabosques>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen abundar bastante en bosques\ny sitios así, con mucho verde...")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Ya lo siento... Si te parece, podemos\nprobar con otra poción, ¿qué me dices?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>No tienes los ingredientes necesarios\npara elaborar esta poción...\n\n\nLo siento... Elige otra, ¿de acuerdo?")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo los \n<color yellow<escaracornos de Farone>coloroff> pueden darle,\npero veo que no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen encontrarse por los árboles.\nYo buscaría en algún bosque o en sitios\ncon mucho verde...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Hijo, esto es un poco embarazoso, pero\nes que no tienes suficientes rupias...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<abejas deku>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen hacer sus colmenas en lo alto\nde los árboles, así que yo buscaría por\nzonas boscosas y con mucho verde...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Anda, pero si no tienes ninguna poción\npara mezclar.\n\n\n<0x10009:0x00090900>Mi mujer vende pociones aquí al lado,\nigual te interesa hablar con ella...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<mantis entrenubosas>coloroff> pueden darle,\npero veo que no tienes bastantes...\nTampoco te rompas la cabeza, es un\nbicho bastante común aquí en Altárea.")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000a0a08>No tienes ninguna <color yellow<botella vacía>coloroff>...\nVuelve cuando hayas conseguido\nuna, ¿de acuerdo?")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<magmariquitas>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nhabitan principalmente en la región de\nla montaña de fuego. Aunque vete a\nsaber dónde estará eso...")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Ya lo siento... Si te parece, podemos\nprobar con otra poción, ¿qué me dices?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000c0b08>¡Leñe! ¡Estás pelado! ¡Eres encantador,\npero yo me gano la vida con esto y no\nestoy para hacer de madre de nadie!\n\n<0x10009:0x000a0a00>Vuelve por aquí cuando hayas ahorrado\nun poco, anda.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<sacraliposas>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nTranquilo, aquí en Altárea las puedes\nencontrar a montones, no tiene mayor\nmisterio...")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0009090a>Muchísimas gracias. Si quieres una\npoción más potente, habla con mi\nmarido, aquí al lado. Seguro que él\npuede ayudarte.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<hormigas de Lanayru>coloroff> pueden darle,\npero veo que no tienes bastantes...\nSegún pone en el grimorio, esos bichos\ntienen su hábitat en zonas arenosas...\nDe hecho, incluso creo que menciona\nun desierto o algo así.")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000a0a0e>¡Grrr! ¡Esto no es un museo, aquí\nse viene a comprar!")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000c0b10>¿Que no te interesa? ¡Ya sé que mis\npociones saben un poco raras, pero\nnadie puede negar que son la mar\nde eficaces!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<cigarduneras>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nsuelen provenir de zonas arenosas...\nDe hecho, incluso creo que menciona\nun desierto o algo así.")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<gerúdulas>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nse encuentran sobre todo en las zonas\ncon hierba de la región de las arenas...\ndonde quiera que esté eso.")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Ya lo siento... Si te parece, podemos\nprobar con otra poción, ¿qué me dices?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo los \n<color yellow<eldinabajos peloteros>coloroff> pueden darle,\npero veo que no tienes bastantes...\nSegún pone en el grimorio, esos bichos\nhabitan principalmente en la región de\nla montaña de fuego. Aunque no tengo\nni idea de dónde estará eso...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo los \n<color yellow<celestarabajos>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nTampoco hace falta que te rompas\nla cabeza, ese bicho es de lo más común\naquí en Altárea... A poco que busques,\nlos encuentras a patadas.")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000a>Ah... vaya, para completar la poción\nme hace falta el toque que solo las \n<color yellow<cielérnagas>coloroff> pueden darle, pero veo\nque no tienes bastantes...\nSon bichos bastante especiales, dicen\nque solo se dejan ver por las noches...\ny únicamente aquí, en Altárea.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001>¡Eso es una <color yellow<poción de salud>coloroff>! ¡Si te la\nbebes recuperarás 8 corazones!\n\n\n¿Qué, te llevas una para el camino?\n¡Son solo <color red rupee<20 rupias>coloroff>!\n\n[1-]¡Venga![2]Mejor no")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>¡Muy buenas!\n\n\n\n<0x10009:0x000c0b00>Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n<0x10009:0x000d0700>¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
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
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004>¡Eso es una <color yellow<poción de oxígeno>coloroff>! Al\nbebértela, tu <color blue<indicador de oxígeno>coloroff>\nbajo el agua se vacía más despacio\ndurante un rato.\n¿Te interesa? Solo cuesta <color red rupee<20 rupias>coloroff>.\n\n[1-]¡Vale![2]Uf, no")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000c0b04>Esa poción no la tenemos a la venta,\naún está en fase experimental... pero\nsolo le falta un toquecillo de nada, muy\npronto estará lista para el público.\n<0x10009:0x00090700>De todos modos, ¡será por pociones!... \nTengo brebajes para dar y tomar, ¡echa\nun vistazo al muestrario y seguro que\nves justo lo que estabas buscando!")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>¡Muy buenas!\n\n\n\n<0x10009:0x000c0b00>Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n<0x10009:0x000d0700>¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
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
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0000000b>Esa poción es una maravilla, se llama\n<color yellow<resistone 500>coloroff>.\n\n\nAl bebértela, tu <color blue<indicador de\nresistencia >coloroff>se vaciará más despacio\ndurante un rato.\n\nPor eso es un poco carilla, pero te\naseguro que es una excelente compra.\nEs tuya por <color red<50 rupias>coloroff>.\n[1-]¡Vale![2]Otro día")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000c0b04>Esta es una poción buenísima para\nque tu <color blue<indicador de resistencia>coloroff>\nno se vacíe.\n\nEl problema es que no la he acabado\ntodavía, así que vas a tener que esperar\nhasta que la tenga lista.\n\n<0x10009:0x00090700>Pero puedes echar un vistazo a\nmis otras pociones, por supuesto.")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>¡Muy buenas!\n\n\n\n<0x10009:0x000c0b00>Ay, lo siento. Me parece que no tienes\nuna botella vacía. Así no puedo\nvenderte nada.\n\n<0x10009:0x000d0700>¡Si quieres saber cómo funcionan\nlas cosas por aquí, habla conmigo!")
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
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000001>Ho... hola... Bienvenido a la tienda\nde pociones que vende curas para\ntodas las ocasiones.\n\nTe puedo ayudar a mejorar los\nproductos que hayas adquirido\naquí al lado.\n\n<0x10009:0x00070700>Veamos... ¿Tienes alguna poción\nque quieras que mezcle?\n\n[1-]Sí[2]No")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Mmm... sí... creo que podré ayudarte...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Anda, pero si no tienes ninguna poción\npara mezclar.\n\n\n<0x10009:0x00090900>Mi mujer vende pociones aquí al lado,\nigual te interesa hablar con ella...")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000a0a06>De acuerdo, no hay problema. Hasta\nla próxima entonces.")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Si todavía no tienes ningún\n<color yellow<cazamariposas>coloroff>, será mejor\nque compres uno en la <color red<tienda\nde Terry>coloroff>.\nSeguramente estará revoloteando\npor las cercanías del bazar.\n\n\nSi utilizas tu <color green<vista subjetiva >coloroff>para\nobservar atentamente el cielo, seguro\nque la ves, sí...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000001>Ho... hola... Bienvenido a la tienda\nde pociones que vende curas para todas\nlas ocasiones.\n\nTe puedo ayudar a mejorar los\nproductos que hayas adquirido\naquí al lado.\n\n<0x10009:0x00000007>Pero claro... para mejorarlos\nnecesitaré insectos... sí, eso es,\ninsectos...\n\nSi todavía no tienes <color yellow<cazamariposas>coloroff>,\nserá mejor que compres uno en la\n<color red<tienda de Terry>coloroff>.\n\n<0x10009:0x00070708>Seguramente andará revoloteando por\nlas cercanías del bazar.\n\n\nSi utilizas tu <color green<vista subjetiva >coloroff>para\nobservar atentamente el cielo, seguro\nque la ves, sí...")
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
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000001>Ho... hola... Bienvenido a la tienda de\npociones que vende curas para todas\nlas ocasiones... ¿Cómo...? ¿Que tienes\nuna cosa que quieres enseñarme?\nVerás, es que ahora mismo me viene un\npoco mal, tengo mucha faena... Si no te\nimporta, pásate <color red<una noche>coloroff> por mi casa\ny me cuentas lo que quieras, ¿vale?")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000001>Bi... bienvenido...\n<0x10006:0xfbcd>A...<0x10006:0x00cd><0x10009:0x000a0a06> aoooh...\n\n\n<0x10009:0x00ffff00>¡Ay! Lo siento, mil perdones... No está\nnada bien eso de bostezar delante de\nlos clientes... Pero hazte cargo, llevo\nno sé cuántas <color red<noches>coloroff> sin dormir.\nÚltimamente no consigo pegar ojo ni\nqueriendo... \n\n\n¡Ups! Lo... lo siento, discúlpame... No\npretendía aburrirte con mis penas...\nA ver, dime, ¿qué se te ofrece?\n")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

