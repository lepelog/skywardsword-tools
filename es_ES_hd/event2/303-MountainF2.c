          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("¡Fay, hermosura! ¿Has visto lo que\nacabo de hacer?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf("¡Menudo calor, ¿no?! Aunque, gracias\na mi tecnología punta, a mí, plin.")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x0B\x04\x00r¡Ey! ¡¿Adónde vas, hombre?! Si tienes\ncosas que hacer, aquí te espero. ¡Pero\ndate prisa!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf("¡Dame un toque la próxima vez que\nnecesites que te eche una mano, guapa!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf("¡Oooye! ¡Me parece a mí que te estás\ndesviando! ¡Céntrate un poco y guíame\nen condiciones, hombre!")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf("\x0E\x01\x0B\x04\x00r¡So... socorro! ¡Me están dando\nde lo lindo! ¡Tienes que ayudarme,\nrápido!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("Confirmo que las llamas que\nobstaculizaban el paso se\nhan extinguido. Recomiendo\ncontinuar la marcha.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Ya falta poco, ¿no?\n¡Venga, venga, date prisa!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("\x0E\x01\x0B\x04\x00r¡Oye, tú, haz algo! ¡Pero deprisa!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Bienvenido, \x0E\x01\x12\x04\x00\x04amo Link.\n\n\n\nGracias al poder de los <y<pendientes\nignífugos>> que el \x0E\x01\x12\x04\x00\x04amo acaba de\nobtener, confirmo la posibilidad\nde transitar por la zona candente.\nPor tanto, recomiendo proseguir\nla búsqueda de la <r<llama sagrada>>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CD¡Uaaah!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x05\x04K\x00Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo.\nNos encontramos en las cercanías\ndel cráter del <b<volcán de Eldin>>, justo\nen la cima.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf("\x0E\x01\x09\x04\x11\x801¡Hola, chaval! ¿Les has dado ya\nuna lección a esos <r<tipos de los\nescudos gigantes>>?\n\n\x0E\x01\x09\x04ÿ\xFF00Pues recuerda: destroza sus escudos\nsi son de madera, escálalos si son\nde hierro y repele las estocadas\nque te propinen con sus lanzas.\n¡Con eso bastará para acabar con ellos!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf("Ya veo que <r<esos tipos de los escudos\ngigantes >>te lo siguen poniendo difícil,\n¿no?\n\n\x0E\x01\x09\x04\x15\x80B¿Pues qué mejor que la <r<última y más\nvaliosa información secreta>>? ¡Después\nde oírla, seguro que acabas con ellos\nen un pispás!")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF09Pero supongo que ya sabes que te va\na costar... cómo era... ¡Ah, sí! Di<pause0A>ne<pause0A>ri<pause0A>to.<pause0A>\n<r<50 rupias>>, ni más ni menos.[1]¡Vale![2-]Olvídalo")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf("\x0E\x01\x09\x04\x11\x80B¡Así me gusta, chaval! ¡Ya veo que\nno escatimas en gastos cuando se trata\nde obtener la mejor información!\n\n\x0E\x01\x09\x04\x14\x1200Uno tiene que andarse con mil ojos,\nque a la mínima que te descuidas\nte tima cualquiera... ¡hay mucho\ndesalmado suelto!")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf("\x0E\x01\x09\x04ÿ\xFF00Pues bien, vamos con la última y\nmás valiosa información. ¿Has visto\nlo grandes que son los escudos de\nesos tipos? ¡Parecen muros!\n\x0E\x01\x09\x04\x11\x800¿Y qué crees que pasaría si te lanzases\ncorriendo contra un muro?\n\n\n\x0E\x01\x09\x04ÿ\xFF09Je, je... ¡pues tendrás que descubrirlo\npor ti mismo! ¡Verás qué divertido!\n\n\n\x0E\x01\x09\x04\x11\x800Pues nada, ¡que se vayan preparando\nesos monstruos! ¡Ánimo, y gracias\npor las rupias!")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf("\x0E\x01\x09\x04\x14\x1215¡Oye, chaval, no me engañes!\n¡Sin dinero no hay información!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Así que ya sabes, <r<50 rupias >>o este\nmoguma será una tumba.")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf("\x0E\x01\x09\x04\x14\x1215¡Pero serás...! ¡No se puede escatimar\ncon estas cosas, chaval! ¡Son solo\n<r<50 rupias>>!\n\n\x0E\x01\x09\x04ÿ\xFF00Bah, no importa. Pero si cambias de\nidea, ya sabes dónde encontrarme.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf("Ya veo que <r<esos tipos de los escudos\ngigantes >>te lo siguen poniendo difícil,\n¿no?\n\n\x0E\x01\x09\x04\x15\x80BPues, si te interesa, tengo <r<más\n>><r<información secreta >>privilegiada.\n¡Te vendría de perlas!")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF09Aunque, como siempre... te va a costar\ndi<pause0A>ne<pause0A>ri<pause0A>to.<pause0A> <r<30 rupias>>, exactamente.\n¿Hay trato?[1]¡Vale![2-]Olvídalo")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf("\x0E\x01\x09\x04\x11\x808¡Je, je! ¡Qué desprendido eres, chaval!\nEso me gusta, así que abre bien\nlas orejotas...\n\n\x0E\x01\x09\x04ÿ\xFF00Te habrás dado cuenta de que esos tipos\nmanejan una lanza bien larga, ¿no?\nSi te enganchan con ella, estás perdido.\n\nSin embargo, es posible <r<repelerla >>y\ncontratacar...<pause0F> \x0E\x01\x09\x04\x11\x800¿Qué te parece?<pause0F>[1]¡No sabía![2]Ya lo sabía")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf("\x0E\x01\x09\x04\x11\x80B¿Lo ves? No te imaginas lo que\nme costó conseguir esa información.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Pero todavía me quedan secretos\npor desvelar...<pause14> ¿Te los cuento por\n<r<50 rupias>>?[1]¡Vale![2-]Ni hablar")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf("\x0E\x01\x09\x04\x12\xE04¡¿Pero qué...?! ¡No es posible!\n¿Cómo podías conocer un secreto\ncomo este?\n\n\x0E\x01\x09\x04ÿ\xFF00Pero bueno, qué le vamos a hacer.\nEso sí, la información que me queda\nes mucho mejor, dónde va a parar...\n¡Y por solo <r<50 rupias>>![1]¡Adelante![2-]Olvídalo")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x14\x1215¡Oye, oye! No tienes rupias\nsuficientes, así que nanay.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Cuando tengas las <r<30 rupias>>,\nya hablaremos. ¡Y ni una menos!")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x14\x1215¡¿Pero qué...?! ¿Será rata el tío?\n¡Por unas míseras <r<30 rupias >>de nada!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Bueno, tú sabrás. Si cambias de idea,\nya sabes dónde estoy.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf("<r<Esos tipos de los escudos gigantes\n>>te lo siguen poniendo difícil, ¿no?\n\n\n\x0E\x01\x09\x04\x15\x80BPues por ser tú te daré <r<información\nsecreta >>privilegiada. ¡Seguro que\nte resulta muy útil!")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF09Aunque, claro... te va a costar di<pause0A>ne<pause0A>ri<pause0A>to.\n<r<30 rupias>>, exactamente. ¿Hay trato?[1]¡Vale![2-]Olvídalo")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf("\x0E\x01\x09\x04\x11\x809¡Je, je, je! ¡Tú sí que sabes! Pero no\nse te ocurra contárselo a nadie más,\n¿de acuerdo? Por lo de que es secreto\ny eso...\n\x0E\x01\x09\x04ÿ\xFF00Verás, en realidad...<pause14> ¡el escudo de esos\ntipos se puede destruir con la espada!\nQué pedazo de información, ¿eh?\n\nSin embargo, los escudos reforzados\nde hierro no se pueden romper, ¡así\nque ándate con mucho ojo![1]¡Genial![2]¿Ya está?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf("\x0E\x01\x09\x04\x15\x90BJe, je, je... ¡pero aún hay más, chaval!\n¿Qué me dices? ¿Quieres que te cuente\ntodo lo que sé?\n\n\x0E\x01\x09\x04ÿ\xFF00Déjame pensar...<pause14> Venga, ¡suelta otras\n<r<30 rupias>> y abre bien las orejas![1]¡Vale![2-]¡Ni hablar!")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf("¡¿Pe... pero qué?! ¡Vamos, cualquiera\ndiría que ya sabías lo que te he contado!\n\n\n\x0E\x01\x09\x04\x15\x809¿Qué te pasa? ¿Me estás poniendo\na prueba, o algo? Pues si quieres\nmás información, ¡apoquina otras\n<r<30 rupias>>![1]¡Toma![2-]¡Ni hablar!")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf("\x0E\x01\x09\x04\x14\x1215¡Oye, oye! No tienes rupias\nsuficientes, así que nanay.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Cuando tengas las <r<30 rupias>>,\nya hablaremos. ¡Y ni una menos!")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x14\x1215¡¿Pero qué...?! ¿Será rata el tío?\n¡Por unas míseras <r<30 rupias >>de nada!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Bueno, tú sabrás. Si cambias de idea,\nya sabes dónde estoy.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01¿Qué, tomándote un descanso?\nEs normal que estés cansado\nde luchar con tanto monstruo...\n\n\x0E\x01\x09\x04\x11\x900Por cierto, el <r<tipo ese del escudo\ngigante >>de ahí delante parece\nbastante duro, ¿no?\n\n\x0E\x01\x09\x04\x15\x80BPues por ser tú te voy a dar una\n<r<información secreta >>que te será\nmuy útil, chaval.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF09Aunque, claro... te va a costar di<pause0A>ne<pause0A>ri<pause0A>to.<pause0A>\n<r<30 rupias>>, exactamente. ¿Hay trato?[1]¡Vale![2-]Olvídalo")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf("\x0E\x01\x05\x04Z\x00Fallo... total... del sistema... ¡Piii!\nY todo... por tu culpa... ¡Piii!\nQue lo sepas...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x05\x04Z\x00La <r<temperatura >>en esta zona\nes <r<extremadamente elevada>>, pero\ngracias al poder de los <y<pendientes\nignífugos>>, el \x0E\x01\x12\x04\x00\x01amo podrá resistirla.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf("Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo.\nEn esta zona no detecto la presencia\nde <r<agua>>.\n\nPara activar este mecanismo, hará\nfalta encontrar un gran recipiente,\npero antes conviene buscar el <r<<pling>agua>>.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf("\x0E\x01\x12\x04\x00d¡Eh! ¡Sí, es a ti! ¡Yo no puedo subir por\nahí!... ¡Vas a tener que bajar y guiarme\ncomo es debido!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf("\x0E\x01\x05\x04Z\x00Calculo un 90% de probabilidades\nde que la última <r<llama sagrada>>\nse encuentre más adelante. Sugiero\nproseguir su búsqueda.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("\x0E\x01\x0B\x04\x00r¡No... no me abandones!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf("Confirmo la avería del robot. Sugiero\nregresar para repararlo.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf("Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo.\nEl robot aguarda en la base del\nvolcán.\n\nRecomiendo volver allí desde\nCeléstea para guiar al robot\nhasta este lugar.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x0B\x04\x00r¡Sé que me has perdido de vista, no\nte hagas el loco! ¡Vamos, abre el <r<mapa\n>>con \x0E\x02\x04\x02\x2CD y ven a buscarme ipso facto!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf("¡A ver si esta vez me proteges\ncomo es debido!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf("¡Aligera, amo verdoso!\n¡Yo iré detrás de ti!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf("\x0E\x01\x0B\x04\x00r¡Oooye! ¡Esto está plagado de monstruos!\n¡¿A qué esperas para hacer algo?!")
          	  case 1:
/*<197>*/ 		printf("\x0E\x01\x0B\x04\x00r¡Uaaah! ¡Socorro! ¡Ayúdame, deprisa!\n¡Me van a machacar!")
          	  case 2:
/*<198>*/ 		printf("\x0E\x01\x0B\x04\x00r¡Aaay! ¡Ya están aquí, ya están aquí!\n¡Que vienen los monstruos!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf("¡Dame un toque la próxima vez que\nnecesites que te eche una mano, guapa!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf("Me huele a mí que en esta montaña\ntodavía queda algún <y<cubo divino>>.\n¡Abre bien los ojos!")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09¡Hombre, volvemos a encontrarnos!\n¿Cómo te va, amigo?\n\n\nEn cuanto escuché el rumor de que\npor esta zona habían visto uno de los\n<y<cubos divinos>>, vine corriendo desde\nmuy lejos.\nNo sé cuántos habrás encontrado tú ya,\npero presiento que tiene que haber\nalgunos más escondidos en otras\nregiones.\n\x0E\x01\x09\x04\x18\x17FFSi te apetece y tienes tiempo, ¿por qué\nno intentas encontrarlos?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x0B\x04\x00r¡Oooye! ¡¿Cuándo vas a venir\na buscarme?! Si no sabes dónde\nestoy, abre el <r<mapa >>con \x0E\x02\x04\x02\x2CD.")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x0B\x04\x00r¡Ven ahora mismo a buscarme!\n¡Y, si no sabes dónde estoy,\nabre el <r<mapa >>con \x0E\x02\x04\x02\x2CD!")
          	  case 2:
/*< 76>*/ 		printf("\x0E\x01\x0B\x04\x00r¡¿Pero qué estás haciendo?!\n¡Ven aquí echando tuercas!\n¡Y, si no sabes dónde estoy,\nabre el <r<mapa >>con \x0E\x02\x04\x02\x2CD!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf("")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf("\x0E\x01\x12\x04\x00dOye, ¿qué te pasa? ¿Por qué pones\nesa cara? ¿No era aquí donde había\nque traer la marmita?\n\n<pause0A>¡¿Cómo?! ¡¿Hasta la cima?!<pause0F> Hasta la\ncima dice el muy... ¡Haber avisado\nantes, que esto pesa lo suyo!\n\nSerá...<pause0F>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf("\x0E\x01\x12\x04\x00dY con la pila de monstruos que hay\npor aquí...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf("\x0E\x01\x12\x04\x00dSi yo los monstruos me los paso\npor las tuercas... ¡pero no sabes\nlo difícil que es llevar esta marmita!")
/*<113>*/ 		printf("\x0E\x01\x12\x04\x00dPues te ha tocado, amo verdoso.\n¡Vas a tener que emplearte a fondo!\n\n\nYo te seguiré por detrás, así que\nme harás de escudo.")
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00d¡No dejes que esos monstruos\nme pongan ni un dedo encima!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo.\nEl poder de la espada ha aumentado\ny ya es posible <r<rastrear >><y<cubos divinos>>.\n\nPor tanto, los he añadido como\nobjetivo de rastreo.\n\n\n<pling>Aconsejo aprovechar esta opción.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf("Solo de pensar el palizón que te has\npegado para llegar hasta aquí y no\npoder entrar...\n\n\x0E\x01\x09\x04\x15\xDFF<pause14>Pero tengo la impresión de que se\nme olvida algo muy importante...\n\n\nAlgo que me dijo mi colega...<pause14>\n\x0E\x01\x09\x04\x00\x04¡Ay, no logro acordarme!\n\n\n\x0E\x01\x09\x04\x09\x8FFBah, da igual... En fin, si lo que\nnecesitas es mucha agua, yo en\ntu lugar iría al <r<lago Faroria>>.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf("\x0E\x01\x09\x04\x11\x801¡Anda, tú también has venido hasta\naquí! ¿Sigues buscando a esa amiga\ntuya?\n\n\x0E\x01\x09\x04\x09\x8FFEn cuanto me enteré de que en esta\nzona había unas ruinas magníficas,\n¡vine corriendo a por los tesoros!\n\n\x0E\x01\x09\x04\x15\xDFFPero hasta ahora no he visto nada\nde nada. ¿Tú has encontrado algo\ninteresante?\n[1]¿Te cuento?[2]No hablaré")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x11\x900¡Pues claro! ¿Para qué están los\ncolegas, si no? ¡Que no haya secretos\nentre nosotros!")
          			flw_122:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x09\x80E¿Cómo dices? ¿Que las llamas esas\nno te dejan entrar? ¿Y por qué no\nles echas agua?\n\n\x0E\x01\x09\x04\x15\x800Ajá... Así que necesitas mucha agua...\nComprendo.<pause14> La de aquí no basta, ¿no?\n\n\n\x0E\x01\x09\x04\x09\x8FFAhora que lo dices, el agua de aquí\nes igual que la que hay en el famoso\n<r<lago Faroria>><pling>, aunque que se encuentra\nbastante lejos.\n\x0E\x01\x09\x04\x11\x8FFUn colega mío fue a buscar tesoros\nal <b<bosque de Farone>> y se ayudó de\nlos canales para volver a casa.\n\n\x0E\x01\x09\x04\x09\x8FFSegún me dijo, no había visto un\nlago tan grande en su vida.\nYo que tú iría allí, seguro que\nhay agua más que suficiente.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf("\x0E\x01\x09\x04\x14\x120A¡¿Pero qué...?! ¡No seas así, hombre!\n¿Es que vas a dejar tirado a este pobre\nmoguma que tanto te quiere?")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Saciar mi sed es la ofrenda\nque sirve para abrir la senda.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x0B\x04\x00r¡Llevo esperando una eternidad!\n¡Anda, vámonos, que ya te vale!")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf("Tengo información para mi \x0E\x01\x12\x04\x00\x0Bamo.\nHe de llamar la atención sobre\nel hecho de que las llamas que\nbloquean el paso no se han apagado.\n¿Desea el \x0E\x01\x12\x04\x00\x01amo que registre el\nrecipiente donde se encontraba la\n<b<dragona del agua>> como objetivo\nde <g<rastreo>>?\n[1]¡Adelante![2-]Aún no")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf("\x0E\x01\x12\x04\x00\x05Entendido, amo. Procedo a registrar\nel recipiente donde se hallaba la\n<b<dragona del <pling>agua >>como objetivo\nde <g<rastreo>>.")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf("\x0E\x01\x12\x04\x00\x05Como ordene mi amo.\nAplazaré el registro para otra ocasión.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf("Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo:\nsugiero hacer caso al <b<moguma>>\ny poner rumbo al <r<lago Faroria>>. \n\nRespecto al método para transportar\nel agua desde el lago...<pause0F> Lo mejor será\npreguntarle a la <pling><r<dragona del agua>>.\n\nCalculo que podríamos utilizar para\ntal fin la <r<marmita>> en la que se bañaba\npara recuperarse de sus heridas.")
/*<296>*/ 		printf("¿Desea el \x0E\x01\x12\x04\x00\x01amo que registre el\nrecipiente como objetivo de <r<rastreo>>?\n[1]¡Sí![2-]Todavía no")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09¡Hola! ¿Tú también has venido\nen busca de los <y<cubos divinos>>?\n¡Pues ya tiene mérito que hayas\nlogrado cruzar ese horno!\n\x0E\x01\x09\x04ÿ\xFF00A mí el calor no me afecta en absoluto,\npero atravesar las llamas es demasiado\nhasta para un goron como yo.")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x18\x17FF¿Crees que podrías hacer algo\npara apagar el fuego?")
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09¡Hombre, volvemos a encontrarnos!\n¿Cómo te va, amigo?\n\n\n\x0E\x01\x09\x04\x16\xBFFEn cuanto escuché el rumor de que\npor esta zona habían visto uno de los\n<y<cubos divinos>>, vine corriendo desde\nmuy lejos.\n\x0E\x01\x09\x04\x00\xB00Mi olfato me dice que tiene que haber\nmás por aquí, estoy casi seguro. Pero\na ver quién es el goron que cruza estas\nllamas.")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x0B\x04\x00r¡¿Pero qué...?! ¡Por todas mis tuercas!\n¡¿A qué estás jugando?!")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x0C\x405¿Y qué mejor lugar para disfrutar\nde la jubilación que en las alturas,\ncontemplando bellos paisajes?\n\n\x0E\x01\x09\x04\x0C\xDFFLlevo toda la vida enterrado bajo\ntierra, pero lo que más me gusta\nen realidad es admirar el firmamento.\n\n\x0E\x01\x09\x04\x09\x906Si pudiese volver a nacer, me gustaría\nser un pájaro para revolotear todo\nel día por el ancho cielo.")
          	  case 1:
/*<149>*/ 		printf("\x0E\x01\x09\x04\x0B\xC07¡Oye, tú eres el de antes!\n\n\n\n\x0E\x01\x09\x04\x0B\x506¡Juo, juo, juo! ¿Cómo te va con los\nmaravillosos guantes que te regalé?\n\n\n¿Qué? ¿Que cómo me va a mí?\nPues verás...\n\n\n\x0E\x01\x09\x04\x0C\x405Desde que nos vimos por última vez,\nhe estado buscando otros lugares\ndonde haya tesoros, pero la suerte\nno me acompaña.\nSi te digo la verdad, ya me estoy\ncansando de buscar tanto para\nnada, y encima con este calor.\n\n\x0E\x01\x09\x04\x09\x908Creo que me voy a plantear en serio\nlo de la jubilación para empezar\na disfrutar de una vida más relajada,\nque ya toca.")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Si giras a la derecha justo al salir\nde aquí, encontrarás un <r<manantial>>.\nMmm... pero no sé cómo te las vas\na ingeniar.")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf("¿«Saciar mi sed»? Ahora que lo pienso,\nsaliendo de aquí, al fondo a la derecha,\nse llega al exterior.\n\nRecuerdo que allí había un pequeño\n<r<manantial>><pling> de agua fresquísima.\n\n\n\x0E\x01\x09\x04\x18\x1705Pero ¿cómo vas a traerla hasta aquí?\nPorque esa rana tan rara no parece que\nte vaya a echar una mano, me temo...\n<pause0F>¿Cómo lo ves?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x18\x17FF¿Crees que podrías hacer algo\npara apagar el fuego?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x0B\x04\x00r¡Oye! ¿Estás ciego o qué? ¡Como sigas\nasí, voy derechito al desguace!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x17\x1908¡Ahí va! ¡Las llamas se han apagado!\n¡Ahora ya podemos pasar!")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo, el robot está emitiendo señales\nde alerta desde el volcán. Sugiero\nregresar cuanto antes.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x1A\x30DJefe... Yo... ¡prometo ser tu más\ndigno sucesor!\n\n\n¡Cuida de nosotros desde allí arriba!")
          		  case 1:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x1C\x180F¡O... oye! ¡El jefe ha salido escopetado\nsin decir ni pío! ¡¿Tú sabes adónde\nha ido?!\n[1]A Celéstea[2]Al cielo")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011¿A Celéstea?\n\n\n\n\x0E\x01\x09\x04\x1B\x407¿En serio?<pause14> Lo cierto es que al jefe\nsiempre le gustaron las alturas...\n\n\n¡Seguro que allí arriba habrá tantos\ntesoros que se pasará el día entero\nbuscándolos!")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011¿Que... que ahora está en el cielo?\n\n\n\n\x0E\x01\x09\x04\x1B\x2207Vaya...<pause14> Es que ha sido tan repentino...\n\n\n\nAunque supongo que tarde o temprano\na todos nos llega la hora, ¿no?")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf("\x0E\x01\x09\x04\x1B\x2207Se va al cielo y vuelve cuando\nse le antoja... ¡Está claro que\nel jefe es único!")
          				  case 1:
/*<174>*/ 					printf("\x0E\x01\x09\x04\x1A\x2011¡¿Pe... pero qué...?! ¡¿E... el jefe\nha vuelto?!\n\n\n\x0E\x01\x09\x04\x1B\x2207Así que puede ir y volver al cielo\ncuando quiera... ¡Es increíble!")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf("\x0E\x01\x09\x04\x00\x15Así que quiere una vida más relajada...\nPues nada, si lo ha dicho el jefe, habrá\nque tratar de ayudarle.")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf("\x0E\x01\x09\x04\x1A\x2001¡Ah, eres tú! ¿Has ido ya a ver al jefe?\n¿Cómo lo has visto?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011¿Cómo dices? ¿Que está\npensando en la jubilación?\n\n\n\x0E\x01\x09\x04\x00ÿ¿Y eso qué es? ¿Algún tipo de tesoro\npoco común y cada vez más\ninalcanzable?\n\n\x0E\x01\x09\x04\x1B\x1E15Jamás había oído mencionar nada\nparecido. Qué cosa más rara...\n\n\nPero si lo ha dicho el jefe, tendremos\nque hacer todo lo posible para ayudar,\n¿no crees?")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf("\x0E\x01\x09\x04\x1B\x2201¡Buenas de nuevo, chaval!\n¿Qué tal te va?\n\n\n¿Que cómo me va a mí? ¡Pues ya ves,\nmejor imposible!\n\n\n\x0E\x01\x09\x04\x00\x02Pero estoy preocupado por el jefe.\nDesde que volvió de aquellas ruinas\nno tiene buen aspecto.\n\n\x0E\x01\x09\x04\x1B\x22FFAntes me pareció oírte hablando con él.\n¿Cómo lo has visto?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011¿Qué? ¿La jubilación?\n\n\n\n\x0E\x01\x09\x04\x00ÿ¿Y eso qué rayos es? ¿Una especie\nde tesoro?\n\n\n\x0E\x01\x09\x04\x1B\x1E15Jamás había oído hablar de algo así...\n\n\n\nPero si lo ha dicho el jefe, bien dicho\nestá, así que tendremos que hacer todo\nlo posible por ayudar.")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x1B\x50AEl <b<jefe >>tiene que andar por aquí cerca.\n¡Seguro que le haría mucha ilusión\nvolver a verte!\n\nQuién sabe, quizá se anime al ver\na un viejo amigo.")
          					  case 1:
/*<156>*/ 						printf("\x0E\x01\x09\x04\x1B\x2201¡Vaya, pero si eres tú! ¿Cómo te va,\nchaval?\n\n\n¿Que cómo me va a mí? ¡Pues ya lo ves,\nestoy en plena forma!\n\n\n\x0E\x01\x09\x04\x00\x02Al <b<jefe>>, en cambio, lo veo bastante\ndeprimido desde que volvió de esas\nruinas... Está como sin fuerzas.\n\n\x0E\x01\x09\x04\x1B\x230APero bueno, seguro que no es nada,\naunque me gustaría que fueses a verlo.\n¡Igual tú consigues animarlo un poco!")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf("Pues nada, supongo que tendrás\nque volver a hacer el mismo truco\nde antes.")
          	  case 1:
/*< 30>*/ 		printf("\x0E\x01\x09\x04\x16\x1E56Hala, otra vez... Esto empieza\nya a resultar un poco pesado...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00dVaya, ya era hora... Bueno, ¿a qué\nesperas para llevarme a la cumbre\ndel volcán?")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf("\x0E\x01\x09\x04\x1B\x2215Este <b<Platín>>... Parece que lo único\nque le motiva en el mundo es\nbuscar tesoros...")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x1A\x200F¡Hala, si eres tú otra vez!<pause0F>\n\n\n\n\x0E\x01\x09\x04\x1B\x2209Je, je, je... Tranquilo, no pasa nada.\n\n\n\nMi colega descubrió todo el follón\nde las ruinas.\n\n\n\x0E\x01\x09\x04\x1B\x1EFF¡Y a él también lo capturaron! Je, je...\n¡Vaya par de dos estamos hechos!\n\n\n\x0E\x01\x09\x04\x1A\xA12Por cierto... tú no habrás visto por ahí\na <b<Platín>>, ¿no?\n[1]Está allí[2]Pues no")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf("\x0E\x01\x09\x04\x1B\xA12¿En serio? No sabes qué peso me quitas\nde encima, colega.\n\n\nEs que llevaba mucho tiempo sin verlo.\n\n\n\n\x0E\x01\x09\x04\x1B\x160FTemía que le hubiese pasado\nalgo terrible...\n\n\n\x0E\x01\x09\x04\x1B\x16FF¡Siempre se las apaña para meterse\nen líos!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x1B\x2207Ese moguma...<pause14> ¿Otra vez ha vuelto\na irse solo en busca de tesoros?\n\n\nActuar por cuenta propia es muy\npeligroso. Mira que se lo tiene\ndicho nuestro hermano mayor...\n\n\x0E\x01\x09\x04\x1B\x09Qué le vamos a hacer; es el sino\ndel <b<cazador de tesoros>>, no se\npuede evitar.\n\nEn fin, que si ves a <b<Platín >>por ahí,\n¡dile que lo estoy buscando!")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x17\x1908¡Por Goron, lo has vuelto a hacer!\nVenga, no perdamos más tiempo.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00d¡No te olvides de mí! ¡Y recuerda\nque puedes comprobar mi posición\nen el <r<mapa >>con \x0E\x02\x04\x02\x2CD!\x0E\x01\x11\x02\x2CD")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf("\x0E\x01\x09\x04\x0D\x509A ver, a ver... ¿Adónde puedo ir\npara proseguir con mi búsqueda\ndel tesoro?")
          	  case 1:
/*<189>*/ 		printf("\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x0E\x1008¡Oye, chaval! ¡¿Estás bien?!\n\n\n\n\x0E\x01\x09\x04\x11\x110BPor lo que veo, has vuelto a recuperar\ntodas tus cosas. ¡Sabía que lo lograrías!\n\n\nPor cierto...<pause14> ¿Cómo te fue?\n¡¿Encontraste muchos tesoros?!\n[1]¡Muchos![2]Nada...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf("\x0E\x01\x09\x04\x0E\x505¡¿En serio?! ¡Qué pasada!\n\n\n\n\x0E\x01\x09\x04\x0E\x1F0A¡Pero no olvides que el mundo\nes enorme y seguro que quedan\nmillones de tesoros por descubrir!\n\nEso sí, yo no pienso quedarme\naquí parado viendo como te los\nllevas todos. ¡Pienso encontrar\nmás que tú!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf("\x0E\x01\x09\x04\x0E\x40A¡Anda ya! ¿Seguro que no había nada\nde valor? Pues qué mala suerte\nhas tenido, ¿no?\n\n\x0E\x01\x09\x04\x0F\x508¡Bah, tú no te preocupes! ¡El mundo\nes tan grande que todavía quedarán\ncientos de tesoros por todas partes!")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf("Creo que me iré a otro lugar a seguir\ncon mi investigación. ¡Espero que\nvolvamos a vernos muy pronto!")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x18\x1702¿Qué tal? ¿Había algo ahí dentro?\n[1]Trampas[2]Monstruos")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Vaya faena... Pues nada, entonces\ncreo que voy a dejar la búsqueda\nen tus manos, ¿de acuerdo?\n\n\x0E\x01\x09\x04\x08\xBFFYo me iré a otro lugar para continuar\ncon mis investigaciones. ¡Nos vemos!")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Vaya faena... Pues nada, entonces\ncreo que voy a dejar la búsqueda\nen tus manos, ¿de acuerdo?\n\n\x0E\x01\x09\x04\x08\xBFFPor cierto, presiento que muy cerca\nde aquí hay un <y<cubo divino>>.\n\n\nNo suelo equivocarme, así que\nyo en tu lugar exploraría a fondo\nlos alrededores.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x17\x1908¡Oh, magnífico! ¡Eres un genio!\n\n\n\n\x0E\x01\x09\x04\x08\xBFFVenga, te cedo el honor de entrar\ntú primero; ¡deprisa!")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Un <r<recipiente>> lo bastante grande\ncomo para transportar mucha <r<agua>>...\n¿Dónde habrá algo así?")
          				  case 1:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x18\x1707¿Cómo nos las vamos a ingeniar para\ntraer el <r<agua >>suficiente hasta aquí?\nSi al menos tuviésemos un <r<recipiente\ngrande>>...\n\x0E\x01\x09\x04\x16\x1EFFTú que has visitado tantos lugares\ndistintos... ¿No se te viene nada\na la cabeza?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf("¿Tú has visto eso? Me parece\nmuy extraño...\n\n\n\x0E\x01\x09\x04\x17\x1908No puede tratarse de un simple\n<y<cubo divino>>... Lo que haya aquí\nescondido ha de ser algo mucho\n<r<más importante >>que eso.")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf("\x0E\x01\x09\x04\x16\x1EFFEsta vez es un fuego enorme, así que\ncon esa <r<botellita >>no creo que sea\nsuficiente.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf("\x0E\x01\x09\x04\x00\x07Mmm...<pause0F> \x0E\x01\x09\x04\x18\x1700Tú no tendrás por ahí algún\n<r<recipiente lo bastante grande>>,<pling> ¿no?\n\n\n\x0E\x01\x09\x04\x16\x1EFFY además necesitaríamos un buen\nmontón de <r<agua >>para llenarlo.\nSi se te ocurre algo, ya sabes...")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf("¿Quieres que eche el agua ahí encima?\nAh, pues vale, como ordenes...")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, informo de que nos encontramos\nen el volcán de Eldin.\n\n\nConfirmo la posibilidad de utilizar\nel <r<rastreador >>para localizar el umbral\ndel juicio; paso necesario para hallar\nla llama sagrada.")
          }

