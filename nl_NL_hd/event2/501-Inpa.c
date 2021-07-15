          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf("\x0E\x01\x09\x04\x00\x04Yo, Link! Heb je dat spoor\ngezien dat ik buiten heb aangelegd?\n\n\n\x0E\x01\x09\x04\x00\xB00Waar het voor is? Ha! Daar kom je gauw\ngenoeg achter!")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          		  case 1:
          			flw_347:
/*<347>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 453, 'param3': 32}
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf("Wat een machtige boom, hè? Dat ding\nwordt niet voor niets een levensboom\ngenoemd!")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf("Wat een kale bedoening hier. Opoe had in\nde tijd dat ze hier woont best wat leuke\nmeubels kunnen regelen.\n\nZe houdt blijkbaar van deze rotsachtige,\nminimalistische inrichting, maar ik denk\ndat het hier met wat bomen een stuk\nlevendiger zou zijn.")
          				  case 1:
/*<458>*/ 					printf("We kunnen opoe hier moeilijk alleen\nachterlaten...\n\n\n\x0E\x01\x09\x04\x00\xA00Maar waag het niet om Kol en Struiz te\nvertellen dat ik op een oud vrouwtje zit te\npassen!")
          				}
          			}
          		}
          	  case 1:
/*<383>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          			  case 0:
          				goto flw_347
          			  case 1:
/*<385>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
          					flw_384:
/*<384>*/ 					switch (scene_flags[37 /* 0x5 20 */]) {
          					  case 0:
/*<388>*/ 						set_camera(64, 0)
/*<390>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					  case 1:
/*<387>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					}
          				  case 1:
          					goto flw_347
          				}
          			}
          		  case 1:
          			goto flw_384
          		}
          	}
          }

          void entrypoint_501_08() {
/*<170>*/ 	start()
/*<171>*/ 	switch (scene_flags[81 /* 0xB 02 */]) {
          	  case 0:
/*<175>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 174, 'param3': 32}
/*<174>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': -1, 'next': 176, 'param3': 16}
/*<176>*/ 		set_camera(21, 0)
/*<172>*/ 		printf("\x0E\x01\x09\x04\xE00\n\x0E\x03\x01\x00Link, mis je <r<hemelstraal>> niet!\n\n\n\nWanneer dat gebeurt, kan dat het\nontwaken van het monster versnellen.\n\n\nWe houden ons later met de poort bezig.\nNu moet je je richten op <r<het herstellen van\nhet zegel >>dat het monster gevangen houdt.")
/*<173>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<332>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 153, 'param3': 32}
/*<153>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 155, 'param3': 32}
/*<155>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<459>*/ 		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<460>*/ 		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<477>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1010, 'next': 156, 'param3': 24}
/*<156>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 157, 'param3': 6}
/*<157>*/ 		set_camera(20, 0)
/*<158>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1034, 'param2': 12800, 'next': 159, 'param3': 13}
/*<159>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': -256, 'next': 275, 'param3': 13}
/*<275>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 160, 'param3': 50}
/*<160>*/ 		printf("\x0E\x01\x09\x04\x40A\x321F\x0E\x01\x08\x02\x1CDWO-OOOH!\x0E\x01\x05\x04\x1E\x00")
/*<288>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': -256, 'next': 287, 'param3': 13}
/*<287>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 284, 'param3': 50}
/*<284>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 161, 'param3': 6}
/*<161>*/ 		set_camera(21, 0)
/*<162>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 285, 'param3': 15}
/*<285>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 286, 'param3': 6}
/*<286>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 293, 'param3': 6}
/*<293>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1085, 'param2': 12800, 'next': 292, 'param3': 13}
/*<292>*/ 		{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 0, 'next': 163, 'param3': 40}
/*<163>*/ 		printf("\x0E\x01\x09\x04\xE00\nNee... Ik vrees dat <r<het zegel het weer heeft\nbegeven>>. Dat <r<verschrikkelijke beest>>\nontwaakt!\n\nHet monster reageert waarschijnlijk op de\nheilige macht van je zwaard.\n\n\n\x0E\x01\x09\x04\xE01\xB00Ik wou dat het niet zo was, maar er was\ngeen andere manier om de poort te\nopenen...")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf("\x0E\x01\x09\x04\xE10\x1600\x0E\x03\x01\x00Link, je moet het beest\nopnieuw opsluiten.")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf("\x0E\x01\x09\x04\x400\x30DOké! Tijd om te vechten!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf("\x0E\x01\x09\x04\x40F\x2F0FNu kan ik eindelijk mijn nieuwe speeltje\ntesten! Wacht maar, die gehaktbal met\ntanden maakt geen schijn van kans.\n\n\x0E\x01\x09\x04\x40B\x3101Nou? Waar wachten we nog op?\nIk ga erheen!")
/*<291>*/ 		set_camera(22, 0)
/*<294>*/ 		{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 516, 'next': 295, 'param3': 14}
/*<295>*/ 		set_camera(51, 0)
/*<296>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 179, 'param3': 6}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 466, 'param3': 24}
/*<466>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 177, 'param3': 6}
/*<177>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<169>*/ 		scene_flags[10 'Sealed Grounds'][81 /* 0xB 02 */] = true;
/*<451>*/ 		story_flags[795 /* us: 805A9B2F 0x08, jp: 805ACDAF 0x08 */] = false;
/*<178>*/ 		story_flags[144 /* us: 805A9AEE 0x04, jp: 805ACD6E 0x04 */] = true;
/*<468>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<168>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_501_25() {
/*<346>*/ 	start()
/*<381>*/ 	set_camera(63, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 372, 'param3': 32}
/*<372>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<380>*/ 		printf("\x0E\x01\x06\x02\xFFCDDie roodharige kerel is best behulpzaam.\n\n\n\nEen aantal delen van de tempel moeten\nnodig worden opgeknapt. Misschien kan\nhij me daarbij helpen...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf("\x0E\x01\x06\x02\xFFCDDeze tempel was altijd een plaats van rust.\nDat lijkt voorlopig voorbij.\n\n\nMaar het heeft geen zin om daar bij stil\nte staan, nu mijn ergste angsten zijn\nuitgekomen...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf("\x0E\x01\x06\x02\xFFCDIk hoop dat je Zelda zult zien...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf("\x0E\x01\x06\x02\xFFCDIk hoop dat je Zelda zult zien...")
          				  case 1:
/*<376>*/ 					printf("\x0E\x01\x06\x02\xFECD.<pause0A>.<pause0A>.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_501_09() {
/*<  4>*/ 	start()
/*<216>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<474>*/ 		switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x05Zoek je de drie draken? Ik meen me te\nherinneren dat er ergens in de woestijn een\ndraak leeft...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf("\x0E\x01\x09\x04\x00\n\x0E\x03\x01\x00Link, werk samen met\nGanderd om dat monster weer op te\nsluiten!")
          				  case 1:
/*<481>*/ 					printf("\x0E\x01\x09\x04\x00\nDat verschrikkelijke <r<monster >>begint zich\nweer te roeren! Hoewel Zelda haar kracht\nverleent, zal het zegel het toch gauw\nbegeven. Het zij zo.\nJij en Ganderd moeten samen zorgen dat\ndat beest weer wordt opgesloten.")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf("\x0E\x01\x09\x04\x00\x05Zoek je de draken? Omdat ze je het\nHeldenlied kunnen leren dat naar de\nTriforce leidt? Ga dan gauw verder met\nzoeken!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf("Aanwijzingen over de Triforce vind je\nwaarschijnlijk op Skyloft.\n\n\n\x0E\x01\x09\x04\xE00\x07Zorg dat je de Triforce vindt,\nLink.")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf("\x0E\x01\x09\x04\xE00\x04Halt, Link! De schokken komen\nniet uit die richting.")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf("Haast je! Ga naar buiten door de poort\ntegenover mij en kijk wat er buiten aan de\nhand is!")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf("Moet je je uitrusting controleren voordat je\nhet ongewisse tegemoet treedt? Goed, maar\nzorg dat je snel terug bent!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_501_27() {
/*<440>*/ 	start()
/*<444>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 476, 'param3': 32}
/*<476>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 446, 'param3': 17}
/*<446>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 447, 'param3': 6}
/*<447>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 441, 'param3': 40}
/*<441>*/ 	set_camera(3, 0)
/*<442>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 448, 'param3': 24}
/*<448>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': -1, 'param3': 6}
          }

          void entrypoint_501_10() {
/*< 59>*/ 	start()
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 60, 'param3': 32}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 405, 'param3': 32}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 404, 'param3': 50}
          	flw_404:
/*<404>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Het lijkt erop dat je het monster wederom\nhebt kunnen verzegelen.")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 401, 'param3': 6}
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 403, 'param3': 6}
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 63, 'param3': 6}
/*< 63>*/ 	printf("Dank je wel, Link.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf("En jij ook bedankt, <b<Ganderd>>.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf("Ik durf me niet in te beelden wat er\ngebeurd zou zijn als jullie tweeën er niet\nwaren.")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x400\x0DAh, u bent te bescheiden, opoetje.\n\n\n\nU heeft me zelf aangemoedigd om niet bij\nde pakken neer te gaan zitten en mijn\nenergie te besteden om mee te helpen.")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf("\x0E\x01\x09\x04\xE08\xB0BHet enige wat ik heb gedaan, is jou helpen\nom je eigen waarde te herkennen.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 74, 'param3': 6}
/*< 74>*/ 	printf("\x0E\x01\x09\x04\xE00\x07\x0E\x03\x01\x00Link, je vraagt je vast af wat\ndat ding was waar je tegen hebt gevochten.\n\n\nKort gezegd is dat wezen de bron van het\nkwaad waarmee we geconfronteerd\nworden. Je zult meer ervaren als je door\nde Poort des Tijds gaat.\n\x0E\x01\x09\x04\xE01\xB00We kunnen het duizenden keren opsluiten,\nmaar met zijn enorme kracht zal het altijd\nuit zijn ketenen barsten.\n\nWe moeten het met wortel en al uitroeien,\nanders ervaren we dit tot in de eeuwigheid.\n\n\n\x0E\x01\x09\x04\xE10\xB00Er is geen tijd te verliezen. Gebruik een\nhemelstraal op de poort.")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x40D\x206Kom op! Laad dat zwaard van je op met\ndie hemelstraal en <g<schiet>> ermee op de\npoort!")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf("Lekker bezig, opoe!")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xE01\x07Juist... Wel, Link, ga je gang.\nStap maar door de poort.")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf("Volgens mijn analyse is deze plek uitermate\ngeschikt om een zaailing te laten groeien.\n\n\nIn deze <r<tijdsperiode>> zal het echter te lang\nduren tot de zaailing is uitgegroeid tot\neen boom met vruchten.")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf("\x0E\x01\x09\x04\x00\x03<b<Ganderd>> wil je helpen om het woud in te\nkomen.\n\n\nEr is mogelijk iets mis met de\n<r<waterdraak van het woud>>. Zoek haar\nzodra je in het woud bent!")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x00\nHet is zover.\n\n\n\nGa op Skyloft op zoek naar de Triforce,\nLink.")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x00\nAls je de laatste beproeving hebt doorstaan,\nzul je eindelijk waardig zijn om de kracht\nvan de Triforce te ontvangen.\n\nGa snel terug naar Skyloft. Zorg dat je\nslaagt, wat je ook te wachten staat tijdens\ndie laatste beproeving!")
          					  case 1:
/*<488>*/ 						printf("\x0E\x01\x09\x04\x00\x14O, Link! Je hebt van de\ndraken de delen van het lied gekregen. De\ntijd dringt nu!\n\nGa snel terug naar de lucht om het\nHeldenlied te voltooien!")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf("\x0E\x01\x09\x04\x00\x03<b<Ganderd >>wacht buiten op je <r<bij zijn\nkatapult>>. Ga maar naar hem toe.")
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\x03Ah, Link, ik ben blij dat je er\nbent. <b<Ganderd>> wacht op je.\n\n\nHij is buiten <r<bij zijn katapult>>.\nGa maar naar hem toe.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf("\x0E\x01\x09\x04\x00\x07Dus daarom stond het woud onderwater?\nIk ben blij om te horen dat alles nu weer\nnormaal is.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x00\x03Trouwens, Link, <b<Ganderd\n>>wacht op je.\n\n\nHij is buiten <r<bij zijn katapult>>.\nGa maar naar hem toe.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\nGa maar snel de andere delen van het\n<r<Heldenlied>> zoeken. De tijd dringt!")
          		  case 1:
/*<221>*/ 			printf("\x0E\x01\x09\x04\x00\x07Dus daarom stond het woud onderwater?\nIk ben blij om te horen dat alles nu weer\nnormaal is.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x0B\x04\x00\x06Goed. Dat heb je snel door.\n\n\n\nDoor naar de volgende les.")
/*<271>*/ 	printf("Concentreer je en speel op het ritme van\nhet groeien en krimpen van de <r<lichtcirkel>>.\n\n\nAls je ritme klopt, zal ik met je meezingen.\n\n\n\nLuister goed, want dit lied komt zeker van\npas tijdens je reis.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf("\x0E\x01\x09\x04\x0D\xF0AAaaah! Naar deze boom kan ik de hele dag\nstaren! Dit is min of meer de mascotte van\ndeze tempel.\n\n\x0E\x01\x09\x04\x03\x200Iedere keer als ik ernaar kijk, zakt mijn\nmond open en voel ik me op een vreemde\nmanier gelukkig vanbinnen.")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf("\x0E\x01\x09\x04\x0D\x22ELeuk om eindelijk een zaailing te hebben,<pause14>\nal duurt het vast <r<eeuwen>> voordat dat een\nboom is!")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf("\x0E\x01\x09\x04\x0D\x204Hé, Link, dat is een flinke\nzaailing. Waarom zei je niet eerder dat je\ndat ding had?\n\n\x0E\x01\x09\x04\x00\xE0EIk ben geen expert, maar volgens mij is\ndie perfect voor deze tempel. De aarde hier\nlijkt me ook uitermate geschikt.\n\n\x0E\x01\x09\x04\x03\x200Het enige jammere is<pause0A> dat zo'n forse\nzaailing eeuwen nodig zal hebben om uit te\ngroeien tot een echte boom.")
          					  case 1:
/*<255>*/ 						printf("\x0E\x01\x09\x04\x00\x02Ik reken erop dat je <b<Zelda >>helpt,\nLink!\n\n\nO, en het lijkt me leuk om hier een <r<boom>> te\nhebben. Mocht je een zaailing tegenkomen,\ndan kan die hier terecht.")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf("\x0E\x01\x09\x04\x0C\x206<b<Zelda>> zit zich vast aan de andere kant van\nde poort af te vragen waar je bent. Laat\ndie meid niet wachten, Link!")
          		}
          	  case 1:
/*<465>*/ 		printf("\x0E\x01\x09\x04\x0C\x20DKom op! Laad dat zwaard van je op met\ndie hemelstraal en <g<schiet>> ermee op de\npoort!\n\n<b<Zelda>> zit zich vast aan de andere kant van\nde poort af te vragen waar je bent. Laat\ndie meid niet wachten, Link!")
          	}
          }

          void entrypoint_501_15() {
/*< 51>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 52, 'param3': 32}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 55, 'param3': 32}
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 53, 'param3': 17}
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 274, 'param3': 17}
/*<274>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 57, 'param3': 50}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 321, 'param3': 13}
/*<321>*/ 	set_camera(54, 0)
/*<322>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 361, 'param3': 6}
/*<361>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1009, 'next': 56, 'param3': 24}
/*< 56>*/ 	printf("\x0E\x01\x09\x04\x400=Wat? Is dat een grapje, opoe?")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 12, 'param3': 6}
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x400\x02U houdt me voor de gek. Waag dat nog\neens te zeggen!")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf("\x0E\x01\x09\x04\xE00\nIk spreek de waarheid. Jij zult haar niet\nredden. De priesteres, jouw <b<Zelda>>, kan\nalleen gered worden door iemand anders.\n\nDat is zijn lot en daarmee zal hij ons allen\nredden. Zo is het bepaald, lang voordat jij\nschreiend ter wereld kwam.")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CDIk heb genoeg gehoord, opoe!\n\n\n\nAls u me beter zou kennen, zou u gelijk\nzien dat als iemand <b<Zelda>> gaat redden, het\nGanderd is!\n\nNatuurlijk doe ik dat! Waarom ben ik hier\nanders? En als ik zogenaamd niet geschikt\nben om held te zijn, wie dan wel?")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 24, 'param3': 6}
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x400\x1EHuh?")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 79, 'param3': 6}
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 21, 'param3': 6}
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x400\x3218O... Ik snap 'm.\n\n\n\n\x0E\x01\x09\x04\x40D\xA00\x0E\x03\x01\x00Link, opoe probeert me wijs te\nmaken dat jij de grote held bent die Zelda\ngaat redden.")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 393, 'param3': 6}
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\x400<Wat een flauwekul! Het enige wat ik tot nu\ntoe heb gehoord is gewauwel over het lot!\n\n\n\x0E\x01\x09\x04\x40B\xA00Ik ken jou, scharminkel, en jij bent\nduidelijk geen held!")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x4008\x0E\x01\x08\x02\x1CDWaaaaah!\x0E\x01\x05\x04-\x00")
/*< 39>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 462, 'param3': 6}
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 281, 'param3': 6}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 40, 'param3': 6}
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Dag, Link. Is het je gelukt om\n<b<Zelda>> te bereiken?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF05Ah, dus er was iemand bij haar die haar\nbeschermt?\n\n\nDie dame heet <b<Impa>>. Ze is door de <b<godin\n>>gezonden om Zelda bij te staan tijdens\nhaar opdracht.")
/*< 50>*/ 	printf("Die twee zijn samen ergens naartoe gereisd\nom de grote opdracht te vervullen die het\nlot hun heeft toebedeeld.\n\nNu Impa echter de poort heeft vernietigd\nwaardoor ze zijn gestapt, is er nog maar\néén manier om ze te achterhalen.")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF00Daarvoor moet je de <b<harp >>gebruiken die\nZelda je heeft gegeven.")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Zeg, Link, heb je al\ngeprobeerd om op de harp te spelen die je\nhebt gekregen?\n\nIets zegt me dat je er nog niet helemaal\nmee bekend bent.\n\n\nIn dat geval zal ik je leren wat je moet\ndoen.\n\n\nEerst druk je op \x0E\x02\x04\x02\x1ECD om je harp te pakken.\x0E\x01\x11\x02\x10CD")
/*< 48>*/ 	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 45, 'param3': 42}
/*< 45>*/ 	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
/*<489>*/ 	temp_flags[40 /* 0x4 01 */] = true;
          }

          void entrypoint_501_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 68, 'param3': 32}
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 298, 'param3': 32}
/*<298>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 404, 'param3': 50}
          	goto flw_404
          }

          void entrypoint_501_17() {
/*<144>*/ 	start()
          	flw_134:
/*<134>*/ 	printf("\x0E\x01\x09\x04\x10\x160FAh, je zwaard! Er is geen twijfel over\nmogelijk!\n\n\n\x0E\x01\x09\x04\x00\xB00De vlammen hebben je zwaard gestaald.\nGoed gedaan, Link. Dat\nzwaard bevat nu een enorme kracht.")
/*<135>*/ 	printf("\x0E\x01\x09\x04\x01\xFF07Het is een heilige <r<macht>>.\n\n\n\n\x0E\x01\x09\x04\x00\xB00Een macht die door de oude goden is\nachtergelaten, en dezelfde macht die\ngenoemd wordt in de Ballade van de\nGodin.\nIk zie die kracht nu in jou vloeien. In jou\nen het zwaard dat je draagt.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf("\x0E\x01\x09\x04\x00\x1603Kom, Link. Je moet nu de\nPoort des Tijds openen.")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 398, 'param3': 6}
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf("Nu je zwaard de heilige <r<macht >>bevat, kun\nje de Poort des Tijds vast openen met een\n<r<hemelstraal>>.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf("Stap op het podium en <g<toon de poort de\nkracht van je zwaard>>!")
/*<142>*/ 	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
/*<370>*/ 	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<139>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_18() {
/*< 81>*/ 	start()
/*< 82>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 310, 'param3': 32}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 437, 'param3': 50}
/*<437>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 428, 'param3': 6}
/*<428>*/ 	set_camera(2, 0)
/*< 85>*/ 	printf("\x0E\x01\x09\x04\xE01\x103Je bent terug.")
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 429, 'param3': 17}
/*<429>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 430, 'param3': 47}
/*<430>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 356, 'next': 431, 'param3': 15}
/*<431>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 432, 'param3': 6}
/*<432>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 433, 'param3': 17}
/*<433>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 435, 'param3': 17}
/*<435>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 434, 'param3': 6}
/*<434>*/ 	set_camera(32, 0)
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 86, 'param3': 48}
/*< 86>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 461, 'param3': 6}
/*<461>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1015, 'next': 87, 'param3': 24}
/*< 87>*/ 	printf("Dan weet je nu hoe het allemaal zit.")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf("Achter die deuren wacht <b<Zelda>>, diep in een\neindeloze slaap. Vrees niet, ze is nog gezond\nen wel.")
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 313, 'param3': 6}
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf("Alleen de legendarische Triforce is machtig\ngenoeg om Fatalot te verslaan. De godin\nschijnt die op Skyloft verborgen te\nhebben.\n\x0E\x01\x09\x04\xE01\xB00Helaas is dat het enige wat we weten. <pause0F>Alle\nandere informatie over zijn locatie is door\nde eeuwen heen verloren gegaan.")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf("\x0E\x01\x09\x04\xE14\xB00\x0E\x03\x01\x00Link, je weet vast al wat je te\ndoen staat, maar ik vertel het je toch.\n\n\nOm aanwijzingen te vinden over de\nTriforce moet je op <b<Skyloft >>zijn.")
/*<315>*/ 	printf("\x0E\x01\x09\x04\xE08\xB07Zorg dat je de Triforce vindt,\nLink.")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf("\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CDHo! Wacht even!")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x403\xFF00\x0E\x03\x01\x00Link, er is iets wat ik je moet\nzeggen.")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 89, 'param3': 6}
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 88, 'param3': 6}
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x403\xFF02Dus, Zelda... Hoe gaat het met haar? Was\nze in orde toen je haar zag?\n\n\n[1]Ja, alles prima![2]Nou, eigenlijk...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("Ja? Dat is fijn om te horen.\n\n\n\n\x0E\x01\x09\x04\x403\x200Maar... ze zit daar nog steeds vast tot dit\nallemaal voorbij is, toch?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x40E\xD09\x0E\x03\x01\x00Link, ik heb ervoor gekozen\nom niet terug te gaan.\n\n\n\x0E\x01\x09\x04\x400\x200Ik blijf hier bij opoe.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x400\xFF0DAh, wees niet teleurgesteld. Ik ben toch ook\nniet treurig? Dit is wat ik wil!\n\n\n\x0E\x01\x09\x04\x400\x200Ik kan het niet uitleggen, maar diep\nvanbinnen voel ik dat ik hier nodig ben.\n\n\nIemand moet op dat lelijke monster passen,\x0E\x01\x09\x04\x400\x211\nen opoe kan vast ook wel wat gezelschap\ngebruiken.\n\nHet is misschien niet altijd zo spannend als\nwat jij gaat doen, maar misschien is dit\nmijn lot. Snap je wat ik bedoel?")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x403\xD08En zo slecht is het hier niet. Tussen de\nwolken leven was cool, maar al die geuren\nhier! Ja, dat meen ik oprecht!")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf("\x0E\x01\x09\x04\x40D\x209Kijk toch eens.")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf("\x0E\x01\x09\x04\x404\x208Zelda en opoe hebben deze grond weer\nvruchtbaar gemaakt.\n\n\nIk wed dat zelfs de zwakste <r<zaailing>> in\ndeze aarde uitgroeit tot een beest van een\nboom! Dat zou de boel hier ook een\nbeetje opvrolijken.\n\x0E\x01\x09\x04\x40D\x211Oké, het zal wel een paar jaartjes duren,\nmaar dat geeft niks. Ik heb toch zeeën van\ntijd.\n\n\x0E\x01\x09\x04\x400\x12Het is raar om dat zo te zeggen, maar zo\nvoel ik me wel.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf("\x0E\x01\x09\x04\x40D\x22EDus, ja... Laat de mensen op Skyloft maar\nweten dat ik het hierbeneden naar mijn zin\nheb.\n\n\x0E\x01\x09\x04\x400\xE00Kol en Struiz zullen het er vast moeilijk\nmee hebben, omdat ik hun idool ben, maar\nzeg ze maar dat ik gelukkig ben.\n\n\x0E\x01\x09\x04\x400\x209Bedankt, Link.")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x400\x1400Wat ellendig! Die arme meid zal het vast\nzwaar hebben.\n\n\n\x0E\x01\x09\x04\x403\x200Maar jij gaat de boel oplossen, toch?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x00\nWe zullen later meer tijd hebben om te\npraten. Ga nu!")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x03Je hebt ongetwijfeld buiten de tempel een\nspiraalvormige put gezien. Onder in die\nput slaapt iets wat al eeuwenlang\ngevangen zit.\nMaak je geen zorgen om wat dat is. Daar\nzul je achter komen als de tijd rijp is.")
          		}
          	  case 1:
/*<  2>*/ 		printf("\x0E\x01\x09\x04\x00\x1303De poort die uitleidt op het Faron-\nwoud, is nu open. Ga door die uitgang\nnaar buiten en betreed het woud.\n\nAlle vragen die je nu hebt, zullen met de\ntijd worden beantwoord. Ik wens je veel\nmoed toe, Link.")
          	}
          }

          void entrypoint_501_19() {
/*<210>*/ 	start()
/*<326>*/ 	set_camera(55, 0)
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 6}
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 1, 'next': 327, 'param3': 40}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 328, 'param3': 14}
/*<328>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 329, 'param3': 6}
/*<329>*/ 	set_camera(59, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 335, 'param3': 6}
/*<335>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDAh...<pause0F> De reiziger is neer komen dalen uit de\nwolken. Wees welkom, kind van het lot.")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 340, 'param3': 6}
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 337, 'param3': 6}
/*<337>*/ 	printf("\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECDVertel mij, wat is je naam?\n\n\n\n<pause28>\x0E\x03\x01\x00Link? Ah, Link.\nMooi. Heel mooi.\n\n\nIk voel dat je al controle hebt over de\nhemelse kracht die zich in je zwaard\nverzamelt als je het <g<ten hemel heft>>.\n\nJe beheersing van de <pling><r<hemelstraal>> bewijst\n\x0E\x01\x09\x04\x00\x0Bdat je uitverkoren bent om het <b<godinnen-\nzwaard>> te hanteren.\n\n\x0E\x01\x06\x02\xFFCDIk heb hier jaren op je komst zitten\nwachten om je nu eindelijk als gids bij\nte kunnen staan.")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf("Je bevindt je in de Verzegelde Tempel,\neen gebouw dat de godin zelf een\neeuwigheid geleden heeft gebouwd.\n\nJe komst is al vele jaren geleden door het\nlot bepaald.\n\n\nDe priesteres die je zoekt, is hier kort voor\njou aangekomen in een regen van licht.\n\n\nEr is geen twijfel over mogelijk. Het\nuurwerk van het lot is in beweging\ngebracht.")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 185, 'param3': 6}
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00\nMaar nog niet alles is zoals het hoort te\nzijn. Dit was niet de manier waarop de\npriesteres dit land diende te bereiken.\n\nIk voel een kwade kracht die zich in de\nschaduwen ophoudt. Die kracht probeert\njullie lot te verbuigen.")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF08\x0E\x03\x01\x00Link...<pause1E> Je maakt je zorgen\nwaar de priesteres nu is en of ze in orde is,\nnietwaar?\n\nDat is begrijpelijk, maar wees niet\nteleurgesteld als je haar niet meteen vindt.\nZe heeft haar eigen lot, net als jij.\n\nZe is het <b<Faron-woud >>ingegaan om haar\neigen lot te ontdekken en daarbij zul je\nhaar moeten volgen.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF00Laat mij je kaart eens zien.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 363, 'param3': 6}
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf("Waar een \x0E\x02\x04\x02\x19CD staat, loopt een pad dat je het\n<b<Faron-woud>> in zal leiden.\n\n\nJe zult je op onbekend terrein begeven. Met\nalleen je kaart, red je het niet tussen de\nmonsters die zich daar hebben gevestigd.\n\nDaarom zal ik je de kracht geven om\n<r<bakens>> te plaatsen.\n\n\nAls je een baken plaatst op je kaart, zal op\ndie locatie een lichtzuil verschijnen die je\nvan ver de weg zal wijzen.\n\nRicht op \x0E\x02\x04\x02\x19CD en druk op (A) om een baken\nte plaatsen.\x0E\x01\x11\x02Í")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hoewel je het van hieruit niet kunt zien,\nis er buiten een baken om je de weg te\nwijzen.\n\nAls je een baken niet langer nodig hebt,\nkun je het verwijderen met (A)\x0E\x01\x11\x02Í.\n\n\nAls je deze bakens goed gebruikt, hoef je je\nnooit zorgen te maken dat je ergens\nverdwaald raakt.")
/*<194>*/ 		printf("\x0E\x01\x09\x04\x0E\xFF03Je moet nu gaan. Betreed het Faron-woud\nen volg de priesteres... die jij kent als\n<b<Zelda>>.\n\nVoordat je gaat, mag je de inhoud van de\n<r<schatkist>> in deze ruimte meenemen. Dat zal\nzeker van pas komen tijdens je reis.")
/*<195>*/ 		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
/*<198>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 6}
/*<196>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 197, 'param3': 32}
/*<197>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 199, 'param3': 17}
/*<199>*/ 		set_camera(40, 0)
/*<358>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 279, 'param3': 13}
/*<279>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 200, 'param3': 17}
/*<200>*/ 		make_actor_do_something(0, 0)
/*<201>*/ 		set_camera(41, 0)
/*<202>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 203, 'param3': 6}
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 205, 'param3': 24}
/*<205>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 204, 'param3': 6}
/*<204>*/ 		set_camera(42, 0)
/*<206>*/ 		printf("Je bent er klaar voor. Ga door de poort\nvoor je naar buiten en betreed het woud.\nIk wens je een voorspoedige reis.")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 278, 'param3': 6}
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x1303Alle vragen die je nu hebt, zullen met\nde tijd worden beantwoord. Ik wens je veel\nmoed toe, Link.")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf("\x0E\x01\x09\x04\x00\x06Je hebt nog geen baken geplaatst bij \x0E\x02\x04\x02\x19CD.\n\n\n\nDruk op (A) als je een baken weer wilt\nverwijderen.\x0E\x01\x11\x02Í\n\n\nOm een baken preciezer te plaatsen kun je\ninzoomen met \x0E\x02\x04\x02\x38CD voordat je het plaatst.")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 367, 'param3': 6}
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf("Vervolg je reis. Richt op \x0E\x02\x04\x02\x19CD en druk op \x0E\x02\x04\x02\x1BCD\nom op die locatie een baken te plaatsen.\x0E\x01\x11\x02Í")
/*<366>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          		goto flw_191
          	}
          }

          void entrypoint_501_02() {
/*<  5>*/ 	start()
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 6, 'param3': 32}
/*<  6>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 9, 'param3': 32}
/*<  9>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 7, 'param3': 17}
/*<  7>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 273, 'param3': 17}
/*<273>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 34, 'param3': 50}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 360, 'param3': 13}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1008, 'next': 10, 'param3': 24}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x400=Wat? Is dat een grapje, opoe?")
/*<392>*/ 	set_camera(17, 0)
/*< 11>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 27, 'param3': 17}
          	goto flw_27
          }

          void entrypoint_501_20() {
/*<112>*/ 	start()
/*<114>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 113, 'param3': 32}
/*<113>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 115, 'param3': 32}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 413, 'param3': 50}
          	flw_413:
/*<413>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Dat is al de derde keer dat jullie dat\nmonster verslagen hebben.")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 416, 'param3': 6}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 418, 'param3': 6}
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 412, 'param3': 6}
/*<412>*/ 	printf("\x0E\x03\x01\x00Link, Ganderd...\nJullie hebben allebei hard gewerkt.\n\n\nMaar dit is maar een tijdelijke\noverwinning. Ik vrees dat het monster\nsteeds makkelijker weet los te breken.\n\nDe tijd dringt, Link. Denk je\ndat je de Triforce snel zult vinden?\n[1]Ja![2]Nou...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf("<pause19>Aha... Je moet de drie draken vinden en\nhet Heldenlied leren dat naar de Triforce\nleidt.\n\nDan ben je alvast op de goede weg om de\ndraak in het <b<Faron-woud>> te bezoeken.\n\n\n\x0E\x01\x09\x04\xE00\nHelaas is er iets eigenaardigs aan de hand\nin het woud...\n\n\n\x0E\x01\x09\x04\xE01\xB00Ik weet niet hoe het komt, maar het pad\nnaar het woud is helemaal onder water\ngelopen.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf("Om het land hier te beschermen heb ik de\n<r<poort bij het woud >>gesloten en het water\nmet een simpele spreuk teruggedreven.\n\nDie spreuk houdt alleen stand zolang de\npoort dicht blijft, dus je kunt daar niet\nheen zonder alles weer onder te laten\nlopen.\nIk ben bang dat er geen manier is om op\nhet moment in het woud te geraken.")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf("\x0E\x01\x09\x04\x400\x0DWat? Dat is een peulenschilletje!\nIk heb precies de juiste oplossing!\n\n\nIk heb een nieuwe manier verzonnen om de\n<r<kampioenkatapult >>te gebruiken!\n\n\nStap er maar in, dan geef ik je een ritje\nnaar het woud. Goed?")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf("\x0E\x01\x09\x04\x40C\x202Ik zal hem gelijk gereedmaken. Kom maar\nnaar me toe als je klaar bent voor je vlucht.")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf("\x0E\x01\x09\x04\xE00\x0BHmmm...\n\n\n\nDie jongen werkt hard, maar hij kan de\nmensen die hij 'helpt', nog weleens\nproblemen bezorgen...")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf("\x0E\x01\x09\x04\xE08\xFF00Goede reis! En een zachte\nlanding gewenst, Link.")
/*<423>*/ 	set_camera(1, 0)
/*<324>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_03() {
/*<264>*/ 	start()
/*<267>*/ 	give_item(186 0xBA);
/*<268>*/ 	story_flags[343 /* us: 805A9AFE 0x20, jp: 805ACD7E 0x20 */] = true;
/*<348>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_501_21() {
/*<120>*/ 	start()
/*<122>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 121, 'param3': 32}
/*<121>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 123, 'param3': 32}
/*<123>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 413, 'param3': 50}
          	goto flw_413
          }

          void entrypoint_501_22() {
/*<240>*/ 	start()
/*<245>*/ 	switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          	  case 0:
/*<246>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<470>*/ 			switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          			  case 0:
/*<473>*/ 				switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          				  case 0:
/*<471>*/ 					printf("\x0E\x01\x09\x04\x00\nIk weet niet wat ik je verder kan zeggen,\nLink. Alle hoop van dit land\nrust op jouw schouders.\n\nHet gevaar dat je loopt, is enorm, maar je\nmoet door blijven zetten om onze wereld\nte redden!")
          				  case 1:
/*<472>*/ 					printf("\x0E\x01\x09\x04\x00\x14Ganderd is zojuist door de voordeuren\nnaar buiten gegaan!\n\n\nIk vermoed dat hij zoals gewoonlijk bij zijn\n<r<katapult >>is.")
          				}
          			  case 1:
