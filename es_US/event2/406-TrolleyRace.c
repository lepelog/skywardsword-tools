          void entrypoint_406_01() {
          	start()
/*< 26>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<100>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<108>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 10, 'param3': 13}
/*< 10>*/ 			switch (story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */]) {
          			  case 0:
/*< 18>*/ 				story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */] = true;
/*< 70>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "¿Quieres disfrutar otra vez con\nLa vertiginosa montaña rusa?\n¡Son solo 20 rupias la vuelta!\n[1-]Claro[2]No, gracias")
          					flw_2:
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_8:
/*<  8>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*<  9>*/ 							rupees += -20;
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "¿Qué circuito quieres probar?\n[1-]Principiante[2-]Experto")
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*<113>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 58, 'param3': 13}
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "Muy bien, el circuito para\nprincipiantes. ¡Suerte!")
/*< 61>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = false;
          								flw_15:
/*< 15>*/ 								switch (story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */]) {
          								  case 0:
/*< 41>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "Por cierto, ¿quieres que te vuelva\na contar cómo funciona?\n[1-]Por favor[2]No, gracias")
/*< 16>*/ 									switch (choice(2)) {
          									  case 0:
/*<111>*/ 										{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 42, 'param3': 13}
/*< 42>*/ 										printf(/* textboxtype: 1, unk: 0, line: 7 */ "Básicamente, el objetivo consiste en\nmontarte en esa vagoneta de ahí y\nllegar a la meta en el menor tiempo\nposible.\nSi inclinas el control hacia un lado, la\nvagoneta se inclinará hacia ese mismo\nlado.\n\nSi empleas bien esta técnica, ¡podrás\ntomar las curvas a mucha más\nvelocidad!\n\n¡Pero si te despistas un momento\ndescarrilarás, así que ve con cuidado!\n\n\nPorque no creo que quieras comprobar\nqué pasa cuando descarrilas...")
          										flw_84:
/*< 84>*/ 										switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          										  case 0:
/*< 85>*/ 											switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          											  case 0:
/*< 88>*/ 												printf(/* textboxtype: 1, unk: 0, line: 29 */ "El mejor tiempo actual es:\n¡<numeric arg3 0>:<numeric arg4 2>.<numeric arg5 2>!")
          												flw_101:
/*<101>*/ 												{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 44, 'param3': 13}
/*< 44>*/ 												printf(/* textboxtype: 1, unk: 0, line: 9 */ "Entonces, ¡en marcha!")
/*< 62>*/ 												story_flags[501 /* us: 805A9B12 0x08, jp: 805ACD92 0x08 */] = true;
/*<  3>*/ 												make_actor_do_something(0, 0)
/*<124>*/ 												{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          											  case 1:
          												goto flw_101
          											}
          										  case 1:
/*< 14>*/ 											switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          											  case 0:
/*< 43>*/ 												printf(/* textboxtype: 1, unk: 0, line: 8 */ "Tu mejor tiempo hasta ahora es:\n¡<numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>!")
          												goto flw_101
          											  case 1:
          												goto flw_101
          											}
          										}
          									  case 1:
          										goto flw_84
          									}
          								  case 1:
          									goto flw_84
          								}
          							  case 1:
/*<112>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 59, 'param3': 13}
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 28 */ "Muy bien, el circuito para expertos.\n¡Suerte!")
/*< 60>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = true;
          								goto flw_15
          							}
          						  case 1:
/*<103>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 40, 'param3': 13}
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "Me parece que no tienes suficiente\nefectivo. ¡Pues me temo mucho\nque no puedo dejarte subir!\n\n¡Vuelve cuando tengas el zurrón\nun poco más abultado!")
          						}
          					  case 1:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 34, 'param3': 13}
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "Bueno, quizá otro día. ¡Hasta goron!")
          					}
          				  case 1:
/*< 33>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "¡<heroname>!\n¡Has vuelto, amigo!\n\n\n¿Qué, quieres dar un bonito paseo\nen La vertiginosa montaña rusa?\n¡Son solo 20 rupias la vuelta!\n[1-]Claro[2]Mejor no")
          					goto flw_2
          				}
          			  case 1:
/*< 21>*/ 				switch (zone_temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "Entonces, ¿tienes curiosidad?\n[1-]Sí[2]No")
          					flw_19:
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_110:
/*<110>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 38, 'param3': 13}
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "Básicamente, el objetivo consiste en\nmontarte en esa vagoneta de ahí y\nllegar a la meta en el menor tiempo\nposible.\nSi inclinas el control hacia un lado, la\nvagoneta se inclinará hacia ese mismo\nlado.\n\nSi empleas bien esta técnica, ¡podrás\ntomar las curvas a mucha más\nvelocidad!\n\n¡Pero si te despistas un momento\ndescarrilarás, así que ve con cuidado!\n\n\nPorque no creo que quieras comprobar\nqué pasa cuando descarrilas...")
/*< 11>*/ 						story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */] = true;
/*< 71>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 55, 'param3': 12}
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 0, line: 25 */ "¿Y bien? ¿Te apetece montar en La\nvertiginosa montaña rusa? Son tan solo\n20 rupias la vuelta. ¿Qué me dices?\n[1-]Sí[2]No, gracias")
/*< 22>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_8
          						  case 1:
/*<104>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 37, 'param3': 13}
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 16 */ "Una auténtica lástima, sí señor...\n¡Pero si hasta puedes ganar premios!\n\n\n¿Seguro que no quieres probar una vez\nal menos?\n[1-]Bueeeno...[2]Olvídalo")
/*< 23>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_8
          							  case 1:
/*<102>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 39, 'param3': 13}
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 15 */ "Bueno, ¡hasta goron!")
          							}
          						}
          					  case 1:
/*<109>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 36, 'param3': 13}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "Pues no sé qué tiene de malo que te\nexplique al menos las normas...\n¡No te voy a comer, ni nada parecido!")
/*< 20>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
          					}
          				  case 1:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "Hola, chico. ¿Qué tal estás?\n\n\n\nBueno, ya que has llegado hasta aquí...\n¿quieres hacer algo muy divertido?\n[1-]¡Claro![2]No, gracias")
/*< 45>*/ 					switch (choice(2)) {
          					  case 0:
/*< 35>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "Ya sabía yo que te iba a interesar.\n¡Abre bien esas orejotas puntiagudas!")
          						goto flw_110
          					  case 1:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "¡Por Goron! ¡No seas aburrido!\n¡Al menos deja que te cuente qué es!\n[1-]Bueno[2]No")
          						goto flw_19
          					}
          				}
          			}
          		  case 1:
/*<125>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 46}
/*< 63>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 47, 'param3': 44}
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "¡Se acabó!")
/*< 83>*/ 			switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          			  case 0:
/*< 82>*/ 				switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          				  case 0:
          					flw_12:
/*< 12>*/ 					switch (context_related2(0)) {
          					  case 0:
/*<114>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 48, 'param3': 13}
/*< 48>*/ 						printf(/* textboxtype: 1, unk: 0, line: 19 */ "¡Por Goron! ¡Un nuevo récord!")
          						flw_4:
/*<  4>*/ 						switch (context_related4(0)) {
          						  case 0:
/*< 65>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3590, 'next': 51, 'param3': 13}
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "¡¿Estás bromeando o qué?!\n¡¿Pero cómo se puede ir tan lento?!\n\n\nMuchacho, con ese tiempo lo único\nque puedo darte es la espalda.\nEspero que lo entiendas.")
          							flw_68:
/*< 68>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 80, 'param3': 13}
/*< 80>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 81>*/ 								story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */] = true;
          								flw_64:
/*< 64>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 50, 'param3': 45}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "¡Vuelve por aquí siempre que quieras!")
/*< 25>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
/*< 13>*/ 								story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */] = true;
          								goto flw_64
          							}
          						  case 1:
/*< 69>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3589, 'next': 72, 'param3': 13}
/*< 72>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 52, 'param3': 12}
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "Estoy seguro de que puedes hacerlo\nbastante mejor. Tienes que aprender\na inclinar un poco más la vagoneta,\n¿de acuerdo?\n¡Aun así, esto es para ti!")
/*< 73>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
          								flw_5:
/*<  5>*/ 								give_item(4 0x04);
          								goto flw_68
          							  case 1:
          								goto flw_5
          							}
          						  case 2:
/*< 66>*/ 							{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 74, 'param3': 13}
/*< 74>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 53>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "No está mal, pero... ¡te queda mucho\npara ser tan rápido como yo!\n\n\nToma, esto es para ti.\n¡Te lo has ganado!")
/*<  6>*/ 								give_item(63 0x3F);
          								goto flw_68
          							  case 1:
/*<131>*/ 								printf(/* textboxtype: 1, unk: 0, line: 34 */ "No ha estado mal. ¡Pero aún tienes\nque mejorar mucho para ponerte\na mi nivel!\n\nBueno, toma 50 rupias. No es mucho,\npero algo es algo, ¿no?")
/*< 86>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 130, 'param3': 12}
/*<130>*/ 								rupees += 50;
          								goto flw_68
          							}
          						  case 3:
/*< 67>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 4104, 'next': 54, 'param3': 13}
/*< 54>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "¡Pero qué ven mis goron! ¡Increíble!\n¡Eres más rápido que yo!")
/*< 75>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 78>*/ 								switch (story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */]) {
          								  case 0:
/*<122>*/ 									printf(/* textboxtype: 1, unk: 0, line: 32 */ "¡Voy a darte un premio muy especial!")
/*< 76>*/ 									give_item(64 0x40);
          									goto flw_68
          								  case 1:
/*<121>*/ 									printf(/* textboxtype: 1, unk: 0, line: 31 */ "¡Tengo un tesoro para ti que encontré\nen esta isla!")
/*< 77>*/ 									give_item(94 0x5E);
/*< 79>*/ 									story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */] = true;
          									goto flw_68
          								}
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0, line: 33 */ "¡Esto es para ti! ¡Es una rupia que he\ncuidado con todo el cariño del mundo!")
/*< 87>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 								give_item(32 0x20);
          								goto flw_68
          							}
          						}
          					  case 1:
          						goto flw_4
          					}
          				  case 1:
          					goto flw_4
          				}
          			  case 1:
/*< 17>*/ 				switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          				  case 0:
          					goto flw_12
          				  case 1:
          					goto flw_4
          				}
          			}
          		  case 2:
/*<127>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 106, 'param3': 46}
/*<106>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 49, 'param3': 13}
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "Puf, qué golpe, amigo... ¡Pero\npor lo menos puedes contarlo! Y ya\nsabes, siempre que quieras subir,\nestaré aquí.")
/*<129>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 3:
/*<126>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 107, 'param3': 46}
/*<107>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 99, 'param3': 13}
/*< 99>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Se acabó el tiempo. ¡Seguro que\nla próxima vez lo consigues!")
/*<128>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 29>*/ 		switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          		  case 0:
/*<115>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 28, 'param3': 13}
/*< 28>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "¡Subirse a una de esas cosas es\ndivertidísimo! ¡Debería haber\ncarreras de vagonetas!")
          		  case 1:
/*<116>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 1, 'param3': 13}
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "Te encuentras en la antigua estación\nde vagonetas de la mina.\n\n\n¡Y todo funciona como el primer día!\nMóntate en una si quieres recorrer\ntoda la isla. Mira, en aquella pared\nestá escrito cómo se utilizan.\nPero no te voy a mentir, es un poco\npeligroso. ¡Así que mejor lee bien\nlo que dice ahí antes de subirte!")
/*< 27>*/ 			story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */] = true;
          		}
          	}
          }

          void entrypoint_406_02() {
/*< 89>*/ 	start()
/*< 94>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<117>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 93, 'param3': 13}
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Llevo aquí solo muchísimos años...\n\n\n\nY me subo en las vagonetas todos\nlos días, ¡pero nunca jamás me aburro!")
          		flw_97:
/*< 97>*/ 		story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          	  case 1:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 92, 'param3': 13}
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "¡Ese asiento es mío, por Goron!\n¡No me lo ensucies!")
          		goto flw_97
          	}
          }

          void entrypoint_406_03() {
/*< 90>*/ 	start()
/*< 95>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 91, 'param3': 13}
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Llevo aquí muchísimo tiempo,\npero eres mi primer visitante.\n\n\n¿Podrías conseguir que viniera\nmás gente por aquí? Es que a veces\nme siento un poco solo...")
          		flw_98:
/*< 98>*/ 		story_flags[742 /* us: 805A9B26 0x40, jp: 805ACDA6 0x40 */] = true;
          	  case 1:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "¡Ese asiento es mío, por Goron!\n¡No me lo ensucies!")
          		goto flw_98
          	}
          }

