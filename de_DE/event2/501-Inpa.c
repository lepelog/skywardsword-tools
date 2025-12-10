          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000004>Ah, <heroname>!\nHast du die Schienen draußen schon\ngesehen?\n\n<0x10009:0x00000b00>Wofür die gut sind?\nHehehe...\nDas wird eine Überraschung!")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf(/* textboxtype: 1, unk: 0, line: 124 */ "<pause 30><0x10006:0xffcd>...")
          		  case 1:
          			flw_347:
/*<347>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 453, 'param3': 32}
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf(/* textboxtype: 1, unk: 0, line: 128 */ "Was für ein Baum!\nMan nennt ihn nicht umsonst\n„Lebensbaum“!")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf(/* textboxtype: 1, unk: 0, line: 126 */ "Hier ist überhaupt nichts, oder? Alles\nist so leer... Und das Mütterchen lebt\nhier schon wer weiß wie lang...\n\nWarum hat sie nicht wenigstens einen\nBaum gepflanzt?")
          				  case 1:
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0, line: 125 */ "Irgendwie kann ich nicht anders, als\nmich um das Mütterchen zu sorgen.\n\n\n<0x10009:0x00000a00>Aber erzähl meinen Kumpels ja nicht,\ndass ich mich um sie kümmere!")
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
/*<390>*/ 						printf(/* textboxtype: 1, unk: 0, line: 124 */ "<pause 30><0x10006:0xffcd>...")
          					  case 1:
/*<387>*/ 						printf(/* textboxtype: 1, unk: 0, line: 124 */ "<pause 30><0x10006:0xffcd>...")
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
/*<172>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0e00000a>Warte, <heroname>!\nDu darfst den <color red<Himmelsstrahl>coloroff>\njetzt nicht verwenden!\n\nEr wird sonst noch schneller\nerwachen!\n\n\nDu musst <color red<ihn zuerst bannen>coloroff>!\nLos!")
/*<173>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<332>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 153, 'param3': 32}
/*<153>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 155, 'param3': 32}
/*<155>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<459>*/ 		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<460>*/ 		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<477>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1010, 'next': 156, 'param3': 24}
/*<156>*/ 		wait_frames(10)
/*<157>*/ 		set_camera(20, 0)
/*<158>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1034, 'param2': 12800, 'next': 159, 'param3': 13}
/*<159>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': -256, 'next': 275, 'param3': 13}
/*<275>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 160, 'param3': 50}
/*<160>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x040a321f><0x10008:0x01cd>Aaaaaaaaah!<0x10005:0x001e0000>")
/*<288>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': -256, 'next': 287, 'param3': 13}
/*<287>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 284, 'param3': 50}
/*<284>*/ 		wait_frames(5)
/*<161>*/ 		set_camera(21, 0)
/*<162>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 285, 'param3': 15}
/*<285>*/ 		wait_frames(1)
/*<286>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 		wait_frames(1)
/*<293>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1085, 'param2': 12800, 'next': 292, 'param3': 13}
/*<292>*/ 		{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 0, 'next': 163, 'param3': 40}
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0e00000a>Bei der Göttin...\n<color red<Das Siegel wurde erneut gebrochen>coloroff>...\n\n\n<color red<Er >coloroff>ist wieder erwacht.\n\n\n\nVielleicht eine Reaktion auf die <color red<heilige\nKraft>coloroff>, die von deinem Schwert ausging.\n\n\n<0x10009:0x0e010b00>Aber wir müssen das Schwert\neinsetzen, um das Zeitportal zu öffnen.\nWir haben keine andere Wahl.")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0e101600><heroname>...\nDu musst diese Bestie ein weiteres\nMal bannen!")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x0400030d>Haha! Endlich!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x040f2f0f>Endlich kann ich es ausprobieren!\n\n\n\nDagegen kann dieses Vieh nicht\nanstinken, ha!\n\n\n<0x10009:0x040b3101>Quatscht ihr ruhig noch ein bisschen,\nich geh schon mal vor!")
/*<291>*/ 		set_camera(22, 0)
/*<294>*/ 		{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 516, 'next': 295, 'param3': 14}
/*<295>*/ 		set_camera(51, 0)
/*<296>*/ 		wait_frames(30)
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 466, 'param3': 24}
/*<466>*/ 		wait_frames(30)
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
/*<380>*/ 		printf(/* textboxtype: 1, unk: 3, line: 132 */ "<0x10006:0xffcd>Dieser Junge...\nEr ist gar nicht mal so ungeschickt.\n\n\nVielleicht sollte ich ihn bitten, den\nTempel zu reparieren.")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf(/* textboxtype: 1, unk: 3, line: 131 */ "<0x10006:0xffcd>Dieser Tempel war früher ein Ort der\nRuhe. Und jetzt hat sich alles zum\nSchlimmsten gewendet.\n\nAch, ich sollte nicht so reden...\n\n\n\nAber meine schrecklichsten\nBefürchtungen werden vor meinen\nAugen wahr...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf(/* textboxtype: 1, unk: 3, line: 129 */ "<0x10006:0xffcd>Ich hoffe, er kann Zelda einholen...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf(/* textboxtype: 1, unk: 3, line: 129 */ "<0x10006:0xffcd>Ich hoffe, er kann Zelda einholen...")
          				  case 1:
/*<376>*/ 					printf(/* textboxtype: 1, unk: 3, line: 130 */ "<0x10006:0xfecd>.<pause 10>.<pause 10>.")
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
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000005>Du suchst die drei Drachen? Ich weiß,\ndass der Donnerdrache in der Wüste\ngelebt hat...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000a><heroname>!\nSorge mit <color blue<Bado>coloroff> dafür, dass das Biest\nwieder gebannt wird!")
          				  case 1:
/*<481>*/ 					printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x0000000a>Das <color red<Biest>coloroff> regt sich wieder!\nEs droht, <color blue<Zeldas>coloroff> Siegel an seine\nGrenzen zu bringen oder gar zu\nsprengen!\nLos, <color blue<<heroname>>coloroff>!\nSorge mit <color blue<Bado>coloroff> dafür, dass es wieder\ngebannt wird! Beeil dich!")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000005>Du suchst also die drei Drachen...\nUnd wenn du das Heldenlied von ihnen\ngelernt hast, weist es dir den Weg zum\nTriforce...\nPass auf dich auf!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "Der Schlüssel zum Triforce muss sich\nim <color blue<Wolkenhort>coloroff> verbergen.\n\n\n<0x10009:0x0e000007>Du solltest dich auf die Suche nach dem\nTriforce machen.")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000004>Halt, <heroname>!\nDu musst eine Katastrophe verhindern!")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "Jetzt ist keine Zeit für andere Dinge!\nGeh durch dieses Tor hinaus und sieh\nnach, was dort draußen vorgeht!")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "Musst du dich noch vorbereiten?\nDann beeil dich!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_501_27() {
/*<440>*/ 	start()
/*<444>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 476, 'param3': 32}
/*<476>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 446, 'param3': 17}
/*<446>*/ 	wait_frames(10)
/*<447>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 441, 'param3': 40}
/*<441>*/ 	set_camera(3, 0)
/*<442>*/ 	wait_frames(15)
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 448, 'param3': 24}
/*<448>*/ 	wait_frames(10)
          }

          void entrypoint_501_10() {
/*< 59>*/ 	start()
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 60, 'param3': 32}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 405, 'param3': 32}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 404, 'param3': 50}
          	flw_404:
