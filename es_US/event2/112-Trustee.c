          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 29, 'param3': 6}
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hola... Esto es la consigna.\nAquí puedes dejar objetos de tu alforja\ny volver por ellos cuando quieras.\n\n¿Qué, tienes algo que quieras\nsacar o que te guarde?...\n\n[1]Sí, gracias[2-]No, nada")
          		flw_4:
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
/*< 16>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 42>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 61>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 62>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_43:
/*< 43>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 44>*/ 								printf("\x0E\x01\x09\x04\x00\x0B¡Ay, guapetón!... Es que ya tengo aquí\nun montón de cosas tuyas. No me\ncabe ni un alfiler en la consigna.\n\nEl almacén está como mi corazón...\n¡a punto de estallar!\n\n\nHaz el favor de <r<llevarte >>alguna cosa,\no <r<véndemela>>, por favor...")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x09\x04\x08\xA0C¡Muy bien, guapetón!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x17Ay, hay un montón de cosas tuyas en\nel almacén. Está lleno...\n\n\nTu corazón no me lo entregas,\npero todos tus cacharros sí.\nQué romántico...\n\n¡No, que es broma! Aunque sí te\nagradecería que te <r<llevaras >>alguna\nque otra cosa, o que me la <r<vendieras>>.")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf("\x0E\x01\x09\x04\x00\x13Bueno, dámelo.")
          								goto flw_5
          							}
          						}
          					  case 1:
          						goto flw_43
          					}
          				  case 1:
/*< 90>*/ 					switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          					  case 0:
/*< 91>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 93>*/ 							printf("\x0E\x01\x09\x04\x00\x15No me importa cuidar de tus cosas...\n¡pero esto es demasiado! ¡Tienes la\nconsigna tan llena que va a reventar!\n\nHaz el favor de <r<sacar >>alguna cosa,\no <r<vendérmela>>, o lo que sea...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x15Bien, vamos a ver qué tienes por ahí.")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x00\x04No me importa que dejes tus cacharros\naquí... ¡pero esto es demasiado!\n¡Tienes la consigna tan llena que\nva a explotar!\nHaz el favor de <r<llevarte>> alguna cosa...\nO, por lo menos, <r<véndemela>> y así\nhacemos espacio.")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x03Bien, adelante.")
          							goto flw_5
          						}
          					}
          				}
          			  case 1:
/*< 51>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 59>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 60>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\nPero si no tienes nada... Pobrecito...\n\n\n\n¡Ánimo! Seguro que pronto tendrás\nalgo para guardar aquí, ¡estoy segura!")
          						  case 1:
/*< 55>*/ 							printf("\x0E\x01\x09\x04\x00\x04Ay, pero si no tienes nada...\n\n\n\nPásate por aquí cuando tengas algo,\n¿de acuerdo?")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x04Oye, pero si no tienes nada...\n\n\n\nVen por aquí cuando tengas algo\nque quieras que te guarde.")
          				}
          			}
          		  case 1:
/*< 50>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 56>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 57>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_47:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x0E\x150C¡No te burles de mí!\nNo está bien dejar a una chica con\nla miel en los labios, ¿sabes?...")
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x00\x13Entonces has venido a verme a mí...\nLa verdad es que cada día estoy más\nguapa. Es normal que no puedas dejar\nde pensar en mí.")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x00\x17¡¿Pero a ti qué te pasa?!\nSi al final no vas a hacer nada,\n¿para qué vienes a molestar?...")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf("\x0E\x01\x09\x04\x00\x02¡¿Pero a ti qué te pasa?!\nSi al final no vas a hacer nada,\n¿para qué vienes a molestar?...")
          					  case 1:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x00\x02Tú sabrás. Pero deberías pensarlo\ndos veces antes de hacerme perder\nel tiempo.")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_112_02() {
/*<  6>*/ 	start()
/*< 41>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 69>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 70>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x00\x07¡Hay un montón de cosas tuyas aquí!\nLo tienes todo ocupado.\n\n\nYa no te puedo guardar nada más...\nHaz el favor de <r<sacar>> alguna cosa...\nO si no, <r<véndemela>>.")
          				  case 1:
/*< 68>*/ 					printf("\x0E\x01\x09\x04\x0B\x1709¡Espero volver a verte pronto por aquí!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x00\x04Ay, hay tantas cosas tuyas por aquí\nque no puedo dar ni un paso sin\ntropezarme con algo...\n\nYa no puedo guardarte más cacharros.\nHaz el favor de sacar las cosas que ya\nno quieras, o <r<véndemelas>>...")
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x15Bueno, pues gracias. Si quieres pasarte\npor aquí todos los días para ver cómo\ncada vez estoy más guapa y agradable,\n¡eres bienvenido!")
          				}
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 25>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x00\x15¡Tienes demasiadas cosas en la\nconsigna!\n\n\nYa no te puedo guardar nada más.\nHaz el favor de <r<sacar >>de aquí alguna\ncosa o, si lo prefieres, también puedes\n<r<vendérmela>>.")
          			  case 1:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x00\x04Tengo el almacén rebosando con todos\ntus cacharros, ¿sabes?\n\n\nNo puedo guardarte nada más...\nHaz el favor de <r<llevarte>> las cosas que\nya no quieras... O también puedes\n<r<vendérmelas>> a mí.")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf("\x0E\x01\x09\x04\x00\x06Muchas gracias...")
          			  case 1:
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x00\x03Sí, sí, muchas gracias...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf("A ver, a ver... Por esta cosa puedo\ndarte <r<<numeric arg0> \x0E\x03\x04\x02\x1CD>>.\n\n\n¿Qué hacemos? ¿Me la vendes?\n\n[1]Por favor[2-]Olvídalo")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 39, 'param3': 6}
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x00\x08¡Gracias! Quizá tengas más cosas\nque quieras guardar... ¡No seas tímido!\nPuedes pasar todo el tiempo que\nquieras aquí conmigo, ji, ji, ji.")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03¡Gracias!\n¿Querías alguna otra cosa?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\x03Muchas gracias...\n¿Qué, se te ofrece alguna otra cosa?\n")
          				goto flw_53
          			}
          		  case 1:
/*< 37>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_38:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x12¡Ah! ¿No quieres? ¡Claro que no!\nNo merece la pena... ¡Eres más listo\nque nadie, guapísimo!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf("\x0E\x01\x09\x04\x00\x14Ah, ¿no quieres?\nYa veo cómo cambias de opinión...\nIgual que has hecho conmigo.")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf("Ah, ¿entonces no quieres?... Bueno.")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf("Mmm... Por ese cacharro te puedo dar\n<r<<numeric arg0> \x0E\x03\x04\x02\x1CD>>, ni una más.\n\n\nBueno, ¿qué? ¿Hay trato?\n\n[1]Por favor[2-]Olvídalo")
          		goto flw_11
          	}
          }

          void entrypoint_112_04() {
/*< 14>*/ 	start()
/*< 34>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 80>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 81>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_82:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\nPero si no tienes nada... Pobrecito...\n\n\n\n¡Ánimo! Seguro que pronto tendrás\nalgo para guardar aquí, ¡estoy segura!")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x04Ay, pero si no tienes nada...\n\n\n\nPásate por aquí cuando tengas algo,\n¿de acuerdo?")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oye, pero si no tienes nada...\n\n\n\nVen por aquí cuando tengas algo\nque quieras que te guarde.")
          	}
          }

          void entrypoint_112_05() {
/*< 21>*/ 	start()
/*< 32>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 84>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 85>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_33:
/*< 33>*/ 				printf("\x0E\x01\x09\x04\x00\x08¿Quieres organizar tus cosas?\nSabía que alguien tan guapo como tú\ntenía que ser también muy ordenado.\n\nVerás, te explico: este botón sirve\npara ordenar las cosas que tienes\nen la consigna.\n\n¡Y también puedes, por ejemplo,\nagrupar y distribuir las flechas\nentre tus distintos carcajes!")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf("\x0E\x01\x09\x04\x00\x04Entonces quieres organizar tus cosas,\n¿no?\n\n\nMira, este botón sirve para organizar\nlas cosas que tienes en la consigna.\n\n\n¡Y también puedes, por ejemplo,\nagrupar y distribuir las flechas\nentre tus distintos carcajes!")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ah, quieres organizar tus cosas...\n\n\n\nTe lo explico. Este botón sirve para\nordenar los objetos que tienes\nen la consigna.\n\nY también puedes, por ejemplo,\nagrupar y distribuir las flechas\nentre tus distintos carcajes.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

