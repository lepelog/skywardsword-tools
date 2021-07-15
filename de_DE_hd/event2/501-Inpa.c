          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf("\x0E\x01\x09\x04\x00\x04Ah, Link!\nHast du die Schienen draußen schon gesehen?\n\n\n\x0E\x01\x09\x04\x00\xB00Wofür die gut sind?\nHehehe...\nDas wird eine Überraschung!")
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
/*<454>*/ 				printf("Was für ein Baum!\nMan nennt ihn nicht umsonst \x201ELebensbaum\x201C!")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf("Hier ist überhaupt nichts, oder? Alles ist so\nleer... Und das Mütterchen lebt hier schon,\nwer weiß wie lang...\n\nWarum hat sie nicht wenigstens einen\nBaum gepflanzt?")
          				  case 1:
/*<458>*/ 					printf("Irgendwie kann ich nicht anders, als\nmich um das Mütterchen zu sorgen.\n\n\n\x0E\x01\x09\x04\x00\xA00Aber erzähl meinen Kumpels ja nicht,\ndass ich mich um sie kümmere!")
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
/*<172>*/ 		printf("\x0E\x01\x09\x04\xE00\nWarte, Link!\nDu darfst den <r<Himmelsstrahl >>jetzt\nnicht verwenden!\n\nEr wird sonst noch schneller erwachen!\n\n\n\nDu musst <r<ihn zuerst bannen>>!\nLos!")
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
/*<160>*/ 		printf("\x0E\x01\x09\x04\x40A\x321F\x0E\x01\x08\x02\x1CDAaaaaaaaah!\x0E\x01\x05\x04\x1E\x00")
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
/*<163>*/ 		printf("\x0E\x01\x09\x04\xE00\nBei der Göttin...\n<r<Das Siegel wurde erneut gebrochen>>...\n\n\n<r<Er >>ist wieder erwacht.\n\n\n\nVielleicht eine Reaktion auf die <r<heilige Kraft>>,\ndie von deinem Schwert ausging.\n\n\n\x0E\x01\x09\x04\xE01\xB00Aber wir müssen das Schwert einsetzen,\num das Zeitportal zu öffnen. Wir haben\nkeine andere Wahl.")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf("\x0E\x01\x09\x04\xE10\x1600\x0E\x03\x01\x00Link...\nDu musst diese Bestie ein weiteres\nMal bannen!")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf("\x0E\x01\x09\x04\x400\x30DHaha! Endlich!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf("\x0E\x01\x09\x04\x40F\x2F0FEndlich kann ich es ausprobieren!\n\n\n\nDagegen kann dieses Vieh nicht anstinken, ha!\n\n\n\n\x0E\x01\x09\x04\x40B\x3101Quatscht ihr ruhig noch ein bisschen, ich geh\nschon mal vor!")
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
/*<380>*/ 		printf("\x0E\x01\x06\x02\xFFCDDieser Junge...\nEr ist gar nicht mal so ungeschickt.\n\n\nVielleicht sollte ich ihn bitten, den Tempel\nzu reparieren.")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf("\x0E\x01\x06\x02\xFFCDDieser Tempel war früher ein Ort der Ruhe.\nUnd jetzt hat sich alles zum Schlimmsten\ngewendet.\n\nAch, ich sollte nicht so reden...\n\n\n\nAber meine schrecklichsten Befürchtungen\nwerden vor meinen Augen wahr...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf("\x0E\x01\x06\x02\xFFCDIch hoffe, er kann Zelda einholen...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf("\x0E\x01\x06\x02\xFFCDIch hoffe, er kann Zelda einholen...")
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
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x05Du suchst die drei Drachen? Ich weiß, dass der\nDonnerdrache in der Wüste gelebt hat...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf("\x0E\x01\x09\x04\x00\n\x0E\x03\x01\x00Link!\nSorge mit <b<Bado>> dafür, dass das Biest wieder\ngebannt wird!")
          				  case 1:
/*<481>*/ 					printf("\x0E\x01\x09\x04\x00\nDas <r<Biest>> regt sich wieder!\nEs droht, <b<Zeldas>> Siegel an seine Grenzen\nzu bringen oder gar zu sprengen!\n\nLos, <b<Link>>!\nSorge mit <b<Bado>> dafür, dass es wieder\ngebannt wird! Beeil dich!")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf("\x0E\x01\x09\x04\x00\x05Du suchst also die drei Drachen...\nUnd wenn du das Heldenlied von ihnen gelernt\nhast, weist es dir den Weg zum Triforce...\n\nPass auf dich auf!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf("Der Schlüssel zum Triforce muss sich\nim <b<Wolkenhort>> verbergen.\n\n\n\x0E\x01\x09\x04\xE00\x07Du solltest dich auf die Suche nach dem\nTriforce machen.")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf("\x0E\x01\x09\x04\xE00\x04Halt, Link!\nDu musst eine Katastrophe verhindern!")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf("Jetzt ist keine Zeit für andere Dinge!\nGeh durch dieses Tor hinaus und sieh\nnach, was dort draußen vorgeht!")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf("Musst du dich noch vorbereiten?\nDann beeil dich!")
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
/*<404>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Du hast ihn wieder in seinem Gefängnis\nversiegelt...")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 401, 'param3': 6}
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 403, 'param3': 6}
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 63, 'param3': 6}
/*< 63>*/ 	printf("\x0E\x03\x01\x00Link...")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf("...Mit <b<Bados >>Hilfe.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf("Ihr beide zusammen...")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x400\x0DHehe, lass gut sein, Mütterchen!\n\n\n\nDu hast mir doch beigebracht, dass selbst ein\nTunichtgut wie ich etwas bewirken kann!")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf("\x0E\x01\x09\x04\xE08\xB0BDas hast ganz allein du selbst geschafft.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 74, 'param3': 6}
/*< 74>*/ 	printf("\x0E\x01\x09\x04\xE00\x07Es ist Zeit, dass wir über dieses\nUngeheuer reden, Link.\n\n\nEs ist die Verkörperung des Bösen.\nWenn du das Zeitportal öffnest, wirst du\ndie Wahrheit erkennen.\n\n\x0E\x01\x09\x04\xE01\xB00Das Biest wird wieder und wieder das\nSiegel brechen, um freizukommen.\n\n\nWir müssen seinen Ursprung zerstören,\nsonst wird es uns immer wieder heimsuchen.\n\n\n\x0E\x01\x09\x04\xE10\xB00Schnell, Link!\nKonzentriere...")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x40D\x206Konzentriere die Force in deinem Schwert und\n<g<richte >>den Himmelsstrahl auf das Zeitportal!")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf("Das meintest du doch, Mütterchen?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xE01\x07Ja...\nGeh jetzt, Link!")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf("Dieser Ort eignet sich sehr gut dafür, etwas zu\npflanzen, aber wenn du erst <r<in dieser Zeit>> pflanzt,\ndürfte es zu lange dauern, bis du Resultate siehst.")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf("\x0E\x01\x09\x04\x00\x03<b<Bado>> bereitet deine Reise in den Wald vor.\n\n\n\nVielleicht ist dem <r<Wasserdrachen des Waldes\n>>etwas passiert... Das solltest du überprüfen,\nLink.")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x00\nEs ist an der Zeit.\n\n\n\nKehre zum Wolkenhort zurück und\nfinde das Triforce, Link!")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x00\nNach der letzten Prüfung giltst du als würdig,\ndas Triforce in deinen Händen zu halten.\n\n\nKehre geschwind zum Wolkenhort zurück und\nstell dich der Prüfung!")
          					  case 1:
/*<488>*/ 						printf("\x0E\x01\x09\x04\x00\x14Ah, Link!\nSehr gut, die drei Drachen haben dich\nihre Stimmen des Liedes gelehrt.\n\nEs bleibt nicht viel Zeit!\nKehre schnell zum Wolkenmeer zurück\nund vervollständige das Heldenlied!")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf("\x0E\x01\x09\x04\x00\x03<b<Bado>> wartet auf dich.\nDu findest ihn sicher <r<bei seinem Katapult>>.")
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\x03Du kommst gerade richtig. Ich muss mit dir\nreden, Link.\n\n\n<b<Bado>> scheint etwas auf dem Herzen zu haben.\n\n\n\nDu findest ihn sicher <r<bei seinem Katapult>>.\nGeh und rede mit ihm.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf("\x0E\x01\x09\x04\x00\x07Was ist im Wald nur geschehen?\nAber das Wichtigste ist, dass alles\nwieder in Ordnung ist.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x00\x03Übrigens, Link...\n<b<Bado>> möchte mit dir reden.\n\n\nDu findest ihn sicher <r<bei seinem Katapult>>.\nGeh und rede mit ihm.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\nFinde schnell die übrigen Stimmen des\n<r<Heldenlieds>>. Die Zeit läuft uns davon!")
          		  case 1:
/*<221>*/ 			printf("\x0E\x01\x09\x04\x00\x07Was ist im Wald nur geschehen?\nAber das Wichtigste ist, dass alles\nwieder in Ordnung ist.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x0B\x04\x00\x06Sehr schön gespielt!\n\n\n\nMachen wir weiter!")
/*<271>*/ 	printf("Versuche jetzt, im selben Rhythmus\nwie der <r<Lichtkreis >>zu spielen.\n\n\nIch singe zu deiner Musik ein Lied.\n\n\n\nDieses Lied wird dir auf deiner Reise\nnützlich sein.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf("\x0E\x01\x09\x04\x0D\xF0AJa! Was für ein fantastischer Baum!\nEr passt perfekt zu diesem Tempel!\n\n\n\x0E\x01\x09\x04\x03\x200Wenn ich ihn ansehe, fühle ich mich\nquicklebendig!")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf("\x0E\x01\x09\x04\x0D\x22ESchön, dass du diesen Keimling gepflanzt hast...\n<pause14>Aber es wird <r<eine Ewigkeit dauern>>, bis er zu\neinem richtigen Baum heranwächst.")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf("\x0E\x01\x09\x04\x0D\x204Hey! \x0E\x03\x01\x00Link!\nWie hast du denn so einen Keimling gefunden?\n\n\n\x0E\x01\x09\x04\x00\xE0EAus dem wird hier mal ein riesiger\nBaum wachsen.\n\n\n\x0E\x01\x09\x04\x03\x200Aber...<pause0A>\nEs dauert doch ziemlich lange, bis so\nein Baum richtig gewachsen ist, oder?")
          					  case 1:
/*<255>*/ 						printf("\x0E\x01\x09\x04\x00\x02<b<Zeldas>> Schicksal liegt in deinen Händen,\nLink!\n\n\nAch ja, da fällt mir ein...\nIch will hier einen riesigen Baum <r<pflanzen>>...\nHast du vielleicht Samen oder so etwas?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf("\x0E\x01\x09\x04\x0C\x206Auf der anderen Seite des Portals wartet <b<Zelda\n>>auf dich!\n\n\nSchnell, Link!")
          		}
          	  case 1:
/*<465>*/ 		printf("\x0E\x01\x09\x04\x0C\x20DKonzentriere die Force in deinem Schwert und\n<g<richte>> den Himmelsstrahl auf das Zeitportal!\n\n\nAuf der anderen Seite wartet <b<Zelda>> auf dich!\n\n\n\nSchnell, Link!")
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
/*< 56>*/ 	printf("\x0E\x01\x09\x04\x400=Hä? Was soll das denn heißen?")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 12, 'param3': 6}
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x400\x02Na los, sag das noch mal!")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf("\x0E\x01\x09\x04\xE00\nEs tut mir leid, aber du bist nicht derjenige,\nder <b<Zelda>> helfen kann.\n\n\nIhre Bestimmung, die Welt zu retten, wurde\nschon vor sehr, sehr langer Zeit festgelegt.")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CDBlödsinn!\n\n\n\nIch, <b<Bado>>, soll <b<Zelda>> nicht helfen können?!?\n\n\n\nWarum sollte ich sonst hier sein, hä?\nWer soll ihr denn sonst helfen?")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 24, 'param3': 6}
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x400\x1E...!")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 79, 'param3': 6}
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 21, 'param3': 6}
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x400\x3218Das hätte ich mir ja denken können...\n\n\n\n\x0E\x01\x09\x04\x40D\xA00Du wieder... Natürlich kannst nur du allein\n<b<Zelda>> retten, ja klar...\n\n\n\x0E\x03\x01\x00Link...")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 393, 'param3': 6}
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\x400<Lächerlich!\nWen interessiert dieses angebliche Schicksal?!?\nIch pfeife auf das Schicksal!\n\n\x0E\x01\x09\x04\x40B\xA00Ich glaube kein Wort von diesem Unsinn!")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x4008\x0E\x01\x08\x02\x1CDWaaaaaaaaah!\x0E\x01\x05\x04-\x00")
/*< 39>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 462, 'param3': 6}
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 281, 'param3': 6}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 40, 'param3': 6}
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf("\x0E\x01\x09\x04\xE00\x08\x0E\x03\x01\x00Link... Hast du <b<Zelda>> gefunden?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF05Hm...\nUnd sie hast du also auch getroffen...\n\n\nDer Name der Frau, die du mit Zelda\ngesehen hast, lautet <b<Impa>>...\n\n\nDie <b<Göttin>> hat sie geschickt, um Zelda\nbeizustehen.")
/*< 50>*/ 	printf("Um ihre Bestimmung erfüllen zu können,\nmüssen Zelda und Impa an verschiedene\nOrte reisen.\n\nAber da Impa das Portal zerstört hat, durch das\nsie gegangen sind, gibt es nur eine Möglichkeit,\nihnen zu folgen...")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF00Die <b<Lyra>>, die Zelda dir gegeben hat...\nDu musst dir ihre Kraft zunutze\nmachen.")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Also, Link, hast du schon\nversucht, die <b<Lyra>> zu spielen?\n\n\nIch sehe dir an, dass du ein wenig Hilfe\nbrauchst.\n\n\nKeine Sorge, ich kann es dir beibringen.\n\n\n\nZuerst solltest du \x0E\x02\x04\x02\x1ECD drücken, um die\nLyra in die Hand zu nehmen...\x0E\x01\x11\x02\x10CD")
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
/*<134>*/ 	printf("\x0E\x01\x09\x04\x10\x160FDas Schwert...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Es trägt die drei Flammen in sich...\nGut gemacht, Link.\nDas Schwert fließt nahezu über vor Kraft...")
/*<135>*/ 	printf("\x0E\x01\x09\x04\x01\xFF07Diese Kraft... Die <r<Force>>...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Die heilige Kraft, die die alten Götter\ndieser Welt hinterlassen haben...\nDiese Kraft wird in der Hymne der\nGöttin besungen.\nUnd nun erfüllt sie dich und dein Schwert.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf("\x0E\x01\x09\x04\x00\x1603Nun denn, Link!\nÖffne das Zeitportal!")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 398, 'param3': 6}
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf("Diese Kraft... Dein Schwert wurde durch die\n<r<Force >>gestärkt. Triff nun das Zeitportal mit\ndem <r<Himmelsstrahl>> und es wird sich sicher\nöffnen lassen.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf("Stelle dich auf diese Plattform und <g<lasse die\nKraft des Schwertes in das Zeitportal fließen>>!")
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
/*< 85>*/ 	printf("\x0E\x01\x09\x04\xE01\x103Du bist wieder zurück.")
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
/*< 87>*/ 	printf("Dann weißt du jetzt alles...")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf("Auf der anderen Seite des Tores schläft <b<Zelda>>.\n\n\n\nDu musst keine Angst um sie haben,\nes geht ihr gut.")
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 313, 'param3': 6}
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf("Das <y+<Triforce>>, jene Kraft, die den Todbringer\nbesiegen kann, wurde der Legende nach von\nder Göttin im Wolkenhort versteckt.\n\n\x0E\x01\x09\x04\xE01\xB00Aber niemand weiß, wo...<pause0F>\nDazu schweigt die Legende.")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf("\x0E\x01\x09\x04\xE14\xB00Mehr weiß ich leider nicht darüber,\nLink.\n\n\nDer Schlüssel zum Triforce muss sich\nim <b<Wolkenhort>> verbergen.")
/*<315>*/ 	printf("\x0E\x01\x09\x04\xE08\xB07Du solltest dich auf die Suche nach dem\nTriforce machen.")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf("\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CDHey!\nWarte mal einen Moment!")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x403\xFF00\x0E\x03\x01\x00Link!\nIch muss mit dir reden!")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 89, 'param3': 6}
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 88, 'param3': 6}
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x403\xFF02Also...\n<b<Zelda>>... Ihr geht's doch gut, oder?\n\n[1]Ja.[2]Na ja...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("Das ist gut.\n\n\n\n\x0E\x01\x09\x04\x403\x200Aber es ist noch nicht vorbei, oder?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x40E\xD09Es ist so, Link...\nIch habe mich entschieden, nicht zum\nWolkenhort zurückzukehren.\n\n\x0E\x01\x09\x04\x400\x200Ich bleibe mit dem Mütterchen hier.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x400\xFF0DHehe, mach nicht so ein Gesicht. Ich weiß\nschon, was ich tue.\n\n\n\x0E\x01\x09\x04\x400\x200Weißt du...\nIch habe hier meine Bestimmung gefunden.\nIch muss dieses Ungeheuer bewachen...\n\n\x0E\x01\x09\x04\x400\x211Und mich um das Mütterchen kümmern und so.\nMeine Aufgabe ist sicher nicht so ruhmreich\nwie deine, aber ich bin damit zufrieden,\nverstehst du?")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x403\xD08Außerdem gefällt es mir hier.\n\n\n\nZwischen den Wolken zu leben war nicht übel,\naber ein richtig fester Boden unter den Füßen\nist auch nicht zu verachten.")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf("\x0E\x01\x09\x04\x40D\x209Schau!")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf("\x0E\x01\x09\x04\x404\x208Dank Zelda und dem Mütterchen ist Leben in\ndieses Land zurückgekehrt.\n\n\nWenn man hier <r<einen Keimling pflanzt>>, würde\ndaraus bestimmt ein toller Baum wachsen.\n\n\nDas hier wird sicher mal ein Ort, an dem die\nMenschen gerne leben wollen.\n\n\n\x0E\x01\x09\x04\x40D\x211Es wird wohl einige Zeit dauern, bis ein Baum\nhier richtig groß wächst. Aber ich habe Geduld.\n\n\n\x0E\x01\x09\x04\x400\x12Das ist, was ich gerade fühle.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf("\x0E\x01\x09\x04\x40D\x22EJedenfalls... Also...\n\n\n\nGrüß alle von mir, wenn du zum Wolkenhort\nzurückkehrst.\n\n\n\x0E\x01\x09\x04\x400\xE00Meine Jungs werden vielleicht traurig sein,\naber sag ihnen, dass es mir hier gut geht.\n\n\n\x0E\x01\x09\x04\x400\x209Danke, Link...")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x400\x1400Oh...\nDas klingt gar nicht gut.\n\n\n\x0E\x01\x09\x04\x403\x200Aber du wirst doch etwas unternehmen, oder?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x00\nDie Zeit für weitere Erklärungen wird\nnoch kommen. Verlasse nun den Tempel!")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x03Du hast es sicher schon gesehen, aber die Grube\nvor dem Tempel ist wie eine Spirale angelegt\nund an ihrem Grund wird etwas festgehalten.\n\nWas, das musst du jetzt noch nicht wissen,\naber es wird die Zeit kommen...")
          		}
          	  case 1:
/*<  2>*/ 		printf("\x0E\x01\x09\x04\x00\x1303Das Tor zum <r<Wald von Phirone>> ist offen.\nGeh durch die Tür, sie führt dich\ngeradewegs dorthin.\n\nEs wird mit Sicherheit bald alles klar werden...\nSchreite ohne Furcht voran, Link.")
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
/*<335>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDSieh an...<pause0F>\nDer Auserwählte, der das Wolkenmeer\ndurchquert hat und vom Himmel gestiegen ist...")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 340, 'param3': 6}
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 337, 'param3': 6}
/*<337>*/ 	printf("\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECDWie heißt du?\n\n\n\n...<pause28>Link?\nGut, Link also.\n\n\nDu beherrschst den <pling><r<Himmelsstrahl>>, jene\nheilige Kraft, die durch das <g<Emporstrecken\ndes Schwertes gen Himmel>> beschworen wird.\n\n\x0E\x01\x09\x04\x00\x0BJa, du scheinst des <b<Schwertes der Göttin\n>>fürwahr würdig zu sein.\n\n\n\x0E\x01\x06\x02\xFFCDIch sitze hier seit ewiger Zeit und habe auf dich\ngewartet... Den Wegbereiter des Schicksals...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf("Das hier ist der uralte <b<Tempel des Siegels>>,\nder von der Göttin selbst erschaffen wurde.\n\n\nDein Kommen wurde vor sehr, sehr langer\nZeit vorherbestimmt...\n\n\nDas Mädchen, das du suchst, ist erst vor\nKurzem von Licht umhüllt in diesem\nTempel erschienen.\n\nEs ist Schicksal...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 185, 'param3': 6}
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00\nAber ihre Ankunft im Erdland entsprach nicht\nder Prophezeiung.\n\n\nEs scheint gerade so, als wolle eine böse Macht\neuer beider Bestimmungen beeinflussen.")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF08\x0E\x03\x01\x00Link...<pause1E>\nMachst du dir Sorgen um sie?\n\n\nDann müssen wir jetzt handeln.\nGroßes ist euch beiden vorherbestimmt.\n\n\nUm ihre Bestimmung zu erkennen,\nging sie in den <b<Wald von Phirone>>.\nDu musst ihr folgen.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF00Sieh auf deine Karte.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 363, 'param3': 6}
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf("Ich habe dir auf der Karte den Weg zum\n<b<Wald von Phirone >>mit einem \x0E\x02\x04\x02\x19CD markiert.\n\n\nAber es ist gefährlich, bei all den Monstern\nmit der Nase in der Karte umherzulaufen.\n\n\nDaher bringe ich dir bei, wie du <r<Signallichter\n>>verwendest.\n\n\nWenn du auf der Karte ein <r<Signallicht >>setzt,\nerscheint dort eine Lichtsäule, an der du dich\norientieren kannst.\n\nAlso, zeige auf \x0E\x02\x04\x02\x19CD und drücke (A), um ein\nSignallicht zu setzen.\x0E\x01\x11\x02Í")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf("\x0E\x01\x09\x04\x00\x03Du kannst es von hier zwar nicht sehen, aber\ndas Signallicht leuchtet dir nun den Weg.\n\n\nWenn du das Signallicht nicht mehr brauchst,\nzeige auf der Karte darauf und drücke\nerneut (A), um es zu entfernen.\x0E\x01\x11\x02Í\n\nJetzt musst du nicht mehr fürchten, dich zu\nverlaufen!")
/*<194>*/ 		printf("\x0E\x01\x09\x04\x0E\xFF03Geh nun in den Wald von Phirone und finde die\nheilige Maid. Finde <b<Zelda>>...\n\n\nNimm den Inhalt der <r<Schatztruhe >>in diese\nRaum an dich, er wird dir auf deiner Reise\nnützlich sein.")
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
/*<206>*/ 		printf("Der Weg durch diese Tür führt dich direkt\nzum Wald. Sei vorsichtig...")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 278, 'param3': 6}
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x1303Es wird mit Sicherheit bald alles klar werden...\nSchreite ohne Furcht voran, Link!")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf("\x0E\x01\x09\x04\x00\x06An der mit \x0E\x02\x04\x02\x19CD markierten Stelle scheint\nkein Signallicht zu sein...\n\n\nUm ein Signallicht zu entfernen, zeige darauf\nund drücke erneut (A).\x0E\x01\x11\x02Í\n\n\nDu kannst das Signallicht genauer platzieren,\nindem du \x0E\x02\x04\x02\x38CD neigst, um die Ansicht\nzu vergrößern.")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 367, 'param3': 6}
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf("Zeige auf \x0E\x02\x04\x02\x19CD und drücke \x0E\x02\x04\x02\x1BCD, um dort ein\nSignallicht zu setzen.\x0E\x01\x11\x02Í")
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
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x400=Hä? Was soll das denn heißen?")
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
/*<413>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Du hast dieses Ungeheuer ein drittes\nMal gebannt...")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 416, 'param3': 6}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 418, 'param3': 6}
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 412, 'param3': 6}
/*<412>*/ 	printf("\x0E\x03\x01\x00Link... Bado...\nIhr beide habt Großes geleistet.\n\n\nAber die Abstände, in denen dieses Ungeheuer\ndas Siegel bricht, werden immer kürzer.\n\n\nWir haben kaum noch Zeit! Hast du einen\nHinweis auf den Verbleib des Triforce\ngefunden, Link?\n[1]Ja![2]Also...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf("...<pause19>\nHm...\n\n\nDu suchst also die drei Drachen...\nUnd wenn du das Heldenlied von ihnen gelernt\nhast, weist es dir den Weg zum Triforce...\n\nVon hier aus ist der <b<Wald von Phirone\n>>am nächsten, es kann nicht schaden,\ndort nachzusehen.\n\n\x0E\x01\x09\x04\xE00\nEs gibt allerdings ein Problem...\n\n\n\n\x0E\x01\x09\x04\xE01\xB00Ich weiß nicht, wie es passiert ist...\n\n\n\nIrgendwie wurde der Wald von Phirone\nüberflutet...")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf("Ich musste zu unserer Sicherheit das\n<r<Tor zum Wald >>verschließen, um zu\nverhindern, dass das Wasser auch\ndiesen Tempel überflutet.\nDu kannst das Tor also nicht öffnen,\ndenn sonst steigt auch hier das Wasser.\n\n\nJetzt stellt sich die Frage, wie du in den\nWald von Phirone gelangst...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf("\x0E\x01\x09\x04\x400\x0DHahaha, das könnt ihr mir überlassen!\n\n\n\nBei dem Kampf vorhin ist mir eine\nneue Anwendung für mein <r<mächtiges\nKatapult >>eingefallen.\n\nWir schießen dich einfach mit voller\nKraft direkt in den Wald!")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf("\x0E\x01\x09\x04\x40C\x202Ich bereite alles vor!\nKomm schnell nach, Link!")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf("\x0E\x01\x09\x04\xE00\x0BAch...\n\n\n\nEr ist im Grunde ein guter Junge...\nAber er stellt meine Geduld ganz schön\nauf die Probe.")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf("\x0E\x01\x09\x04\xE08\xFF00Also dann, Link...\nGib auf dich acht.")
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
/*<471>*/ 					printf("\x0E\x01\x09\x04\x00\n...Link!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          				  case 1:
/*<472>*/ 					printf("\x0E\x01\x09\x04\x00\x14Wenn du <b<Bado >>suchst, er ist eben nach\ndraußen gestürmt.\n\n\nIch denke, er wird wieder <r<bei seinem\nKatapult>> sein.")
          				}
          			  case 1:
/*<249>*/ 				printf("\x0E\x01\x09\x04\x00\n...Link!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          			}
          		  case 1:
/*<247>*/ 			printf("\x0E\x01\x09\x04\x00\x09Was?!?\nWillst du sagen, dass <b<der Todbringer\n>>zurück ist?\n\nOh nein...\nDiese Welt wird...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf("\x0E\x01\x09\x04\x00\n...Link!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x0D\x0E\x03\x01\x00Link!\nEr darf auf keinen Fall den Todbringer\nin der Vergangenheit befreien!\n\nSchnell, öffne das Zeitportal und folge ihm!")
          		  case 1:
/*<241>*/ 			printf("\x0E\x01\x09\x04\x00\x09Nein... Das kann nicht sein...\nWo wir <b<Zelda>> gerade wiederhatten...\n\n\n\x0E\x03\x01\x00Link!\nEr darf auf keinen Fall den Todbringer\nin der Vergangenheit befreien!\n\nSchnell, öffne das Zeitportal und folge ihm!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf("Die <b<Hymne der Göttin>>. Ich vermute, dass es\nsich um das Lied handelt, das Zelda am Tag\nder Vogelreiter-Zeremonie vorgetragen hat.\n\nDie Wahrscheinlichkeit, dass jemand aus der\nRitterschule nähere Informationen zum Text\ndes Liedes hat, liegt bei 85%.")
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
/*<214>*/ 							printf("\x0E\x01\x09\x04\x10\x1606Was tust du denn, Link!\nDu hast noch nicht alles Nötige auf\nder anderen Seite des Portals getan!\n\n\x0E\x01\x09\x04\x14\xB00Du musst zurückgehen!")
          						  case 1:
/*<152>*/ 							printf("\x0E\x01\x09\x04\x10\x03Los, Link!\nÖffne das Zeitportal und geh hindurch!")
          						}
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\nEr ist wieder erwacht.\n\n\n\nDu musst diese Bestie ein weiteres Mal\nbannen, Link!")
          					}
          				  case 1:
/*<143>*/ 					printf("\x0E\x01\x09\x04\x00\x07Diese Kraft... Dein Schwert wurde durch die\n<r<Force >>gestärkt. Triff nun das Zeitportal mit\ndem <r<Himmelsstrahl>> und es wird sich sicher\nöffnen lassen.\nStelle dich auf diese Plattform und <g<lasse die\nKraft des Schwertes in das Zeitportal fließen>>!")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf("\x0E\x01\x09\x04\x00\nDer Verbannte wird weiter versuchen,\naus seinem Gefängnis zu entkommen,\nund es wird ihm über kurz oder lang\nerneut gelingen.\nAuch Bado scheint sich irgendwie\ndarauf vorzubereiten.\n\n\n\x0E\x03\x01\x00Link, du musst die drei\nFlammen schnellstens finden!")
          		}
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\x00\x03Wenn dein Schwert die drei heiligen Flammen\nin sich aufgenommen hat, kannst du das\nZeitportal öffnen.\n\nDie <r<Hymne der Göttin>>, die in deiner Heimat\nWolkenhort überliefert wird, birgt Hinweise\nauf die drei Flammen.")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf("\x0E\x01\x09\x04\x00\x00Schnapp ihn dir, Link!\nFür <b<Zelda>>!")
          }

