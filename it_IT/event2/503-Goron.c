          void entrypoint_503_57() {
/*< 38>*/ 	start()
/*<560>*/ 	printf("\x0E\x01\x09\x04\x17\x1909Ma questa...\nQuesta è una delle<r< statue parlanti\n>>dei testi antichi! Ne sono sicuro!\n")
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
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi\nsi concentrerà sul ritrovamento\ndel luogo da dove sbucano le <y<bombe>>!\n\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		flw_67:
/*< 67>*/ 		switch (choice(2)) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<cerchio chiuso>>...<pause1E>\nÈ ciò che deve disegnare colui\nche desidera un'enorme\nforza distruttrice.")
/*<105>*/ 			printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          			flw_137:
/*<137>*/ 			temp_flags[9 /* 0x0 02 */] = true;
/*<216>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<509>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 70>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
          			goto flw_137
          		}
          	  case 1:
/*< 71>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<cerchio chiuso>>...<pause1E>\nÈ ciò che deve disegnare colui\nche desidera un'enorme\nforza distruttrice.")
/*<104>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_137
          	}
          }

          void entrypoint_503_58() {
/*<146>*/ 	start()
          	flw_55:
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<esagono scintillante>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fortuna.")
/*<109>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_135:
/*<135>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<221>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<507>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 58>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
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
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi si\nconcentrerà sul ritrovamento\ndel luogo da dove sbucano\nle <y<frecce>>!\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		flw_73:
/*< 73>*/ 		switch (choice(2)) {
          		  case 0:
/*< 75>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07... Una <r<freccia orizzontale>>...<pause1E>\nÈ ciò che deve disegnare colui\nche vuole raggiungere un\nbersaglio lontano.")
/*<103>*/ 			printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          			flw_138:
/*<138>*/ 			temp_flags[10 /* 0x0 04 */] = true;
/*<217>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<510>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
          			goto flw_138
          		}
          	  case 1:
/*< 77>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Una <r<freccia orizzontale>>...<pause1E>\nÈ ciò che deve disegnare colui\nche vuole raggiungere un\nbersaglio lontano.")
/*<102>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_138
          	}
          }

          void entrypoint_503_59() {
/*<147>*/ 	start()
          	flw_61:
/*< 61>*/ 	switch (choice(2)) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Il <r<simbolo rosso della vita>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fonte della vita.\n\nIn tal modo la fonte della vita\ngronderà come pioggia.")
/*<107>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_136:
/*<136>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<222>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<508>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 64>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
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
/*<172>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Per tutti i porfidi!\nGrazie!!!\nUn'azione degna di te!")
          				flw_195:
/*<195>*/ 				entrypoint_503_17();
          			  case 1:
/*<173>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questa, allora,\nla fortuna di cui parlavano\ni testi antichi!")
/*<174>*/ 				scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
          				goto flw_195
          			}
          		  case 1:
/*<582>*/ 			scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
/*<562>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questa, allora,\nla fortuna di cui parlavano\ni testi antichi!")
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
/*<429>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi\nsi concentrerà sul ritrovamento\ndel luogo da dove sbucano le <y<fate>>!\n\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		flw_428:
/*<428>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf("\x0E\x01\x09\x04\x00\x07... tri... angol...?!\nTri... rza...?!")
/*<434>*/ 			printf("\x0E\x01\x09\x04\x17\x1700... I testi antichi sono illeggibili...\nNon so cosa ci fosse scritto,\noltre questo...\n\nPer tutti i porfidi, cosa mai ci sarà\nstato scritto?")
          			flw_438:
/*<438>*/ 			temp_flags[12 /* 0x0 10 */] = true;
/*<440>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<506>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*<431>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
          			goto flw_438
          		}
          	  case 1:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x00\x07... tri... angol...?!\nTri... rza...?!")
/*<433>*/ 		printf("\x0E\x01\x09\x04\x17\x1700... I testi antichi sono illeggibili...\nNon so cosa ci fosse scritto,\noltre questo...\n\nPer tutti i porfidi, cosa mai ci sarà\nstato scritto?")
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
/*<175>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Per tutti i porfidi!\nGrazie!!!\nUn'azione degna di te!")
          				flw_194:
/*<194>*/ 				entrypoint_503_17();
          			  case 1:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questo, allora,\nil simbolo rosso della vita di cui\nparlavano i testi antichi!")
/*<184>*/ 				scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
          				goto flw_194
          			}
          		  case 1:
/*<583>*/ 			scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
/*<563>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questo, allora,\nil simbolo rosso della vita di cui\nparlavano i testi antichi!")
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
/*<177>*/ 		printf("\x0E\x01\x09\x04\x1817\x1909Per tutti i porfidi!\nGrazie!!!\nUn'azione degna di te!")
/*<196>*/ 		entrypoint_503_17();
          	  case 1:
/*<178>*/ 		printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i porfidi, i lapislazzuli\ne le ametiste!!!\n\n\nEra questo ciò di cui parlavano i\ntesti antichi! Non è una cosa\nmeravigliosa? Grazie per\navermela fatta vedere!")
/*<559>*/ 		set_camera(6, 0)
/*<186>*/ 		scene_flags[10 'Sealed Grounds'][63 /* 0x6 80 */] = true;
/*<515>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = true;
/*<419>*/ 		printf("\x0E\x01\x09\x04\x1808\xB02E con questo sono\nriuscito a leggere tutti i testi antichi!\n\n\nEccoti il mio regalo speciale,\nper avermi aiutato!")
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
/*<517>*/ 	printf("\x0E\x01\x09\x04\x18\x1701... La parte illeggibile dei\ntesti antichi... Cosa mai ci sarà stato\nscritto? Il mistero si infittisce...\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
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
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<esagono scintillante>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fortuna.")
/*<101>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_139:
/*<139>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<218>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<511>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 82>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
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
/*<179>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Per tutti i porfidi!\nGrazie!!!\nUn'azione degna di te!")
          				flw_192:
/*<192>*/ 				entrypoint_503_17();
          			  case 1:
/*<180>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora l'enorme forza\ndistruttrice di cui parlavano\ni testi antichi erano le bombe!")
/*<188>*/ 				scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
          				goto flw_192
          			}
          		  case 1:
/*<584>*/ 			scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
/*<564>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora l'enorme forza\ndistruttrice di cui parlavano\ni testi antichi erano le bombe!")
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
/*< 87>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Il <r<simbolo rosso della vita>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fonte della vita.\n\nIn tal modo la fonte della vita\ngronderà come pioggia.")
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_140:
/*<140>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<219>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<512>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 88>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
          		goto flw_140
          	}
          }

          void entrypoint_503_64() {
/*<165>*/ 	start()
          	flw_91:
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<cerchio chiuso>>...<pause1E>\nÈ ciò che deve disegnare colui\nche desidera un'enorme\nforza distruttrice.")
/*< 97>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_141:
/*<141>*/ 		temp_flags[9 /* 0x0 02 */] = true;
/*<220>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<513>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0ADavvero?\n<pause1E>... Bene, allora mi raccomando!")
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
/*<223>*/ 			printf("\x0E\x01\x09\x04&\x1301Bisognerà attendere un po' perché il\npotere della parete della Dea\n<r<si rigeneri>>!\n\n\x0E\x01\x09\x04\x0E\x1700A quel punto, avrò di sicuro bisogno\ndi aiuto per le mie ricerche!")
          		  case 1:
/*<587>*/ 			printf("\x0E\x01\x09\x04\x1808\xB01Bisognerà attendere un po'\nperché il potere della parete\ndella Dea <r<si rigeneri>>!\n\n\x0E\x01\x09\x04\x18\x1700A quel punto, avrò\ndi sicuro bisogno di aiuto\nper le mie ricerche!")
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
/*<142>*/ 							printf("\x0E\x01\x09\x04!\x1701Che bello! Voglio vedere\nancora uscire le <y<rupie>>!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
/*<150>*/ 							entrypoint_503_58();
          						  case 1:
/*<133>*/ 							switch (temp_flags[8 /* 0x0 01 */]) {
          							  case 0:
/*<143>*/ 								printf("\x0E\x01\x09\x04!\x1701Che bello! Voglio vedere\nancora piovere <y<cuori>>!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
/*<151>*/ 								entrypoint_503_59();
          							  case 1:
/*<132>*/ 								switch (temp_flags[9 /* 0x0 02 */]) {
          								  case 0:
/*<144>*/ 									printf("\x0E\x01\x09\x04\x18\x1701Se vuoi la pace preparati alla\nguerra! Oggi voglio vedere\nspuntare le <y<bombe>>!\n\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che\nconsultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
/*<152>*/ 									entrypoint_503_60();
          								  case 1:
/*<131>*/ 									switch (temp_flags[10 /* 0x0 04 */]) {
          									  case 0:
/*<145>*/ 										printf("\x0E\x01\x09\x04!\x1701Voglio proprio vedere spuntare le\n<y<frecce >>dalla parete!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che consultiamo di\nnuovo i testi antichi?\n[1]Sì[2-]No")
/*<153>*/ 										entrypoint_503_61();
          									  case 1:
/*<457>*/ 										switch (temp_flags[12 /* 0x0 10 */]) {
          										  case 0:
/*<516>*/ 											switch (scene_flags[63 /* 0x6 80 */]) {
          											  case 0:
/*<458>*/ 												printf("\x0E\x01\x09\x04!\x1701Voglio vedere di nuovo apparire\nle <y<fate>>!!! Si può?\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che\nconsultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
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
/*<448>*/ 							printf("\x0E\x01\x09\x04!\x1701Che bello! Voglio vedere\nancora uscire le <y<rupie>>!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          							flw_452:
/*<452>*/ 							entrypoint_503_58();
          						  case 1:
/*<522>*/ 							printf("\x0E\x01\x09\x04\x00\x1B05Ma il fatto che si possa\nottenere una gran fortuna...\nSarà vero?\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          							goto flw_452
          						}
          					  case 1:
/*<446>*/ 						switch (temp_flags[8 /* 0x0 01 */]) {
          						  case 0:
/*<519>*/ 							switch (scene_flags[62 /* 0x6 40 */]) {
          							  case 0:
/*<449>*/ 								printf("\x0E\x01\x09\x04!\x1701Che bello! Voglio vedere\nancora piovere <y<cuori>>!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          								flw_453:
/*<453>*/ 								entrypoint_503_59();
          							  case 1:
/*<523>*/ 								printf("\x0E\x01\x09\x04\x16\xB04La fonte della vita gronderà\ncome pioggia...\n\n\n\x0E\x01\x09\x04\x00\xB05... Cioè? Cosa succederà?\nSe è vero, mi sento molto più\ntranquillo, anche ad andare\nin luoghi pericolosi!\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che\nconsultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          								goto flw_453
          							}
          						  case 1:
/*<445>*/ 							switch (temp_flags[9 /* 0x0 02 */]) {
          							  case 0:
/*<520>*/ 								switch (scene_flags[64 /* 0x9 01 */]) {
          								  case 0:
/*<450>*/ 									printf("\x0E\x01\x09\x04\x18\x1701Se vuoi la pace preparati alla\nguerra! Oggi voglio vedere\nspuntare le <y<bombe>>!\n\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che\nconsultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          									flw_454:
/*<454>*/ 									entrypoint_503_60();
          								  case 1:
/*<524>*/ 									printf("\x0E\x01\x09\x04!\x1705Un cerchio chiuso...\nChe razza di forma sarà?\n\n\n\x0E\x01\x09\x04\x16\x1E04... Forse...\n<pause0A>Credo si tratti di\nun normale cerchio...\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          									goto flw_454
          								}
          							  case 1:
/*<444>*/ 								switch (temp_flags[10 /* 0x0 04 */]) {
          								  case 0:
/*<521>*/ 									switch (scene_flags[65 /* 0x9 02 */]) {
          									  case 0:
/*<451>*/ 										printf("\x0E\x01\x09\x04!\x1701Voglio proprio vedere spuntare le\n<y<frecce >>dalla parete!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che consultiamo di\nnuovo i testi antichi?\n[1]Sì[2-]No")
          										flw_455:
/*<455>*/ 										entrypoint_503_61();
          									  case 1:
/*<525>*/ 										printf("\x0E\x01\x09\x04\x16\x2005Raggiungere un bersaglio lontano...\nForse... ma sì, dev'essere...\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che\nconsultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
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
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x18\x1701Nel corso delle mie ricerche\nho scoperto un nuovo testo antico!\nVuoi sapere cosa dice?\n[1]Certo![2-]No!")
/*< 43>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf("\x0E\x01\x09\x04\x16\x1E07... Una <r<freccia orizzontale>>...<pause1E>\nÈ ciò che deve disegnare colui\nche vuole raggiungere un\nbersaglio lontano.")
/*< 45>*/ 					printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
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
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x08\xB07Stai mica facendo i complimenti...!\nNon dirmi, con quella faccia, che\nnon ti interessa! Non ti capisco,\nma pazienza! Ora ti spiego...")
          					goto flw_53
          				}
          			}
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x181F\x1908Questo segno!!!\nDev'essere di sicuro la <r<parete della\nDea>>, lasciata per l'impavido!")
/*<156>*/ 			switch (temp_flags[7 /* 0x1 80 */]) {
          			  case 0:
/*<527>*/ 				switch (scene_flags[61 /* 0x6 20 */]) {
          				  case 0:
/*<157>*/ 					printf("\x0E\x01\x09\x04!\x1701Che bello! Voglio vedere\nancora uscire le <y<rupie>>!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          					flw_160:
/*<160>*/ 					entrypoint_503_62();
          				  case 1:
/*<529>*/ 					printf("\x0E\x01\x09\x04\x00\x1B05Ma il fatto che si possa\nottenere una gran fortuna...\nSarà vero?\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          					goto flw_160
          				}
          			  case 1:
/*<155>*/ 				switch (temp_flags[8 /* 0x0 01 */]) {
          				  case 0:
/*<526>*/ 					switch (scene_flags[62 /* 0x6 40 */]) {
          					  case 0:
/*<158>*/ 						printf("\x0E\x01\x09\x04!\x1701Che bello! Voglio vedere\nancora piovere <y<cuori>>!\n\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          						flw_161:
/*<161>*/ 						entrypoint_503_63();
          					  case 1:
/*<530>*/ 						printf("\x0E\x01\x09\x04\x16\xB04La fonte della vita gronderà\ncome pioggia...\n\n\n\x0E\x01\x09\x04\x00\xB05... Cioè? Cosa succederà?\nSe è vero, mi sento molto più\ntranquillo, anche ad andare\nin luoghi pericolosi!\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che\nconsultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          						goto flw_161
          					}
          				  case 1:
/*<154>*/ 					switch (temp_flags[9 /* 0x0 02 */]) {
          					  case 0:
/*<528>*/ 						switch (scene_flags[64 /* 0x9 01 */]) {
          						  case 0:
/*<159>*/ 							printf("\x0E\x01\x09\x04\x18\x1701Se vuoi la pace preparati alla\nguerra! Oggi voglio vedere\nspuntare le <y<bombe>>!\n\n\x0E\x01\x09\x04\x08\xB00A proposito, vuoi che\nconsultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
          							flw_162:
/*<162>*/ 							entrypoint_503_64();
          						  case 1:
/*<531>*/ 							printf("\x0E\x01\x09\x04!\x1705Un cerchio chiuso...\nChe razza di forma sarà?\n\n\n\x0E\x01\x09\x04\x16\x1E04... Forse...\n<pause0A>Credo si tratti di\nun normale cerchio...\n\n\x0E\x01\x09\x04\x08\xB00A proposito,\nvuoi che consultiamo di nuovo\ni testi antichi?\n[1]Sì[2-]No")
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
/*<181>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909Per tutti i porfidi!\nGrazie!!!\nUn'azione degna di te!")
          				flw_193:
/*<193>*/ 				entrypoint_503_17();
          			  case 1:
/*<182>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora era questo che intendevano\ni testi antichi quando parlavano di\nraggiungere un bersaglio lontano!")
/*<190>*/ 				scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
          				goto flw_193
          			}
          		  case 1:
/*<585>*/ 			scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
/*<565>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora era questo che intendevano\ni testi antichi quando parlavano di\nraggiungere un bersaglio lontano!")
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
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi\nsi concentrerà sul ritrovamento\ndel luogo da dove sbucano le <y<rupie>>!\n\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		goto flw_79
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<esagono scintillante>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fortuna.")
/*<100>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_139
          	}
          }

          void entrypoint_503_51() {
          	start()
/*<351>*/ 	switch (scene_flags[110 /* 0xC 40 */]) {
          	  case 0:
          		flw_13:
/*< 13>*/ 		printf("\x0E\x01\x09\x04%\x1356Sì, sono rosso di lava perché\nla mia ricerca non dà ancora\ni risultati sperati.\n\n\x0E\x01\x09\x04\x0E\x1300Se questo tipo di argomenti ti\ninteressa, vieni a parlare con me senza\nproblemi! Mi fa piacere!\n\n\x0E\x01\x09\x04\x00\x1300Io intanto continuerò i miei studi!")
          	  case 1:
/*<352>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 5, 'param3': 31}
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x00\x01Per la lava di tutti i vulcani!\nEccoci di nuovo!\nCome al solito, hai da fare, vedo...\n\n\x0E\x01\x09\x04\x1B\x1300E anche io, continuo a\nfare ricerche sulle stranezze\ndi questo mondo...\n\n\x0E\x01\x09\x04\x0E\x1300Vuoi sapere che cosa ho\nscoperto?[1]Sì![2-]No")
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			printf("\x0E\x01\x07\x04\x0E\x1908Per tutti i porfidi!\nSapevo che fremevi dalla curiosità!\nDunque, portando avanti le ricerche...\n\nHo scoperto che \x0E\x01\x07\x04\x00\x1300in questo mondo\nesistono delle <r<pareti >>e delle <r<statue >>che\nreagiscono alle <r<dolci melodie>>!\n<r<\n>>\x0E\x01\x07\x04\x0E\x1300Ti interessa l'argomento?\n[1]Eccome![2-]Non tanto")
/*< 12>*/ 			switch (choice(2)) {
          			  case 0:
/*<353>*/ 				scene_flags[10 'Sealed Grounds'][110 /* 0xC 40 */] = true;
          				goto flw_13
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf("\x0E\x01\x09\x04%\xE05Peccato...\nSe cambi idea, torna pure\nda me...")
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
/*<409>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
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
/*<410>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<401>*/ 				give_item(4 0x04);
/*<616>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<212>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<213>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<214>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<215>*/ 				give_item(62 0x3E);
          				goto flw_554
          			}
          		  case 1:
/*<199>*/ 			switch (random(4)) {
          			  case 0:
/*<411>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<402>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<412>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<403>*/ 				give_item(4 0x04);
/*<617>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<204>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<205>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<206>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<207>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 2:
/*<200>*/ 			switch (random(4)) {
          			  case 0:
/*<413>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<404>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<414>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<405>*/ 				give_item(4 0x04);
/*<618>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<208>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<209>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 3:
/*<210>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<211>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 3:
/*<201>*/ 			switch (random(4)) {
          			  case 0:
/*<415>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<406>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 1:
/*<416>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<407>*/ 				give_item(4 0x04);
/*<619>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<202>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<203>*/ 				give_item(32 0x20);
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 3:
/*<417>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<408>*/ 				give_item(32 0x20);
/*<620>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			}
          		}
          	  case 1:
/*<633>*/ 		scene_flags[10 'Sealed Grounds'][113 /* 0xF 02 */] = true;
/*<632>*/ 		printf("\x0E\x01\x09\x04\x1808\xB02Eccoti un regalo per avermi\naiutato nelle ricerche! Spero ti piaccia.")
/*<630>*/ 		give_item(94 0x5E);
/*<638>*/ 		set_camera(3, 0)
/*<640>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 639, 'param3': 32}
/*<639>*/ 		printf("\x0E\x01\x09\x04\x1808\x1301Fra un po' il potere della parete della\nDea <r<si rigenererà>>!\nA quel punto mi servirà di nuovo il tuo\naiuto per le mie ricerche.")
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
/*< 86>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi\nsi concentrerà sul ritrovamento\ndel luogo da dove sbucano i <y<cuori>>! \n\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		goto flw_85
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Il <r<simbolo rosso della vita>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fonte della vita.\n\nIn tal modo la fonte della vita\ngronderà come pioggia.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_140
          	}
          }

          void entrypoint_503_52() {
/*<  1>*/ 	start()
/*<346>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<396>*/ 		printf("\x0E\x01\x09\x04\x1D\x1353Cosa?!\n<pause1E>Non avevo mai provato\nuna cosa simile!")
          	  case 1:
/*<354>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\n\x1304I testi antichi riferiscono della\npresenza di numerose farfalle \nnei pressi di pareti e statue.\n\nSembra che le farfalle siano in\ngrado di percepire qualcosa...\nVuoi saperne di più?\n[1]Sì![2-]Non mi va")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*<502>*/ 				scene_flags[10 'Sealed Grounds'][111 /* 0xC 80 */] = true;
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x0E\x1300Quale argomento ti interessa?\n[1]Pareti[2]Statue")
/*< 25>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x01Secondo i testi antichi, le pareti sono\nun dono della Dea per gli impavidi!\n\n\nSembra che da quelle pareti\nfuoriesca ciò che l'impavido desidera...\nSono le <r<pareti della Dea>>!\n\nVuoi saperne di più?\n[1]Certo![2-]Basta")
/*< 28>*/ 					switch (choice(2)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04%\x1B56Per tutti i travertini!\nLe mie ricerche sono ferme\na questo punto!\n\n\x0E\x01\x09\x04\n\x1300Se farò delle nuove\nscoperte, ti aggiornerò!\nSicuro come scolpito sul marmo!")
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x00\x04In questo momento mi sto\nimpegnando a scoprire dove si trovino\nle <r<pareti della Dea>>!")
          					}
          				  case 1:
/*< 26>*/ 					printf("\x0E\x01\x09\x04\x00\x01Secondo i testi antichi, quelle statue\nparlano una strana lingua e lo fanno\nballonzolando...!\n\nInsomma, si tratta di <r<statue parlanti>>!\nVuoi che continui?\n[1]Certo![2-]Ma no!")
/*<503>*/ 					switch (choice(2)) {
          					  case 0:
/*<504>*/ 						printf("\x0E\x01\x09\x04%\x1B56Per tutti i travertini!\nLe mie ricerche sono ferme\na questo punto!\n\n\x0E\x01\x09\x04\n\x1300Se farò delle nuove\nscoperte, ti aggiornerò!\nSicuro come scolpito sul marmo!")
          					  case 1:
/*<505>*/ 						printf("\x0E\x01\x09\x04\x00\x04In questo momento mi sto\nimpegnando a scoprire dove si trovino\nle <r<statue parlanti>>!")
          					}
          				}
          			  case 1:
          				flw_16:
/*< 16>*/ 				printf("\x0E\x01\x09\x04%\xE05Peccato...\nSe cambi idea, torna pure\nda me...")
          			}
          		  case 1:
/*<355>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 6, 'param3': 31}
/*<  6>*/ 			printf("\x0E\x01\x09\x04\x00\x01Per la lava di tutti i vulcani!\nEccoci di nuovo!\nCome al solito, hai da fare, vedo...\n\n\x0E\x01\x09\x04\x1B\x1300E anche io, continuo a\nfare ricerche sulle stranezze\ndi questo mondo...\n\n\x0E\x01\x09\x04\x0E\x1300Vuoi sapere che cosa ho\nscoperto?[1]Sì![2-]No")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("\x0E\x01\x07\x04\x0E\x1908Per tutti i porfidi!\nSapevo che fremevi dalla curiosità!\nDunque, portando avanti le ricerche...\n\nHo scoperto che \x0E\x01\x07\x04\x00\x1300in questo mondo\nesistono delle <r<pareti >>e delle <r<statue >>che\nreagiscono alle <r<dolci melodie>>!\n<r<\n>>\x0E\x01\x07\x04\x0E\x1300Ti interessa l'argomento?\n[1]Eccome![2-]Non tanto")
/*< 17>*/ 				switch (choice(2)) {
          				  case 0:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x0E\x1904Per tutti i porfidi!\nChe entusiasmo!\n\n\n\x0E\x01\x09\x04\x00\x1900Ma prima di parlarti delle <r<pareti>>\ne delle <r<statue>> devo chiederti\nuna cosa...\n\x0E\x01\x09\x04\x0E\xB00\nSai che cos'è una <b<lepidea>>?\n[1]Sì[2-]No")
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
/*< 20>*/ 						printf("Allora veniamo subito al nocciolo\nduro della questione!")
          						goto flw_22
          					  case 1:
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x0E\x1300Le <b<lepidee >>sono delle graziose farfalle\ndel color del turchese!\n\n\n\x0E\x01\x09\x04\x1B\x1300Sono farfalle assai longeve,\ne possono vivere ovunque!\n\n\n\x0E\x01\x09\x04\x0E\x1300Ovviamente se ne possono\ntrovare molte anche da queste parti!")
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
/*<343>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nÈ incredibile!!!\n\n\n\x0E\x01\x09\x04\x1816\x1E00... Tre cuori... non sono la stessa\ncosa della fonte della vita che gronda\ncome pioggia!\n\nDevo continuare le mie ricerche!")
/*<342>*/ 				printf("\x0E\x01\x09\x04\x1808\xB01Bisognerà attendere un po'\nperché il potere della parete\ndella Dea <r<si rigeneri>>!\n\n\x0E\x01\x09\x04\x18\x1700A quel punto, avrò\ndi sicuro bisogno di aiuto\nper le mie ricerche!")
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
/*<398>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908Per tutti i lapislazzuli!\nÈ incredibile!!!\n\n\n\x0E\x01\x09\x04\x1816\x1E00Però non è quello che mi aspettavo!\nDevo continuare le mie ricerche!")
/*<397>*/ 				printf("\x0E\x01\x09\x04\x1808\xB01Bisognerà attendere un po'\nperché il potere della parete\ndella Dea <r<si rigeneri>>!\n\n\x0E\x01\x09\x04\x18\x1700A quel punto, avrò\ndi sicuro bisogno di aiuto\nper le mie ricerche!")
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
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\nProprio come dicevano i testi antichi!\nParlano una strana lingua e lo fanno\nballonzolando...!\n\n\x0E\x01\x09\x04\x16\x1E0BE così è stato compiuto un\ngrande passo in avanti nelle mie\nricerche sulle <r<statue parlanti>>!\n\n\x0E\x01\x09\x04\x1E\xB00Poi mi metterò al lavoro sulle <r<pareti\ndella Dea>>! Ce n'è di sicuro qualcuna\nda queste parti! La strada delle mie\nricerche è costellata di diamanti!")
          	  case 1:
/*< 36>*/ 		switch (scene_flags[66 /* 0x9 04 */]) {
          		  case 0:
/*< 37>*/ 			printf("\x0E\x01\x09\x04\x16\x200BPurtroppo sono del tutto\nprivo di sensibilità musicale...\n\n\n\x0E\x01\x09\x04\x00\x2000Che disastro!\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          		  case 1:
/*<624>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 600, 'param3': 32}
/*<600>*/ 			printf("\x0E\x01\x09\x04\x08\xB08Cosa...?!\nCe l'ho fatta!")
/*<622>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 623, 'param3': 17}
/*<623>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 621, 'param3': 6}
/*<621>*/ 			set_camera(7, 0)
/*< 31>*/ 			printf("\x0E\x01\x09\x04\x17\x190APer tutti i lapislazzuli!\nÈ pieno di quelle farfalle che\nreagiscono alle dolci melodie!\n\n\x0E\x01\x09\x04\x00\x1900Sono sicuro!\nDev'essere proprio questo il posto...")
/*< 32>*/ 			printf("\x0E\x01\x09\x04\x00\x1E00Per tutti gli zaffiri... Cosa...?!")
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x16\x200BPurtroppo sono del tutto\nprivo di sensibilità musicale...\n\n\n\x0E\x01\x09\x04\x00\x2000Che disastro!\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
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
/*< 92>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi\nsi concentrerà sul ritrovamento\ndel luogo da dove sbucano le <y<bombe>>!\n\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		goto flw_91
          	  case 1:
/*< 95>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<cerchio chiuso>>...<pause1E>\nÈ ciò che deve disegnare colui\nche desidera un'enorme\nforza distruttrice.")
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
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
/*<484>*/ 		printf("\x0E\x01\x09\x04\x1813\x1B01Per tutti i porfidi, i lapislazzuli\ne le ametiste!!!\nMa cosa hai fatto?\n\n\x0E\x01\x09\x04\x1817\x1908Dalla parete sono uscite\ncose che non avevo mai visto!\n\n\n\x0E\x01\x09\x04\x1816\x1E00\x0E\x01\x06\x02\xFFCD... \x0E\x01\x06\x02ÍAspetta un po'... ma non è che...\n\x0E\x01\x09\x04\x1808\xB00No, no... niente.\nDimentica quello che ho detto.")
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
/*<  7>*/ 			printf("\x0E\x01\x09\x04\x08\xB02Per tutti i lapislazzuli!\nAncora tu?\n\n\n\x0E\x01\x09\x04\x16\xB00... Effettivamente...\nAnche qui è pieno di <b<lepidee>>!\n\n\n\x0E\x01\x09\x04\x00\x1E0BMa purtroppo sono del tutto privo di\nsensibilità musicale...\n\n\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
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
/*<345>*/ 			printf("\x0E\x01\x09\x04\x1B\x1053Di nuovo?!\n<pause1E>Per tutti i lapislazzuli,\nma che succede?!\n\n\x0E\x01\x09\x04%\x1600Non importa! Accada quel che\naccada, devo proseguire le mie\nricerche!")
          			flw_545:
/*<545>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<536>*/ 				entrypoint_503_66();
          			  case 1:
/*<546>*/ 				printf("\x0E\x01\x09\x04\x13\xB04... Effettivamente...\nAnche qui è pieno di <b<lepidee>>!\n\n\n\x0E\x01\x09\x04\x16\x1E0BPurtroppo sono del tutto\nprivo di sensibilità musicale...\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          			}
          		  case 1:
/*<539>*/ 			printf("\x0E\x01\x09\x04\x13\x1953Di nuovo?!\n<pause1E>Per tutti i lapislazzuli,\nma che succede?!\n\n\x0E\x01\x09\x04\x16\x1E00Non importa! Accada quel che\naccada, devo proseguire le mie\nricerche!")
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
/*<537>*/ 					printf("\x0E\x01\x09\x04\x00\x140A<pause1E>Per tutti i porfidi!<pause1E>\n\x0E\x01\x09\x04\x0E\x1300La tua spada ha un aspetto\ndiverso!\n\nComunque, usala per \ncacciare quei tipi laggiù,\ncome hai fatto prima!")
          					flw_601:
/*<601>*/ 					switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          					  case 0:
/*<604>*/ 						switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          						  case 0:
/*<606>*/ 							printf("\x0E\x01\x09\x04\x00\x05Comunque...\nAccada quel che accada, devo\nproseguire con le mie ricerche!")
          							flw_603:
/*<603>*/ 							entrypoint_503_66();
          						  case 1:
/*<605>*/ 							printf("\x0E\x01\x09\x04\x00\x05Comunque...\nAccada quel che accada, devo\nproseguire con le mie ricerche!")
          							goto flw_603
          						}
          					  case 1:
/*<602>*/ 						printf("\x0E\x01\x09\x04\x13\xB04... Effettivamente...\nAnche qui è pieno di <b<lepidee>>!\n\n\n\x0E\x01\x09\x04\x16\x1E0BPurtroppo sono del tutto\nprivo di sensibilità musicale...\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          					}
          				  case 1:
/*<541>*/ 					printf("\x0E\x01\x09\x04\x00\xB0A<pause1E>Per tutti i porfidi!<pause1E>\n\x0E\x01\x09\x04\x08\xB00La tua spada ha un aspetto\ndiverso!\n\nComunque, usala per \ncacciare quei tipi laggiù,\ncome hai fatto prima!")
          					goto flw_601
          				}
          			  case 1:
/*<542>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<543>*/ 					printf("\x0E\x01\x09\x04\x0E\x1301Di nuovo tu?!\n<pause1E>Laggiù sono comparsi\nun sacco di tipi strani!\n\n\x0E\x01\x09\x04\x00\x02Cacciali come hai fatto prima!")
          					goto flw_601
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x08\xB01Di nuovo tu?!\n<pause1E>Laggiù sono comparsi\nun sacco di tipi strani!\n\n\x0E\x01\x09\x04\x18\x1802Cacciali come hai fatto prima!")
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
/*< 48>*/ 	printf("\x0E\x01\x09\x04\x1817\x1B09Per tutti i lapislazzuli!\nChe sorpresa!!!\n\n\n\x0E\x01\x09\x04\x1800\x1900Ce l'ho fatta!\nQuesta sarà di certo la scoperta del\nsecolo!")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x181F\x1908Questo segno!!!\nDev'essere di sicuro la <r<parete della\nDea>>, lasciata per l'impavido!")
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
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi\nsi concentrerà sul ritrovamento\ndel luogo da dove sbucano le <y<rupie>>!\n\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		goto flw_55
          	  case 1:
/*< 59>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Un <r<esagono scintillante>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fortuna.")
/*<108>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_135
          	}
          }

          void entrypoint_503_20() {
/*<497>*/ 	start()
/*<487>*/ 	scene_flags[10 'Sealed Grounds'][68 /* 0x9 10 */] = true;
/*<558>*/ 	set_camera(6, 0)
/*<488>*/ 	printf("\x0E\x01\x09\x04\x1808\xB02Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<490>*/ 	give_item(168 0xA8);
/*<567>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 566, 'param3': 32}
/*<566>*/ 	set_camera(3, 0)
/*<489>*/ 	printf("\x0E\x01\x09\x04\x1816\xB01... E con questo tutti gli\nenigmi di cui si parla nei testi antichi \nsono risolti!\nBrillante come il diamante!\n... Ma i testi antichi non finiscono qui...\nVuoi conoscerne il seguito?\n[1]Certo![2-]Mi basta")
/*<494>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_492:
/*<492>*/ 		printf("\x0E\x01\x09\x04\x1800\x07... tri... angol...?!\nTri... rza...?!")
/*<493>*/ 		printf("\x0E\x01\x09\x04\x1817\x1700... I testi antichi sono illeggibili...\nNon so cosa ci fosse scritto,\noltre questo...\n\nPer tutti i porfidi, cosa mai ci sarà\nstato scritto?")
/*<495>*/ 		printf("\x0E\x01\x09\x04\x1808\x1300Bisognerà attendere un po'\nperché il potere della parete della Dea\n<r<si rigeneri>>!\n\n\x0E\x01\x09\x04\x1818\x1700A quel punto, bisognerà\nprovare diversi stratagemmi\nper risolvere l'ultimo enigma!")
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
/*<496>*/ 		printf("\x0E\x01\x09\x04\x1808\xB00Ti prego! Bisogna che mi ascolti!")
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
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x18\x1704La mia ricerca di oggi\nsi concentrerà sul ritrovamento\ndel luogo da dove sbucano i <y<cuori>>! \n\n<pause1E>Vuoi che consultiamo i\ntesti antichi sull'argomento?\n[1]Sì[2-]No")
          		goto flw_61
          	  case 1:
/*< 65>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07... Il <r<simbolo rosso della vita>>...<pause1E>\nÈ ciò che deve disegnare colui\nche cerca la fonte della vita.\n\nIn tal modo la fonte della vita\ngronderà come pioggia.")
/*<106>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_136
          	}
          }

          void entrypoint_503_56() {
/*<347>*/ 	start()
/*<348>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<547>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<349>*/ 			printf("\x0E\x01\x09\x04\x1B\x1053Di nuovo?!\n<pause1E>Per tutti i lapislazzuli,\nma che succede?!\n\n\x0E\x01\x09\x04%\x1600Non importa! Accada quel che\naccada, devo proseguire le mie\nricerche!")
          			flw_550:
/*<550>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<549>*/ 				entrypoint_503_66();
          			  case 1:
/*<551>*/ 				printf("\x0E\x01\x09\x04\x13\xB04... Effettivamente...\nAnche qui è pieno di <b<lepidee>>!\n\n\n\x0E\x01\x09\x04\x16\x1E0BPurtroppo sono del tutto\nprivo di sensibilità musicale...\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x13\x1953Di nuovo?!\n<pause1E>Per tutti i lapislazzuli,\nma che succede?!\n\n\x0E\x01\x09\x04\x16\x1E00Non importa! Accada quel che\naccada, devo proseguire le mie\nricerche!")
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