/*<404>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0e000003>Du hast ihn wieder in seinem Gefängnis\nversiegelt...")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	wait_frames(1)
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	wait_frames(5)
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	wait_frames(15)
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<heroname>...")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "...Mit <color blue<Bados >coloroff>Hilfe.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ihr beide zusammen...")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x0400000d>Hehe, lass gut sein, Mütterchen!\n\n\n\nDu hast mir doch beigebracht, dass\nselbst ein Tunichtgut wie ich etwas\nbewirken kann!")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0e080b0b>Das hast ganz allein du selbst\ngeschafft.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	wait_frames(10)
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0e000007>Es ist Zeit, dass wir über dieses\nUngeheuer reden, <heroname>.\n\n\nEs ist die Verkörperung des Bösen.\nWenn du das Zeitportal öffnest, wirst\ndu die Wahrheit erkennen.\n\n<0x10009:0x0e010b00>Das Biest wird wieder und wieder das\nSiegel brechen, um freizukommen.\n\n\nWir müssen seinen Ursprung zerstören,\nsonst wird es uns immer wieder\nheimsuchen.\n\n<0x10009:0x0e100b00>Schnell, <heroname>!\nKonzentriere...")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x040d0206>Konzentriere die Force in deinem\nSchwert und <color green<richte >coloroff>den Himmelsstrahl\nauf das Zeitportal!")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "Das meintest du doch, Mütterchen?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0e010007>Ja...\nGeh jetzt, <heroname>!")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	wait_frames(1)
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf(/* textboxtype: 2, unk: 0, line: 133 */ "Dieser Ort eignet sich sehr gut dafür,\netwas zu pflanzen, aber wenn du erst\n<color red<in dieser Zeit>coloroff> pflanzt, dürfte es zu\nlange dauern, bis du Resultate siehst.")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000003><color blue<Bado>coloroff> bereitet deine Reise in den Wald\nvor.\n\n\nVielleicht ist dem <color red<Wasserdrachen des\nWaldes>coloroff> etwas passiert... Das solltest\ndu überprüfen, <heroname>.")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0000000a>Es ist an der Zeit.\n\n\n\nKehre zum Wolkenhort zurück und\nfinde das Triforce, <heroname>!")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x0000000a>Nach der letzten Prüfung giltst du als\nwürdig, das Triforce in deinen Händen\nzu halten.\n\nKehre geschwind zum Wolkenhort\nzurück und stell dich der Prüfung!")
          					  case 1:
/*<488>*/ 						printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000014>Ah, <heroname>!\nSehr gut, die drei Drachen haben dich\nihre Stimmen des Liedes gelehrt.\n\nEs bleibt nicht viel Zeit!\nKehre schnell zum Wolkenmeer zurück\nund vervollständige das Heldenlied!")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00000003><color blue<Bado>coloroff> wartet auf dich.\nDu findest ihn sicher <color red<bei seinem\nKatapult>coloroff>.")
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000003>Du kommst gerade richtig. Ich muss\nmit dir reden, <heroname>.\n\n\n<color blue<Bado>coloroff> scheint etwas auf dem Herzen zu\nhaben.\n\n\nDu findest ihn sicher <color red<bei seinem\nKatapult>coloroff>. Geh und rede mit ihm.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000007>Was ist im Wald nur geschehen?\nAber das Wichtigste ist, dass alles\nwieder in Ordnung ist.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000003>Übrigens, <heroname>...\n<color blue<Bado>coloroff> möchte mit dir reden.\n\n\nDu findest ihn sicher <color red<bei seinem\nKatapult>coloroff>. Geh und rede mit ihm.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0000000a>Finde schnell die übrigen Stimmen des\n<color red<Heldenlieds>coloroff>. Die Zeit läuft uns davon!")
          		  case 1:
/*<221>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000007>Was ist im Wald nur geschehen?\nAber das Wichtigste ist, dass alles\nwieder in Ordnung ist.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 1, unk: 2, line: 117 */ "<sound 6>Sehr schön gespielt!\n\n\n\nMachen wir weiter!")
/*<271>*/ 	printf(/* textboxtype: 1, unk: 2, line: 118 */ "Versuche jetzt, im selben Rhythmus\nwie der <color red<Lichtkreis >coloroff>zu spielen.\n\n\nIch singe zu deiner Musik ein Lied.\n\n\n\nDieses Lied wird dir auf deiner Reise\nnützlich sein.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x000d0f0a>Ja! Was für ein fantastischer Baum!\nEr passt perfekt zu diesem Tempel!\n\n\n<0x10009:0x00030200>Wenn ich ihn ansehe, fühle ich mich\nquicklebendig!")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x000d022e>Schön, dass du diesen Keimling\ngepflanzt hast... <pause 20>Aber es wird <color red<eine\nEwigkeit dauern>coloroff>, bis er zu einem\nrichtigen Baum heranwächst.")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x000d0204>Hey! <heroname>!\nWie hast du denn so einen Keimling\ngefunden?\n\n<0x10009:0x00000e0e>Aus dem wird hier mal ein riesiger\nBaum wachsen.\n\n\n<0x10009:0x00030200>Aber...<pause 10>\nEs dauert doch ziemlich lange, bis so\nein Baum richtig gewachsen ist, oder?")
          					  case 1:
