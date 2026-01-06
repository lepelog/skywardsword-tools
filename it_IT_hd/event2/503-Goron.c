          void entrypoint_503_57() {
/*< 38>*/ 	start()
/*<560>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00171909>Ma questa...\nQuesta è una delle<color red< statue parlanti\n>coloroff>dei testi antichi! Ne sono sicuro!\n")
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
/*< 68>*/ 		printf(/* textboxtype: 0, unk: 76, line: 44 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano le <color yellow<bombe>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		flw_67:
/*< 67>*/ 		switch (choice(2)) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 0, unk: 76, line: 29 */ "<0x10009:0x00161e07>... Un <color red<cerchio chiuso>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che\ndesidera un'enorme forza distruttrice.")
/*<105>*/ 			printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          			flw_137:
/*<137>*/ 			temp_flags[9 /* 0x0 02 */] = true;
/*<216>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<509>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 70>*/ 			printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
          			goto flw_137
          		}
          	  case 1:
/*< 71>*/ 		printf(/* textboxtype: 0, unk: 76, line: 29 */ "<0x10009:0x00161e07>... Un <color red<cerchio chiuso>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che\ndesidera un'enorme forza distruttrice.")
/*<104>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_137
          	}
          }

          void entrypoint_503_58() {
/*<146>*/ 	start()
          	flw_55:
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>... Un <color red<esagono scintillante>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fortuna.")
/*<109>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_135:
/*<135>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<221>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<507>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
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
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano le <color yellow<frecce>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		flw_73:
/*< 73>*/ 		switch (choice(2)) {
          		  case 0:
/*< 75>*/ 			printf(/* textboxtype: 0, unk: 76, line: 26 */ "<0x10009:0x00161e07>... Una <color red<freccia orizzontale>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che vuole\nraggiungere un bersaglio lontano.")
/*<103>*/ 			printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          			flw_138:
/*<138>*/ 			temp_flags[10 /* 0x0 04 */] = true;
/*<217>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<510>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 76>*/ 			printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
          			goto flw_138
          		}
          	  case 1:
/*< 77>*/ 		printf(/* textboxtype: 0, unk: 76, line: 26 */ "<0x10009:0x00161e07>... Una <color red<freccia orizzontale>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che vuole\nraggiungere un bersaglio lontano.")
/*<102>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_138
          	}
          }

          void entrypoint_503_59() {
/*<147>*/ 	start()
          	flw_61:
/*< 61>*/ 	switch (choice(2)) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 76, unk: 1, line: 28 */ "<0x10009:0x00161e07>... Il <color red<simbolo rosso della vita>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fonte della vita.\n\nIn tal modo la fonte della vita gronderà\ncome pioggia.")
/*<107>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_136:
/*<136>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<222>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<508>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 64>*/ 		printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
          		goto flw_136
          	}
          }

          void entrypoint_503_07() {
/*<166>*/ 	start()
/*<367>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 364, 'param3': 32}
/*<364>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 368, 'param3': 15}
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 575, 'param3': 13}
/*<575>*/ 	wait_frames(10)
/*<365>*/ 	set_camera(3, 0)
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 328, 'param3': 16}
/*<328>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<329>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_171:
/*<171>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<172>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>Per tutti i porfidi! Grazie!!!\nUn'azione degna di te!")
          				flw_195:
/*<195>*/ 				entrypoint_503_17();
          			  case 1:
/*<173>*/ 				printf(/* textboxtype: 76, unk: 1, line: 58 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questa, allora, la fortuna\ndi cui parlavano i testi antichi!")
/*<174>*/ 				scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
          				goto flw_195
          			}
          		  case 1:
/*<582>*/ 			scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
/*<562>*/ 			printf(/* textboxtype: 76, unk: 1, line: 58 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questa, allora, la fortuna\ndi cui parlavano i testi antichi!")
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
/*<429>*/ 		printf(/* textboxtype: 76, unk: 1, line: 46 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano le <color yellow<fate>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		flw_428:
/*<428>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000007>... tri... angol...?!\nTri... rza...?!")
/*<434>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00171700>... I testi antichi sono illeggibili...\nNon so cosa ci fosse scritto, oltre questo...\n\n\nPer tutti i porfidi, cosa mai ci sarà\nstato scritto?")
          			flw_438:
/*<438>*/ 			temp_flags[12 /* 0x0 10 */] = true;
/*<440>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<506>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*<431>*/ 			printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
          			goto flw_438
          		}
          	  case 1:
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000007>... tri... angol...?!\nTri... rza...?!")
/*<433>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00171700>... I testi antichi sono illeggibili...\nNon so cosa ci fosse scritto, oltre questo...\n\n\nPer tutti i porfidi, cosa mai ci sarà\nstato scritto?")
          		goto flw_438
          	}
          }

          void entrypoint_503_08() {
/*<167>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 369, 'param3': 32}
/*<369>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 373, 'param3': 15}
/*<373>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 576, 'param3': 13}
/*<576>*/ 	wait_frames(10)
/*<370>*/ 	set_camera(3, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 330, 'param3': 16}
/*<330>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<331>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_183:
/*<183>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<175>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>Per tutti i porfidi! Grazie!!!\nUn'azione degna di te!")
          				flw_194:
/*<194>*/ 				entrypoint_503_17();
          			  case 1:
/*<176>*/ 				printf(/* textboxtype: 0, unk: 76, line: 59 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questo, allora, il simbolo rosso\ndella vita di cui parlavano i testi antichi!")
/*<184>*/ 				scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
          				goto flw_194
          			}
          		  case 1:
/*<583>*/ 			scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
/*<563>*/ 			printf(/* textboxtype: 0, unk: 76, line: 59 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nÈ proprio questo, allora, il simbolo rosso\ndella vita di cui parlavano i testi antichi!")
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
/*<577>*/ 	wait_frames(10)
/*<375>*/ 	set_camera(3, 0)
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 185, 'param3': 16}
/*<185>*/ 	switch (scene_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<177>*/ 		printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>Per tutti i porfidi! Grazie!!!\nUn'azione degna di te!")
/*<196>*/ 		entrypoint_503_17();
          	  case 1:
/*<178>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x18171908>Per tutti i porfidi, i lapislazzuli\ne le ametiste!!!\n\n\nEra questo ciò di cui parlavano i testi\nantichi! Non è una cosa meravigliosa?\nGrazie per avermela fatta vedere!")
/*<559>*/ 		set_camera(6, 0)
/*<186>*/ 		scene_flags[10 'Sealed Grounds'][63 /* 0x6 80 */] = true;
/*<515>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = true;
/*<419>*/ 		printf(/* textboxtype: 0, unk: 76, line: 68 */ "<0x10009:0x18080b02>E con questo sono\nriuscito a leggere tutti i testi antichi!\n\n\nEccoti il mio regalo speciale,\nper avermi aiutato!")
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
/*<517>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181701>... La parte illeggibile dei testi antichi...\nCosa mai ci sarà stato scritto?\nIl mistero si infittisce...\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
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
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>... Un <color red<esagono scintillante>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fortuna.")
/*<101>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_139:
/*<139>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<218>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<511>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 82>*/ 		printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
          		goto flw_139
          	}
          }

          void entrypoint_503_10() {
/*<169>*/ 	start()
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 379, 'param3': 32}
/*<379>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 383, 'param3': 15}
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 579, 'param3': 13}
/*<579>*/ 	wait_frames(10)
/*<380>*/ 	set_camera(3, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 332, 'param3': 16}
/*<332>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<333>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_187:
/*<187>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>Per tutti i porfidi! Grazie!!!\nUn'azione degna di te!")
          				flw_192:
/*<192>*/ 				entrypoint_503_17();
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 0, unk: 76, line: 62 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora l'enorme forza distruttrice\ndi cui parlavano i testi antichi erano\nle bombe!")
/*<188>*/ 				scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
          				goto flw_192
          			}
          		  case 1:
/*<584>*/ 			scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
/*<564>*/ 			printf(/* textboxtype: 0, unk: 76, line: 62 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora l'enorme forza distruttrice\ndi cui parlavano i testi antichi erano\nle bombe!")
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
/*< 87>*/ 		printf(/* textboxtype: 76, unk: 1, line: 28 */ "<0x10009:0x00161e07>... Il <color red<simbolo rosso della vita>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fonte della vita.\n\nIn tal modo la fonte della vita gronderà\ncome pioggia.")
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_140:
/*<140>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<219>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<512>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 88>*/ 		printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
          		goto flw_140
          	}
          }

          void entrypoint_503_64() {
/*<165>*/ 	start()
          	flw_91:
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 0, unk: 76, line: 29 */ "<0x10009:0x00161e07>... Un <color red<cerchio chiuso>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che\ndesidera un'enorme forza distruttrice.")
/*< 97>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		flw_141:
/*<141>*/ 		temp_flags[9 /* 0x0 02 */] = true;
/*<220>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<513>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 94>*/ 		printf(/* textboxtype: 0, unk: 76, line: 47 */ "<0x10009:0x00081e0a>Davvero? <pause 30>... Bene, allora mi raccomando!")
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
/*<223>*/ 			printf(/* textboxtype: 0, unk: 76, line: 41 */ "<0x10009:0x00261301>Bisognerà attendere un po' perché il\npotere della parete della Dea <color red<si rigeneri>coloroff>!\n\n\n<0x10009:0x000e1700>A quel punto, avrò di sicuro bisogno\ndi aiuto per le mie ricerche!")
          		  case 1:
/*<587>*/ 			printf(/* textboxtype: 76, unk: 1, line: 40 */ "<0x10009:0x18080b01>Bisognerà attendere un po' perché il\npotere della parete della Dea <color red<si rigeneri>coloroff>!\n\n\n<0x10009:0x00181700>A quel punto, avrò di sicuro bisogno\ndi aiuto per le mie ricerche!")
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
/*<142>*/ 							printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00211701>Che bello! Voglio vedere ancora\nuscire le <color yellow<rupie>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
/*<150>*/ 							entrypoint_503_58();
          						  case 1:
/*<133>*/ 							switch (temp_flags[8 /* 0x0 01 */]) {
          							  case 0:
/*<143>*/ 								printf(/* textboxtype: 0, unk: 76, line: 50 */ "<0x10009:0x00211701>Che bello! Voglio vedere\nancora piovere <color yellow<cuori>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
/*<151>*/ 								entrypoint_503_59();
          							  case 1:
/*<132>*/ 								switch (temp_flags[9 /* 0x0 02 */]) {
          								  case 0:
/*<144>*/ 									printf(/* textboxtype: 76, unk: 1, line: 52 */ "<0x10009:0x00181701>Se vuoi la pace preparati alla guerra!\nOggi voglio vedere spuntare le <color yellow<bombe>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
/*<152>*/ 									entrypoint_503_60();
          								  case 1:
/*<131>*/ 									switch (temp_flags[10 /* 0x0 04 */]) {
          									  case 0:
/*<145>*/ 										printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00211701>Voglio proprio vedere spuntare\nle <color yellow<frecce >coloroff>dalla parete!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
/*<153>*/ 										entrypoint_503_61();
          									  case 1:
/*<457>*/ 										switch (temp_flags[12 /* 0x0 10 */]) {
          										  case 0:
/*<516>*/ 											switch (scene_flags[63 /* 0x6 80 */]) {
          											  case 0:
/*<458>*/ 												printf(/* textboxtype: 0, unk: 76, line: 56 */ "<0x10009:0x00211701>Voglio vedere di nuovo apparire\nle <color yellow<fate>coloroff>!!! Si può?\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
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
/*<448>*/ 							printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00211701>Che bello! Voglio vedere ancora\nuscire le <color yellow<rupie>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          							flw_452:
/*<452>*/ 							entrypoint_503_58();
          						  case 1:
/*<522>*/ 							printf(/* textboxtype: 76, unk: 1, line: 49 */ "<0x10009:0x00001b05>Ma il fatto che si possa ottenere\nuna gran fortuna... Sarà vero?\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          							goto flw_452
          						}
          					  case 1:
/*<446>*/ 						switch (temp_flags[8 /* 0x0 01 */]) {
          						  case 0:
/*<519>*/ 							switch (scene_flags[62 /* 0x6 40 */]) {
          							  case 0:
/*<449>*/ 								printf(/* textboxtype: 0, unk: 76, line: 50 */ "<0x10009:0x00211701>Che bello! Voglio vedere\nancora piovere <color yellow<cuori>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          								flw_453:
/*<453>*/ 								entrypoint_503_59();
          							  case 1:
/*<523>*/ 								printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00160b04>La fonte della vita gronderà\ncome pioggia...\n\n\n<0x10009:0x00000b05>... Cioè? Cosa succederà? Se è vero,\nmi sento molto più tranquillo, anche\nad andare in luoghi pericolosi!\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          								goto flw_453
          							}
          						  case 1:
/*<445>*/ 							switch (temp_flags[9 /* 0x0 02 */]) {
          							  case 0:
/*<520>*/ 								switch (scene_flags[64 /* 0x9 01 */]) {
          								  case 0:
/*<450>*/ 									printf(/* textboxtype: 76, unk: 1, line: 52 */ "<0x10009:0x00181701>Se vuoi la pace preparati alla guerra!\nOggi voglio vedere spuntare le <color yellow<bombe>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          									flw_454:
/*<454>*/ 									entrypoint_503_60();
          								  case 1:
/*<524>*/ 									printf(/* textboxtype: 0, unk: 76, line: 53 */ "<0x10009:0x00211705>Un cerchio chiuso...\nChe razza di forma sarà?\n\n\n<0x10009:0x00161e04>... Forse... <pause 10>Credo si tratti di\nun normale cerchio...\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          									goto flw_454
          								}
          							  case 1:
/*<444>*/ 								switch (temp_flags[10 /* 0x0 04 */]) {
          								  case 0:
/*<521>*/ 									switch (scene_flags[65 /* 0x9 02 */]) {
          									  case 0:
/*<451>*/ 										printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00211701>Voglio proprio vedere spuntare\nle <color yellow<frecce >coloroff>dalla parete!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          										flw_455:
/*<455>*/ 										entrypoint_503_61();
          									  case 1:
/*<525>*/ 										printf(/* textboxtype: 76, unk: 1, line: 55 */ "<0x10009:0x00162005>Raggiungere un bersaglio lontano...\nForse... ma sì, dev'essere...\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
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
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00181701>Nel corso delle mie ricerche\nho scoperto un nuovo testo antico!\nVuoi sapere cosa dice?\n[1-]Certo![2]No!")
/*< 43>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf(/* textboxtype: 0, unk: 76, line: 26 */ "<0x10009:0x00161e07>... Una <color red<freccia orizzontale>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che vuole\nraggiungere un bersaglio lontano.")
/*< 45>*/ 					printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
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
/*< 44>*/ 					printf(/* textboxtype: 76, unk: 1, line: 25 */ "<0x10009:0x00080b07>Stai mica facendo i complimenti...!\nNon dirmi, con quella faccia, che\nnon ti interessa! Non ti capisco,\nma pazienza! Ora ti spiego...")
          					goto flw_53
          				}
          			}
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x181f1908>Questo segno!!!\nDev'essere di sicuro la <color red<parete della\nDea>coloroff>, lasciata per l'impavido!")
/*<156>*/ 			switch (temp_flags[7 /* 0x1 80 */]) {
          			  case 0:
/*<527>*/ 				switch (scene_flags[61 /* 0x6 20 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00211701>Che bello! Voglio vedere ancora\nuscire le <color yellow<rupie>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          					flw_160:
/*<160>*/ 					entrypoint_503_62();
          				  case 1:
/*<529>*/ 					printf(/* textboxtype: 76, unk: 1, line: 49 */ "<0x10009:0x00001b05>Ma il fatto che si possa ottenere\nuna gran fortuna... Sarà vero?\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          					goto flw_160
          				}
          			  case 1:
/*<155>*/ 				switch (temp_flags[8 /* 0x0 01 */]) {
          				  case 0:
/*<526>*/ 					switch (scene_flags[62 /* 0x6 40 */]) {
          					  case 0:
/*<158>*/ 						printf(/* textboxtype: 0, unk: 76, line: 50 */ "<0x10009:0x00211701>Che bello! Voglio vedere\nancora piovere <color yellow<cuori>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          						flw_161:
/*<161>*/ 						entrypoint_503_63();
          					  case 1:
/*<530>*/ 						printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00160b04>La fonte della vita gronderà\ncome pioggia...\n\n\n<0x10009:0x00000b05>... Cioè? Cosa succederà? Se è vero,\nmi sento molto più tranquillo, anche\nad andare in luoghi pericolosi!\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          						goto flw_161
          					}
          				  case 1:
/*<154>*/ 					switch (temp_flags[9 /* 0x0 02 */]) {
          					  case 0:
/*<528>*/ 						switch (scene_flags[64 /* 0x9 01 */]) {
          						  case 0:
/*<159>*/ 							printf(/* textboxtype: 76, unk: 1, line: 52 */ "<0x10009:0x00181701>Se vuoi la pace preparati alla guerra!\nOggi voglio vedere spuntare le <color yellow<bombe>coloroff>!\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
          							flw_162:
/*<162>*/ 							entrypoint_503_64();
          						  case 1:
/*<531>*/ 							printf(/* textboxtype: 0, unk: 76, line: 53 */ "<0x10009:0x00211705>Un cerchio chiuso...\nChe razza di forma sarà?\n\n\n<0x10009:0x00161e04>... Forse... <pause 10>Credo si tratti di\nun normale cerchio...\n\n\n<0x10009:0x00080b00>A proposito, vuoi che consultiamo\ndi nuovo i testi antichi?\n[1-]Sì[2]No")
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
/*<580>*/ 	wait_frames(10)
/*<385>*/ 	set_camera(3, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 334, 'param3': 16}
/*<334>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<335>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_189:
/*<189>*/ 			switch (scene_flags[65 /* 0x9 02 */]) {
          			  case 0:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x18171909>Per tutti i porfidi! Grazie!!!\nUn'azione degna di te!")
          				flw_193:
/*<193>*/ 				entrypoint_503_17();
          			  case 1:
/*<182>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora era questo che intendevano\ni testi antichi quando parlavano di\nraggiungere un bersaglio lontano!")
/*<190>*/ 				scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
          				goto flw_193
          			}
          		  case 1:
/*<585>*/ 			scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
/*<565>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nVedere per credere!\n\n\nMa allora era questo che intendevano\ni testi antichi quando parlavano di\nraggiungere un bersaglio lontano!")
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
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano le <color yellow<rupie>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		goto flw_79
          	  case 1:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>... Un <color red<esagono scintillante>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fortuna.")
/*<100>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_139
          	}
          }

          void entrypoint_503_51() {
          	start()
/*<351>*/ 	switch (scene_flags[110 /* 0xC 40 */]) {
          	  case 0:
          		flw_13:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00251356>Sì, sono rosso di lava perché\nla mia ricerca non dà ancora\ni risultati sperati.\n\n<0x10009:0x000e1300>Se questo tipo di argomenti ti\ninteressa, vieni a parlare con me senza\nproblemi! Mi fa piacere!\n\n<0x10009:0x00001300>Io intanto continuerò i miei studi!")
          	  case 1:
/*<352>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 5, 'param3': 31}
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Per la lava di tutti i vulcani!\nEccoci di nuovo!\nCome al solito, hai da fare, vedo...\n\n<0x10009:0x001b1300>E anche io, continuo a\nfare ricerche sulle stranezze\ndi questo mondo...\n\n<0x10009:0x000e1300>Vuoi sapere che cosa ho\nscoperto?[1-]Sì![2]No")
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 0, unk: 76, line: 2 */ "<0x10007:0x000e1908>Per tutti i porfidi!\nSapevo che fremevi dalla curiosità!\nDunque, portando avanti le ricerche...\n\nHo scoperto che <0x10007:0x00001300>in questo mondo\nesistono delle <color red<pareti >coloroff>e delle <color red<statue >coloroff>che\nreagiscono alle <color red<dolci melodie>coloroff>!\n<color red<\n>coloroff><0x10007:0x000e1300>Ti interessa l'argomento?\n[1-]Eccome![2]Non tanto")
/*< 12>*/ 			switch (choice(2)) {
          			  case 0:
/*<353>*/ 				scene_flags[10 'Sealed Grounds'][110 /* 0xC 40 */] = true;
          				goto flw_13
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf(/* textboxtype: 76, unk: 1, line: 1 */ "<0x10009:0x00250e05>Peccato...\nSe cambi idea, torna pure da me...")
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
/*<409>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
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
/*<410>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<401>*/ 				give_item(4 0x04);
/*<616>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<212>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<213>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<214>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<215>*/ 				give_item(62 0x3E);
          				goto flw_554
          			}
          		  case 1:
/*<199>*/ 			switch (random(4)) {
          			  case 0:
/*<411>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<402>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<412>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<403>*/ 				give_item(4 0x04);
/*<617>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<204>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<205>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<206>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<207>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 2:
/*<200>*/ 			switch (random(4)) {
          			  case 0:
/*<413>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<404>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<414>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<405>*/ 				give_item(4 0x04);
/*<618>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<208>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<209>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 3:
/*<210>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<211>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 3:
/*<201>*/ 			switch (random(4)) {
          			  case 0:
/*<415>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<406>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 1:
/*<416>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<407>*/ 				give_item(4 0x04);
/*<619>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<202>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<203>*/ 				give_item(32 0x20);
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 3:
/*<417>*/ 				printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<408>*/ 				give_item(32 0x20);
/*<620>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			}
          		}
          	  case 1:
/*<633>*/ 		scene_flags[10 'Sealed Grounds'][113 /* 0xF 02 */] = true;
/*<632>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x18080b02>Eccoti un regalo per avermi\naiutato nelle ricerche! Spero ti piaccia.")
/*<630>*/ 		give_item(94 0x5E);
/*<638>*/ 		set_camera(3, 0)
/*<640>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 639, 'param3': 32}
/*<639>*/ 		printf(/* textboxtype: 76, unk: 1, line: 70 */ "<0x10009:0x18081301>Fra un po' il potere della parete della\nDea <color red<si rigenererà>coloroff>!\nA quel punto mi servirà di nuovo il tuo\naiuto per le mie ricerche.")
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
/*< 86>*/ 		printf(/* textboxtype: 76, unk: 1, line: 43 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano i <color yellow<cuori>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		goto flw_85
          	  case 1:
/*< 89>*/ 		printf(/* textboxtype: 76, unk: 1, line: 28 */ "<0x10009:0x00161e07>... Il <color red<simbolo rosso della vita>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fonte della vita.\n\nIn tal modo la fonte della vita gronderà\ncome pioggia.")
/*< 98>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_140
          	}
          }

          void entrypoint_503_52() {
/*<  1>*/ 	start()
/*<346>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<396>*/ 		printf(/* textboxtype: 0, unk: 76, line: 71 */ "<0x10009:0x001d1353>Cosa?! <pause 30>Non avevo mai provato\nuna cosa simile!")
          	  case 1:
/*<354>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
          			flw_22:
/*< 22>*/ 			printf(/* textboxtype: 76, unk: 1, line: 7 */ "<0x10009:0x000a1304>I testi antichi riferiscono della presenza\ndi numerose farfalle nei pressi di pareti\ne statue.\n\nSembra che le farfalle siano in grado di\npercepire qualcosa... Vuoi saperne di più?\n[1-]Sì![2]Non mi va")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*<502>*/ 				scene_flags[10 'Sealed Grounds'][111 /* 0xC 80 */] = true;
/*< 24>*/ 				printf(/* textboxtype: 0, unk: 76, line: 8 */ "<0x10009:0x000e1300>Quale argomento ti interessa?\n[1-]Pareti[2-]Statue")
/*< 25>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 76, unk: 1, line: 10 */ "<0x10009:0x00000001>Secondo i testi antichi, le pareti sono\nun dono della Dea per gli impavidi!\n\n\nSembra che da quelle pareti\nfuoriesca ciò che l'impavido desidera...\nSono le <color red<pareti della Dea>coloroff>!\n\nVuoi saperne di più?\n[1-]Certo![2]Basta")
/*< 28>*/ 					switch (choice(2)) {
          					  case 0:
/*< 29>*/ 						printf(/* textboxtype: 0, unk: 76, line: 11 */ "<0x10009:0x00251b56>Per tutti i travertini!\nLe mie ricerche sono ferme\na questo punto!\n\n<0x10009:0x000a1300>Se farò delle nuove\nscoperte, ti aggiornerò!\nSicuro come scolpito sul marmo!")
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 76, unk: 1, line: 13 */ "<0x10009:0x00000004>In questo momento mi sto\nimpegnando a scoprire dove si trovino\nle <color red<pareti della Dea>coloroff>!")
          					}
          				  case 1:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Secondo i testi antichi, quelle statue\nparlano una strana lingua e lo fanno\nballonzolando...!\n\nInsomma, si tratta di <color red<statue parlanti>coloroff>!\nVuoi che continui?\n[1-]Certo![2]Ma no!")
/*<503>*/ 					switch (choice(2)) {
          					  case 0:
/*<504>*/ 						printf(/* textboxtype: 0, unk: 76, line: 11 */ "<0x10009:0x00251b56>Per tutti i travertini!\nLe mie ricerche sono ferme\na questo punto!\n\n<0x10009:0x000a1300>Se farò delle nuove\nscoperte, ti aggiornerò!\nSicuro come scolpito sul marmo!")
          					  case 1:
/*<505>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000004>In questo momento mi sto\nimpegnando a scoprire dove si trovino\nle <color red<statue parlanti>coloroff>!")
          					}
          				}
          			  case 1:
          				flw_16:
/*< 16>*/ 				printf(/* textboxtype: 76, unk: 1, line: 1 */ "<0x10009:0x00250e05>Peccato...\nSe cambi idea, torna pure da me...")
          			}
          		  case 1:
/*<355>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 6, 'param3': 31}
/*<  6>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Per la lava di tutti i vulcani!\nEccoci di nuovo!\nCome al solito, hai da fare, vedo...\n\n<0x10009:0x001b1300>E anche io, continuo a\nfare ricerche sulle stranezze\ndi questo mondo...\n\n<0x10009:0x000e1300>Vuoi sapere che cosa ho\nscoperto?[1-]Sì![2]No")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 76, line: 2 */ "<0x10007:0x000e1908>Per tutti i porfidi!\nSapevo che fremevi dalla curiosità!\nDunque, portando avanti le ricerche...\n\nHo scoperto che <0x10007:0x00001300>in questo mondo\nesistono delle <color red<pareti >coloroff>e delle <color red<statue >coloroff>che\nreagiscono alle <color red<dolci melodie>coloroff>!\n<color red<\n>coloroff><0x10007:0x000e1300>Ti interessa l'argomento?\n[1-]Eccome![2]Non tanto")
/*< 17>*/ 				switch (choice(2)) {
          				  case 0:
/*< 18>*/ 					printf(/* textboxtype: 76, unk: 1, line: 4 */ "<0x10009:0x000e1904>Per tutti i porfidi!\nChe entusiasmo!\n\n\n<0x10009:0x00001900>Ma prima di parlarti delle <color red<pareti>coloroff>\ne delle <color red<statue>coloroff> devo chiederti\nuna cosa...\n<0x10009:0x000e0b00>\nSai che cos'è una <color blue<lepidea>coloroff>?\n[1-]Sì[2]No")
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "Allora veniamo subito al nocciolo\nduro della questione!")
          						goto flw_22
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 76, line: 5 */ "<0x10009:0x000e1300>Le <color blue<lepidee >coloroff>sono delle graziose farfalle\ndel color del turchese!\n\n\n<0x10009:0x001b1300>Sono farfalle assai longeve,\ne possono vivere ovunque!\n\n\n<0x10009:0x000e1300>Ovviamente se ne possono\ntrovare molte anche da queste parti!")
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
/*<581>*/ 		wait_frames(10)
/*<390>*/ 		set_camera(3, 0)
/*<391>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 399, 'param3': 16}
/*<399>*/ 		switch (temp_flags[8 /* 0x0 01 */]) {
          		  case 0:
/*<552>*/ 			switch (story_flags[421 /* us: 805A9B07 0x40, jp: 805ACD87 0x40 */]) {
          			  case 0:
/*<343>*/ 				printf(/* textboxtype: 0, unk: 76, line: 65 */ "<0x10009:0x18171908>Per tutti i lapislazzuli! È incredibile!!!\n\n\n\n<0x10009:0x18161e00>... Tre cuori... non sono la stessa\ncosa della fonte della vita che gronda\ncome pioggia!\n\nDevo continuare le mie ricerche!")
/*<342>*/ 				printf(/* textboxtype: 76, unk: 1, line: 40 */ "<0x10009:0x18080b01>Bisognerà attendere un po' perché il\npotere della parete della Dea <color red<si rigeneri>coloroff>!\n\n\n<0x10009:0x00181700>A quel punto, avrò di sicuro bisogno\ndi aiuto per le mie ricerche!")
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
/*<398>*/ 				printf(/* textboxtype: 76, unk: 1, line: 64 */ "<0x10009:0x18171908>Per tutti i lapislazzuli!\nÈ incredibile!!!\n\n\n<0x10009:0x18161e00>Però non è quello che mi aspettavo!\nDevo continuare le mie ricerche!")
/*<397>*/ 				printf(/* textboxtype: 76, unk: 1, line: 40 */ "<0x10009:0x18080b01>Bisognerà attendere un po' perché il\npotere della parete della Dea <color red<si rigeneri>coloroff>!\n\n\n<0x10009:0x00181700>A quel punto, avrò di sicuro bisogno\ndi aiuto per le mie ricerche!")
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
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 76, line: 20 */ "<0x10009:0x0000000a>Proprio come dicevano i testi antichi!\nParlano una strana lingua e lo fanno\nballonzolando...!\n\n<0x10009:0x00161e0b>E così è stato compiuto un\ngrande passo in avanti nelle mie\nricerche sulle <color red<statue parlanti>coloroff>!\n\n<0x10009:0x001e0b00>Poi mi metterò al lavoro sulle <color red<pareti\ndella Dea>coloroff>! Ce n'è di sicuro qualcuna\nda queste parti! La strada delle mie\nricerche è costellata di diamanti!")
          	  case 1:
/*< 36>*/ 		switch (scene_flags[66 /* 0x9 04 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 76, unk: 1, line: 19 */ "<0x10009:0x0016200b>Purtroppo sono del tutto\nprivo di sensibilità musicale...\n\n\n<0x10009:0x00002000>Che disastro!\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          		  case 1:
/*<624>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 600, 'param3': 32}
/*<600>*/ 			printf(/* textboxtype: 76, unk: 1, line: 16 */ "<0x10009:0x00080b08>Cosa...?! Ce l'ho fatta!")
/*<622>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 623, 'param3': 17}
/*<623>*/ 			wait_frames(10)
/*<621>*/ 			set_camera(7, 0)
/*< 31>*/ 			printf(/* textboxtype: 0, unk: 76, line: 17 */ "<0x10009:0x0017190a>Per tutti i lapislazzuli!\nÈ pieno di quelle farfalle che\nreagiscono alle dolci melodie!\n\n<0x10009:0x00001900>Sono sicuro!\nDev'essere proprio questo il posto...")
/*< 32>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001e00>Per tutti gli zaffiri... Cosa...?!")
/*< 33>*/ 			printf(/* textboxtype: 76, unk: 1, line: 19 */ "<0x10009:0x0016200b>Purtroppo sono del tutto\nprivo di sensibilità musicale...\n\n\n<0x10009:0x00002000>Che disastro!\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
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
/*< 92>*/ 		printf(/* textboxtype: 0, unk: 76, line: 44 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano le <color yellow<bombe>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		goto flw_91
          	  case 1:
/*< 95>*/ 		printf(/* textboxtype: 0, unk: 76, line: 29 */ "<0x10009:0x00161e07>... Un <color red<cerchio chiuso>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che\ndesidera un'enorme forza distruttrice.")
/*< 96>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
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
/*<578>*/ 		wait_frames(10)
/*<480>*/ 		set_camera(3, 0)
/*<481>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 484, 'param3': 16}
/*<484>*/ 		printf(/* textboxtype: 76, unk: 1, line: 61 */ "<0x10009:0x18131b01>Per tutti i porfidi, i lapislazzuli\ne le ametiste!!! Ma cosa hai fatto?\n\n\n<0x10009:0x18171908>Dalla parete sono uscite cose\nche non avevo mai visto!\n\n\n<0x10009:0x18161e00><0x10006:0xffcd>... <0x10006:0x00cd>Aspetta un po'... ma non è che...\n<0x10009:0x18080b00>No, no... niente.\nDimentica quello che ho detto.")
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
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00080b02>Per tutti i lapislazzuli!\nAncora tu?\n\n\n<0x10009:0x00160b00>... Effettivamente...\nAnche qui è pieno di <color blue<lepidee>coloroff>!\n\n\n<0x10009:0x00001e0b>Ma purtroppo sono del tutto privo di\nsensibilità musicale...\n\n\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
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
/*<345>*/ 			printf(/* textboxtype: 76, unk: 1, line: 73 */ "<0x10009:0x001b1053>Di nuovo?! <pause 30>Per tutti i lapislazzuli,\nma che succede?!\n\n\n<0x10009:0x00251600>Non importa! Accada quel che accada,\ndevo proseguire le mie ricerche!")
          			flw_545:
/*<545>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<536>*/ 				entrypoint_503_66();
          			  case 1:
/*<546>*/ 				printf(/* textboxtype: 0, unk: 76, line: 80 */ "<0x10009:0x00130b04>... Effettivamente...\nAnche qui è pieno di <color blue<lepidee>coloroff>!\n\n\n<0x10009:0x00161e0b>Purtroppo sono del tutto\nprivo di sensibilità musicale...\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          			}
          		  case 1:
/*<539>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00131953>Di nuovo?! <pause 30>Per tutti i lapislazzuli,\nma che succede?!\n\n\n<0x10009:0x00161e00>Non importa! Accada quel che accada,\ndevo proseguire le mie ricerche!")
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
/*<537>*/ 					printf(/* textboxtype: 0, unk: 76, line: 77 */ "<0x10009:0x0000140a><pause 30>Per tutti i porfidi!<pause 30>\n<0x10009:0x000e1300>La tua spada ha un aspetto diverso!\n\n\nComunque, usala per cacciare quei tipi\nlaggiù, come hai fatto prima!")
          					flw_601:
/*<601>*/ 					switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          					  case 0:
/*<604>*/ 						switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          						  case 0:
/*<606>*/ 							printf(/* textboxtype: 76, unk: 1, line: 79 */ "<0x10009:0x00000005>Comunque...\nAccada quel che accada, devo\nproseguire con le mie ricerche!")
          							flw_603:
/*<603>*/ 							entrypoint_503_66();
          						  case 1:
/*<605>*/ 							printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000005>Comunque...\nAccada quel che accada, devo\nproseguire con le mie ricerche!")
          							goto flw_603
          						}
          					  case 1:
/*<602>*/ 						printf(/* textboxtype: 0, unk: 76, line: 80 */ "<0x10009:0x00130b04>... Effettivamente...\nAnche qui è pieno di <color blue<lepidee>coloroff>!\n\n\n<0x10009:0x00161e0b>Purtroppo sono del tutto\nprivo di sensibilità musicale...\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          					}
          				  case 1:
/*<541>*/ 					printf(/* textboxtype: 76, unk: 1, line: 76 */ "<0x10009:0x00000b0a><pause 30>Per tutti i porfidi!<pause 30>\n<0x10009:0x00080b00>La tua spada ha un aspetto diverso!\n\n\nComunque, usala per cacciare quei tipi\nlaggiù, come hai fatto prima!")
          					goto flw_601
          				}
          			  case 1:
/*<542>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<543>*/ 					printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x000e1301>Di nuovo tu?! <pause 30>Laggiù sono comparsi\nun sacco di tipi strani!\n\n\n<0x10009:0x00000002>Cacciali come hai fatto prima!")
          					goto flw_601
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 0, unk: 76, line: 74 */ "<0x10009:0x00080b01>Di nuovo tu?! <pause 30>Laggiù sono comparsi\nun sacco di tipi strani!\n\n\n<0x10009:0x00181802>Cacciali come hai fatto prima!")
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
/*<574>*/ 	wait_frames(10)
/*<359>*/ 	set_camera(3, 0)
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 0, unk: 76, line: 35 */ "<0x10009:0x18171b09>Per tutti i lapislazzuli!\nChe sorpresa!!!\n\n\n<0x10009:0x18001900>Ce l'ho fatta!\nQuesta sarà di certo la scoperta del\nsecolo!")
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x181f1908>Questo segno!!!\nDev'essere di sicuro la <color red<parete della\nDea>coloroff>, lasciata per l'impavido!")
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
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano le <color yellow<rupie>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		goto flw_55
          	  case 1:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00161e07>... Un <color red<esagono scintillante>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fortuna.")
/*<108>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_135
          	}
          }

          void entrypoint_503_20() {
/*<497>*/ 	start()
/*<487>*/ 	scene_flags[10 'Sealed Grounds'][68 /* 0x9 10 */] = true;
/*<558>*/ 	set_camera(6, 0)
/*<488>*/ 	printf(/* textboxtype: 76, unk: 1, line: 67 */ "<0x10009:0x18080b02>Eccoti il mio regalo,\ncome ringraziamento per avermi\naiutato nelle mie ricerche!")
/*<490>*/ 	give_item(168 0xA8);
/*<567>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 566, 'param3': 32}
/*<566>*/ 	set_camera(3, 0)
/*<489>*/ 	printf(/* textboxtype: 76, unk: 1, line: 37 */ "<0x10009:0x18160b01>... E con questo tutti gli\nenigmi di cui si parla nei testi antichi\nsono risolti!\nBrillante come il diamante!\n... Ma i testi antichi non finiscono qui...\nVuoi conoscerne il seguito?\n[1-]Certo![2]Mi basta")
/*<494>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_492:
/*<492>*/ 		printf(/* textboxtype: 76, unk: 1, line: 31 */ "<0x10009:0x18000007>... tri... angol...?!\nTri... rza...?!")
/*<493>*/ 		printf(/* textboxtype: 76, unk: 1, line: 34 */ "<0x10009:0x18171700>... I testi antichi sono illeggibili...\nNon so cosa ci fosse scritto,\noltre questo...\n\nPer tutti i porfidi, cosa mai ci sarà\nstato scritto?")
/*<495>*/ 		printf(/* textboxtype: 0, unk: 76, line: 38 */ "<0x10009:0x18081300>Bisognerà attendere un po'\nperché il potere della parete della Dea\n<color red<si rigeneri>coloroff>!\n\n<0x10009:0x18181700>A quel punto, bisognerà\nprovare diversi stratagemmi\nper risolvere l'ultimo enigma!")
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
/*<496>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x18080b00>Ti prego! Bisogna che mi ascolti!")
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
/*< 62>*/ 		printf(/* textboxtype: 76, unk: 1, line: 43 */ "<0x10009:0x00181704>La mia ricerca di oggi si concentrerà\nsul ritrovamento del luogo da dove\nsbucano i <color yellow<cuori>coloroff>!\n\n<pause 30>Vuoi che consultiamo i testi antichi\nsull'argomento?\n[1-]Sì[2]No")
          		goto flw_61
          	  case 1:
/*< 65>*/ 		printf(/* textboxtype: 76, unk: 1, line: 28 */ "<0x10009:0x00161e07>... Il <color red<simbolo rosso della vita>coloroff>...<pause 30>\nÈ ciò che deve disegnare colui che cerca\nla fonte della vita.\n\nIn tal modo la fonte della vita gronderà\ncome pioggia.")
/*<106>*/ 		printf(/* textboxtype: 0, unk: 76, line: 32 */ "<0x10009:0x00181700>Questo dicono i testi antichi!\nPer tutte le ametiste...\nTu ci capisci qualcosa?")
          		goto flw_136
          	}
          }

          void entrypoint_503_56() {
/*<347>*/ 	start()
/*<348>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<547>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<349>*/ 			printf(/* textboxtype: 76, unk: 1, line: 73 */ "<0x10009:0x001b1053>Di nuovo?! <pause 30>Per tutti i lapislazzuli,\nma che succede?!\n\n\n<0x10009:0x00251600>Non importa! Accada quel che accada,\ndevo proseguire le mie ricerche!")
          			flw_550:
/*<550>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<549>*/ 				entrypoint_503_66();
          			  case 1:
/*<551>*/ 				printf(/* textboxtype: 0, unk: 76, line: 80 */ "<0x10009:0x00130b04>... Effettivamente...\nAnche qui è pieno di <color blue<lepidee>coloroff>!\n\n\n<0x10009:0x00161e0b>Purtroppo sono del tutto\nprivo di sensibilità musicale...\nNon sono assolutamente in grado\ndi eseguire una dolce melodia!")
          			}
          		  case 1:
/*<548>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00131953>Di nuovo?! <pause 30>Per tutti i lapislazzuli,\nma che succede?!\n\n\n<0x10009:0x00161e00>Non importa! Accada quel che accada,\ndevo proseguire le mie ricerche!")
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

