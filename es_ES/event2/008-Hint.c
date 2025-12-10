          void entrypoint_008_002() {
/*<  5>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "¡Oye, chavalín, acércate un momentito!")
          }

          void entrypoint_008_003() {
/*<  6>*/ 	start()
/*< 17>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 18>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "Buenas, jovencito, ¿qué tal estás?\nMe presento. Soy una <color blue<piedra sheikah<pause 10>>coloroff>.<pause 5>.<pause 5>.\n<pause 10>¿Cómo? ¿Que ya lo sabías?...\n\nAh, claro, pero qué tonta soy...<pause 15> No me\nhabía dado cuenta de que juegas en\n<color red<modo Héroe>coloroff>. Ahora que lo pienso, ya\nhabrás resuelto todos los enigmas...\nPues me temo que no me queda más que\nquitarme el sombrero ante ti, pequeño.\nEso y darte acceso a<sound 4> <color red<todas mis visiones>coloroff>\ndesde el principio. ¿Qué te parece?\nLo dicho; cuando quieras consultar\nalguna de mis visiones, no tienes más\nque venir y hablar conmigo. ¡Hala,\nhasta más ver!")
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "Buenas, jovencito, ¿qué tal estás?\nMe presento... Soy una <color blue<piedra sheikah>coloroff>,\ny es un verdadero placer conocerte.\n\nVeamos... <pause 15>A juzgar por tu aspecto,\ndiría que en los próximos días te vas\na ver enredado en situaciones de lo\nmás variopintas.\nMe temo que vas a dar muchas vueltas,\noh, sí... Pero si en algún momento te\nsientes estancado e incapaz de avanzar,\nven a hablar conmigo, ¿entendido?\nAhora mismo no tengo nada que\nenseñarte, aunque más adelante te\nmostraré algunas cosas que quizá\n<color red<te sirvan de ayuda>coloroff>.\n¡Hala, ya puedes marcharte! ¡Mucho\nánimo, chavalín, y buena suerte!")
          	}
          }

          void entrypoint_008_004() {
/*< 13>*/ 	start()
/*< 20>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 21>*/ 		entrypoint_008_06();
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "Vaya, si eres tú otra vez...<pause 10>\n¡Pues me temo que todavía no tengo\nnada nuevo que contarte, chavalín!\n\n¿Por qué no vuelves a pasarte por aquí\nun poco más tarde?")
          	}
          }

          void entrypoint_008_005() {
          	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "¿Cómo te va la vida, jovencito? ¡Tengo\ninformación jugosa que te puede ser\nmuy útil en tu aventura! ¿Quieres\necharle un vistazo?[1-]Vale[2]Ahora no")
/*<  1>*/ 	switch (choice(2)) {
          	  case 0:
/*<  2>*/ 		changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "Vale, como quieras. ¡Buena suerte\nentonces, jovencito!")
          	}
          }

          void entrypoint_008_006() {
/*<  8>*/ 	start()
/*< 14>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "¡Hola, jovencito!<pause 10> ¿Cómo va todo?\n¿Vienes a consultar alguna de mis\ninteresantísimas visiones?\n[1-]Sí[2]No, gracias")
          		flw_9:
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          		  case 1:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Vale, como quieras. ¡Buena suerte\nentonces, jovencito!")
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 1 */ "¡Hombre, jovencito!<pause 10> La verdad es que\nno tengo gran cosa para ti, pero puedes\necharles un ojo a las visiones que ya\nhas consultado antes. ¿Qué me dices?[1-]Vale[2]Ahora no")
          		goto flw_9
          	}
          }

