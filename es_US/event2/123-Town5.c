          void entrypoint_123_06() {
/*< 54>*/ 	start()
/*< 47>*/ 	switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          	  case 0:
/*< 48>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<266>*/ 			switch (story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 77>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 82>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 83>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 84>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 87>*/ 										printf("\x0E\x01\x09\x04\x00\x07¡Hola, guapetón!\n¡Aquí estoy para guardarte lo que tú\nquieras!\n[1]Por favor[2-]No, gracias")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf("\x0E\x01\x09\x04\x00\x08¡Hola, guapetón! ¡Bienvenido!\n\n\n\n¡Aquí estoy, dispuesta a guardarte\nlo que tú quieras!\n\n[1]Por favor[2-]No, gracias")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf("\x0E\x01\x09\x04\x00\x0EHola, Link. Dime...\n¿Quieres dejar algo en la consigna de\nuna chica que ha superado un amargo\ndesengaño y está cada día más bonita?\n[1]Este... sí[2-]No, gracias")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x05Ah, hola, Link.\n\n\n\nPerdona por lo de la otra noche, me\ncomporté como una tonta...\n\n\nAunque ya lo he superado, no te\npreocupes. He tenido que pensarlo\nbastante, pero ya estoy mejor.\n¡Fin de la historia!\nAdemás... las chicas nos ponemos\nmás bonitas cuando nos rompen\nel corazón, ¿no lo sabías?\n\nA partir de ahora me pienso volver\ncada día más hermosa. Voy a ser\nun auténtico bombón, ya lo verás.\n\nTen cuidado, no vayas a lamentar\nluego la decisión que has tomado...\n\n\nBueno, todo aclarado, ya está.\nA ver, ¿por dónde íbamos?...\nAh, sí. ¿Quieres que te guarde algo?\n[1]Por favor[2-]No, gracias")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x05¡Hola, guapetón!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Mmm... Eh... Verás...\n¿<r<Por qué no vienes esta noche\na mi casa>>? Tengo que hablar\ncontigo de algo importante.\n\x0E\x01\x09\x04\x08\xA00Vivo justo al lado del bazar, no tiene\npérdida. Vas a venir, ¿verdad que sí?\n¡Allí te espero!")
          								flw_79:
/*< 79>*/ 								printf("Bueno, ahora dime...\n¿Quieres dejar aquí algún objeto?\n\n[1]Por favor[2-]No, gracias")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x00\x05¡Hola, guapetón!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Mmm... Eh... Verás...\n¿<r<Por qué no vienes esta noche\na mi casa>>? Tengo que hablar\ncontigo de algo importante.\n\x0E\x01\x09\x04\x08\xA00Vivo justo al lado del bazar, no tiene\npérdida. Vas a venir, ¿verdad que sí?\n¡Allí te espero!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf("\x0E\x01\x09\x04\x00\x07¡Hola, <r<guapetón>>!\n¡Te estaba esperando, ji, ji, ji!\n¿Qué me traes hoy?\n\nDime, ¿quieres que te guarde algo?\n[1]Por favor[2-]No, gracias")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x08¡Oh!...")
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x08\xA00¡Has... has venido a verme! No sabes\ncuánto significa para mí...\n\n[1]Ejem...[2]¡Cómo no!")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0A¡No me mires así que me voy a\nsonrojar, <r<guapetón>>!")
          					flw_66:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x12\xA00Últimamente no dejo de pensar en ti...\n¡Ando todo el día como embobada!\n¡El corazón me late tan rápido que\nno puedo ni respirar!\n¿Crees que...? ¿Dirías que esto es...?\n\n[1]Una gripe,\nseguro[2]Amor")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x0F\x120EVeo que hoy tienes ganas de gastar\nbromas, ¿no? Ya está bien, guapetón.")
          						flw_70:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x12\xA00¡Uy, que se me va la cabeza!...\nVamos, vamos, ¡a trabajar!\n\n\n\x0E\x01\x09\x04\x0E\x1000A ver... ¿Qué te iba a decir?\nYa, sí... Iba a preguntarte si querías\nentregarme algo tuyo y solo tuyo.\n[1]Claro[2-]Mmm...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf("\x0E\x01\x09\x04\x0E\x100F¿De verdad?\n¡Qué alegría me acabas de dar!...")
          							flw_72:
/*< 72>*/ 							printf("\x0E\x01\x09\x04\x0D\xF0A¡Ay! ¡Lo siento! ¡No debería haberte\ncontado cosas tan personales!...\n\n\n\x0E\x01\x09\x04\x08\xA00¡Tengo que aprender a cerrar la boca!\nLo que quería decir es... nada, que si\nquieres que te guarde algo, <r<guapetón>>.\n[1]Por favor[2-]No, gracias")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x0F\xF0D¡Ay! ¡Lo has dicho! ¡La palabra mágica!\nPero no lo digas tan alto...\n¡Que me da mucha vergüenza!...")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0AMe haces tan feliz...\n¡que mi corazón va a explotar!")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf("\x0E\x01\x09\x04\x00\x05Hola, me alegro de verte otra vez\npor aquí. Ya sabes que guardamos\na buen recaudo todo tipo de cosas.\n\nDime, ¿quieres dejar aquí un objeto\nde tu alforja?\n[1]Por favor[2-]No, gracias")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf("Hola.\nBienvenido a la consigna...\x0E\x01\x09\x04\x00\x05\n¡Oh!...")
/*<279>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 57, 'param3': 6}
/*< 57>*/ 				printf("Este... eh...\nBien... bienvenido...\n\n[1]¿Qué te\npasa?[2]Te veo\ndistinta")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\n\xF18Mmm... No... No pasa nada.")
          					flw_76:
/*< 76>*/ 					printf("No... no te equivoques, no tiene nada\nque ver con que me alegre de verte\nni nada parecido...\n\nPero, si te paras a pensarlo, nos vemos\ncasi a diario... Es evidente que nuestra\nrelación no es solo de dependienta\ny cliente...\n\x0E\x01\x09\x04\x10\x1405Ay, no, bueno... No... no quería...\nNo me hagas caso, ¡qué cosas digo!\n\n\nDisculpa... Olvida todo lo que acabo\nde decir, por favor, ¿de acuerdo?\n\n\n\x0E\x01\x09\x04\x07\x800Bu... bueno, a ver si me centro un poco,\nque se supone que estoy trabajando.\n¿Querías guardar o sacar algo?\n[1]Por favor[2-]No, gracias")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\n\xF18¿Eh? No... No, claro que no...\nSerán imaginaciones tuyas...")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bienvenido a la consigna...\nVaya, otra vez por aquí...\nVoy a empezar a pensar mal, chico.\n\nBien, ¿qué se te ofrece?...\n¿Quieres dejar algo aquí?\n¿O recoger algo?\n[1]Por favor[2-]No, gracias")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hola, bienvenido a la consigna.\nAh, eres tú otra vez...\n\n\nVienes mucho por aquí, ¿no?\n¡Últimamente eres mi mejor cliente!\n\n\n\x0E\x01\x09\x04\x00\x04Oye, espera un momento...\n\n\n\nNo... ¿no estarás...?\n\n\n\nNo me digas que vienes solo para verme\na mí, ¿verdad?\n[1]Claro\nque no[2]Pues... sí")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ah... Bueno...\n\n\n\nQué... qué tontería, ¿verdad?\nNo sé ni por qué lo he dicho...\n¡Ahora pensarás que soy una\npresumida!\n\x0E\x01\x09\x04\n\xC00No creas que me importa que no vengas\na verme a mí, claro que no...")
          				flw_53:
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x07\x800Bueno, voy a centrarme un poco,\nque hay tarea por hacer...\nDime, ¿querías guardar o sacar algo?\n[1]Por favor[2-]No, gracias")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x02¡¿Eh?! ¡¿En serio?!\n\n\n\n¡Bah! ¡No te creas que me puedes\nengañar con piropos baratos!...\n\n\n\x0E\x01\x09\x04\n\xC00Aunque... quizá sí, no sé...\nA una también le gusta que le digan\ncosas bonitas de vez en cuando... \n")
          				goto flw_53
          			}
          		}
          	}
          }

          void entrypoint_123_07() {
/*< 93>*/ 	start()
/*< 92>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 94>*/ 		switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          		  case 0:
/*< 95>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 96>*/ 				switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          				  case 0:
/*< 97>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
/*<105>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<106>*/ 								printf("\x0E\x01\x09\x04\x00\x09Me hace muy feliz que al final hayas\nlogrado ser sincero conmigo, en serio. \n¡Nos vemos luego en la consigna,\nguapetón!")
          							  case 1:
/*<109>*/ 								printf("\x0E\x01\x09\x04\x00\x0D¡Amor! ¡Te dije que teníamos que\nmantener nuestra relación en\nsecreto! ¡No vengas tanto por aquí,\nque al final mi papá se va a enterar!\nA ver, ¿qué quieres a estas horas?\n\n[1]Hablar\nun poco[2]Nada en\nespecial[3]Dejar\ncosas")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf("\x0E\x01\x09\x04\x08\x08Sí, yo también tengo un montón\nde cosas que quiero decirte, pero mi\npapá no nos quita el ojo de encima...\n¡Ya hablaremos en otro momento!")
          								  case 1:
/*<112>*/ 									printf("\x0E\x01\x09\x04\x08\xA00¡No hace falta que finjas! Conmigo\nno tienes por qué aparentar nada...\n¡Me gustas igualmente!")
          								  case 2:
/*<113>*/ 									printf("Pero para esas cosas tienes\nque venir a verme a la consigna,\ncuando sea de día... \n\n\x0E\x01\x09\x04\x0E\x1000¿O me estás tratando de decir\nque eso es lo que soy yo para ti?\n¿La chica de la consigna?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf("\x0E\x01\x09\x04\x00\x14Soy fuerte, pronto te habré olvidado.\nY ahora vete, déjame sola.\n")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf("\x0E\x01\x09\x04\x00\x13No sé por qué será, pero últimamente\nmi papá está de muy buen humor...\n\n\n¿No se da cuenta de que su hija está\nsufriendo porque le han partido\nel corazón? Qué padre...")
          									  case 1:
/*<116>*/ 										printf("\x0E\x01\x09\x04\x00\x14Ya sé que lo tengo superado, pero...\nA veces, por las noches, la tristeza\nme ahoga. Supongo que un corazón\nroto tarda su tiempo en curarse.")
          									}
          								  case 1:
/*<114>*/ 									printf("\x0E\x01\x09\x04\x00\x0EAy, Link...\nQuién me iba a decir que duele\ntanto que te rompan el corazón...\x0E\x01\x09\x04\x00\x14")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 226, 'param3': 6}
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf("\x0E\x01\x09\x04\x00\x05Link...\nHas venido a verme... Gracias.\n\n\n\x0E\x01\x09\x04\x0E\xF00La verdad es que hay una cosa\nque me muero por preguntarte.\n\n\nTú eres una persona de mente abierta,\n¿verdad? Creo que puedo ser sincera\ncontigo. Verás, te lo diré sin rodeos...")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf("¿Qué significo yo para ti?\n\n[1]Me gustas[2]Guardas\nmis cosas")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf("\x0E\x01\x09\x04\x0E\x100F¿En serio? ¡¿De verdad?!\n¡¿No me estarás mintiendo?!\n\n[1]En serio[2]Era broma")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf("\x0E\x01\x09\x04\x08\xA08¡Ay, qué feliz me haces!\nPero me sigue pareciendo un sueño...\n¡Dímelo otra vez para que me lo crea!\n\n\x0E\x01\x09\x04\x0E\x1000¿De verdad, de verdad, de verdad\nque te gusto? ¿En serio?\n\n[1]Claro[2]La verdad\nes que no")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf("\x0E\x01\x09\x04\x0D\xF0ANo me estarás mintiendo, ¿verdad?\n¡No sé de qué locura sería capaz\nsi descubro que me mientes!\n[1]No te\nmiento[2]Era broma")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf("\x0E\x01\x09\x04\x08\xA09¡Ay, qué alegría más grande!...\n¡Me gustas mucho, guapetón mío!\n¡Perdona por haber desconfiado de ti!")
/*<318>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 317, 'param3': 6}
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 320, 'param3': 6}
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 314, 'param3': 6}
/*<314>*/ 										printf("\x0E\x01\x09\x04\x00\x13No te preocupes, lo entiendo. No pasa\nnada, en serio.\n\n\nTienes cosas mucho más importantes\nen las que pensar ahora mismo, lo sé.\n\n\n\x0E\x01\x09\x04\x0E\x1000Tienes por delante una complicada\nmisión, ¿verdad que sí?\n\n\n\x0E\x01\x09\x04\x0D\xF00Lo sé porque vienes mucho a mi tienda\na dejar cosas, y suelen ser siempre\nobjetos de batalla.\n\nPor eso, a partir de ahora no pienso\nvolver a molestarte. Descuida. Seré\nla dependienta de la consigna y\ncuidaré de tus cosas, nada más.\n\x0E\x01\x09\x04\x0E\x1000Y cuando hayas acabado con lo que\nestás haciendo, iremos los dos\na hablar con mi papá.\n\n\x0E\x01\x09\x04\x0B\xD00¡Hasta entonces, mantendremos\nlo nuestro en secreto! ¡Ya nos\nveremos por la consigna, ji, ji, ji!")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf("\x0E\x01\x09\x04\x0F\x1214Entiendo...\nSi eso es lo que piensas...\n\n\nSiento haberte hecho perder el tiempo\ncon todo esto.")
/*<329>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 328, 'param3': 6}
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 332, 'param3': 6}
/*<332>*/ 										printf("\x0E\x01\x09\x04\x00\x13No, por favor...\nNo necesito tu compasión.\n\n\nEstoy bien. Soy más fuerte de lo que\ncrees. No tardaré mucho en olvidarte\ny superar todo esto...\n\n\x0E\x01\x09\x04\x14\xD00La próxima vez que nos veamos,\nte recibiré como a cualquier otro\ncliente...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 6}
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 327, 'param3': 6}
/*<327>*/ 										printf("Pero esta noche quiero estar sola.\n\n\n\nAdiós... guapetón.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf("\x0E\x01\x09\x04\x0F\x120APe... pero...\n\n\n\n\x0E\x01\x09\x04\x0E\x1000¿No te gusto y para ti soy solo una\nsimple dependienta? ¿En serio?\n¿Es eso lo que sientes?\n[1]Me gustas[2]Exacto")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf("\x0E\x01\x09\x04\x0F\x120F¿En serio? ¿Entonces no significo nada\npara ti? Mmm...\n\n\n\x0E\x01\x09\x04\x0E\x1000¡Ah! ¡Ya sé lo que pasa aquí!\n\n\n\nEstás fingiendo para ocultar tus\nverdaderos sentimientos, ¿verdad?\n\n\n[1]Exacto[2]No")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf("\x0E\x01\x09\x04\x08\xA08¡Ay!... Pe... pero... ¿Entonces te gusto\no no te gusto? ¡Habla claro de una vez!\n[1]Sí me\ngustas[2]No me\ngustas")
/*<313>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								  case 1:
          									goto flw_307
          								}
          							}
          						  case 1:
/*<298>*/ 							printf("\x0E\x01\x09\x04\x0F\x1210¿Y eso?...\n¿Pe... pero, entonces...?\n\n\n\x0E\x01\x09\x04\x0D\xF00A lo mejor es que no he formulado\nbien la pregunta...\n\n\n\x0E\x01\x09\x04\x0E\x1000A ver, cómo lo digo... Veamos,\n¿qué soy yo para ti?\n\n[1]Mi\namorcito[2]La de la\nconsigna")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf("\x0E\x01\x09\x04\x00\x07Hola, <r<guapetón>>. Estás en tu casa...\n\n\n\nAy... ¡Me siento tan feliz de que hayas\nvenido a verme!")
          				}
          			  case 1:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x15¡Ah, hola!\nVeo que te has decidido a venir a\nverme a casa...\n\nNo estarás intentando decirme\nque soy alguien especial para\nti, ¿verdad?...")
          			}
          		  case 1:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x00\x17Aunque tengas muchas ganas de verme,\nno pienso entretener a los clientes\nen mi casa... ¡Lo que me faltaba!\n\n\x0E\x01\x09\x04\x01\x800Quizá esté siendo un poco estricta,\npero...")
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x00\x02Aaah... ¿Habrá algún hombre por\nahí que sea capaz de hacerme sentir\nque estoy viva? \n\nCómo me gustaría encontrar a alguien\nde quien poder enamorarme... ¡Ay!...\n\n\n\x0E\x01\x09\x04\x01\x800Oye, tú...\n¿Quién te ha dicho a ti que puedes\nentrar aquí sin pedir permiso?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf("\x0E\x01\x09\x04\x00\xD02¡Muchas gracias, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900La casa vuelve a estar limpísima.\n¡Da gusto estar aquí!")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x01\x909Toma, te lo has ganado.\nAquí tienes, ¡<r<20 rupias>>, todas para ti!\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf("\x0E\x01\x09\x04\x01\x900Si la casa vuelve a ensuciarse puede\nque vuelva a requerir tus servicios...\n¡Pagando, claro!")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf("\x0E\x01\x09\x04\n\x900Ah, y una cosa más.\n¡No se lo digas a Cocu!\n\n\n\x0E\x01\x09\x04\x08\x900Se enojaría muchísimo si se entera\nde que malgasto el dinero en esto...\nAsí que no digas nada, ¿eh?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x00\xD02¡Muchas gracias, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900La casa vuelve a estar limpísima.\n¡Da gusto estar aquí!")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf("\x0E\x01\x09\x04\x00\x02Gracias por ayudar, Link.\nTe pagaré cuando hayas limpiado\ntodo el polvo. Avísame, ¿eh?\n\n\x0E\x01\x09\x04\x01\x900¿O ya has terminado por hoy?\n[1]Creo\nque sí[2-]¡Sigo!")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf("\x0E\x01\x09\x04\x00\nOh, qué lástima...\nBueno, no pasa nada. Avísame si\npuedes venir a ayudarme otra vez,\n¿de acuerdo?")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x09\x04\n\x900Muy bien. Sigue así, que lo haces\nmuy bien. Como verás, el <r<suelo >>está\ntotalmente cubierto de polvo...\n\nHe visto que hay polvo en las <r<ventanas>>,\nen las <r<estanterías >>y en las <r<camas>>,\nasí que intenta limpiarlo todo.")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf("Espera, Link...\nTengo que darte la propina que te\nprometí. Ven aquí, toma.")
          	  case 1:
/*<133>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ah, Link.\nVeo que no has terminado todavía.\n\n\n¿Quieres dejarlo por hoy?\n[1]Creo\nque sí[2-]¡Sigo!")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf("\x0E\x01\x09\x04\x00\nOh, qué lástima...\nBueno, no pasa nada. Avísame si\npuedes venir a ayudarme otra vez,\n¿de acuerdo?")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\n\x900Muy bien. Sigue así, que lo haces\nmuy bien. Como verás, el <r<suelo >>está\ntotalmente cubierto de polvo...\n\nHe visto que hay polvo en las <r<ventanas>>,\nen las <r<estanterías >>y en las <r<camas>>,\nasí que intenta limpiarlo todo.")
/*<165>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 140, 'param3': 15}
          			goto flw_140
          		}
          	}
          }

          void entrypoint_123_11() {
/*<141>*/ 	start()
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 147, 'param3': 17}
/*<147>*/ 	set_camera(4, 0)
/*<142>*/ 	switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          	  case 0:
          		flw_164:
/*<164>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
          			goto flw_219
          		  case 1:
/*<145>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ah, Link.\n¿Ya te vas?\n\n\nSi ves a Cocu vigilando por ahí,\nhabla un poco con él, ¿quieres?")
/*<146>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*<163>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<143>*/ 		switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          		  case 0:
/*<144>*/ 			story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = false;
          			goto flw_164
          		  case 1:
          			goto flw_164
          		}
          	}
          }

          void entrypoint_123_12() {
/*<214>*/ 	start()
/*<274>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 215, 'param3': 6}
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\xD08Pero... ¡Qué maravilla...! ¡Si no hay\nni una mota de polvo! Muchas gracias,\nLink.\n\n\x0E\x01\x09\x04\n\x900¡Me has alegrado el día! Ven, que voy\na pagarte lo que te debo.")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309¡Te exijo que me pagues <r<unas 30 rupias\n>>como compensación, niño! \nEran piezas de gran valor... \n¡Y no creas que te estoy engañando!")
/*<382>*/ 	switch (random(4)) {
          	  case 0:
/*<383>*/ 		check_item_flag(501, 24)
/*<384>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 174}) {
          		  case 0:
          			flw_385:
/*<385>*/ 			rupees += -24;
          			flw_400:
/*<400>*/ 			entrypoint_123_14();
          		  case 1:
/*<386>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<406>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_385
          		}
          	  case 1:
/*<387>*/ 		check_item_flag(501, 26)
/*<388>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 176}) {
          		  case 0:
          			flw_389:
/*<389>*/ 			rupees += -26;
          			goto flw_400
          		  case 1:
/*<390>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<407>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_389
          		}
          	  case 2:
/*<391>*/ 		check_item_flag(501, 29)
/*<392>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 178}) {
          		  case 0:
          			flw_393:
/*<393>*/ 			rupees += -29;
          			goto flw_400
          		  case 1:
/*<394>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<408>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_393
          		}
          	  case 3:
/*<395>*/ 		check_item_flag(501, 38)
/*<396>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 180}) {
          		  case 0:
          			flw_397:
/*<397>*/ 			rupees += -38;
          			goto flw_400
          		  case 1:
/*<398>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<409>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_397
          		}
          	}
          }

          void entrypoint_123_14() {
/*<337>*/ 	start()
          	flw_246:
/*<246>*/ 	zone_temp_flags[1 /* 0x1 02 */] = false;
/*<247>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_248:
/*<248>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<245>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_248
          	}
          }

          void entrypoint_123_15() {
/*<360>*/ 	start()
/*<359>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309¡Me debes <r<unas 20 rupias>>, que esto\nera muy, muy valioso! ¡Y te aseguro\nque no te estoy engañando!")
/*<358>*/ 	switch (random(4)) {
          	  case 0:
/*<357>*/ 		check_item_flag(501, 17)
/*<356>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 152}) {
          		  case 0:
          			flw_355:
/*<355>*/ 			rupees += -17;
          			flw_342:
/*<342>*/ 			entrypoint_123_14();
          		  case 1:
/*<354>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<410>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_355
          		}
          	  case 1:
/*<353>*/ 		check_item_flag(501, 19)
/*<352>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 150}) {
          		  case 0:
          			flw_351:
/*<351>*/ 			rupees += -19;
          			goto flw_342
          		  case 1:
/*<350>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<411>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_351
          		}
          	  case 2:
/*<349>*/ 		check_item_flag(501, 22)
/*<348>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 148}) {
          		  case 0:
          			flw_347:
/*<347>*/ 			rupees += -22;
          			goto flw_342
          		  case 1:
/*<346>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<412>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_347
          		}
          	  case 3:
/*<345>*/ 		check_item_flag(501, 23)
/*<344>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 146}) {
          		  case 0:
          			flw_343:
/*<343>*/ 			rupees += -23;
          			goto flw_342
          		  case 1:
/*<341>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Me debes <r<unas 10 rupias>>, niño,\n¡que esas piezas eran muy caras!\n¡Y no quiero excusas!")
/*<362>*/ 	switch (random(4)) {
          	  case 0:
/*<363>*/ 		check_item_flag(501, 7)
/*<364>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 162}) {
          		  case 0:
          			flw_365:
/*<365>*/ 			rupees += -7;
          			flw_380:
/*<380>*/ 			entrypoint_123_14();
          		  case 1:
/*<366>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<414>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_365
          		}
          	  case 1:
/*<367>*/ 		check_item_flag(501, 8)
/*<368>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 164}) {
          		  case 0:
          			flw_369:
/*<369>*/ 			rupees += -8;
          			goto flw_380
          		  case 1:
/*<370>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<415>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_369
          		}
          	  case 2:
/*<371>*/ 		check_item_flag(501, 11)
/*<372>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 166}) {
          		  case 0:
          			flw_373:
/*<373>*/ 			rupees += -11;
          			goto flw_380
          		  case 1:
/*<374>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<416>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_373
          		}
          	  case 3:
/*<375>*/ 		check_item_flag(501, 13)
/*<376>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 168}) {
          		  case 0:
          			flw_377:
/*<377>*/ 			rupees += -13;
          			goto flw_380
          		  case 1:
/*<378>*/ 			printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<417>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_377
          		}
          	}
          }

          void entrypoint_123_00() {
          	start()
/*<  4>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<  5>*/ 		check_item_flag(49, 1)
/*<  6>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          		  case 0:
/*<  1>*/ 			switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          			  case 0:
/*<  7>*/ 				switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          				  case 0:
/*< 44>*/ 					switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          					  case 0:
/*< 43>*/ 						switch (story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */]) {
          						  case 0:
          							flw_19:
/*< 19>*/ 							switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          							  case 0:
/*< 20>*/ 								printf("\x0E\x01\x09\x04\x00\x01Hola, Link.\n\n\n\nSi la casa vuelve a llenarse de polvo,\nno te preocupes, que te avisaré.\n")
          							  case 1:
/*<124>*/ 								switch (zone_temp_flags[0 /* 0x1 01 */]) {
          								  case 0:
/*<211>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<213>*/ 										entrypoint_123_08();
          									  case 1:
/*<212>*/ 										entrypoint_123_09();
          									}
          								  case 1:
/*<123>*/ 									switch (zone_temp_flags[1 /* 0x1 02 */]) {
          									  case 0:
/*<125>*/ 										printf("\x0E\x01\x09\x04\x08\xD01¿Podrías limpiar esto un poco?\nLo siento, es que no soporto limpiar...\n\n\n\x0E\x01\x09\x04\n\x900Te pagaré por el trabajo, claro.\n[1]Trato\nhecho[2-]No, gracias")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf("\x0E\x01\x09\x04\x01\xD07¡Estupendo! ¡Genial! Sabía que no\nme fallarías, Link.\n\n\n\x0E\x01\x09\x04\x01\xD00Intenta hacerlo cuanto antes,\n¿quieres? ¡Y gracias!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf("\x0E\x01\x09\x04\x01\x90AVaya, Link, ¡y yo que\ncreía que ibas a ayudarme!...")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("\x0E\x01\x09\x04\x00\x01Hola, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900La casa está sucia otra vez... ¿Podrías\nvolver a limpiarla? Te pienso pagar,\npor supuesto.\n[1]Trato\nhecho[2-]No, gracias")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hola, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Cocu está enojado conmigo...\n\n\n\n\x0E\x01\x09\x04\n\x900Me ha dicho que no debería gastar\nel dinero en hacer que alguien\nme limpie la casa.\n\n\x0E\x01\x09\x04\x01\xC00...\n\n\n\n\x0E\x01\x09\x04\x08\xD09Pero... Yo no creo que esté mal pedirte\nque me ayudes de vez en cuando.\nHay confianza...\n\n\x0E\x01\x09\x04\x08\x900Así que no te preocupes. Siempre\nque se me acumule el polvo y tú\ntengas tiempo, vuelve a visitarme.")
/*< 46>*/ 							story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */] = true;
          						}
          					  case 1:
          						goto flw_19
          					}
          				  case 1:
/*<438>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 31}
/*<120>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<200>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<210>*/ 							entrypoint_123_08();
          						  case 1:
/*<209>*/ 							entrypoint_123_09();
          						}
          					  case 1:
/*<  8>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
/*< 15>*/ 							printf("\x0E\x01\x09\x04\x08\xD01¿Podrías limpiar esto un poco?\nLo siento, es que no soporto limpiar...\n\n\n\x0E\x01\x09\x04\n\x900Te pagaré por el trabajo, claro.\n[1]Trato\nhecho[2-]No, gracias")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf("\x0E\x01\x09\x04\n\xD07¡Estupendo! ¡Genial! Sabía que\nno me fallarías, Link.\n\n\n\x0E\x01\x09\x04\x08\x904¿Dónde habré metido la escoba?\nNo me acuerdo ni de dónde la puse...\n\n\n\x0E\x01\x09\x04\x09\x900Bueno, lo único que tienes que hacer\nes <r<quitar el polvo>>, no te pido más.\n\n\n\x0E\x01\x09\x04\x01\x900No me importa cómo lo hagas, por mí\nte puedes poner a soplar si quieres.\nLo importante es que <r<lo quites todo>>.\n\n\x0E\x01\x09\x04\x08\x902Intenta hacerlo cuanto antes,\n¿de acuerdo? ¡Y muchas gracias!")
/*<119>*/ 								make_actor_do_something(0, 0)
/*<148>*/ 								story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<  3>*/ 								zone_temp_flags[0 /* 0x1 01 */] = true;
          								flw_122:
/*<122>*/ 								switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          								  case 0:
          									flw_121:
/*<121>*/ 									zone_temp_flags[1 /* 0x1 02 */] = true;
          								  case 1:
/*<118>*/ 									story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */] = true;
          									goto flw_121
          								}
          							  case 1:
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x01\x90AVaya, Link, ¡y yo que\ncreía que ibas a ayudarme!...")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Hola, Link.\n¿Cómo estás?\n\n\n\x0E\x01\x09\x04\x01\x900¿Te importaría hacer un poco de\nlimpieza por mí? ¡Limpiar no es lo mío,\nla verdad!...\n\x0E\x01\x09\x04\n\x900Te pienso pagar, por supuesto.\n\n[1]Trato\nhecho[2-]No, gracias")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hola, Link.\n¿Cómo estás?\n\n\n\x0E\x01\x09\x04\x08\x900Me gustaría hablar contigo de una cosa.\nVerás, es que la casa está hecha una\nporquería... \n\n\x0E\x01\x09\x04\x09\x900Cocu siempre me dice que debería\nlimpiarla, ¡pero es que me aburre\nmuchísimo! Nunca tengo ganas\nde hacerlo.\n\x0E\x01\x09\x04\x08\x900Así que he pensado que quizá a ti\nno te importaría limpiarla por mí.\nTe pagaría, por supuesto.\n[1]Trato\nhecho[2-]Lo siento")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ya que son compañeros de clase, espero\nque cuides bien a mi Cocu, ¿eh?\n\n\nNo se parece en nada a mí, así que\ntampoco debería preocuparme mucho.\n[1]Vaya casa...[2]Ejem...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf("\x0E\x01\x09\x04\x01\x909Ya, bueno, es verdad...\n¿Cómo se ha podido ensuciar tanto?\n\n\n\x0E\x01\x09\x04\n\x90AMe da tanta pereza arreglar la casa...\nOjalá encontrara a alguien que me\nhiciera el favor de limpiar el polvo\npor mí.")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x01\x904¿Qué pasa?\nParece que quieres decirme algo...")
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\xD01Hola, Link. ¿Cómo estás?\n\n\n\n\x0E\x01\x09\x04\n\x900A ver si algún día me cuentas qué tal\nle va a mi Cocu en la academia.")
/*< 16>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			}
          		}
          	  case 1:
          		goto flw_17
          	}
          }

          void entrypoint_123_01() {
/*< 22>*/ 	start()
/*<295>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1014, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf("¡Ya hemos hablado mil veces de esto,\nmamá!")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 24, 'param3': 6}
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 169, 'param3': 6}
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf("Cocu, tranquilízate, por favor.\nNo hace falta que te pongas así.")
/*< 26>*/ 	printf("¡Claro que me pongo así!\n\n\n\n¡Me he dado cuenta de que has estado\n<r<pagando a alguien>> para que limpie de\nvez en cuando!\n\n¡Te había dado ese dinero para\nque fueras a comprar el pan!\nMamá, ¿es que no te das cuenta?...\n\n¡Si sigues malgastando así las rupias,\nno me alcanzará el dinero para \npagarme la academia de caballeros!\n\n¡No me busqué el trabajo de vigilante\nnocturno para que te gastes el dinero\nen vivir sin hacer nada!\n\n¡Que sea la última vez!... ¡Si no cambias\nde actitud, vamos a tener problemas!\n")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 28, 'param3': 6}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 90, 'next': 32, 'param3': 6}
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 170, 'param3': 6}
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Oh, hola, Link...\nEs un poco tarde, ¿no? ¿Qué pasa?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf("\x0E\x01\x09\x04\x120B\x1100Tú... no habrás escuchado nada, ¿no?\nNo, no creo que te hayas enterado...\n[1]¿De qué?[2]Lo siento,\npero...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Nada... olvídalo.\n\n\n\n\x0E\x01\x09\x04\x1208\x400Bueno, tengo que hacer la patrulla\notra vez. Ten mucho cuidado si vas\na andar por la calle a estas horas,\n¿entendido?")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100¡Entonces lo has oído todo!\n\n\n\n\x0E\x01\x09\x04\x120F\x1100Es verdad... Estoy patrullando durante\nel turno de noche para ganar un poco\nde dinero extra.\n\n\x0E\x01\x09\x04\x1208\x1100¡Y no me importa si no te parece bien!\nPuedes reírte todo lo que quieras...\n¡Pero no está nada bien eso de\nescuchar conversaciones ajenas!\n\x0E\x01\x09\x04\x120C\xC00Así que tú tampoco puedes ir dando\nlecciones a la gente, ¿no crees?... \nBueno, hagamos como si nada de esto\nhubiera ocurrido, ¿de acuerdo?")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x10\x1100Mmm, ahora que lo pienso...<pause1E> ¿Son\nimaginaciones mías, o últimamente\ntodos los monstruos de Neburia han\ndesaparecido?...\n\x0E\x01\x09\x04ÿ\xFF00¿Qué habrá pasado? Todo esto es muy\nraro... En fin, ¡lo importante es que\nhemos vuelto a recuperar la paz!")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf("¡Hola, Link!\nLas calles son peligrosas de noche,\nándate con cuidado.\n\n\x0E\x01\x09\x04\x11\xC09Ah, y sobre el asunto de mi mamá...\n¡no se lo cuentes a nadie! ¿Entendido?")
          				flw_431:
/*<431>*/ 				switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          				  case 0:
/*<433>*/ 					zone_temp_flags[16 /* 0x3 01 */] = true;
          				  case 1:
          				}
          			  case 1:
/*<161>*/ 				switch (scene_flags[76 /* 0x8 10 */]) {
          				  case 0:
/*<176>*/ 					{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4376, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("Qué vergüenza... No tendrías que\nhaber visto una escena así.\n\n\n\x0E\x01\x09\x04\x0F\x1100Es humillante... pero lo hago por\nmi mamá. No le gusta trabajar\ny ya no sé qué hacer.\n\n\x0E\x01\x09\x04\x08\xC0BPero bueno, ya me las arreglaré,\nno te preocupes por mí.\n\n\n\x0E\x01\x09\x04\x01\x1100Aunque aún no sé quién accedió\na limpiarle la casa...\n\n\n\x0E\x01\x09\x04\x08\xC16Pche... ¿Pero qué se cree esa gente?\n¿Por qué no se ocupan de sus cosas\ny dejan a los demás en paz?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf("Hola, Link.\n¡Tienes ante ti al protector de la paz\nde Neburia!\n\n\x0E\x01\x09\x04\x0C\x400¡Quiero que este sea el lugar más\nseguro del mundo y que todos podamos\nvivir en paz y armonía!\n\n\x0E\x01\x09\x04\x01\xC52Este...<pause1E>\n¿Por qué me miras así?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf("¡Ay, Link, compañero!...\nAlgún día entenderás lo que significa\nser un caballero, ¡ya verás!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf("¡Hola, Link!\nNo es muy seguro salir de noche por\nahí. ¡Ándate con cuidado, compañero!\n\n\x0E\x01\x09\x04\x0B\x400Esta es mi ruta de patrulla. Me ocupo\nde hacer el turno de noche.\n\n\n\x0E\x01\x09\x04\x08\x404Al caer la noche, los monstruos salen\nde sus escondrijos y la zona se vuelve\nbastante peligrosa...\n\n¡Pero el deber de un caballero\nes proteger a los ciudadanos!\n\n[1]¡Eres\ngenial![2]¿Y pagan\nbien?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x09\xC09¡¿Pero qué dices?! ¡Esta tarea\nrepresenta la esencia de lo que\nsignifica ser un aprendiz de\ncaballero!\nEsto no se hace para recibir elogios...\nMírame a mí, por ejemplo. Lo único\nque necesito es la sonrisa de la gente,\nasí ya me siento pagado.\n\x0E\x01\x09\x04\x08\x400¡Eso es ser un verdadero caballero!\n\x0E\x01\x09\x04\x00\x05¡Algún día lo entenderás!")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x0C\xC17¡Pero bueno, Link!\n¿Tú por qué decidiste hacerte\ncaballero?\n\n¿Para hacerte rico, acaso?\n¡Es un gran error! ¡El dinero puede\nser tu perdición, compañero!\n\n\x0E\x01\x09\x04\x08\x405¡Mírame a mí! Las rupias me dan igual,\nme basta con ver feliz a la gente.\n¡Esa es la actitud de los caballeros!")
          					goto flw_158
          				}
          			}
          		}
          	}
          }

          void entrypoint_123_03() {
/*<251>*/ 	start()
/*<253>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<255>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 768, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x09¡Pero bueno!... ¡Mira lo que has hecho!\n¡Has destrozado mis antigüedades!\n\n\n¡Haz el favor de tener más cuidado\ny no romperme cosas, niño! O si no...")
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x00\x07¡Las antigüedades son mi pasión!\nTodo lo que hay en mi casa es\ntremendamente valioso...\n\n¡Así que no rompas nada!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf("\x0E\x01\x09\x04\x1F00\n¡¡¡SERÁ... POSIBLE...!!!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x1F0A\x300¡Tú otra vez!\n¡¿Pero qué te he hecho yo para que\nme tengas tanta manía, niño?!")
          			flw_401:
/*<401>*/ 			check_item_flag(501, 1)
/*<402>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 182}) {
          			  case 0:
/*<244>*/ 				switch (random(3)) {
          				  case 0:
/*<338>*/ 					entrypoint_123_13();
          				  case 1:
/*<339>*/ 					entrypoint_123_15();
          				  case 2:
/*<340>*/ 					entrypoint_123_16();
          				}
          			  case 1:
/*<405>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<418>*/ 					printf("¡Y ahora resulta que no tienes ni una\nrupia! ¡Es intolerable!\n\n\n¡No puedes ir por ahí rompiendo\nlas cosas de la gente y luego no\npagarles porque no llevas dinero!\n¡Vamos, lárgate de aquí ahora mismo!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf("¡¿Será posible?!... ¡Pero si no tienes ni\nuna sola rupia, niño!\n\n\n¡¿Cómo puedes atreverte a romper\nlas cosas a la gente y luego no tener\ndinero para pagar?! \n\nGrrr, no importa... ¡Lárgate de aquí,\nno quiero ni verte!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x09\x04\x1F09\x300¡Cómo se puede ser tan torpe!\nMis preciosas antigüedades...")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x1F09\x300¡Mira lo que has hecho!\n¡Has roto mis antigüedades!\n\n\n¡Exijo que me pagues todo lo que\nhas roto!\n\n\n\x0E\x01\x09\x04\x1F0B\x700A ver, eso era muy caro...\n¡Con <r<unas >><r<20 rupias >>estaremos en paz!\n\n\n\x0E\x01\x09\x04\x1F01\x305¡Y no me mires así!\n¡¿Insinúas que estoy aprovechando\npara inflar el precio?!\n\n\x0E\x01\x09\x04\x1F09\x309¡Serás impertinente!\nYo sé lo que valen mis piezas\nde colección mejor que nadie.\n\n¡Y tú me vas a pagar hasta la última\nrupia! ¿Has entendido?")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf("\x0E\x01\x09\x04\x1F0A\x300¡Si esto se repite, pienso tomar\nmedidas! ¡Estás avisado!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf("¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf("¡¿Será posible?!... ¡Pero si no tienes ni\nuna sola rupia, niño!\n\n\n¡¿Cómo puedes atreverte a romper\nlas cosas a la gente y luego no tener\ndinero para pagar?! \n\nGrrr, no importa... ¡Lárgate de aquí,\nno quiero ni verte!")
/*<422>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_235
          		}
          	}
          }

          void entrypoint_123_05() {
/*<258>*/ 	start()
/*<284>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 43, 'next': 292, 'param3': 32}
/*<292>*/ 	set_camera(13, 0)
/*<291>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 287, 'param3': 14}
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 43, 'param2': 99, 'next': 259, 'param3': 50}
/*<259>*/ 	printf("")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 260, 'param3': 6}
/*<260>*/ 	changeScene(0, 0) // 
          }

