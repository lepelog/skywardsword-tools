          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "¡Fay, hermosura! ¿Has visto lo que\nacabo de hacer?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "¡Menudo calor, ¿no?! Aunque, gracias\na mi tecnología punta, a mí, plin.")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<sound 114>¡Ey! ¡¿Adónde vas, hombre?! Si tienes\ncosas que hacer, aquí te espero. ¡Pero\ndate prisa!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "¡Dame un toque la próxima vez que\nnecesites que te eche una mano, guapa!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "¡Oooye! ¡Me parece a mí que te estás\ndesviando! ¡Céntrate un poco y guíame\nen condiciones, hombre!")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<sound 114>¡So... socorro! ¡Me están dando\nde lo lindo! ¡Tienes que ayudarme,\nrápido!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 2, unk: 0, line: 104 */ "Confirmo que las llamas que\nobstaculizaban el paso se\nhan extinguido. Recomiendo\ncontinuar la marcha.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ya falta poco, ¿no?\n¡Venga, venga, date prisa!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<sound 114>¡Oye, tú, haz algo! ¡Pero deprisa!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 2, unk: 0, line: 121 */ "Bienvenido, <0x10012:0x00000004>amo <heroname>.\n\n\n\nGracias al poder de los <color yellow<pendientes\nignífugos>coloroff> que el <0x10012:0x00000004>amo acaba de\nobtener, confirmo la posibilidad\nde transitar por la zona candente.\nPor tanto, recomiendo proseguir\nla búsqueda de la <color red<llama sagrada>coloroff>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10005:0x003c0000><0x10008:0x02cd>¡Uaaah!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "<0x10005:0x004b0000>Tengo información para el <0x10012:0x0000000b>amo.\nNos encontramos en las cercanías\ndel cráter del <color blue<volcán de Eldin>coloroff>, justo\nen la cima.")
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
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00110801>¡Hola, chaval! ¿Les has dado ya\nuna lección a esos <color red<tipos de los\nescudos gigantes>coloroff>?\n\n<0x10009:0x00ffff00>Pues recuerda: destroza sus escudos\nsi son de madera, escálalos si son\nde hierro y repele las estocadas\nque te propinen con sus lanzas.\n¡Con eso bastará para acabar con ellos!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 97 */ "Ya veo que <color red<esos tipos de los escudos\ngigantes >coloroff>te lo siguen poniendo difícil,\n¿no?\n\n<0x10009:0x0015080b>¿Pues qué mejor que la <color red<última y más\nvaliosa información secreta>coloroff>? ¡Después\nde oírla, seguro que acabas con ellos\nen un pispás!")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00ffff09>Pero supongo que ya sabes que te va\na costar... cómo era... ¡Ah, sí! Di<pause 10>ne<pause 10>ri<pause 10>to.<pause 10>\n<color red<50 rupias>coloroff>, ni más ni menos.[1-]¡Vale![2]Olvídalo")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x0011080b>¡Así me gusta, chaval! ¡Ya veo que\nno escatimas en gastos cuando se trata\nde obtener la mejor información!\n\n<0x10009:0x00141200>Uno tiene que andarse con mil ojos,\nque a la mínima que te descuidas\nte tima cualquiera... ¡hay mucho\ndesalmado suelto!")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00ffff00>Pues bien, vamos con la última y\nmás valiosa información. ¿Has visto\nlo grandes que son los escudos de\nesos tipos? ¡Parecen muros!\n<0x10009:0x00110800>¿Y qué crees que pasaría si te lanzases\ncorriendo contra un muro?\n\n\n<0x10009:0x00ffff09>Je, je... ¡pues tendrás que descubrirlo\npor ti mismo! ¡Verás qué divertido!\n\n\n<0x10009:0x00110800>Pues nada, ¡que se vayan preparando\nesos monstruos! ¡Ánimo, y gracias\npor las rupias!")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00141215>¡Oye, chaval, no me engañes!\n¡Sin dinero no hay información!\n\n\n<0x10009:0x00ffff00>Así que ya sabes, <color red<50 rupias >coloroff>o este\nmoguma será una tumba.")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00141215>¡Pero serás...! ¡No se puede escatimar\ncon estas cosas, chaval! ¡Son solo\n<color red<50 rupias>coloroff>!\n\n<0x10009:0x00ffff00>Bah, no importa. Pero si cambias de\nidea, ya sabes dónde encontrarme.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 1, unk: 0, line: 95 */ "Ya veo que <color red<esos tipos de los escudos\ngigantes >coloroff>te lo siguen poniendo difícil,\n¿no?\n\n<0x10009:0x0015080b>Pues, si te interesa, tengo <color red<más\n>coloroff><color red<información secreta >coloroff>privilegiada.\n¡Te vendría de perlas!")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00ffff09>Aunque, como siempre... te va a costar\ndi<pause 10>ne<pause 10>ri<pause 10>to.<pause 10> <color red<30 rupias>coloroff>, exactamente.\n¿Hay trato?[1-]¡Vale![2]Olvídalo")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00110808>¡Je, je! ¡Qué desprendido eres, chaval!\nEso me gusta, así que abre bien\nlas orejotas...\n\n<0x10009:0x00ffff00>Te habrás dado cuenta de que esos tipos\nmanejan una lanza bien larga, ¿no?\nSi te enganchan con ella, estás perdido.\n\nSin embargo, es posible <color red<repelerla >coloroff>y\ncontratacar...<pause 15> <0x10009:0x00110800>¿Qué te parece?<pause 15>[1-]¡No sabía![2-]Ya lo sabía")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0011080b>¿Lo ves? No te imaginas lo que\nme costó conseguir esa información.\n\n\n<0x10009:0x00ffff00>Pero todavía me quedan secretos\npor desvelar...<pause 20> ¿Te los cuento por\n<color red<50 rupias>coloroff>?[1-]¡Vale![2]Ni hablar")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00120e04>¡¿Pero qué...?! ¡No es posible!\n¿Cómo podías conocer un secreto\ncomo este?\n\n<0x10009:0x00ffff00>Pero bueno, qué le vamos a hacer.\nEso sí, la información que me queda\nes mucho mejor, dónde va a parar...\n¡Y por solo <color red<50 rupias>coloroff>![1-]¡Adelante![2]Olvídalo")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>¡Oye, oye! No tienes rupias\nsuficientes, así que nanay.\n\n\n<0x10009:0x00ffff00>Cuando tengas las <color red<30 rupias>coloroff>,\nya hablaremos. ¡Y ni una menos!")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>¡¿Pero qué...?! ¿Será rata el tío?\n¡Por unas míseras <color red<30 rupias >coloroff>de nada!\n\n\n<0x10009:0x00ffff00>Bueno, tú sabrás. Si cambias de idea,\nya sabes dónde estoy.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0, line: 93 */ "<color red<Esos tipos de los escudos gigantes\n>coloroff>te lo siguen poniendo difícil, ¿no?\n\n\n<0x10009:0x0015080b>Pues por ser tú te daré <color red<información\nsecreta >coloroff>privilegiada. ¡Seguro que\nte resulta muy útil!")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00ffff09>Aunque, claro... te va a costar di<pause 10>ne<pause 10>ri<pause 10>to.\n<color red<30 rupias>coloroff>, exactamente. ¿Hay trato?[1-]¡Vale![2]Olvídalo")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00110809>¡Je, je, je! ¡Tú sí que sabes! Pero no\nse te ocurra contárselo a nadie más,\n¿de acuerdo? Por lo de que es secreto\ny eso...\n<0x10009:0x00ffff00>Verás, en realidad...<pause 20> ¡el escudo de esos\ntipos se puede destruir con la espada!\nQué pedazo de información, ¿eh?\n\nSin embargo, los escudos reforzados\nde hierro no se pueden romper, ¡así\nque ándate con mucho ojo![1-]¡Genial![2-]¿Ya está?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x0015090b>Je, je, je... ¡pero aún hay más, chaval!\n¿Qué me dices? ¿Quieres que te cuente\ntodo lo que sé?\n\n<0x10009:0x00ffff00>Déjame pensar...<pause 20> Venga, ¡suelta otras\n<color red<30 rupias>coloroff> y abre bien las orejas![1-]¡Vale![2]¡Ni hablar!")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0, line: 87 */ "¡¿Pe... pero qué?! ¡Vamos, cualquiera\ndiría que ya sabías lo que te he contado!\n\n\n<0x10009:0x00150809>¿Qué te pasa? ¿Me estás poniendo\na prueba, o algo? Pues si quieres\nmás información, ¡apoquina otras\n<color red<30 rupias>coloroff>![1-]¡Toma![2]¡Ni hablar!")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>¡Oye, oye! No tienes rupias\nsuficientes, así que nanay.\n\n\n<0x10009:0x00ffff00>Cuando tengas las <color red<30 rupias>coloroff>,\nya hablaremos. ¡Y ni una menos!")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>¡¿Pero qué...?! ¿Será rata el tío?\n¡Por unas míseras <color red<30 rupias >coloroff>de nada!\n\n\n<0x10009:0x00ffff00>Bueno, tú sabrás. Si cambias de idea,\nya sabes dónde estoy.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>¿Qué, tomándote un descanso?\nEs normal que estés cansado\nde luchar con tanto monstruo...\n\n<0x10009:0x00110900>Por cierto, el <color red<tipo ese del escudo\ngigante >coloroff>de ahí delante parece\nbastante duro, ¿no?\n\n<0x10009:0x0015080b>Pues por ser tú te voy a dar una\n<color red<información secreta >coloroff>que te será\nmuy útil, chaval.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00ffff09>Aunque, claro... te va a costar di<pause 10>ne<pause 10>ri<pause 10>to.<pause 10>\n<color red<30 rupias>coloroff>, exactamente. ¿Hay trato?[1-]¡Vale![2]Olvídalo")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10005:0x005a0000>Fallo... total... del sistema... ¡Piii!\nY todo... por tu culpa... ¡Piii!\nQue lo sepas...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 2, unk: 0, line: 106 */ "<0x10005:0x005a0000>La <color red<temperatura >coloroff>en esta zona\nes <color red<extremadamente elevada>coloroff>, pero\ngracias al poder de los <color yellow<pendientes\nignífugos>coloroff>, el <0x10012:0x00000001>amo podrá resistirla.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 2, unk: 0, line: 122 */ "Tengo información para el <0x10012:0x0000000b>amo.\nEn esta zona no detecto la presencia\nde <color red<agua>coloroff>.\n\nPara activar este mecanismo, hará\nfalta encontrar un gran recipiente,\npero antes conviene buscar el <color red<<sound 4>agua>coloroff>.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10012:0x00000064>¡Eh! ¡Sí, es a ti! ¡Yo no puedo subir por\nahí!... ¡Vas a tener que bajar y guiarme\ncomo es debido!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 2, unk: 0, line: 107 */ "<0x10005:0x005a0000>Calculo un 90% de probabilidades\nde que la última <color red<llama sagrada>coloroff>\nse encuentre más adelante. Sugiero\nproseguir su búsqueda.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "<sound 114>¡No... no me abandones!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 108 */ "Confirmo la avería del robot. Sugiero\nregresar para repararlo.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "Tengo información para el <0x10012:0x0000000b>amo.\nEl robot aguarda en la base del\nvolcán.\n\nRecomiendo volver allí desde\nCeléstea para guiar al robot\nhasta este lugar.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<sound 114>¡Sé que me has perdido de vista, no\nte hagas el loco! ¡Vamos, abre el <color red<mapa\n>coloroff>con (+) y ven a buscarme ipso facto!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "¡A ver si esta vez me proteges\ncomo es debido!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "¡Aligera, amo verdoso!\n¡Yo iré detrás de ti!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<sound 114>¡Oooye! ¡Esto está plagado\nde monstruos! ¡¿A qué esperas\npara hacer algo?!")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<sound 114>¡Uaaah! ¡Socorro! ¡Ayúdame, deprisa!\n¡Me van a machacar!")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<sound 114>¡Aaay! ¡Ya están aquí, ya están aquí!\n¡Que vienen los monstruos!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "¡Dame un toque la próxima vez que\nnecesites que te eche una mano, guapa!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Me huele a mí que en esta montaña\ntodavía queda algún <color yellow<cubo divino>coloroff>.\n¡Abre bien los ojos!")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00151b09>¡Hombre, volvemos a encontrarnos!\n¿Cómo te va, amigo?\n\n\nEn cuanto escuché el rumor de que\npor esta zona habían visto uno de los\n<color yellow<cubos divinos>coloroff>, vine corriendo desde\nmuy lejos.\nNo sé cuántos habrás encontrado tú ya,\npero presiento que tiene que haber\nalgunos más escondidos en otras\nregiones.\n<0x10009:0x001817ff>Si te apetece y tienes tiempo, ¿por qué\nno intentas encontrarlos?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<sound 114>¡Oooye! ¡¿Cuándo vas a venir\na buscarme?! Si no sabes dónde\nestoy, abre el <color red<mapa >coloroff>con (+).")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<sound 114>¡Ven ahora mismo a buscarme!\n¡Y si no sabes dónde estoy,\nabre el <color red<mapa >coloroff>con (+)!")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<sound 114>¡¿Pero qué estás haciendo?!\n¡Ven aquí echando tuercas!\n¡Y si no sabes dónde estoy,\nabre el <color red<mapa >coloroff>con (+)!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10012:0x00000064>Oye, ¿qué te pasa? ¿Por qué pones\nesa cara? ¿No era aquí donde había\nque traer la marmita?\n\n<pause 10>¡¿Cómo?! ¡¿Hasta la cima?!<pause 15> Hasta la\ncima dice el muy... ¡Haber avisado\nantes, que esto pesa lo suyo!\n\nSerá...<pause 15>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10012:0x00000064>Y con la pila de monstruos que hay\npor aquí...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000064>Si yo los monstruos me los paso\npor las tuercas... ¡pero no sabes\nlo difícil que es llevar esta marmita!")
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10012:0x00000064>Pues te ha tocado, amo verdoso.\n¡Vas a tener que emplearte a fondo!\n\n\nYo te seguiré por detrás, así que\nme harás de escudo.")
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10012:0x00000064>¡No dejes que esos monstruos\nme pongan ni un dedo encima!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 103 */ "Tengo información para el <0x10012:0x0000000b>amo.\nEl poder de la espada ha aumentado\ny ya es posible <color red<rastrear >coloroff><color yellow<cubos divinos>coloroff>.\n\nPor tanto, los he añadido como\nobjetivo de rastreo.\n\n\n<sound 4>Aconsejo aprovechar esta opción.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "Solo de pensar el palizón que te has\npegado para llegar hasta aquí y no\npoder entrar...\n\n<0x10009:0x00150dff><pause 20>Pero tengo la impresión de que se\nme olvida algo muy importante...\n\n\nAlgo que me dijo mi colega...<pause 20>\n<0x10009:0x00000004>¡Ay, no logro acordarme!\n\n\n<0x10009:0x000908ff>Bah, da igual... En fin, si lo que\nnecesitas es mucha agua, yo en\ntu lugar iría al <color red<lago Floria>coloroff>.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 1, line: 55 */ "<0x10009:0x00110801>¡Anda, tú también has venido hasta\naquí! ¿Sigues buscando a esa amiga\ntuya?\n\n<0x10009:0x000908ff>En cuanto me enteré de que en esta\nzona había unas ruinas magníficas,\n¡vine corriendo a por los tesoros!\n\n<0x10009:0x00150dff>Pero hasta ahora no he visto nada\nde nada. ¿Tú has encontrado algo\ninteresante?\n[1-]¿Te cuento?[2-]No hablaré")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00110900>¡Pues claro! ¿Para qué están los\ncolegas, si no? ¡Que no haya secretos\nentre nosotros!")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x0009080e>¿Cómo dices? ¿Que las llamas esas\nno te dejan entrar? ¿Y por qué no\nles echas agua?\n\n<0x10009:0x00150800>Ajá... Así que necesitas mucha agua...\nComprendo.<pause 20> La de aquí no basta, ¿no?\n\n\n<0x10009:0x000908ff>Ahora que lo dices, el agua de aquí\nes igual que la que hay en el famoso\n<color red<lago Floria>coloroff><sound 4>, aunque que se encuentra\nbastante lejos.\n<0x10009:0x001108ff>Un colega mío fue a buscar tesoros\nal <color blue<bosque de Farone>coloroff> y se ayudó de\nlos canales para volver a casa.\n\n<0x10009:0x000908ff>Según me dijo, no había visto un\nlago tan grande en su vida.\nYo que tú iría allí, seguro que\nhay agua más que suficiente.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0014120a>¡¿Pero qué...?! ¡No seas así, hombre!\n¿Es que vas a dejar tirado a este pobre\nmoguma que tanto te quiere?")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 7, unk: 0, line: 102 */ "Saciar mi sed es la ofrenda\nque sirve para abrir la senda.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<sound 114>¡Llevo esperando una eternidad!\n¡Anda, vámonos, que ya te vale!")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 2, unk: 1, line: 117 */ "Tengo información para mi <0x10012:0x0000000b>amo.\nHe de llamar la atención sobre\nel hecho de que las llamas que\nbloquean el paso no se han apagado.\n¿Desea el <0x10012:0x00000001>amo que registre el\nrecipiente donde se encontraba la\n<color blue<dragona del agua>coloroff> como objetivo\nde <color green<rastreo>coloroff>?\n[1-]¡Adelante![2]Aún no")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 2, unk: 0, line: 118 */ "<0x10012:0x00000005>Entendido, amo. Procedo a registrar\nel recipiente donde se hallaba la\n<color blue<dragona del <sound 4>agua >coloroff>como objetivo\nde <color green<rastreo>coloroff>.")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 2, unk: 0, line: 119 */ "<0x10012:0x00000005>Como ordene mi amo. Aplazaré\nel registro para otra ocasión.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 2, unk: 1, line: 109 */ "Tengo información para el <0x10012:0x0000000b>amo:\nsugiero hacer caso al <color blue<moguma>coloroff>\ny poner rumbo al <color red<lago Faroria>coloroff>. \n\nRespecto al método para transportar\nel agua desde el lago...<pause 15> Lo mejor será\npreguntarle a la <sound 4><color red<dragona del agua>coloroff>.  \n\nCalculo que podríamos utilizar para\ntal fin la <color red<marmita>coloroff> en la que se bañaba\npara recuperarse de sus heridas.")
/*<296>*/ 		printf(/* textboxtype: 2, unk: 1, line: 116 */ "¿Desea el <0x10012:0x00000001>amo que registre el\nrecipiente como objetivo de <color red<rastreo>coloroff>?\n[1-]¡Sí![2]Todavía no")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00151b09>¡Hola! ¿Tú también has venido\nen busca de los <color yellow<cubos divinos>coloroff>?\n¡Pues ya tiene mérito que hayas\nlogrado cruzar ese horno!\n<0x10009:0x00ffff00>A mí el calor no me afecta en absoluto,\npero atravesar las llamas es demasiado\nhasta para un goron como yo.")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>¿Crees que podrías hacer algo\npara apagar el fuego?")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00151b09>¡Hombre, volvemos a encontrarnos!\n¿Cómo te va, amigo?\n\n\n<0x10009:0x00160bff>En cuanto escuché el rumor de que\npor esta zona habían visto uno de los\n<color yellow<cubos divinos>coloroff>, vine corriendo desde\nmuy lejos.\n<0x10009:0x00000b00>Mi olfato me dice que tiene que haber\nmás por aquí, estoy casi seguro. Pero\na ver quién es el goron que cruza estas\nllamas.")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<sound 114>¡¿Pero qué...?! ¡Por todas mis tuercas!\n¡¿A qué estás jugando?!")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 2, line: 61 */ "<0x10009:0x000c0405>¿Y qué mejor lugar para disfrutar\nde la jubilación que en las alturas,\ncontemplando bellos paisajes?\n\n<0x10009:0x000c0dff>Llevo toda la vida enterrado bajo\ntierra, pero lo que más me gusta\nen realidad es admirar el firmamento.\n\n<0x10009:0x00090906>Si pudiese volver a nacer, me gustaría\nser un pájaro para revolotear todo\nel día por el ancho cielo.")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x000b0c07>¡Oye, tú eres el de antes!\n\n\n\n<0x10009:0x000b0506>¡Juo, juo, juo! ¿Cómo te va con los\nmaravillosos guantes que te regalé?\n\n\n¿Qué? ¿Que cómo me va a mí?\nPues verás...\n\n\n<0x10009:0x000c0405>Desde que nos vimos por última vez,\nhe estado buscando otros lugares\ndonde haya tesoros, pero la suerte\nno me acompaña.\nSi te digo la verdad, ya me estoy\ncansando de buscar tanto para\nnada, y encima con este calor.\n\n<0x10009:0x00090908>Creo que me voy a plantear en serio\nlo de la jubilación para empezar\na disfrutar de una vida más relajada,\nque ya toca.")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00181700>Si giras a la derecha justo al salir\nde aquí, encontrarás un <color red<manantial>coloroff>.\nMmm... pero no sé cómo te las vas\na ingeniar.")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "¿«Saciar mi sed»? Ahora que lo pienso,\nsaliendo de aquí, al fondo a la derecha,\nse llega al exterior.\n\nRecuerdo que allí había un pequeño\n<color red<manantial>coloroff><sound 4> de agua fresquísima.\n\n\n<0x10009:0x00181705>Pero ¿cómo vas a traerla hasta aquí?\nPorque esa rana tan rara no parece que\nte vaya a echar una mano, me temo...\n<pause 15>¿Cómo lo ves?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>¿Crees que podrías hacer algo\npara apagar el fuego?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<sound 114>¡Oye! ¿Estás ciego o qué? ¡Como sigas\nasí, voy derechito al desguace!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00171908>¡Ahí va! ¡Las llamas se han apagado!\n¡Ahora ya podemos pasar!")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 2, unk: 0, line: 22 */ "<0x10012:0x0000000b>Amo, el robot está emitiendo señales\nde alerta desde el volcán. Sugiero\nregresar cuanto antes.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x001a030d>Jefe... Yo... ¡prometo ser tu más\ndigno sucesor!\n\n\n¡Cuida de nosotros desde allí arriba!")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x001c180f>¡O... oye! ¡El jefe ha salido escopetado\nsin decir ni pío! ¡¿Tú sabes adónde\nha ido?!\n[1-]A Celéstea[2-]Al cielo")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x001a2011>¿A Celéstea?\n\n\n\n<0x10009:0x001b0407>¿En serio?<pause 20> Lo cierto es que al jefe\nsiempre le gustaron las alturas...\n\n\n¡Seguro que allí arriba habrá tantos\ntesoros que se pasará el día entero\nbuscándolos!")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x001a2011>¿Que... que ahora está en el cielo?\n\n\n\n<0x10009:0x001b2207>Vaya...<pause 20> Es que ha sido tan repentino...\n\n\n\nAunque supongo que tarde o temprano\na todos nos llega la hora, ¿no?")
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
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x001b2207>Se va al cielo y vuelve cuando\nse le antoja... ¡Está claro que\nel jefe es único!")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x001a2011>¡¿Pe... pero qué...?! ¡¿E... el jefe\nha vuelto?!\n\n\n<0x10009:0x001b2207>Así que puede ir y volver al cielo\ncuando quiera... ¡Es increíble!")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000015>Así que quiere una vida más relajada...\nPues nada, si lo ha dicho el jefe, habrá\nque tratar de ayudarle.")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x001a2001>¡Ah, eres tú! ¿Has ido ya a ver al jefe?\n¿Cómo lo has visto?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>¿Cómo dices? ¿Que está\npensando en la jubilación?\n\n\n<0x10009:0x000000ff>¿Y eso qué es? ¿Algún tipo de tesoro\npoco común y cada vez más\ninalcanzable?\n\n<0x10009:0x001b1e15>Jamás había oído mencionar nada\nparecido. Qué cosa más rara...\n\n\nPero si lo ha dicho el jefe, tendremos\nque hacer todo lo posible para ayudar,\n¿no crees?")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x001b2201>¡Buenas de nuevo, chaval!\n¿Qué tal te va?\n\n\n¿Que cómo me va a mí? ¡Pues ya ves,\nmejor imposible!\n\n\n<0x10009:0x00000002>Pero estoy preocupado por el jefe.\nDesde que volvió de aquellas ruinas\nno tiene buen aspecto.\n\n<0x10009:0x001b22ff>Antes me pareció oírte hablando con él.\n¿Cómo lo has visto?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>¿Qué? ¿La jubilación?\n\n\n\n<0x10009:0x000000ff>¿Y eso qué rayos es? ¿Una especie\nde tesoro?\n\n\n<0x10009:0x001b1e15>Jamás había oído hablar de algo así...\n\n\n\nPero si lo ha dicho el jefe, bien dicho\nestá, así que tendremos que hacer todo\nlo posible por ayudar.")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x001b050a>El <color blue<jefe >coloroff>tiene que andar por aquí cerca.\n¡Seguro que le haría mucha ilusión\nvolver a verte!\n\nQuién sabe, quizá se anime al ver\na un viejo amigo.")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x001b2201>¡Vaya, pero si eres tú! ¿Cómo te va,\nchaval?\n\n\n¿Que cómo me va a mí? ¡Pues ya lo ves,\nestoy en plena forma!\n\n\n<0x10009:0x00000002>Al <color blue<jefe>coloroff>, en cambio, lo veo bastante\ndeprimido desde que volvió de esas\nruinas... Está como sin fuerzas.\n\n<0x10009:0x001b230a>Pero bueno, seguro que no es nada,\naunque me gustaría que fueses a verlo.\n¡Igual tú consigues animarlo un poco!")
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
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "Pues nada, supongo que tendrás\nque volver a hacer el mismo truco\nde antes.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00161e56>Hala, otra vez... Esto empieza\nya a resultar un poco pesado...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10012:0x00000064>Vaya, ya era hora... Bueno, ¿a qué\nesperas para llevarme a la cumbre\ndel volcán?")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x001b2215>Este <color blue<Platín>coloroff>... Parece que lo único\nque le motiva en el mundo es\nbuscar tesoros...")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x001a200f>¡Hala, si eres tú otra vez!<pause 15>\n\n\n\n<0x10009:0x001b2209>Je, je, je... Tranquilo, no pasa nada.\n\n\n\nMi colega descubrió todo el follón\nde las ruinas.\n\n\n<0x10009:0x001b1eff>¡Y a él también lo capturaron! Je, je...\n¡Vaya par de dos estamos hechos!\n\n\n<0x10009:0x001a0a12>Por cierto... tú no habrás visto por ahí\na <color blue<Platín>coloroff>, ¿no?\n[1-]Está allí[2-]Pues no")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x001b0a12>¿En serio? No sabes qué peso me quitas\nde encima, colega.\n\n\nEs que llevaba mucho tiempo sin verlo.\n\n\n\n<0x10009:0x001b160f>Temía que le hubiese pasado\nalgo terrible...\n\n\n<0x10009:0x001b16ff>¡Siempre se las apaña para meterse\nen líos!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x001b2207>Ese moguma...<pause 20> ¿Otra vez ha vuelto\na irse solo en busca de tesoros?\n\n\nActuar por cuenta propia es muy\npeligroso. Mira que se lo tiene\ndicho nuestro hermano mayor...\n\n<0x10009:0x001b0009>Qué le vamos a hacer; es el sino\ndel <color blue<cazador de tesoros>coloroff>, no se\npuede evitar.\n\nEn fin, que si ves a <color blue<Platín >coloroff>por ahí,\n¡dile que lo estoy buscando!")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00171908>¡Por Goron, lo has vuelto a hacer!\nVenga, no perdamos más tiempo.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000064>¡No te olvides de mí! ¡Y recuerda\nque puedes comprobar mi posición\nen el <color red<mapa >coloroff>con (+)!<0x10011:0x03cd>")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x000d0509>A ver, a ver... ¿Adónde puedo ir\npara proseguir con mi búsqueda\ndel tesoro?")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 1, line: 77 */ "<0x10008:0x01cd><0x10009:0x000e1008>¡Oye, chaval! ¡¿Estás bien?!\n\n\n\n<0x10009:0x0011110b>Por lo que veo, has vuelto a recuperar\ntodas tus cosas. ¡Sabía que lo lograrías!\n\n\nPor cierto...<pause 20> ¿Cómo te fue?\n¡¿Encontraste muchos tesoros?!\n[1-]¡Muchos![2-]Nada...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000e0505>¡¿En serio?! ¡Qué pasada!\n\n\n\n<0x10009:0x000e1f0a>¡Pero no olvides que el mundo\nes enorme y seguro que quedan\nmillones de tesoros por descubrir!\n\nEso sí, yo no pienso quedarme\naquí parado viendo como te los\nllevas todos. ¡Pienso encontrar\nmás que tú!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x000e040a>¡Anda ya! ¿Seguro que no había nada\nde valor? Pues qué mala suerte\nhas tenido, ¿no?\n\n<0x10009:0x000f0508>¡Bah, tú no te preocupes! ¡El mundo\nes tan grande que todavía quedarán\ncientos de tesoros por todas partes!")
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
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Creo que me iré a otro lugar a seguir\ncon mi investigación. ¡Espero que\nvolvamos a vernos muy pronto!")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 51 */ "<0x10009:0x00181702>¿Qué tal? ¿Había algo ahí dentro?\n[1-]Trampas[2-]Monstruos")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00161e56>Vaya faena... Pues nada, entonces\ncreo que voy a dejar la búsqueda\nen tus manos, ¿de acuerdo?\n\n<0x10009:0x00080bff>Yo me iré a otro lugar para continuar\ncon mis investigaciones. ¡Nos vemos!")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00161e56>Vaya faena... Pues nada, entonces\ncreo que voy a dejar la búsqueda\nen tus manos, ¿de acuerdo?\n\n<0x10009:0x00080bff>Por cierto, presiento que muy cerca\nde aquí hay un <color yellow<cubo divino>coloroff>.\n\n\nNo suelo equivocarme, así que\nyo en tu lugar exploraría a fondo\nlos alrededores.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00171908>¡Oh, magnífico! ¡Eres un genio!\n\n\n\n<0x10009:0x00080bff>Venga, te cedo el honor de entrar\ntú primero; ¡deprisa!")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00181707>Un <color red<recipiente>coloroff> lo bastante grande\ncomo para transportar mucha <color red<agua>coloroff>...\n¿Dónde habrá algo así?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00181707>¿Cómo nos las vamos a ingeniar para\ntraer el <color red<agua >coloroff>suficiente hasta aquí?\nSi al menos tuviésemos un <color red<recipiente\ngrande>coloroff>...\n<0x10009:0x00161eff>Tú que has visitado tantos lugares\ndistintos... ¿No se te viene nada\na la cabeza?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "¿Tú has visto eso? Me parece\nmuy extraño...\n\n\n<0x10009:0x00171908>No puede tratarse de un simple\n<color yellow<cubo divino>coloroff>... Lo que haya aquí\nescondido ha de ser algo mucho\n<color red<más importante >coloroff>que eso.")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00161eff>Esta vez es un fuego enorme, así que\ncon esa <color red<botellita >coloroff>no creo que sea\nsuficiente.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000007>Mmm...<pause 15> <0x10009:0x00181700>Tú no tendrás por ahí algún\n<color red<recipiente lo bastante grande>coloroff>,<sound 4> ¿no?\n\n\n<0x10009:0x00161eff>Y además necesitaríamos un buen\nmontón de <color red<agua >coloroff>para llenarlo.\nSi se te ocurre algo, ya sabes...")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "¿Quieres que eche el agua ahí encima?\nAh, pues vale, como ordenes...")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 2, unk: 0, line: 120 */ "<0x10012:0x00000001>Amo, informo de que nos encontramos\nen el volcán de Eldin.\n\n\nConfirmo la posibilidad de utilizar\nel <color red<rastreador >coloroff>para localizar el umbral\ndel juicio; paso necesario para hallar\nla llama sagrada.")
          }

