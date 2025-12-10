          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 6, unk: 0, line: 3 */ "<icon 20> Efigie de la Diosa")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 22, unk: 0, line: 21 */ "Cuarto de baño")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 6, unk: 0, line: 72 */ "Tengo información importante...\n\n\n\nLa espada del <0x10012:0x0000000b>amo se ha fortalecido,\ny ahora es posible <color red<rastrear>coloroff> con ella\nla localización exacta de las <color yellow<gemas\nde gratitud>coloroff>.\nAsí pues, he añadido las <color yellow<gemas de\ngratitud>coloroff> como objetivo del <color red<rastreador>coloroff>.<sound 4>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf(/* textboxtype: 0, unk: 1, line: 73 */ "El <0x10012:0x00000002>amo ya ha reunido todas las gemas\nde gratitud. Lo felicito por su hazaña.")
          	  case 1:
/*< 64>*/ 		printf(/* textboxtype: 0, unk: 0, line: 71 */ "Aviso importante, <0x10012:0x0000000b>amo...\n\n\n\nLa espada del <0x10012:0x0000000b>amo tiene ahora más\npotencia y por ello es posible <color red<rastrear\n>coloroff>la ubicación de las <color yellow<gemas de gratitud>coloroff>.\n\nLas <color yellow<gemas de gratitud>coloroff> se han añadido\ncomo objetivo del <color red<rastreador>coloroff>.<sound 4>\nSugiero al <0x10012:0x0000000b>amo que haga buen uso de\nesta función.")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 0, unk: 22, line: 40 */ "¡Para estar siempre sonriente,\nun gran plato de sopa caliente!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 0, unk: 6, line: 4 */ "<icon 20> Gran plaza de Altárea")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 22, line: 22 */ "Gimnasio")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Aviso para el <0x10012:0x0000000b>amo: los pelícaros no\npueden volar de noche. \n\n\nSugiero que el <0x10012:0x0000000b>amo se vaya a la cama\na disfrutar de un sueño reparador y\nparta de nuevo al salir el sol.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<icon 20> Academia de caballeros")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "Aviso importante sobre el<color red< umbral del\njuicio >coloroff>que se abre mediante el Cantar\ndel Héroe.\n\nDetecto que se encuentra en algún\nlugar de Celéstea.\n\n\nPara localizar la ubicación exacta,\nsugiero emplear el <color red<rastreador>coloroff>.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10008:0x00cd>Casa de Paula,\n<0x10008:0xffcd>la de la consigna")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "Se buscan jornaleros para\nhuerto de calabazas.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 6, unk: 0, line: 6 */ "¡Prohibido correr por\nlos pasillos!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 22, unk: 0, line: 24 */ "Casa de Joana")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf(/* textboxtype: 0, unk: 2, line: 76 */ "El <0x10012:0x00000001>amo ha superado con éxito todos\nlos juicios del espíritu.\n\n\nLe doy la enhorabuena por su hazaña.")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "Existe otra gema de la ordalía idéntica\na la que el <0x10012:0x00000002>amo acaba de obtener.\n\n\nDetecto su presencia en esta misma\nisla.\n\n\nDel hallazgo de dicha gema idéntica\ndepende que podamos abrir la senda\nque lleva a la <color yellow white<Trifuerza>coloroff>.\n\n<0x1000A:0xffff00cd>Sugiero iniciar la búsqueda de esta\ngema idéntica de inmediato.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 22, unk: 0, line: 42 */ "Altárea: ¡a solo unos pocos\naleteos hacia el noroeste!")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 0, unk: 22, line: 25 */ "Casa de Cuqui")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "En Altárea solo se puede subir\na los pelícaros desde los\nlugares designados para ello.")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 0, unk: 22, line: 43 */ "Gracielle x Cor...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "Casa de Golondro y Corina")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 0, unk: 6, line: 7 */ "¡Cada cual tiene que mantener\nlimpia su habitación!\n")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "Aviso para el <0x10012:0x0000000b>amo: mi memoria ya\ncontaba con datos sobre esta isla.\n\n\nSe llama la <color blue<isla de los cantares>coloroff>, y es el\nlugar que la Diosa ha designado para el\n<0x10012:0x00000002>amo.\n\nPero la vía de acceso al edificio\ncontiguo no está registrada en mi\nmemoria, de modo que recomiendo\nexplorar los alrededores.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Haz girar el pedestal central\npara que aparezca el puente que\nlleva a la torre de la isla de los\ncantares.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf(/* textboxtype: 8, unk: 0, line: 27 */ "<0x10008:0x00cd>Casa de Milo,\n<0x10008:0xffcd>el de los utensilios")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf(/* textboxtype: 0, unk: 2, line: 79 */ "<0x10012:0x0000000b>Amo <heroname>, al nordeste de\naquí detecto una segunda columna\nde luz que conecta con las tierras\ninferiores.\nDado que es posible acceder a un nuevo\nterritorio, recomiendo ultimar todos\nlos preparativos y partir hacia allí.")
          }

          void entrypoint_107_44() {
/*<178>*/ 	start()
/*<179>*/ 	printf(/* textboxtype: 7, unk: 0, line: 45 */ "El bazar permanece cerrado\ndurante la noche.\n¡Vuelvan por la mañana!\n\nSi se trata de algo urgente,\nnuestro personal les atenderá\ndirectamente en su domicilio.\n             - Gerencia del bazar")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 8, unk: 0, line: 9 */ "Cuarto de <heroname>")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 8, line: 28 */ "Casa de Coocker")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10012:0x0000000b>Amo <heroname>, al sudoeste de\naquí detecto una tercera columna de\nluz que conecta con las tierras\ninferiores.\nDado que es posible acceder a un nuevo\nterritorio, recomiendo ultimar todos\nlos preparativos y partir hacia allí.")
          }

          void entrypoint_107_45() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 0, unk: 22, line: 46 */ "¡Hay que lavarse las manos!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 8, line: 10 */ "Cuarto de Malton")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10008:0x00cd>Casa de Gorronte,\n<0x10008:0xffcd>el vidente")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b>Amo <heroname>.\n\n\n\nPara librar a Narisha del mal que\nse ha apoderado de él, antes es\nnecesario dominar a la perfección\nel ataque tirabuzón.\nEl maestro Buhel te está esperando\nen la plataforma que hay <color red<junto a la\nestatua de pelícaro >coloroff>situada al nordeste\nde Altárea.\nAconsejo ir a hablar con él lo antes\nposible.")
          }

          void entrypoint_107_46() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "¡Hay que limpiar hasta los\nrecovecos más pequeños!")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "Cuarto de Vestro y Corvy")
          }

          void entrypoint_107_64() {
/*<170>*/ 	start()
/*<172>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<174>*/ 		printf(/* textboxtype: 0, unk: 2, line: 82 */ "<0x10012:0x0000000b>Amo <heroname>...\n\n\n\n<0x1000A:0x000d00cd>Según mis datos, la Diosa dejó en una\népoca remota varias reliquias para\nsu elegido, entre las que se cuentan\nestos cofres.")
/*<176>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf(/* textboxtype: 2, unk: 0, line: 84 */ "Si mi deducción es correcta, cada\nvez que se envía la energía de un\ncubo divino al cielo, es posible abrir\nun nuevo cofre.\nRecomiendo, por tanto, no dejar\nescapar la oportunidad siempre\nque el <0x10012:0x00000001>amo se tope con uno de\nlos cubos divinos.")
          	  case 1:
/*<171>*/ 		printf(/* textboxtype: 0, unk: 2, line: 82 */ "<0x10012:0x0000000b>Amo <heroname>...\n\n\n\n<0x1000A:0x000d00cd>Según mis datos, la Diosa dejó en una\népoca remota varias reliquias para\nsu elegido, entre las que se cuentan\nestos cofres.")
/*<177>*/ 		set_camera(-1, 0)
/*<173>*/ 		printf(/* textboxtype: 0, unk: 0, line: 83 */ "Sin embargo, debo comunicar que\ndesconozco cómo abrirlos.")
          	}
          }

          void entrypoint_107_47() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 22, unk: 0, line: 48 */ "Ahora mismo el menda está\ncurrando. Si quieres verme,\npásate por la noche.\n<0x10006:0x05cd>                                     - Terry")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 8, unk: 0, line: 12 */ "Cuarto de Gruyo")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 22, unk: 0, line: 30 */ "Bañado en la luz de la Diosa,\nel gran héroe ofrece su cantar.\nY una luz guiará así su andar.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 22, line: 13 */ "Director Gaépora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 0, unk: 22, line: 31 */ "<0x10008:0x00cd>Casa de Dorcon,\n<0x10008:0xffcd>el de la chatarrería")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "Maestro Buhel")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10008:0x00cd>Casa de Alfred,\n<0x10008:0xffcd>el de las pociones")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10012:0x00000004>Amo <heroname>,\nese <color red<resplandor verde >coloroff>que se ve ahí\ndelante es la <color blue<columna de luz >coloroff>por la que\nse desciende a las tierras inferiores.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf(/* textboxtype: 8, unk: 0, line: 51 */ "Confirmada la ubicación en el mapa.\nSugiero comprobar la posición respecto\na Altárea.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 8, line: 52 */ "En la base de esta columna existe\nuna abertura entre las nubes que\nnos permitirá el acceso a las tierras\ninferiores.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 22, unk: 0, line: 15 */ "Maestro Asteus")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 22, unk: 0, line: 33 */ "Casa de Batolo")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10012:0x00000001>Amo, confirmo la relación establecida\nentre la litografía de anoche y las\ntierras inferiores.\n\nDetecto la aparición de una columna de\nluz al sur de aquí. En su base existe una\nabertura que conecta con las tierras\ninferiores.")
