          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf("Me tiemblan los engranajes\nsolo de verlo<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Aunque, bien mirado, supongo que a\nestas alturas ya estarán todos más que\nmuertos.\n\n\x0E\x01\x09\x04\x07\x00Si yo sigo funcionando es gracias al\ncronolito que tengo en el bote...\n\n\n\x0E\x01\x09\x04\x07\x00Uf, ya me siento más tranquilo.\nVamos, grumete, ¿qué esperas?\n¡Hay que encontrar mi galeón!\n\n\x0E\x01\x09\x04\x07\x00Yo te esperaré aquí en el bote\nmientras vas y vuelves.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf("Al astillero")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf("Ruego al \x0E\x01\x12\x04\x00\x0Bamo que mire a su alrededor.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf("Hay un 60% de probabilidades de que\neste velamen provenga del galeón que\nalberga la <r<Llama de Nayru>>.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf("Iniciando el <r<rastreador >>en busca del\ngaleón que guarda la <r<<pling>Llama de Nayru>>...")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf("Acércate a la vagoneta\ny sube a bordo con (A).")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo, informo que estas instalaciones\nson un nido de seres malignos desde\nhace largo tiempo.\n\nCalculo que las probabilidades de\nencontrar en este lugar alguna pista\nsobre el paradero del galeón son\nprácticamente nulas.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf("Inclina el control en las curvas\npara equilibrar la vagoneta.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf("A nuestro buen almirante,\n¡gracias por todo!\n\n- La tripulación")
          }

          void entrypoint_402_02() {
/*<  2>*/ 	start()
/*< 21>*/ 	switch (story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */]) {
          		  case 0:
/*<220>*/ 			switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          			  case 0:
/*<221>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<223>*/ 					printf("¡Vamos, no pierdas tiempo!\nTienes que encontrar a esa persona\ntan importante, ¿no?\n\n¿O es que quieres que volvamos con el\nbote a algún sitio?\n[1]¡Mar abierto![2]¡Al galeón![3-]No hace falta")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Levamos anclas!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Te llevaré hasta mi galeón, grumete!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Ven a verme cuando quieras!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf("¡Me alegro de verte!\nDime, ¿has encontrado a la persona\nque buscabas, grumete?\n\n¿Quieres que te lleve a algún sitio con\nel bote?\n[1]¡Mar abierto![2]¡Al galeón![3-]No hace falta")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf("¿Buscas a un dragón divino o algo\nasí?\n\n\n\x0E\x01\x09\x04\x07\x00Si se trata del <b<dragón del trueno>>, te\npuedo decir que está al sur de las\n<b<cuevas de Lanayru>>. Pero ese es el\núnico dragón que conozco.\n\x0E\x01\x09\x04\x07\x00¿Adónde quieres que vayamos?\n[1]Mar adentro[2]Al galeón[3-]A ningún\nsitio")
          								goto flw_263
          							  case 1:
/*<293>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 294, 'param3': 31}
/*<294>*/ 								story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          								goto flw_282
          							}
          						}
          					  case 1:
          						goto flw_222
          					}
          				}
          			  case 1:
          				flw_150:
/*<150>*/ 				switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x07\x00¿Listo para zarpar?\n\n[1]¡Zarpemos![2]¡Al galeón![3-]No, gracias")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Levamos anclas!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Te llevaré hasta mi galeón, grumete!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Arrr! ¡Que no tenemos todo el día!...")
          					}
          				  case 1:
/*<155>*/ 					printf("\x0E\x01\x09\x04\x07\x00¿Listo para zarpar?\n[1]Listo[2-]Espera...")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Levamos anclas!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Arrr! ¡Que no tenemos todo el día!...")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf("¿Qué, has cambiado de idea?\n\n\n\n¿Me ayudarás a recuperar mi galeón\nsí o no?\n[1]Claro[2-]Lo siento")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x07\x00¿En serio? Pues muy bien...")
/*< 25>*/ 				printf("Mmm<pause0A>.<pause0A>.<pause0A>. Ese mapa que llevas es un poco\nextraño.\n\n\n\x0E\x01\x09\x04\x07\x00Si pretendes salir a surcar los mares,\nnecesitas una <y<carta náutica >>como es\ndebido, marinero de agua dulce.\n\nPero estás de suerte, tengo una en <b<mi\ncasa>>. ¡Sube al bote, te llevaré hasta allí\nrápidamente!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf("\x0E\x01\x09\x04\x07\x00Muy bien, grumete, como quieras.\nNo te subas en mi bote.\n\n\n¡Pero a ver cómo te las arreglas\npara surcar los mares sin él!")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf("Mmm<pause0A>.<pause0A>.<pause0A>. ¿Quién eres tú?\n¿Un humano?\n\n\n¿Cómo? ¿Quieres saber quién soy?<pause05>.<pause05>.<pause05>.\n¡Qué pregunta!\n\n\n\x0E\x01\x09\x04\x07\x00<pling>Soy el famoso almirante del galeón que\nalberga la sagrada <r<Llama de Nayru>>.\n[1]¿Qué llama?[2]¿Qué galeón?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf("<pause0A>.<pause0A>.<pause0A>.\n\n\n\nSucedió un día de tormenta<pause05>.<pause05>.<pause05>.\nMis muchachos estaban haciendo\nla maniobra como de costumbre.\n\nY de repente, salidos de la nada<pause05>.<pause05>.<pause05>.\naparecieron los piratas y abordaron\nnuestro galeón.\n\nApresaron a toda mi tripulación y a\nmí me arrojaron por la borda. Iban\nbuscando la <r<Llama de Nayru>>.")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf("\x0E\x01\x09\x04\x07\x00A duras penas pude llegar a este\npuerto, arrastrado por la corriente<pause05>.<pause05>.<pause05>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf("\x0E\x01\x09\x04\x07\x00Después de aquello he salido a mar\nabierto cientos de veces en busca de\nmi galeón y mi tripulación...")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf("\x0E\x01\x09\x04\x07\x00Pero no encontré nada, ni rastro.<pause05>.<pause05>.\n\n\n\nLos muy rufianes... seguro que se\nocultaron valiéndose del dispositivo\nde invisibilidad.\n[1]¿Dónde están?[2]¿Invisibilidad?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf("\x0E\x01\x09\x04\x07\x00Para proteger la <r<Llama de Nayru>>,\nel galeón está equipado con un\ndispositivo especial que le permite\nhacerse invisible<pause05>.<pause05>.<pause05>.\n¿Dices que tú también estás buscando\nla <r<Llama de Nayru>>?\n\n\nYa veo, la necesitas para encontrar\na alguien muy importante para ti<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00En ese caso, tal vez puedas ayudarme\na encontrar a los miembros de mi\ntripulación. ¿Qué dices, grumete?")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf("Si me ayudas, te llevaré conmigo\nen el bote.\n[1]De acuerdo[2-]Lo siento")
/*<215>*/ 				set_camera(-1, 0)
          				goto flw_134
          			  case 1:
          				goto flw_209
          			}
          		  case 1:
          			goto flw_212
          		}
          	}
          }

          void entrypoint_401_20() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf("Si vas demasiado rápido,\nfrena con (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf("Papá, ¡no trabajes demasiado!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf("Para sortear peligros, salta\nagitando el control.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf("Al amarradero")
          }

          void entrypoint_402_04() {
/*< 13>*/ 	start()
/*< 41>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 42>*/ 		switch (story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */]) {
          		  case 0:
/*<284>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<283>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_44:
/*< 44>*/ 					printf("En esa casa tengo un montón de\nrecuerdos de mi familia.\n\n\nAh, me pregunto si podré regresar\nalgún día... Cómo los extraño.<pause05>.<pause05>.")
          					flw_46:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x07\x00¿Listo para zarpar?\n[1]Listo[2-]Espera")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Pues voy calentando motores!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf("\x0E\x01\x09\x04\x07\x00De acuerdo...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf("¿Buscas a un dragón divino o algo así?\n\n\n\n\x0E\x01\x09\x04\x07\x00Si se trata del <b<dragón del trueno>>,\nte puedo decir que está al sur de las\n<b<cuevas de Lanayru>>. Pero ese es el\núnico dragón que conozco.")
          						goto flw_46
          					  case 1:
/*<296>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 31}
/*<297>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_285
          					}
          				}
          			  case 1:
          				goto flw_44
          			}
          		  case 1:
/*< 43>*/ 			printf("Perfecto, has conseguido la <y<carta\nnáutica>>. Ahora ya podemos salir a\nnavegar tranquilamente.\n\nVamos, grumete, ¡tenemos que\nencontrar mi galeón como sea!")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf("Grumete, ¿se puede saber qué haces?\n¡Tienes que traerme la <y<carta náutica\n>>que hay en mi casa!\n\n¿O es que necesitas ir a algún otro\nsitio?\n[1]Mar abierto[2-]No hace falta")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x12\x04\x00d¿Has visto eso, grumete?\n¡Es mi galeón!\n\n\n¡Vamos por él! ¡Dale un buen cañonazo!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Fin de línea: astillero")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("No sé cómo agradecerte que hayas\nrecuperado mi galeón.\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Ha quedado en un estado lamentable,\npero mis muchachos trabajan duro.\nLo dejarán como nuevo enseguida.\n\n<b<\x0E\x01\x09\x04\x07\x00>>Ojalá tú también puedas encontrar\na esa persona que buscas...\n¡Suerte, grumete!\n\n<b<\x0E\x01\x09\x04\x07\x00>>Vuelve a vernos cuando quieras.\nTe esperamos con los brazos abiertos.")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf("Vamos, abre la <y<carta náutica >>que me\nhas traído, grumete.")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 102, 'param3': 6}
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf("El marcador \x0E\x02\x04\x02\x19CD indica el lugar donde\nestá el <b<<pling>astillero>>.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x00El astillero es el lugar donde antaño\nse construían los barcos.\nMi galeón también lo construyeron\nallí.\n\x0E\x01\x09\x04\x07\x00Es posible que encuentres alguna\npista sobre el paradero de mi galeón\nentre esos viejos muros.")
/*<110>*/ 	printf("\x0E\x01\x09\x04\x07\x00¡Adelante, a toda máquina!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf("¡Mucho cuidado! Los piratas\nhan causado numerosos\ndesperfectos.")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf("Brrr, qué miedo<pause05>.<pause05>.<pause05>.\nMe tiemblan las tuercas solo\nde recordarlo...\n\nEl jefe de los piratas es un feroz\nautómata zombi, de lo más cruel\ny sanguinario que te puedas llegar\na imaginar...\nTiene muchísimos esbirros.\n\x0E\x01\x09\x04\x07\x00No quisiera volver a cruzarme con él\nen la vida<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00Pero si queremos recuperar mi\ngaleón, no tenemos otra opción.\n¡Valor, grumete!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf("El marcador \x0E\x02\x04\x02\x19CD indica el lugar donde\nse encuentra el <b<<pling>escondrijo pirata>>.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf("\x0E\x01\x09\x04\x07\x00¡Adelante! ¿Quién dijo miedo?...")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf("\x0E\x01\x09\x04\x07\x00Así que en el astillero tampoco había\nni rastro de mi galeón... Pues entonces\nno tenemos otra opción<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00Brrr, se me hiela el aceite lubricante\nde solo pensarlo, pero tendremos que ir\nal escondrijo pirata.\n\n\x0E\x01\x09\x04\x07\x00El jefe de toda esa banda es un\nterrible autómata zombi, pavoroso y\nsanguinario. Y tiene muchísimos\nesbirros a su cargo.\n\x0E\x01\x09\x04\x07\x00No tengo demasiadas ganas de volver\na cruzarme con él, pero<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00¡Es la única manera de recuperar\nmi galeón!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf("Ruego al \x0E\x01\x12\x04\x00\x01amo que se fije atentamente.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf("Este objeto se conoce como <y<<pling>orbe\ncronolítico>>. Su forma difiere un\ntanto de los cronolitos corrientes.\n\nPero sus cualidades son en esencia\nlas mismas. Simplemente ha sido\nprocesado para tener un tamaño\nportátil.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf("No habrá tránsito de\nvagonetas durante todo el día.\nDisculpen las molestias.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x07\x00¿Seguro que podrás encontrarlo en\nmedio de esta inmensidad?...\n\n\n\x0E\x01\x09\x04\x07\x00Bueno, no me queda más remedio\nque confiar en ti... ¡Buena suerte,\ngrumete!\n\n\x0E\x01\x09\x04\x07\x00Es muy posible que navegue en modo\ninvisible, pero si le <pling><g<aciertas con un\ncañonazo >>su camuflaje se desvanecerá.")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf("Ni siquiera en el escondrijo pirata\nhay rastro de mi galeón<pause05>.<pause05>.<pause05>.\n\n\nPor lo menos, ¿has encontrado\nalguna pista?\n\n\n\x0E\x01\x09\x04\x07\x00¡Cómo! ¿Dices que sabes dónde está?\n¿Que puedes usar un <r<rastreador>>?\n¡Espléndido! ¡Eso es espléndido!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, confirmo que esta es <y<la carta\nnáutica del almirante>>.\n\n\nRecomiendo llevársela cuanto antes,\ny de paso sugiero al \x0E\x01\x12\x04\x00\x01amo que se fije\nbien en esto.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf("Calculo que hay un 90% de\nprobabilidades de que ese galeón\nsea el que albergaba la Llama de\nNayru.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf("Puede verse al almirante rodeado de\nsu tripulación. Estimo que eran días\nfelices para todos ellos.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf("A ver si terminan pronto con\nlos planos de mi galeón...")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf("Ruego al \x0E\x01\x12\x04\x00\x01amo que se fije bien en esto.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf("En este pedestal no hay montado\nningún <r<cronolito>>.\n\n\nPero detecto un 95% de similitud con\nlos pedestales encontrados en las <b<minas\nde Lanayru>>.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf("Estimo que en este pedestal había\nun <pling><r<cronolito >>integrado a modo de\nfuente de energía.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf("\x0E\x01\x05\x04\x0F\x00Aviso para el \x0E\x01\x12\x04\x00\x0Bamo...\n\n\n\n\x0E\x01\x05\x04<\x00Estamos en el <b<mar de arena de\nLanayru>>, donde se cree que antaño\nse extendía un inmenso océano.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, hemos llegado al interior del\nastillero.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf("Las instalaciones están semienterradas\npor la arena acumulada durante siglos\ny siglos.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf("Sugiero buscar bajo la arena pistas\nsobre el paradero del galeón.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x05\x04Z\x00Sin embargo, en la actualidad está\ncompletamente seco y se ha\nconvertido en un mar de dunas.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf("Aviso para el \x0E\x01\x12\x04\x00\x01amo: tomar un descanso\nsolo es factible tras cumplir el objetivo\nque nos ha traído hasta aquí. Hay que\nencontrar la carta náutica.")
/*<233>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 36}
/*<235>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
          }

          void entrypoint_402_10() {
/*<  5>*/ 	start()
/*< 64>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<274>*/ 		switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          		  case 0:
/*<287>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<286>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_275:
/*<275>*/ 					printf("Ay, grumete, qué feliz me hizo\nver mi galeón recién construido.\nCuántos recuerdos.<pause05>.<pause05>.")
          					flw_67:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x07\x00¿Listo para zarpar?\n[1]Listo[2-]Espera")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Pues voy calentando motores!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x07\x00De acuerdo...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf("¿Buscas a un dragón divino o algo así?\n\n\n\n\x0E\x01\x09\x04\x07\x00Si se trata del <b<dragón del trueno>>,\nte puedo decir que está al sur de las\n<b<cuevas de Lanayru>>. Pero ese es el\núnico dragón que conozco.")
          						goto flw_67
          					  case 1:
/*<302>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 303, 'param3': 31}
/*<303>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_288
          					}
          				}
          			  case 1:
          				goto flw_275
          			}
          		  case 1:
/*< 65>*/ 			switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          			  case 0:
/*< 73>*/ 				printf("¡Vamos, grumete! ¡El <b<escondrijo pirata\n>>nos espera!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x07\x00Vaya, así que no has encontrado ni\nrastro de mi galeón. Pues entonces\nsolo nos queda<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00Uf, se me aflojan los tornillos\nsolo con pensarlo, pero tendremos\nque ir al escondrijo pirata.\n\n\x0E\x01\x09\x04\x07\x00No tenemos opción... ¡Valor, grumete!\n¿Listo para zarpar?\n[1]¡Vamos![2-]Espera")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf("¿Qué te pasa, grumete?\n¡Tienes que ir al<b< astillero >>a ver si\nencuentras alguna pista!\n\n\x0E\x01\x09\x04\x07\x00¿O es que quieres salir a navegar\na mar abierto?\n[1]¡Mar abierto![2-]No quiero")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf("\x0E\x01\x05\x04Z\x00Este lugar hacía las veces de puerto\npara conectar con alta mar.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf("Aviso para mi \x0E\x01\x12\x04\x00\x0Bamo...")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf("Detecto la presencia de insectos en\nla parte superior de la casa.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x12\x04\x00dEse es el escondrijo de un hatajo\nde piratas terribles y sanguinarios... \n¡No se te ocurra acercarte!\n\nDonde tenemos que ir ahora es al\n<b<astillero>>, grumete.")
          	  case 1:
/*<  8>*/ 		printf("\x0E\x01\x12\x04\x00d¿Adónde crees que vas?\n¡Primero tenemos que pasar por\n<b<mi casa>>, grumete!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x05\x04<\x00Calculo un 90% de probabilidades\nde que la <r<llama sagrada >>se encuentre\nmás adelante. \n\n\x0E\x01\x05\x04\x1E\x00Sugiero buscarla por este mar de\narena.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf("Informo al \x0E\x01\x12\x04\x00\x0Bamo que el poder del orbe\ncronolítico ha provocado cambios\nen las instalaciones.\n\nSugiero salir al exterior con el objetivo\nde evaluar mejor la nueva situación.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("¡Ah, cuánto tiempo sin navegar en alta\nmar! Creo que aún me acuerdo de cómo\nse gobernaba el bote...\n\n\x0E\x01\x09\x04\x07\x00A ver, se movía con \x0E\x02\x04\x02\x8CD, y oprimiendo\n(A) mientras estaba en movimiento se\npodía acelerar durante unos instantes.\n\nLuego con (B) se sacaba el cañón y\ncon (A) se disparaba. ¡Eso es!\x0E\x01\x11\x02\x1CD")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf("He marcado con una \x0E\x02\x04\x02\x19CD el lugar donde\nestá mi casa.\n\n\nEn la isla hay un <r<amarradero>>.\nPodemos atracar allí.")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x07\x00Adelante, ¡a toda máquina!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf("Aviso para el \x0E\x01\x12\x04\x00\x0Bamo: por más que\nsigamos buscando en este lugar,\nlas probabilidades de que el galeón\naparezca son del 0%.\nSugiero seguir las instrucciones del\nalmirante y abandonar la isla.")
/*<273>*/ 	scene_flags[8 'Lanayru Sand Sea'][89 /* 0xA 02 */] = true;
          }

          void entrypoint_402_14() {
/*< 17>*/ 	start()
/*< 53>*/ 	switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          	  case 0:
/*<276>*/ 		switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          		  case 0:
/*<290>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<289>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_277:
/*<277>*/ 					printf("Todas las noches sueño con esos\nrufianes abordando mi galeón.\nFue horrible.<pause05>.<pause05>.")
          					flw_56:
/*< 56>*/ 					printf("\x0E\x01\x09\x04\x07\x00¿Listo para zarpar?\n[1]Listo[2-]Espera")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("\x0E\x01\x09\x04\x07\x00¡Pues voy calentando motores!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x07\x00De acuerdo...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf("¿Buscas a un dragón divino o algo así?\n\n\n\n\x0E\x01\x09\x04\x07\x00Si se trata del <b<dragón del trueno>>,\nte puedo decir que está al sur de las\n<b<cuevas de Lanayru>>. Pero ese es el\núnico dragón que conozco.")
          						goto flw_56
          					  case 1:
/*<299>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 300, 'param3': 31}
/*<300>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_291
          					}
          				}
          			  case 1:
          				goto flw_277
          			}
          		  case 1:
/*< 54>*/ 			switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          			  case 0:
/*< 63>*/ 				printf("¡Vamos, hay que encontrar mi galeón\ncuanto antes!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf("Vaya, así que aquí tampoco estaba\nmi galeón<pause05>.<pause05>.<pause05>.\n\n\nPor lo menos, ¿has encontrado alguna\npista?\n\n\n\x0E\x01\x09\x04\x07\x00¿Dices que sabes cómo buscarlo?\n¿Que puedes usar un <r<rastreador>>?\n¡Espléndido! ¡Eso es espléndido!\n\n\x0E\x01\x09\x04\x07\x00Esta vez sí que lo conseguiré...\n¡Voy a encontrar mi galeón!\n\n\n\x0E\x01\x09\x04\x07\x00¿Zarpamos ya, grumete?\n[1]¡Zarpamos![2-]Espera")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf("<pling>Parece que hay algo en ese puente\nque se atisba dentro de las fauces.\n\n\nPodría ser una pista para encontrar mi\ngaleón... ¡Acércate a mirar, grumete!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf("\x0E\x01\x09\x04\x07\x00¿Quieres salir a navegar?\n[1]¡Mar abierto![2-]Mejor no")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf("¡Increíble!\n\n\n\n¡Esa bocaza gigantesca se ha abierto!\n¿Cómo lo has hecho, grumete? ")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf("<pling>Parece que hay algo en ese puente\nque se atisba dentro de las fauces.\n\n\nPodría ser una pista para encontrar mi\ngaleón... ¡Acércate a mirar, grumete!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf("¿Y ahora qué?\n¿No me digas que te dan miedo\nlos piratas? Tranquilo, grumete,\nque están todos muertos...\n¿Qué, listo para zarpar?\n[1]Listo[2-]Olvídalo")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("¡Arribamos, grumete!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf("Mi casa es esa que está allí en lo alto.")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf("\x0E\x01\x09\x04\x07\x00Dentro encontrarás la <y<<pling>carta náutica>>.\nNo tienes más que ir y recogerla.\n\n\nPero cuidado, porque te encontrarás\ncon unos cuantos monstruos...\n\n\n\x0E\x01\x09\x04\x07\x00Yo te espero en el bote. Si me alejara\nde él, dejaría de funcionar...")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf("¡Arribamos, grumete!\n\n\n\nEsta es la isla del astillero.\nAdemás de una factoría, antaño era\nuna ciudad de verdad donde vivían\nmiles de obreros.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf("Ese edificio de ahí es el astillero.")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf("Pero la entrada está cerrada a cal y\ncanto... Por ahí no se puede pasar.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf("\x0E\x01\x09\x04\x07\x00Las instalaciones de la isla están\nconectadas entre sí mediante raíles\npara vagonetas.")
/*<164>*/ 	printf("\x0E\x01\x09\x04\x07\x00Tal vez puedas llegar hasta la entrada\ntrasera montado en una vagoneta.")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf("Y esa es la estación de vagonetas.")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf("\x0E\x01\x09\x04\x07\x00Lo mejor será ir primero a la estación.\nYo te espero aquí.")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf("Al centro de la ciudad")
          }

