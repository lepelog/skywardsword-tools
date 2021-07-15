          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf("¿Qué, estás ya satisfecho? Bueno,\nsiempre que quieras hacer un buen\ntrato, ¡ya sabes dónde encontrarme!")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf("¿Qué, quieres comprarme algo?\n\n[1]Sí, claro[2-]No, gracias")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf("Fabuloso. Y dime, ¿qué tesoro\nandas buscando exactamente?\n[1]Pluma de\nave azul[2]Broche calavérico\nde oro[3]Objeto perdido\nde la Diosa[4-]Otro")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf("Así que una pluma de ave azul...\n¡Sabia elección! Será tuya en cuanto\nme pagues <r<200 rupias>>, claro.\n[1]Aquí tienes[2-]Qué caro...")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf("Fantástico, aquí tienes tu tesoro.\n¡Que lo disfrutes!")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf("Me parece que te falta dinero...\n¡Ahorra un poco y después\nvienes a hablarme de negocios!")
          						}
          					  case 1:
/*<  8>*/ 						printf("¡Si te parece tan caro, es que este\nobjeto no te hace mucha falta!")
          					}
          				  case 1:
/*< 14>*/ 					printf("Así que un broche calavérico de oro...\n¡Sabia elección! Será tuyo en cuanto\nme pagues <r<200 rupias>>, claro.\n[1]Aquí tienes[2-]Qué caro...")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf("Fantástico, aquí tienes tu tesoro.\n¡Que lo disfrutes!")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf("Me parece que te falta dinero...\n¡Ahorra un poco y después\nvienes a hablarme de negocios!")
          						}
          					  case 1:
/*< 15>*/ 						printf("¡Si te parece tan caro, es que este\nobjeto no te hace mucha falta!")
          					}
          				  case 2:
/*< 21>*/ 					printf("Así que un objeto perdido de la Diosa...\n¡Sabia elección! Será tuyo en cuanto\nme pagues <r<200 rupias>>, claro.\n[1]Aquí tienes[2-]Qué caro...")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf("Fantástico, aquí tienes tu tesoro.\n¡Que lo disfrutes!")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf("Me parece que te falta dinero...\n¡Ahorra un poco y después\nvienes a hablarme de negocios!")
          						}
          					  case 1:
/*< 23>*/ 						printf("¡Si te parece tan caro, es que este\nobjeto no te hace mucha falta!")
          					}
          				  case 3:
/*< 53>*/ 					printf("¿Otro? Eres muy exigente, ¿no crees?\nUn momentito... A ver qué te parecen\nestos:\n[1]Alhaja\ntenebrosa[2]Cristal\nmaléfico[3]Cuerno de\nmonstruo[4-]Otro")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf("Así que una alhaja tenebrosa...\n¡Sabia elección! Será tuya en cuanto\nme pagues <r<100 rupias>>, claro.\n[1]Aquí tienes[2-]Qué caro...")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf("Fantástico, aquí tienes tu tesoro.\n¡Que lo disfrutes!")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf("Me parece que te falta dinero...\n¡Ahorra un poco y después\nvienes a hablarme de negocios!")
          							}
          						  case 1:
/*< 29>*/ 							printf("¡Si te parece tan caro, es que este\nobjeto no te hace mucha falta!")
          						}
          					  case 1:
/*< 55>*/ 						printf("Así que un cristal maléfico...\n¡Sabia elección! Será tuyo en cuanto\nme pagues <r<100 rupias>>, claro.\n[1]Aquí tienes[2-]Qué caro...")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf("Fantástico, aquí tienes tu tesoro.\n¡Que lo disfrutes!")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("Me parece que te falta dinero...\n¡Ahorra un poco y después\nvienes a hablarme de negocios!")
          							}
          						  case 1:
/*< 56>*/ 							printf("¡Si te parece tan caro, es que este\nobjeto no te hace mucha falta!")
          						}
          					  case 2:
/*< 64>*/ 						printf("Así que un cuerno de monstruo...\n¡Sabia elección! Será tuyo en cuanto\nme pagues <r<100 rupias>>, claro.\n[1]Aquí tienes[2-]Qué caro...")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf("Fantástico, aquí tienes tu tesoro.\n¡Que lo disfrutes!")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf("Me parece que te falta dinero...\n¡Ahorra un poco y después\nvienes a hablarme de negocios!")
          							}
          						  case 1:
/*< 65>*/ 							printf("¡Si te parece tan caro, es que este\nobjeto no te hace mucha falta!")
          						}
          					  case 3:
/*< 73>*/ 						printf("¿Otro? Pues me temo que esta es toda\nla mercancía que puedo ofrecerte...\n¡Si quieres algún otro tesoro, tendrás\nque encontrarlo tú mismo!")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf("No pienso regatear contigo, muchacho. \n¡De todas formas, no me gusta hacer\ntratos con gente tan honrada!")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf("¡Psst! Soy un vendedor nocturno.\nVaya, pero si eres tú otra vez.\nBueno, ¿quieres comprarme algo?\n[1]Sí, claro[2-]No, gracias")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf("¡Psst! Tú, sí, tú... Soy un <b<vendedor\nnocturno>>. Si necesitas alguna cosa,\nespecialmente si se trata de un tesoro...\n\n¡Pídemelo amablemente y yo te lo\nvenderé con mucho gusto! ¡Todo\ndentro de la más estricta legalidad,\npor supuesto!")
/*<  2>*/ 				printf("Por aquí vienen muchos quejándose\nde que hay muchos tesoros dificilísimos\nde conseguir... ¡Yo doy esperanza\na esos pobres desesperados!\nPero claro, ve preparando el zurrón,\nporque aquí no regalamos nada...\nBueno, ¿qué dices? ¿Hablamos\nde negocios?[1]¡Claro![2-]Mejor no")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Si has subido hasta aquí arriba, está\nclaro que eres un escalador experto.\n\n\n¿Sabes qué? Yo creo que si te <g<lanzas\n>>desde aquí puedes llegar a aterrizar\nsobre el nido que hay en lo alto\nde esa torreta... ¡Deberías probar!")
          }

