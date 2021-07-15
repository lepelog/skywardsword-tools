          void entrypoint_503_57() {
/*< 38>*/ 	start()
/*<560>*/ 	printf("\x0E\x01\x09\x04\x17\x1909Oui! C'est ça!\nC'est une des <r<pierres qui parlent >>dont il\nest question dans les écrits anciens!")
/*<561>*/ 	scene_flags[10 'Sealed Grounds'][73 /* 0x8 02 */] = true;
/*<614>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_503_74() {
/*<259>*/ 	start()
/*<116>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<117>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<118>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<422>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 66>*/ 	switch (scene_flags[64 /* 0x9 01 */]) {
          	  case 0:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<bombes>> apparaître! Pour les besoins\nde mes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		flw_67:
/*< 67>*/ 		switch (choice(2)) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<cercle fermé>>...<pause1E> C'est ce que doit\ntracer celui qui désire une grande\nforce destructrice. »")
/*<105>*/ 			printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          			flw_137:
/*<137>*/ 			temp_flags[9 /* 0x0 02 */] = true;
/*<216>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<509>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 70>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          			goto flw_137
          		}
          	  case 1:
/*< 71>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<cercle fermé>>...<pause1E> C'est ce que doit\ntracer celui qui désire une grande\nforce destructrice. »")
/*<104>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		goto flw_137
          	}
          }

          void entrypoint_503_58() {
/*<146>*/ 	start()
          	flw_55:
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<hexagone scintillant>>...<pause1E> C'est ce\nque doit tracer celui qui cherche la\nfortune. »")
/*<109>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		flw_135:
/*<135>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<221>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<507>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 58>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          		goto flw_135
          	}
          }

          void entrypoint_503_75() {
/*<260>*/ 	start()
/*<119>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<120>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<121>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<423>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 72>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<flèches>> apparaître! Pour les besoins de\nmes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		flw_73:
/*< 73>*/ 		switch (choice(2)) {
          		  case 0:
/*< 75>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07« Une <r<flèche horizontale>>...<pause1E> C'est ce que\ndoit tracer celui qui veut transpercer\nune cible au loin. »")
/*<103>*/ 			printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          			flw_138:
/*<138>*/ 			temp_flags[10 /* 0x0 04 */] = true;
/*<217>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<510>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          			goto flw_138
          		}
          	  case 1:
/*< 77>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Une <r<flèche horizontale>>...<pause1E> C'est ce que\ndoit tracer celui qui veut transpercer\nune cible au loin. »")
/*<102>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		goto flw_138
          	}
          }

          void entrypoint_503_59() {
/*<147>*/ 	start()
          	flw_61:
/*< 61>*/ 	switch (choice(2)) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Le<r< symbole rouge de la vie>>...<pause1E> C'est\nce que doit tracer celui qui désire la\nvitalité. »\n\n« Ainsi, la source de vie jaillira\nen pluie... »")
/*<107>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		flw_136:
/*<136>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<222>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<508>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 64>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          		goto flw_136
          	}
          }

          void entrypoint_503_07() {
/*<166>*/ 	start()
/*<367>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 364, 'param3': 32}
/*<364>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 368, 'param3': 15}
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 575, 'param3': 13}
/*<575>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 365, 'param3': 6}
/*<365>*/ 	set_camera(3, 0)
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 328, 'param3': 16}
/*<328>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<329>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_171:
/*<171>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<172>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Oh! Merci! Merci!\nT'arrêtes pas de m'étonner, toi!")
          				flw_195:
/*<195>*/ 				entrypoint_503_17();
          			  case 1:
/*<173>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Woh! J'en crois pas mes yeux!\n\n\n\nC'était ça la fortune dont parlaient\nles écrits anciens!")
/*<174>*/ 				scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
          				goto flw_195
          			}
          		  case 1:
/*<582>*/ 			scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
/*<562>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Woh! J'en crois pas mes yeux!\n\n\n\nC'était ça la fortune dont parlaient\nles écrits anciens!")
/*<486>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_171
          	}
          }

          void entrypoint_503_76() {
/*<441>*/ 	start()
/*<435>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<436>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<437>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<442>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<427>*/ 	switch (scene_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<429>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<fées>> apparaître! Pour les besoins de\nmes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		flw_428:
/*<428>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf("\x0E\x01\x09\x04\x00\x07« ... trois... iangl...\nTri... ce... »")
/*<434>*/ 			printf("\x0E\x01\x09\x04\x17\x1700À partir de là, les pages sont déchirées\net je n'arrive pas à les déchiffrer...\n\n\nÇa m'intrigue vraiment...")
          			flw_438:
/*<438>*/ 			temp_flags[12 /* 0x0 10 */] = true;
/*<440>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<506>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*<431>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          			goto flw_438
          		}
          	  case 1:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x00\x07« ... trois... iangl...\nTri... ce... »")
/*<433>*/ 		printf("\x0E\x01\x09\x04\x17\x1700À partir de là, les pages sont déchirées\net je n'arrive pas à les déchiffrer...\n\n\nÇa m'intrigue vraiment...")
          		goto flw_438
          	}
          }

          void entrypoint_503_08() {
/*<167>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 369, 'param3': 32}
/*<369>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 373, 'param3': 15}
/*<373>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 576, 'param3': 13}
/*<576>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 370, 'param3': 6}
/*<370>*/ 	set_camera(3, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 330, 'param3': 16}
/*<330>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<331>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_183:
/*<183>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<175>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Oh! Merci! Merci!\nT'arrêtes pas de m'étonner, toi!")
          				flw_194:
/*<194>*/ 				entrypoint_503_17();
          			  case 1:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Woh! Incroyable!\n\n\n\nC'était donc ça le symbole rouge\nde la vie dont parlaient les écrits\nanciens!")
/*<184>*/ 				scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
          				goto flw_194
          			}
          		  case 1:
