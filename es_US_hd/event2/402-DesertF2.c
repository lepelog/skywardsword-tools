          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Me tiemblan los engranajes\nsolo de verlo<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>Aunque, bien mirado, supongo que a\nestas alturas ya estarán todos más que\nmuertos.\n\n<0x10009:0x00070000>Si yo sigo funcionando es gracias al\ncronolito que tengo en el bote...\n\n\n<0x10009:0x00070000>Uf, ya me siento más tranquilo.\nVamos, grumete, ¿qué esperas?\n¡Hay que encontrar mi galeón!\n\n<0x10009:0x00070000>Yo te esperaré aquí en el bote\nmientras vas y vuelves.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf(/* textboxtype: 0, unk: 2, line: 97 */ "Al astillero")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "Ruego al <0x10012:0x0000000b>amo que mire a su alrededor.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf(/* textboxtype: 1, unk: 2, line: 66 */ "Hay un 60% de probabilidades de que\neste velamen provenga del galeón que\nalberga la <color red<Llama de Nayru>coloroff>.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "Iniciando el <color red<rastreador >coloroff>en busca del\ngaleón que guarda la <color red<<sound 4>Llama de Nayru>coloroff>...")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 0, unk: 0, line: 98 */ "Acércate a la vagoneta\ny sube a bordo con (A).")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(/* textboxtype: 0, unk: 20, line: 4 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10012:0x0000000b>Amo, informo que estas instalaciones\nson un nido de seres malignos desde\nhace largo tiempo.\n\nCalculo que las probabilidades de\nencontrar en este lugar alguna pista\nsobre el paradero del galeón son\nprácticamente nulas.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf(/* textboxtype: 2, unk: 0, line: 99 */ "Inclina el cuerpo en las curvas\npara equilibrar la vagoneta.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "A nuestro buen almirante,\n¡gracias por todo!\n\n- La tripulación")
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
/*<223>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "¡Vamos, no pierdas tiempo!\nTienes que encontrar a esa persona\ntan importante, ¿no?\n\n¿O es que quieres que volvamos con el\nbote a algún sitio?\n[1-]¡Mar abierto![2-]¡Al galeón![3]No hace falta")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>¡Levamos anclas!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>¡Te llevaré hasta mi galeón, grumete!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070000>¡Ven a verme cuando quieras!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "¡Me alegro de verte!\nDime, ¿has encontrado a la persona\nque buscabas, grumete?\n\n¿Quieres que te lleve a algún sitio con\nel bote?\n[1-]¡Mar abierto![2-]¡Al galeón![3]No hace falta")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "¿Buscas a un dragón divino o algo\nasí?\n\n\n<0x10009:0x00070000>Si se trata del <color blue<dragón del trueno>coloroff>, te\npuedo decir que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Pero ese es el\núnico dragón que conozco.\n<0x10009:0x00070000>¿Adónde quieres que vayamos?\n[1-]Mar adentro[2-]Al galeón[3]A ningún\nsitio")
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
/*< 27>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00070000>¿Listo para zarpar?\n\n[1-]¡Zarpemos![2-]¡Al galeón![3]No, gracias")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>¡Levamos anclas!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>¡Te llevaré hasta mi galeón, grumete!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>¡Arrr! ¡Que no tenemos todo el día!...")
          					}
          				  case 1:
/*<155>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00070000>¿Listo para zarpar?\n[1-]Listo[2]Espera...")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>¡Levamos anclas!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>¡Arrr! ¡Que no tenemos todo el día!...")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 0, unk: 1, line: 13 */ "¿Qué, has cambiado de idea?\n\n\n\n¿Me ayudarás a recuperar mi galeón\nsí o no?\n[1-]Claro[2]Lo siento")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00070000>¿En serio? Pues muy bien...")
/*< 25>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Mmm<pause 10>.<pause 10>.<pause 10>. Ese mapa que llevas es un poco\nextraño.\n\n\n<0x10009:0x00070000>Si pretendes salir a surcar los mares,\nnecesitas una <color yellow<carta náutica >coloroff>como es\ndebido, marinero de agua dulce.\n\nPero estás de suerte, tengo una en <color blue<mi\ncasa>coloroff>. ¡Sube al bote, te llevaré hasta allí\nrápidamente!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x00070000>Muy bien, grumete, como quieras.\nNo te subas en mi bote.\n\n\n¡Pero a ver cómo te las arreglas\npara surcar los mares sin él!")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "Mmm<pause 10>.<pause 10>.<pause 10>. ¿Quién eres tú?\n¿Un humano?\n\n\n¿Cómo? ¿Quieres saber quién soy?<pause 5>.<pause 5>.<pause 5>.\n¡Qué pregunta!\n\n\n<0x10009:0x00070000><sound 4>Soy el famoso almirante del galeón que\nalberga la sagrada <color red<Llama de Nayru>coloroff>.\n[1-]¿Qué llama?[2-]¿Qué galeón?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<pause 10>.<pause 10>.<pause 10>.\n\n\n\nSucedió un día de tormenta<pause 5>.<pause 5>.<pause 5>.\nMis muchachos estaban haciendo\nla maniobra como de costumbre.\n\nY de repente, salidos de la nada<pause 5>.<pause 5>.<pause 5>.\naparecieron los piratas y abordaron\nnuestro galeón.\n\nApresaron a toda mi tripulación y a\nmí me arrojaron por la borda. Iban\nbuscando la <color red<Llama de Nayru>coloroff>.")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00070000>A duras penas pude llegar a este\npuerto, arrastrado por la corriente<pause 5>.<pause 5>.<pause 5>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00070000>Después de aquello he salido a mar\nabierto cientos de veces en busca de\nmi galeón y mi tripulación...")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00070000>Pero no encontré nada, ni rastro.<pause 5>.<pause 5>.\n\n\n\nLos muy rufianes... seguro que se\nocultaron valiéndose del dispositivo\nde invisibilidad.\n[1-]¿Dónde están?[2-]¿Invisibilidad?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00070000>Para proteger la <color red<Llama de Nayru>coloroff>,\nel galeón está equipado con un\ndispositivo especial que le permite\nhacerse invisible<pause 5>.<pause 5>.<pause 5>.\n¿Dices que tú también estás buscando\nla <color red<Llama de Nayru>coloroff>?\n\n\nYa veo, la necesitas para encontrar\na alguien muy importante para ti<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>En ese caso, tal vez puedas ayudarme\na encontrar a los miembros de mi\ntripulación. ¿Qué dices, grumete?")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Si me ayudas, te llevaré conmigo\nen el bote.\n[1-]De acuerdo[2]Lo siento")
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
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 0, unk: 2, line: 100 */ "Si vas demasiado rápido,\nfrena con (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Papá, ¡no trabajes demasiado!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 101 */ "Para sortear peligros, salta.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 2, unk: 0, line: 96 */ "Al amarradero")
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
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "En esa casa tengo un montón de\nrecuerdos de mi familia.\n\n\nAh, me pregunto si podré regresar\nalgún día... Cómo los extraño.<pause 5>.<pause 5>.")
          					flw_46:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>¿Listo para zarpar?\n[1-]Listo[2]Espera")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>¡Pues voy calentando motores!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>De acuerdo...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "¿Buscas a un dragón divino o algo así?\n\n\n\n<0x10009:0x00070000>Si se trata del <color blue<dragón del trueno>coloroff>,\nte puedo decir que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Pero ese es el\núnico dragón que conozco.")
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
/*< 43>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Perfecto, has conseguido la <color yellow<carta\nnáutica>coloroff>. Ahora ya podemos salir a\nnavegar tranquilamente.\n\nVamos, grumete, ¡tenemos que\nencontrar mi galeón como sea!")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Grumete, ¿se puede saber qué haces?\n¡Tienes que traerme la <color yellow<carta náutica\n>coloroff>que está en mi casa!\n\n¿O es que necesitas ir a algún otro\nsitio?\n[1-]Mar abierto[2]No hace falta")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10012:0x00000064>¿Has visto eso, grumete?\n¡Es mi galeón!\n\n\n¡Vamos por él! ¡Dale un buen cañonazo!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 2, unk: 0, line: 102 */ "Fin de línea: astillero")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "No sé cómo agradecerte que hayas\nrecuperado mi galeón.\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Ha quedado en un estado lamentable,\npero mis muchachos trabajan duro.\nLo dejarán como nuevo enseguida.\n\n<color blue<<0x10009:0x00070000>>coloroff>Ojalá tú también puedas encontrar\na esa persona que buscas...\n¡Suerte, grumete!\n\n<color blue<<0x10009:0x00070000>>coloroff>Vuelve a vernos cuando quieras.\nTe esperamos con los brazos abiertos.")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "Vamos, abre la <color yellow<carta náutica >coloroff>que me\nhas traído, grumete.")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	wait_frames(105)
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "El marcador (X) indica el lugar donde\nestá el <color blue<<sound 4>astillero>coloroff>.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00070000>El astillero es el lugar donde antaño\nse construían los barcos.\nMi galeón también lo construyeron\nallí.\n<0x10009:0x00070000>Es posible que encuentres alguna\npista sobre el paradero de mi galeón\nentre esos viejos muros.")
/*<110>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00070000>¡Adelante, a toda máquina!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 0, unk: 1, line: 103 */ "¡Mucho cuidado! Los piratas\nhan causado numerosos\ndesperfectos.")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Brrr, qué miedo<pause 5>.<pause 5>.<pause 5>.\nMe tiemblan las tuercas solo\nde recordarlo...\n\nEl jefe de los piratas es un feroz\nautómata zombi, de lo más cruel\ny sanguinario que te puedas llegar\na imaginar...\nTiene muchísimos esbirros.\n<0x10009:0x00070000>No quisiera volver a cruzarme con él\nen la vida<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>Pero si queremos recuperar mi\ngaleón, no tenemos otra opción.\n¡Valor, grumete!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "El marcador (X) indica el lugar donde\nse encuentra el <color blue<<sound 4>escondrijo pirata>coloroff>.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00070000>¡Adelante! ¿Quién dijo miedo?...")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070000>Así que en el astillero tampoco había\nni rastro de mi galeón... Pues entonces\nno tenemos otra opción<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>Brrr, se me hiela el aceite lubricante\nde solo pensarlo, pero tendremos que ir\nal escondrijo pirata.\n\n<0x10009:0x00070000>El jefe de toda esa banda es un\nterrible autómata zombi, pavoroso y\nsanguinario. Y tiene muchísimos\nesbirros a su cargo.\n<0x10009:0x00070000>No tengo demasiadas ganas de volver\na cruzarme con él, pero<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>¡Es la única manera de recuperar\nmi galeón!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "Ruego al <0x10012:0x00000001>amo que se fije atentamente.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "Este objeto se conoce como <color yellow<<sound 4>orbe\ncronolítico>coloroff>. Su forma difiere un\ntanto de los cronolitos corrientes.\n\nPero sus cualidades son en esencia\nlas mismas. Simplemente ha sido\nprocesado para tener un tamaño\nportátil.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "No habrá tránsito de\nvagonetas durante todo el día.\nDisculpen las molestias.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00070000>¿Seguro que podrás encontrarlo en\nmedio de esta inmensidad?...\n\n\n<0x10009:0x00070000>Bueno, no me queda más remedio\nque confiar en ti... ¡Buena suerte,\ngrumete!\n\n<0x10009:0x00070000>Es muy posible que navegue en modo\ninvisible, pero si le <sound 4><color green<aciertas con un\ncañonazo >coloroff>su camuflaje se desvanecerá.")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ni siquiera en el escondrijo pirata\nhay rastro de mi galeón<pause 5>.<pause 5>.<pause 5>.\n\n\nPor lo menos, ¿has encontrado\nalguna pista?\n\n\n<0x10009:0x00070000>¡Cómo! ¿Dices que sabes dónde está?\n¿Que puedes usar un <color red<rastreador>coloroff>?\n¡Espléndido! ¡Eso es espléndido!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "Sugiero al <0x10012:0x00000001>amo que se fije\nbien en esto.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf(/* textboxtype: 0, unk: 0, line: 83 */ "Calculo que hay un 90% de\nprobabilidades de que ese galeón\nsea el que albergaba la Llama de\nNayru.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "Puede verse al almirante rodeado de\nsu tripulación. Estimo que eran días\nfelices para todos ellos.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 105 */ "A ver si terminan pronto con\nlos planos de mi galeón...")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "Ruego al <0x10012:0x00000001>amo que se fije bien en esto.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "En este pedestal no hay montado\nningún <color red<cronolito>coloroff>.\n\n\nPero detecto un 95% de similitud con\nlos pedestales encontrados en las <color blue<minas\nde Lanayru>coloroff>.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Estimo que en este pedestal había\nun <sound 4><color red<cronolito >coloroff>integrado a modo de\nfuente de energía.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf(/* textboxtype: 74, unk: 1, line: 106 */ "<0x10005:0x000f0000>Aviso para el <0x10012:0x0000000b>amo...\n\n\n\n<0x10005:0x003c0000>Estamos en el <color blue<mar de arena de\nLanayru>coloroff>, donde se cree que antaño\nse extendía un inmenso océano.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10012:0x00000001>Amo, hemos llegado al interior del\nastillero.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "Las instalaciones están semienterradas\npor la arena acumulada durante siglos\ny siglos.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "Sugiero buscar bajo la arena pistas\nsobre el paradero del galeón.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10005:0x005a0000>Sin embargo, en la actualidad está\ncompletamente seco y se ha\nconvertido en un mar de dunas.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf(/* textboxtype: 0, unk: 1, line: 91 */ "Aviso para el <0x10012:0x00000001>amo: tomar un descanso\nsolo es factible tras cumplir el objetivo\nque nos ha traído hasta aquí. Hay que\nencontrar la carta náutica.")
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
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "Ay, grumete, qué feliz me hizo\nver mi galeón recién construido.\nCuántos recuerdos.<pause 5>.<pause 5>.")
          					flw_67:
/*< 67>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>¿Listo para zarpar?\n[1-]Listo[2]Espera")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>¡Pues voy calentando motores!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>De acuerdo...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "¿Buscas a un dragón divino o algo así?\n\n\n\n<0x10009:0x00070000>Si se trata del <color blue<dragón del trueno>coloroff>,\nte puedo decir que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Pero ese es el\núnico dragón que conozco.")
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
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "¡Vamos, grumete! ¡El <color blue<escondrijo pirata\n>coloroff>nos espera!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00070000>Vaya, así que no has encontrado ni\nrastro de mi galeón. Pues entonces\nsolo nos queda<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>Uf, se me aflojan los tornillos\nsolo con pensarlo, pero tendremos\nque ir al escondrijo pirata.\n\n<0x10009:0x00070000>No tenemos opción... ¡Valor, grumete!\n¿Listo para zarpar?\n[1-]¡Vamos![2]Espera")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "¿Qué te pasa, grumete?\n¡Tienes que ir al<color blue< astillero >coloroff>a ver si\nencuentras alguna pista!\n\n<0x10009:0x00070000>¿O es que quieres salir a navegar\na mar abierto?\n[1-]¡Mar abierto![2]No quiero")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10005:0x005a0000>Este lugar hacía las veces de puerto\npara conectar con alta mar.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf(/* textboxtype: 0, unk: 0, line: 92 */ "Aviso para mi <0x10012:0x0000000b>amo...")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "Detecto la presencia de insectos en\nla parte superior de la casa.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x00000064>Ese es el escondrijo de un hatajo\nde piratas terribles y sanguinarios... \n¡No se te ocurra acercarte!\n\nDonde tenemos que ir ahora es al\n<color blue<astillero>coloroff>, grumete.")
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000064>¿Adónde crees que vas?\n¡Primero tenemos que pasar por\n<color blue<mi casa>coloroff>, grumete!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x003c0000>Calculo un 90% de probabilidades\nde que la <color red<llama sagrada >coloroff>se encuentre\nmás adelante. \n\n<0x10005:0x001e0000>Sugiero buscarla por este mar de\narena.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 0, unk: 1, line: 94 */ "Informo al <0x10012:0x0000000b>amo que el poder del orbe\ncronolítico ha provocado cambios\nen las instalaciones.\n\nSugiero salir al exterior con el objetivo\nde evaluar mejor la nueva situación.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "¡Ah, cuánto tiempo sin navegar en alta\nmar! Creo que aún me acuerdo de cómo\nse gobernaba el bote...\n\n<0x10009:0x00070000>A ver, se movía con (ControlStick2), y oprimiendo\n(B) mientras estaba en movimiento se\npodía acelerar durante unos instantes.<0x10011:0x01cd>\n\nLuego con <icon 41> se sacaba el cañón y\ncon <icon 41> se disparaba. ¡Eso es!<0x10011:0x0fcd>")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "He marcado con una (X) el lugar donde\nestá mi casa.\n\n\nEn la isla hay un <color red<amarradero>coloroff>.\nPodemos atracar allí.")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00070000>Adelante, ¡a toda máquina!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ "(.<pause 5>.<pause 5>.)")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "Aviso para el <0x10012:0x0000000b>amo: por más que\nsigamos buscando en este lugar,\nlas probabilidades de que el galeón\naparezca son del 0%.\nSugiero seguir las instrucciones del\nalmirante y abandonar la isla.")
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
/*<277>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "Todas las noches sueño con esos\nrufianes abordando mi galeón.\nFue horrible.<pause 5>.<pause 5>.")
          					flw_56:
/*< 56>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>¿Listo para zarpar?\n[1-]Listo[2]Espera")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>¡Pues voy calentando motores!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>De acuerdo...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "¿Buscas a un dragón divino o algo así?\n\n\n\n<0x10009:0x00070000>Si se trata del <color blue<dragón del trueno>coloroff>,\nte puedo decir que está al sur de las\n<color blue<cuevas de Lanayru>coloroff>. Pero ese es el\núnico dragón que conozco.")
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
/*< 63>*/ 				printf(/* textboxtype: 0, unk: 0, line: 47 */ "¡Vamos, hay que encontrar mi galeón\ncuanto antes!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 1, line: 46 */ "Vaya, así que aquí tampoco estaba\nmi galeón<pause 5>.<pause 5>.<pause 5>.\n\n\nPor lo menos, ¿has encontrado alguna\npista?\n\n\n<0x10009:0x00070000>¿Dices que sabes cómo buscarlo?\n¿Que puedes usar un <color red<rastreador>coloroff>?\n¡Espléndido! ¡Eso es espléndido!\n\n<0x10009:0x00070000>Esta vez sí que lo conseguiré...\n¡Voy a encontrar mi galeón!\n\n\n<0x10009:0x00070000>¿Zarpamos ya, grumete?\n[1-]¡Zarpamos![2]Espera")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>Parece que hay algo en ese puente\nque se atisba dentro de las fauces.\n\n\nPodría ser una pista para encontrar mi\ngaleón... ¡Acércate a mirar, grumete!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00070000>¿Quieres salir a navegar?\n[1-]¡Mar abierto![2]Mejor no")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "¡Increíble!\n\n\n\n¡Esa bocaza gigantesca se ha abierto!\n¿Cómo lo has hecho, grumete? ")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>Parece que hay algo en ese puente\nque se atisba dentro de las fauces.\n\n\nPodría ser una pista para encontrar mi\ngaleón... ¡Acércate a mirar, grumete!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "¿Y ahora qué?\n¿No me digas que te dan miedo\nlos piratas? Tranquilo, grumete,\nque están todos muertos...\n¿Qué, listo para zarpar?\n[1-]Listo[2]Olvídalo")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "¡Arribamos, grumete!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "Mi casa es esa que está allí en lo alto.")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00070000>Dentro encontrarás la <color yellow<<sound 4>carta náutica>coloroff>.\nNo tienes más que ir y recogerla.\n\n\nPero cuidado, porque te encontrarás\ncon unos cuantos monstruos...\n\n\n<0x10009:0x00070000>Yo te espero en el bote. Si me alejara\nde él, dejaría de funcionar...")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "¡Arribamos, grumete!\n\n\n\nEsta es la isla del astillero.\nAdemás de una fábrica, antaño era\nuna ciudad de verdad donde vivían\nmiles de obreros.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf(/* textboxtype: 0, unk: 74, line: 62 */ "Ese edificio de ahí es el astillero.")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Pero la entrada está cerrada a piedra y\nlodo... Por ahí no se puede pasar.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00070000>Las instalaciones de la isla están\nconectadas entre sí mediante raíles\npara vagonetas.")
/*<164>*/ 	printf(/* textboxtype: 74, unk: 1, line: 61 */ "<0x10009:0x00070000>Tal vez puedas llegar hasta la entrada\ntrasera montado en una vagoneta.")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "Y esa es la estación de vagonetas.")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00070000>Lo mejor será ir primero a la estación.\nYo te espero aquí.")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "Al centro de la ciudad")
          }

