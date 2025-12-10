          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	wait_frames(1)
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Buenas... Esto es la consigna.\nAquí puedes dejar objetos de tu alforja\ny volver a por ellos cuando te parezca.\n\nQué, ¿tienes algo que quieras\nque te guarde?...\n\n[1-]Sí, gracias[2]No, nada")
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
/*< 44>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000b>¡Ay, cariño!... Es que ya tengo aquí\nun montón de cosas tuyas. No me\ncabe ni un alfiler en la consigna.\n\nEl almacén está como mi corazón...\n¡a punto de estallar!\n\n\nHaz el favor de <color red<llevarte >coloroff>alguna cosa,\no <color red<véndemela>coloroff>, anda...")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a0c>¡De mil amores, tesoro!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000017>Ay, hay un montón de cosas tuyas en\nel almacén. Lo tienes lleno a reventar.\n\n\nTu corazón no me lo entregas, pero\ntodos tus cacharros sí. Ya veo, ya...\n\n\n¡No, que es broma, tonto! Aunque sí \nte agradecería que te <color red<llevaras >coloroff>alguna\nque otra cosa, o que me la <color red<vendieras>coloroff>.")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000013>Anda, trae...")
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
/*< 93>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000015>No me importa cuidar de tus cosas...\n¡pero esto es demasiado! ¡Me tienes\nla consigna llena a reventar!\n\nHaz el favor de <color red<sacar >coloroff>alguna cosa,\no <color red<vendérmela>coloroff>, o lo que sea...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000015>Vale, vamos a ver qué tienes por ahí.")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000004>No me importa que dejes tus trastos\naquí... ¡pero esto es demasiado!\n¡Me tienes la consigna llena a reventar!\n\nHaz el favor de <color red<llevarte>coloroff> alguna cosa...\nO, por lo menos, <color red<véndemela>coloroff> y así\nhacemos sitio.")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000003>Ea, trae para acá...")
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
/*< 52>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Ay cariño, pero si no tienes nada...\nPobrecito mío...\n\n\n¡Ánimo! Seguro que pronto tendrás\nalgo para guardar aquí, ¡estoy segura!")
          						  case 1:
/*< 55>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>Ay, pero si no tienes nada...\n\n\n\nPásate por aquí cuando tengas algo,\nanda.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Anda, pero si no tienes nada...\n\n\n\nVen por aquí cuando tengas algo\nque quieras que te guarde.")
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
/*< 47>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000e150c>¡Cómo te gusta hacerme rabiar!...\nNo está bien dejar a una chica con\nla miel en los labios, ¿sabes?...")
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000013>Entonces has venido a verme a mí...\nLa verdad es que cada día estoy más\nguapa. Normal que no puedas dejar\nde pensar en mí.")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000017>¡¿Pero a ti qué te pasa?!\nSi al final no vas a dejarme nada,\n¡¿para qué vienes a dar la murga?!...")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000002>¡¿Pero a ti qué te pasa?!\nSi al final no vas a dejarme nada,\n¡¿para qué vienes a dar la murga?!...")
          					  case 1:
/*<  3>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>Tú mismo... pero ya podías pensártelo\ndos veces antes de hacerme perder\nel tiempo, majo.")
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
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000007>¡Hay un montón de cosas tuyas aquí!\nMe lo tienes todo ocupado.\n\n\nYa no te puedo guardar nada más...\nCielo, haz el favor de <color red<sacar>coloroff> alguna\ncosa, anda... O si no, <color red<véndemela>coloroff>.")
          				  case 1:
/*< 68>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000b1709>¡Espero volver a verte pronto por aquí,\nguapetón!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Ay, hay tantas cosas tuyas por aquí\nque no puedo dar ni un paso sin\ntropezarme con algo...\n\nYa no puedo guardarte más trastos.\nHaz el favor de sacar las cosas que ya\nno quieras, o <color red<véndemelas>coloroff>...")
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000015>Bueno, pues gracias. Si quieres pasarte\npor aquí todos los días para ver cómo\ncada vez estoy más guapa y salerosa,\n¡eres bienvenido!")
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
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000015>¡Tienes demasiadas cosas en la\nconsigna!\n\n\nYa no te puedo guardar nada más.\nHaz el favor de <color red<sacar >coloroff>de aquí alguna\ncosa o, si lo prefieres, también puedes\n<color red<vendérmela>coloroff>.")
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000004>Tengo el almacén a rebosar con todos\ntus trastos, ¿sabes?\n\n\nNo puedo guardarte nada más...\nHaz el favor de <color red<llevarte>coloroff> las cosas que\nya no quieras... O también puedes\n<color red<vendérmelas>coloroff> a mí.")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000006>Muchas gracias...")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000003>Sí, sí, muchas gracias...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "A ver, a ver... Por esta cosa puedo\ndarte <color red<<numeric arg0 0> <0x30004:0x01cd>>coloroff>.\n\n\n¿Qué hacemos? ¿Me la vendes?\n\n[1-]Por favor[2]Olvídalo")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			wait_frames(30)
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>¡Gracias! Igual tienes más cosas\nque quieras guardar... ¡No te cortes!\nPuedes pasarte todo el tiempo que\nquieras aquí conmigo, ji, ji, ji.")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>¡Gracias!\n¿Querías alguna otra cosa?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000003>Muchas gracias...\nQué, ¿se te ofrece alguna otra cosa?\n")
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
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000012>¡Ah! ¿No quieres? ¡Claro que no!\nNo vale la pena... ¡Si es que eres más\nlisto que todas las cosas, cariñín!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000014>Ah, ¿no quieres?\nYa veo cómo cambias de opinión...\nIgual que has hecho conmigo.")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "Ah, ¿entonces va a ser que no?...\nPues vaya...")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Mmm... Por ese trasto te puedo dar\n<color red<<numeric arg0 0> <0x30004:0x01cd>>coloroff>, ni una más.\n\n\nBueno, ¿qué? ¿Hay trato?\n\n[1-]Por favor[2]Olvídalo")
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
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Ay cariño, pero si no tienes nada...\nPobrecito mío...\n\n\n¡Ánimo! Seguro que pronto tendrás\nalgo para guardar aquí, ¡estoy segura!")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>Ay, pero si no tienes nada...\n\n\n\nPásate por aquí cuando tengas algo,\nanda.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Anda, pero si no tienes nada...\n\n\n\nVen por aquí cuando tengas algo\nque quieras que te guarde.")
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
/*< 33>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000008>¿Que quieres organizar tus cosas?\n¡Claro! ¡Si es que mi chico es\nde un ordenado!...\n\nVerás, te explico: este botón sirve\npara ordenar las cosas que tienes\nen la consigna.\n\n¡Y también puedes, por ejemplo,\nagrupar y distribuir las flechas\nentre tus distintos carcajes!")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000004>Entonces quieres organizar tus cosas,\n¿no?\n\n\nMira, este botón sirve para organizar\nlas cosas que tienes en la consigna.\n\n\n¡Y también puedes, por ejemplo,\nagrupar y distribuir las flechas\nentre tus distintos carcajes!")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000004>Ah, que quieres organizar tus cosas...\n\n\n\nA ver que te explique... Este botón\nsirve para ordenar los objetos que\ntienes en la consigna.\n\nY también puedes, por ejemplo,\nagrupar y distribuir las flechas\nentre tus distintos carcajes.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