/*<583>*/ 			scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
/*<563>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Woh! Incroyable!\n\n\n\nC'était donc ça le symbole rouge\nde la vie dont parlaient les écrits\nanciens!")
/*<498>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_183
          	}
          }

          void entrypoint_503_77() {
/*<460>*/ 	start()
/*<461>*/ 	switch (random(4)) {
          	  case 0:
/*<469>*/ 		entrypoint_503_76();
          	  case 1:
/*<462>*/ 		switch (random(4)) {
          		  case 0:
/*<465>*/ 			entrypoint_503_72();
          		  case 1:
/*<466>*/ 			entrypoint_503_73();
          		  case 2:
/*<467>*/ 			entrypoint_503_74();
          		  case 3:
/*<468>*/ 			entrypoint_503_75();
          		}
          	  case 2:
/*<463>*/ 		switch (random(4)) {
          		  case 0:
/*<470>*/ 			entrypoint_503_72();
          		  case 1:
/*<471>*/ 			entrypoint_503_73();
          		  case 2:
/*<472>*/ 			entrypoint_503_74();
          		  case 3:
/*<473>*/ 			entrypoint_503_75();
          		}
          	  case 3:
/*<464>*/ 		switch (random(4)) {
          		  case 0:
/*<474>*/ 			entrypoint_503_72();
          		  case 1:
/*<475>*/ 			entrypoint_503_73();
          		  case 2:
/*<476>*/ 			entrypoint_503_74();
          		  case 3:
/*<477>*/ 			entrypoint_503_75();
          		}
          	}
          }

          void entrypoint_503_60() {
/*<148>*/ 	start()
          	goto flw_67
          }

          void entrypoint_503_09() {
/*<168>*/ 	start()
          	flw_377:
/*<377>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 374, 'param3': 32}
/*<374>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 378, 'param3': 15}
/*<378>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 577, 'param3': 13}
/*<577>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 375, 'param3': 6}
/*<375>*/ 	set_camera(3, 0)
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 185, 'param3': 16}
/*<185>*/ 	switch (scene_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<177>*/ 		printf("\x0E\x01\x09\x04\x1817\x1909Oh! Merci! Merci!\nT'arrêtes pas de m'étonner, toi!")
/*<196>*/ 		entrypoint_503_17();
          	  case 1:
/*<178>*/ 		printf("\x0E\x01\x09\x04\x1817\x1908Fantastique! Magnifique! Fabuleux!!!\n\n\n\nÇa devait être de ça que parlaient\nles parties manquantes des écrits\nanciens!\n\nMerci de m'avoir permis de voir ça!")
/*<559>*/ 		set_camera(6, 0)
/*<186>*/ 		scene_flags[10 'Sealed Grounds'][63 /* 0x6 80 */] = true;
/*<515>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = true;
/*<419>*/ 		printf("\x0E\x01\x09\x04\x1808\xB02Maintenant, j'ai pu observer tout ce\ndont parlent les écrits anciens!\n\n\nPour te remercier de m'avoir aidé,\nje t'offre ce cadeau spécial!")
/*<418>*/ 		give_item(33 0x21);
/*<615>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 556, 'param3': 12}
/*<556>*/ 		set_camera(5, 0)
/*<588>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_394:
/*<394>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<599>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 589, 'param3': 32}
/*<589>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 394, 'param3': 15}
          			goto flw_394
          		}
          	}
          }

          void entrypoint_503_78() {
/*<571>*/ 	start()
          	flw_517:
/*<517>*/ 	printf("\x0E\x01\x09\x04\x18\x1701Je me demande bien... <pause1E>ce que pouvait\ncontenir la partie manquante des écrits\nanciens...\n\nLe mystère plane...\n\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          	flw_459:
/*<459>*/ 	entrypoint_503_65();
          }

          void entrypoint_503_61() {
/*<149>*/ 	start()
          	goto flw_73
          }

          void entrypoint_503_62() {
/*<163>*/ 	start()
          	flw_79:
/*< 79>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<hexagone scintillant>>...<pause1E> C'est ce\nque doit tracer celui qui cherche la\nfortune. »")
/*<101>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		flw_139:
/*<139>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<218>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<511>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 82>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          		goto flw_139
          	}
          }

          void entrypoint_503_10() {
/*<169>*/ 	start()
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 379, 'param3': 32}
/*<379>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 383, 'param3': 15}
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 579, 'param3': 13}
/*<579>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 380, 'param3': 6}
/*<380>*/ 	set_camera(3, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 332, 'param3': 16}
/*<332>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<333>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_187:
/*<187>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<179>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Oh! Merci! Merci!\nT'arrêtes pas de m'étonner, toi!")
          				flw_192:
/*<192>*/ 				entrypoint_503_17();
          			  case 1:
/*<180>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Oh! Époustouflant!\n\n\n\nDonc... la grande force destructrice\ndont parlaient les écrits anciens,\nc'était des bombes!")
/*<188>*/ 				scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
          				goto flw_192
          			}
          		  case 1:
/*<584>*/ 			scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
/*<564>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Oh! Époustouflant!\n\n\n\nDonc... la grande force destructrice\ndont parlaient les écrits anciens,\nc'était des bombes!")
/*<499>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_187
          	}
          }

          void entrypoint_503_63() {
/*<164>*/ 	start()
          	flw_85:
/*< 85>*/ 	switch (choice(2)) {
          	  case 0:
/*< 87>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Le<r< symbole rouge de la vie>>...<pause1E> C'est\nce que doit tracer celui qui désire la\nvitalité. »\n\n« Ainsi, la source de vie jaillira\nen pluie... »")
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		flw_140:
/*<140>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<219>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<512>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 88>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          		goto flw_140
          	}
          }

          void entrypoint_503_64() {
/*<165>*/ 	start()
          	flw_91:
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<cercle fermé>>...<pause1E> C'est ce que doit\ntracer celui qui désire une grande\nforce destructrice. »")
/*< 97>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		flw_141:
/*<141>*/ 		temp_flags[9 /* 0x0 02 */] = true;
/*<220>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<513>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AAh oui? Tu es sûr?\n<pause1E>Dans ce cas, je compte sur toi!")
          		goto flw_141
          	}
          }

          void entrypoint_503_65() {
/*<439>*/ 	start()
          	goto flw_428
          }

          void entrypoint_503_66() {
/*<544>*/ 	start()
          	flw_51:
/*< 51>*/ 	switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          	  case 0:
/*<586>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<223>*/ 			printf("\x0E\x01\x09\x04&\x1301Il faut attendre un peu avant que les\nmurs de la Déesse <r<se régénèrent>>!\n\n\n\x0E\x01\x09\x04\x0E\x1700Quand ce sera fait, je compte sur toi\npour m'aider dans mes recherches!")
          		  case 1:
/*<587>*/ 			printf("\x0E\x01\x09\x04\x1808\xB01Il faut attendre un peu avant que les\nmurs de la Déesse <r<se régénèrent>>!\n\n\n\x0E\x01\x09\x04\x18\x1700Quand ce sera fait, je compte sur toi\npour m'aider dans mes recherches!")
          		}
          	  case 1:
/*< 41>*/ 		check_item_flag(19, 1)
/*< 40>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*< 52>*/ 			switch (scene_flags[67 /* 0x9 08 */]) {
          			  case 0:
/*<443>*/ 				switch (scene_flags[68 /* 0x9 10 */]) {
          				  case 0:
/*<569>*/ 					switch (scene_flags[63 /* 0x6 80 */]) {
          					  case 0:
/*<134>*/ 						switch (temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<142>*/ 							printf("\x0E\x01\x09\x04!\x1701J'ai encore envie de voir plein de\n<y<rubis>> apparaître!\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
/*<150>*/ 							entrypoint_503_58();
          						  case 1:
/*<133>*/ 							switch (temp_flags[8 /* 0x0 01 */]) {
          							  case 0:
/*<143>*/ 								printf("\x0E\x01\x09\x04!\x1701Je veux voir une pluie de <y<c\x153urs>>!\n\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
/*<151>*/ 								entrypoint_503_59();
          							  case 1:
/*<132>*/ 								switch (temp_flags[9 /* 0x0 02 */]) {
          								  case 0:
/*<144>*/ 									printf("\x0E\x01\x09\x04\x18\x1701Il faut toujours être prêt à toute\néventualité! Aujourd'hui, je veux\nvoir apparaître des <y<bombes>>!\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
/*<152>*/ 									entrypoint_503_60();
          								  case 1:
/*<131>*/ 									switch (temp_flags[10 /* 0x0 04 */]) {
          									  case 0:
/*<145>*/ 										printf("\x0E\x01\x09\x04!\x1701J'ai hâte de voir des<y< flèches >>sortir de\nce mur!\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
/*<153>*/ 										entrypoint_503_61();
          									  case 1:
/*<457>*/ 										switch (temp_flags[12 /* 0x0 10 */]) {
          										  case 0:
/*<516>*/ 											switch (scene_flags[63 /* 0x6 80 */]) {
          											  case 0:
/*<458>*/ 												printf("\x0E\x01\x09\x04!\x1701Je veux encore voir une <y<fée\n>>apparaître! Tu peux faire ça pour\nmoi?\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          												goto flw_459
          											  case 1:
          												goto flw_517
          											}
          										  case 1:
/*<570>*/ 											entrypoint_503_77();
          										}
          									}
          								}
          							}
          						}
          					  case 1:
/*<607>*/ 						temp_flags[3 /* 0x1 08 */] = true;
/*<608>*/ 						temp_flags[4 /* 0x1 10 */] = true;
/*<609>*/ 						temp_flags[5 /* 0x1 20 */] = true;
/*<610>*/ 						temp_flags[6 /* 0x1 40 */] = true;
/*<568>*/ 						entrypoint_503_78();
          					}
          				  case 1:
/*<447>*/ 					switch (temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<518>*/ 						switch (scene_flags[61 /* 0x6 20 */]) {
          						  case 0:
/*<448>*/ 							printf("\x0E\x01\x09\x04!\x1701J'ai encore envie de voir plein de\n<y<rubis>> apparaître!\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          							flw_452:
/*<452>*/ 							entrypoint_503_58();
          						  case 1:
/*<522>*/ 							printf("\x0E\x01\x09\x04\x00\x1B05Penses\x2010tu vraiment qu'on peut \ndevenir riche avec ces murs?\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          							goto flw_452
          						}
          					  case 1:
/*<446>*/ 						switch (temp_flags[8 /* 0x0 01 */]) {
          						  case 0:
/*<519>*/ 							switch (scene_flags[62 /* 0x6 40 */]) {
          							  case 0:
/*<449>*/ 								printf("\x0E\x01\x09\x04!\x1701Je veux voir une pluie de <y<c\x153urs>>!\n\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          								flw_453:
/*<453>*/ 								entrypoint_503_59();
          							  case 1:
/*<523>*/ 								printf("\x0E\x01\x09\x04\x16\xB04« La source de vie jaillira en pluie... »\n\n\n\n\x0E\x01\x09\x04\x00\xB05Qu'est\x2010ce que ça peut bien vouloir\ndire? En tous cas, si c'est vrai, ça\nva sûrement être utile à un moment\ndonné!\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          								goto flw_453
          							}
          						  case 1:
/*<445>*/ 							switch (temp_flags[9 /* 0x0 02 */]) {
          							  case 0:
/*<520>*/ 								switch (scene_flags[64 /* 0x9 01 */]) {
          								  case 0:
/*<450>*/ 									printf("\x0E\x01\x09\x04\x18\x1701Il faut toujours être prêt à toute\néventualité! Aujourd'hui, je veux\nvoir apparaître des <y<bombes>>!\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          									flw_454:
/*<454>*/ 									entrypoint_503_60();
          								  case 1:
/*<524>*/ 									printf("\x0E\x01\x09\x04!\x1705Un cercle fermé? Mais... c'est pas\nfermé, d'habitude, un cercle?\n\n\n\x0E\x01\x09\x04\x16\x1E04Je veux dire... Un cercle...\n<pause0A>c'est un cercle, non?\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          									goto flw_454
          								}
          							  case 1:
/*<444>*/ 								switch (temp_flags[10 /* 0x0 04 */]) {
          								  case 0:
/*<521>*/ 									switch (scene_flags[65 /* 0x9 02 */]) {
          									  case 0:
/*<451>*/ 										printf("\x0E\x01\x09\x04!\x1701J'ai hâte de voir des<y< flèches >>sortir de\nce mur!\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          										flw_455:
/*<455>*/ 										entrypoint_503_61();
          									  case 1:
/*<525>*/ 										printf("\x0E\x01\x09\x04\x16\x2005« Transpercer une cible au loin »?\nEst\x2010ce que ça veut dire ce que je pense?\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          										goto flw_455
          									}
          								  case 1:
/*<456>*/ 									entrypoint_503_71();
          								}
          							}
          						}
          					}
          				}
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x18\x1701Pendant mes recherches, j'ai\ntrouvé d'autres écrits anciens!\nVeux\x2010tu savoir ce qu'ils disent?\n[1]Bien sûr![2-]Euh, non.")
/*< 43>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf("\x0E\x01\x09\x04\x16\x1E07« Une <r<flèche horizontale>>...<pause1E> C'est ce que\ndoit tracer celui qui veut transpercer\nune cible au loin. »")
/*< 45>*/ 					printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
/*< 46>*/ 					scene_flags[10 'Sealed Grounds'][67 /* 0x9 08 */] = true;
/*<336>*/ 					temp_flags[3 /* 0x1 08 */] = true;
/*<337>*/ 					temp_flags[4 /* 0x1 10 */] = true;
/*<338>*/ 					temp_flags[5 /* 0x1 20 */] = true;
/*<339>*/ 					temp_flags[10 /* 0x0 04 */] = true;
/*<553>*/ 					temp_flags[11 /* 0x0 08 */] = true;
/*<340>*/ 					story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<514>*/ 					story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
/*<625>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<626>*/ 						switch (scene_flags[62 /* 0x6 40 */]) {
          						  case 0:
/*<627>*/ 							switch (scene_flags[64 /* 0x9 01 */]) {
          							  case 0:
/*<628>*/ 								scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
          							  case 1:
          							}
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x08\xB07Allons, fais pas ton gêné!\nC'est évident que tu crèves\nd'envie d'en savoir plus!\nJe vais t'expliquer!")
          					goto flw_53
          				}
          			}
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x181F\x1908Cette marque sur le mur! Nous\nsommes devant l'un des <r<murs de\nla Déesse >>dédiés au héros...\nJ'en suis certain!!!")
/*<156>*/ 			switch (temp_flags[7 /* 0x1 80 */]) {
          			  case 0:
/*<527>*/ 				switch (scene_flags[61 /* 0x6 20 */]) {
          				  case 0:
/*<157>*/ 					printf("\x0E\x01\x09\x04!\x1701J'ai encore envie de voir plein de\n<y<rubis>> apparaître!\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          					flw_160:
/*<160>*/ 					entrypoint_503_62();
          				  case 1:
/*<529>*/ 					printf("\x0E\x01\x09\x04\x00\x1B05Penses\x2010tu vraiment qu'on peut \ndevenir riche avec ces murs?\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          					goto flw_160
          				}
          			  case 1:
/*<155>*/ 				switch (temp_flags[8 /* 0x0 01 */]) {
          				  case 0:
/*<526>*/ 					switch (scene_flags[62 /* 0x6 40 */]) {
          					  case 0:
/*<158>*/ 						printf("\x0E\x01\x09\x04!\x1701Je veux voir une pluie de <y<c\x153urs>>!\n\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          						flw_161:
/*<161>*/ 						entrypoint_503_63();
          					  case 1:
/*<530>*/ 						printf("\x0E\x01\x09\x04\x16\xB04« La source de vie jaillira en pluie... »\n\n\n\n\x0E\x01\x09\x04\x00\xB05Qu'est\x2010ce que ça peut bien vouloir\ndire? En tous cas, si c'est vrai, ça\nva sûrement être utile à un moment\ndonné!\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          						goto flw_161
          					}
          				  case 1:
/*<154>*/ 					switch (temp_flags[9 /* 0x0 02 */]) {
          					  case 0:
/*<528>*/ 						switch (scene_flags[64 /* 0x9 01 */]) {
          						  case 0:
/*<159>*/ 							printf("\x0E\x01\x09\x04\x18\x1701Il faut toujours être prêt à toute\néventualité! Aujourd'hui, je veux\nvoir apparaître des <y<bombes>>!\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          							flw_162:
/*<162>*/ 							entrypoint_503_64();
          						  case 1:
/*<531>*/ 							printf("\x0E\x01\x09\x04!\x1705Un cercle fermé? Mais... c'est pas\nfermé, d'habitude, un cercle?\n\n\n\x0E\x01\x09\x04\x16\x1E04Je veux dire... Un cercle...\n<pause0A>c'est un cercle, non?\n\n\n\x0E\x01\x09\x04\x08\xB00Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n\n\n[1]S'il te plaît![2-]Non, merci.")
          							goto flw_162
          						}
          					  case 1:
/*<252>*/ 						entrypoint_503_67();
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_15() {
/*<170>*/ 	start()
/*<387>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 384, 'param3': 32}
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 388, 'param3': 15}
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 580, 'param3': 13}
/*<580>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 385, 'param3': 6}
/*<385>*/ 	set_camera(3, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 334, 'param3': 16}
/*<334>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<335>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_189:
/*<189>*/ 			switch (scene_flags[65 /* 0x9 02 */]) {
          			  case 0:
/*<181>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Oh! Merci! Merci!\nT'arrêtes pas de m'étonner, toi!")
          				flw_193:
/*<193>*/ 				entrypoint_503_17();
          			  case 1:
/*<182>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Woh! Épatant!\n\n\n\nAhhh... C'est à ça que les écrits anciens\nfaisaient référence quand ils parlaient\nde transpercer une cible au loin!")
/*<190>*/ 				scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
          				goto flw_193
          			}
          		  case 1:
/*<585>*/ 			scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
/*<565>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Woh! Épatant!\n\n\n\nAhhh... C'est à ça que les écrits anciens\nfaisaient référence quand ils parlaient\nde transpercer une cible au loin!")
/*<500>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_189
          	}
          }

          void entrypoint_503_67() {
/*<251>*/ 	start()
/*<224>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*<227>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<230>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<234>*/ 				switch (random(3)) {
          				  case 0:
/*<239>*/ 					entrypoint_503_68();
          				  case 1:
/*<240>*/ 					entrypoint_503_69();
          				  case 2:
/*<241>*/ 					entrypoint_503_70();
          				}
          			  case 1:
/*<232>*/ 				entrypoint_503_70();
          			}
          		  case 1:
/*<229>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<233>*/ 				entrypoint_503_69();
          			  case 1:
/*<235>*/ 				switch (random(2)) {
          				  case 0:
/*<242>*/ 					entrypoint_503_70();
          				  case 1:
/*<243>*/ 					entrypoint_503_69();
          				}
          			}
          		}
          	  case 1:
/*<225>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<228>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<231>*/ 				entrypoint_503_68();
          			  case 1:
/*<237>*/ 				switch (random(2)) {
          				  case 0:
/*<244>*/ 					entrypoint_503_68();
          				  case 1:
/*<245>*/ 					entrypoint_503_70();
          				}
          			}
          		  case 1:
/*<226>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<236>*/ 				switch (random(2)) {
          				  case 0:
/*<246>*/ 					entrypoint_503_68();
          				  case 1:
/*<247>*/ 					entrypoint_503_69();
          				}
          			  case 1:
/*<238>*/ 				switch (random(3)) {
          				  case 0:
/*<248>*/ 					entrypoint_503_68();
          				  case 1:
/*<249>*/ 					entrypoint_503_69();
          				  case 2:
/*<250>*/ 					entrypoint_503_70();
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_68() {
/*<253>*/ 	start()
/*<128>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<129>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<130>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<424>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 78>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<rubis>> apparaître! Pour les besoins de\nmes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		goto flw_79
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<hexagone scintillant>>...<pause1E> C'est ce\nque doit tracer celui qui cherche la\nfortune. »")
/*<100>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		goto flw_139
          	}
          }

          void entrypoint_503_51() {
          	start()
/*<351>*/ 	switch (scene_flags[110 /* 0xC 40 */]) {
          	  case 0:
          		flw_13:
/*< 13>*/ 		printf("\x0E\x01\x09\x04%\x1356Euh... En fait, je viens juste de\ncommencer mes recherches...\n\n\n\x0E\x01\x09\x04\x0E\x1300Si ça t'intéresse, reviens me voir\nplus tard!\n\n\n\x0E\x01\x09\x04\x00\x1300En attendant, je vais essayer de faire\navancer mes recherches!")
          	  case 1:
/*<352>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 5, 'param3': 31}
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x00\x01Tiens, te revoilà! Tu es dans le jus\ncomme d'habitude, à ce que je vois...\n\n\n\x0E\x01\x09\x04\x1B\x1300Moi aussi! Depuis la dernière fois,\nj'ai passé mon temps à étudier\nles mystères de ce monde...\n\n\x0E\x01\x09\x04\x0E\x1300Veux\x2010tu que je te fasse part des\nconclusions de mes recherches?\n[1]Oh oui![2-]Euh, non\nmerci...")
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			printf("\x0E\x01\x07\x04\x0E\x1908Tu seras pas déçu! En fait, au cours\nde mes recherches, j'ai découvert\nquelque chose.\n\nDans ce monde, \x0E\x01\x07\x04\x00\x1300il existe des <r<murs>> et\ndes <r<pierres>> qui réagissent aux <r<belles\nmélodies>>!\n\n\x0E\x01\x07\x04\x0E\x1300Veux\x2010tu en savoir plus?\n[1]Bien sûr![2-]Ça ira...")
/*< 12>*/ 			switch (choice(2)) {
          			  case 0:
/*<353>*/ 				scene_flags[10 'Sealed Grounds'][110 /* 0xC 40 */] = true;
          				goto flw_13
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf("\x0E\x01\x09\x04%\xE05Aaah... Dommage...\nSi tu changes d'idée, reviens me voir...")
          			}
          		  case 1:
          			goto flw_11
          		}
          	}
          }

          void entrypoint_503_17() {
/*<191>*/ 	start()
/*<557>*/ 	set_camera(6, 0)
/*<631>*/ 	switch (scene_flags[113 /* 0xF 02 */]) {
          	  case 0:
/*<197>*/ 		switch (random(4)) {
          		  case 0:
/*<198>*/ 			switch (random(4)) {
          			  case 0:
/*<409>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<400>*/ 				give_item(62 0x3E);
          				flw_554:
/*<554>*/ 				set_camera(5, 0)
/*<596>*/ 				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          				  case 0:
          					flw_501:
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<598>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 597, 'param3': 32}
/*<597>*/ 					{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 501, 'param3': 15}
          					goto flw_501
          				}
          			  case 1:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<401>*/ 				give_item(4 0x04);
/*<616>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<212>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<213>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<214>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<215>*/ 				give_item(62 0x3E);
          				goto flw_554
          			}
          		  case 1:
/*<199>*/ 			switch (random(4)) {
          			  case 0:
/*<411>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<402>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<412>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<403>*/ 				give_item(4 0x04);
/*<617>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<204>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<205>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<206>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<207>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 2:
/*<200>*/ 			switch (random(4)) {
          			  case 0:
/*<413>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<404>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<414>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<405>*/ 				give_item(4 0x04);
/*<618>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<208>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<209>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 3:
/*<210>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<211>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 3:
/*<201>*/ 			switch (random(4)) {
          			  case 0:
/*<415>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<406>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 1:
/*<416>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<407>*/ 				give_item(4 0x04);
/*<619>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<202>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<203>*/ 				give_item(32 0x20);
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 3:
/*<417>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<408>*/ 				give_item(32 0x20);
/*<620>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			}
          		}
          	  case 1:
/*<633>*/ 		scene_flags[10 'Sealed Grounds'][113 /* 0xF 02 */] = true;
/*<632>*/ 		printf("\x0E\x01\x09\x04\x1808\xB02Tiens, je te donne ça pour te remercier\nde m'avoir aidé dans mes recherches!")
/*<630>*/ 		give_item(94 0x5E);
/*<638>*/ 		set_camera(3, 0)
/*<640>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 639, 'param3': 32}
/*<639>*/ 		printf("\x0E\x01\x09\x04\x1808\x1301Le mur de la Déesse va mettre un peu\nde temps pour <r<se régénérer>>. Reviens\nme voir un peu plus tard pour m'aider\ndans mes recherches!")
/*<635>*/ 		set_camera(5, 0)
/*<636>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_634:
/*<634>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<637>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 634, 'param3': 15}
          			goto flw_634
          		}
          	}
          }

          void entrypoint_503_69() {
/*<254>*/ 	start()
/*<125>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<126>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<127>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<425>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 84>*/ 	switch (scene_flags[62 /* 0x6 40 */]) {
          	  case 0:
/*< 86>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<c\x153urs>> apparaître! Pour les besoins de\nmes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		goto flw_85
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Le<r< symbole rouge de la vie>>...<pause1E> C'est\nce que doit tracer celui qui désire la\nvitalité. »\n\n« Ainsi, la source de vie jaillira\nen pluie... »")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		goto flw_140
          	}
          }

          void entrypoint_503_52() {
/*<  1>*/ 	start()
/*<346>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<396>*/ 		printf("\x0E\x01\x09\x04\x1D\x1353Qu'est\x2010ce qui se passe?!\n<pause1E>Je n'avais jamais ressenti\nça auparavant!")
          	  case 1:
/*<354>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\n\x1304Dans les écrits anciens, il est dit que de\nnombreux papillons se rassemblent\nautour de certains murs et certaines\npierres.\nIl semble que ces papillons soient\ncapables d'en détecter la présence.\nVeux\x2010tu en savoir plus?\n[1]Oui![2-]Non,\nça suffit.")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*<502>*/ 				scene_flags[10 'Sealed Grounds'][111 /* 0xC 80 */] = true;
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x0E\x1300Tu veux que je te parle de quoi?\n[1]Des murs[2]Des pierres")
/*< 25>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x01Selon les écrits anciens, la Déesse a\ndédié ces murs à l'élu!\n\n\nOn raconte qu'ils matérialisent les\nsouhaits du héros... On ne les appelle\npas « <r<murs de la Déesse >>» pour rien!\n\nVeux\x2010tu en savoir plus?\n[1]Évidemment![2-]Non, non.")
/*< 28>*/ 					switch (choice(2)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04%\x1B56Euh... bien... en fait...\nEn fait, pour l'instant, c'est tout ce que\nj'ai pu trouver!\n\n\x0E\x01\x09\x04\n\x1300Si j'en apprends plus, je te le dirai!")
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x00\x04En ce moment, je remue ciel\net terre pour trouver où sont\ncachés les <r<murs de la Déesse>>!")
          					}
          				  case 1:
/*< 26>*/ 					printf("\x0E\x01\x09\x04\x00\x01Selon les écrits anciens, ces pierres\nfont « Boi\x2010oi\x2010oing! » quand elles\napparaissent et disent des choses\nétranges!\nDes <r<pierres qui parlent>>...\nC'est incroyable, non?\nVeux\x2010tu en savoir plus?\n[1]Dis\x2010moi\ntout![2-]Non merci.")
/*<503>*/ 					switch (choice(2)) {
          					  case 0:
/*<504>*/ 						printf("\x0E\x01\x09\x04%\x1B56Euh... bien... en fait...\nEn fait, pour l'instant, c'est tout ce que\nj'ai pu trouver!\n\n\x0E\x01\x09\x04\n\x1300Si j'en apprends plus, je te le dirai!")
          					  case 1:
/*<505>*/ 						printf("\x0E\x01\x09\x04\x00\x04En ce moment, je concentre\ntous mes efforts pour découvrir\noù se trouvent les <r<pierres qui parlent>>!")
          					}
          				}
          			  case 1:
          				flw_16:
/*< 16>*/ 				printf("\x0E\x01\x09\x04%\xE05Aaah... Dommage...\nSi tu changes d'idée, reviens me voir...")
          			}
          		  case 1:
/*<355>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 6, 'param3': 31}
/*<  6>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tiens, te revoilà! Tu es dans le jus\ncomme d'habitude, à ce que je vois...\n\n\n\x0E\x01\x09\x04\x1B\x1300Moi aussi! Depuis la dernière fois,\nj'ai passé mon temps à étudier\nles mystères de ce monde...\n\n\x0E\x01\x09\x04\x0E\x1300Veux\x2010tu que je te fasse part des\nconclusions de mes recherches?\n[1]Oh oui![2-]Euh, non\nmerci...")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("\x0E\x01\x07\x04\x0E\x1908Tu seras pas déçu! En fait, au cours\nde mes recherches, j'ai découvert\nquelque chose.\n\nDans ce monde, \x0E\x01\x07\x04\x00\x1300il existe des <r<murs>> et\ndes <r<pierres>> qui réagissent aux <r<belles\nmélodies>>!\n\n\x0E\x01\x07\x04\x0E\x1300Veux\x2010tu en savoir plus?\n[1]Bien sûr![2-]Ça ira...")
/*< 17>*/ 				switch (choice(2)) {
          				  case 0:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x0E\x1904Oui! Oui! Oui!\nJ'aime les jeunes gens enthousiastes\ncomme toi!\n\n\x0E\x01\x09\x04\x00\x1900Avant de te parler des <r<murs>> et des\n<r<pierres>>, je dois te poser une question.\n\n\n\x0E\x01\x09\x04\x0E\xB00Sais\x2010tu ce que c'est un <b<papillon azur>>? \n[1]J'en ai déjà\nvu, oui[2-]Aucune\nidée")
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
/*< 20>*/ 						printf("Parfait, on va passer à autre chose.")
          						goto flw_22
          					  case 1:
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x0E\x1300Les <b<papillons azur>> sont de très jolis\npapillons bleus!\n\n\n\x0E\x01\x09\x04\x1B\x1300Ils vivent longtemps et s'adaptent\nà tout type d'environnement.\n\n\n\x0E\x01\x09\x04\x0E\x1300Tu en trouveras sûrement dans les\nparages!")
          						goto flw_22
          					}
          				  case 1:
          					goto flw_16
          				}
          			  case 1:
          				goto flw_16
          			}
          		}
          	}
          }

          void entrypoint_503_18() {
/*<341>*/ 	start()
/*<611>*/ 	switch (story_flags[424 /* us: 805A9B06 0x02, jp: 805ACD86 0x02 */]) {
          	  case 0:
/*<613>*/ 		entrypoint_503_21();
          	  case 1:
/*<392>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 389, 'param3': 32}
/*<389>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 393, 'param3': 15}
/*<393>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 581, 'param3': 13}
/*<581>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 390, 'param3': 6}
/*<390>*/ 		set_camera(3, 0)
/*<391>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 399, 'param3': 16}
/*<399>*/ 		switch (temp_flags[8 /* 0x0 01 */]) {
          		  case 0:
/*<552>*/ 			switch (story_flags[421 /* us: 805A9B07 0x40, jp: 805ACD87 0x40 */]) {
          			  case 0:
/*<343>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Woh! Étonnant!\n\n\n\n\x0E\x01\x09\x04\x1816\x1E00... Trois c\x153urs? C'est pas vraiment ce\nqu'on peut appeler une source de vie\nqui jaillit...\n\nC'est pas ce à quoi je m'attendais.\nJe vais poursuivre mes recherches!")
/*<342>*/ 				printf("\x0E\x01\x09\x04\x1808\xB01Il faut attendre un peu avant que les\nmurs de la Déesse <r<se régénèrent>>!\n\n\n\x0E\x01\x09\x04\x18\x1700Quand ce sera fait, je compte sur toi\npour m'aider dans mes recherches!")
          				flw_532:
/*<532>*/ 				set_camera(4, 0)
/*<590>*/ 				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          				  case 0:
          					flw_395:
/*<395>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<591>*/ 					{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 395, 'param3': 15}
          					goto flw_395
          				}
          			  case 1:
          				flw_398:
/*<398>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Woh! Stupéfiant!\n\n\n\n\x0E\x01\x09\x04\x1816\x1E00Mais c'est pas vraiment ce que je\nm'attendais à voir apparaître!\nJe vais poursuivre mes recherches!")
/*<397>*/ 				printf("\x0E\x01\x09\x04\x1808\xB01Il faut attendre un peu avant que les\nmurs de la Déesse <r<se régénèrent>>!\n\n\n\x0E\x01\x09\x04\x18\x1700Quand ce sera fait, je compte sur toi\npour m'aider dans mes recherches!")
          				goto flw_532
          			}
          		  case 1:
          			goto flw_398
          		}
          	}
          }

          void entrypoint_503_53() {
/*<  2>*/ 	start()
/*< 34>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\nC'est exactement comme dans les écrits\nanciens! Elle est apparue en faisant\n« Boi\x2010oi\x2010oing! » et elle dit des choses\nétranges!\n\x0E\x01\x09\x04\x16\x1E0BGrâce à toi, mes recherches sur les\n<r<pierres qui parlent >>ont fait un grand\nbond en avant!\n\n\x0E\x01\x09\x04\x1E\xB00Restent les <r<murs de la Déesse>>!\nIl doit y en avoir un dans le coin.\nJe finirai bien par le trouver!")
          	  case 1:
/*< 36>*/ 		switch (scene_flags[66 /* 0x9 04 */]) {
          		  case 0:
/*< 37>*/ 			printf("\x0E\x01\x09\x04\x16\x200BMalheureusement, j'y connais rien\nen musique...\n\n\n\x0E\x01\x09\x04\x00\x2000Si seulement je savais jouer d'un\ninstrument, ça m'aiderait...")
          		  case 1:
/*<624>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 600, 'param3': 32}
/*<600>*/ 			printf("\x0E\x01\x09\x04\x08\xB08Go-go-ron! Ça y est, j'ai trouvé!")
/*<622>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 623, 'param3': 17}
/*<623>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 621, 'param3': 6}
/*<621>*/ 			set_camera(7, 0)
/*< 31>*/ 			printf("\x0E\x01\x09\x04\x17\x190AIl y a plein de ces papillons qui\nréagissent aux douces mélodies!\n\n\n\x0E\x01\x09\x04\x00\x1900C'est sûrement ici...")
/*< 32>*/ 			printf("\x0E\x01\x09\x04\x00\x1E00Hmm...")
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x16\x200BMalheureusement, j'y connais rien\nen musique...\n\n\n\x0E\x01\x09\x04\x00\x2000Si seulement je savais jouer d'un\ninstrument, ça m'aiderait...")
          		}
          	}
          }

          void entrypoint_503_70() {
/*<255>*/ 	start()
/*<122>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<123>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<124>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<426>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 90>*/ 	switch (scene_flags[64 /* 0x9 01 */]) {
          	  case 0:
/*< 92>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<bombes>> apparaître! Pour les besoins\nde mes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		goto flw_91
          	  case 1:
/*< 95>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<cercle fermé>>...<pause1E> C'est ce que doit\ntracer celui qui désire une grande\nforce destructrice. »")
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		goto flw_141
          	}
          }

          void entrypoint_503_19() {
/*<478>*/ 	start()
/*<573>*/ 	switch (scene_flags[68 /* 0x9 10 */]) {
          	  case 0:
          		goto flw_377
          	  case 1:
          		flw_482:
/*<482>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 479, 'param3': 32}
/*<479>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 483, 'param3': 15}
/*<483>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 578, 'param3': 13}
/*<578>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 480, 'param3': 6}
/*<480>*/ 		set_camera(3, 0)
/*<481>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 484, 'param3': 16}
/*<484>*/ 		printf("\x0E\x01\x09\x04\x1813\x1B01Hein? Quoi? Comment? Pourquoi?\nQu'est\x2010ce que tu as fait?\n\n\n\x0E\x01\x09\x04\x1817\x1908Quelque chose que j'avais jamais vu\navant est sorti du mur!\n\n\n\x0E\x01\x09\x04\x1816\x1E00\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í Est\x2010ce que par hasard, ce serait...\n\x0E\x01\x09\x04\x1808\xB00Non, c'est rien, oublie ça.")
/*<533>*/ 		set_camera(4, 0)
/*<592>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_485:
/*<485>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<593>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 485, 'param3': 15}
          			goto flw_485
          		}
          	}
          }

          void entrypoint_503_54() {
/*<  3>*/ 	start()
/*<356>*/ 	switch (scene_flags[68 /* 0x9 10 */]) {
          	  case 0:
          		flw_39:
/*< 39>*/ 		switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          		  case 0:
          			goto flw_51
          		  case 1:
/*<  7>*/ 			printf("\x0E\x01\x09\x04\x08\xB02Tiens! Te revoilà!\n\n\n\n\x0E\x01\x09\x04\x16\xB00Je voulais te dire que j'avais aperçu des\n<b<papillons azur >>pas loin d'ici!\n\n\n\x0E\x01\x09\x04\x00\x1E0BDommage que j'y connaisse rien en\nmusique...\n\n\nSi seulement je savais jouer d'un\ninstrument...")
          		}
          	  case 1:
/*<357>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
          		goto flw_39
          	}
          }

          void entrypoint_503_71() {
/*<256>*/ 	start()
/*<261>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*<262>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<264>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<268>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<282>*/ 					switch (random(4)) {
          					  case 0:
/*<288>*/ 						entrypoint_503_72();
          					  case 1:
/*<289>*/ 						entrypoint_503_73();
          					  case 2:
/*<290>*/ 						entrypoint_503_74();
          					  case 3:
/*<291>*/ 						entrypoint_503_75();
          					}
          				  case 1:
/*<324>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<292>*/ 					entrypoint_503_75();
          				}
          			  case 1:
/*<269>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<327>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<293>*/ 					entrypoint_503_74();
          				  case 1:
/*<283>*/ 					switch (random(2)) {
          					  case 0:
/*<294>*/ 						entrypoint_503_75();
          					  case 1:
/*<295>*/ 						entrypoint_503_74();
          					}
          				}
          			}
          		  case 1:
/*<265>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<325>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<296>*/ 					entrypoint_503_73();
          				  case 1:
/*<284>*/ 					switch (random(2)) {
          					  case 0:
/*<297>*/ 						entrypoint_503_73();
          					  case 1:
/*<298>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<271>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<285>*/ 					switch (random(2)) {
          					  case 0:
/*<299>*/ 						entrypoint_503_73();
          					  case 1:
/*<300>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<286>*/ 					switch (random(3)) {
          					  case 0:
/*<301>*/ 						entrypoint_503_73();
          					  case 1:
/*<302>*/ 						entrypoint_503_74();
          					  case 2:
/*<303>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		}
          	  case 1:
/*<263>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<266>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<272>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<326>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<304>*/ 					entrypoint_503_72();
          				  case 1:
/*<287>*/ 					switch (random(2)) {
          					  case 0:
/*<305>*/ 						entrypoint_503_72();
          					  case 1:
/*<306>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<273>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<281>*/ 					switch (random(2)) {
          					  case 0:
/*<307>*/ 						entrypoint_503_72();
          					  case 1:
/*<308>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<280>*/ 					switch (random(3)) {
          					  case 0:
/*<309>*/ 						entrypoint_503_72();
          					  case 1:
/*<310>*/ 						entrypoint_503_74();
          					  case 2:
/*<311>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		  case 1:
/*<267>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<274>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<279>*/ 					switch (random(2)) {
          					  case 0:
/*<312>*/ 						entrypoint_503_72();
          					  case 1:
/*<313>*/ 						entrypoint_503_73();
          					}
          				  case 1:
/*<278>*/ 					switch (random(3)) {
          					  case 0:
/*<314>*/ 						entrypoint_503_72();
          					  case 1:
/*<315>*/ 						entrypoint_503_73();
          					  case 2:
/*<316>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<275>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<277>*/ 					switch (random(3)) {
          					  case 0:
/*<317>*/ 						entrypoint_503_72();
          					  case 1:
/*<318>*/ 						entrypoint_503_73();
          					  case 2:
/*<319>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<276>*/ 					switch (random(4)) {
          					  case 0:
/*<320>*/ 						entrypoint_503_72();
          					  case 1:
/*<321>*/ 						entrypoint_503_73();
          					  case 2:
/*<322>*/ 						entrypoint_503_74();
          					  case 3:
/*<323>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_55() {
/*<  4>*/ 	start()
/*<344>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<538>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<345>*/ 			printf("\x0E\x01\x09\x04\x1B\x1053Et c'est reparti! <pause1E>Je me demande\nvraiment ce qui se passe!\n\n\n\x0E\x01\x09\x04%\x1600Tant pis! Je dois continuer mes\nrecherches!")
          			flw_545:
/*<545>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<536>*/ 				entrypoint_503_66();
          			  case 1:
/*<546>*/ 				printf("\x0E\x01\x09\x04\x13\xB04Tu sais quoi? J'ai aperçu des <b<papillons\nazur >>pas loin d'ici!\n\n\n\x0E\x01\x09\x04\x16\x1E0BDommage que j'y connaisse rien\nen musique...\n\n\nSi seulement je savais jouer\nd'un instrument...")
          			}
          		  case 1:
/*<539>*/ 			printf("\x0E\x01\x09\x04\x13\x1953Ça recommence! Veux\x2010tu bien me dire\nce qui se passe?\n\n\n\x0E\x01\x09\x04\x16\x1E00De toute façon, je dois poursuivre mes\nrecherches quand même!")
          			goto flw_545
          		}
          	  case 1:
/*<534>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
          			goto flw_545
          		  case 1:
/*<535>*/ 			switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          			  case 0:
/*<540>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<537>*/ 					printf("\x0E\x01\x09\x04\x00\x140A<pause1E>... Hmm?<pause1E>\n\x0E\x01\x09\x04\x0E\x1300Je me fais des idées, ou est\x2010ce que ton\népée a changé depuis la dernière fois?\n\nTu pourrais peut\x2010être t'en servir pour\nchasser ces créatures en bas comme\nl'autre fois?")
          					flw_601:
/*<601>*/ 					switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          					  case 0:
/*<604>*/ 						switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          						  case 0:
/*<606>*/ 							printf("\x0E\x01\x09\x04\x00\x05En tout cas... de toute façon, je dois\npoursuivre mes recherches!")
          							flw_603:
/*<603>*/ 							entrypoint_503_66();
          						  case 1:
/*<605>*/ 							printf("\x0E\x01\x09\x04\x00\x05En tout cas... de toute façon, je dois\npoursuivre mes recherches!")
          							goto flw_603
          						}
          					  case 1:
/*<602>*/ 						printf("\x0E\x01\x09\x04\x13\xB04Tu sais quoi? J'ai aperçu des <b<papillons\nazur >>pas loin d'ici!\n\n\n\x0E\x01\x09\x04\x16\x1E0BDommage que j'y connaisse rien\nen musique...\n\n\nSi seulement je savais jouer\nd'un instrument...")
          					}
          				  case 1:
/*<541>*/ 					printf("\x0E\x01\x09\x04\x00\xB0A<pause1E>... Hmm?<pause1E>\n\x0E\x01\x09\x04\x08\xB00Je me fais des idées, ou est\x2010ce que ton\népée a changé depuis la dernière fois?\n\nTu pourrais peut\x2010être t'en servir pour\nchasser ces créatures en bas comme\nl'autre fois?")
          					goto flw_601
          				}
          			  case 1:
/*<542>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<543>*/ 					printf("\x0E\x01\x09\x04\x0E\x1301Oh! Te revoilà! <pause1E>Il y a plein de créatures\nbizarres qui rôdent en bas! J'ai jamais\nrien vu de la sorte.\n\n\x0E\x01\x09\x04\x18\x1802Ce serait bien si tu les chassais comme\nla dernière fois...")
          					goto flw_601
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x08\xB01Oh! Te revoilà! <pause1E>Il y a plein de créatures\nbizarres qui rôdent en bas! J'ai jamais\nrien vu de la sorte.\n\n\x0E\x01\x09\x04\x18\x1802Ce serait bien si tu les chassais comme\nla dernière fois...")
          					goto flw_601
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_03() {
/*< 47>*/ 	start()
/*<362>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 358, 'param3': 32}
/*<358>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 363, 'param3': 15}
/*<363>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 574, 'param3': 13}
/*<574>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 359, 'param3': 6}
/*<359>*/ 	set_camera(3, 0)
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("\x0E\x01\x09\x04\x1817\x1B09Oh! Ça, c'est toute une surprise!\n\n\n\n\x0E\x01\x09\x04\x1800\x1900Quelle trouvaille!\nC'est la découverte du siècle!")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x181F\x1908Cette marque sur le mur! Nous\nsommes devant l'un des <r<murs de\nla Déesse >>dédiés au héros...\nJ'en suis certain!!!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][93 /* 0xA 20 */] = true;
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_503_72() {
/*<257>*/ 	start()
/*<110>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<111>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<112>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<420>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 54>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<rubis>> apparaître! Pour les besoins de\nmes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		goto flw_55
          	  case 1:
/*< 59>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Un <r<hexagone scintillant>>...<pause1E> C'est ce\nque doit tracer celui qui cherche la\nfortune. »")
/*<108>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		goto flw_135
          	}
          }

          void entrypoint_503_20() {
/*<497>*/ 	start()
/*<487>*/ 	scene_flags[10 'Sealed Grounds'][68 /* 0x9 10 */] = true;
/*<558>*/ 	set_camera(6, 0)
/*<488>*/ 	printf("\x0E\x01\x09\x04\x1808\xB02Tiens, prends ça. C'est pour te\nremercier de m'avoir aidé dans\nmes recherches!")
/*<490>*/ 	give_item(168 0xA8);
/*<567>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 566, 'param3': 32}
/*<566>*/ 	set_camera(3, 0)
/*<489>*/ 	printf("\x0E\x01\x09\x04\x1816\xB01Et voilà! Tous les mystères que\nrenfermaient les écrits anciens\nsont résolus!\n\nNon, ce serait trop beau. Les écrits\nanciens en disent plus. Veux\x2010tu savoir\nce qu'ils racontent?\n[1]Bien sûr![2-]Ça ira.")
/*<494>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_492:
/*<492>*/ 		printf("\x0E\x01\x09\x04\x1800\x07« ... trois... iangl...\nTri... ce... »")
/*<493>*/ 		printf("\x0E\x01\x09\x04\x1817\x1700À partir de là, les pages sont déchirées\net je n'arrive pas à les déchiffrer...\n\n\nÇa m'intrigue vraiment...")
/*<495>*/ 		printf("\x0E\x01\x09\x04\x1808\x1300Il faut attendre un peu avant que les\nmurs de la Déesse <r<se régénèrent>>!\n\n\n\x0E\x01\x09\x04\x1818\x1700À ce moment\x2010là, il faudra que tu essaies\nplein de choses pour percer le dernier\nmystère!")
/*<572>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = false;
/*<555>*/ 		set_camera(5, 0)
/*<594>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_491:
/*<491>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<595>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 491, 'param3': 15}
          			goto flw_491
          		}
          	  case 1:
/*<496>*/ 		printf("\x0E\x01\x09\x04\x1808\xB00S'il te plaît! Tu dois m'écouter!")
          		goto flw_492
          	}
          }

          void entrypoint_503_73() {
/*<258>*/ 	start()
/*<113>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<114>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<115>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<421>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 60>*/ 	switch (scene_flags[62 /* 0x6 40 */]) {
          	  case 0:
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Aujourd'hui, il faudrait que je voie des\n<y<c\x153urs>> apparaître! Pour les besoins de\nmes recherches, bien entendu...\n\n<pause1E>... Veux\x2010tu que je te réexplique ce que\ndisent les écrits anciens?\n[1]S'il te plaît![2-]Pas la peine.")
          		goto flw_61
          	  case 1:
/*< 65>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07« Le<r< symbole rouge de la vie>>...<pause1E> C'est\nce que doit tracer celui qui désire la\nvitalité. »\n\n« Ainsi, la source de vie jaillira\nen pluie... »")
/*<106>*/ 		printf("\x0E\x01\x09\x04\x18\x1700C'est ce que disent les écrits\nanciens! Comprends\x2010tu quelque\nchose là\x2010dedans?")
          		goto flw_136
          	}
          }

          void entrypoint_503_56() {
/*<347>*/ 	start()
/*<348>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<547>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<349>*/ 			printf("\x0E\x01\x09\x04\x1B\x1053Et c'est reparti! <pause1E>Je me demande\nvraiment ce qui se passe!\n\n\n\x0E\x01\x09\x04%\x1600Tant pis! Je dois continuer mes\nrecherches!")
          			flw_550:
/*<550>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<549>*/ 				entrypoint_503_66();
          			  case 1:
/*<551>*/ 				printf("\x0E\x01\x09\x04\x13\xB04Tu sais quoi? J'ai aperçu des <b<papillons\nazur >>pas loin d'ici!\n\n\n\x0E\x01\x09\x04\x16\x1E0BDommage que j'y connaisse rien\nen musique...\n\n\nSi seulement je savais jouer\nd'un instrument...")
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x13\x1953Ça recommence! Veux\x2010tu bien me dire\nce qui se passe?\n\n\n\x0E\x01\x09\x04\x16\x1E00De toute façon, je dois poursuivre mes\nrecherches quand même!")
          			goto flw_550
          		}
          	  case 1:
          		goto flw_550
          	}
          }

          void entrypoint_503_21() {
/*<612>*/ 	start()
          	goto flw_482
          }

