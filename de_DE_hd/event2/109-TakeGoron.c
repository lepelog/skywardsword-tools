          void entrypoint_109_02() {
/*< 80>*/ 	start()
/*< 81>*/ 	switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
          	  case 0:
/*< 54>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<106>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<128>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_134:
/*<134>*/ 					{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 55, 'param3': 13}
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000001>Übrigens! Versuch bloß nicht, mit meiner\nTochter anzubandeln! Und anglotzen ist\nauch verboten, klar?")
          				  case 1:
/*< 53>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 63>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 65>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 67>*/ 								switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
          								  case 0:
/*< 68>*/ 									switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          									  case 0:
/*< 70>*/ 										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          										  case 0:
/*<141>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3584, 'next': 71, 'param3': 13}
/*< 71>*/ 											printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00000016>Ich kann es kaum glauben! Oooh, wenn\nich diesen Kerl erwische, dann...\n\n\n<0x10009:0x000e0e13>Aber es hilft alles nichts. Ich habe\ndamit gerechnet, dass dieser Tag\nirgendwann kommen wird.")
          										  case 1:
/*<140>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4608, 'next': 69, 'param3': 13}
/*< 69>*/ 											printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000013>Schlechte Neuigkeiten,\n<heroname>!\nMeine Tochter hat einen Freund!\n\n<0x10009:0x000e1200>Graaah! Wenn ich diesen Schwerenöter\nzwischen die Finger bekomme, dann...\n\n\n<0x10009:0x00001215>Ich hätte dich niemals um deine Hilfe\nbitten sollen, <heroname>!\nOooje... Was soll ich nur tun?")
/*< 76>*/ 											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
          										}
          									  case 1:
/*< 72>*/ 										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          										  case 0:
/*<139>*/ 											{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 77, 'param3': 13}
/*< 77>*/ 											printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00000001>He, <heroname>! Vergiss eins\nnicht! Hände weg von meiner Tochter!\n\n\nIch weiß, dass man ihr nur schwer\nwiderstehen kann, aber beherrsch\ndich, in Ordnung?")
          										  case 1:
/*< 73>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 138, 'param3': 31}
/*<138>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 74, 'param3': 13}
/*< 74>*/ 											printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000c><0x30001:0x><heroname>!\nHast du schon gehört?\n\n\nIch glaube, meine Tochter hat\ntatsächlich mit ihrem Freund\nSchluss gemacht!\n\n<0x10009:0x000e1200>Natürlich tut es mir leid, dass sie nun\nam Boden zerstört ist. Aber ich...\n\n\n<0x10009:0x000f1809>Ich bin überglücklich, dass der Kerl\nendlich weg vom Fenster ist!\nSag mal, <heroname>...\nHab ich dir das zu verdanken?\nAch, ist ja auch egal!\n<0x10009:0x000e180a>Für mich ist das jedenfalls ein Grund\nzum Feiern! Ich war schon lange nicht\nmehr so gut gelaunt! Ha ha ha!")
/*< 79>*/ 											give_gratitude_crystals();
/*< 75>*/ 											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<142>*/ 											{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          										}
          									}
          								  case 1:
          									flw_137:
/*<137>*/ 									{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 5120, 'next': 66, 'param3': 13}
/*< 66>*/ 									printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000006>Hallo, <heroname>.\nWas kann ich heute für dich tun?\n\n\nMeine Tochter scheint wieder mal\nnicht sie selbst zu sein. Ob sie wohl\netwas beschäftigt?")
          								}
          							  case 1:
          								goto flw_137
          							}
          						  case 1:
/*<136>*/ 							{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 64, 'param3': 13}
/*< 64>*/ 							printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000015>Ich zähle auf dich, <heroname>!\nSchaff meiner Tochter diesen Kerl\nvom Hals! Dann wird alles gut!")
          						}
          					  case 1:
