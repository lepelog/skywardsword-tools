          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf("<r<Explotar>> criaturas picudas es muy,\nmuy peligroso. Provocan gran onda\nexpansiva.")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf("Jefe del bosque llama a tú...\nYo acompaño.")
          			}
          		  case 1:
          			goto flw_116
          		}
          	}
          }

          void entrypoint_204_26() {
/*< 99>*/ 	start()
/*<100>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<101>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf("A faronitas gustan buenas compañías.\nSiempre <r<nadan plácidamente junto\na peces pequeños>>.")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf("Jefe del bosque llama a tú...\nYo acompaño.")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x0E¡Oooye, Link! ¡Acaban\nde aparecer unos peces muy peligrosos!\n\n\n¡Si te cruzas con ellos, ten mucho\ncuidado!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf("¡Bosque lleno de agua!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x00\x0E¡Hola, Link!\n¿Ya has encontrado todas\nlas faronitas? ¡Fantástico!\n\n¡Ahora date prisa! ¡Seguro que la\n<b<dragona del agua >>te está esperando!")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf("¡Dragona del agua muy enfadada!\n¡Mucho!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf("¡Monstruos desaparecen de bosque\npoco a poco!")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf("¡Cuidado, tú! Corriente muy peligrosa\npara los de tu especie.\n\n\nYo recomienda mejor salida\npor otro lado.")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf("Deduzco que se refiere al uso\ndel <r<rastreador>>.\n\n\nEs una buena sugerencia, \x0E\x01\x12\x04\x00\x02amo.\nTengo los datos necesarios sobre\nlas características de las faronitas.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf("He configurado el <pling><r<rastreador>>\npara que reaccione ante las\nfaronitas. Resultará útil para\nla búsqueda.\nSin embargo, debo recordarle que\nel rastreador no funciona <r<bajo\nel agua>>. Recomiendo por tanto\nprestar máxima atención.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf("¡Cuidado, cuidado! ¡Corriente muy\nfuerte aquí! Tú sale mejor por arriba.")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf("¡Bosque lleno de agua!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf("")
          	  case 1:
/*<177>*/ 		printf("")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf("Faronitas guardan oxígeno dentro.\nSi tú atrapas faronita, <r<recibes algo\nde oxígeno>>.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf("Jefe del bosque llama a tú...\nYo acompaño.")
          			}
          		  case 1:
          			goto flw_191
          		}
          	}
          }

          void entrypoint_204_01() {
          	start()
/*<  2>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 23>*/ 			printf("\x0E\x01\x09\x04\x00\x07El bosque está inundado...\n¡No sé que vamos a hacer ahora\npara sobrevivir! Dale las gracias de\nmi parte a la <b<dragona del agua>>...")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Te voy a dar un consejo de lo más útil!\nSi quieres quitar de en medio una roca,\ndale un buen golpe... ¡puede que\nconsigas que eche a rodar!")
          				  case 1:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x00\x07¡Creo que el jefe te está llamando!\n¡Deberías ir a ver qué quiere!")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x04¡Cómo me asusté cuando empezó\na brotar agua de las <r<raíces del gran\nárbol>><pling>!\n\nAdemás, con tanta agua ya no hay\nquien se esconda. \x0E\x01\x09\x04\x11\x05¿Crees que el bosque\nrecuperará su antiguo aspecto?")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf("\x0E\x01\x09\x04\x09\x0C¡¿Cuándo bajará el nivel de las aguas?!\n¡No sé nadar!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf("\x0E\x01\x09\x04\x09\x0CPuedes utilizar el rastreo o lo que\nquieras, ¡pero tienes que encontrar\ncuanto antes las faronitas!")
          				  case 1:
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x07¡Creo que el jefe te está llamando!\n¡Deberías ir a ver qué quiere!")
          				}
          			  case 1:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x09\x0C¿Dices que la <b<dragona del agua >>ha\ninundado el bosque? ¡Querrá un kyu\npasado por agua para cenar!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf("\x0E\x01\x09\x04\x09\x0C¡Esto es el fin! ¿Qué será del bosque?")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x00\x07El bosque está inundado...\n¡No sé que vamos a hacer ahora\npara sobrevivir! Dale las gracias de\nmi parte a la <b<dragona del agua>>...")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf("\x0E\x01\x09\x04\x11\x0BSi quieres más información sobre\nlas faronitas, pídele consejo a\nlas paradusas.\n[1]¿Paradusas?[2-]Ya sabía")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf("\x0E\x01\x09\x04\x0C\x01¿No las conoces? Son unos seres con\nuna especie de trompa que viven en\nel agua.")
          						flw_179:
/*<179>*/ 						printf("\x0E\x01\x09\x04\x0B\x05¡Cuando las veas, intenta hablar\ncon ellas!")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf("\x0E\x01\x09\x04\x00\x07¡Creo que el jefe te está llamando!\n¡Deberías ir a ver qué quiere!")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x00\x0FEsto es obra de la <b<dragona del agua>>,\nno hay duda. Nadie más podría\ntransformar el bosque de este modo.")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf("¡Tú usa <g<ataque >><g<torbellino >>para\nperseguir huidizas <b<faronitas>>!\n¡Así seguro tú atrapas muchas!\n\nPero aviso...<pause1E> si tú esfuerza demasiado,\noxígeno <r<disminuye>>. ¡Mejor no abusa!")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf("Jefe del bosque llama a tú...\nYo acompaño.")
          			}
          		  case 1:
          			goto flw_105
          		}
          	}
          }

          void entrypoint_204_04() {
/*<  9>*/ 	start()
/*< 11>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 28>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 29>*/ 			printf("\x0E\x01\x09\x04\x00\x14¡Deprisa, tienes que volver\nal encuentro de la <b<dragona del agua>>!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x00\x14¡Utiliza el rastreador! Así te será más\nsencillo localizar las faronitas.")
          				  case 1:
/*<134>*/ 					printf("\x0E\x01\x09\x04\x00\x07¡Creo que el jefe te está llamando!\n¡Deberías ir a ver qué quiere!")
          				}
          			  case 1:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x00\x14Si consigues reunir todas las faronitas,\ncompletarás una melodía. ¡Ánimo!")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x04¡He visto a la <b<dragona del agua>>! \n¡Seguro que se ha escondido en\nalguna parte!")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf("¡Burbujas moradas son <r<venenosas>>!\n¡Si tú aspiras una, <r<ahogas>>!\n¡Mucho cuidado!")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf("Jefe del bosque llama a tú...\nYo acompaño.")
          			}
          		  case 1:
          			goto flw_108
          		}
          	}
          }

          void entrypoint_204_05() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 18>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x0E¡Deprisa, la <b<dragona del agua>>\nte espera!")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x00\x0E¡Exacto, el rastreador! Con él te será\nmás fácil hallar las faronitas que\nte faltan.")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf("\x0E\x01\x09\x04\x00\x01¡Ven aquí, mi buen amigo\nLink!\n\n\n¿Cómo va la búsqueda de <b<faronitas>>?\nVerás, tengo que contarte algo que\nacabo de recordar.\n\n\x0E\x01\x09\x04\x04\x11Espera, ahora lo he olvidado... ¿Qué\nera? Perdona, lo tengo en la punta\nde la lengua... ¡Ah, sí, eso era!\n\nEs esa cosa que usaste para encontrar\na todos mis compañeros, pero no sé\ncómo se llama...\n\n\x0E\x01\x09\x04\x06\x09El caso es que, si lo vuelves a usar,\n¡seguro que consigues reunir todas las\nfaronitas en menos que canta un kyu!")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf("\x0E\x01\x09\x04\x00\x0E¡Hola, Link!\n\n\n\n\x0E\x01\x09\x04\x06\x03¿Dices que la <b<dragona >><b<del agua\n>>ha provocado la inundación?\n\n\nEstá claro que se ha hartado de ver\na esos monstruos sembrar el pánico\nen el bosque.\n\n\x0E\x01\x09\x04\x01\x0CBueno, habrá que acostumbrarse\na navegar por la espesura... Je, je, je.")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf("\x0E\x01\x09\x04\x06\x01De repente, de la <r<raíz de ese gran\nárbol >>de ahí atrás ha empezado a\nsalir agua y el bosque entero se ha\ninundado.\n\x0E\x01\x09\x04\x01\x06¿A que ha quedado precioso?\n¡Juo, juo!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x0E¡Hola otra vez! Ahora que lo pienso.<pause0F>.<pause0F>.<pause14>\nni siquiera te he preguntado\ncómo te llamas.\n\n\x0E\x01\x09\x04\x00\x03Así que Link<pause19>, ¿no?\nUn nombre extraño...\n\n\n\x0E\x01\x09\x04\x00\x00En fin, ¿querías algo?\n[1]El agua...[2]El bosque...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x02Te has dado cuenta, ¿verdad?\n\n\n\n\x0E\x01\x09\x04\x04\x00De repente, de la <r<raíz de ese gran árbol\n>>de ahí atrás ha empezado a salir <pling>agua y\nel bosque entero se ha inundado.\n\n\x0E\x01\x09\x04\x00\x03No sé cómo ha podido ocurrir, ¡pero\npuede que todos los monstruos salgan\nhuyendo al verlo! ¡Es maravilloso!")
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 165, 'param3': 6}
/*<165>*/ 				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
          			  case 1:
          				goto flw_162
          			}
          		}
          	}
          }

          void entrypoint_204_22() {
/*< 65>*/ 	start()
/*< 67>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 68>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf("Si tú no atrapa todas las faronitas\n<r<seguidas>>, ellas escapan de partitura.\n\n\nBuena idea usar <g<ataque >><g<torbellino>>.\nAsí se crea corriente que <r<absorbe\nfaronitas >>hacia tú.")
          				  case 1:
/*< 80>*/ 					printf("¡Bosque lleno de agua!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf("¿Tú busca faronitas?\n\n\n\n[1]Así es[2]No")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf("¡Ah! ¡Entonces tú abre bien\norejotas tuyas!\n\n\nSi tú no atrapa todas las faronitas\n<r<seguidas>>, ellas escapan de partitura.\n\n\nBuena idea usar <g<ataque torbellino>>.\nAsí se crea corriente que <r<absorbe\nfaronitas >>hacia tú. Solo cuestión de...<pause1E>\n¡paciencia!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf("Oh, yo siento mucho...")
          			}
          		}
          	}
          }

          void entrypoint_204_06() {
/*< 16>*/ 	start()
/*< 19>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 21>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<182>*/ 		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
/*<160>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
/*< 36>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 37>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 38>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          				flw_34:
/*< 34>*/ 				changeScene(7, 0) // 
          			  case 1:
          				goto flw_34
          			}
          		  case 1:
          			goto flw_34
          		}
          	  case 1:
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x06Si quieres que reconozca tu valor,\ntendrás que reunir todas las <r<faronitas\n>>cuanto antes.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf("Si tú no atrapa todas las faronitas\n<r<seguidas>>, ellas escapan de partitura.\n¡Pero tú no pone nervioso!")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf("Jefe del bosque llama a tú...\nYo acompaño.")
          			}
          		  case 1:
          			goto flw_112
          		}
          	}
          }

          void entrypoint_204_24() {
/*< 90>*/ 	start()
/*< 91>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 92>*/ 		printf("¡Deprisa, deprisa! ¡<b<Dragona del agua>>\nno debe esperar!")
          	  case 1:
/*< 93>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 95>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_96:
/*< 96>*/ 				switch (scene_flags[24 /* 0x2 01 */]) {
          				  case 0:
/*<196>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
          						flw_98:
/*< 98>*/ 						printf("¡Ay, ay, ay! ¡Otra vez <b<pez rabioso\ngrande>>! ¡Huye, rápido!\n\n\n¡Ellos no gustan <r<lugares profundos>>, así\nque tú busca refugio allí!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf("Peces gigantescos dan miedo, mucho\nmiedo... ¡Dan cabezazos muy brutos!\nSuerte que por aquí no vienen.")
          				}
          			  case 1:
/*< 94>*/ 				printf("Jefe del bosque llama a tú...\nYo acompaño.")
          			}
          		  case 1:
          			goto flw_96
          		}
          	}
          }

          void entrypoint_204_07() {
/*<153>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 155, 'param3': 47}
/*<155>*/ 	set_camera(4, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 158, 'param3': 48}
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 157, 'param3': 6}
/*<157>*/ 	printf("\x0E\x01\x09\x04\x00\x0E¡Oooye, Link!\n¿Puedes oírme?\n\n\n¡Se me olvidaba algo muy importante!\n¡Ven hasta aquí para que te lo cuente!")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