/*< 66>*/ 	printf(/* textboxtype: 8, unk: 0, line: 54 */ "Sin embargo, calculo un bajo índice\nde probabilidades de supervivencia\nen caso de acometer la aventura\narmado únicamente con una espada.\nSi el <0x10012:0x00000001>amo aún no lo ha hecho, sugiero\nque pase por el bazar antes de partir\npara comprar los útiles necesarios,\ncomo <color red<pociones >coloroff>o un <color red<escudo>coloroff>.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 0, unk: 22, line: 16 */ "Cuarto de Gracielle")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 0, unk: 22, line: 34 */ "    Altárea\n   N: Efigie de la Diosa\nO: Academia          E: Viviendas\n    S: Gran plaza")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10012:0x00000001>Amo, puedo detectar la posición de\nla columna de luz desde aquí.\n\n")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf(/* textboxtype: 8, unk: 0, line: 57 */ "Recomiendo saltar al cielo en la\ndirección en la que se atisba la\ncolumna de luz y llamar al pelícaro.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 8, line: 58 */ "Recuerdo al amo que debemos partir\nen busca de Zelda. Una vez en el aire,\npuede llamar a su pelícaro con (v).<0x10011:0x09cd>")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Cuarto de Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "¡Sopa de calabaza, deliciosa\na la par que nutritiva!\nUn tazón: 10 rupias")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 6, unk: 0, line: 0 */ "Gruta de la cascada\n¡Cuidado, criaturas peligrosas\na tutiplén! ¡Niños abstenerse!")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf(/* textboxtype: 0, unk: 22, line: 19 */ "El vigente campeón del torneo\nceleste es <heroname>.\nPero ahora Altárea no está\npara muchas celebraciones.")
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 22, unk: 0, line: 18 */ "¡Hoy es el torneo celeste!\nParticipan Malton, Corvy,\nVestro y <heroname>.\n¿Quién ganará?")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<186>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 0, unk: 8, line: 61 */ "Ruego al <0x10012:0x00000004>amo <heroname> que\ncoloque la litografía en el pedestal.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 0, unk: 0, line: 59 */ "El <0x10012:0x00000004>amo <heroname> debe golpear\nese símbolo con el <color red<rayo celestial >coloroff>y luego\ncolocar la litografía.\n\nEl <color red<rayo celestial >coloroff>se invoca <color green<elevando\nhacia lo alto la espada>coloroff>.")
          		  case 1:
/*< 69>*/ 			printf(/* textboxtype: 8, unk: 0, line: 60 */ "Mi nombre es <color blue<Fay>coloroff>... Ruego al elegido\nque acuda ante este zócalo y arranque\nla espada que se halla incrustada en él.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 22, line: 37 */ "Velada musical con Calabelle\n(fecha por determinar)")
          	  case 1:
/*<142>*/ 		printf(/* textboxtype: 22, unk: 0, line: 36 */ "La actuación de Calabelle se\nsuspende temporalmente por\nfalta de acompañante.\n¡Se buscan músicos!")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 6, line: 1 */ "<icon 22> Academia de caballeros\n    Viviendas <icon 23>")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "Aviso para el <0x10012:0x00000004>amo sobre los <color red<cubos\ndivinos >coloroff>que hay repartidos por las\ntierras inferiores.\n\nDetecto en el cielo las mismas\nvibraciones que despiden al ser\ngolpeados por el <color red<rayo celestial>coloroff>.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	wait_frames(60)
/*< 56>*/ 	printf(/* textboxtype: 0, unk: 8, line: 64 */ "En el mapa aparecen marcados los\npuntos de los que provienen dichas\nvibraciones.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "Sugiero inspeccionar los alrededores.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "Para ver la lámpara de araña,\nemblema del Calabarza's,\nsuban a la segunda planta.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<icon 20> Bazar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Retrete")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 9, line: 70 */ "Calculo que la semilla tardaría\nmilenios en germinar aquí.\nNo recomiendo plantarla en este\nlugar.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 22, unk: 0, line: 39 */ "Rogamos a los señores clientes\nque guarden la compostura.\nLa lámpara se mueve lo suyo...")
          }