/*< 56>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 						{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 57, 'param3': 13}
/*< 57>*/ 						printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000e14><0x30001:0x><heroname>!\nDu kommst gerade recht!\n\n[1-]Was ist los?[2-]Geht es um\ndeine Tochter?")
/*< 58>*/ 						switch (choice(2)) {
          						  case 0:
/*< 59>*/ 							printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000f1215>Nun, ich schleppe ein wirklich großes Problem\nmit mir herum. Es geht um meine Tochter!")
          							flw_61:
/*< 61>*/ 							printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000e1200>Ja! Es geht um meine Tochter, die\nBesitzerin des Item-Lagers. Sie träumt\nnur noch vor sich hin und errötet hin\nund wieder ohne ersichtlichen Grund.\n<0x10009:0x000f1200>Moment mal... Ich denke, ich weiß,\nwas dahintersteckt! <0x10009:0x00001400><color red<Ein unerwünschter\nVerehrer>coloroff>! Kein Wunder, mit diesem\nhübschen Gesicht...\n<0x10009:0x000e1400>Und bei dieser Schönheit...\nMan kann den Männern eigentlich\nkeinen Vorwurf machen.")
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000f1216>Aber nein... Ein Vater darf so etwas\nnicht dulden! Solche Kerle haben eine\nAbreibung verdient!\n\n<0x10009:0x000e1200>Und da kommst du ins Spiel!\nIch möchte, dass du diesem\nVerehrer etwas ausrichtest.\n\n<0x10009:0x000f1200>Er soll die Finger von ihr lassen!\nIch kann sie ja nicht die ganze Zeit\nbeschützen.\n\nIch zahle dir auch etwas dafür.\nUnd wenn du erfolgreich bist, darfst\ndu ihr auch mal Hallo sagen.")
/*<122>*/ 							printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x000e1400>Oh, keine Sorge. Du musst mir darauf\nnicht antworten.\n\n\n<0x10009:0x000f1809>Welcher Mann würde ein solch\nlukratives Geschäft freiwillig\nausschlagen?\n\n<0x10009:0x00001200>Halte den Typen von meiner Tochter\nfern! Tu mir den Gefallen. Du schaffst\ndas schon, <heroname>!")
/*< 62>*/ 							story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
          						  case 1:
/*< 60>*/ 							printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x0000000b>In der Tat. Du scheinst eine gute\nMenschenkenntnis zu besitzen!")
          							goto flw_61
          						}
          					}
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
/*<133>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 84, 'param3': 13}
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000009>He, hallo du! Willkommen im Haus des\nehemaligen und des amtierenden\nModels von Wolkenhort!")
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e00>Wie? Du hast noch nie von mir gehört?\nIch war im <color blue<Wolkenhort>coloroff> als <color blue<Model>coloroff> tätig!\n\n\n<0x10009:0x00000700>Oder<0x10006:0xfbcd>...<0x10006:0x00cd> kennst du vielleicht das amtierende\nModel, <color blue<Pica aus dem Item-Lager>coloroff>? Ich bin\nihr Vater!\n\n<0x10009:0x000f180a>Zu viele Informationen für dich? Ha ha ha!\nAch, die jungen Leute von heute...")
/*< 86>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*<127>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_109_03() {
/*<107>*/ 	start()
/*< 31>*/ 	story_flags[216 /* us: 805A9AF3 0x08, jp: 805ACD73 0x08 */] = true;
/*<151>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 48>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0000000b>Na? Lust, Bambus zu winzig kleinen Stückchen\nzu verarbeiten? Ein Versuch kostet dich\n<color red<10 Rubine>coloroff>.\n[1-]Schneiden[2-]Regeln[3]Zurück")
          		flw_3:
/*<  3>*/ 		switch (choice(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 19>*/ 				rupees += -10;
/*< 28>*/ 				switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
          				  case 0:
/*< 26>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "Der Rekord liegt bei <numeric arg1 0>!\nUm das zu überbieten, solltest du an deiner\nTechnik arbeiten!")
          					flw_6:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000bff09>Also gut!\nIch will von dir blitzschnelle Hiebe sehen,\nin Ordnung?")
/*<  4>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0007ff06>Hm, nicht genug Rubine, ich verstehe. Nun, weil\ndu es bist, werde ich eine Ausnahme machen...\n\n\n<0x10009:0x000c0e12>Ha ha ha! Reingefallen! Die Jugend von heute\nglaubt aber auch wirklich alles!\n\n\n<0x10009:0x00000e00>Nimm dir lieber meine Tochter zum Vorbild\nund sei nicht zu gutgläubig!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000bff09>Du musst den großen Bambus hier\nzerschneiden! Es geht darum, ihn in\nmöglichst viele Stücke zu schneiden,\nbevor er umfällt.\nJe geschickter du dich anstellst, desto\nbesser wird dein Preis!")
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0007000b>Na, hast du Lust, ein wenig Bambus zu stutzen?\nEs kostet nur <color red<10 Rubine>coloroff>!\n[1-]Schneiden[2-]Regeln[3]Zurück")
          			goto flw_3
          		  case 2:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Schon verstanden. Bis zum nächsten Mal!")
          		}
          	  case 1:
/*<112>*/ 		switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          		  case 0:
/*<113>*/ 			switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          			  case 0:
/*<114>*/ 				switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          				  case 0:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000c0e13>Graaah! Wenn ich diesen Kerl in die Finger\nbekomme, der meiner armen Tochter so auf die\nPelle rückt!\n\n<0x10009:0x0010ff00>Da bekommt man doch gleich Lust, Bambus zu\nschnetzeln! Wie wär's? <color red<10 Rubine >coloroff>pro Versuch!\n[1-]Schneiden[2-]Regeln[3]Zurück")
          					goto flw_3
          				  case 1:
/*<117>*/ 					printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x0000000b>Schön dich zu sehen, <heroname>!\nSieht aus, als ob der Kerl meine Tochter\nendlich in Ruhe lässt.\n\nAlso, wie wäre es mit einer Runde\nBambusschneiden? <color red<10 Rubine>coloroff> und\nes kann losgehen!\n[1-]Schneiden[2-]Regeln[3]Zurück")
          					goto flw_3
          				}
          			  case 1:
/*<115>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000015><0x30001:0x><heroname>! Hast du den Kerl gefunden,\nder meine Tochter nervt?\n\n\nOh, wie sieht's aus? Möchtest du etwas Bambus\nschneiden? <color red<10 Rubine>coloroff> kostet der Versuch!\n[1-]Schneiden[2-]Regeln[3]Zurück")
          				goto flw_3
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>Hallo, <heroname>!\nSchön, dich wiederzusehen!\n\n\nDu möchtest dich in der Kunst des\nBambusschneidens üben?\nEin Versuch kostet dich <color red<10 Rubine>coloroff>.\n[1-]Schneiden[2-]Regeln[3]Zurück")
          			goto flw_3
          		}
          	}
          }

          void entrypoint_109_04() {
/*<108>*/ 	start()
          	goto flw_3
          }

          void entrypoint_109_01() {
          	start()
/*< 25>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 20>*/ 		switch (story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */]) {
          		  case 0:
/*<126>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
          				flw_109:
/*<109>*/ 				entrypoint_109_03();
          			  case 1:
/*< 50>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*<104>*/ 					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          					  case 0:
/*< 51>*/ 						switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          						  case 0:
/*< 52>*/ 							switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
          							  case 0:
/*< 87>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 89>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<119>*/ 										entrypoint_109_03();
          									  case 1:
/*<148>*/ 										{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 3584, 'next': 88, 'param3': 13}
/*< 88>*/ 										printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000013>Schlechte Neuigkeiten,\n<heroname>!\nMeine Tochter hat einen Freund!\n\n<0x10009:0x0010ff15>Graaah! Wenn ich diesen Schwerenöter\nzwischen die Finger bekomme, dann...\n\n\nIch hätte dich niemals um deine Hilfe\nbitten sollen, <heroname>!\n<0x10009:0x000c0e13>Oooje... Was soll ich nur tun?")
/*< 94>*/ 										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<120>*/ 										printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0010ff00>Da möchte man sich am liebsten abreagieren...\nBambus schneiden für <color red<10 Rubine>coloroff>! Interesse?\n[1-]Schneiden[2-]Regeln[3]Zurück")
/*<121>*/ 										entrypoint_109_04();
          									}
          								  case 1:
/*< 90>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<118>*/ 										entrypoint_109_03();
          									  case 1:
/*< 91>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 147, 'param3': 31}
/*<147>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': -256, 'next': 92, 'param3': 13}
/*< 92>*/ 										printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x0000000c><0x30001:0x><heroname>!\nHast du schon gehört?\n\n\nIch glaube, meine Tochter hat\ntatsächlich mit ihrem Freund\nSchluss gemacht!\n\n<0x10009:0x0007ff00>Natürlich tut es mir leid, dass sie nun\nam Boden zerstört ist. Aber ich...\n\n\n<0x10009:0x000b1809>Ich bin überglücklich, dass der Kerl\nendlich weg vom Fenster ist!\nSag mal, <heroname>...\nHab ich dir das zu verdanken?\nAch, ist ja auch egal!\n<0x10009:0x0007180a>Für mich ist das jedenfalls ein Grund\nzum Feiern! Ich war schon lange nicht\nmehr so gut gelaunt! Ha ha ha!")
/*< 95>*/ 										give_gratitude_crystals();
/*< 93>*/ 										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<149>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									}
          								}
          							  case 1:
/*<110>*/ 								entrypoint_109_03();
          							}
          						  case 1:
/*< 96>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 146, 'param3': 31}
/*<146>*/ 							{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': -256, 'next': 97, 'param3': 13}
/*< 97>*/ 							printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000008><0x30001:0x><heroname>!\nDu kommst gerade recht!\n\n[1-]Was ist los?[2-]Geht es um\ndeine Tochter?")
/*< 98>*/ 							switch (choice(2)) {
          							  case 0:
/*< 99>*/ 								printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000e15>Nun, ich schleppe ein wirklich großes Problem\nmit mir herum. Es geht um meine Tochter!")
          								flw_101:
/*<101>*/ 								printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00100e00>Meine über alles geliebte Tochter, die\nBesitzerin des Item-Lagers...\n\n\n<0x10009:0x00000e00>Sie träumt nur noch vor sich hin\nund errötet hin und wieder ohne\nersichtlichen Grund.\n\n<0x10009:0x000c0e13>Moment mal... Ich denke, ich weiß,\nwas dahintersteckt! <color red<Ein unerwünschter\nVerehrer>coloroff>! Kein Wunder, mit diesem\nhübschen Gesicht...\nUnd bei dieser Schönheit...\n<0x10009:0x00000700>Man kann den Männern eigentlich\nkeinen Vorwurf machen.")
/*<103>*/ 								printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x0010ff16>Aber nein... Ein Vater darf so etwas\nnicht dulden! Solche Kerle haben eine\nAbreibung verdient!\n\n<0x10009:0x0001ff00>Und da kommst du ins Spiel! Ich möchte,\ndass du diesem Verehrer etwas ausrichtest.\n\n\n<0x10009:0x0007ff00>Er soll die Finger von ihr lassen! Ich kann\nsie ja nicht die ganze Zeit beschützen.\n\n\nIch zahle dir auch etwas dafür. Und wenn\ndu erfolgreich bist, darfst du ihr auch\nmal Hallo sagen.")
/*<123>*/ 								printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x000bff0b>Oh, keine Sorge. Du musst mir darauf\nnicht antworten.\n\n\n<0x10009:0x00001800>Welcher Mann würde solch ein lukratives\nGeschäft schon freiwillig ausschlagen?\n\n\n<0x10009:0x0001ff00>Halte den Typen von meiner Tochter fern!\nTu mir den Gefallen. Du schaffst das\nschon, <heroname>!")
/*<102>*/ 								story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<105>*/ 								printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0007ff00>Bist du bereit, Bambus zu schneiden?\nEin Versuch kostet dich <color red<10 Rubine>coloroff>!\n[1-]Schneiden[2-]Regeln[3]Zurück")
/*<111>*/ 								entrypoint_109_04();
          							  case 1:
/*<100>*/ 								printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x0007070b>In der Tat. Du scheinst eine gute\nMenschenkenntnis zu besitzen!")
          								goto flw_101
          							}
          						}
          					  case 1:
          						goto flw_109
          					}
          				  case 1:
          					goto flw_109
          				}
          			}
          		  case 1:
/*<125>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 41>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000006>Möchtest du diese Herausforderung\nnun annehmen?\n[1-]Sicher![2]Lieber nicht.")
          				flw_35:
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000b060c>Das wollte ich hören!\nAlso, dann mal los!\n\n\nWarte! Einen Moment...\nIch glaube, ich habe etwas vergessen.\n\n\n<0x10009:0x00010600>Hmmm<pause 5>.<pause 5>.<pause 5>. <0x10009:0x000b060b>Richtig!\nJetzt weiß ich's wieder!")
/*< 22>*/ 					story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = true;
/*<144>*/ 					set_camera(1, 0)
/*< 18>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "Du musst einfach nur diesen Bambus in\nkleine Stücke schneiden.\n\n\nWollen wir doch mal sehen, wie viele du\nschaffst, bevor der Bambus umfällt!\n\n\nJe mehr Stücke du schneidest, umso höher\nist die Chance auf einen tollen Preis!")
/*<145>*/ 					set_camera(-1, 0)
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00ffff09>Also, was meinst du?\nNur <color red<10 Rubine>coloroff> pro Versuch.\n[1-]Los geht's![2]Ich muss\nbezahlen?")
/*< 42>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_16
          					  case 1:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x000c0e07>Moment mal! Du kannst einen tollen Preis\ngewinnen, schon vergessen? Ich kann doch\nkeine Preise verteilen und Leute umsonst\nteilnehmen lassen!\n<0x10009:0x00ffff06>Also, wie sieht's aus? <color red<10 Rubine>coloroff>, und es\nkann losgehen.\n[1-]Gut, ich mach's![2]Lieber nicht.")
/*< 43>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_16
          						  case 1:
/*< 45>*/ 							printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Schon verstanden. Bis zum nächsten Mal!")
          						}
          					}
          				  case 1:
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000c0e05>Du bist mir vielleicht ein Spaßvogel! So wirst\ndu jedenfalls nie ein Mädchen abbekommen!\n\n\n<0x10009:0x0010ff00>Und bevor du auf falsche Gedanken kommst...\nLass bloß die Finger von meiner Tochter!")
/*< 40>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          				}
          			  case 1:
/*<143>*/ 				{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': -256, 'next': 82, 'param3': 13}
/*< 82>*/ 				switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
          				  case 0:
/*< 83>*/ 					printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000001>Oh! Du bist's, <heroname>!\nIch bekomme hier nur selten Besuch.")
          					flw_33:
/*< 33>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x0007ff00>Dies hier ist mein kleines geheimes Refugium,\nin dem ich meine Schwertkunst trainiere!\n\n\nEinst war ich bekannt als das <color blue<Model\nvon Wolkenhort>coloroff>...\n\n\n<0x10009:0x0010ff00>Doch durch den ganzen Stress und meine\nTochter habe ich ein paar Pfunde zugelegt.\n\n\nDeshalb trainiere ich täglich hier. Bambus zu\nschneiden hält nämlich wunderbar fit!\n\n\n<0x10009:0x00000700>Wie sieht's aus, <heroname>?\nLust auf etwas Training?\n[1-]Klar![2]Hm... Nein.")
          					goto flw_35
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Oh! Du bist's, <heroname>!\nIch bekomme hier nur selten Besuch.\n[1-]Wo ist „hier“?[2-]Wer bist du?")
/*<124>*/ 					story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*< 32>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_33
          					  case 1:
/*< 34>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000b0e06>Wie? Du hast noch nie von mir gehört?\nIch war im <color blue<Wolkenhort>coloroff> als <color blue<Model>coloroff> tätig!\n\n\n<0x10009:0x0001ff00>Oder<0x10006:0xfbcd>...<0x10006:0x00cd> kennst du vielleicht das amtierende\nModel, <color blue<Pica aus dem Item-Lager>coloroff>? Ich bin\nihr Vater!\n\n<0x10009:0x0007180a>Zu viele Informationen für dich? Ha ha ha!\nAch, die jungen Leute von heute...")
          						goto flw_33
          					}
          				}
          			}
          		}
          	  case 1:
/*<129>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 44}
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "Sachte, mein Junge.\nDu kannst wieder durchatmen.\n\n\nDu hast den Bambus <numeric arg0 0>-mal geteilt.")
/*< 30>*/ 		switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
          		  case 0:
/*< 23>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 24>*/ 				printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000bff0c>Wahnsinn! Du hast deinen eigenen\nRekord geschlagen! Glückwunsch!")
          				flw_7:
/*<  7>*/ 				switch (context_related4(0)) {
          				  case 0:
/*< 11>*/ 					printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000c0e12>An deiner Schwerttechnik musst du\nnoch arbeiten! Versuche, mindestens\n<color red<15 Stücke >coloroff>erfolgreich zu schlagen!\n\n<0x10009:0x00000e00>Folge meinem Rat und konzentriere\ndich, sonst wird das nichts!")
          					flw_152:
/*<152>*/ 					switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          					  case 0:
          						flw_27:
/*< 27>*/ 						story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */] = true;
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00100700>Falls du Lust hast, Bambus zu kürzen,\nschau jederzeit bei mir vorbei!")
/*<130>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 49, 'param3': 45}
/*< 49>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*<153>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0007ff06>Oh!<pause 15> Was ist denn das für ein kurzes\nSchwert?!?<pause 10> Kaum zu glauben, dass du\ndich damit so wacker geschlagen hast!\n\nEin echter Bambusfäller sollte jedoch\nschon ein etwas längeres Schwert\nhaben. Glaub mir, damit macht die\nSache noch viel mehr Spaß!\nKomm einfach wieder vorbei, wenn du\nein längeres Schwert hast, ja?")
          						goto flw_27
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00070e05>Hm. Nicht übel...\nIch gebe dir einen Trostpreis.\nHier sind 30 Rubine!")
/*< 13>*/ 					rupees += 30;
/*<131>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0001ff00>Versuch beim nächsten Mal mindestens\n<color red<20 Stücke >coloroff>zu schlagen.")
          					goto flw_152
          				  case 2:
/*<  9>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0007ff0b>Du bist wirklich talentiert!\nEine beeindruckende Leistung!\nUnd eine tolle Schwertführung!\n\nHier! Das hast du dir redlich verdient.")
/*< 14>*/ 					give_item(63 0x3F);
/*<132>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff00>Beim nächsten Mal will ich mindestens\n<color red<28 Stücke >coloroff>fliegen sehen!")
          					goto flw_27
          				  case 3:
/*< 10>*/ 					printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000bff0c>Was für eine Leistung!\nSelbst ich, ehemaliges Model, ziehe meinen Hut\nvor dir! Hier ist dein Preis!")
/*< 15>*/ 					give_item(64 0x40);
          					goto flw_27
          				}
          			  case 1:
          				goto flw_7
          			}
          		  case 1:
          			goto flw_7
          		}
          	  case 2:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00070e07>Was genau machst du da?\nDeine Zeit ist um!")
          	}
          }

