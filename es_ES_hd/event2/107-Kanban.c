          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x02\x04\x02\x14CD Efigie de la Diosa")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("Cuarto de baño")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf("Tengo información importante...\n\n\n\nLa espada del \x0E\x01\x12\x04\x00\x0Bamo se ha fortalecido,\ny ahora es posible <r<rastrear>> con ella\nla localización exacta de las <y<gemas\nde gratitud>>.\nAsí pues, he añadido las <y<gemas de\ngratitud>> como objetivo del <r<rastreador>>.<pling>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf("El \x0E\x01\x12\x04\x00\x02amo ya ha reunido todas las gemas\nde gratitud. Lo felicito por su hazaña.")
          	  case 1:
/*< 64>*/ 		printf("Aviso importante, \x0E\x01\x12\x04\x00\x0Bamo...\n\n\n\nLa espada del \x0E\x01\x12\x04\x00\x0Bamo tiene ahora más\npotencia y por ello es posible <r<rastrear\n>>la ubicación de las <y<gemas de gratitud>>.\n\nLas <y<gemas de gratitud>> se han añadido\ncomo objetivo del <r<rastreador>>.<pling>\nSugiero al \x0E\x01\x12\x04\x00\x0Bamo que haga buen uso de\nesta función.")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf("¡Para estar siempre sonriente,\nun gran plato de sopa caliente!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x02\x04\x02\x14CD Gran plaza de Altárea")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf("Gimnasio")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf("Aviso para el \x0E\x01\x12\x04\x00\x0Bamo: los pelícaros no\npueden volar de noche. \n\n\nSugiero que el \x0E\x01\x12\x04\x00\x0Bamo se vaya a la cama\na disfrutar de un sueño reparador y\nparta de nuevo al salir el sol.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x02\x04\x02\x14CD Academia de caballeros")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf("Aviso importante sobre el<r< umbral del\njuicio >>que se abre mediante el Cantar\ndel Héroe.\n\nDetecto que se encuentra en algún\nlugar de Celéstea.\n\n\nPara localizar la ubicación exacta,\nsugiero emplear el <r<rastreador>>.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x08\x02ÍCasa de Paula,\n\x0E\x01\x08\x02\xFFCDla de la consigna")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf("Se buscan jornaleros para\nhuerto de calabazas.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("¡Prohibido correr por\nlos pasillos!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf("Casa de Joana")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf("El \x0E\x01\x12\x04\x00\x01amo ha superado con éxito todos\nlos juicios del espíritu.\n\n\nLe doy la enhorabuena por su hazaña.")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf("Existe otra gema de la ordalía idéntica\na la que el \x0E\x01\x12\x04\x00\x02amo acaba de obtener.\n\n\nDetecto su presencia en esta misma\nisla.\n\n\nDel hallazgo de dicha gema idéntica\ndepende que podamos abrir la senda\nque lleva a la <y+<Trifuerza>>.\n\n\x0E\x01\n\x04\xFFFFÍSugiero iniciar la búsqueda de esta\ngema idéntica de inmediato.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf("Altárea: ¡a solo unos pocos\naleteos hacia el noroeste!")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf("Casa de Cuqui")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf("En Altárea solo se puede subir\na los pelícaros desde los\nlugares designados para ello.")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf("Gracielle x Cor...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf("Casa de Golondro y Corina")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf("¡Cada cual tiene que mantener\nlimpia su habitación!\n")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf("Aviso para el \x0E\x01\x12\x04\x00\x0Bamo: mi memoria ya\ncontaba con datos sobre esta isla.\n\n\nSe llama la <b<isla de los cantares>>, y es el\nlugar que la Diosa ha designado para el\n\x0E\x01\x12\x04\x00\x02amo.\n\nPero la vía de acceso al edificio\ncontiguo no está registrada en mi\nmemoria, de modo que recomiendo\nexplorar los alrededores.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<168>*/ 	start()
/*<169>*/ 	printf("Haz girar el pedestal central\npara que aparezca el puente que\nlleva a la torre de la isla de los\ncantares.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf("\x0E\x01\x08\x02ÍCasa de Milo,\n\x0E\x01\x08\x02\xFFCDel de los utensilios")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo Link, al nordeste de\naquí detecto una segunda columna\nde luz que conecta con las tierras\ninferiores.\nDado que es posible acceder a un nuevo\nterritorio, recomiendo ultimar todos\nlos preparativos y partir hacia allí.")
          }

          void entrypoint_107_44() {
/*<178>*/ 	start()
/*<179>*/ 	printf("El bazar permanece cerrado\ndurante la noche.\n¡Vuelvan por la mañana!\n\nSi se trata de algo urgente,\nnuestro personal les atenderá\ndirectamente en su domicilio.\n             - Gerencia del bazar")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Cuarto de Link")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf("Casa de Coocker")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo Link, al sudoeste de\naquí detecto una tercera columna de\nluz que conecta con las tierras\ninferiores.\nDado que es posible acceder a un nuevo\nterritorio, recomiendo ultimar todos\nlos preparativos y partir hacia allí.")
          }

          void entrypoint_107_45() {
/*<180>*/ 	start()
/*<181>*/ 	printf("¡Hay que lavarse las manos!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf("Cuarto de Malton")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf("\x0E\x01\x08\x02ÍCasa de Gorronte,\n\x0E\x01\x08\x02\xFFCDel vidente")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAmo Link.\n\n\n\nPara librar a Narisha del mal que\nse ha apoderado de él, antes es\nnecesario dominar a la perfección\nel ataque tirabuzón.\nEl maestro Buhel te está esperando\nen la plataforma que hay <r<junto a la\nestatua de pelícaro >>situada al nordeste\nde Altárea.\nAconsejo ir a hablar con él lo antes\nposible.")
          }

          void entrypoint_107_46() {
/*<182>*/ 	start()
/*<183>*/ 	printf("¡Hay que limpiar hasta los\nrecovecos más pequeños!")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf("Cuarto de Vestro y Corvy")
          }

          void entrypoint_107_64() {
/*<170>*/ 	start()
/*<172>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<174>*/ 		printf("\x0E\x01\x12\x04\x00\x0BAmo Link...\n\n\n\n\x0E\x01\n\x04\x0DÍSegún mis datos, la Diosa dejó en una\népoca remota varias reliquias para\nsu elegido, entre las que se cuentan\nestos cofres.")
/*<176>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf("Si mi deducción es correcta, cada\nvez que se envía la energía de un\ncubo divino al cielo, es posible abrir\nun nuevo cofre.\nRecomiendo, por tanto, no dejar\nescapar la oportunidad siempre\nque el \x0E\x01\x12\x04\x00\x01amo se tope con uno de\nlos cubos divinos.")
          	  case 1:
/*<171>*/ 		printf("\x0E\x01\x12\x04\x00\x0BAmo Link...\n\n\n\n\x0E\x01\n\x04\x0DÍSegún mis datos, la Diosa dejó en una\népoca remota varias reliquias para\nsu elegido, entre las que se cuentan\nestos cofres.")
/*<177>*/ 		set_camera(-1, 0)
/*<173>*/ 		printf("Sin embargo, debo comunicar que\ndesconozco cómo abrirlos.")
          	}
          }

          void entrypoint_107_47() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Ahora mismo el menda está\ncurrando. Si quieres verme,\npásate por la noche.\n\x0E\x01\x06\x02\x5CD                                     - Terry")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf("Cuarto de Gruyo")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf("Bañado en la luz de la Diosa,\nel gran héroe ofrece su cantar.\nY una luz guiará así su andar.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf("Director Gaépora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x08\x02ÍCasa de Dorcon,\n\x0E\x01\x08\x02\xFFCDel de la chatarrería")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf("Maestro Buhel")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x08\x02ÍCasa de Alfred,\n\x0E\x01\x08\x02\xFFCDel de las pociones")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x12\x04\x00\x04Amo Link,\nese <r<resplandor verde >>que se ve ahí\ndelante es la <b<columna de luz >>por la que\nse desciende a las tierras inferiores.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf("Confirmada la ubicación en el mapa.\nSugiero comprobar la posición respecto\na Altárea.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf("En la base de esta columna existe\nuna abertura entre las nubes que\nnos permitirá el acceso a las tierras\ninferiores.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf("Maestro Asteus")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf("Casa de Batolo")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, confirmo la relación establecida\nentre la litografía de anoche y las\ntierras inferiores.\n\nDetecto la aparición de una columna de\nluz al sur de aquí. En su base existe una\nabertura que conecta con las tierras\ninferiores.")