/*<255>*/ 						printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000002><color blue<Zeldas>coloroff> Schicksal liegt in deinen\nHänden, <heroname>!\n\n\nAch ja, da fällt mir ein...\nIch will hier einen riesigen Baum\n<color red<pflanzen>coloroff>... Hast du vielleicht Samen\noder so etwas?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x000c0206>Auf der anderen Seite des Portals\nwartet <color blue<Zelda>coloroff> auf dich!\n\n\nSchnell, <heroname>!")
          		}
          	  case 1:
/*<465>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x000c020d>Konzentriere die Force in deinem\nSchwert und <color green<richte>coloroff> den Himmelsstrahl\nauf das Zeitportal!\n\nAuf der anderen Seite wartet <color blue<Zelda>coloroff> auf\ndich!\n\n\nSchnell, <heroname>!")
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
/*<322>*/ 	wait_frames(15)
/*<361>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1009, 'next': 56, 'param3': 24}
/*< 56>*/ 	printf(/* textboxtype: 1, unk: 2, line: 16 */ "<0x10009:0x0400003d>Hä? Was soll das denn heißen?")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	wait_frames(30)
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x04000002>Na los, sag das noch mal!")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0e00000a>Es tut mir leid, aber du bist nicht\nderjenige, der <color blue<Zelda>coloroff> helfen kann.\n\n\nIhre Bestimmung, die Welt zu retten,\nwurde schon vor sehr, sehr langer\nZeit festgelegt.")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0400003e><0x10008:0x01cd>Blödsinn!\n\n\n\nIch, <color blue<Bado>coloroff>, soll <color blue<Zelda>coloroff> nicht helfen\nkönnen?!?\n\n\nWarum sollte ich sonst hier sein, hä?\nWer soll ihr denn sonst helfen?")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	wait_frames(15)
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x0400001e>...!")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	wait_frames(10)
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	wait_frames(30)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x04003218>Das hätte ich mir ja denken können...\n\n\n\n<0x10009:0x040d0a00>Du wieder... Natürlich kannst nur du\nallein <color blue<Zelda>coloroff> retten, ja klar...\n\n\n<heroname>...")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	wait_frames(1)
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0400003c>Lächerlich!\nWen interessiert dieses angebliche\nSchicksal?!?\nIch pfeife auf das Schicksal!\n<0x10009:0x040b0a00>Ich glaube kein Wort von diesem\nUnsinn!")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x04000038><0x10008:0x01cd>Waaaaaaaaah!<0x10005:0x002d0000>")
/*< 39>*/ 	wait_frames(35)
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	wait_frames(30)
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	wait_frames(15)
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0e000008><heroname>...\nHast du <color blue<Zelda>coloroff> gefunden?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0e0eff05>Hm...\nUnd sie hast du also auch getroffen...\n\n\nDer Name der Frau, die du mit Zelda\ngesehen hast, lautet <color blue<Impa>coloroff>...\n\n\nDie <color blue<Göttin>coloroff> hat sie geschickt, um Zelda\nbeizustehen.")
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Um ihre Bestimmung erfüllen zu\nkönnen, müssen Zelda und Impa an\nverschiedene Orte reisen.\n\nAber da Impa das Portal zerstört hat,\ndurch das sie gegangen sind, gibt es nur\neine Möglichkeit, ihnen zu folgen...")
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0e0eff00>Die <color blue<Lyra>coloroff>, die Zelda dir gegeben hat...\nDu musst dir ihre Kraft zunutze\nmachen.")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x0e000008>Also, <heroname>, hast du schon\nversucht, die <color blue<Lyra>coloroff> zu spielen?\n\n\nIch sehe dir an, dass du ein wenig Hilfe\nbrauchst.\n\n\nKeine Sorge, ich kann es dir\nbeibringen.\n\n\nDrücke zuerst (^), um die Lyra in die\nHand zu nehmen, und dann (A), um die\nrichtige Haltung einzunehmen.<0x10011:0x08cd>")
/*< 48>*/ 	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 45, 'param3': 42}
/*< 45>*/ 	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
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
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x0010160f>Das Schwert...\n\n\n\n<0x10009:0x00000b00>Es trägt die drei Flammen in sich...\nGut gemacht, <heroname>.\nDas Schwert fließt nahezu über vor\nKraft...")
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0001ff07>Diese Kraft... Die <color red<Force>coloroff>...\n\n\n\n<0x10009:0x00000b00>Die heilige Kraft, die die alten Götter\ndieser Welt hinterlassen haben...\nDiese Kraft wird in der Hymne der\nGöttin besungen.\nUnd nun erfüllt sie dich und dein \nSchwert.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00001603>Nun denn, <heroname>!\nÖffne das Zeitportal!")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	wait_frames(1)
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "Diese Kraft... Dein Schwert wurde\ndurch die <color red<Force >coloroff>gestärkt. Triff nun das\nZeitportal mit dem <color red<Himmelsstrahl>coloroff> und\nes wird sich sicher öffnen lassen.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "Stelle dich auf diese Plattform und\n<color green<lasse die Kraft des Schwertes in das\nZeitportal fließen>coloroff>!")
/*<142>*/ 	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
/*<370>*/ 	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<139>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_18() {
/*< 81>*/ 	start()
/*< 82>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 310, 'param3': 32}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 437, 'param3': 50}
/*<437>*/ 	wait_frames(5)
/*<428>*/ 	set_camera(2, 0)
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x0e010103>Du bist wieder zurück.")
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 429, 'param3': 17}
/*<429>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 430, 'param3': 47}
/*<430>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 356, 'next': 431, 'param3': 15}
/*<431>*/ 	wait_frames(1)
/*<432>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 433, 'param3': 17}
/*<433>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 435, 'param3': 17}
/*<435>*/ 	wait_frames(5)
/*<434>*/ 	set_camera(32, 0)
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 86, 'param3': 48}
/*< 86>*/ 	wait_frames(15)
/*<461>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1015, 'next': 87, 'param3': 24}
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Dann weißt du jetzt alles...")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 64 */ "Auf der anderen Seite des Tores\nschläft <color blue<Zelda>coloroff>.\n\n\nDu musst keine Angst um sie haben,\nes geht ihr gut.")
/*<439>*/ 	wait_frames(30)
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf(/* textboxtype: 1, unk: 0, line: 65 */ "Das <color yellow white<Triforce>coloroff>, jene Kraft, die den\nTodbringer besiegen kann, wurde\nder Legende nach von der Göttin\nim Wolkenhort versteckt.\n<0x10009:0x0e010b00>Aber niemand weiß, wo...<pause 15>\nDazu schweigt die Legende.")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x0e140b00>Mehr weiß ich leider nicht darüber,\n<heroname>.\n\n\nDer Schlüssel zum Triforce muss sich\nim <color blue<Wolkenhort>coloroff> verbergen.")
/*<315>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x0e080b07>Du solltest dich auf die Suche nach dem\nTriforce machen.")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x0401ff04><0x10008:0x01cd>Hey!\nWarte mal einen Moment!")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x0403ff00><heroname>!\nIch muss mit dir reden!")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	wait_frames(5)
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	wait_frames(75)
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x0403ff02>Also...\n<color blue<Zelda>coloroff>... Ihr geht's doch gut, oder?\n\n[1-]Ja.[2-]Na ja...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 72 */ "Das ist gut.\n\n\n\n<0x10009:0x04030200>Aber es ist noch nicht vorbei, oder?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x040e0d09>Es ist so, <heroname>...\nIch habe mich entschieden, nicht zum\nWolkenhort zurückzukehren.\n\n<0x10009:0x04000200>Ich bleibe mit dem Mütterchen hier.")
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0400ff0d>Hehe, mach nicht so ein Gesicht. Ich\nweiß schon, was ich tue.\n\n\n<0x10009:0x04000200>Weißt du...\nIch habe hier meine Bestimmung\ngefunden. Ich muss dieses Ungeheuer\nbewachen...\n<0x10009:0x04000211>Und mich um das Mütterchen kümmern\nund so. Meine Aufgabe ist sicher nicht\nso ruhmreich wie deine, aber ich bin\ndamit zufrieden, verstehst du?")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x04030d08>Außerdem gefällt es mir hier.\n\n\n\nZwischen den Wolken zu leben war\nnicht übel, aber ein richtig fester\nBoden unter den Füßen ist auch nicht\nzu verachten.")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x040d0209>Schau!")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x04040208>Dank Zelda und dem Mütterchen ist\nLeben in dieses Land zurückgekehrt.\n\n\nWenn man hier <color red<einen Keimling pflanzt>coloroff>,\nwürde daraus bestimmt ein toller\nBaum wachsen.\n\nDas hier wird sicher mal ein Ort, an\ndem die Menschen gerne leben wollen.\n\n\n<0x10009:0x040d0211>Es wird wohl einige Zeit dauern, bis\nein Baum hier richtig groß wächst.\nAber ich habe Geduld.\n\n<0x10009:0x04000012>Das ist, was ich gerade fühle.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x040d022e>Jedenfalls... Also...\n\n\n\nGrüß alle von mir, wenn du zum\nWolkenhort zurückkehrst.\n\n\n<0x10009:0x04000e00>Meine Jungs werden vielleicht traurig\nsein, aber sag ihnen, dass es mir hier\ngut geht.\n\n<0x10009:0x04000209>Danke, <heroname>...")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x04001400>Oh...\nDas klingt gar nicht gut.\n\n\n<0x10009:0x04030200>Aber du wirst doch etwas unternehmen,\noder?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0000000a>Die Zeit für weitere Erklärungen wird\nnoch kommen. Verlasse nun den\nTempel!")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000003>Du hast es sicher schon gesehen, aber\ndie Grube vor dem Tempel ist wie eine\nSpirale angelegt und an ihrem Grund\nwird etwas festgehalten.\nWas, das musst du jetzt noch nicht\nwissen, aber es wird die Zeit kommen...")
          		}
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00001303>Das Tor zum <color red<Wald von Phirone>coloroff> ist\noffen. Geh durch die Tür, sie führt\ndich geradewegs dorthin.\n\nEs wird mit Sicherheit bald alles klar\nwerden... Schreite ohne Furcht\nvoran, <heroname>.")
          	}
          }

          void entrypoint_501_19() {
/*<210>*/ 	start()
/*<326>*/ 	set_camera(55, 0)
/*<359>*/ 	wait_frames(15)
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 1, 'next': 327, 'param3': 40}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 328, 'param3': 14}
/*<328>*/ 	wait_frames(15)
/*<329>*/ 	set_camera(59, 0)
/*<336>*/ 	wait_frames(30)
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001><0x10006:0xfecd>Sieh an...<pause 15>\nDer Auserwählte, der das Wolkenmeer\ndurchquert hat und vom Himmel\ngestiegen ist...")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	wait_frames(45)
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	wait_frames(15)
/*<337>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000008><0x10006:0xfecd>Wie heißt du?\n\n\n\n...<pause 40><heroname>?\nGut, <heroname> also.\n\n\nDu beherrschst den <sound 4><color red<Himmelsstrahl>coloroff>,\njene heilige Kraft, die durch das\n<color green<Emporstrecken des Schwertes gen\nHimmel>coloroff> beschworen wird.\n<0x10009:0x0000000b>Ja, du scheinst des <color blue<Schwertes der\nGöttin >coloroff>fürwahr würdig zu sein.\n\n\n<0x10006:0xffcd>Ich sitze hier seit ewiger Zeit und habe\nauf dich gewartet...\nDen Wegbereiter des Schicksals...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Das hier ist der uralte <color blue<Tempel des\nSiegels>coloroff>, der von der Göttin selbst\nerschaffen wurde.\n\nDein Kommen wurde vor sehr, sehr\nlanger Zeit vorherbestimmt...\n\n\nDas Mädchen, das du suchst, ist erst\nvor Kurzem von Licht umhüllt in\ndiesem Tempel erschienen.\n\nEs ist Schicksal...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	wait_frames(15)
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Aber ihre Ankunft im Erdland\nentsprach nicht der Prophezeiung.\n\n\nEs scheint gerade so, als wolle eine\nböse Macht euer beider Bestimmungen\nbeeinflussen.")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x000eff08><heroname>...<pause 30>\nMachst du dir Sorgen um sie?\n\n\nDann müssen wir jetzt handeln. Großes\nist euch beiden vorherbestimmt.\n\n\nUm ihre Bestimmung zu erkennen,\nging sie in den <color blue<Wald von Phirone>coloroff>.\nDu musst ihr folgen.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000eff00>Sieh auf deine Karte.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	wait_frames(20)
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1, line: 6 */ "Ich habe dir auf der Karte den Weg\nzum <color blue<Wald von Phirone >coloroff>mit einem (X)\nmarkiert.\n\nAber es ist gefährlich, bei all den\nMonstern mit der Nase in der Karte\numherzulaufen.\n\nDaher bringe ich dir bei, wie du\n<color red<Signallichter>coloroff> verwendest.\n\n\nWenn du auf der Karte ein <color red<Signallicht\n>coloroff>setzt, erscheint dort eine Lichtsäule,\nan der du dich orientieren kannst.\n\nAlso, zeige auf (X) und drücke (C),\num ein Signallicht zu setzen.<0x10011:0x06cd>")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000003>Du kannst es von hier zwar nicht sehen,\naber das Signallicht leuchtet dir nun\nden Weg.\n\nWenn du das Signallicht nicht mehr\nbrauchst, zeige auf der Karte darauf\nund drücke erneut (C), um es zu\nentfernen.<0x10011:0x06cd>\nJetzt musst du nicht mehr fürchten,\ndich zu verlaufen!")
/*<194>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000eff03>Geh nun in den Wald von Phirone und\nfinde die heilige Maid. Finde <color blue<Zelda>coloroff>...\n\n\nNimm den Inhalt der <color red<Schatztruhe >coloroff>in\ndiesem Raum an dich, er wird dir auf\ndeiner Reise nützlich sein.")
/*<195>*/ 		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
/*<198>*/ 		wait_frames(1)
/*<196>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 197, 'param3': 32}
/*<197>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 199, 'param3': 17}
/*<199>*/ 		set_camera(40, 0)
/*<358>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 279, 'param3': 13}
/*<279>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 200, 'param3': 17}
/*<200>*/ 		make_actor_do_something(0, 0)
/*<201>*/ 		set_camera(41, 0)
/*<202>*/ 		wait_frames(40)
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 205, 'param3': 24}
/*<205>*/ 		wait_frames(45)
/*<204>*/ 		set_camera(42, 0)
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Der Weg durch diese Tür führt dich\ndirekt zum Wald. Sei vorsichtig...")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		wait_frames(10)
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00001303>Es wird mit Sicherheit bald alles klar\nwerden... Schreite ohne Furcht voran,\n<heroname>!")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000006>An der mit (X) markierten Stelle\nscheint kein Signallicht zu sein...\n\n\nUm ein Signallicht zu entfernen, zeige\ndarauf und drücke erneut (C).<0x10011:0x06cd>\n\n\nDu kannst das Signallicht genauer\nplatzieren, indem du (A) drückst, um\ndie Ansicht zu vergrößern.")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		wait_frames(20)
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "Zeige auf (X) und drücke(C), um dort\nein Signallicht zu setzen.<0x10011:0x06cd>")
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
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 2, line: 16 */ "<0x10009:0x0400003d>Hä? Was soll das denn heißen?")
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
/*<413>*/ 	printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0e000003>Du hast dieses Ungeheuer ein drittes\nMal gebannt...")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	wait_frames(1)
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	wait_frames(5)
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	wait_frames(15)
/*<412>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<heroname>... Bado...\nIhr beide habt Großes geleistet.\n\n\nAber die Abstände, in denen dieses\nUngeheuer das Siegel bricht, werden\nimmer kürzer.\n\nWir haben kaum noch Zeit! Hast du\neinen Hinweis auf den Verbleib des\nTriforce gefunden, <heroname>?\n[1-]Ja![2-]Also...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0, line: 91 */ "...<pause 25>\nHm...\n\n\nDu suchst also die drei Drachen...\nUnd wenn du das Heldenlied von ihnen\ngelernt hast, weist es dir den Weg zum\nTriforce...\nVon hier aus ist der <color blue<Wald von Phirone\n>coloroff>am nächsten, es kann nicht schaden,\ndort nachzusehen.\n\n<0x10009:0x0e00000a>Es gibt allerdings ein Problem...\n\n\n\n<0x10009:0x0e010b00>Ich weiß nicht, wie es passiert ist...\n\n\n\nIrgendwie wurde der Wald von Phirone\nüberflutet...")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0, line: 92 */ "Ich musste zu unserer Sicherheit das\n<color red<Tor zum Wald >coloroff>verschließen, um zu\nverhindern, dass das Wasser auch\ndiesen Tempel überflutet.\nDu kannst das Tor also nicht öffnen,\ndenn sonst steigt auch hier das Wasser.\n\n\nJetzt stellt sich die Frage, wie du in den\nWald von Phirone gelangst...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x0400000d>Hahaha, das könnt ihr mir überlassen!\n\n\n\nBei dem Kampf vorhin ist mir eine\nneue Anwendung für mein <color red<mächtiges\nKatapult >coloroff>eingefallen.\n\nWir schießen dich einfach mit voller\nKraft direkt in den Wald!")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x040c0202>Ich bereite alles vor!\nKomm schnell nach, <heroname>!")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	wait_frames(15)
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x0e00000b>Ach...\n\n\n\nEr ist im Grunde ein guter Junge...\nAber er stellt meine Geduld ganz schön\nauf die Probe.")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x0e08ff00>Also dann, <heroname>...\nGib auf dich acht.")
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
/*<471>*/ 					printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x0000000a>...<heroname>!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          				  case 1:
/*<472>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00000014>Wenn du <color blue<Bado >coloroff>suchst, er ist eben nach\ndraußen gestürmt.\n\n\nIch denke, er wird wieder <color red<bei seinem\nKatapult>coloroff> sein.")
          				}
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x0000000a>...<heroname>!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          			}
          		  case 1:
/*<247>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000009>Was?!?\nWillst du sagen, dass <color blue<der Todbringer\n>coloroff>zurück ist?\n\nOh nein...\nDiese Welt wird...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x0000000a>...<heroname>!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x0000000d><heroname>!\nEr darf auf keinen Fall den\nTodbringer in der Vergangenheit\nbefreien!\nSchnell, öffne das Zeitportal und folge\nihm!")
          		  case 1:
/*<241>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000009>Nein... Das kann nicht sein...\nWo wir <color blue<Zelda>coloroff> gerade wiederhatten...\n\n\n<heroname>!\nEr darf auf keinen Fall den Todbringer\nin der Vergangenheit befreien!\n\nSchnell, öffne das Zeitportal und folge\nihm!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0, line: 33 */ "Die <color blue<Hymne der Göttin>coloroff>. Ich vermute,\ndass es sich um das Lied handelt, das\nZelda am Tag der Vogelreiter-\nZeremonie vorgetragen hat.\nDie Wahrscheinlichkeit, dass jemand\naus der Ritterschule nähere\nInformationen zum Text des Liedes\nhat, liegt bei 85%.")
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
/*<214>*/ 							printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00101606>Was tust du denn, <heroname>!\nDu hast noch nicht alles Nötige auf\nder anderen Seite des Portals getan!\n\n<0x10009:0x00140b00>Du musst zurückgehen!")
          						  case 1:
/*<152>*/ 							printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00100003>Los, <heroname>!\nÖffne das Zeitportal und geh hindurch!")
          						}
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000000a>Er ist wieder erwacht.\n\n\n\nDu musst diese Bestie ein weiteres\nMal bannen, <heroname>!")
          					}
          				  case 1:
/*<143>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000007>Diese Kraft... Dein Schwert wurde\ndurch die <color red<Force >coloroff>gestärkt. Triff nun das\nZeitportal mit dem <color red<Himmelsstrahl>coloroff> und\nes wird sich sicher öffnen lassen.\nStelle dich auf diese Plattform und\n<color green<lasse die Kraft des Schwertes in das\nZeitportal fließen>coloroff>!")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0000000a>Der Verbannte wird weiter versuchen,\naus seinem Gefängnis zu entkommen,\nund es wird ihm über kurz oder lang\nerneut gelingen.\nAuch Bado scheint sich irgendwie\ndarauf vorzubereiten.\n\n\n<heroname>, du musst die drei\nFlammen schnellstens finden!")
          		}
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000003>Wenn dein Schwert die drei heiligen\nFlammen in sich aufgenommen hat,\nkannst du das Zeitportal öffnen.\n\nDie <color red<Hymne der Göttin>coloroff>, die in deiner\nHeimat Wolkenhort überliefert wird,\nbirgt Hinweise auf die drei Flammen.")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000000>Schnapp ihn dir, <heroname>!\nFür <color blue<Zelda>coloroff>!")
          }