/*<249>*/ 				printf("\x0E\x01\x09\x04\x00\nIk weet niet wat ik je verder kan zeggen,\nLink. Alle hoop van dit land\nrust op jouw schouders.\n\nHet gevaar dat je loopt, is enorm, maar je\nmoet door blijven zetten om onze wereld\nte redden!")
          			}
          		  case 1:
/*<247>*/ 			printf("\x0E\x01\x09\x04\x00\x09Nee! Fatalot is al herboren... Als we hem\nniet tegenhouden, zal de wereld ten onder\ngaan!")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf("\x0E\x01\x09\x04\x00\nIk weet niet wat ik je verder kan zeggen,\nLink. Alle hoop van dit land\nrust op jouw schouders.\n\nHet gevaar dat je loopt, is enorm, maar je\nmoet door blijven zetten om onze wereld\nte redden!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x0D\x0E\x03\x01\x00Link, luister goed! Je moet\nkoste wat kost zorgen dat Fatalot niet in\nhet verleden herboren wordt!\n\nHaast je! Open de Poort des Tijds en keer\nterug naar het verleden!")
          		  case 1:
/*<241>*/ 			printf("\x0E\x01\x09\x04\x00\x09Het is nauwelijks te bevatten wat <b<Zelda>> is\noverkomen!\n\n\n\x0E\x03\x01\x00Link, luister goed! Je moet\nkoste wat kost zorgen dat Fatalot niet in\nhet verleden herboren wordt!\n\nHaast je! Open de Poort des Tijds en keer\nterug naar het verleden!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf("De '<b<Ballade van de Godin>>'. Mijn hypothese\nis dat dit hetzelfde lied is als de melodie\ndie Zelda zong op de dag van de\nVleugelceremonie.\nIk acht het 85% zeker dat iemand\nvan de ridderacademie meer informatie\nkan geven over dat lied.")
/*<486>*/ 	story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          }

          void entrypoint_501_06() {
/*<148>*/ 	start()
/*<146>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<149>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*<150>*/ 				switch (scene_flags[81 /* 0xB 02 */]) {
          				  case 0:
/*<151>*/ 					switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          					  case 0:
/*<213>*/ 						switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          						  case 0:
/*<214>*/ 							printf("\x0E\x01\x09\x04\x10\x1606\x0E\x03\x01\x00Link, wat doe je? Heb je\nZelda ontmoet aan de andere kant van de\npoort?\n\n\x0E\x01\x09\x04\x14\xB00Zo niet, dan moet je snel teruggaan!")
          						  case 1:
/*<152>*/ 							printf("\x0E\x01\x09\x04\x10\x03\x0E\x03\x01\x00Link, het is zover! Open de\nPoort des Tijds en reis erdoor naar de\nandere zijde.")
          						}
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\nHet beest is uit zijn sluimeringen\nontwaakt.\n\n\n\x0E\x03\x01\x00Link, je moet het opnieuw\nopsluiten!")
          					}
          				  case 1:
/*<143>*/ 					printf("\x0E\x01\x09\x04\x00\x07Nu de heilige macht zich in je zwaard\nbevindt, moet je de Poort des Tijds openen\nmet een <r<hemelstraal>>.\n\nStap op het podium en <g<toon de poort de\nkracht van je zwaard>>!")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf("\x0E\x01\x09\x04\x00\nHet zegel blijft niet voor eeuwig in stand.\nVroeg of laat zal dat enorme beest opnieuw\nuit zijn ketenen ontsnappen.\n\nGelukkig is Ganderd bezig met\nvoorbereidingen voor de volgende aanval.\n\n\n\x0E\x03\x01\x00Link, jouw reis leidt verder.\nZorg dat je de drie vlammen in je zwaard\nopneemt.")
          		}
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\x00\x03Alleen als je de drie heilige vlammen in je\nzwaard weet op te nemen zal de Poort des\nTijds zich voor je openen.\n\nJe vindt een aanwijzing die naar de\nvlammen leidt in het lied van je volk dat de\n<r<Ballade van de Godin>> heet. Zoek het op\nSkyloft!")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf("\x0E\x01\x09\x04\x00\x00Ga achter die engerd aan,\nLink! <b<Zelda>> rekent op je!")
          }

