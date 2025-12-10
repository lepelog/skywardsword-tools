          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>¿Qué tal estás, Fay? ¡Perdona que\nte haya hecho esperar!\n\n\n¿Es esto lo que quieres que me lleve?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "Muy bien, estaré esperando en el cielo.\n¡Nos vemos luego, linda!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Amo, sugiero regresar a Neburia\nde inmediato para llevar el kyu\na su destino.")
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
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>¡Aparta, aparta!\n¡Tener que decírtelo siempre\nreduce la eficiencia!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "La probabilidad de que este espécimen\nsea de origen vegetal es del 40%. <color blue<Buhel\n>coloroff>puede aclarar si es una nueva especie\nde planta. \nRecomiendo llamar al robot para que\nvenga a recogerlo.\n[1-]Adelante[2]Dejémoslo")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Sí, amo. Avisaré al robot\ntelepáticamente.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Está bien, amo. Si cambia de opinión,\nsugiero volver a examinarlo.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00070014>¿Te parece bien llevarme hasta el\ncielo y soltarme a mitad de camino?\n\n\n<0x10009:0x00090013>Pensé que me habías engañado cuando\nprometiste guiarme a un lugar en el\nque podría vivir en paz... ¡Qué susto!")
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00070004>¡Espero que esta vez me lleves\nde verdad a ese sitio!\n\n\n<0x10009:0x00000001>¡Confío en ti!")
          	  case 1:
/*< 36>*/ 		switch (zone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00070003>No sabes cómo me gustaría que me\nllevases a un lugar apacible donde\nvivir sin miedo y sin tener que\nocultarme...\n<0x10009:0x00000001>¡No te olvides de este kyu!")
          		  case 1:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000001>¡Hola otra vez, amigo! De tanto\nesconderme, tengo los hombros\ndestrozados...\n[1-]¿Qué\nhombros?[2-]Pobrecito")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090014>¡Oye, un poco de respeto!\n¡Claro que tengo hombros!\nAlgo caídos, lo admito, pero\nhombros al fin y al cabo...\n<0x10009:0x00070011>Y no te imaginas la fatiga que da\npasarse la vida sentado, esperando\na que el peligro se presente\nde improviso.")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00090013>Todos están muy contentos de que\nel bosque haya recuperado la paz,\npero yo todavía no me lo creo.\n\n<0x10009:0x00070004>Y no puedo pasarme toda la vida así...")
          					flw_19:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090005>¿No existirá un lugar apacible\ndonde vivir tranquilo y sin tener\nque esconderse?\n[1-]Claro[2-]Muy cerca")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00060007>¡Kyu, kyu! ¡Eso es fantástico!\n¡Tienes que llevarme allí\ncuanto antes! ¡Date prisa!")
/*< 35>*/ 						zone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00090013>Y además, aquí hay enemigos por todas\npartes. ¡Esto está lleno de monstruos!\n\n\n<0x10009:0x00070004>Qué dura es la vida de los kyus...")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070011>No te imaginas la fatiga que da\npasarse la vida sentado, esperando\na que el peligro se presente\nde improviso.")
          				goto flw_38
          			}
          		}
          	}
          }

