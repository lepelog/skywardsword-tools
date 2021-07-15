          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Ni lo sueñes, chico!\n¿No has visto que te faltan materiales?\nNo tienes suficientes <y<colas de lagarto>>.\n\nEn los cuadernos de mi abuelo leí que\nlas puedes obtener de los monstruos\ncon aspecto de lagarto.")
/*<178>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Eh, chico!\nPor lo que veo te faltan materiales.\n¡No tienes suficiente <y<mineral de Eldin>>!\n\nSegún mi abuelo, lo más práctico\nes ir a buscarlo bajo tierra, en el\ninterior de las montañas de fuego.")
/*<187>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0C¡Oye, chico!\nMe temo que te faltan materiales.\n¡No tienes suficientes <y<flores arcanas>>!\n\nEn los cuadernos de mi abuelo dice\nque era un tipo de flor que crecía en\nel desierto hace muchísimo tiempo.\n¡Es la que usé para arreglar al Serbot!")
          		flw_188:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0C¡Ni lo sueñes, chico!\nMe parece que te faltan materiales.\n¡No tienes suficientes <y<flores arcanas>>!\n\nEn los cuadernos de mi abuelo dice\nque, en tiempos remotos, se podían\nencontrar por las zonas desérticas.")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x00\x03¡Eh, chico! ¿Te está tratando bien\nel Serbot? ¿Necesitas que te haga\nalgún arreglo?\n[1]Mejorar[2]Escudo[3-]Nada")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x09¡Hecho! Estos son los objetos\nque pueden mejorarse por ahora.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CChico, no tienes ningún objeto\nque se pueda mejorar...\n\n\n¿Por qué no vas a la tienda de\nutensilios y compras algo...")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x09\x04\x00\x09¿Qué escudo quieres que te repare?")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CPero... ¡si no tienes ningún escudo\nque arreglar!\n\n\n¿No te da vergüenza burlarte así\nde un honrado trabajador, chico?")
          			}
          		  case 2:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0C¿Eh? Pues entonces, ¿para qué\nhas venido aquí?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Bueno, ahí te dejo al <b<Serbot>>.\n¡Cuídamelo bien!\n\n\nHe visto que tiene unos sensores muy\npotentes, capaces de localizarte allá\ndonde estés.\n\n\x0E\x01\x09\x04\x08\x700¡Por muy lejos que vayas, sabrá\ncómo encontrarte!\n\n\nEs un poco respondón, pero trabaja\nbien. Bueno, chico... <pause1E>Será mejor que\nlo compruebes por ti mismo.")
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x07\x700Bueno, ¿quieres que te mejore algo?\n¿O te arreglo el escudo?\n[1]Mejorar[2]Escudo[3-]Nada")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x03Chico, ¿qué te pasa, que vienes\ncon esa cara tan triste?\n\n\nEso es que quieres pedirme algo,\n¿verdad?\n[1]Pues sí...[2-]No...")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x01Para arreglar el <b<Serbot >>hace falta una\n<y<flor arcana>>... Pero no tengo idea de\ndónde puede haber una.\n[1]Tengo una[2-]Ni yo...")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf("\x0E\x01\x09\x04\x07\x717¿Eh? ¿Dices que tú tienes una?\n¡Chico, eso es increíble!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf("\x0E\x01\x09\x04\x0E\xE0C¡Serás\x0E\x01\x06\x02\xFDCD...! \x0E\x01\x06\x02Í¡Si no tienes nada de nada!")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf("\x0E\x01\x09\x04\x00\x18¡Oh, así que esta es la famosa <y<flor\narcana>>! Mira, le sale un fluido\naceitoso por el tallo, es verdad.\n\nCon esto vamos a dejar al <b<Serbot\n>>como nuevo; ¡espera y verás!\n\n\n\x0E\x01\x09\x04\x07\x700No tardo nada; ¡lo tendré listo\nenseguida!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf("\x0E\x01\x09\x04\x0F\x916Ya me lo imaginaba. Por lo visto,\ncasi nadie ha oído hablar de las\n<y<flores arcanas>>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x10\x1008<pause28>¿Eh? ¿El robot del abuelo?... \n\n\n\n\x0E\x01\x09\x04\x00\xE00Ya veo, tú también vienes a burlarte...\n\n\n\n¿Cómo? ¿Que quieres...<pause28> usar el robot\npara rescatar algo que ha caído bajo\nlas nubes?\n\n\x0E\x01\x09\x04\x07\x700Eso quiere decir que crees en las\nhistorias de mi abuelo, ¿verdad?")
/*< 53>*/ 						printf("\x0E\x01\x09\x04\x0D\x900Gracias, significa mucho para mí...\nAunque me temo que el robot no\nva a servirte de gran cosa.")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf("Míralo, aquí lo tengo.\n\n\n\nSu nombre técnico es <b<Serbot>>. Ya sé\nque, visto así, no tiene un aspecto\ndemasiado espectacular...\n\nPero en realidad es un aparato\nprodigioso que transporta cualquier\ncosa al lugar que le ordenes.\n\nAunque\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í eso era antes. Ahora el\npobre no es más que un montón de\nchatarra vieja.")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf("\x0E\x01\x09\x04\x0D\xE00Según el abuelo, había que engrasarlo\ncon un aceite que se saca de una planta\nmuy rara, la <y<flor arcana>>.\n\n\x0E\x01\x09\x04\x0F\xE00Pero, por lo que a mí respecta, jamás\nhe visto una flor de esas, ni sé dónde\nencontrarlas.\n[1]¿Como esta?[2-]Ni yo...")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x01A base de martillo, en la chatarrería\npodemos mejorar casi cualquier objeto\nque nos traigas. Si tu escudo está\ndañado, ¡también lo arreglaremos!\nTú dirás, ¿qué se te ofrece?\n[1]Mejorar[2]Arreglar\nescudo[3-]Nada")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Eh, chico!\nLo siento mucho, pero me temo que te\nfaltan materiales. No tienes suficientes\n<y<alhajas ambarinas>>.\nEn los cuadernos de mi abuelo dice\nque las puedes encontrar por el suelo\nen diversos sitios. Parece que es uno\nde los tesoros más comunes.")
/*<193>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x08\x806Bien, ¡manos a la obra! Pero debes\nsaber que los cambios que haga son\npermanentes, ¿eh?\n[1]Adelante[2-]Déjalo")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x07\x70E¡Hecho! Estará listo en un momento.")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf("\x0E\x01\x09\x04\x08\x809¡Terminado! Aquí tienes.")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05¡Pero...! ¿Qué, te divierte reírte\nde los pobres trabajadores, chico?\n\n\n¡Anda, ve a burlarte de otro,\ngraciosillo!")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Eh, chico!\nSiento tener que decírtelo, pero\nte faltan materiales... No tienes\nsuficientes <y<alhajas tenebrosas>>.\n\nSegún mi abuelo, se pueden encontrar\nen un reino espiritual, aunque si te digo\nla verdad eso no me dice nada de nada.")
/*<198>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x08\x800¡Muchas gracias! Es un placer hacer\nnegocios contigo.\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf("Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo.\n\n\n\nLas recientes mejoras introducidas\nen la espada permiten el <r<rastreo>> de\n<r<tesoros>>.\n\nA partir de ahora, basta con\nseleccionar la opción de <r<tesoro>>\ncomo objetivo de <r<rastreo>>.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x09\x90D¿Cómo, te vas sin más?\nNo hay quien te entienda, chico.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Bueno, ya sabes dónde estoy.\n¡Vuelve cuando quieras!\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf("\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0F¡Umpf\x0E\x01\x06\x02\xFCCD...!\x0E\x01\x06\x02Í ¡Ya está!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Eh, chico!\nLo siento, pero te faltan materiales.\n¡No tienes suficiente <y<ectoplasma\nviscoso>>!\nSegún los cuadernos de mi abuelo,\nlo puedes conseguir de los monstruos\nblanditos.")
/*<207>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf("Si hay algo más que quieras mejorar,\nsolo tienes que decírmelo, chico.")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf("Parece que ahora no tienes nada más\nque se pueda mejorar... Bueno,\nsiempre puedes volver otro día.")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf("\x0E\x01\x09\x04\x161A\x200¡Gracias! ¡Estoy lleno de energía,\nlisto para trabajar!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf("<pause1E>\x0E\x01\x09\x04\x160C\x900¿Eh?... <pause1E>¿Quién es este tipo de verde?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf("\x0E\x01\x09\x04\x08\x110AMira, ¡pero si incluso habla! Parece que\nla operación ha sido un éxito, je, je.\n\n\nMira, este chico es quien ha traído\nel material necesario para arreglarte.\n¡Deberías darle las gracias!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf("\x0E\x01\x09\x04\x160B\x900¿En serio?... ¿Este individuo?\n\n\n\n\x0E\x01\x09\x04\x160C\x900Bueno, pues... supongo que en ese caso\nte lo mereces, sí. Gracias y todo eso,\ntipo verdoso.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf("\x0E\x01\x09\x04\x09\x952¡Serás...! ¡Bonita manera de hablarle\na la persona que te ha devuelto la vida!\n¡Grrr!\n\n\x0E\x01\x09\x04\x07\x700Bueno, a lo que íbamos... Este chico\nnecesita transportar una cosa, así que\nmanos a la obra.")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Hmm. Puede que este individuo haya\nhecho que funcionara, pero no tengo\nninguna intención de ayudarlo.\n\n\x0E\x01\x09\x04\x160C\x900Recibir órdenes de un niño no está\nen mi lista de prioridades.")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("Tengo información para el \x0E\x01\x12\x04\x00\x01amo.\n\n\n\nEs posible <pling><r<rastrear >>la ubicación\ndel <r<rotor del molino>> que, según\nlos indicios, se halla perdido en\nlas tierras inferiores.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf("Sin embargo, no considero que sea\nfactible llevarlo de vuelta a Neburia\nmetido en la alforja.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Ooh... ¿Quién...?\n\x0E\x01\x09\x04\x160E\x200¿Quién es esta... preciosidad?")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x160E\x200Te... ¿te llamas Fay? ¿Sí? Oye, ¿qué\ndecías que buscabas exactamente?")
/*<116>*/ 	printf("\x0E\x01\x09\x04\x160C\x200¡N...<pause14> no te preocupes!\n\n\n\n\x0E\x01\x09\x04\x160E\x200¡Por alguien como tú, transportaría\nmil toneladas de ladrillos hasta el fin\ndel mundo, si hiciera falta!")
/*< 87>*/ 	printf("\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14...\x0E\x01\x06\x02Í")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Amo.\n\n\n\nPor lo visto, ahora sí es posible\ntransportar el rotor desde las tierras\ninferiores hasta Neburia.\n\nSugiero comenzar con la búsqueda\ndel <b<rotor del molino >>de inmediato.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf("\x0E\x01\x09\x04\x160C\x200Amo verdoso, tú descuida, que yo los\nayudaré. Puedo detectar las ondas\ntelepáticas que emite Fay.\n\n\x0E\x01\x09\x04\x160E\x200Si necesitan algo, ¡basta con que ella\nme llame y acudiré al momento!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x07\x700Lo que no me explico es cómo vas\na saber por dónde buscar debajo\ndel mar de nubes.\n\nAunque, bueno... siempre puedes\npreguntarle al <r<vidente >>ese de ahí.\n\n\nEl tipo asusta un poco, pero acierta\nbastante. Es el mejor encontrando\nobjetos perdidos y cosas así.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Oye, chico!\nLo siento, pero te faltan materiales.\n¡No tienes suficientes <y<garras de\nmonstruo>>!\nEn los cuadernos de mi abuelo leí\nque las puedes conseguir de monstruos\nvoladores. Creo que los puedes ver por\naquí de noche...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf("\x0E\x01\x09\x04\x10\xE11¡Ahora que lo pienso, no recuerdo\nhaber visto muchos monstruos\npululando por la noche!\n¡Esto está muy tranquilo!")
          		flw_208:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CLo siento, chico, pero no tienes los\ntesoros necesarios para mejorar eso.\n\n\n\x0E\x01\x09\x04\x07\x700Si hay alguna otra cosa que quieras\nreparar, soy todo oídos.")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CNo tienes suficientes rupias, chico...\nLo siento, pero no puedo hacerte\nla mejora.\n\n\x0E\x01\x09\x04\x07\x700Si hay alguna otra cosa a la que quieras\ndarle un repaso, soy todo oídos.")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Deja de burlarte de mí, chico!\n¿Por qué me haces perder el tiempo?...\n¡Te faltan <y<cuernos de monstruo>>!\n\nSegún mi abuelo, unos monstruos\nusan estos cuernos para avisar a sus\ncompañeros, y es posible quitárselos\nusando cierto artilugio...")
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CChico, no tienes ningún objeto\nque se pueda mejorar...\n\n\n¿Por qué no vas a la tienda de\nutensilios y compras algo...")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Eh, chico!\nSiento tener que decirte esto, pero\nes que te faltan materiales... ¡No tienes\nsuficientes <y<broches calavéricos>>!\nSegún mi abuelo, los puedes conseguir\nde los monstruos que usan palos.")
/*<218>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf("\x0E\x01\x09\x04\x08\x800Arreglar este escudo te costará\n<r<10 rupias>>. ¿De acuerdo?\n[1]Sí[2-]Déjalo")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x07\x70E¡Hecho! Estará listo en un momento.")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x08\x809¡Terminado! Aquí tienes.")
          		  case 1:
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CChico, te faltan rupias...\nSerá mejor que vuelvas cuando \nhayas ahorrado un poco.")
          		}
          	  case 1:
/*< 75>*/ 		printf("Muy bien, entonces lo dejamos.\n¿Tienes otro escudo que quieras\narreglar?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Me temo que no puede ser, chico!\nLo siento, pero te faltan materiales.\n¡No tienes suficiente <y<cristal maléfico>>!\n\nSegún los cuadernos de mi abuelo,\nlo puedes conseguir de unos monstruos\nde color muy oscuro...")
/*<227>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x09\x04\x08\x800¿Tienes algún otro escudo\npara arreglar?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf("\x0E\x01\x09\x04\x08\x800Parece que no tienes ningún otro\nescudo que necesite arreglos...\nBueno, ¡vuelve cuando quieras!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Lo siento mucho, chico!\n¿Son imaginaciones mías, o te faltan\nmateriales? ¡No tienes suficientes\n<y<plumas de ave azul>>!\nSegún mi abuelo, puedes obtenerlas\nde pajaritos azules que viven en áreas\nfrondosas, ¡pero para eso tienes que\natrapar uno!")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CNo puede ser, chico...\nMe parece que te faltan materiales,\n¿no? ¡No tienes suficientes <y<broches\ncalavéricos de oro>>!\nComo su nombre indica, son broches\ncalavéricos de un precioso brillo áureo.\n¡Te va a costar encontrarlos!")
/*<233>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Mala suerte, chico!\nOye, parece que te faltan materiales,\n¿me equivoco? ¡No tienes suficientes\n<y<objetos perdidos de la Diosa>>!\nAl parecer, se trata de un tesoro muy\npoco común y de incalculable valor...\nO al menos eso he leído en los\ncuadernos de mi abuelo.")
/*<238>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Oye, chico!\nMe parece que te faltan materiales.\n¡No tienes suficientes <y<larvas de abeja>>!\n\nSegún mi abuelo, lo mejor es buscar\nen áreas con abundante vegetación,\ncerca de las colmenas.")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Eh, chico! \nMe parece que te faltan materiales.\n¡No tienes suficientes <y<plumas de ave>>!\n\nHe leído en los cuadernos de mi abuelo\nque lo mejor es buscarlas en áreas\nboscosas. Son de pájaros pequeños que\npuedes atrapar con el cazamariposas.")
/*<168>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0C¡Eh, chico!\nCreo que te faltan materiales. ¡No\ntienes suficientes <y<plantas rodadoras>>!\n\nEn los cuadernos de mi abuelo dice\nque puedes encontrarlas en el desierto.\nAunque claro, para poder atraparlas\nnecesitas un cazamariposas.")
/*<173>*/ 	printf("\x0E\x01\x09\x04\x07\x700¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

