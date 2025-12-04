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
/*< 87>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000007>¡Hola, guapetón!\n¡Aquí estoy para guardarte lo que tú\nquieras!\n[1-]Por favor[2]No, gracias")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000008>¡Hola, guapetón! ¡Bienvenido!\n\n\n\n¡Aquí estoy, dispuesta a guardarte\nlo que tú quieras!\n\n[1-]Por favor[2]No, gracias")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x0000000e>Hola, <heroname>. Dime...\n¿Quieres dejar algo en la consigna de\nuna chica que ha superado un amargo\ndesengaño y está cada día más bonita?\n[1-]Este... sí[2]No, gracias")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000005>Ah, hola, <heroname>.\n\n\n\nPerdona por lo de la otra noche, me\ncomporté como una tonta...\n\n\nAunque ya lo he superado, no te\npreocupes. He tenido que pensarlo\nbastante, pero ya estoy mejor.\n¡Fin de la historia!\nAdemás... las chicas nos ponemos\nmás bonitas cuando nos rompen\nel corazón, ¿no lo sabías?\n\nA partir de ahora me pienso volver\ncada día más hermosa. Voy a ser\nun auténtico bombón, ya lo verás.\n\nTen cuidado, no vayas a lamentar\nluego la decisión que has tomado...\n\n\nBueno, todo aclarado, ya está.\nA ver, ¿por dónde íbamos?...\nAh, sí. ¿Quieres que te guarde algo?\n[1-]Por favor[2]No, gracias")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>¡Hola, guapetón!\n\n\n\n<0x10009:0x000d0f00>Mmm... Eh... Verás...\n¿<color red<Por qué no vienes esta noche\na mi casa>coloroff>? Tengo que hablar\ncontigo de algo importante.\n<0x10009:0x00080a00>Vivo justo al lado del bazar, no tiene\npérdida. Vas a venir, ¿verdad que sí?\n¡Allí te espero!")
          								flw_79:
/*< 79>*/ 								printf(/* textboxtype: 1, unk: 0, line: 76 */ "Bueno, ahora dime...\n¿Quieres dejar aquí algún objeto?\n\n[1-]Por favor[2]No, gracias")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>¡Hola, guapetón!\n\n\n\n<0x10009:0x000d0f00>Mmm... Eh... Verás...\n¿<color red<Por qué no vienes esta noche\na mi casa>coloroff>? Tengo que hablar\ncontigo de algo importante.\n<0x10009:0x00080a00>Vivo justo al lado del bazar, no tiene\npérdida. Vas a venir, ¿verdad que sí?\n¡Allí te espero!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000007>¡Hola, <color red<guapetón>coloroff>!\n¡Te estaba esperando, ji, ji, ji!\n¿Qué me traes hoy?\n\nDime, ¿quieres que te guarde algo?\n[1-]Por favor[2]No, gracias")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000008>¡Oh!...")
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080a00>¡Has... has venido a verme! No sabes\ncuánto significa para mí...\n\n[1-]Ejem...[2-]¡Cómo no!")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x000d0f0a>¡No me mires así que me voy a\nsonrojar, <color red<guapetón>coloroff>!")
          					flw_66:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00120a00>Últimamente no dejo de pensar en ti...\n¡Ando todo el día como embobada!\n¡El corazón me late tan rápido que\nno puedo ni respirar!\n¿Crees que...? ¿Dirías que esto es...?\n\n[1-]Una gripe,\nseguro[2-]Amor")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x000f120e>Veo que hoy tienes ganas de gastar\nbromas, ¿no? Ya está bien, guapetón.")
          						flw_70:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00120a00>¡Uy, que se me va la cabeza!...\nVamos, vamos, ¡a trabajar!\n\n\n<0x10009:0x000e1000>A ver... ¿Qué te iba a decir?\nYa, sí... Iba a preguntarte si querías\nentregarme algo tuyo y solo tuyo.\n[1-]Claro[2]Mmm...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x000e100f>¿De verdad?\n¡Qué alegría me acabas de dar!...")
          							flw_72:
/*< 72>*/ 							printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x000d0f0a>¡Ay! ¡Lo siento! ¡No debería haberte\ncontado cosas tan personales!...\n\n\n<0x10009:0x00080a00>¡Tengo que aprender a cerrar la boca!\nLo que quería decir es... nada, que si\nquieres que te guarde algo, <color red<guapetón>coloroff>.\n[1-]Por favor[2]No, gracias")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000f0f0d>¡Ay! ¡Lo has dicho! ¡La palabra mágica!\nPero no lo digas tan alto...\n¡Que me da mucha vergüenza!...")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x000d0f0a>Me haces tan feliz...\n¡que mi corazón va a explotar!")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000005>Hola, me alegro de verte otra vez\npor aquí. Ya sabes que guardamos\na buen recaudo todo tipo de cosas.\n\nDime, ¿quieres dejar aquí un objeto\nde tu alforja?\n[1-]Por favor[2]No, gracias")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "Hola.\nBienvenido a la consigna...<0x10009:0x00000005>\n¡Oh!...")
/*<279>*/ 				wait_frames(15)
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "Este... eh...\nBien... bienvenido...\n\n[1-]¿Qué te\npasa?[2-]Te veo\ndistinta")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x000a0f18>Mmm... No... No pasa nada.")
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 64 */ "No... no te equivoques, no tiene nada\nque ver con que me alegre de verte\nni nada parecido...\n\nPero, si te paras a pensarlo, nos vemos\ncasi a diario... Es evidente que nuestra\nrelación no es solo de dependienta\ny cliente...\n<0x10009:0x00101405>Ay, no, bueno... No... no quería...\nNo me hagas caso, ¡qué cosas digo!\n\n\nDisculpa... Olvida todo lo que acabo\nde decir, por favor, ¿de acuerdo?\n\n\n<0x10009:0x00070800>Bu... bueno, a ver si me centro un poco,\nque se supone que estoy trabajando.\n¿Querías guardar o sacar algo?\n[1-]Por favor[2]No, gracias")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000a0f18>¿Eh? No... No, claro que no...\nSerán imaginaciones tuyas...")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000001>Bienvenido a la consigna...\nVaya, otra vez por aquí...\nVoy a empezar a pensar mal, chico.\n\nBien, ¿qué se te ofrece?...\n¿Quieres dejar algo aquí?\n¿O recoger algo?\n[1-]Por favor[2]No, gracias")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000001>Hola, bienvenido a la consigna.\nAh, eres tú otra vez...\n\n\nVienes mucho por aquí, ¿no?\n¡Últimamente eres mi mejor cliente!\n\n\n<0x10009:0x00000004>Oye, espera un momento...\n\n\n\nNo... ¿no estarás...?\n\n\n\nNo me digas que vienes solo para verme\na mí, ¿verdad?\n[1-]Claro\nque no[2-]Pues... sí")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000002>Ah... Bueno...\n\n\n\nQué... qué tontería, ¿verdad?\nNo sé ni por qué lo he dicho...\n¡Ahora pensarás que soy una\npresumida!\n<0x10009:0x000a0c00>No creas que me importa que no vengas\na verme a mí, claro que no...")
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00070800>Bueno, voy a centrarme un poco,\nque hay tarea por hacer...\nDime, ¿querías guardar o sacar algo?\n[1-]Por favor[2]No, gracias")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000002>¡¿Eh?! ¡¿En serio?!\n\n\n\n¡Bah! ¡No te creas que me puedes\nengañar con piropos baratos!...\n\n\n<0x10009:0x000a0c00>Aunque... quizá sí, no sé...\nA una también le gusta que le digan\ncosas bonitas de vez en cuando... \n")
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
/*<106>*/ 								printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000009>Me hace muy feliz que al final hayas\nlogrado ser sincero conmigo, en serio. \n¡Nos vemos luego en la consigna,\nguapetón!")
          							  case 1:
/*<109>*/ 								printf(/* textboxtype: 1, unk: 1, line: 104 */ "<0x10009:0x0000000d>¡Amor! ¡Te dije que teníamos que\nmantener nuestra relación en\nsecreto! ¡No vengas tanto por aquí,\nque al final mi papá se va a enterar!\nA ver, ¿qué quieres a estas horas?\n\n[1-]Hablar\nun poco[2-]Nada en\nespecial[3-]Dejar\ncosas")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00080008>Sí, yo también tengo un montón\nde cosas que quiero decirte, pero mi\npapá no nos quita el ojo de encima...\n¡Ya hablaremos en otro momento!")
          								  case 1:
/*<112>*/ 									printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00080a00>¡No hace falta que finjas! Conmigo\nno tienes por qué aparentar nada...\n¡Me gustas igualmente!")
          								  case 2:
/*<113>*/ 									printf(/* textboxtype: 1, unk: 0, line: 107 */ "Pero para esas cosas tienes\nque venir a verme a la consigna,\ncuando sea de día... \n\n<0x10009:0x000e1000>¿O me estás tratando de decir\nque eso es lo que soy yo para ti?\n¿La chica de la consigna?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000014>Soy fuerte, pronto te habré olvidado.\nY ahora vete, déjame sola.\n")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00000013>No sé por qué será, pero últimamente\nmi papá está de muy buen humor...\n\n\n¿No se da cuenta de que su hija está\nsufriendo porque le han partido\nel corazón? Qué padre...")
          									  case 1:
/*<116>*/ 										printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00000014>Ya sé que lo tengo superado, pero...\nA veces, por las noches, la tristeza\nme ahoga. Supongo que un corazón\nroto tarda su tiempo en curarse.")
          									}
          								  case 1:
/*<114>*/ 									printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x0000000e>Ay, <heroname>...\nQuién me iba a decir que duele\ntanto que te rompan el corazón...<0x10009:0x00000014>")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						wait_frames(1)
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000005><heroname>...\nHas venido a verme... Gracias.\n\n\n<0x10009:0x000e0f00>La verdad es que hay una cosa\nque me muero por preguntarte.\n\n\nTú eres una persona de mente abierta,\n¿verdad? Creo que puedo ser sincera\ncontigo. Verás, te lo diré sin rodeos...")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf(/* textboxtype: 1, unk: 0, line: 86 */ "¿Qué significo yo para ti?\n\n[1-]Me gustas[2-]Guardas\nmis cosas")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x000e100f>¿En serio? ¡¿De verdad?!\n¡¿No me estarás mintiendo?!\n\n[1-]En serio[2-]Era broma")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00080a08>¡Ay, qué feliz me haces!\nPero me sigue pareciendo un sueño...\n¡Dímelo otra vez para que me lo crea!\n\n<0x10009:0x000e1000>¿De verdad, de verdad, de verdad\nque te gusto? ¿En serio?\n\n[1-]Claro[2-]La verdad\nes que no")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x000d0f0a>No me estarás mintiendo, ¿verdad?\n¡No sé de qué locura sería capaz\nsi descubro que me mientes!\n[1-]No te\nmiento[2-]Era broma")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00080a09>¡Ay, qué alegría más grande!...\n¡Me gustas mucho, guapetón mío!\n¡Perdona por haber desconfiado de ti!")
/*<318>*/ 										wait_frames(45)
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										wait_frames(30)
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										wait_frames(30)
/*<314>*/ 										printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000013>No te preocupes, lo entiendo. No pasa\nnada, en serio.\n\n\nTienes cosas mucho más importantes\nen las que pensar ahora mismo, lo sé.\n\n\n<0x10009:0x000e1000>Tienes por delante una complicada\nmisión, ¿verdad que sí?\n\n\n<0x10009:0x000d0f00>Lo sé porque vienes mucho a mi tienda\na dejar cosas, y suelen ser siempre\nobjetos de batalla.\n\nPor eso, a partir de ahora no pienso\nvolver a molestarte. Descuida. Seré\nla dependienta de la consigna y\ncuidaré de tus cosas, nada más.\n<0x10009:0x000e1000>Y cuando hayas acabado con lo que\nestás haciendo, iremos los dos\na hablar con mi papá.\n\n<0x10009:0x000b0d00>¡Hasta entonces, mantendremos\nlo nuestro en secreto! ¡Ya nos\nveremos por la consigna, ji, ji, ji!")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x000f1214>Entiendo...\nSi eso es lo que piensas...\n\n\nSiento haberte hecho perder el tiempo\ncon todo esto.")
/*<329>*/ 										wait_frames(45)
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										wait_frames(30)
/*<332>*/ 										printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000013>No, por favor...\nNo necesito tu compasión.\n\n\nEstoy bien. Soy más fuerte de lo que\ncrees. No tardaré mucho en olvidarte\ny superar todo esto...\n\n<0x10009:0x00140d00>La próxima vez que nos veamos,\nte recibiré como a cualquier otro\ncliente...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										wait_frames(1)
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										wait_frames(30)
/*<327>*/ 										printf(/* textboxtype: 1, unk: 0, line: 101 */ "Pero esta noche quiero estar sola.\n\n\n\nAdiós... guapetón.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x000f120a>Pe... pero...\n\n\n\n<0x10009:0x000e1000>¿No te gusto y para ti soy solo una\nsimple dependienta? ¿En serio?\n¿Es eso lo que sientes?\n[1-]Me gustas[2-]Exacto")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x000f120f>¿En serio? ¿Entonces no significo nada\npara ti? Mmm...\n\n\n<0x10009:0x000e1000>¡Ah! ¡Ya sé lo que pasa aquí!\n\n\n\nEstás fingiendo para ocultar tus\nverdaderos sentimientos, ¿verdad?\n\n\n[1-]Exacto[2-]No")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00080a08>¡Ay!... Pe... pero... ¿Entonces te gusto\no no te gusto? ¡Habla claro de una vez!\n[1-]Sí me\ngustas[2-]No me\ngustas")
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
/*<298>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x000f1210>¿Y eso?...\n¿Pe... pero, entonces...?\n\n\n<0x10009:0x000d0f00>A lo mejor es que no he formulado\nbien la pregunta...\n\n\n<0x10009:0x000e1000>A ver, cómo lo digo... Veamos,\n¿qué soy yo para ti?\n\n[1-]Mi\namorcito[2-]La de la\nconsigna")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000007>Hola, <color red<guapetón>coloroff>. Estás en tu casa...\n\n\n\nAy... ¡Me siento tan feliz de que hayas\nvenido a verme!")
          				}
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000015>¡Ah, hola!\nVeo que te has decidido a venir a\nverme a casa...\n\nNo estarás intentando decirme\nque soy alguien especial para\nti, ¿verdad?...")
          			}
          		  case 1:
/*<100>*/ 			printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000017>Aunque tengas muchas ganas de verme,\nno pienso entretener a los clientes\nen mi casa... ¡Lo que me faltaba!\n\n<0x10009:0x00010800>Quizá esté siendo un poco estricta,\npero...")
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000002>Aaah... ¿Habrá algún hombre por\nahí que sea capaz de hacerme sentir\nque estoy viva? \n\nCómo me gustaría encontrar a alguien\nde quien poder enamorarme... ¡Ay!...\n\n\n<0x10009:0x00010800>Oye, tú...\n¿Quién te ha dicho a ti que puedes\nentrar aquí sin pedir permiso?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>¡Muchas gracias, <heroname>!\n\n\n\n<0x10009:0x000a0900>La casa vuelve a estar limpísima.\n¡Da gusto estar aquí!")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00010909>Toma, te lo has ganado.\nAquí tienes, ¡<color red<20 rupias>coloroff>, todas para ti!<0x10009:0x000a0d00>")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00010900>Si la casa vuelve a ensuciarse puede\nque vuelva a requerir tus servicios...\n¡Pagando, claro!")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x000a0900>Ah, y una cosa más.\n¡No se lo digas a Cocu!\n\n\n<0x10009:0x00080900>Se enojaría muchísimo si se entera\nde que malgasto el dinero en esto...\nAsí que no digas nada, ¿eh?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>¡Muchas gracias, <heroname>!\n\n\n\n<0x10009:0x000a0900>La casa vuelve a estar limpísima.\n¡Da gusto estar aquí!")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000002>Gracias por ayudar, <heroname>.\nTe pagaré cuando hayas limpiado\ntodo el polvo. Avísame, ¿eh?\n\n<0x10009:0x00010900>¿O ya has terminado por hoy?\n[1-]Creo\nque sí[2]¡Sigo!")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000a>Oh, qué lástima...\nBueno, no pasa nada. Avísame si\npuedes venir a ayudarme otra vez,\n¿de acuerdo?")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Muy bien. Sigue así, que lo haces\nmuy bien. Como verás, el <color red<suelo >coloroff>está\ntotalmente cubierto de polvo...\n\nHe visto que hay polvo en las <color red<ventanas>coloroff>,\nen las <color red<estanterías >coloroff>y en las <color red<camas>coloroff>,\nasí que intenta limpiarlo todo.")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Espera, <heroname>...\nTengo que darte la propina que te\nprometí. Ven aquí, toma.")
          	  case 1:
/*<133>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000004>Ah, <heroname>.\nVeo que no has terminado todavía.\n\n\n¿Quieres dejarlo por hoy?\n[1-]Creo\nque sí[2]¡Sigo!")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000a>Oh, qué lástima...\nBueno, no pasa nada. Avísame si\npuedes venir a ayudarme otra vez,\n¿de acuerdo?")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Muy bien. Sigue así, que lo haces\nmuy bien. Como verás, el <color red<suelo >coloroff>está\ntotalmente cubierto de polvo...\n\nHe visto que hay polvo en las <color red<ventanas>coloroff>,\nen las <color red<estanterías >coloroff>y en las <color red<camas>coloroff>,\nasí que intenta limpiarlo todo.")
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
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004>Ah, <heroname>.\n¿Ya te vas?\n\n\nSi ves a Cocu vigilando por ahí,\nhabla un poco con él, ¿quieres?")
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
/*<274>*/ 	wait_frames(10)
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000d08>Pero... ¡Qué maravilla...! ¡Si no hay\nni una mota de polvo! Muchas gracias,\n<heroname>.\n\n<0x10009:0x000a0900>¡Me has alegrado el día! Ven, que voy\na pagarte lo que te debo.")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x1f0a0309>¡Te exijo que me pagues <color red<unas 30 rupias\n>coloroff>como compensación, niño! \nEran piezas de gran valor... \n¡Y no creas que te estoy engañando!")
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
/*<386>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<394>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<398>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<359>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x1f0a0309>¡Me debes <color red<unas 20 rupias>coloroff>, que esto\nera muy, muy valioso! ¡Y te aseguro\nque no te estoy engañando!")
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
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<350>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<346>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x1f0a0309>Me debes <color red<unas 10 rupias>coloroff>, niño,\n¡que esas piezas eran muy caras!\n¡Y no quiero excusas!")
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
/*<366>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<370>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<374>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*<378>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
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
/*< 20>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000001>Hola, <heroname>.\n\n\n\nSi la casa vuelve a llenarse de polvo,\nno te preocupes, que te avisaré.\n")
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
/*<125>*/ 										printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080d01>¿Podrías limpiar esto un poco?\nLo siento, es que no soporto limpiar...\n\n\n<0x10009:0x000a0900>Te pagaré por el trabajo, claro.\n[1-]Trato\nhecho[2]No, gracias")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00010d07>¡Estupendo! ¡Genial! Sabía que no\nme fallarías, <heroname>.\n\n\n<0x10009:0x00010d00>Intenta hacerlo cuanto antes,\n¿quieres? ¡Y gracias!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0001090a>Vaya, <heroname>, ¡y yo que\ncreía que ibas a ayudarme!...")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Hola, <heroname>.\n\n\n\n<0x10009:0x00080900>La casa está sucia otra vez... ¿Podrías\nvolver a limpiarla? Te pienso pagar,\npor supuesto.\n[1-]Trato\nhecho[2]No, gracias")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000001>Hola, <heroname>.\n\n\n\n<0x10009:0x00080900>Cocu está enojado conmigo...\n\n\n\n<0x10009:0x000a0900>Me ha dicho que no debería gastar\nel dinero en hacer que alguien\nme limpie la casa.\n\n<0x10009:0x00010c00>...\n\n\n\n<0x10009:0x00080d09>Pero... Yo no creo que esté mal pedirte\nque me ayudes de vez en cuando.\nHay confianza...\n\n<0x10009:0x00080900>Así que no te preocupes. Siempre\nque se me acumule el polvo y tú\ntengas tiempo, vuelve a visitarme.")
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
/*< 15>*/ 							printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080d01>¿Podrías limpiar esto un poco?\nLo siento, es que no soporto limpiar...\n\n\n<0x10009:0x000a0900>Te pagaré por el trabajo, claro.\n[1-]Trato\nhecho[2]No, gracias")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000a0d07>¡Estupendo! ¡Genial! Sabía que\nno me fallarías, <heroname>.\n\n\n<0x10009:0x00080904>¿Dónde habré metido la escoba?\nNo me acuerdo ni de dónde la puse...\n\n\n<0x10009:0x00090900>Bueno, lo único que tienes que hacer\nes <color red<quitar el polvo>coloroff>, no te pido más.\n\n\n<0x10009:0x00010900>No me importa cómo lo hagas, por mí\nte puedes poner a soplar si quieres.\nLo importante es que <color red<lo quites todo>coloroff>.\n\n<0x10009:0x00080902>Intenta hacerlo cuanto antes,\n¿de acuerdo? ¡Y muchas gracias!")
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
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0001090a>Vaya, <heroname>, ¡y yo que\ncreía que ibas a ayudarme!...")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00080d01>Hola, <heroname>.\n¿Cómo estás?\n\n\n<0x10009:0x00010900>¿Te importaría hacer un poco de\nlimpieza por mí? ¡Limpiar no es lo mío,\nla verdad!...\n<0x10009:0x000a0900>Te pienso pagar, por supuesto.\n\n[1-]Trato\nhecho[2]No, gracias")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Hola, <heroname>.\n¿Cómo estás?\n\n\n<0x10009:0x00080900>Me gustaría hablar contigo de una cosa.\nVerás, es que la casa está hecha una\nporquería... \n\n<0x10009:0x00090900>Cocu siempre me dice que debería\nlimpiarla, ¡pero es que me aburre\nmuchísimo! Nunca tengo ganas\nde hacerlo.\n<0x10009:0x00080900>Así que he pensado que quizá a ti\nno te importaría limpiarla por mí.\nTe pagaría, por supuesto.\n[1-]Trato\nhecho[2]Lo siento")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000002>Ya que son compañeros de clase, espero\nque cuides bien a mi Cocu, ¿eh?\n\n\nNo se parece en nada a mí, así que\ntampoco debería preocuparme mucho.\n[1-]Vaya casa...[2-]Ejem...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00010909>Ya, bueno, es verdad...\n¿Cómo se ha podido ensuciar tanto?\n\n\n<0x10009:0x000a090a>Me da tanta pereza arreglar la casa...\nOjalá encontrara a alguien que me\nhiciera el favor de limpiar el polvo\npor mí.")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010904>¿Qué pasa?\nParece que quieres decirme algo...")
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000d01>Hola, <heroname>. ¿Cómo estás?\n\n\n\n<0x10009:0x000a0900>A ver si algún día me cuentas qué tal\nle va a mi Cocu en la academia.")
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
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 1, line: 24 */ "¡Ya hemos hablado mil veces de esto,\nmamá!")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	wait_frames(30)
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	wait_frames(30)
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "Cocu, tranquilízate, por favor.\nNo hace falta que te pongas así.")
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 26 */ "¡Claro que me pongo así!\n\n\n\n¡Me he dado cuenta de que has estado\n<color red<pagando a alguien>coloroff> para que limpie de\nvez en cuando!\n\n¡Te había dado ese dinero para\nque fueras a comprar el pan!\nMamá, ¿es que no te das cuenta?...\n\n¡Si sigues malgastando así las rupias,\nno me alcanzará el dinero para \npagarme la academia de caballeros!\n\n¡No me busqué el trabajo de vigilante\nnocturno para que te gastes el dinero\nen vivir sin hacer nada!\n\n¡Que sea la última vez!... ¡Si no cambias\nde actitud, vamos a tener problemas!\n")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	wait_frames(1)
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	wait_frames(90)
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	wait_frames(30)
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Oh, hola, <heroname>...\nEs un poco tarde, ¿no? ¿Qué pasa?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x120b1100>Tú... no habrás escuchado nada, ¿no?\nNo, no creo que te hayas enterado...\n[1-]¿De qué?[2-]Lo siento,\npero...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x12011100>Nada... olvídalo.\n\n\n\n<0x10009:0x12080400>Bueno, tengo que hacer la patrulla\notra vez. Ten mucho cuidado si vas\na andar por la calle a estas horas,\n¿entendido?")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x12011100>¡Entonces lo has oído todo!\n\n\n\n<0x10009:0x120f1100>Es verdad... Estoy patrullando durante\nel turno de noche para ganar un poco\nde dinero extra.\n\n<0x10009:0x12081100>¡Y no me importa si no te parece bien!\nPuedes reírte todo lo que quieras...\n¡Pero no está nada bien eso de\nescuchar conversaciones ajenas!\n<0x10009:0x120c0c00>Así que tú tampoco puedes ir dando\nlecciones a la gente, ¿no crees?... \nBueno, hagamos como si nada de esto\nhubiera ocurrido, ¿de acuerdo?")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00101100>Mmm, ahora que lo pienso...<pause 30> ¿Son\nimaginaciones mías, o últimamente\ntodos los monstruos de Neburia han\ndesaparecido?...\n<0x10009:0x00ffff00>¿Qué habrá pasado? Todo esto es muy\nraro... En fin, ¡lo importante es que\nhemos vuelto a recuperar la paz!")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "¡Hola, <heroname>!\nLas calles son peligrosas de noche,\nándate con cuidado.\n\n<0x10009:0x00110c09>Ah, y sobre el asunto de mi mamá...\n¡no se lo cuentes a nadie! ¿Entendido?")
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
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "Qué vergüenza... No tendrías que\nhaber visto una escena así.\n\n\n<0x10009:0x000f1100>Es humillante... pero lo hago por\nmi mamá. No le gusta trabajar\ny ya no sé qué hacer.\n\n<0x10009:0x00080c0b>Pero bueno, ya me las arreglaré,\nno te preocupes por mí.\n\n\n<0x10009:0x00011100>Aunque aún no sé quién accedió\na limpiarle la casa...\n\n\n<0x10009:0x00080c16>Pche... ¿Pero qué se cree esa gente?\n¿Por qué no se ocupan de sus cosas\ny dejan a los demás en paz?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "Hola, <heroname>.\n¡Tienes ante ti al protector de la paz\nde Neburia!\n\n<0x10009:0x000c0400>¡Quiero que este sea el lugar más\nseguro del mundo y que todos podamos\nvivir en paz y armonía!\n\n<0x10009:0x00010c52>Este...<pause 30>\n¿Por qué me miras así?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "¡Ay, <heroname>, compañero!...\nAlgún día entenderás lo que significa\nser un caballero, ¡ya verás!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "¡Hola, <heroname>!\nNo es muy seguro salir de noche por\nahí. ¡Ándate con cuidado, compañero!\n\n<0x10009:0x000b0400>Esta es mi ruta de patrulla. Me ocupo\nde hacer el turno de noche.\n\n\n<0x10009:0x00080404>Al caer la noche, los monstruos salen\nde sus escondrijos y la zona se vuelve\nbastante peligrosa...\n\n¡Pero el deber de un caballero\nes proteger a los ciudadanos!\n\n[1-]¡Eres\ngenial![2-]¿Y pagan\nbien?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00090c09>¡¿Pero qué dices?! ¡Esta tarea\nrepresenta la esencia de lo que\nsignifica ser un aprendiz de\ncaballero!\nEsto no se hace para recibir elogios...\nMírame a mí, por ejemplo. Lo único\nque necesito es la sonrisa de la gente,\nasí ya me siento pagado.\n<0x10009:0x00080400>¡Eso es ser un verdadero caballero!\n<0x10009:0x00000005>¡Algún día lo entenderás!")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000c0c17>¡Pero bueno, <heroname>!\n¿Tú por qué decidiste hacerte\ncaballero?\n\n¿Para hacerte rico, acaso?\n¡Es un gran error! ¡El dinero puede\nser tu perdición, compañero!\n\n<0x10009:0x00080405>¡Mírame a mí! Las rupias me dan igual,\nme basta con ver feliz a la gente.\n¡Esa es la actitud de los caballeros!")
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
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000009>¡Pero bueno!... ¡Mira lo que has hecho!\n¡Has destrozado mis antigüedades!\n\n\n¡Haz el favor de tener más cuidado\ny no romperme cosas, niño! O si no...")
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000007>¡Las antigüedades son mi pasión!\nTodo lo que hay en mi casa es\ntremendamente valioso...\n\n¡Así que no rompas nada!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x1f00000a>¡¡¡SERÁ... POSIBLE...!!!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x1f0a0300>¡Tú otra vez!\n¡¿Pero qué te he hecho yo para que\nme tengas tanta manía, niño?!")
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
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0, line: 50 */ "¡Y ahora resulta que no tienes ni una\nrupia! ¡Es intolerable!\n\n\n¡No puedes ir por ahí rompiendo\nlas cosas de la gente y luego no\npagarles porque no llevas dinero!\n¡Vamos, lárgate de aquí ahora mismo!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "¡¿Será posible?!... ¡Pero si no tienes ni\nuna sola rupia, niño!\n\n\n¡¿Cómo puedes atreverte a romper\nlas cosas a la gente y luego no tener\ndinero para pagar?! \n\nGrrr, no importa... ¡Lárgate de aquí,\nno quiero ni verte!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x1f090300>¡Cómo se puede ser tan torpe!\nMis preciosas antigüedades...")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x1f090300>¡Mira lo que has hecho!\n¡Has roto mis antigüedades!\n\n\n¡Exijo que me pagues todo lo que\nhas roto!\n\n\n<0x10009:0x1f0b0700>A ver, eso era muy caro...\n¡Con <color red<unas >coloroff><color red<20 rupias >coloroff>estaremos en paz!\n\n\n<0x10009:0x1f010305>¡Y no me mires así!\n¡¿Insinúas que estoy aprovechando\npara inflar el precio?!\n\n<0x10009:0x1f090309>¡Serás impertinente!\nYo sé lo que valen mis piezas\nde colección mejor que nadie.\n\n¡Y tú me vas a pagar hasta la última\nrupia! ¿Has entendido?")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x1f0a0300>¡Si esto se repite, pienso tomar\nmedidas! ¡Estás avisado!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "¡¿Será posible?!... ¡Pero si no tienes ni\nuna sola rupia, niño!\n\n\n¡¿Cómo puedes atreverte a romper\nlas cosas a la gente y luego no tener\ndinero para pagar?! \n\nGrrr, no importa... ¡Lárgate de aquí,\nno quiero ni verte!")
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
/*<259>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	wait_frames(10)
/*<260>*/ 	changeScene(0, 0) // 
          }

