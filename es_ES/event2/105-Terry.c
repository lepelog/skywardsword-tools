          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "¡Eso es un <color yellow<medallón de vida>coloroff>!\n¡Llévatelo y verás los efectos taaan\nflipantes que tiene, tíiiio!\n\n¿Que qué efectos son esos?<pause 10>.<pause 10>.<pause 10>.<pause 10>\n¡Pues ni flores, la verdad! ¿Por qué\nno lo averiguas tú mismo, colega?\n¡Seguro que son lo máximo!\nY es una ganga de las buenas, ¡solo\ncuesta <color red<800 rupias>coloroff>! ¿Qué, te hace?\n\n[1-]Me lo llevo[2]Paso")
          		flw_13:
/*< 13>*/ 		switch (choice(2)) {
          		  case 0:
/*< 15>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 14>*/ 			entrypoint_105_08();
          		}
          	  case 1:
/*< 83>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "¡Eso es un <color yellow<medallón de vida>coloroff>!\n¡Llévatelo y verás los efectos taaan\nflipantes que tiene, tíiiio!\n\n¿Que qué efectos son esos?<pause 10>.<pause 10>.<pause 10>.<pause 10>\n¡Pues ni flores, la verdad! ¿Por qué\nno lo averiguas tú mismo, colega?\n¡Seguro que son lo máximo!\nAdemás te lo dejo a mitad de\nprecio. Es taaan barato... Son solo\n<color red<400 rupias>coloroff>. ¿Qué, te hace?\n[1-]Me lo llevo[2]Paso")
          			goto flw_13
          		  case 1:
          			goto flw_41
          		}
          	}
          }

          void entrypoint_105_01() {
          	start()
/*< 64>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 66>*/ 		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          		  case 0:
/*<168>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 67, 'param3': 13}
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "¡Heeey! ¡Hola! ¡Qué genial verte\nde nuevo por la tienda del menda,\ntíiiio! Anda, pasa y pilla lo que te\npida el cuerpo, ¡no te cortes!")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "¡Tío! ¡Tú eres el mismo que encontró\nmi <color blue<escarabero rex>coloroff>! ¡Eres lo máximo!\nNo sé cómo darte las gracias...\n\nPara que veas que soy enrollado,\npilla el artículo que quieras y te\nlo dejo a mitad de precio, anda.")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "¡Bienvenido a mi tienda, tíiiio!\n\n\n\n¡¿Eh?! ¿Ha habido suerte con la\nbúsqueda? Cuidadín que, si me\nparo ahora a hablar del tema,\nlo mismo nos la pegamos...\n¿Por qué no lo dejamos mejor\npara la noche, eh? Puedes tirarte\na la bartola un rato en la piltra\nhasta que se haga de noche.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "¡Hooola, tíiiio! ¡¿Cómo te va?!\n¡Bienvenido a la tienda de Terry!\n\n\n¡Colega, tienes que ayudarme, por\nfavor! ¡Mi pobre <color blue<escarabero rex>coloroff>!\nEstoy taaan preocupado...\n\n¡No me lo puedo quitar de la cabeza!\n¡Lo echo mogollón de menos!\nEra lo máximo...")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Ejem... ¿Quieres saber por qué voy\nmontado en esta bici?\n\n[1-]¡Cuéntame![2]Me da igual")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10007:0x00000015>¡Tíiiio, eres lo máximo!\n¡Se nota que tienes interés por las cosas\nde la vida!\n\nCon el movimiento de la bici genero\nelectricidad para mover todo este\ntenderete. ¡Es sano a la par\nque <color blue<ecológico>coloroff>!\nAunque ahora, contigo a bordo, hay\nmás peso y tengo que darme más\ncaña pedaleando...")
          							flw_27:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "¡Ups<0x10006:0xfecd>!...<0x10006:0x00cd> ¡Perdona, tíiiio! Tú a lo tuyo...\nPuedes echar un ojo a la mercancía \na tu aire. ¡Tengo montones de cosas\nalucinantes, colega!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "Tíiiio, ¿pues para qué vienes a darme\nla brasa?\n\n\nContigo a bordo esto pesa más y tengo\nque echar el bofe pedaleando...")
/*< 88>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 27, 'param3': 13}
          							goto flw_27
          						}
          					  case 1:
/*<185>*/ 						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          						  case 0:
/*<184>*/ 							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          							  case 0:
/*<191>*/ 								{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2838, 'next': 188, 'param3': 13}
/*<188>*/ 								switch (zone_temp_flags[12 /* 0x0 10 */]) {
          								  case 0:
/*<190>*/ 									printf(/* textboxtype: 1, unk: 0, line: 9 */ "Tíiiio, si no te importa, mejor\nhablamos de eso por la noche.\n\n\nTú échate a descansar en la piltra\nesa que tengo allí, no te cortes. \nEstás en tu casa.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000b00>Tíiiio<pause 10>.<pause 10>.<pause 10>.<pause 10>\nAnda, pasa,<pause 20> pasa<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\n¿Cómo?<pause 20> ¿Me ves mal careto?\n\n\n\nPor más que trate de disimular, tú\nme conoces, ¿eh? Me has calado\na la primera... \n\nMira, tío, ahora ando muy liado.\nMejor hablamos de eso por la noche.\nVenga, échate a sobar en la piltra\nesa para hacer tiempo.")
/*<189>*/ 									zone_temp_flags[12 /* 0x0 10 */] = true;
          								}
          							  case 1:
          								goto flw_1
          							}
          						  case 1:
          							goto flw_1
          						}
          					}
          				  case 1:
          					goto flw_1
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_36() {
/*<135>*/ 	start()
/*<137>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 12}
/*<138>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 149, 'param3': 13}
/*<149>*/ 	zone_temp_flags[11 /* 0x0 08 */] = true;
/*<140>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_145:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "¡Con eso podrás llevar un objeto\nmás en tu <color yellow<alforja de aventurero>coloroff>!\n\n\n¡Es de lo más práctico para pirarse\npor ahí de aventuras!\nY solo por <color red<600>coloroff><color red< rupias>coloroff>, tíiiio...\n\n¿Que ha subido de precio?\n¡Anda, anda, cómo lo flipas! \nSerán imaginaciones tuyas...\n\nBueno, ¿qué? Son <color red<600>coloroff><color red< rupias>coloroff>.\n\n[1-]Me lo llevo[2]Paso")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "¡Con eso podrás llevar un objeto\nmás en tu <color yellow<alforja de aventurero>coloroff>!\n\n\n¡Es de lo más práctico para pirarse\npor ahí de aventuras!\nY solo por <color red<300 rupias>coloroff>, tíiiio...\n\n¿Que ha subido de precio?\n¡Anda, anda, cómo lo flipas! \nSerán imaginaciones tuyas...\n \nBueno, ¿qué? Son <color red<300>coloroff><color red< rupias>coloroff>.\n\n[1-]Me lo llevo[2]Paso")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10007:0x00000015>¡Tíiiio, un cliente!...\nÚltimamente casi nadie viene por aquí.\n¡Se me hace taaan raro tener clientes!\n\nLa tienda volante del menda tiene\ntodo lo que necesitas, ¡es lo máximo!\nNo te cortes, mira lo que quieras.\n\nAunque estaría muy bien que además\nde mirar compraras alguna cosilla...\nTú ya me entiendes, colega.")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "Con eso tendrás sitio para un objeto\nmás en tu <color yellow<alforja de aventurero>coloroff>.\n¡Aunque reconozco que sale por\nun ojo de la cara, tíiiio!...\nConsejo de colega: piénsate bien si\nrealmente lo necesitas...\nSon <color red<1200 rupias>coloroff> de vellón. ¿Qué dices?\n[1-]Me lo llevo[2]Paso")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "Con eso tendrás sitio para un objeto\nmás en tu <color yellow<alforja de aventurero>coloroff>.\n¡Aunque reconozco que sale por\nun ojo de la cara, tíiiio!...\nSu precio normal es <color red<1200 rupias>coloroff>,\npero a ti te lo dejo por <color red<600 rupias>coloroff>.\n¡Porque eres lo máximo!\n\nConsejo de colega: piénsate bien si\nrealmente lo necesitas...\n\n[1-]Me lo llevo[2]Paso")
          			goto flw_13
          		  case 1:
          			goto flw_147
          		}
          	}
          }

          void entrypoint_105_38() {
/*<177>*/ 	start()
/*<178>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 12}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 181, 'param3': 13}
/*<181>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_182:
/*<182>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Eso es un <color yellow<medallón de insecto>coloroff>.\nCon él las áreas donde haya insectos\naparecerán señaladas en el mapa.\n¡Es lo máximo!\n¡Tíiiio, es taaan útil!... Vale una pasta,\nes cierto, pero si te mola el rollo\nde cazar insectos no deberías pasar\nsin él.\nTe lo vendo por <color red<1000 rupias>coloroff>.\n¿Qué me dices? Mola, ¿eh?\n\n[1-]Me lo llevo[2]Paso")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "Eso es un <color yellow<medallón de insecto>coloroff>.\nCon él las áreas donde haya insectos\naparecerán señaladas en el mapa.\n¡Es lo máximo!\n¡Tíiiio, es taaan útil!... Vale una pasta,\nes cierto, pero si te mola el rollo\nde cazar insectos no deberías pasar\nsin él.\nNormalmente cuesta <color red<1000 rupias>coloroff>,\npero hoy te lo vendo por <color red<500 rupias>coloroff>.\n¿Qué me dices? Mola, ¿que no?\n[1-]Me lo llevo[2]Paso")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "¡Noooo! ¡Pero tíiio, tienes la <color red<alforja>coloroff> \ncompletamente petada! \n¡No puedes llevar más cosas!\n\nY por lo que parece la consigna\ntambién la tienes hasta los topes...\n¡Eso sí que es estar al máximo!\n\nAnda, saca cosas de la <color red<alforja >coloroff>o\nde la <color red<consigna >coloroff>y después pásate\npor aquí, colega.")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "¡Venga ya, tíiiio! ¡Si no tienes pasta!\nEso no mola nada... Mira que querer\nmofarse así de un colega currante...")
/*<151>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<152>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<169>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_5
          		  case 1:
/*< 32>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_5
          		}
          	}
          }

          void entrypoint_105_07() {
/*<  6>*/ 	start()
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 1304, 'next': 7, 'param3': 13}
/*<  7>*/ 	switch (random(2)) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "¡Muchísimas gracias, tíiiio!\nMe has dado justo la motivación que\nnecesitaba para seguir pedaleando.\n¡¡Eres lo máximo!!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "¡Tíiiio, no te arrepentirás de la compra\nque acabas de hacer!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "No problem, pero echa un vistazo a mis\notros artículos, colega, hazme caso.\n")
/*<153>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<154>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<170>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_11
          		  case 1:
/*< 36>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_11
          		}
          	}
          }

          void entrypoint_105_09() {
/*< 29>*/ 	start()
/*< 91>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 30, 'param3': 13}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "¡Tíiiio, espera!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 2, line: 17 */ "¡¿Tú sabes lo que pesas?!\nContigo aquí tengo que pedalear\nmogollón de más, tíiiio...\n\nY encima tienes el morro de pirarte\nsin comprarme nada. Vaya rostro... \n¡Colega, ya te estás largando de aquí!")
/*<201>*/ 	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
          }

          void entrypoint_105_11() {
/*<155>*/ 	start()
/*< 93>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 94>*/ 		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
          		flw_157:
/*<157>*/ 		switch (zone_temp_flags[10 /* 0x0 04 */]) {
          		  case 0:
/*<158>*/ 			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
          			flw_159:
/*<159>*/ 			switch (zone_temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<160>*/ 				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
          			  case 1:
          			}
          		  case 1:
          			goto flw_159
          		}
          	  case 1:
          		goto flw_157
          	}
          }

          void entrypoint_105_30() {
/*< 12>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 31, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "¡Lo siento, tíiio! Ese cartel significa\nque el artículo está agotado.\n\n\nEl negocio tira cada vez mejor, y todo\ngracias a ti. ¡Eres lo máximo!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "¡Con eso podrás llevar un objeto\nmás en tu <color yellow<alforja de aventurero>coloroff>!\n\n\n¡Es de lo más práctico para pirarse\npor ahí de aventuras!\nCuesta <color red<300 rupias>coloroff> de nada.\n[1-]Me lo llevo[2]Paso")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "¡Con eso podrás llevar un objeto\nmás en tu <color yellow<alforja de aventurero>coloroff>!\n\n\n¡Es de lo más práctico para pirarse\npor ahí de aventuras! Y ahora\nestá a mitad de precio, <color red<150 rupias>coloroff>.\n[1-]Me lo llevo[2]Paso")
          			goto flw_13
          		  case 1:
          			goto flw_19
          		}
          	}
          }

          void entrypoint_105_32() {
/*< 17>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 70, 'param3': 12}
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 76, 'param3': 13}
/*< 76>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_20:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Te mola, ¿eh? Tienes buen gusto, tío.\n¡Mira qué chulada! Lo pillé por aquí\ncerca, ¿sabes? ¡Me pareció lo máximo!\n\nSi te digo la verdad, no tengo ni idea\nde lo que es, ¡pero puede ser tuyo por\n<color red<1600 rupias>coloroff> de nada! ¿Qué dices?\n[1-]Me lo llevo[2]No, gracias")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "Te mola, ¿eh? Tienes buen gusto, tío.\n¡Mira qué chulada! Lo pillé por aquí\ncerca, ¿sabes? ¡Me pareció lo máximo!\n\nSi te digo la verdad, no tengo ni idea\nde lo que es, ¡pero puede ser tuyo por\n<color red<1600 rupias>coloroff> de nada!\n\nNo, espera, que hoy lo dejo a mitad\nde precio. Te lo puedes llevar por solo\n<color red<800 rupias>coloroff>. ¿Qué me dices, colega?\n[1-]Me lo llevo[2]Paso")
          			goto flw_13
          		  case 1:
          			goto flw_20
          		}
          	}
          }

          void entrypoint_105_33() {
/*< 21>*/ 	start()
/*< 45>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 71, 'param3': 12}
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 79, 'param3': 13}
/*< 79>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_22:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Eso es un <color yellow<zurrón suplementario>coloroff>.\n¡Tíiio, no veas lo bien que viene!\n¡Es lo máximo de lo máximo!\n\n¡Esta maravilla te permite guardar\n300 rupias más!\n\n\n¡Así no volverás a pillarte mosqueos\npor no poder llevar más guita encima!\n\n\nDeberías pillártelo, en serio. ¡Si es que\nsolo cuesta <color red<100 rupias>coloroff> de nada! \n¡Una ganga! ¿Te animas a comprarlo?\n[1-]Me lo llevo[2]Paso")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Eso es un <color yellow<zurrón suplementario>coloroff>.\n¡Tíiio, no veas lo bien que viene!\n¡Es lo máximo de lo máximo!\n\n¡Esta maravilla te permite guardar\n300 rupias más!\n\n\n¡Así no volverás a pillarte mosqueos\npor no poder llevar más guita encima!\n\n\nDeberías pillártelo, en serio, tío...\nCuesta <color red<100 rupias>coloroff>, pero por ser tú te \nlo dejo en <color red<50>coloroff><color red<<color red< <color red<rupias>coloroff>. ¿Qué, te mola?\n[1-]Me lo llevo[2]Paso")
          			goto flw_13
          		  case 1:
          			goto flw_22
          		}
          	}
          }

          void entrypoint_105_50() {
/*< 50>*/ 	start()
/*<175>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000018>¡Amigo mío, muchas gracias!\n¡Esto no lo voy a olvidar en la vida!\n\n\n¡Ay, mi <color blue<escarabero rex >coloroff>precioso!\nA partir de ahora te voy a tener bien\nvigilado día y noche...")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000018>¡Amigo mío, muchas gracias!\n¡Esto no lo voy a olvidar en la vida!\n\n\nPara que veas lo agradecido que te\nestoy, te vendo el artículo que quieras\nde mi tienda a mitad de precio.\n¡Pásate a verme cuando sea!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "¿Qué pasa? ¿Eh?...\n¿Tienes algo para mí?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x001a0815>¡¡¡Ah!!! ¡¿Has encontrado a mi precioso\n<color blue<escarabero rex>coloroff>?! ¡¿En serio?!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				wait_frames(50)
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000f00>¡Es verdad, lo has encontrado!\n¡Amigo mío, muchas gracias!\n\n\nYa está, la próxima vez que pases por\nmi tienda, te puedes llevar el artículo\nque quieras a mitad de precio.\n\n<0x10009:0x00000018>¡Es mi forma de darte las gracias!")
/*<133>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 115, 'param3': 42}
/*<115>*/ 				give_gratitude_crystals();
          			  case 1:
/*< 99>*/ 				switch (scene_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<111>*/ 					switch (zone_temp_flags[4 /* 0x1 10 */]) {
          					  case 0:
/*<113>*/ 						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          						  case 0:
/*<198>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 114, 'param3': 31}
/*<114>*/ 							printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000001e>Por favor, encuentra a mi precioso\n<color blue<escarabero rex>coloroff>.")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000001e>Si tienes tiempo, ¿podrías ir a buscar\na mi precioso <color blue<escarabero rex>coloroff>?\n¡No sabes el favor que me harías!\n[1-]¡Claro![2]Resígnate")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00110220>¡¿En serio?!\n¡Te tomo la palabra, amigo mío!")
/*< 61>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x001d0200>Mi precioso <color blue<escarabero rex>coloroff>...\n¡Tienes que encontrarlo!\n\n\n<0x10009:0x00110b00>¡Te lo pido por favor!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00010021>¡Para ti es fácil decirlo porque te\nresbala todo, pero yo no puedo\nolvidarlo así como así!")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000001e>Si quieres volver a Altárea, basta con\nque te eches en la cama a dormir.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010b00>¿Y?\n\n\n\n<0x10009:0x001d0b00>¿Has encontrado a mi precioso\n<color blue<escarabero rex>coloroff>? Ay, lo echo tanto\nde menos...")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00010600>¿Sabes? Estoy bastante preocupado...\n\n\n\n<0x10009:0x00000b00>Mi <color blue<escarabero rex>coloroff> ha desaparecido\ncon <color red<jaula y todo>coloroff>... Con el cariño\nque le tenía...\n\n<0x10009:0x001d0b00>No me lo puedo creer, era un animalito\ntan especial...\n\n[1-]Yo te lo\nbusco[2]Solo era\nun bicho...")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c00>Mmm<0x10006:0xfbcd>...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000001e>Por la cara que pones, veo que\nte interesa bastante, ¿eh?\n\n\n<0x10009:0x001c0a00>Verás, este es un insecto muy poco\ncomún: un <color blue<escarabero rex>coloroff>.\n\n\n<0x10009:0x001b0500>Es mi posesión más preciada...\nMi tesoro, por así decirlo.\n\n\nPodría pasarme todo el santo día\nmirándolo como un idiota...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000001e>¡Oye amigo, veo que te has vuelto\na quedar frito en mi cama!\nSupongo que estabas muy cansado...\n\n<0x10009:0x00000b00>Yo también me he quedado para\nel arrastre con tanto pedaleo...\nContigo dentro, la tienda pesa lo suyo.\n\n<0x10009:0x00000c00>¡No, no te preocupes, en serio!<pause 5>.<pause 5>.<pause 5>.<pause 5><0x10009:0x00000200>\nNo es para tanto, si ya casi me\nhe acostumbrado...")
          							goto flw_98
          						}
          					}
          				  case 1:
/*<173>*/ 					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          					  case 0:
/*<172>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*<174>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 116, 'param3': 31}
          							flw_116:
/*<116>*/ 							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
/*< 53>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0000021e>Oh, ¿ya estás despierto...?\n\n\n\nTenías cara de estar durmiendo bien\na gusto, por eso no he querido\ndespertarte.\n\n<0x10009:0x00000500>Aunque con don dormilón a bordo, \nla tienda pesaba lo suyo, je, je... \n\n[1-]¿Pero\nqué...?[2-]¿Dónde\nestoy?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "¿Eh? ¿Dices que hablo como una\npersona completamente distinta?...\n\n\n<0x10009:0x00001000><0x10006:0xfbcd><0x10006:0x00cd><0x10009:0x00000200>No sé... Igual es cierto...<pause 30>\nPero no pasa nada, hombre. Tampoco\nhay que fijarse tanto en los detalles...")
/*<103>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>Este es mi palacete, más o menos.\nPor las noches siempre paro por\naquí a descansar.\n\n<0x10009:0x00000200>El sitio no es gran cosa, pero está\nbien para relajarse, ¿no?\nPonte cómodo, estás en tu casa. \n\nLos pelícaros no vuelan de noche, pero\ntú tranquilo que mañana te llevo yo\nde vuelta.\n\nSi quieres volver a Altárea, solo tienes\nque tumbarte en la cama. Échate a\ndormir y verás como en seguida llega\nun nuevo día.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>Este es mi palacete, más o menos.\nPor las noches siempre paro por\naquí a descansar.\n\n<0x10009:0x00000200>El sitio no es gran cosa, pero está\nbien para relajarse, ¿no?\nPonte cómodo, estás en tu casa. \n\nLos pelícaros no vuelan de noche, pero\ntú tranquilo que mañana te llevo yo\nde vuelta.\n\nSi quieres volver a Altárea, solo tienes\nque tumbarte en la cama. Échate a\ndormir y verás como en seguida llega\nun nuevo día.")
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "¿Eh? ¿Dices que hablo como una\npersona completamente distinta?...\n\n\n<0x10009:0x00001000><0x10006:0xfbcd><0x10006:0x00cd><0x10009:0x00000200>No sé... Igual es cierto...<pause 30>\nPero no pasa nada, hombre. Tampoco\nhay que fijarse tanto en los detalles...")
          								goto flw_97
          							}
          						  case 1:
          							goto flw_116
          						}
          					  case 1:
          						goto flw_116
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_34() {
/*< 39>*/ 	start()
/*< 46>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 72, 'param3': 12}
/*< 72>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 82, 'param3': 13}
/*< 82>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_42:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Eso es un <color yellow<cazamariposas>coloroff>.\n¡Sirve para atrapar insectos de esos que\nmolan tanto! ¡Es taaan lo máximo!...\n\nAquí no es que haya muchos,\n¡pero seguro que en algún otro \nsitio podrás pillar mogollón!\n\n¡No dejes pasar esta oportunidad!\nSolo son <color red<50 rupias>coloroff>. ¿Te hace?\n\n[1-]Me lo llevo[2]Paso")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

