          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf("Si la <r<marmita >>es transportada al\nvolcán, calculo una probabilidad\ndel 85% de apagar las llamas\ncon el agua que contiene.\nRecomiendo pedir prestada la marmita\na la dragona del agua.")
          	  case 1:
/*<150>*/ 		printf("La probabilidad de que el agua\nde la <r<marmita>> extinga las llamas\ndel volcán es del 85%.\n\n<pling>Recomiendo pedir prestada la marmita\na la dragona del agua.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf("¡Mira y aprende, amo verdoso!\nAsí igual se te pega algo de mi\nportentoso heroísmo...")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x04Es un alivio vivir en un lugar pacífico\ncomo este, aunque a veces se hace\nun poquito aburrido...\n\n\x0E\x01\x09\x04\x11\x05Pero vamos, ojalá todos los problemas\nde la vida fueran así, ¿verdad?")
          	  case 1:
/*<423>*/ 		printf("\x0E\x01\x09\x04\x00\x14He decidido esconderme aquí, así que\nvete rápido, antes de que atraigas\na los monstruos...")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x0FMmm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf("Entonces...<pause0F> ¿desea el \x0E\x01\x12\x04\x00\x01amo que llame\nahora al robot?\n[1]Por favor[2]Odio a\nese robot")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf("\x0E\x01\x12\x04\x00\x05Como el amo ordene. Avisaré al robot\ntelepáticamente.")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf("\x0E\x01\x12\x04\x00\x01Amo...<pause0F> no es momento de dejarse\nllevar por manías personales. Avisaré\nal robot telepáticamente.")
          			  case 1:
/*<154>*/ 				printf("\x0E\x01\x12\x04\x00\x01Amo...<pause0F> no es momento de dejarse\nllevar por manías personales. Avisaré\nal robot telepáticamente.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf("¿Desea el \x0E\x01\x12\x04\x00\x01amo que llame al robot\npara transportar la <r<marmita>>?\n[1]Por favor[2]Odio a\nese robot")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf("¡Pues nada, esperaré en el cielo\ncomo de costumbre!")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 		printf("\x0E\x01\x09\x04\x00\x04A veces no está mal sumirse\nen las reflexiones personales\nde cada uno, ¿verdad?\n\n\x0E\x01\x09\x04\x00\x01Y para reflexionar bien, lo ideal\nes sentarse un rato y relajarse.")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf("\x0E\x01\x09\x04\x00\x13Contigo no tiene gracia jugar\nal escondite... ¡Se te da demasiado\nbien encontrarme!")
          			  case 1:
/*<428>*/ 				printf("\x0E\x01\x09\x04\x11\x13Y de nuevo has conseguido dar conmigo.\nEstá visto que de ti no puedo\nesconderme...\n\n\x0E\x01\x09\x04\x0B\x07Como premio, te doy esto que encontré\npor ahí mientras me escondía.")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf("\x0E\x01\x09\x04\x00\x14¡Pero tiene que quedar entre nosotros!")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf("\x0E\x01\x09\x04\x00\x07Este bosque es un remanso de paz...\n¡Y además hay mucha comida! Estoy\ncontentísimo de vivir aquí.")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf("\x0E\x01\x09\x04\x00\x02Es una pena que el nivel del agua haya\nvuelto a bajar. ¡Me estaba poniendo\nen forma gracias a la natación!")
/*<486>*/ 			printf("\x0E\x01\x09\x04\x00\x06Juo, juo, juo...")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf("\x0E\x01\x09\x04\x00\x0E¡¿Que la dragona del agua\nte ha aceptado?! ¡Eso sí que es\nuna sorpresa!")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x00\x0E¡Así que has conocido a la dragona\ndel agua! No sabes cómo te envidio.")
/*<530>*/ 			entrypoint_203_09();
          		  case 1:
/*<  5>*/ 			switch (scene_flags[55 /* 0x7 80 */]) {
          			  case 0:
/*<  9>*/ 				switch (story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */]) {
          				  case 0:
/*< 13>*/ 					switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          					  case 0:
/*< 15>*/ 						switch (temp_flags[5 /* 0x1 20 */]) {
          						  case 0:
          							flw_16:
/*< 16>*/ 							printf("\x0E\x01\x09\x04\x00\x02El mundo es un pañuelo... ¡Pero un\npañuelo grandísimo! Tengo muchas\nganas de conocer a ese ermitaño.")
/*<334>*/ 							printf("\x0E\x01\x09\x04\x00\x06Juo, juo, juo...")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x00\x0E¿Dices que has encontrado\nun ermitaño? ¡Y yo que pensaba\nque solo quedábamos cinco kyus!")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo dices?! ¿Que has conseguido\nllegar hasta la copa del árbol?\n\n\n\x0E\x01\x09\x04\x00\x08¿Y que había alguien allí? Mmm...\nserá mejor que vaya a comprobarlo.")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf("\x0E\x01\x09\x04\x00\x0E¡¿Cómo dices?! ¿Que has conseguido\nacceder al interior del árbol?")
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x00\x02Pues las vistas desde la copa son\nmagníficas. Hasta puede que\ndescubras algo interesante...")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf("\x0E\x01\x09\x04\x00\x03Todavía quedan partes del bosque\nque no has explorado.\n\n\n\x0E\x01\x09\x04\x00\x08Recuerda que, para usar el poder de la\nescama de dragón acuático y bucear\ncomo si fueras un pez, solo tienes que\npulsar (A) mientras nadas.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 327, 'param3': 6}
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf("\x0E\x01\x09\x04\x00\x0E¡Oye, renacuajo! Por lo que veo,\nhas conseguido una escama de dragón\nacuático, ¿no es así?\n\n\x0E\x01\x09\x04\x00\x02Supongo que sabrás que con ella puedes\nbucear bajo las aguas del mismo modo\nque los dragones surcan los cielos.")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x00\x03Seguro que queda algún lugar de\neste bosque en el que todavía no\nhas estado, ¿verdad?\n\n\x0E\x01\x09\x04\x00\x08¿A qué esperas entonces? Usa el poder\nde la escama y lo encontrarás.")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf("\x0E\x01\x09\x04\x00\x06Juo, juo, juo...")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf("\x0E\x01\x09\x04\x00\x03Vaya, es una lástima que no encontrases\na tu amiga en las profundidades\ndel bosque.\n\n\x0E\x01\x09\x04\x00\x02¡Pero no te vengas abajo! Seguro que\npronto llega el día de vuestro rencuentro.")
/*<524>*/ 					entrypoint_203_09();
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_91() {
/*< 49>*/ 	start()
/*< 51>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 70>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*<319>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<320>*/ 				printf("\x0E\x01\x09\x04\x09\x707¡¿Cómo?! ¿Ya tienes el <b<agua sagrada>>?\nPues date prisa y viértela dentro de\nesta marmita...")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf("\x0E\x01\x09\x04\x00\x0FMmm...")
/*<318>*/ 				printf("\x0E\x01\x09\x04\x07\x709¡Rayos... auténtica <b<agua sagrada>>!\n¡Lo has logrado!\n\n\n¡Date prisa y viértela en la marmita!")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x00\x0FMmm...")
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x07\x706Tráeme cuanto antes el agua sagrada\ny te indicaré el camino hasta la llama\nsagrada.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x0FMmm...")
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x706Si consigues traerme el <b<agua sagrada>>,\nte mostraré el camino a la llama.\n[1]Entendido[2-]Mejor no")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x09\x704¿Mmm? ¿No eres capaz? Bah, al fin\ny al cabo no eres más que un simple\nmortal.")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 455, 'param3': 6}
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf("\x0E\x01\x09\x04\x00\x0F¡Esta es mi morada!\n¡Es un lugar sagrado!\n\n\n\x0E\x01\x09\x04\x09\x700¡Ningún mortal tiene derecho\na profanarlo!\n\n\n¿Cómo has conseguido llegar\nhasta aquí?\n[1]¿Dragona\ndel agua?[2]Me he\nperdido")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf("\x0E\x01\x09\x04\x07\x903En efecto. Soy Farone, y la Diosa\nme confió la misión de proteger\nesta tierra.\n\nSé que mi aspecto actual no es el que\nse espera de una fiel servidora de la\nDiosa, pero no te dejes engañar por\nlas apariencias...\n\x0E\x01\x09\x04\x09\x900<pause0A>(.<pause0A>.<pause0A>.)<pause0A>\n\x0E\x01\x09\x04\x00\x07¿Y eso?")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf("\x0E\x01\x09\x04\x09\x900\x0E\x01\x06\x02\xFECDEstooo...<pause0F> \x0E\x01\x09\x04\x00\x06\x0E\x01\x06\x02\x2CDVeo que tienes la <b<escama\nde dragón acuático >>en tu poder.\n\n\n\x0E\x01\x09\x04\x09\x700Solo el elegido de la Diosa puede poseer\nsemejante reliquia. \x0E\x01\x09\x04\x00\x05¿Acaso eres tú\nel elegido?\n\n\x0E\x01\x09\x04\x07\x700Ni siquiera en tal caso habría logrado\nun mortal llegar hasta aquí por sí\nmismo...")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x07\x704Ajá, ya veo...<pause1E> El ermitaño kyu tiene\nuna lengua muy larga...\n\n\n\x0E\x01\x09\x04\x09\x910¡Mira que le tengo dicho que ni\nmencione este lugar! Igual me\nplanteo cortarle esa dichosa lengua...\n¡de un bocado!\n\x0E\x01\x09\x04\x07\x900Bueno, dejémoslo.<pause1E> Habrás venido\nen busca de la <r<llama sagrada>>, ¿no?\n[1]Así es[2]No lo sé")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf("\x0E\x01\x09\x04\x09\x704Mmm... Lo suponía.")
          						flw_463:
