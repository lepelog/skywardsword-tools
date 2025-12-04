          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x000a0a12>Wieso kann ich denn von hier aus die\nStatue der Göttin nicht mehr sehen?\nHm... Eigenartig...")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000009>Hast du Kuki gefunden?\n\n\n\n<0x10009:0x00000e00>Was für eine Erleichterung! Auf die\nSchüler der Ritterschule ist eben\nVerlass, nicht wahr?\n\n<0x10009:0x00000400>Sag am besten gleich ihrer Mutter\nBescheid, damit sie sich keine Sorgen\nmachen muss. Ihr Haus liegt am Fluss!")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Oh, <heroname>!\nDu siehst ja aus wie eine frisch\ngestrichene Wand!\n[1-]Etwas ist passiert![2]Oh...")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000506>Was sagst du da? Kuki ist\nverschwunden?\n\n\n<0x10009:0x00000500>Von einem Dämon entführt?!?\n\n\n\n<0x10009:0x000b0400>Das erinnert mich an eine alte Legende\nvon hier, die besagt, dass bei uns im\nWolkenhort ein Dämon haust.\n\n<0x10009:0x000a0500>Er zeigt sich nur nachts und erschreckt\ndie Menschen, entführt ihre Kinder\nund ist allgemein ganz fürchterlich!\n\n<0x10009:0x00000400>Ich dachte eigentlich, das sei nur ein\nMärchen, aber jetzt, wo ich darüber\nnachdenke...")
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000004>Na ja, sofern es dir gut geht, ist ja alles\nin bester Ordnung!")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000006>Ich bilde mir ein, Kukis Mutter würde\nständig ganz laut den Namen ihrer\nTochter rufen. Warum wohl?")
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x000b0e01>Gratulation zum Sieg bei der\nVogelreiter-Zeremonie!\n\n\n<0x10009:0x00000a00>Warum machst du denn ein Gesicht wie\ndrei Tage Regenwetter? Du hast doch\ngewonnen?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x000a0c12>Ich frage mich, was diese seltsame\nErschütterung vorhin war...")
          			goto flw_55
          		  case 1:
          			goto flw_55
          		}
          	}
          }

          void entrypoint_118_22() {
/*<152>*/ 	start()
/*<148>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<170>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 156, 'param3': 13}
/*<156>*/ 		printf(/* textboxtype: 1, unk: 0, line: 146 */ "<0x10009:0x0000000a>Oooh! Das ist großartig!\n\n\n\nEs gibt also tatsächlich noch viele\nPflanzen auf dieser Welt, die ich\nnoch nie gesehen habe.\n\nOooh! Ich spüre förmlich, wie der\nForscherdrang in mir wieder wächst!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 147 */ "Ich danke dir von ganzem Herzen,\n<heroname>!\nIch werde gut auf diese Pflanze achten!\n\nSag mir Bescheid, falls du erneut eine\nseltene Pflanze finden solltest.")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000053>Das... Was ist denn das? Das ist...\ntatsächlich eine mir völlig unbekannte\nPflanzenart!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf(/* textboxtype: 1, unk: 0, line: 145 */ "Aber was ist das denn? Ist das wirklich\neine Pflanze? Oder doch ein Tier?\n\n\nHm... Dies ist wohl eine der größten\nEntdeckungen unserer Zeit!")
/*<147>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_118_06() {
/*<  3>*/ 	start()
/*<373>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
          		flw_57:
/*< 57>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00090257>Was sagst <pause 10>du <pause 10>da? Du hast tatsächlich\ndas verschwundene Kind gefunden?\n\n\nAlso wurde die Kleine doch nicht\nentführt, wie es scheint.\n\n\n<0x10009:0x00000609>Nun, wie auch immer. Wichtig ist, dass\nniemandem etwas geschehen ist! Gut\ngemacht, Ritterschüler!")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00001557>Wenn man den <color red<Grabstein nahe des\nBaumes >coloroff><color green<schlägt >coloroff>und ihn <color green<verschiebt>coloroff>...\n\n\n<0x10009:0x00001513>Und dann kann man wirklich diesen\nDämonen treffen? Also ich werde\nbestimmt nicht nachts auf diesen\ngruseligen Friedhof gehen!")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00000001>Oh, hast du mit dem alten Mann in der\nKürbisbar gesprochen?\n\n\nWas? Wenn man den <color red<Grabstein nahe\ndes Baumes >coloroff><color green<schlägt>coloroff> und ihn danach\n<color green<verschiebt>coloroff>...\n\n<0x10009:0x00001513>Und dann kann man wirklich<0x10006:0xfbcd> diesen\nDämonen treffen?<0x10006:0x00cd> Also ich bleibe\nnachts auf jeden Fall in meinem Haus!")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00110200>Wo der alte Mann jetzt ist?\n\n\n\n<0x10009:0x00000200>Ich glaube, dass er meist in der\n<color red<Kürbisbar>coloroff> östlich des Wolkenhorts\nsitzt und dort die Zeit totschlägt.\n\n<0x10009:0x00120200>Aber du musst mit deinem Wolkenvogel\ndorthin fliegen, vergiss das nicht!")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00001513>Hast du das gehört? Ein kleines\nMädchen ist verschwunden, als\nes beim Friedhof gespielt hat...\n\n<0x10009:0x00121500>Wie kann denn in solch einem kleinen\nDorf ein Kind einfach verschwinden?\n[1-]Eine Tragödie![2]Na ja...")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00010c06>Du sagst, es könnte sein, dass sie von\neinem Dämon verschleppt wurde?\n\n\n<0x10009:0x00000c00>Das kann doch nicht möglich sein<pause 30>.<pause 10>.<pause 10>.<pause 10> Ah!<pause 10>\n\n\n\n<0x10009:0x00090200>Da fällt mir etwas ein! In der Nähe des\nWolkenhorts lebt ein <sound 4><color red<alter Mann>coloroff>, der\noft etwas über Dämonen erzählt.\n\n<0x10009:0x00120200>Er redet ständig wirres Zeug, deshalb\nhat ihm bis jetzt niemand so recht\ngeglaubt...")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00121557>Na, du nimmst das ja sehr gelassen auf.\nVerstehst du nicht, was das bedeutet?\nEines der Kinder ist verschwunden!")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00001504>Ich habe gehört, ein Mädchen aus dem\nDorf sei verschwunden!")
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000501>Oh, du bist doch der Junge, der bei der\nVogelreiter-Zeremonie gewonnen hat!\n\n\n<0x10009:0x000c0200>Diese Ritterkluft steht dir wirklich\nhervorragend.\n\n\n<0x10009:0x000c0500>Wenn du so weitermachst, bist du bald\nein vollwertiger Ritter!")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00091501>Ich habe mich so erschrocken! Erst\ndieser Krach, und dann ist plötzlich die\nInsel der Göttin einfach verschwunden!\n\n<0x10009:0x00120200>Na ja...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000013>Das hat ganz schön gewackelt, oder?\nWas ist da nur passiert?\n\n\n<0x10009:0x00120200>Na ja...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Was ist denn los, <heroname>?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 85 */ "Interessierst du dich für dieses tolle\nWindrad hier?\n\n\nEs lässt sich so ausrichten, dass es den\nWind immer optimal nutzt.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "Na ja, zumindest war das mal so.\n\n\n\nHier fehlt ein kleiner <color red<Propeller>coloroff>, und\ndeshalb lässt sich das Ding nicht mehr\nausrichten! Eine Schande!\n\nDer Propeller ist wohl irgendwann mal\nnach unten gestürzt.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Seitdem steht es hier leider nur nutzlos\nin der Gegend herum... Kein Mensch\ndenkt daran, sich darum zu kümmern!")
/*<179>*/ 	wait_frames(15)
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	wait_frames(15)
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0, line: 104 */ "Ich empfehle, den <color red<Windrad-Propeller\n>coloroff>im Erdland zu bergen, um das große\nWindrad bewegen zu können.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	wait_frames(15)
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x000c0800>Hmmm? Was? Ob ich das Windrad\nreparieren kann, wenn du mir den\nPropeller bringst?\n\nTja... Ich könnte es mal versuchen.\nAber dazu brauche ich eben den\nWindrad-Propeller.")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf(/* textboxtype: 1, unk: 2, line: 89 */ "Wie willst du denn überhaupt nach dem\nPropeller suchen?\n\n\nSchließlich ist er nach unten in die\nWolken gefallen...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x000c0c13>Da fällt mir was ein!\n\n\n\nSprich doch mal mit <color blue<Doruco>coloroff> aus der\nWerkstatt. Der hat doch so einen\nkleinen<color red< fliegenden Roboter>coloroff>, der seinen\nAhnen gehörte!\nIch hab gehört, früher soll dieser\nRoboter Zeug durch die Gegend\ntransportiert haben.\n\nNa ja... Alte Geschichten von Dorucos\nFamilie... Ich weiß ja nicht, ob da was\ndran ist.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000001>Die Göttin ist weg! Die Göttin ist\neinfach weg! Oh nein!\n\n\nDabei konnte man im Garten vor der\nStatue so viele Insekten fangen!")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000001>Ich will in Terris Laden, um mir ein\nSchmetterlingsnetz zu kaufen!\n\n\nUnd dann gehe ich zur Werkstatt und\nlasse mir das Netz vergrößern!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Hey, <heroname>!\n\n\n\nWas? Du warst in Terris Laden?\nPah! Du doofer Angeber!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000001>Ich will ein Schmetterlingsnetz! Wie\nkomme ich nur in Terris Laden...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000001>Du hast Kuki gefunden, oder?\n\n\n\n<0x10009:0x000f1300>Wegen ihr haben sich alle hier Sorgen\ngemacht!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Hey, <heroname>!\n\n\n\nWas? Du warst in Terris Laden?\nPah! Du doofer Angeber!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000006>Kuki?\n\n\n\n<0x10009:0x00120900>Wir haben neulich beim <color red<Friedhof\n>coloroff>zusammen gespielt.\n\n\n<0x10009:0x000a0900>Als meine Mama mich gerufen hat, bin\nich nach Hause gelaufen.\n\n\n<0x10009:0x00010900>Was ist denn passiert?")
          					  case 1:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00101301>Wie komme ich denn nur in Terris\nLaden, um mir ein Schmetterlingsnetz\nzu kaufen?\n[1-]Hast du Kuki\ngesehen?[2-]Terris\nLaden?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00000004>Ich habe mir was überlegt, wie man es\nhoch in Terris Laden schaffen könnte!\n\n\n<0x10009:0x00120900>Hast du schon mal die große Glocke an\nseinem Laden gesehen? Versuch doch\nmal, sie zu läuten, dann hält Terris\nLaden vielleicht an...\n<0x10009:0x00101300>Aber dafür brauchst du wohl etwas,\ndas <sound 4><color red<fliegt>coloroff>. Sonst kommst du da nie im\nLeben ran... Und so was hab ich leider\nauch nicht...\nNa ja, wenn du Terris Laden mal nicht\nfinden solltest, guck doch einfach auf\nder <color green<Karte>coloroff> nach. Dort siehst du immer,\nwo er gerade ist.")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Hey, <heroname>!\n\n\n\nWas? Du warst in Terris Laden?\nPah! Du doofer Angeber!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000001>Schau doch mal, dort oben! Das ist\n<color blue<Terris Laden>coloroff>!\n\n\n<0x10009:0x000a1300>Ich habe gehört, dort kann man sogar\n<color red<Schmetterlingsnetze >coloroff>kaufen! Ich will\nauch so eines!\n\n<0x10009:0x00120900>Wenn ich doch nur etwas hätte, um an\nder großen Glocke des Ladens läuten\nzu können...\n\n<0x10009:0x00101300>Ich bräuchte wohl <color red<irgendetwas>coloroff>, mit\ndem ich <color red<in die Luft schießen >coloroff>kann.")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10009:0x00000004>Wenn jemand kommt und <color blue<Kombu>coloroff> sieht,\nerschrickt er bestimmt! Immerhin sieht\nKombu nicht aus wie eine Pflanze.\n\n<0x10009:0x00000012>„Bleib still und bewege dich nicht!“,\nhat der große Mann zu Kombu gesagt.\n\n\n<0x10009:0x00090013>Irgendwie ist das keine Veränderung zu\nmeinem früheren Leben...")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000d0f>Sag mal, <heroname>, hast du\nmeinen Mann gesehen?\n\n\nSeit es nachts bei uns sicher ist, geht\ner nachts ständig aus... Was, wenn\ndoch noch irgendwo Monster lauern?")
          			  case 1:
/*<476>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000c0e08>Oh, hallo! Meine Kuki läuft nun nicht\nmehr einfach so von Zuhause weg, ohne\netwas zu sagen. Du hast mir wirklich\nsehr geholfen, <heroname>!\nLeider kann ich das von meinem Mann\nnicht behaupten. Der treibt sich immer\nnoch ständig irgendwo herum...")
          			}
          		  case 1:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000c0e08>Danke, dass du meine Kuki gefunden\nhast, <heroname>! \n\n\nIch sollte mich wohl auch bei diesem\nnetten Herrn bedanken, der auf meine\nKuki aufgepasst hat...")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000c0e14>Oh, <heroname>!\n\n\n\n<0x10009:0x00000800>Dank dir ist meine liebe Kuki gesund\nund munter nach Hause gekommen.\nWie kann ich dir bloß danken?\n\n<0x10009:0x00090800>Jetzt kann ich endlich wieder ruhig\nschlafen! Ich danke dir für deine Güte!")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000c0e13>Ah! Du hast meine kleine Kuki also\ngefunden?\n\n\n<0x10009:0x000f0e00>Du sagst, sie ist bei einem freundlichen\nalten Herrn? Dann muss ich mir wohl\nkeine Sorgen machen. Ich hoffe, sie\nkommt bald wieder zurück nach Hause!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x000b0d12>Es ist so schrecklich! Die Insel der\nGöttin stürzt nach unten, meine Kuki\nist immer noch nicht wieder zurück...\n\nBitte, <heroname>! Finde meine\nliebe kleine Kuki!\n\n\n<0x10009:0x00090d00>Oder hast du etwa gar nicht vor,\nsie zu suchen?!?")
          				  case 1:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000b0d12>Meine kleine Kuki... <pause 10>Bitte, finde sie<pause 10> so\nschnell du nur kannst!\n\n\nWenn ihr etwas zugestoßen ist...\nNein, ich mag gar nicht daran denken!")
          				}
          			  case 1:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			}
          		}
          	}
          }

          void entrypoint_118_25() {
/*<343>*/ 	start()
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 276, 'param3': 32}
/*<276>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x15090d00>Wie furchtbar! Die Insel der Göttin ist\nnach unten gestürzt, als ich nach\nmeiner kleinen Kuki gesucht habe!\n\nSag mal, hast du sie zufällig gesehen?\n[1-]Leider nicht.[2-]Wer ist Kuki?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x150d0d12>Ich verstehe...")
          			flw_21:
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x150f0d00>Ich bitte dich, <heroname>!\nWirst du nach meiner Tochter suchen?\nIch bin schon ganz verzweifelt!\n\n<0x10009:0x15090d00>Einige hier im Dorf haben gesagt, sie\nhätten Kuki zusammen mit einer sehr\nfinsteren Gestalt gesehen!\n\n<0x10009:0x150b0d00>Es gibt sogar Leute, die behaupten, sie\nwäre von einem fürchterlichen Dämon\nentführt worden! Was soll ich nur tun?\n\n<0x10009:0x150e0d00>Meine liebe kleine Kuki ist verschleppt\nworden, da bin ich ganz sicher!")
          			flw_22:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x15090d00>Bitte, finde meine kleine Kuki! Ich bin\nsicher, sie hat furchtbare Angst!\n\n\n<0x10009:0x150f0d00>Ich bitte dich, <heroname>!\n[1-]Ich suche sie![2]Es tut mir\nleid...")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x150c0e14>Vielen Dank! Ich wusste, dass auf die\nSchüler der Ritterschule Verlass ist!\n\n\n<0x10009:0x15000800>Ich zähle auf dich!")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x15090d12>Was sagst du da? Und du willst ein\nSchüler der Ritterschule sein?!?\nIst es denn nicht eure Aufgabe, uns\nBürgern in der Not zu helfen?")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x15090d12>Sie ist meine Tochter! Ein kleines,\nsüßes Mädchen von fünf Jahren...")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x15090d00>Wie gut, dass ich dich treffe! Hast du\nmeine kleine Kuki zufällig gesehen?\n[1-]Leider nicht.[2-]Wer ist Kuki?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x1000D:0x1900>Aaaaaaaaah!")
/*< 94>*/ 	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_26() {
/*<348>*/ 	start()
/*<351>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 352, 'param3': 32}
/*<352>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 355, 'param3': 13}
/*<355>*/ 	set_camera(15, 0)
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 350, 'param3': 16}
/*<350>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>Kuki! Meine Kuki! Wo bist du nur?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ach... Wo ist meine kleine Kuki\ndenn bloß...\n\n\nOh nein... Was mache ich denn nur,\nwenn man sie entführt hat?")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x150e0d11>Oh! Du bist es, <heroname>!")
/*<362>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 361, 'param3': 47}
/*<361>*/ 	set_camera(16, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 356, 'next': 359, 'param3': 15}
/*<359>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 363, 'param3': 13}
/*<363>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 368, 'param3': 48}
/*<368>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 100, 'next': 358, 'param3': 14}
/*<358>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_27() {
/*<427>*/ 	start()
/*<439>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
/*<442>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00070c08>Hast du das von der Insel der Göttin\ngehört? Sie ist einfach verschwunden!\n\n\nZelda ist weg, Bado ist auch fort und\njetzt das noch... Was geschieht denn\nhier bloß?")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>Ich trainiere jede Nacht, um so stark\nzu werden wie du!")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070a0b>Hallo, <heroname>! Dank deinen\nAusdauertränken konnte ich so viel\ntrainieren, dass ich zu einem wahren\nKraftpaket geworden bin!\n<0x10009:0x00ffff00>So stark wie du bin ich aber wohl\nimmer noch nicht...\n\n\nBesuche mich doch nachts in meinem\nZimmer, dann können wir uns noch\nein wenig mehr unterhalten!")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000001>Hallo! Kommst du gut mit der Suche\nnach Zelda voran, <heroname>?\n\n\nIch habe immer noch Angst, dass ich\ndas harte Training nicht durchhalte.\nMacht es wirklich Sinn, sich so sehr\nanzustrengen? Hmmm...\nNa ja, wie auch immer. Komm doch\n<color red<nachts>coloroff> mal wieder vorbei und gib mir\nein paar Ratschläge...")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00000001>Hallo, <heroname>! Dank diesem\n<color yellow<Ausdauertrank>coloroff>, den du mir gegeben\nhast, läuft mein <color red<nächtliches>coloroff> Training\nviel besser!\n<0x10009:0x00101b00>Aber ich habe trotzdem immer Angst,\ndass mir mittendrin die Puste ausgeht.\n\n\nOb ich wohl so stark werden kann, wie\ndu es bist...\n\n\n<0x10009:0x00ffff00>Na ja, wie auch immer. Ich werde mich\nweiterhin anstrengen. Komm doch\n<color red<nachts>coloroff> mal wieder vorbei und gib mir\nein paar Ratschläge...")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00070a0b>Hallo, <heroname>! Danke für\nden <color yellow<Ausdauertrank>coloroff> neulich!\n\n\nDank dir konnte ich noch ganz viele\nLiegestütze extra machen! Und jetzt\nläuft alles schon viel besser.\n\n<0x10009:0x00ffff00>Ich schwöre dir, irgendwann werde\nich bestimmt auch so stark wie du,\n<heroname>!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000001>Da hast du mich doch tatsächlich\nneulich nachts beobachtet... Ähem...\n\n\nWeißt du, ich wäre auch gerne so stark\nwie du, deshalb strenge ich mich an,\naber irgendwie tut sich da gar nichts.\nNa ja, ich gebe mir weiterhin Mühe...")
          						goto flw_440
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_10() {
/*< 25>*/ 	start()
/*<428>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 429, 'param3': 31}
/*<429>*/ 		entrypoint_118_27();
          	  case 1:
/*< 40>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*< 69>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 70>*/ 				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          				  case 0:
/*<306>*/ 					switch (zone_temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<418>*/ 						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          						  case 0:
/*<419>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>Ich trainiere jede Nacht, um so stark\nzu werden wie du!")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00070c08>Hast du das von der Insel der Göttin\ngehört? Sie ist einfach verschwunden!\n\n\nZelda ist weg, Bado ist auch fort und\njetzt das noch... Was geschieht denn\nhier bloß?")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000001>Ich bin sicher, dass du Zelda finden\nwirst. Du hast das Zeug dazu!")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012>Hallo, <heroname>!\nKuki ist immer noch nicht aufgetaucht!\n\n\n<0x10009:0x00000e10>Suchst du denn auch wirklich nach ihr,\n<heroname>?\n\n\n<0x10009:0x00000c00>Wie? Du hast sie bereits gefunden?\n\n\n\n<0x10009:0x00070a0b>Oh, was für ein Glück! Ich bin wirklich\nerleichtert, dass du sie gefunden hast!\nIch wusste, du würdest es schaffen,\n<heroname>!")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>Du solltest Kukis Mutter so schnell wie\nmöglich besuchen und ihr Bescheid\ngeben.\n\nSie wohnt in einem Haus am Flussufer.")
          					  case 1:
/*<309>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012>Hallo, <heroname>!\nKuki ist immer noch nicht aufgetaucht!\n\n\n<0x10009:0x00000e10>Suchst du denn auch wirklich nach ihr,\n<heroname>?\n\n\n<0x10009:0x00000c00>Wie? Du hast sie bereits gefunden?\n\n\n\n<0x10009:0x00070a0b>Oh, was für ein Glück! Ich bin wirklich\nerleichtert, dass du sie gefunden hast!\nIch wusste, du würdest es schaffen,\n<heroname>!")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070801>Oh, <heroname>! Die Insel der\nGöttin ist verschwunden!\n\n\n<0x10009:0x00000800>Und die kleine Kuki ist verschwunden!\n\n\n\n<0x10009:0x00000e00>Unsere Zelda ist fort, Bado hat sich aus\ndem Staub gemacht... Was ist denn bloß\nlos in letzter Zeit?\n\n<0x10009:0x00070800>Ich mache mich jedenfalls auf die\nSuche nach Kuki. Und du solltest\ndich auch auf den Weg machen,\n<heroname>!")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000012>Du bist es, <heroname>! Ich kann\nKuki immer noch nirgends finden!\n\n\n<0x10009:0x00000e10>Suchst du auch wirklich nach ihr,\n<heroname>? Das ist eine ernste\nAngelegenheit!\n\n<0x10009:0x00070200>Also, ich mache mich wieder auf die\nSuche. Ich zähle auf deine Hilfe!")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00001701>Ich sehe mich hier um. Du könntest den\nDorfplatz übernehmen! Machen wir\nuns auf die Suche, <heroname>!\n\n<0x10009:0x00081700>Ich glaube, ich habe Kuki gestern dort\nmit einem Jungen spielen sehen...")
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000001>Hallo, <heroname>!\nWeißt du denn schon, wo unsere\nZelda ist?\n\n.<pause 10>.<pause 10>.<pause 10>Oh!<pause 10> Ich verstehe!\nNun, dann streng dich an!\n\n\n<0x10009:0x00070200>Da fällt mir ein, ich habe eben Kukis\nMutter hoch zum Tempel laufen sehen.\n\n\n<0x10009:0x00081700>Was sie wohl dort macht?")
/*< 30>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00200508>Was sagst du da? Die kleine Kuki ist\nverschwunden?!?\n\n\n<0x10009:0x00070800>Wie schrecklich! Ich mache mich sofort\nauf die Suche! Du solltest auch ein paar\nLeute fragen, ob sie vielleicht Kuki\ngesehen haben, <heroname>!")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070801>Oh, <heroname>! Die Insel der\nGöttin ist verschwunden!\n\n\n<0x10009:0x00000800>Und die kleine Kuki ist verschwunden!\n\n\n\n<0x10009:0x00000e00>Unsere Zelda ist fort, Bado hat sich aus\ndem Staub gemacht... Was ist denn bloß\nlos in letzter Zeit?\n\n<0x10009:0x00070800>Ich mache mich jedenfalls auf die\nSuche nach Kuki. Und du solltest\ndich auch auf den Weg machen,\n<heroname>!")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Ah, kommst du bei der Suche nach\nZelda voran, <heroname>?\n\n\n.<pause 10>.<pause 10>.<pause 10>Ich verstehe!<pause 10> Dann streng dich\nweiter an, ja?\n\n\nDa fällt mir ein, ich habe eben Kukis\nMutter hoch zum Tempel laufen sehen.\nWas sie dort wohl macht?\n[1-]Wen meinst du?[2-]Ich weiß es!")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000005>Du kennst doch die Frau, die mit ihrem\nMann und ihrer Tochter in diesem\nHaus am Fluss wohnt.\n\n<0x10009:0x00070800>Irgendetwas an dieser Sache macht\nmich stutzig...")
          				  case 1:
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070806>Wirklich? Ach, erzähl doch keinen\nUnsinn!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_28() {
/*<450>*/ 	start()
/*<464>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
          		flw_460:
/*<460>*/ 		switch (random(2)) {
          		  case 0:
/*<459>*/ 			printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Hallo, <heroname>! Wo ist denn\nBado in letzter Zeit? Ich sehe ihn\ngar nicht mehr...\n\nVielleicht haben sie ihn ja aus der\nRitterschule geworfen? Das wäre toll!\nBado war immer so fies zu mir...")
          		  case 1:
/*<461>*/ 			printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000001>Hallo, <heroname>! Stru hat mir\nein paar <color red<Tipps zum Insektenfangen>coloroff>\ngegeben!\n\nEr hat gesagt, man könne Insekten viel\nleichter fangen, wenn man das Netz\nseitlich schwingt!\n\nUnd man muss sich den Insekten\ngaaanz laaangsam nähern, und dann\nganz schnell das Netz schwingen!")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000001>Hallo, <heroname>!\n\n\n\nWas? <color red<Dreifuß>coloroff><0x10006:0xfbcd>...?<0x10006:0x00cd>\n<pause 20>Was soll das denn sein?")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Schau mal, <heroname>!\nSchau dir den Turm des Lichts an!\n\n\nDa kommt ein dicker Lichtstrahl raus!\nDas sieht echt toll aus, oder?")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Duuu, <heroname>?\nKann man mit dem <color red<Schmetterlingsnetz>coloroff>\nauch noch andere Dinge außer Insekten\nfangen? Denkst du, das geht?\nOnkel Doruco aus der Werkstatt hat\nmir das neulich erzählt!")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Hallo, <heroname>!\n\n\n\nWas? Der <color red<Text>coloroff> des Liedes, das Zelda\ngesungen hat?\n\n\nIch dachte immer, sie singt nur\n„La la la“ oder so...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000001>Ich will in Terris Laden, um mir ein\nSchmetterlingsnetz zu kaufen!\n\n\nUnd dann gehe ich zur Werkstatt und\nlasse mir das Netz vergrößern!")
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_11() {
/*< 53>*/ 	start()
/*<162>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000001>Der Dämonenonkel ist gar nicht böse!\n\n\n\nEr hat mich gerettet, als ich fast von\neiner Klippe gefallen wäre!\n\n\n„Nachts ist es draußen gefährlich!“,\nhat er gesagt.\n\n\nDeshalb warte ich, bis es hell ist. Dann\ngehe ich wieder zurück zu Mama und\nsage ihr, wo ich war.")
          	  case 1:
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000006>Was ist denn los? Wieso schaust du so?\nFürchtest du dich?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000001>Ich trainiere Nacht für Nacht in\nmeinem Zimmer, um so stark zu\nwerden die du. Na ja, leider ist\ndas nicht so einfach...\nDu hast die Messlatte ganz schön\nhoch gelegt, <heroname>!")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000001>Oh, <heroname>!\nHast du schon eine Spur von Zelda?\n\n\nIch muss dir etwas gestehen. Um so\nstark zu werden wie du trainiere ich\nseit Kurzem<color red< jede Nacht >coloroff>und stähle\nmeinen Körper!\n<pause 5>.<pause 5>.<pause 5>.<pause 10>Oh! <0x10009:0x00000a06>Also... Na ja, das ist mir zwar\nein wenig peinlich, aber komm ruhig\nmal nachts <color red<in mein Zimmer>coloroff>, wenn du\nmich trainieren sehen möchtest.")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000001>Hallo, <heroname>!\nGibt es Neuigkeiten von Zelda?\nIch hoffe, sie ist bald wieder da!")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000811>Oh, <heroname>!\nAus dem Turm des Lichts kommt ein\nLichtstrahl! Das habe ich auch noch\nnicht gesehen...")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00070a0b>Hallo, <heroname>!\n\n\n\n<0x10009:0x0000ff05><color red<Zwei Flügel>coloroff>?\nDer Wind im Wolkenhort weht immer\nsehr stark, also gibt es viele Dinge hier,\ndie Flügeln ähneln...")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00070a0b>Hallo, <heroname>!\n\n\n\n<0x10009:0x0000ff08>Hm? Die <color red<Hymne der Göttin>coloroff>?<pause 30>\nZelda hat die oft gesungen...\n\n\nIch kenne den Text zwar nicht, aber\nder Direktor kann dir da bestimmt\nweiterhelfen!")
          						  case 1:
/*<314>*/ 							printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0000000b>Ah, <heroname>!\nKukis Mutter ist bestimmt total aus\ndem Häuschen, dass du die Kleine\ngefunden hast. Was für ein Glück!")
/*<499>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_12() {
/*< 67>*/ 	start()
/*<473>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<474>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000001>Hallo, <heroname>! <pause 30>Was? Der\nDämonenonkel ist jetzt ein normaler\nOnkel?\n\nOh<0x10006:0xfbcd>...<0x10006:0x00cd> Dabei sahen seine Flügel doch\nso toll aus...")
          	  case 1:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>Hallo, <heroname>!\n\n\n\nDer Dämonenonkel sammelt ganz viel\nDingsda der Güte, oder so etwas. Kann\nich trotzdem wieder bei ihm spielen?")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf(/* textboxtype: 2, unk: 0, line: 112 */ "")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf(/* textboxtype: 2, unk: 0, line: 115 */ "")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf(/* textboxtype: 2, unk: 0, line: 116 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. <sound 4>Ich beende die\nEinstellung für die Aurasuche.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00000013>Oooh! Ist das nicht der kleine Roboter\nvon unserem Doruco?")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf(/* textboxtype: 1, unk: 0, line: 93 */ "...Ich glaub's nicht!\n\n\n\n<pause 20>Das ist doch unglaublich!<pause 40> Du hast also\ntatsächlich den <color red<Windrad-Propeller >coloroff>aus\nder Welt unter den Wolken geholt!\n\n<0x10009:0x000c0c00>War dieses ganze Gerede von Dorucos\nAhnen am Ende wirklich wahr?!? Ich\nfass es nicht!\n\nDa wird der Wolkenvogel in seinem\nNest verrückt! Aber gut, ich kann ja\nmal versuchen, das Windrad hier zu\nreparieren...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0, line: 94 */ "Das hier hin... und das dort hin...\nHmmm... Und dann noch hier...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		wait_frames(15)
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		wait_frames(30)
/*< 89>*/ 		printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x000a010e>Pfff...")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x000c0c00>Das sollte es gewesen sein! Wenn du\nden Propeller dazu kriegst, sich zu\ndrehen, kannst du das große Windrad\nwohl jetzt ausrichten!")
/*<210>*/ 		printf(/* textboxtype: 1, unk: 2, line: 97 */ "<0x10009:0x00000100><0x10008:0xffcd>Gelan! Geeelaaan!")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00050714>Oh, so ein Ärger! Meine Frau hat mich\ngebeten, den Schrank in unserem Haus\nzu reparieren!\n\nSie ist ständig auf der Suche nach\nirgendjemandem, der irgendetwas\nfür sie erledigt...")
/*< 91>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x000c0c00>Dann bis später, <heroname>!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00050714>Ah, so ein Ärger! Dabei suche ich doch\ngerade nach der kleinen Kuki!")
/*<296>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x000c0c00>Also dann, <heroname>!\nMan sieht sich später! Falls du Kuki\nvor mir findest, sag mir Bescheid!")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x00000005>Sachen aus einer Welt unter den\nWolken nach oben zu bringen...\nHa, so was gibt's doch gar nicht!\n\n<color blue<Doruco>coloroff> aus der Werkstatt glaubt aber\ntrotzdem daran und kümmert sich wie\nein Vater um seinen kaputten Roboter.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Du hast doch tatsächlich meine kleine\nKuki gefunden! Du bist ein toller Kerl,\n<heroname>! Vielen Dank!\n\nÜbrigens, findest du nicht, dass das\nWetter heute hervorragend ist?\n\n\nAn so einem Tag würde ich am liebsten\nin der Kürbisbar sitzen und mir ein\nGlas kalte Limonade gönnen!\n\nAber ich muss ja diesen Schrank für\nmeine Frau reparieren... Aaah, wie\nmich das nervt!")
          			  case 1:
/*<292>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x0000000e>Hallöchen, <heroname>!\nDie kleine Kuki ist immer noch nicht\nnach Hause gekommen!\n\nIch mache mir langsam auch so meine\nSorgen um sie...\n\n\nDu solltest dich auch auf die Suche\nnach ihr machen!")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 117 */ "Wie wunderschön, wie wunderbar!\nFür die verehrte Phai tue ich alles!")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 118 */ ".<pause 5>.<pause 5>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 153 */ "Auf der anderen Seite der Tür ist eine\ndämonische Aura zu spüren.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00010701>Besuche mich doch im Basar, wenn du\nmeine Hilfe wieder in Anspruch\nnehmen möchtest.\n\nIch werde dir natürlich einen\nSonderpreis machen!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x0010070d>Oooh!\n\n\n\nDas ist doch... Dieser Kristall ist genau\nso einer wie mein alter!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00000700>Ho ho... Oh, ich spüre deine Güte,\njunger Freund! Nun kann ich endlich\nwieder in die Zukunft sehen!\n\nBesuche mich doch im Basar, wenn\ndu meine Hilfe erneut in Anspruch\nnehmen möchtest.\n\nIch werde dir natürlich einen\nSonderpreis machen!")
/*<106>*/ 			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
/*<298>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<376>*/ 			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*<377>*/ 			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*<141>*/ 			give_gratitude_crystals();
          		  case 1:
/*< 99>*/ 			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          			  case 0:
/*<425>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 212, 'param3': 31}
/*<212>*/ 				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          				  case 0:
/*<161>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 103, 'param3': 13}
/*<103>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Was soll denn das? Solltest du nicht\nnach meinem Kristall suchen?")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Was soll denn das? Solltest du nicht\nnach meinem Kristall suchen?")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf(/* textboxtype: 2, unk: 0, line: 110 */ "Der <color red<Kristall>coloroff>, den diese Person sucht,\nist im Moment nicht als <sound 4>Ziel für die\n<color red<Aurasuche>coloroff> festgelegt.\n\nMöchtest du den <color red<Kristall>coloroff> als Ziel für\ndie <sound 4><color red<Aurasuche>coloroff> festlegen?\n[1-]Ja[2]Nein")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf(/* textboxtype: 2, unk: 0, line: 113 */ "<0x10012:0x00000005>Sehr wohl, Gebieter.\n\n\n\nIch habe den <color red<Kristall>coloroff>, den diese\nPerson sucht, als Ziel für die\n<sound 4><color red<Aurasuche >coloroff>festgelegt.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 2, unk: 0, line: 116 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. <sound 4>Ich beende die\nEinstellung für die Aurasuche.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000c100f>Es ist vorbei... Es hat keinen Sinn...\nEs ist alles aus...\n\n\nMein Kristall ist kaputt. So kann ich\nnicht mehr in die Zukunft sehen...\n\n\nMeine <0x10006:0xfccd>sanften Augen<0x10006:0x00cd> sind betrübt und\ngebrochen, so wie mein wunderschöner\nKristall...\n\n<pause 30>Aaah... Wenn ich doch bloß einen neuen\nKristall bekäme...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 125 */ "Da fällt mir ein... Du bist doch dieser\nJunge, der neulich diesen Propeller aus\nder Welt unter den Wolken hierher\ngebracht hat!\nUm ehrlich zu sein ist mein Kristall\nauch ein Gegenstand aus der Welt\nunter den Wolken!\n\nDie Ahnen von diesem Doruco aus der\nWerkstatt haben ihn einst geborgen\nund Doruco hat ihn mir verkauft.\n\nAlso vielleicht gibt es da unten ja noch\neinen Kristall, der so ist wie meiner?\nWürdest du vielleicht für mich danach\nsuchen, junger Freund?\n[1-]Ja[2]Nein")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 126 */ "Das ist ja wundervoll! Du bist meine\nRettung in der Not!\n\n\nLaut dem Roboter aus der Werkstatt\ngibt es solche Kristalle in einem\n<color red<Gebäude am Vulkangipfel>coloroff>...")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf(/* textboxtype: 2, unk: 0, line: 105 */ "Ich kann den Kristall, den diese Person\nsucht, als gegenwärtiges Ziel für die\n<sound 4><color red<Aurasuche>coloroff> festlegen.\n\nFalls du dich allerdings momentan auf\nder Suche nach einem anderen Objekt\nbefindest, müsste ich dieses Objekt\naus der Aurasuche entfernen.\nSoll ich diese Änderung vornehmen und\ndie Aurasuche so einstellen, dass du\nnach einem <color red<Kristall >coloroff>suchen kannst?\n[1-]Ja[2]Nein")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf(/* textboxtype: 2, unk: 0, line: 106 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Die Aurasuche\nwurde dementsprechend eingestellt.")
/*<381>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<388>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<387>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<385>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<386>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<389>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<394>*/ 						open_dowsing_wheel(14)
          						flw_391:
/*<391>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 390, 'param3': 36}
/*<390>*/ 						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
/*<393>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 392, 'param3': 16}
/*<392>*/ 						printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x0001070b>Ich bitte dich, junger Freund!\nOhne Kristall kann ich nicht in\ndie Zukunft sehen.\n\nUnd ohne meine Fähigkeiten werde ich\nauch dir keine Hilfe sein können.\n\n\nAlso, ich warte auf meinen neuen\nKristall, junger Freund!")
          					  case 1:
/*<467>*/ 						printf(/* textboxtype: 2, unk: 0, line: 107 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Wenn du die\nEinstellung der Aurasuche ändern\nmöchtest, sprich erneut mit dieser\nPerson.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x000c1009>Das Leben ist so ungerecht<0x10006:0xfccd>...<0x10006:0x00cd>")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_17() {
/*<109>*/ 	start()
/*<114>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<478>*/ 		switch (zone_temp_flags[14 /* 0x0 40 */]) {
          		  case 0:
/*<479>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<481>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 480, 'param3': 13}
/*<480>*/ 				printf(/* textboxtype: 1, unk: 0, line: 150 */ "Wie dem auch sei... Die Insel der\nGöttin ist verschwunden!\n\n\nIch traute meinen Augen nicht, als ich\ndieses gewaltige Licht erblickte.\n\n\nDoch mir ist bewusst, dass alle deine\nTaten nur dazu dienen, unsere Zelda\nzu retten. Der Direktor hat mir alles\nerzählt.\nIch bitte dich, rette Zelda für uns!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf(/* textboxtype: 1, unk: 0, line: 148 */ "Ach, <heroname>!\nEs gibt wohl noch viele Pflanzen auf\ndieser Welt, von deren Existenz ich\nnichts weiß!")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x000e050a>Und doch... Diese Pflanze weckt mein\nInteresse mehr und mehr, mit jedem\nMal, da ich sie betrachte.\n\n<0x10009:0x00000500>Ist dieses Wesen wirklich eine Pflanze?\nOder doch ein Tier? Wie ist dieses\nWesen bloß zu klassifizieren...")
/*<477>*/ 				zone_temp_flags[14 /* 0x0 40 */] = true;
          			}
          		  case 1:
          			goto flw_173
          		}
          	  case 1:
/*<113>*/ 		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
          		  case 0:
/*<158>*/ 			entrypoint_118_21();
          		  case 1:
/*<112>*/ 			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
          			  case 0:
/*<426>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 274, 'param3': 31}
/*<274>*/ 				switch (zone_temp_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00000009>Ha ha! Ich wusste, dass du mir helfen\nwürdest, <heroname>.")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						wait_frames(15)
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf(/* textboxtype: 2, unk: 0, line: 111 */ "Die <color red<Pflanze>coloroff>, welche diese Person sucht,\nist im Moment nicht als <sound 4>Ziel für die\n<color red<Aurasuche>coloroff> festgelegt.\n\nMöchtest du die <color red<Pflanze>coloroff> als Ziel für die\n<sound 4><color red<Aurasuche>coloroff> festlegen?\n[1-]Ja[2]Nein")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf(/* textboxtype: 2, unk: 0, line: 114 */ "<0x10012:0x00000005>Sehr wohl, Gebieter.\n\n\n\nIch habe die <color red<Pflanze>coloroff>, die diese Person\nsucht, als Ziel für die <sound 4><color red<Aurasuche\n>coloroff>festgelegt.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf(/* textboxtype: 2, unk: 0, line: 116 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. <sound 4>Ich beende die\nEinstellung für die Aurasuche.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 142 */ "<0x10009:0x00000001>Wie geht es dir? Kommst du mit der\nSuche nach einer neuen Pflanzenart\nvoran?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00000001>Oh, <heroname>! Kommst du, um\ndir meine Bitte anzuhören?\n\n\nIch interessiere mich für seltene\nPflanzen!")
          						flw_118:
/*<118>*/ 						printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x00000000>Es ist nur so... Ich habe bereits alle\nPflanzen, die hier im Wolkenhort\nvorkommen, gesammelt.\n\nDeshalb bin ich auf der Suche nach\neiner neuen Pflanze, die ich erforschen\nkann.\n\n<0x10009:0x00090a0f>Was sagst du dazu? Würdest du dich\nfür mich auf die Suche nach einer\nsolchen neuen Pflanzenart machen?\n[1-]Natürlich![2]Keine Zeit.")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000a0a03>Oho! Ich war mir sicher, dass du mir\nhelfen würdest, <heroname>!\n\n\nKönntest du für mich denn eine neue\nPflanzenart suchen und sie zu mir\nbringen, wenn du sie gefunden hast?")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							wait_frames(15)
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf(/* textboxtype: 2, unk: 0, line: 108 */ "Ich kann die <color red<Pflanze>coloroff>, die diese Person\nsucht, als gegenwärtiges Ziel für die\n<sound 4><color red<Aurasuche>coloroff> festlegen.\n\nFalls du dich allerdings momentan auf\nder Suche nach einem anderen Objekt\nbefindest, müsste ich dieses Objekt\naus der Aurasuche entfernen.\nSoll ich diese Änderung vornehmen und\ndie <color red<Aurasuche>coloroff> so einstellen, dass du\nnach einer <color red<Pflanze >coloroff>suchen kannst?\n[1-]Ja[2]Nein")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 2, unk: 0, line: 109 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Die Aurasuche\nwurde dementsprechend eingestellt.")
/*<223>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<224>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<225>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<226>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<227>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<228>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<397>*/ 								open_dowsing_wheel(16)
          								flw_136:
/*<136>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 119, 'param3': 36}
/*<119>*/ 								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
/*<273>*/ 								zone_temp_flags[14 /* 0x0 40 */] = true;
          							  case 1:
/*<470>*/ 								printf(/* textboxtype: 2, unk: 0, line: 107 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Wenn du die\nEinstellung der Aurasuche ändern\nmöchtest, sprich erneut mit dieser\nPerson.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x000a0a09>Ha ha! Das verstehe ich. Du hast genug\nDinge zu erledigen, nicht wahr?\n\n\nAber manchmal schadet es nicht, sich\nvon Zeit zu Zeit auch einer anderen\nAufgabe zu widmen.\n\nAuch der größte Held braucht eine\nVerschnaufpause, vergiss das nicht!")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "Wie dem auch sei... Die Insel der\nGöttin ist verschwunden!\n\n\nIch traute meinen Augen nicht, als ich\ndieses gewaltige Licht erblickte.\n\n\nDoch mir ist bewusst, dass alle deine\nTaten nur dazu dienen, unsere Zelda\nzu retten. Der Direktor hat mir alles\nerzählt.\nIch bitte dich, rette Zelda für uns!")
          							flw_116:
/*<116>*/ 							printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00000013>Ähem, übrigens... Ich hätte eine Bitte\nan dich. Würdest du mir zuhören?\n\n\nDu weißt es bestimmt bereits, aber ich\ngelte hier im Wolkenhort als so etwas\nwie ein Experte für Pflanzen.\n\nNun, im Grunde habe ich mir diesen\nTitel selbst verliehen...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x00000001>Oh, da bist du ja, <heroname>!\nKonntest du mit Narisha sprechen?\n\n\nOh, das ist ja großartig! Du besitzt\nwohl tatsächlich etwas, das dich von\nuns unterscheidet, nicht wahr?\n\nDu und dein roter Wolkenvogel, ihr\nbeide werdet bestimmt jedes Abenteuer\nerfolgreich überstehen!\n\nAber vor dir liegt noch ein sehr\nsteiniger Weg. Bleibe stark!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x00000001>Oh, du bist es, <heroname>.\nHast du einen Moment Zeit?\n[1-]Was ist denn?[2]Nein.")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf(/* textboxtype: 1, unk: 0, line: 135 */ "Also... Ach, vergiss es. Es ist nicht so\ndringend. Ich bin momentan so oder so\nmit der Suche nach der kleinen Kuki\nbeschäftigt.\nDu solltest dich übrigens auch an der\nSuche beteiligen, wenn du Zeit hast.")
          						  case 1:
/*<130>*/ 							printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000009>Hmmm... Dabei hätte ich eigentlich\ngedacht, dass du mir zuhören würdest.")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "Wie dem auch sei... Die Insel der\nGöttin ist verschwunden!\n\n\nIch traute meinen Augen nicht, als ich\ndieses gewaltige Licht erblickte.\n\n\nDoch mir ist bewusst, dass alle deine\nTaten nur dazu dienen, unsere Zelda\nzu retten. Der Direktor hat mir alles\nerzählt.\nIch bitte dich, rette Zelda für uns!")
          						  case 1:
/*<316>*/ 							printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x00000001>Oh, da bist du ja, <heroname>!\nKonntest du mit Narisha sprechen?\n\n\nOh, das ist ja großartig! Du besitzt\nwohl tatsächlich etwas, das dich von\nuns unterscheidet, nicht wahr?\n\nDu und dein roter Wolkenvogel, ihr\nbeide werdet bestimmt jedes Abenteuer\nerfolgreich überstehen!\n\nAber vor dir liegt noch ein sehr\nsteiniger Weg. Bleibe stark!")
/*<317>*/ 							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_18() {
/*<137>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "Die Lieferung ist da! Ein praktischer\n<color red<Windrad-Propeller>coloroff>, bitte sehr!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 121 */ "Ruf mich jederzeit wieder, wenn es\netwas zu transportieren gibt.\n\n\nFür die verehrte Phai fliege ich bis\nans Ende der Welt!")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 151 */ "<0x10009:0x00090011>Oh... Oh! Schau <color blue<Kombu>coloroff> nicht so an!\nKombu wird ganz rot... ")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 119 */ "Die Lieferung ist da! Ein schöner,\nglänzender Kristall, bitte sehr!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 121 */ "Ruf mich jederzeit wieder, wenn es\netwas zu transportieren gibt.\n\n\nFür die verehrte Phai fliege ich bis\nans Ende der Welt!")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>Kuki! Meine Kuki! Wo bist du nur?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ach... Wo ist meine kleine Kuki\ndenn bloß...\n\n\nOh nein... Was mache ich denn nur,\nwenn man sie entführt hat?")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x150e0d11>Oh! Du bist es, <heroname>!")
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 344, 'param3': 47}
/*<344>*/ 	set_camera(14, 0)
/*<342>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 356, 'next': 341, 'param3': 15}
/*<341>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 365, 'param3': 17}
/*<365>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 346, 'param3': 13}
/*<346>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 370, 'param3': 48}
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 100, 'next': 340, 'param3': 14}
/*<340>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_21() {
/*<151>*/ 	start()
/*<166>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 123 */ "Ruft mich wieder, wenn Ihr meine\nHilfe benötigt, verehrte Phai!")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 122 */ "Die Lieferung ist da! Ein seltsamer\nkleiner Kyu, bitte sehr!")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

