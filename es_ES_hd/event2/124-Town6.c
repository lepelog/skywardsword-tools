          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "¿Qué, estás ya satisfecho? Pues nada,\nsiempre que quieras hacer un buen\ntrato, ¡aquí estaré echando el rato!")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "Qué, ¿quieres comprarme algo?\n\n[1-]Sí, venga[2]No, gracias")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "Estupendo. Y dime, ¿qué tesoro\nandas buscando exactamente?\n[1-]Pluma de\nave azul[2-]Broche calavérico\nde oro[3-]Objeto perdido\nde la Diosa[4]Otro")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "Así que una pluma de ave azul...\n¡Sabia elección! Será tuya en cuanto\nsueltes <color red<200 rupias>coloroff>, claro.\n[1-]Aquí tienes[2]Qué caro...")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "Estupendo, pues ahí te va tu tesoro.\n¡Hala, a disfrutarlo con salud!")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "Me parece que estás pelado... ¡Ahorra\nun poco y después vienes a hablarme\nde negocios!")
          						}
          					  case 1:
/*<  8>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "¡Si tan caro te parece, mucha falta\nno te hará el objeto de marras!")
          					}
          				  case 1:
/*< 14>*/ 					printf(/* textboxtype: 1, unk: 1, line: 6 */ "Así que un broche calavérico de oro...\n¡Sabia elección! Será tuyo en cuanto\nsueltes <color red<200 rupias>coloroff>, claro.\n[1-]Aquí tienes[2]Qué caro...")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "Estupendo, pues ahí te va tu tesoro.\n¡Hala, a disfrutarlo con salud!")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "Me parece que estás pelado... ¡Ahorra\nun poco y después vienes a hablarme\nde negocios!")
          						}
          					  case 1:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "¡Si tan caro te parece, mucha falta\nno te hará el objeto de marras!")
          					}
          				  case 2:
/*< 21>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Así que un objeto perdido de la Diosa...\n¡Sabia elección! Será tuyo en cuanto\nsueltes <color red<200 rupias>coloroff>, claro.\n[1-]Aquí tienes[2]Qué caro...")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "Estupendo, pues ahí te va tu tesoro.\n¡Hala, a disfrutarlo con salud!")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "Me parece que estás pelado... ¡Ahorra\nun poco y después vienes a hablarme\nde negocios!")
          						}
          					  case 1:
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "¡Si tan caro te parece, mucha falta\nno te hará el objeto de marras!")
          					}
          				  case 3:
/*< 53>*/ 					printf(/* textboxtype: 1, unk: 1, line: 3 */ "¿Otro? Pues sí que... Un momentito...\nA ver qué te parecen estos:\n[1-]Alhaja\ntenebrosa[2-]Cristal\nmaléfico[3-]Cuerno de\nmonstruo[4]Otro")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 8 */ "Así que una alhaja tenebrosa...\n¡Sabia elección! Será tuya en cuanto\nsueltes <color red<100 rupias>coloroff>, claro.\n[1-]Aquí tienes[2]Qué caro...")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "Estupendo, pues ahí te va tu tesoro.\n¡Hala, a disfrutarlo con salud!")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "Me parece que estás pelado... ¡Ahorra\nun poco y después vienes a hablarme\nde negocios!")
          							}
          						  case 1:
/*< 29>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "¡Si tan caro te parece, mucha falta\nno te hará el objeto de marras!")
          						}
          					  case 1:
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 1, line: 9 */ "Así que un cristal maléfico...\n¡Sabia elección! Será tuyo en cuanto\nsueltes <color red<100 rupias>coloroff>, claro.\n[1-]Aquí tienes[2]Qué caro...")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "Estupendo, pues ahí te va tu tesoro.\n¡Hala, a disfrutarlo con salud!")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "Me parece que estás pelado... ¡Ahorra\nun poco y después vienes a hablarme\nde negocios!")
          							}
          						  case 1:
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "¡Si tan caro te parece, mucha falta\nno te hará el objeto de marras!")
          						}
          					  case 2:
/*< 64>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "Así que un cuerno de monstruo...\n¡Sabia elección! Será tuyo en cuanto\nsueltes <color red<100 rupias>coloroff>, claro.\n[1-]Aquí tienes[2]Qué caro...")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "Estupendo, pues ahí te va tu tesoro.\n¡Hala, a disfrutarlo con salud!")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "Me parece que estás pelado... ¡Ahorra\nun poco y después vienes a hablarme\nde negocios!")
          							}
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 1, line: 12 */ "¡Si tan caro te parece, mucha falta\nno te hará el objeto de marras!")
          						}
          					  case 3:
/*< 73>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "¿Otro? Pues me temo que esta es toda\nla mercancía que puedo ofrecerte...\n¡Cualquier otro tesoro tendrás que\nagenciártelo tú mismo!")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "No pienso regatear contigo, no señor. \n¡Con gente como tú no merece la pena\nni hablar, niñato! Habrase visto...")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "¡Psst! Soy un vendedor nocturno.\nAnda, pero si eres tú otra vez.\nQué, ¿quieres comprarme algo?\n[1-]Sí, venga[2]No, gracias")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "¡Psst! Tú, sí, tú... Soy un <color blue<vendedor\nnocturno>coloroff>. Si te hace falta alguna\ncosilla, especialmente si se trata\nde un tesoro...\n¡Me lo pides amablemente y yo te lo\nvendo de mil amores! ¡Y todo dentro\nde la más estricta legalidad, por\nsupuesto!")
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "Por aquí vienen muchos quejándose de\nque si este tesoro no hay quien lo vea,\nde que si es engorroso de conseguir...\n¡Yo doy esperanza a esos desesperados!\nEso sí, vete preparando el riñón,\nporque aquí no se regala nada...\nBueno, ¿qué dices? ¿Hablamos\nde negocios?[1-]¡Venga![2]Mejor no")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 1, line: 18 */ "Si has subido hasta aquí arriba, está\nclaro que eres un escalador de pro.\n\n\n¿Sabes qué? Yo creo que si te <color green<lanzas\n>coloroff>desde aquí puedes llegar a aterrizar\nsobre el nido que hay en lo alto\nde esa torreta... ¡Deberías probar!")
          }