/*<463>*/ 						printf("\x0E\x01\x09\x04\x09\x700Sin embargo, me cuesta creer que la\nDiosa haya elegido a un insignificante\nmortal como tú.\n\n\x0E\x01\x09\x04\x07\x703Vas a tener que demostrar que\nme equivoco.\n\n\nVerás... Hace poco, un tal <b<Grahim>>,\nautoproclamado rey de los demonios,\nme infligió unas heridas de las que\naún no me he recuperado.")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf("\x0E\x01\x09\x04\x07\x70FDentro de esta marmita, recupero mis\nfuerzas poco a poco gracias al <b<agua\nsagrada>>.\n\n\x0E\x01\x09\x04\x09\x700Sin embargo, el efecto es demasiado\ndébil, por lo que necesitaría el poder\nde un agua más fresca y pura.\n\n\x0E\x01\x09\x04\x09\x906Necesito que me <r<traigas <r<<pling><r<agua sagrada>>\ndel mismo tipo que la que contiene\nesta marmita.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf("Si me complaces, te conduciré hasta\nla <r<llama sagrada >>que buscas.\n¿Qué respondes?\n[1]Acepto[2-]Mejor no")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf("\x0E\x01\x09\x04\x09\x704¿Mmm? ¿No eres capaz? Bah, al fin\ny al cabo no eres más que un simple\nmortal.")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf("\x0E\x01\x09\x04\x09\x910\x0E\x01\x08\x02\x1CD¡Cómo te atreves, insignificante\nmocoso mortal!\n\n\n\x0E\x01\x09\x04\x01\x900Aunque debo admitir que admiro\nel valor que has mostrado ante mí.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf("\x0E\x01\x09\x04\x09\x910¡¿Te atreves a burlarte de mí,\ninsignificante mocoso?!\n\n\nMárchate de aquí ahora mismo o te corto\nesos pies mortales... ¡a la altura\ndel cuello!")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 412, 'param3': 6}
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x2CD(!)\n\n\n\n¡¿Qué haces aquí, mortal?!")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, sugiero regresar a Celéstea\nde inmediato y dirigirnos al volcán.")
/*<166>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = true;
/*<206>*/ 	story_flags[677 /* us: 805A9B20 0x40, jp: 805ACDA0 0x40 */] = true;
/*<280>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<176>*/ 	scene_flags[2 'Lake Floria'][127 /* 0xE 80 */] = true;
/*<316>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<203>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*<204>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*<202>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*<205>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*<200>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*<201>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
          }

          void entrypoint_203_06() {
/*< 31>*/ 	start()
/*<392>*/ 	printf("\x0E\x01\x09\x04\x03\x0FCasi se me olvida...<pause0F> La dragona del\nagua es un poco tiquismiquis, así que\nprocura portarte bien.\n\n\x0E\x01\x09\x04\x01\x00Porque cuando se enfada...<pause3C> \x0E\x01\x09\x04\x00\x0BEn fin, sé\nde más de uno que ha acabado\nconvertido en aperitivo.")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf("\x0E\x01\x09\x04\x03\x06¡No se te ocurra contarle a nadie\ntodo lo que te he enseñado sobre\nla Llama de Farore!\n\n\x0E\x01\x09\x04\x01\x00No me apetecería acabar en la barriga\nde nadie.\n\n\n\x0E\x01\x09\x04\x03\x07Cuando hables con la dragona, vigila\ntu lenguaje y tus modales, ¿entendido?")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf("\x0E\x01\x09\x04\x00\x13Bueno, creo que me voy a echar\nuna cabezadita... Hasta otra.")
/*<388>*/ 	story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*<389>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_92() {
/*< 68>*/ 	start()
/*<172>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<497>*/ 			entrypoint_203_85();
          		  case 1:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x07\x702Me siento profundamente satisfecha\nde haber acabado con todos los\nmonstruos del bosque.\n\nY compruebo que por fin eres digno\nde la espada que portas.\n\n\n\x0E\x01\x09\x04\x07\x704Has cambiado, mortal. La primera vez\nque te vi, no creías en ti mismo...<pause1E>\nAhora rebosas confianza.\n\n\x0E\x01\x09\x04\x07\x706¡Pero no bajes jamás la guardia!\nDebes cumplir con los designios\nde la Diosa, que para eso fuiste\nelegido.")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x07\x702Puedes devolverme la marmita\ncuando te plazca. Yo ya no la necesito,\nasí que haz lo que quieras con ella.")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf("\x0E\x01\x09\x04\x07\x707¿Cómo dices? ¿Que necesitas que\nvuelva a prestarte mi <r<marmita>>?<pause1E>\n\x0E\x01\x09\x04\x00\x05Mmm...<pause0F> De acuerdo.\n\nSin embargo, debo decirte que esa\ncosa diminuta que vino a devolverla\nla última vez tiene la lengua muy\nlarga.\n\x0E\x01\x09\x04\x07\x706Lo dejaré pasar por tratarse de ti,\npero a ver si le enseñas modales...")
          				  case 1:
/*<169>*/ 					printf("\x0E\x01\x09\x04\x00\x06Ah, eres tú. ¿Cómo te ha ido?\n¿Conseguiste el poder necesario\npara fortalecer tu espada?\n\n\x0E\x01\x09\x04\x07\x707¿Cómo dices? ¿Que quieres\nque te preste mi <r<marmita>>?<pause1E>\n\x0E\x01\x09\x04\x00\x05Mmm...<pause0F> Está bien.\n\nA fin de cuentas, ya he recuperado\ntodo mi poder y no es necesario\nque vuelva a su interior.\n\n\x0E\x01\x09\x04\x07\x706Por mí, puedes llevártela ahora mismo\nsi quieres y usarla como desees.")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf("\x0E\x01\x09\x04\x07\x702Debes entregarte en cuerpo y alma\na la tarea de desarrollar el poder\nde tu espada.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf("\x0E\x01\x09\x04\x07\x70FHaré que Grahim pague por\nsus fechorías...")
          					  case 1:
/*< 71>*/ 						printf("\x0E\x01\x09\x04\x09\x900¡Jo, jo, jo! ¡Vuelvo a estar rebosante\nde energía!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 302, 'param3': 6}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf("Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo.\n\n\n\nNos encontramos al suroeste del bosque\nde Farone. Es posible confirmar\nnuestra posición exacta mediante\nel mapa.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 303, 'param3': 6}
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x07\x705Observa con atención...")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 268, 'param3': 6}
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDJum, jum, jum\x0E\x01\x06\x02\xFCCD...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf("")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 196, 'param3': 6}
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf("\x0E\x01\x09\x04\x00\x06La llama sagrada se encuentra\nen esta zona.\n\n\nPese a que la cascada impedía el\nacceso, los monstruos han logrado\nentrar de alguna forma y han tomado\nel lugar.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf("\x0E\x01\x09\x04\x07\x704Pero esto no debería ser un problema\npara el elegido de la Diosa.\n\n\nNo me cabe ninguna duda de que\nvolveremos a vernos, aunque, por\nsi acaso, ve con cuidado.\n\n\x0E\x01\x09\x04\x07\x703Hasta pronto.")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 277, 'param3': 6}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 279, 'param3': 6}
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 197, 'param3': 6}
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CD¡Kyuuu!")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf("Confirmo que el nivel del agua ha bajado.\nEl bosque de Farone ha recuperado\nla normalidad.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 210, 'param3': 6}
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf("\x0E\x01\x09\x04\x07\x702Veo que tu espada se ha fortalecido.")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf("A pesar de tu juvenil apariencia,\nparece obvio que eres el elegido\nde la Diosa.")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Sin embargo, todavía no tienes\nla fuerza de voluntad necesaria para\ncontrolar todo el poder de tu espada.")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf("¡Debes seguir entrenándote!\n¡La dedicación es la clave!")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf("\x0E\x01\x09\x04\x07\x700Hasta pronto.")
/*<483>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 485, 'param3': 17}
/*<485>*/ 	make_actor_do_something(0, 0)
/*<482>*/ 	set_camera(9, 0)
/*<218>*/ 	story_flags[118 /* us: 805A9AEA 0x08, jp: 805ACD6A 0x08 */] = true;
/*<275>*/ 	set_camera(10, 0)
/*<276>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_08() {
/*<390>*/ 	start()
/*<391>*/ 	printf("\x0E\x01\x09\x04\x01\x0B\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CD¡Un momento!")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf("\x0E\x01\x09\x04\x07\x705Observa con atención...")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf("¿Cómo puede llegar humano a sitio\nprofundo como este?\n\n\n¿Acaso tú sabe hacer <r<ataque torbellino>>?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf("\x0E\x01\x09\x04\x00\x08Ahora me ha venido a la cabeza\nPoli. Me pregunto qué tal le irá\nen su nuevo hogar.")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf("\x0E\x01\x09\x04\x00\x08¿Habrá abandonado ya Poli el bosque?\nLa verdad es que le deseo lo mejor.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDJum, jum, jum\x0E\x01\x06\x02\xFCCD...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf("¡Humano, humano! ¿Tú sabe hacer\n<r<salto torbellino>>?\n\n\nMuy fácil: tú hace <r<ataque torbellino\nhacia >><r<superficie agua>>, y entonces...\n¡sale disparado como paradusa!")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf("")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf("¡Argh, un humano!<pause14> ¡Bicho raro!")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf("\x0E\x01\x09\x04\x00\x03Debes valerte del poder de la Diosa\npara completar el símbolo que hay\nen la puerta del sur del bosque.")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf("\x0E\x01\x09\x04\x00\x09Venga, coloca una baliza para señalar\nla ubicación de \x0E\x02\x04\x02\x19CD.")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x01\x06¿Qué, has tomado buena nota de\nla ubicación del símbolo?\n[1]Así es[2-]Aún no")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x13Bueno, creo que me voy a echar\nuna cabezadita... Hasta otra.")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x03\x07Pues bien, ve con cuidado.")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x03Ay, qué desastre eres...")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x09Venga, coloca una baliza para señalar\nla ubicación de \x0E\x02\x04\x02\x19CD.")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf("\x0E\x01\x09\x04\x01\x04Como la puerta que da acceso al lago\nestá al sur, es probable que halles\nsu gemela hacia el norte. Te marco\nel lugar aproximado con \x0E\x02\x04\x02\x19CD.")
          			goto flw_406
          		}
          	}
          }

          void entrypoint_203_80() {
/*< 87>*/ 	start()
/*<104>*/ 	switch (story_flags[111 /* us: 805A9AEB 0x10, jp: 805ACD6B 0x10 */]) {
          	  case 0:
/*<105>*/ 		switch (story_flags[112 /* us: 805A9AEB 0x20, jp: 805ACD6B 0x20 */]) {
          		  case 0:
/*<121>*/ 			switch (story_flags[113 /* us: 805A9AEB 0x40, jp: 805ACD6B 0x40 */]) {
          			  case 0:
/*<129>*/ 				switch (story_flags[114 /* us: 805A9AEB 0x80, jp: 805ACD6B 0x80 */]) {
          				  case 0:
/*<138>*/ 					switch (scene_flags[15 /* 0x0 80 */]) {
          					  case 0:
/*<140>*/ 						switch (temp_flags[15 /* 0x0 80 */]) {
          						  case 0:
/*<262>*/ 							switch (temp_flags[16 /* 0x3 01 */]) {
          							  case 0:
/*<263>*/ 								printf("Tú entra ahora, por favor.")
          							  case 1:
/*<261>*/ 								printf("Aquí refugio de dragona del agua.\nTú espera aquí un momentito.")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf("Nosotros llegamos, ¡por fin!")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf("¡Toma, toma! ¡Tú elegido de la Diosa,\nqueda demostrado! ¡Venga, adelante!")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf("¡Cuidado con bicho ese!")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf("¡Oh, no! Ese pez... Fueron bichos\ncomo ese que atacaron a dragona\ndel agua... ¡Tú tienes mucho cuidado!")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf("¡Alucinante!\n\n\n\nPero mérito no tuyo... ¡Todo entero\nde escama de dragón acuático!")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf("Si imposible pasar por aquí para ti,\nmejor intentas dar buen salto.")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf("¡Aquí, aquí, aquí! ¡Rápido, rápido!\n\n\n\n¡¿Tú no puede pasar?! Especie rara,\nla tuya. ¿Y por arriba? ¿Por qué tú\nno pruebas?")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf("¡Uaaah! ¡Increíble, increíble!\n¡Vamos, tú sigue a mí; dragona del agua\nno muy lejos!")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf("Si tú hace <r<ataque torbellino>>,\n¡seres pinchudos están perdidos!")
          				  case 1:
/*<114>*/ 					printf("Yo quedado aquí con paradusa\namiga, pero ella no aparece por\nninguna parte...\n\nY encima montón de rocas bloquea\npaso. ¿Qué puede yo hacer?")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf("¡Imposible! ¡Cómo puede humano\nconocer esa técnica!\n\n\nMomento.<pause0A>.<pause0A>.<pause0A> ¿Eso es <b<escama\nde dragón acuático>>?\n\n\nEntonces eso significa...<pause0F> ¡Tú eres\n<r<enviado de la Diosa>> que dragona del\nagua profetizó hace mucho tiempo!\n\n¡En ese caso, tú puedes salvar a ella!\n[1]¿Qué pasa?[2]Llévame")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf("Fue hace poco...<pause0F> Hombre malvado llega\ncon esbirros y ataca a dragona.\n\n\nElla muy, muy poderosa, acaba con\ncasi todos monstruos, pero...\n\n\nEllos demasiados. Muchos, muchos,\nmuchos. Al final hombre malvado\nhiere a ella.\n\nY nosotros no tiene agua mágica\nsuficiente para curar heridas de\ndragona.\n\n¡Si tú hablas con dragona, ella dice\ntodo que tú necesitas saber!\n\n\nYo acompaño hasta ella, ¡vamos!")
/*<119>*/ 					scene_flags[2 'Lake Floria'][12 /* 0x0 10 */] = true;
          				  case 1:
          					goto flw_499
          				}
          			}
          		}
          	  case 1:
/*<106>*/ 		switch (scene_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<108>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<109>*/ 				printf("¡Si no sabes usar <g<ataque torbellino>>,\ntú no pasas nunca!")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf("¡Jua, jua, adiós muy buenas! No sé\ncómo apañas para bucear tan bien,\npero de aquí no pasas tú ya...\n\n¡Intenta pillarme si tú puedes!")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf("¡Pesado, pesadooo! ¡O dejas en paz\no chivo a dragona del agua!")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf("¡Aaah! ¡Humano, humano!\n¡Nooo, no, noooo!\n\n\n¡Yo desaparece antes de que él\ndescubra a mí!")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf("\x0E\x01\x09\x04\x00\x06La llama sagrada se encuentra\nen esta zona.\n\n\nPese a que la cascada impedía el\nacceso, los monstruos han logrado\nentrar de alguna forma y han tomado\nel lugar.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf("¡Este sitio pacífico! ¿Por qué tú viene\naquí, por qué?\n\n\nEntre humano y pez gigante, yo puede\ndespedir ya de echar siesta esta tarde...")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf("Cuando bosque todo inundado,\nyo queda aquí para protegerlo.\n\n\nYo estaba muy a gusto con todo lugar\npara mí sola, pero duró poco. Pena.")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf("¡Pena, pena!")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf("Dragona del agua fuera ahora mismo.")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf("¡Fuera, fuera!")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf("Dragona del agua ya recupera toda\nsu energía. ¡Gracias a ti!")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf("¡Gracias, gracias!")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf("¡Por favor, ayuda a dragona!")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf("¡Ayuda! ¡Ayuda!")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf("Dragona del agua espera a ti.\n¡Va a hablar con ella!")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf("¡Atiende! ¡Atiende!")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf("\x0E\x01\x09\x04\x07\x704Pero esto no debería ser un problema\npara el elegido de la Diosa.\n\n\nNo me cabe ninguna duda de que\nvolveremos a vernos, aunque, por\nsi acaso, ve con cuidado.\n\n\x0E\x01\x09\x04\x07\x703Hasta pronto.")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf("¡Tipo raro busca dragona del agua!\nQuería caer bien a ella...\n\n\n¡Pero a mí no engaña! Yo paradusa\nindependiente, con criterio propio.")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf("¡Aquí, aquí, aquí! ¡Rápido, rápido!\n\n\n\n¡¿Tú no puede pasar?! Especie rara,\nla tuya. ¿Y por arriba? ¿Por qué tú\nno pruebas?")
          	  case 1:
/*<135>*/ 		printf("¡Jua, jua, adiós muy buenas! No sé\ncómo apañas para bucear tan bien,\npero de aquí no pasas tú ya...\n\n¡Intenta pillarme si tú puedes!")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf("¿Mi hogar gusta a ti?\nDifícil entrar, pero...")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf("Agua ya baja de nuevo. Qué pena...")
          			  case 1:
/*<250>*/ 				printf("¡Dragona del agua ya recuperada!\nYo da mil gracias a ti.")
          			}
          		  case 1:
/*<249>*/ 			printf("Dragona del agua muy débil.\n¡Tú ayuda a ella!")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf("Dragona muy amable, pero también\ntiene mucho genio, así que mejor tú\nno haces enfadar a ella.")
/*<253>*/ 			printf("¡Pero no cuenta a nadie, ¿eh?!\n¡Esto secreto!")
          		  case 1:
/*<234>*/ 			printf("¡Aaah! ¡Tú no come a mí, por favor!\n[1]¿Eres la\ndragona?[2]Tranquila")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf("No, yo no...<pause1E> ¿Tú buscas a ella?\n\n\n\nEntonces yo doy consejo. Dragona\nmuy amable, pero también mucho\ngenio, así que mejor tú no haces\nenfadar a ella.")
          					flw_239:
/*<239>*/ 					printf("¡Pero no cuenta a nadie, ¿eh?!\n¡Esto secreto!")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf("No, yo no...<pause1E> ¿Tú buscas a ella?\n\n\n\nVeo tú tienes escama de dragón\nacuático, así que tú amigo. Yo dice\ndónde está dragona del agua.")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf("Dragona del agua está más adelante.\nMejor tú apunta, que si no olvida.")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf("¿Cómo?<pause0F> ¿Tú no come a mí?\n¡Muy amable!\n\n\nYo esconde porque monstruos horribles\npasan por aquí.")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, sugiero aguzar el oído.\nPercibo sonidos extraños.")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf("Enhorabuena, \x0E\x01\x12\x04\x00\x04amo Link.")
/*<256>*/ 	printf("El \x0E\x01\x12\x04\x00\x01amo ha superado el juicio\ndel espíritu y ha recibido el poder\nnecesario para encontrar la llama\nsagrada que imbuirá su espada.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf("Esa <y<escama de dragón acuático >>es\nuna de las reliquias de la Diosa.\n\n\nEncierra el poder de la <b<dragona\ndel agua>>, que permite a su portador\nbucear a grandes profundidades.")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("La llama se encuentra en alguna parte\nde este bosque... Probablemente en un\nlugar que el \x0E\x01\x12\x04\x00\x01amo no haya visitado aún.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf("\x0E\x01\x09\x04\x07\x707¿Otra vez tú por aquí?\n¿Hay algo de lo que quieras hablar?\n[1]Dragón fuego[2]Dragón trueno[3]Bosque[4-]Olvídalo")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x09\x04\x07\x704Bien... ¿qué puedo contarte sobre él?<pause0F>\nAl igual que yo, ese dragón recibió\nde la Diosa un poder: el de proteger\nel volcán.\nEs un ser excéntrico, quizá porque\nvive en un auténtico horno donde\ncualquier mortal se derretiría.\n¡Piénsatelo bien antes de ir allí!")
          	  case 1:
/*<494>*/ 		printf("\x0E\x01\x09\x04\x07\x704Bien... ¿qué puedo contarte sobre él?<pause0F>\nAl igual que yo, ese dragón recibió\nde la Diosa un poder: el de proteger\nel desierto.\nEs el más viejo de nuestra especie,\ny eso que no es precisamente de los\nque se cuidan...<pause0F> Me pregunto qué tal\nle irá.")
          	  case 2:
/*<495>*/ 		printf("\x0E\x01\x09\x04\x07\x704Antiguamente, cuando los humanos\nhabitaban esta tierra, vivían en\nperfecta comunión con la naturaleza.\n\n¿Pero no te parece que el bosque\ngana bastante sin la presencia\nde los de tu especie?")
          	  case 3:
/*<496>*/ 		printf("\x0E\x01\x09\x04\x07\x706¡No bajes jamás la guardia y cumple\ncon los designios de la Diosa, que para\neso fuiste elegido!")
          	}
          }

          void entrypoint_203_51() {
/*< 18>*/ 	start()
/*<349>*/ 	set_camera(15, 0)
/*<346>*/ 	set_camera(16, 0)
/*<347>*/ 	{'type': 'type3', 'subType': 2, 'param1': 35, 'param2': 356, 'next': 348, 'param3': 15}
/*<348>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 0, 'next': 29, 'param3': 13}
/*< 29>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 27, 'param3': 35}
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 99, 'next': 350, 'param3': 17}
/*<350>*/ 	printf("Informo de que hemos alcanzado\nla copa del árbol.\n\n\nDesde aquí se domina todo el bosque.\nLa probabilidad de localizar alguna\nzona todavía por descubrir es elevada.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, eso es...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 383, 'param3': 6}
/*<383>*/ 	printf("Confirmo que se trata de un nuevo\nejemplar de kyu.\n\n\nHay una probabilidad del 90% de\nque los ronquidos de este sujeto\nsean los que oímos antes.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 30, 'param3': 6}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf("\x0E\x01\x09\x04\x09\x900¡Jo, jo, jo! ¡Vuelvo a estar rebosante\nde energía!")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf("\x0E\x01\x09\x04\x01\x14¡A ti te quería yo ver! Mira que\nte advertí que no le contases nada\na la dragona del agua...\n\nEn cuanto el bosque se empezó a\ninundar, ¡supe que tenía los días\ncontados!\n\n\x0E\x01\x09\x04\x01\x07En fin, habrá que mirarlo por el lado\nbueno... Al menos, ya casi no quedan\nmonstruos y vuelve a reinar la paz.")
          			flw_540:
/*<540>*/ 			printf("\x0E\x01\x09\x04\x00\x13Bueno, creo que me voy a echar\nuna cabezadita... Hasta otra.")
          		  case 1:
/*<543>*/ 			printf("\x0E\x01\x09\x04\x01\x01Mira que eres pesadito...\n\n\n\n\x0E\x01\x09\x04\x01\x07¡¿Cómo?! ¿Que has conseguido que\nla dragona te acepte? Increíble...\n\n\nAunque en realidad no es para tanto.\nA mí me aceptó mucho antes que a ti.")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf("\x0E\x01\x09\x04\x01\x01¡Pero qué bruto eres!\n\n\n\n\x0E\x01\x09\x04\x01\x07¡Anda, si ya la tienes! Esa es el agua\nfavorita de la dragona.\n\n\n¿Sería mucho pedir que le dijeras que\nse la llevas de mi parte?")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf("\x0E\x01\x09\x04\x01\x01Ya veo que la delicadeza no es\ntu punto fuerte...\n\n\n\x0E\x01\x09\x04\x01\x06¿Cómo dices? ¿Que la dragona\ndel agua te ha pedido agua sagrada\na cambio de ayudarte? Ahora que\nlo mencionas...\n¿Conoces el manantial cristalino\nque hay detrás del templo?\nRecuerdo que la dragona adoraba\nel agua de esa cascada.")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf("\x0E\x01\x09\x04\x01\x01El premio a la delicadeza no te\nlo darán, no...\n\n\n\x0E\x01\x09\x04\x01\x07Ya veo que has conseguido abrir\nla puerta que conduce al lago, ¿no?\n\n\n¡Pues no se te ocurra decirle\na la dragona que yo te conté\ncómo llegar!")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf("\x0E\x01\x09\x04\x01\x04¿Pero qué...? ¿Otra vez tú?\n¿Querías algo?\n[1]Así es[2-]No, nada")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x00\x03Debes valerte del poder de la Diosa\npara completar el símbolo que hay\nen la puerta del sur del bosque.")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf("\x0E\x01\x09\x04\x00\x13Bueno, creo que me voy a echar\nuna cabezadita... Hasta otra.")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf("\x0E\x01\x09\x04\x00\x14¡¿Quién se atreve a perturbar\nmi descanso?!")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf("\x0E\x01\x09\x04\x01\x01\x0E\x01\x06\x02\xFCCD¿Ein? <pause0F>\x0E\x01\x06\x02Í¿Te conozco de algo?\n[1]Claro...[2]Qué va")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf("\x0E\x01\x09\x04\x00\x07Ahhh, ya veo... ¡Estás jugando en\nmodo Héroe, pillín! En ese caso,\nsupongo que sabes perfectamente\nlo que tienes que hacer...\n[1]Pues sí[2]Lo olvidé")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf("\x0E\x01\x09\x04\x00\x03Pues si has olvidado lo que tenías\nque hacer, me temo que tu aventura\nse va a complicar bastante...")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf("\x0E\x01\x09\x04\x01\x06¿Me prometes que no le revelarás\na nadie lo que te voy a contar?\n[1]Prometido[2]No puedo")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf("\x0E\x01\x09\x04\x03\x08De acuerdo, en ese caso abre bien\ntus puntiagudas orejas. Pero no\nolvides guardar el secreto, ¿eh?")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf("\x0E\x01\x09\x04\x03\x04Esa llama que buscas...<pause0F> Seguro que\nse trata de la <pling><b<Llama de Farore>>.\n\n\n\x0E\x01\x09\x04\x01\x00Sí, la Llama de Farore...<pause0F> Dicen que la\nDiosa la creó en tiempos inmemoriales,\ncuando vivía entre nosotros.")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf("\x0E\x01\x09\x04\x00\x02Ella se la entregó al gran espíritu\nque gobierna el <b<bosque de Farone>>:\nla <b<dragona del agua>>.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf("\x0E\x01\x09\x04\x00\x04Cuenta la leyenda que lo hizo a condición\nde que la dragona se la entregara a su vez\nal «<b<viajero caído del cielo>>»...")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf("Y tengo la impresión de que ese viajero\nvas a ser tú.\n\n\n\x0E\x01\x09\x04\x03\x09Así que lo mejor será que vayas a ver a\nla dragona del agua.")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf("Al sur del bosque hay un gran lago,\ny allí es donde la dragona del agua\nguarda la llama sagrada.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf("\x0E\x01\x09\x04\x00\x04Sin embargo, la puerta de acceso\nal lago está sellada para evitar\nel paso a seres indeseables.\n\n\x0E\x01\x09\x04\x00\x07Aunque, tratándose de ti, haré una\nexcepción y te enseñaré cómo abrirla.")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf("\x0E\x01\x09\x04\x01\x04Verás un símbolo grabado en la puerta.<pause0F>\nPues bien, dicho símbolo debe recibir el\n<r<poder de la Diosa>>.\n\n\x0E\x01\x09\x04\x00\x09No obstante...<pause0F> comprobarás que le\nfalta algo. Como ya habrás supuesto,\ntienes que completarlo.")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf("\x0E\x01\x09\x04\x03\x01Para averiguar qué es lo que le falta\nexactamente, tendrás que buscar otro\nsímbolo idéntico que hay en algún\nlugar de este bosque.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf("\x0E\x01\x09\x04\x03\x14\x0E\x01\x08\x02\x2CD¡¿Pero qué...?!\n\n\n\n\x0E\x01\x09\x04\x01\x06Me ofrezco a contarte un secreto,\n¿y así es como me lo agradeces?\n[1]Bueno, vale[2]Se siente")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf("\x0E\x01\x09\x04\x03\x0B\x0E\x01\x08\x02\x2CD¡¿Co... cómooo?!\n\n\n\n\x0E\x01\x09\x04\x01\x03Bah, da igual...<pause0F> Ya que has venido\nexpresamente hasta aquí, te lo contaré\nde todos modos.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf("\x0E\x01\x09\x04\x00\x03Jeje, pensé que te había visto antes.\nSupongo que será la vista, que a mi\nedad empieza a fallarme...")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf("\x0E\x01\x09\x04\x03\x06Pero bueno...<pause0F> ¿qué trae a un humano\npor estas tierras?\n[1]La llama[2]Nada")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf("\x0E\x01\x09\x04\x01\x01Jo, jo... conque buscas la llama para\nfortalecer tu espada y así encontrar\na una persona muy especial.\n\nMmm...<pause0F> Puedes verme y además\npersigues la llama... Un humano\ncurioso, sí señor.")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf("\x0E\x01\x09\x04\x01\x14Antes te he dicho que soy el protector\ndel bosque, ¿verdad?\n\n\nBueno, pues resulta que lo soy porque\nveo y oigo todo lo que pasa en estas\ntierras. ¡Por eso sé que buscas la llama!")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf("\x0E\x01\x09\x04\x01\x01Jo, jo, jo. Esto sí que es curioso.\n¿Tú no eres un humano de esos?\n\n\nPues yo soy el <b<ermitaño>> de los kyus,\nprotector de este bosque.\n\n\n\x0E\x01\x09\x04\x01\x06No sé cómo has conseguido llegar\nhasta aquí, pero... ¿puedes verme?\n[1]Sí[2]No")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf("\x0E\x01\x09\x04\x00\x07Jo, jo, jo... ¡y eso que últimamente\nni siquiera mis compañeros kyus\npueden verme!")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf("\x0E\x01\x09\x04\x03\x0B¡Mentira cochina!\n\n\n\n\x0E\x01\x09\x04\x01\x14¡¿Me despiertas a golpes y sin\nmiramientos y encima te atreves\na decir que no me ves?!")
          						goto flw_363
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_52() {
/*< 62>*/ 	start()
/*< 65>*/ 	story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<468>*/ 	switch (temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<516>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 467, 'param3': 35}
/*<467>*/ 		set_camera(30, 0)
          		flw_64:
/*< 64>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 84, 'param3': 16}
/*< 84>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*< 85>*/ 			printf("Análisis del agua de la marmita\nen curso\x0E\x01\x06\x02\xFCCD...<pause0F> \x0E\x01\x06\x02ÍConfirmo que\nsu <pling><r<composición es idéntica >>a la\nde la fuente de la contemplación.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 317, 'param3': 6}
/*<317>*/ 			temp_flags[2 /* 0x1 04 */] = true;
/*<470>*/ 			switch (temp_flags[3 /* 0x1 08 */]) {
          			  case 0:
/*<469>*/ 				set_camera(31, 0)
          				flw_183:
/*<183>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 185, 'param3': 16}
/*<185>*/ 				entrypoint_203_91();
          			  case 1:
          				goto flw_183
          			}
          		  case 1:
/*< 67>*/ 			printf("\x0E\x01\x12\x04\x00\x01Amo, estoy completando el análisis\ndel agua de la marmita\x0E\x01\x06\x02\xFCCD...<pause0F> \x0E\x01\x06\x02Í<pling>Confirmo\nque <r<es posible llevar a cabo un rastreo\n>>del agua sagrada.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf("Deduzco que la <y<botella vacía >>del \x0E\x01\x12\x04\x00\x01amo\npodría resultar útil al objeto de\ntransportar el agua.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 462, 'param3': 6}
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf("\x0E\x01\x09\x04\x00\x05Si continúas por esta senda, llegarás\nal bosque de Farone.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf("\x0E\x01\x09\x04\x09\x706¡Pues en marcha!\n¡No me hagas esperar!")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf("Detecto que el \x0E\x01\x12\x04\x00\x01amo no cuenta con\nun recipiente vacío para recoger\ny transportar el agua. Aconsejo\npreparar uno para dicho fin.")
          				goto flw_66
          			}
          		}
          	  case 1:
/*< 63>*/ 		{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 64, 'param3': 35}
          		goto flw_64
          	}
          }

          void entrypoint_203_87() {
/*<400>*/ 	start()
/*<401>*/ 	printf("¡Abre bien los ojos, mortal!\n\n\n\n¡Contempla a <b<Farone>>, la dragona\ndel agua a la que la Diosa confió\nla protección de esta tierra!")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf("\x0E\x01\x09\x04\x00\x07¡Qué alegría! Los bichejos invasores\nesos se han esfumado como por arte\nde magia. ¡La paz ha regresado por\nfin al bosque!\n\x0E\x01\x09\x04\x00\x04¡Espero que tú también des pronto con\ntu amiguita y que seáis felices!")
          	  case 1:
/*<415>*/ 		printf("\x0E\x01\x09\x04\x00\x01¡Hola, soy yo otra vez! ¿Has conseguido\nencontrar por fin a tu amiguita?\n[1]¿Quién eres?[2]Aún no...")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf("\x0E\x01\x09\x04\x11\x13Que quién soy, dice...<pause1E> ¡Qué rápido\nte has olvidado de mí!\n\n\n\x0E\x01\x09\x04\x0B\x04Con esa memoria tan frágil, más te vale\nabrir el mapa y mover el cursor sobre\nlos kyus para ver nuestros nombres.")
          		  case 1:
/*<535>*/ 			printf("\x0E\x01\x09\x04\x11\x13Vaya, pues lo siento... No te preocupes;\nseguro que pronto os vemos juntos,\nigual que nosotros, los kyus.")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf("")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf("¡Hola, Fay, primor!\n¡Perdona el retraso!")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf("\x0E\x01\x09\x04\x09\x700Me has servido bien. Has cumplido\nmis órdenes y me has traído el <b<agua\nsagrada>>. Tu esfuerzo es digno\nde alabanza.\nSuperaste el juicio del espíritu\ny obtuviste la <b<escama de dragón\nacuático>>, y tales hazañas no\npueden atribuirse a la suerte.")
          	  case 1:
/*<547>*/ 		printf("\x0E\x01\x09\x04\x09\x700Me has servido bien. Has cumplido\nmis órdenes y me has traído el <b<agua\nsagrada>>. Tu esfuerzo es digno\nde alabanza.\nSuperaste el juicio del espíritu\ny obtuviste la <b<escama de dragón\nacuático>>, y tales hazañas no\npueden atribuirse a la suerte.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf("La probabilidad de que este sea el\nsímbolo del que hablaba el ermitaño\nes del 80%.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf("Aconsejo memorizar su aspecto.")
/*<438>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 439, 'param3': 6}
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf("Puf... ¿Otra vez la <r<marmita>>?...<pause0F>\nBah, no pasa nada. ¡Déjamelo a mí!")
          	  case 1:
/*<160>*/ 		printf("Vaya, sí que es grande esta vez...<pause0F>\n¡Pero no hay problema!\n¡Para mí es pan comido!")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf("\x0E\x01\x09\x04\x07\x700Ahora me toca a mí cumplir mi promesa.\nTe conduciré hasta la <r<llama sagrada>>.\n\n\nAcompáñame.")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf("\x0E\x01\x09\x04\x09\x0CTodos dicen que el bosque vuelve a ser\nun lugar seguro, ¡pero no me lo creo!\n\n\n\x0E\x01\x09\x04\x07\x13Solo espero que el futuro nos traiga\nla paz y que por fin podamos vivir\ntranquilos.")
          	  case 1:
/*<419>*/ 		printf("\x0E\x01\x09\x04\x09\x0C¿Hasta cuándo tendremos que soportar\nesta vida llena de temor y sufrimiento?\n\n\n\x0E\x01\x09\x04\x07\x13¿Ya no existe un lugar seguro?\nSolo espero que el futuro nos traiga\nla paz y que por fin podamos vivir\ntranquilos.")
          	}
          }
