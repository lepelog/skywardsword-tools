          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00d¿Cómo va eso, Fay? ¡Perdona que\nte haya hecho esperar!\n\n\n¿Es esto lo que quieres\nque me lleve?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("¡Pues a volar! ¡Nos vemos, dulzura!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo, sugiero regresar a Celéstea\nde inmediato para llevar el kyu\na su destino.")
/*< 23>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*< 13>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = true;
/*< 24>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 25>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 26>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 27>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 29>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 30>*/ 	story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */] = true;
/*< 34>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_251_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00d¡Venga, aparta, hombre!\n¡Siempre estamos igual!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf("La probabilidad de que este espécimen\nsea de origen vegetal es del 40%. <b<Buhel\n>>puede aclarar si es una nueva especie\nde planta. \nRecomiendo llamar al robot para que\nvenga a recogerlo.\n[1]Adelante[2-]Dejémoslo")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sí, amo. Avisaré al robot telepáticamente.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Está bien, amo. En caso de cambiar de\nopinión, sugiero volver a examinarlo.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x07\x14¿Te parece bonito llevarme hasta el\ncielo y soltarme a mitad de camino?\n\n\n\x0E\x01\x09\x04\x09\x13Pensé que me habías engañado cuando\nprometiste guiarme a un lugar en el\nque podría vivir en paz... ¡Vaya susto!")
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x07\x04¡Espero que esta vez me lleves de verdad\na ese sitio!\n\n\n\x0E\x01\x09\x04\x00\x01¡Confío en ti!")
          	  case 1:
/*< 36>*/ 		switch (zone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf("\x0E\x01\x09\x04\x07\x03No sabes cómo me gustaría que me\nllevases a un lugar apacible donde\nvivir sin miedo y sin tener que\nocultarme...\n\x0E\x01\x09\x04\x00\x01¡No te olvides de este kyu!")
          		  case 1:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x00\x01¡Hola otra vez, amigo! De tanto\nesconderme, tengo los hombros\ndestrozados...\n[1]No tienes[2]Pobrecito")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x14¡Un poco más de respeto, oye! ¡Claro que\ntengo hombros! Algo caídos, lo admito,\npero hombros al fin y al cabo...\n\n\x0E\x01\x09\x04\x07\x11Y no te imaginas la fatiga que da pasarse\nla vida sentado, esperando a que el peligro\nse presente de improviso.")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf("\x0E\x01\x09\x04\x09\x13Todos están muy contentos de que\nel bosque haya recuperado la paz,\npero yo todavía no me lo creo.\n\n\x0E\x01\x09\x04\x07\x04Y no puedo pasarme toda la vida así...")
          					flw_19:
/*< 19>*/ 					printf("\x0E\x01\x09\x04\x09\x05¿No existirá un lugar apacible\ndonde vivir tranquilo y sin tener\nque esconderse?\n[1]Claro[2]Muy cerca")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x06\x07¡Kyu, kyu! ¡Eso es fantástico!\n¡Tienes que llevarme allí cuanto antes!\n¡Date prisa!")
/*< 35>*/ 						zone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x09\x13Y además, aquí hay enemigos para dar\ny regalar. ¡Esto es un hervidero\nde monstruos!\n\n\x0E\x01\x09\x04\x07\x04Qué dura es la vida de los kyus...")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf("\x0E\x01\x09\x04\x07\x11No te imaginas la fatiga que da pasarse\nla vida sentado, esperando a que el peligro\nse presente de improviso.")
          				goto flw_38
          			}
          		}
          	}
          }

