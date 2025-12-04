          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "El objetivo seleccionado es\nun <color blue<lémury (día)>coloroff>.<color blue<<entrypoint_6_601>>coloroff>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 1, line: 185 */ "El número de monstruos de este tipo\nderrotados por el <0x10012:0x00000001>amo es <numeric arg0 1>.\nLa habilidad de combate contra el\nmismo es <string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 2, unk: 0, line: 95 */ "En estos momentos no dispongo de\nsuficientes datos sobre este monstruo.\n\n\nLa comparación con otros seres\nes imposible debido a su inmenso\ntamaño y a su terrible aura.[1-]Más\ndetalles[2]¡Gracias!")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf(/* textboxtype: 2, unk: 0, line: 96 */ "Puedo confirmar que el <color red<sello de piedra\n>coloroff>que lleva en la cabeza es el mismo que\nestaba clavado en la base de la <color blue<tierra\ndel presidio>coloroff>.\nDeduzco que se le podría infligir daño\nintroduciendo por completo el pilar en\nsu cabeza.\n\nPero antes habría que detener su\navance, por lo que sugiero que el <0x10012:0x00000002>amo\ngolpee sus apéndices con la espada.[1-]Más\ndetalles[2]¡Gracias!")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 2, unk: 0, line: 97 */ "La lógica dicta que el monstruo no\npodrá seguir avanzando si se le cortan\nlos apéndices de las patas.\n\nRecomiendo aprovechar las columnas\nde aire para adelantar al monstruo\ny evitar así tener que perseguirlo por\ndetrás para atacar.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf(/* textboxtype: 2, unk: 0, line: 98 */ "Mi análisis revela que sería posible\nllevar a cabo un <color green<ataque giratorio\n>coloroff>situándose entre los apéndices de\nlas patas del monstruo.\nTambién es posible atacar desde lejos\ncon <color yellow<bombas >coloroff>si no se desea asumir tanto\nriesgo.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf(/* textboxtype: 2, unk: 0, line: 100 */ "En estos momentos no dispongo de\nsuficientes datos sobre este monstruo.\n\n\nSin embargo, hay una diferencia\nnotable con respecto a su apariencia\nanterior: ahora está dotado de una\nespecie de brazos.\nAdemás, confirmo que el poder\nde su aura maléfica ha aumentado\nconsiderablemente.[1-]Más\ndetalles[2]¡Gracias!")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf(/* textboxtype: 2, unk: 0, line: 101 */ "Infiero que el procedimiento básico\npara sellarlo no ha cambiado mucho\ncon respecto a la vez anterior.\n\nCortarle los apéndices de las patas y las\nmanos no debería suponer demasiada\ncomplicación, según mis cálculos. Sin\nembargo, no es algo prioritario.[1-]Más\ndetalles[2]¡Gracias!")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf(/* textboxtype: 2, unk: 0, line: 102 */ "La probabilidad de que el mecanismo\nque ha construido <color blue<Vilán >coloroff>resulte\nefectivo contra el monstruo es del\n100%.\nServirá para detener su avance y así\ncontar con más tiempo para acabar\ncon él.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf(/* textboxtype: 2, unk: 0, line: 103 */ "El mecanismo de <color blue<Vilán >coloroff>puede\nreubicarse oprimiendo (ControlStick).\n\n\nMoverlo resultará útil cuando no\nhaya ángulo suficiente para alcanzar\nal monstruo.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "Pequeños animales típicos de <color blue<Neburia>coloroff>.\nDesde que Mursego se volvió humano\nya no se vuelven agresivos al caer la\nnoche.")
          	  case 1:
/*<296>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "Son pequeñas criaturas que habitan en\n<color blue<Neburia>coloroff>. Pacíficos durante el día, al\ncaer la noche cambian radicalmente\ny se vuelven altamente agresivos.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "Aunque no dispongo de mucha\ninformación, puedo confirmar\nque es el receptáculo del alma\ndel <color blue<Heraldo de la Muerte>coloroff>.\nTambién he detectado que el monstruo\nha desarrollado una especie de cola.\n\n\nRecomiendo valerse del mecanismo\nideado por <color blue<Vilán >coloroff>para combatir con él.[1-]Más\ndetalles[2]¡Gracias!")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 2, unk: 0, line: 106 */ "Infiero que el procedimiento básico\npara sellarlo no ha cambiado mucho\ncon respecto a la vez anterior.\n\nCortarle los apéndices de las patas y las\nmanos no debería suponer demasiada\ncomplicación, según mis cálculos. Sin\nembargo, no es algo prioritario.[1-]Más\ndetalles[2]¡Gracias!")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf(/* textboxtype: 2, unk: 0, line: 107 */ "Cuando el monstruo caiga aturdido,\npuede que con su cuerpo impida\nacceder al <color red<sello de piedra >coloroff>de la cabeza.\n\nSi esto sucede, recomiendo descender\nun nivel y usar las columnas de aire\npara llegar hasta él.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf(/* textboxtype: 2, unk: 0, line: 108 */ "El monstruo ha evolucionado tanto\nque calculo un 0% de posibilidades\nde derrotarlo valiéndose solo de la\nespada.\nAconsejo usar el invento de Vilán.\nComo medida alternativa, el <color red<<0x10012:0x00000002>amo>coloroff>\n<color red<podría lanzarse a sí mismo >coloroff>si\nla situación lo requiere.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 2, unk: 0, line: 169 */ "Su apariencia externa ha cambiado\nen un 90% desde el último encuentro.\nDetecto un aura oscura que emana\nde su cuerpo.\nAdemás, se percibe un cambio de estilo\nde pelea de Grahim como consecuencia\nde la leve cantidad de daño que ha\nrecibido hasta ahora.[1-]Más\ndetalles[2]¡Gracias!")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 2, unk: 0, line: 170 */ "Deduzco que los ataques al <color red<punto débil\nde su pecho >coloroff>siguen siendo los más\nefectivos.\n\nSin embargo, hay una probabilidad\ndel 100% de que bloquee cualquier\nataque normal al pecho.[1-]Más\ndetalles[2]¡Gracias!")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 2, unk: 0, line: 171 */ "Sugiero que el <0x10012:0x00000002>amo haga uso\nde su escudo para desviar la hoja\nde la espada con la que Grahim\ncubre el <color red<punto débil de su pecho>coloroff>.\nSe recomienda aprovechar cualquier\nocasión en la que baje la guardia\npara golpearlo repetidamente.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf(/* textboxtype: 2, unk: 0, line: 172 */ "Mi análisis revela que es imposible\nrepeler la espada de Grahim con\nun solo ataque.\n\nPara conseguirlo, aconsejo <color red<golpear\nvarias veces seguidas en la misma\ndirección>coloroff>.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "Pequeños animales típicos de <color blue<Neburia>coloroff>.\nDesde que Mursego se volvió humano\nya no se vuelven agresivos al caer la\nnoche.")
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 2, unk: 0, line: 4 */ "Durante el día son cariñosos con\nlas personas, pero por las noches\nse vuelven tremendamente hostiles.\nSugiero desconfiar de su apariencia.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0, line: 110 */ "Se trata de un ser inmortal, origen de\ntodas las criaturas diabólicas.\n\n\nLa leyenda dice que su aspecto varía\nsegún quien lo mire y también en\nfunción de la época.[1-]Más\ndetalles[2]¡Gracias!")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf(/* textboxtype: 2, unk: 0, line: 124 */ "Es obvio que el <color red<rayo celestial >coloroff>no puede\nalcanzar la espada del <0x10012:0x00000001>amo porque este\nlugar se halla bajo el influjo del\nHeraldo.\nPor lo tanto, no será posible ejecutar\nningún ataque con el <color red<rayo celestial>coloroff>.[1-]Más\ndetalles[2]¡Gracias!")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf(/* textboxtype: 2, unk: 0, line: 112 */ "La probabilidad de que uno de los\nataques normales del <0x10012:0x00000002>amo inflija\nel más mínimo daño al Heraldo es\ndel 0%.\nSerá necesario emplear ataques que\nsuperen su defensa, como <color red<estocadas\nsucesivas desde diferentes ángulos>coloroff>.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf(/* textboxtype: 2, unk: 0, line: 113 */ "Según mis cálculos, la probabilidad\nde dañar al Heraldo aumenta cuando\neste descuida la guardia al levantar\nla espada sobre su cabeza.\nNo obstante, la probabilidad de que\nel Heraldo bloquee cualquier ataque\ndirigido hacia puntos cercanos\na su espada<pause 15> es del 100%.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf(/* textboxtype: 2, unk: 0, line: 111 */ "Mi análisis indica que la única arma\ncapaz de infligirle daño al Heraldo de\nla Muerte es la <color yellow<Espada Maestra>coloroff>.[1-]Más\ndetalles[2]¡Gracias!")
/*<150>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_151
          				  case 1:
          				}
          			  case 2:
          				goto flw_147
          			  case 3:
          				goto flw_147
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_690() {
/*<133>*/ 	start()
/*<134>*/ 	printf(/* textboxtype: 2, unk: 0, line: 174 */ "Su apariencia externa ha cambiado\nen un 90% desde el último encuentro.\nUn aura oscura emana de su cuerpo\ny cuenta con un arma nueva.[1-]Más\ndetalles[2]¡Gracias!")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 2, unk: 0, line: 176 */ "Según mis cálculos, el <0x10012:0x00000002>amo puede\n<color red<romper >coloroff>la espada de Grahim si la\ngolpea con la suya.\n\nDeduzco que lo que da vida al arma\nde Grahim es su propio poder mágico.\n\n\nComo resultado de las graves heridas\nrecibidas, la espada que empuña su\nmano se ha vuelto mucho más frágil.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf(/* textboxtype: 2, unk: 0, line: 177 */ "El núcleo de la espada de Grahim\npresenta un comportamiento similar\nal del <color red<punto débil de su pecho>coloroff>.\n\nPor tanto, la probabilidad de destruir\nla espada al atacar el <color red<núcleo >coloroff>de la\nmisma es del 100%.\n\nAconsejo observar detenidamente los\nmovimientos de la espada y golpear\nde forma repetida en el <color red<mismo lugar>coloroff>.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 2, unk: 0, line: 110 */ "Se trata de un ser inmortal, origen de\ntodas las criaturas diabólicas.\n\n\nLa leyenda dice que su aspecto varía\nsegún quien lo mire y también en\nfunción de la época.[1-]Más\ndetalles[2]¡Gracias!")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf(/* textboxtype: 2, unk: 0, line: 124 */ "Es obvio que el <color red<rayo celestial >coloroff>no puede\nalcanzar la espada del <0x10012:0x00000001>amo porque este\nlugar se halla bajo el influjo del\nHeraldo.\nPor lo tanto, no será posible ejecutar\nningún ataque con el <color red<rayo celestial>coloroff>.[1-]Más\ndetalles[2]¡Gracias!")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf(/* textboxtype: 2, unk: 0, line: 120 */ "Deduzco que el <0x10012:0x00000002>amo podría usar la\nenergía eléctrica de la misma manera\nque lo hace el Heraldo.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf(/* textboxtype: 2, unk: 0, line: 121 */ "La <color red<<color yellow<Espada Maestra<color red< >coloroff>puede almacenar\nenergía eléctrica del mismo modo que\nacumula energía al invocar el <color red<rayo\ncelestial>coloroff>.\nLa clave está en elevar la espada\nen cuanto un relámpago ilumine\nel cielo.\n\nSe recomienda precaución, dado que\nsi el movimiento no se ejecuta bien,\nel <0x10012:0x00000001>amo perderá el conocimiento y\nquedará a merced del Heraldo.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf(/* textboxtype: 2, unk: 0, line: 119 */ "Confirmo que la espada del Heraldo\nalmacena electricidad y que puede\nlanzarla luego contra su enemigo en\nforma de rayos.\nAdemás, si el arma del <0x10012:0x00000002>amo toca la\ndel Heraldo cuando esté electrificada,\nrecibirá una potente descarga.<pause 15>[1-]Más\ndetalles[2]¡Gracias!")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_154
          			  case 2:
          				goto flw_154
          			  case 3:
          				goto flw_154
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_605() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Se trata de un parásito ocular gigante\nque vive adherido a <color blue<Narisha>coloroff>.\n\n\nEs un monstruo terrible, capaz\nde controlar la mente y el cuerpo\nde su huésped.[1-]Más\ndetalles[2]¡Gracias!")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0, line: 10 */ "Tras el análisis correspondiente,\ninfiero que la espada del <0x10012:0x00000002>amo puede\n<color red<devolver >coloroff>los proyectiles que escupe\n<color blue<Aléginor>coloroff>.\nSegún mis cálculos, este es el método\nmás efectivo para librarse del\nmonstruo.\n[1-]Más\ndetalles[2]¡Gracias!")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 2, unk: 0, line: 11 */ "Deduzco que el punto débil de este\nmonstruo es su <color red<ojo >coloroff>central.\n\n\nPero puedo confirmar que los ataques\nal <color red<ojo >coloroff>resultarán inútiles mientras\ntenga desplegadas las <color red<aletas >coloroff>de la\ncabeza.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 2, unk: 0, line: 12 */ "Es importante apuntar en la dirección\ncorrecta para que los proyectiles\nrepelidos alcancen a Aléginor.\n\nSi el <0x10012:0x00000001>amo mueve su espada de izquierda\na derecha, lanzará los proyectiles hacia\nlos lados.<pause 15> Si lo hace de arriba abajo,\nlos devolverá hacia delante.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0, line: 187 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\nEs posible fijar un enemigo\nconcreto como objetivo con (Z).\nDespués, el <0x10012:0x0000000b>amo puede oprimir (v)\ny le presentaré un informe.<0x10011:0x07cd><0x10011:0x09cd>\n¿Quiere el <0x10012:0x0000000b>amo oírlo ahora?[1-]Sí[2]No")
/*<166>*/ 	story_flags[772 /* us: 805A9B2A 0x10, jp: 805ACDAA 0x10 */] = true;
/*<167>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_69:
/*< 69>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 56>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 46}) {
          			  case 0:
/*<250>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf(/* textboxtype: 2, unk: 0, line: 76 */ "Mi análisis revela que las dagas que\nGrahim lanza pueden salir disparadas\nen cualquier dirección.\n\nEs posible detenerlas asestando un\nespadazo en el momento justo, pero las\nposibilidades de éxito son escasas.[1-]Más\ndetalles[2]¡Gracias!")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 2, unk: 0, line: 77 */ "Estoy en disposición de confirmar\nque Grahim posee la capacidad de\nteletransportarse.\n\nSegún mis observaciones, justo tras\nteletransportarse, Grahim se vuelve\nvulnerable durante unos instantes.\n\nSe recomienda aprovechar dicha\ncoyuntura para atacar, aunque\nes probable que Grahim se defienda\ncon su espada.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf(/* textboxtype: 2, unk: 0, line: 78 */ "Recomiendo al <0x10012:0x00000002>amo <color red<hacer frente y\natacar>coloroff> a Grahim con la espada cuando\neste cargue por los lados.\n\nLa probabilidad de que revele con su\npostura hacia qué lado atacará cuando\nprepare su embestida es del 100%.\n\nSi resulta demasiado difícil acertar\na golpearlo justo en el momento en\nel que se pone al alcance del acero del\n<0x10012:0x00000002>amo, aconsejo usar el <color green<ataque giratorio>coloroff>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf(/* textboxtype: 2, unk: 0, line: 75 */ "He detectado un cambio en el estilo\nde pelea de Grahim desde que el\ncombate dio comienzo.\n\nDeduzco que esto se debe a las leves\nheridas que ha recibido hasta el\nmomento.[1-]Más\ndetalles[2]¡Gracias!")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_53
          			  case 2:
          				goto flw_53
          			  case 3:
          				goto flw_53
          			}
          		  case 1:
/*< 63>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 54}) {
          			  case 0:
/*<249>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_62:
/*< 62>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Detecto que Grahim confía totalmente\nen sí mismo. Conviene prestar atención\na su <color red<mano derecha>coloroff>, dado que intentará\natrapar la espada del <0x10012:0x00000002>amo al atacar.\nConfirmo que observa la <color red<dirección en\nla que el <0x10012:0x00000002>amo sujeta la espada >coloroff>para\nagarrarla. Por tanto, sugiero atacar\nen la dirección opuesta a su mano.[1-]Más\ndetalles[2]¡Gracias!")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 2, unk: 0, line: 73 */ "Cuando Grahim atrape la espada del\n<0x10012:0x00000001>amo, la forma más efectiva de liberarla\nconsistirá en mover la espada en la\n<color red<dirección en la que se abran sus dedos>coloroff>.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf(/* textboxtype: 2, unk: 0, line: 74 */ "Según mi análisis, los dedos de Grahim\nsiempre apuntan hacia arriba cuando\nagarran la espada del <0x10012:0x00000001>amo.\n\nSe infiere que la probabilidad\nde escapar a su agarre <color red<al mover la\nespada hacia arriba >coloroff>es del 100%.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Detecto que Grahim confía totalmente\nen sí mismo. Conviene prestar atención\na su <color red<mano derecha>coloroff>, dado que intentará\natrapar la espada del <0x10012:0x00000002>amo al atacar.\nConfirmo que observa la <color red<dirección en\nla que el <0x10012:0x00000002>amo sujeta la espada >coloroff>para\nagarrarla. Por tanto, sugiero atacar\nen la dirección opuesta a su mano.[1-]Más\ndetalles[2]¡Gracias!")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_62
          			  case 2:
          				goto flw_62
          			  case 3:
          				goto flw_62
          			}
          		}
          	  case 1:
/*<168>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "<0x10012:0x00000005>Como ordene el amo. Si desea\ninformación más adelante, el amo\nsolo tiene que solicitar mi presencia.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 2, unk: 0, line: 187 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\nEs posible fijar un enemigo\nconcreto como objetivo con (Z).\nDespués, el <0x10012:0x0000000b>amo puede oprimir (v)\ny le presentaré un informe.<0x10011:0x07cd><0x10011:0x09cd>\n¿Quiere el <0x10012:0x0000000b>amo oírlo ahora?[1-]Sí[2]No")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 2, unk: 0, line: 135 */ "La probabilidad de penetrar el pétreo\nexoesqueleto de la criatura con la\nespada es del 0%.\n\nRecomiendo usar un arma altamente\ndestructiva junto con maniobras de\n<color red<evasión>coloroff>.[1-]Más\ndetalles[2]¡Gracias!")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 2, unk: 0, line: 136 */ "Debido a la elevada temperatura de su\ncuerpo, la probabilidad de que una\n<color yellow<bomba >coloroff>explote justo al alcanzar a\nMalócula es del 100%.\nSin embargo, deduzco que los ataques\na su coraza exterior solo servirán\npara enfurecerla. Recomiendo tratar\nde buscar algún punto débil.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 2, unk: 0, line: 137 */ "Mi análisis indica que para eliminar la\ncapa de roca que cubre a Malócula será\nnecesario infligirle daños internos.\n\nAconsejo calcular el momento justo y\n<color red<lanzarle una bomba a la boca >coloroff>en cuanto\naspire grandes bocanadas de aire.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "<0x10012:0x00000005>Como ordene el amo. Si desea\ninformación más adelante, el amo\nsolo tiene que solicitar mi presencia.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 2, unk: 0, line: 187 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\nEs posible fijar un enemigo\nconcreto como objetivo con (Z).\nDespués, el <0x10012:0x0000000b>amo puede oprimir (v)\ny le presentaré un informe.<0x10011:0x07cd><0x10011:0x09cd>\n¿Quiere el <0x10012:0x0000000b>amo oírlo ahora?[1-]Sí[2]No")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 2, unk: 0, line: 25 */ "Las gigantescas tenazas de esta\nbestia son uno de sus <color red<puntos débiles>coloroff>,\naunque hay que calcular bien\nel ángulo de ataque adecuado.[1-]Más\ndetalles[2]¡Gracias!")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf(/* textboxtype: 2, unk: 0, line: 26 */ "Se entierra frecuentemente bajo\nla arena cuando se siente realmente\namenazado.\n\nUna vez oculto, hay una probabilidad\ndel 85% de que utilice su aguijón para\natacar al enemigo por sorpresa.\n\nRecomiendo <color red<despejar >coloroff>la arena para\nhacerlo salir de su escondrijo.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 2, unk: 0, line: 27 */ "El análisis confirma la posibilidad de\natacar al <color red<ojo central >coloroff>tras destruir sus\ntenazas. Hay un 100% de probabilidad\nde que ese sea su punto débil.\nEl <color red<ojo>coloroff>, sin embargo, está rodeado\npor una dura coraza, lo que lleva a\npensar que cualquier ataque vertical,\nhorizontal o diagonal será inefectivo.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "<0x10012:0x00000005>Como ordene el amo. Si desea\ninformación más adelante, el amo\nsolo tiene que solicitar mi presencia.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 2, unk: 0, line: 150 */ "Conocido como el \"Monstruo marino\nancestral\", se dice que era dueño y\nseñor de los mares antiguos.\n\nEs posible cortar sus gruesos\n<color red<tentáculos>coloroff>, pero dada su increíble\ncapacidad regenerativa, vuelven a\nsalirle después de cierto tiempo.[1-]Más\ndetalles[2]¡Gracias!")
/*< 45>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_268:
/*<268>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<262>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 226}) {
          			  case 0:
/*<269>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_261:
/*<261>*/ 					printf(/* textboxtype: 2, unk: 0, line: 154 */ "Para poder atacar al <color red<ojo >coloroff>vital de\nDaidagos, es necesario librarse\nantes de sus tentáculos.\n\nSegún mis cálculos, esta tarea puede\nllevarse a cabo fácilmente por medio\nde la espada.[1-]Más\ndetalles[2]¡Gracias!")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf(/* textboxtype: 2, unk: 0, line: 155 */ "Dado que sus tentáculos golpean sin\ndescanso, tratar de eliminarlos uno\na uno resulta peligroso y poco\nrecomendable.\nAconsejo concentrar las fuerzas en\nun ataque con la espada para acabar\ncon varios a la vez.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf(/* textboxtype: 2, unk: 0, line: 156 */ "Al cortar sus tentáculos, es posible\nque el monstruo suelte <color red<corazones >coloroff>o\n<color red<flechas>coloroff>.\n\nEn caso de apuro, se aconseja no\nabandonar la batalla y concentrarse\nen cortar el mayor número posible\nde tentáculos.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          				}
          			  case 1:
          				goto flw_261
          			  case 2:
          				goto flw_261
          			  case 3:
          				goto flw_261
          			}
          		  case 1:
/*< 46>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 36}) {
          			  case 0:
/*<248>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_43:
/*< 43>*/ 					printf(/* textboxtype: 2, unk: 0, line: 151 */ "Mi análisis revela que, tras cortarle\nun número determinado de tentáculos,\nDaidagos mostrará su verdadera\napariencia.\nLa probabilidad de que los tentáculos\nque obstaculizaron el avance del <0x10012:0x00000002>amo\nen el interior del barco fueran los de\nDaidagos es del 99%.\nConsidero que lo más efectivo para\nrechazarlos sería utilizar algún tipo\nde <color red<poder sagrado>coloroff>.[1-]Más\ndetalles[2]¡Gracias!")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 2, unk: 0, line: 152 */ "Según mis últimas averiguaciones,\nes posible cortar los tentáculos de\nDaidagos al acumular en la espada\nla energía del <color red<rayo celestial>coloroff>.\nDeduzco que el <color red<ojo >coloroff>es su punto débil,\npero la probabilidad de alcanzarlo con\nel rayo celestial es del 0%.\n\nSe recomienda atacar con un arma\nde largo alcance.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf(/* textboxtype: 2, unk: 0, line: 153 */ "Puedo confirmar que el <color yellow<arco >coloroff>es el arma\nmás efectiva para alcanzar el <color red<ojo >coloroff>de\nDaidagos.\n\nTras sacar el <color yellow<arco>coloroff>, el <0x10012:0x00000001>amo puede\nmoverse mediante (ControlStick2). Sugiero\ndisparar una <color red<flecha >coloroff>tras esquivar\ncualquier ataque de Daidagos.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          				}
          			  case 1:
          				goto flw_43
          			  case 2:
          				goto flw_43
          			  case 3:
          				goto flw_43
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_660() {
/*<179>*/ 	start()
/*<180>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf(/* textboxtype: 2, unk: 1, line: 67 */ "Deduzco que atacar los <color red<orbes rojos\n>coloroff>podría dar lugar a que los brazos de\nKoloktos se separasen del resto del\ncuerpo.\nSin embargo, la probabilidad de que\ndichos orbes se hallen ocultos bajo sus\nantebrazos es del 100%.[1-]Más\ndetalles[2]¡Gracias!")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 2, unk: 1, line: 68 */ "Mi análisis dictamina que los <color red<orbes\nrojos >coloroff>de Koloktos solo pueden verse\ncuando extiende por completo los\nbrazos.\nSe recomienda, por tanto, ejecutar un\nrápido contraataque cuando Koloktos\ndeje de asestar golpes con sus brazos.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf(/* textboxtype: 2, unk: 1, line: 69 */ "Según mis datos, para arrancar los\n<color red<orbes rojos >coloroff>de los brazos será necesario\nemplear el <color yellow<látigo>coloroff>.\n\nCuando Koloktos pierda los brazos,\ndejará su <color red<núcleo central >coloroff>al descubierto\ndurante breves instantes.\n\nSin embargo, no he detectado punto\nde enganche alguno, por lo que no es\nposible usar el <color yellow<látigo >coloroff>para arrancar\nel <color red<núcleo central>coloroff>.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "Es en realidad un <color blue<minimoldarg >coloroff>muy\ndesarrollado que tiene alrededor\nde mil años, de ahí que se lo conozca\ncomo el \"Escorpión milenario\".\nAl menos el 90% de su cuerpo está\nrecubierto por una dura coraza capaz\nde repeler cualquier ataque de espada.[1-]Más\ndetalles[2]¡Gracias!")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<191>*/ 	story_flags[777 /* us: 805A9B2D 0x02, jp: 805ACDAD 0x02 */] = true;
/*<192>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_87:
/*< 87>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 74>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 66}) {
          			  case 0:
/*<252>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_71:
/*< 71>*/ 					printf(/* textboxtype: 2, unk: 0, line: 85 */ "Para repeler las dagas que Grahim\nlanza de vez en cuando, sugiero\ngolpearlas con la espada en función\ndel ángulo de aproximación.\nEn caso de verse rodeado de dagas,\nsugiero emplear un <color red<ataque con la\nespada que permita golpear en todas\ndirecciones a la vez>coloroff>.[1-]¿Algo más?[2]Ya es\nsuficiente")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf(/* textboxtype: 2, unk: 0, line: 86 */ "Si el <0x10012:0x00000001>amo evita el ataque que Grahim\nlanza en cuanto se teletransporta sobre\nsu cabeza, existe una clara oportunidad\nde aprovecharlo para contraatacar.\nGrahim también se teletransporta a\notros lugares, pero adopta una postura\ndistinta a la que usa cuando planea\naparecer por encima de su objetivo.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf(/* textboxtype: 2, unk: 0, line: 87 */ "Puedo confirmar que Grahim usará\nsus dos espadas para defenderse de\nlos ataques del <0x10012:0x00000001>amo.\n\nPor lo tanto, la probabilidad de que\ndetenga cualquier secuencia de dos\nestocadas del <0x10012:0x00000002>amo es del 100%.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf(/* textboxtype: 2, unk: 0, line: 84 */ "He detectado un cambio en el estilo de\npelea de Grahim desde que el combate\ndio comienzo.\n\nDeduzco que esto se debe a las leves\nheridas que ha recibido hasta el\nmomento.[1-]Más\ndetalles[2]¡Gracias!")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_71
          			  case 2:
          				goto flw_71
          			  case 3:
          				goto flw_71
          			}
          		  case 1:
/*< 81>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 74}) {
          			  case 0:
/*<251>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					printf(/* textboxtype: 2, unk: 0, line: 81 */ "Según mis datos, las dagas que lanza\nGrahim tienen una función defensiva.\n\n\nPor lo tanto, confirmo que destruir las\ndagas con antelación constituye un\nmodo de reducir su defensa.[1-]Más\ndetalles[2]¡Gracias!")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf(/* textboxtype: 2, unk: 0, line: 82 */ "Preveo que Grahim tratará de\nagarrar la espada del <0x10012:0x00000002>amo con\nsu mano derecha.\n\nSi esto sucede, se recomienda <color red<mover\nla espada hacia arriba >coloroff>para intentar\nabrir los dedos de Grahim.\n\nSin embargo, la probabilidad de que\nsea necesario repetir esta táctica\npara que resulte efectiva es del 100%.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf(/* textboxtype: 2, unk: 0, line: 83 */ "Para alcanzar a Grahim hará falta\nevitar la trayectoria de las dagas y su\nmano derecha al lanzar las estocadas.\n\nGrahim suele anticiparse a los\nmovimientos del <0x10012:0x00000002>amo y detener\nsus ataques con la mano derecha, pero\n<color red<en ocasiones reacciona con lentitud>coloroff>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          				}
          			  case 1:
          				goto flw_80
          			  case 2:
          				goto flw_80
          			  case 3:
          				goto flw_80
          			}
          		}
          	  case 1:
/*<193>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf(/* textboxtype: 2, unk: 0, line: 17 */ "Estos gigantescos arácnidos suelen\nhabitar en las profundidades de los\nbosques.\n\nUtilizan su pegajosa seda para\nparalizar a sus presas al atacar.\nSu punto débil está en el abdomen,\noculto bajo sus robustas corazas.\n[1-]Más\ndetalles[2]¡Gracias!")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf(/* textboxtype: 2, unk: 0, line: 19 */ "Puedo confirmar que tienden a\naproximarse a sus presas de espaldas\ncon objeto de ocultar su punto débil.\n\nPor lo tanto, para conseguir alcanzar\nsu punto débil habrá que descubrir\nalgún modo de darles la vuelta.\n[1-]¿Algo\nmás?[2]Ya basta")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf(/* textboxtype: 2, unk: 0, line: 20 */ "Su único punto débil es el abdomen, ya\nque el resto del cuerpo está protegido\npor un recio exoesqueleto. Recomiendo\nemplear el <color green<golpe de gracia >coloroff>contra ellas.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf(/* textboxtype: 2, unk: 1, line: 185 */ "El número de monstruos de este tipo\nderrotados por el <0x10012:0x00000001>amo es <numeric arg0 1>.\nLa habilidad de combate contra el\nmismo es <string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf(/* textboxtype: 2, unk: 0, line: 18 */ "Puedo confirmar que utilizan sus\ncorazas dorsales como escudos con\nobjeto de ocultar su punto débil\nante cualquier ataque enemigo.\nPor tanto, para conseguir acabar con\nellas habrá que descubrir algún modo\nde darles la vuelta.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf(/* textboxtype: 2, unk: 0, line: 16 */ "Estos gigantescos arácnidos suelen\nhabitar en las profundidades de los\nbosques.\n\nUtilizan su pegajosa seda para\nparalizar a sus presas al atacar.\nSu punto débil está en el abdomen,\noculto bajo sus robustas corazas.\nContinúo analizando sus patrones\nde conducta en busca de más datos.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 2, unk: 1, line: 66 */ "Gracias a la energía maléfica que\nGrahim le ha conferido, su poder\nse ha multiplicado por diez.\n\nLos <color red<orbes rojos >coloroff>de su torso y sus brazos\npodrían ser la clave para desmembrar\na Koloktos.[1-]Más\ndetalles[2]¡Gracias!")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 2, unk: 0, line: 134 */ "Todo su cuerpo está recubierto de\nrocas incandescentes, con las que\noculta su <color red<ojo>coloroff>, el único punto débil\nde su cuerpo.\nSi se logra eliminar toda la capa\nde piedra que cubre su piel, las\nposibilidades de éxito aumentarán\nsustancialmente.[1-]Más\ndetalles[2]¡Gracias!")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "La información disponible sobre este\nsujeto es bastante limitada. Se hace\nllamar \"<color blue<Señor de los demonios>coloroff>\".\n\nDetecto que lo rodea un halo maléfico\ny que su habilidad de combate es muy\nalta. Pero, según mi análisis, no suele\nmostrar su poder si no es necesario.[1-]Más\ndetalles[2]¡Gracias!")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "El <color blue<Señor de los demonios >coloroff>gobierna\na sus secuaces desde las sombras.\nSu poderío físico y psíquico se\ncomplementa con sus artes mágicas.\nAnte todo, es un caballero, aunque\nno tiene reparos en desplegar\nabiertamente toda su cólera si la\nsituación así lo requiere.[1-]Más\ndetalles[2]¡Gracias!")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Tras completar el análisis sobre\nel comportamiento de este enemigo,\ninformo al <0x10012:0x0000000b>amo <heroname>\nde que dispongo de nuevos datos.\n¿Quiere el <0x10012:0x0000000b>amo oírlos ahora?[1-]Sí[2]No")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 90 */ "Está acumulando todo su poder, de ahí\nque se haya producido una alteración\nen su masa muscular.\n\nEs probable que ninguna de las armas\nde las que dispone el <0x10012:0x00000001>amo pueda\ninfligirle daño alguno.[1-]Más\ndetalles[2]¡Gracias!")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 2, unk: 0, line: 91 */ "Mi análisis revela que los golpes\nde la espada del <0x10012:0x00000001>amo solo lograrán\nque <color red<Grahim retroceda ligeramente>coloroff>.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 2, unk: 0, line: 92 */ "He detectado que Grahim tiende\na mantenerse siempre en el centro\nde la plataforma.\n\nLa probabilidad de que esta forma de\ncomportamiento sea para evitar caerse\nde la plataforma es del 85%.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf(/* textboxtype: 2, unk: 0, line: 93 */ "Al igual que la vez anterior, calculo un\n95% de probabilidades de que Grahim\n<color red<bloquee >coloroff>los ataques del <0x10012:0x00000002>amo.\n\nRecomiendo prestar mucha atención\na cualquier alteración en la guardia\ndel adversario y también a la postura\nen la que coloque sus <color red<manos>coloroff>.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<253>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<288>*/ 				printf(/* textboxtype: 2, unk: 0, line: 90 */ "Está acumulando todo su poder, de ahí\nque se haya producido una alteración\nen su masa muscular.\n\nEs probable que ninguna de las armas\nde las que dispone el <0x10012:0x00000001>amo pueda\ninfligirle daño alguno.[1-]Más\ndetalles[2]¡Gracias!")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf(/* textboxtype: 2, unk: 0, line: 91 */ "Mi análisis revela que los golpes\nde la espada del <0x10012:0x00000001>amo solo lograrán\nque <color red<Grahim retroceda ligeramente>coloroff>.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 2, unk: 0, line: 92 */ "He detectado que Grahim tiende\na mantenerse siempre en el centro\nde la plataforma.\n\nLa probabilidad de que esta forma de\ncomportamiento sea para evitar caerse\nde la plataforma es del 85%.[1-]Más\ndetalles[2]Ya es\nsuficiente")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf(/* textboxtype: 2, unk: 0, line: 13 */ "Por el momento, esta es toda la\ninformación de la que dispongo.\n\n\nCuando consiga más datos para el <0x10012:0x00000002>amo,\nsu espada brillará. Y al oprimir (v),\nacudiré a su llamada.<0x10011:0x09cd>\n\nPara más información sobre el equipo\no su ubicación actual, el <0x10012:0x00000002>amo puede\nelegir la opción <color red<Estado actual>coloroff>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf(/* textboxtype: 2, unk: 0, line: 89 */ "Su apariencia externa ha cambiado\nen un 90% desde el último encuentro.\nDetecto un aura oscura que emana\nde su cuerpo.\nPrecaución, <0x10012:0x00000001>amo. Se trata de un\nenemigo muy poderoso, capaz de\nacabar con cualquier oponente de\nun solo golpe.[1-]Más\ndetalles[2]¡Gracias!")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 2, unk: 0, line: 191 */ "Concluido el análisis preliminar, tengo\ncierta información sobre el <color blue<Heraldo\nde la Muerte>coloroff>, amo <heroname>.\n\n¿Quiere mi <0x10012:0x0000000b>amo oírla ahora?[1-]Sí[2]No")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf(/* textboxtype: 2, unk: 0, line: 124 */ "Es obvio que el <color red<rayo celestial >coloroff>no puede\nalcanzar la espada del <0x10012:0x00000001>amo porque este\nlugar se halla bajo el influjo del\nHeraldo.\nPor lo tanto, no será posible ejecutar\nningún ataque con el <color red<rayo celestial>coloroff>.[1-]Más\ndetalles[2]¡Gracias!")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf(/* textboxtype: 2, unk: 0, line: 111 */ "Mi análisis indica que la única arma\ncapaz de infligirle daño al Heraldo de\nla Muerte es la <color yellow<Espada Maestra>coloroff>.[1-]Más\ndetalles[2]¡Gracias!")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 2, unk: 0, line: 122 */ "También confirmo que la espada del\nHeraldo almacena electricidad y que\npuede lanzarla luego contra su enemigo\nen forma de rayos.\nAdemás, si el arma del <0x10012:0x00000002>amo toca la del\nHeraldo cuando esté electrificada,\nrecibirá una potente descarga.[1-]Más\ndetalles[2]¡Gracias!")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf(/* textboxtype: 2, unk: 0, line: 123 */ "Necesito un poco más de tiempo para\nrecabar información sobre el Heraldo.\n\n\nEn breves momentos, el <0x10012:0x00000001>amo podrá\noprimir (Z) para fijar al Heraldo\ncomo objetivo y (v) para llamarme.\nAcudiré con un informe actualizado.<0x10011:0x07cd><0x10011:0x09cd>")
          					  case 1:
          					}
          				  case 1:
          					goto flw_229
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
/*<223>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "<0x10012:0x00000005>Como ordene el amo. Si desea escuchar\nmis informes, solo debe seleccionar un\nobjetivo con (Z) y oprimir (v) para que\nacuda en su ayuda.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

