          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000e0e0c>¡Ni lo sueñes, chico!\n¿No has visto que te faltan materiales?\nNo tienes suficientes <color yellow<colas de lagarto>coloroff>.\n\nEn los cuadernos de mi abuelo leí que\nlas puedes obtener de los monstruos\ncon aspecto de lagarto.")
/*<178>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x000e0e0c>¡Eh, chico!\nPor lo que veo te faltan materiales.\n¡No tienes suficiente <color yellow<mineral de Eldin>coloroff>!\n\nSegún mi abuelo, lo más práctico\nes ir a buscarlo bajo tierra, en el\ninterior de las montañas de fuego.")
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000e0e0c>¡Oye, chico!\nMe temo que te faltan materiales.\n¡No tienes suficientes <color yellow<flores arcanas>coloroff>!\n\nEn los cuadernos de mi abuelo dice\nque era un tipo de flor que crecía en\nel desierto hace muchísimo tiempo.\n¡Es la que usé para arreglar al Serbot!")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000e0e0c>¡Ni lo sueñes, chico!\nMe parece que te faltan materiales.\n¡No tienes suficientes <color yellow<flores arcanas>coloroff>!\n\nEn los cuadernos de mi abuelo dice\nque, en tiempos remotos, se podían\nencontrar por las zonas desérticas.")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x00000003>¡Eh, chico! ¿Te está tratando bien\nel Serbot? ¿Necesitas que te haga\nalgún arreglo?\n[1-]Mejorar[2-]Escudo[3]Nada")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000009>¡Hecho! Estos son los objetos\nque pueden mejorarse por ahora.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Chico, no tienes ningún objeto\nque se pueda mejorar...\n\n\n¿Por qué no vas a la tienda de\nutensilios y compras algo...")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000009>¿Qué escudo quieres que te repare?")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x000e0e0c>Pero... ¡si no tienes ningún escudo\nque arreglar!\n\n\n¿No te da vergüenza burlarte así\nde un honrado trabajador, chico?")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000e0e0c>¿Eh? Pues entonces, ¿para qué\nhas venido aquí?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00001104>Bueno, ahí te dejo al <color blue<Serbot>coloroff>.\n¡Cuídamelo bien!\n\n\nHe visto que tiene unos sensores muy\npotentes, capaces de localizarte allá\ndonde estés.\n\n<0x10009:0x00080700>¡Por muy lejos que vayas, sabrá\ncómo encontrarte!\n\n\nEs un poco respondón, pero trabaja\nbien. Bueno, chico... <pause 30>Será mejor que\nlo compruebes por ti mismo.")
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 1, line: 112 */ "<0x10009:0x00070700>Bueno, ¿quieres que te mejore algo?\n¿O te arreglo el escudo?\n[1-]Mejorar[2-]Escudo[3]Nada")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000003>Chico, ¿qué te pasa, que vienes\ncon esa cara tan triste?\n\n\nEso es que quieres pedirme algo,\n¿verdad?\n[1-]Pues sí...[2]No...")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000001>Para arreglar el <color blue<Serbot >coloroff>hace falta una\n<color yellow<flor arcana>coloroff>... Pero no tengo idea de\ndónde puede haber una.\n[1-]Tengo una[2]Ni yo...")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00070717>¿Eh? ¿Dices que tú tienes una?\n¡Chico, eso es increíble!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x000e0e0c>¡Serás<0x10006:0xfdcd>...! <0x10006:0x00cd>¡Si no tienes nada de nada!")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000018>¡Oh, así que esta es la famosa <color yellow<flor\narcana>coloroff>! Mira, le sale un fluido\naceitoso por el tallo, es verdad.\n\nCon esto vamos a dejar al <color blue<Serbot\n>coloroff>como nuevo; ¡espera y verás!\n\n\n<0x10009:0x00070700>No tardo nada; ¡lo tendré listo\nenseguida!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x000f0916>Ya me lo imaginaba. Por lo visto,\ncasi nadie ha oído hablar de las\n<color yellow<flores arcanas>coloroff>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00101008><pause 40>¿Eh? ¿El robot del abuelo?... \n\n\n\n<0x10009:0x00000e00>Ya veo, tú también vienes a burlarte...\n\n\n\n¿Cómo? ¿Que quieres...<pause 40> usar el robot\npara rescatar algo que ha caído bajo\nlas nubes?\n\n<0x10009:0x00070700>Eso quiere decir que crees en las\nhistorias de mi abuelo, ¿verdad?")
/*< 53>*/ 						printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x000d0900>Gracias, significa mucho para mí...\nAunque me temo que el robot no\nva a servirte de gran cosa.")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "Míralo, aquí lo tengo.\n\n\n\nSu nombre técnico es <color blue<Serbot>coloroff>. Ya sé\nque, visto así, no tiene un aspecto\ndemasiado espectacular...\n\nPero en realidad es un aparato\nprodigioso que transporta cualquier\ncosa al lugar que le ordenes.\n\nAunque<0x10006:0xffcd>...<0x10006:0x00cd> eso era antes. Ahora el\npobre no es más que un montón de\nchatarra vieja.")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x000d0e00>Según el abuelo, había que engrasarlo\ncon un aceite que se saca de una planta\nmuy rara, la <color yellow<flor arcana>coloroff>.\n\n<0x10009:0x000f0e00>Pero, por lo que a mí respecta, jamás\nhe visto una flor de esas, ni sé dónde\nencontrarlas.\n[1-]¿Como esta?[2]Ni yo...")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>A base de martillo, en la chatarrería\npodemos mejorar casi cualquier objeto\nque nos traigas. Si tu escudo está\ndañado, ¡también lo arreglaremos!\nTú dirás, ¿qué se te ofrece?\n[1-]Mejorar[2-]Arreglar\nescudo[3]Nada")
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
/*<192>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000e0e0c>¡Eh, chico!\nLo siento mucho, pero me temo que te\nfaltan materiales. No tienes suficientes\n<color yellow<alhajas ambarinas>coloroff>.\nEn los cuadernos de mi abuelo dice\nque las puedes encontrar por el suelo\nen diversos sitios. Parece que es uno\nde los tesoros más comunes.")
/*<193>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00080806>Bien, ¡manos a la obra! Pero debes\nsaber que los cambios que haga son\npermanentes, ¿eh?\n[1-]Adelante[2]Déjalo")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>¡Hecho! Estará listo en un momento.")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00080809>¡Terminado! Aquí tienes.")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000e0e05>¡Pero...! ¿Qué, te divierte reírte\nde los pobres trabajadores, chico?\n\n\n¡Anda, ve a burlarte de otro,\ngraciosillo!")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x000e0e0c>¡Eh, chico!\nSiento tener que decírtelo, pero\nte faltan materiales... No tienes\nsuficientes <color yellow<alhajas tenebrosas>coloroff>.\n\nSegún mi abuelo, se pueden encontrar\nen un reino espiritual, aunque si te digo\nla verdad eso no me dice nada de nada.")
/*<198>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080800>¡Muchas gracias! Es un placer hacer\nnegocios contigo.<0x10009:0x00000002>")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf(/* textboxtype: 2, unk: 0, line: 129 */ "Tengo información para el <0x10012:0x0000000b>amo.\n\n\n\nLas recientes mejoras introducidas\nen la espada permiten el <color red<rastreo>coloroff> de\n<color red<tesoros>coloroff>.\n\nA partir de ahora, basta con\nseleccionar la opción de <color red<tesoro>coloroff>\ncomo objetivo de <color red<rastreo>coloroff>.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x0009090d>¿Cómo, te vas sin más?\nNo hay quien te entienda, chico.\n\n\n<0x10009:0x00ffff00>Bueno, ya sabes dónde estoy.\n¡Vuelve cuando quieras!<0x10009:0x00000002>")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10012:0x00000065><0x10009:0x0000000f>¡Umpf<0x10006:0xfccd>...!<0x10006:0x00cd> ¡Ya está!<0x10005:0x001e0000>")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x000e0e0c>¡Eh, chico!\nLo siento, pero te faltan materiales.\n¡No tienes suficiente <color yellow<ectoplasma\nviscoso>coloroff>!\nSegún los cuadernos de mi abuelo,\nlo puedes conseguir de los monstruos\nblanditos.")
/*<207>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Si hay algo más que quieras mejorar,\nsolo tienes que decírmelo, chico.")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Parece que ahora no tienes nada más\nque se pueda mejorar... Bueno,\nsiempre puedes volver otro día.")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x161a0200>¡Gracias! ¡Estoy lleno de energía,\nlisto para trabajar!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "<pause 30><0x10009:0x160c0900>¿Eh?... <pause 30>¿Quién es este tipo de verde?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x0008110a>Mira, ¡pero si incluso habla! Parece que\nla operación ha sido un éxito, je, je.\n\n\nMira, este chico es quien ha traído\nel material necesario para arreglarte.\n¡Deberías darle las gracias!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x160b0900>¿En serio?... ¿Este individuo?\n\n\n\n<0x10009:0x160c0900>Bueno, pues... supongo que en ese caso\nte lo mereces, sí. Gracias y todo eso,\ntipo verdoso.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00090952>¡Serás...! ¡Bonita manera de hablarle\na la persona que te ha devuelto la vida!\n¡Grrr!\n\n<0x10009:0x00070700>Bueno, a lo que íbamos... Este chico\nnecesita transportar una cosa, así que\nmanos a la obra.")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x160b0900>Hmm. Puede que este individuo haya\nhecho que funcionara, pero no tengo\nninguna intención de ayudarlo.\n\n<0x10009:0x160c0900>Recibir órdenes de un niño no está\nen mi lista de prioridades.")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 2, unk: 0, line: 125 */ "Tengo información para el <0x10012:0x00000001>amo.\n\n\n\nEs posible <sound 4><color red<rastrear >coloroff>la ubicación\ndel <color red<rotor del molino>coloroff> que, según\nlos indicios, se halla perdido en\nlas tierras inferiores.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "Sin embargo, no considero que sea\nfactible llevarlo de vuelta a Neburia\nmetido en la alforja.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x161a0200>Ooh... ¿Quién...?\n<0x10009:0x160e0200>¿Quién es esta... preciosidad?")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x160e0200>Te... ¿te llamas Fay? ¿Sí? Oye, ¿qué\ndecías que buscabas exactamente?")
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x160c0200>¡N...<pause 20> no te preocupes!\n\n\n\n<0x10009:0x160e0200>¡Por alguien como tú, transportaría\nmil toneladas de ladrillos hasta el fin\ndel mundo, si hiciera falta!")
/*< 87>*/ 	printf(/* textboxtype: 2, unk: 0, line: 127 */ "<0x10006:0xfccd><0x10012:0x00000014>...<0x10006:0x00cd>")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0, line: 128 */ "<0x10012:0x00000001>Amo.\n\n\n\nPor lo visto, ahora sí es posible\ntransportar el rotor desde las tierras\ninferiores hasta Neburia.\n\nSugiero comenzar con la búsqueda\ndel <color blue<rotor del molino >coloroff>de inmediato.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x160c0200>Amo verdoso, tú descuida, que yo los\nayudaré. Puedo detectar las ondas\ntelepáticas que emite Fay.\n\n<0x10009:0x160e0200>Si necesitan algo, ¡basta con que ella\nme llame y acudiré al momento!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x00070700>Lo que no me explico es cómo vas\na saber por dónde buscar debajo\ndel mar de nubes.\n\nAunque, bueno... siempre puedes\npreguntarle al <color red<vidente >coloroff>ese de ahí.\n\n\nEl tipo asusta un poco, pero acierta\nbastante. Es el mejor encontrando\nobjetos perdidos y cosas así.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x000e0e0c>¡Oye, chico!\nLo siento, pero te faltan materiales.\n¡No tienes suficientes <color yellow<garras de\nmonstruo>coloroff>!\nEn los cuadernos de mi abuelo leí\nque las puedes conseguir de monstruos\nvoladores. Creo que los puedes ver por\naquí de noche...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100e11>¡Ahora que lo pienso, no recuerdo\nhaber visto muchos monstruos\npululando por la noche!\n¡Esto está muy tranquilo!")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000e0e0c>Lo siento, chico, pero no tienes los\ntesoros necesarios para mejorar eso.\n\n\n<0x10009:0x00070700>Si hay alguna otra cosa que quieras\nreparar, soy todo oídos.")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000e0e0c>No tienes suficientes rupias, chico...\nLo siento, pero no puedo hacerte\nla mejora.\n\n<0x10009:0x00070700>Si hay alguna otra cosa a la que quieras\ndarle un repaso, soy todo oídos.")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x000e0e0c>¡Deja de burlarte de mí, chico!\n¿Por qué me haces perder el tiempo?...\n¡Te faltan <color yellow<cuernos de monstruo>coloroff>!\n\nSegún mi abuelo, unos monstruos\nusan estos cuernos para avisar a sus\ncompañeros, y es posible quitárselos\nusando cierto artilugio...")
/*<213>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Chico, no tienes ningún objeto\nque se pueda mejorar...\n\n\n¿Por qué no vas a la tienda de\nutensilios y compras algo...")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x000e0e0c>¡Eh, chico!\nSiento tener que decirte esto, pero\nes que te faltan materiales... ¡No tienes\nsuficientes <color yellow<broches calavéricos>coloroff>!\nSegún mi abuelo, los puedes conseguir\nde los monstruos que usan palos.")
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00080800>Arreglar este escudo te costará\n<color red<10 rupias>coloroff>. ¿De acuerdo?\n[1-]Sí[2]Déjalo")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>¡Hecho! Estará listo en un momento.")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00080809>¡Terminado! Aquí tienes.")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e0c>Chico, te faltan rupias...\nSerá mejor que vuelvas cuando \nhayas ahorrado un poco.")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "Muy bien, entonces lo dejamos.\n¿Tienes otro escudo que quieras\narreglar?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000e0e0c>¡Me temo que no puede ser, chico!\nLo siento, pero te faltan materiales.\n¡No tienes suficiente <color yellow<cristal maléfico>coloroff>!\n\nSegún los cuadernos de mi abuelo,\nlo puedes conseguir de unos monstruos\nde color muy oscuro...")
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00080800>¿Tienes algún otro escudo\npara arreglar?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00080800>Parece que no tienes ningún otro\nescudo que necesite arreglos...\nBueno, ¡vuelve cuando quieras!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e0e0c>¡Lo siento mucho, chico!\n¿Son imaginaciones mías, o te faltan\nmateriales? ¡No tienes suficientes\n<color yellow<plumas de ave azul>coloroff>!\nSegún mi abuelo, puedes obtenerlas\nde pajaritos azules que viven en áreas\nfrondosas, ¡pero para eso tienes que\natrapar uno!")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x000e0e0c>No puede ser, chico...\nMe parece que te faltan materiales,\n¿no? ¡No tienes suficientes <color yellow<broches\ncalavéricos de oro>coloroff>!\nComo su nombre indica, son broches\ncalavéricos de un precioso brillo áureo.\n¡Te va a costar encontrarlos!")
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000e0e0c>¡Mala suerte, chico!\nOye, parece que te faltan materiales,\n¿me equivoco? ¡No tienes suficientes\n<color yellow<objetos perdidos de la Diosa>coloroff>!\nAl parecer, se trata de un tesoro muy\npoco común y de incalculable valor...\nO al menos eso he leído en los\ncuadernos de mi abuelo.")
/*<238>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e0e0c>¡Oye, chico!\nMe parece que te faltan materiales.\n¡No tienes suficientes <color yellow<larvas de abeja>coloroff>!\n\nSegún mi abuelo, lo mejor es buscar\nen áreas con abundante vegetación,\ncerca de las colmenas.")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000e0e0c>¡Eh, chico! \nMe parece que te faltan materiales.\n¡No tienes suficientes <color yellow<plumas de ave>coloroff>!\n\nHe leído en los cuadernos de mi abuelo\nque lo mejor es buscarlas en áreas\nboscosas. Son de pájaros pequeños que\npuedes atrapar con el cazamariposas.")
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000e0e0c>¡Eh, chico!\nCreo que te faltan materiales. ¡No\ntienes suficientes <color yellow<plantas rodadoras>coloroff>!\n\nEn los cuadernos de mi abuelo dice\nque puedes encontrarlas en el desierto.\nAunque claro, para poder atraparlas\nnecesitas un cazamariposas.")
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>¡Muy bien!\n¿Qué otra cosa quieres que mejore?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