/*< 66>*/ 	printf("Sin embargo, calculo un bajo índice\nde probabilidades de supervivencia\nen caso de acometer la aventura\narmado únicamente con una espada.\nSi el \x0E\x01\x12\x04\x00\x01amo aún no lo ha hecho, sugiero\nque pase por el bazar antes de partir\npara comprar los útiles necesarios,\ncomo <r<pociones >>o un <r<escudo>>.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf("Cuarto de Gracielle")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf("    Altárea\n   N: Efigie de la Diosa\nO: Academia          E: Viviendas\n    S: Gran plaza")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, puedo detectar la posición de\nla columna de luz desde aquí.\n\n")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf("Recomiendo saltar al cielo en la\ndirección en la que se atisba la\ncolumna de luz y llamar al pelícaro.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf("Recuerdo al amo que debemos partir\nen busca de Zelda. Una vez en el aire,\npuede llamar a su pelícaro con (v).\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Cuarto de Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf("¡Sopa de calabaza, deliciosa\na la par que nutritiva!\nUn tazón: 10 rupias")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf("Gruta de la cascada\n¡Cuidado, criaturas peligrosas\na tutiplén! ¡Niños abstenerse!")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf("El vigente campeón del torneo\nceleste es Link.\nPero ahora Altárea no está\npara muchas celebraciones.")
          	  case 1:
/*< 38>*/ 		printf("¡Hoy es el torneo celeste!\nParticipan Malton, Corvy,\nVestro y Link.\n¿Quién ganará?")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<186>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<187>*/ 		printf("Ruego al \x0E\x01\x12\x04\x00\x04amo Link que\ncoloque la litografía en el pedestal.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf("El \x0E\x01\x12\x04\x00\x04amo Link debe golpear\nese símbolo con el <r<rayo celestial >>y luego\ncolocar la litografía.\n\nEl <r<rayo celestial >>se invoca <g<elevando\nhacia lo alto la espada>>.")
          		  case 1:
/*< 69>*/ 			printf("Mi nombre es <b<Fay>>... Ruego al elegido\nque acuda ante este zócalo y arranque\nla espada que se halla incrustada en él.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf("Velada musical con Calabelle\n(fecha por determinar)")
          	  case 1:
/*<142>*/ 		printf("La actuación de Calabelle se\nsuspende temporalmente por\nfalta de acompañante.\n¡Se buscan músicos!")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x02\x04\x02\x16CD Academia de caballeros\n    Viviendas \x0E\x02\x04\x02\x17CD")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("Aviso para el \x0E\x01\x12\x04\x00\x04amo sobre los <r<cubos\ndivinos >>que hay repartidos por las\ntierras inferiores.\n\nDetecto en el cielo las mismas\nvibraciones que despiden al ser\ngolpeados por el <r<rayo celestial>>.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 56, 'param3': 6}
/*< 56>*/ 	printf("En el mapa aparecen marcados los\npuntos de los que provienen dichas\nvibraciones.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf("Sugiero inspeccionar los alrededores.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf("Para ver la lámpara de araña,\nemblema del Calabarza's,\nsuban a la segunda planta.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x02\x04\x02\x14CD Bazar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("Retrete")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("Calculo que la semilla tardaría\nmilenios en germinar aquí.\nNo recomiendo plantarla en este\nlugar.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf("Rogamos a los señores clientes\nque guarden la compostura.\nLa lámpara se mueve lo suyo...")
          }

